//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Calado                                                     *
// Author: Eduardo Marques (original maneuver implementation)               *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_BOTTOMUPSEARCH_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_BOTTOMUPSEARCH_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>
#include <iostream> //TODO: REMOVE


// Local headers
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    //! BottomUpSearch maneuver
    class BottomUpSearch: public MuxedManeuver<IMC::BottomUpSearch, void>
    {
    public:
       //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args pointer to Maneuver's arguments
      BottomUpSearch(Maneuvers::Maneuver* task):
        MuxedManeuver<IMC::BottomUpSearch, void>(task),
        m_state(ST_STARTING)
      { }

      //! Start maneuver function
      //! @param[in] maneuver goto maneuver message
      void
      onStart(const IMC::BottomUpSearch* maneuver)
      { 
        m_state = ST_STARTING;
        m_task->inf(DTR("Started bottomUpSearch"));

        m_desired_pitch = maneuver->desired_pitch;
        m_surface_threshold = maneuver->surface_threshold;

        m_task->setControl(IMC::CL_PATH);
        IMC::DesiredPath path;
        path.end_lat = maneuver->lat;
        path.end_lon = maneuver->lon;
        path.end_z = maneuver->z;
        path.end_z_units = maneuver->z_units;
        path.speed = maneuver->speed;
        path.speed_units = maneuver->speed_units;

        m_state = ST_GOTO;
        m_task->dispatch(path);
                
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_NEAR) {
          m_task->inf(DTR("Reached goto"));
          m_task->setControl(0);
          if (m_state != ST_FLOATING) {
            floatToSurface();
          }
        }
        else
          m_task->signalProgress(pcs->eta);
      }


      // Remove below ---
      //! On EstimatedState message
      //! @param[in] estate pointer to EstimatedState message 
      void
      onEstimatedState(const IMC::EstimatedState *msg)
      {
        m_estate = *msg;

        if (m_state == ST_FLOATING) {
          if (-1*(m_estate.z) < m_surface_threshold) {
            m_task->inf(DTR("Reached Surface"));
            m_state = ST_DONE;
            m_task->setControl(0);
            m_task->signalCompletion();
            }
        }
        return; 
      }
    

      ~BottomUpSearch(void)
      { }

      private:
        enum State
        {
          //! Starting state
          ST_STARTING,
          //! Going to waypoint
          ST_GOTO,
          //! Floating up to surface
          ST_FLOATING,
          //! Done state
          ST_DONE
        };   


      //! Start floating to the surface
      void
      floatToSurface(void) {
        m_task->inf(DTR("Floating To Surface"));
        m_state = ST_FLOATING;
        if (m_desired_pitch != -1) {
          IMC::DesiredPitch dp;
          IMC::DesiredHeading dh;
          dp.value = m_desired_pitch;
          dh.value = m_estate.psi;
          m_task->setControl(IMC::CL_YAW);
          m_task->setControl(IMC::CL_PITCH);
          m_task->dispatch(dh);
          m_task->dispatch(dp);
          m_task->inf(DTR("Enabling pitch control"));
        } else {
            m_task->inf(DTR("No pitch control during floating"));
        }
      }

      //! State of state machine
      State m_state;
      //! EstimatedState data
      IMC::EstimatedState m_estate;
      //! Depth to be considered surface
      fp64_t m_surface_threshold;
      //! Desired pitch for the pitch control loop during float-stage
      fp64_t m_desired_pitch;

    }; // Ends class
  } // End Multiplexer namespace
} // End Maneuver namespace

#endif