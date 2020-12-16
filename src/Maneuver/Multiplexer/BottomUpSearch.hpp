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

        //! Get member variables from the IMC message
        m_desired_pitch = maneuver->desired_pitch;
        m_surface_threshold = maneuver->surface_threshold;
        m_rpm = maneuver->burst_rpm;
        m_thrust_duration = maneuver->thrust_duration;
        m_pitch_threshold = maneuver->pitch_threshold;

        //! Set path parameters        
        IMC::DesiredPath path;
        path.end_lat = maneuver->lat;
        path.end_lon = maneuver->lon;
        path.end_z = maneuver->z;
        path.end_z_units = maneuver->z_units;
        path.speed = maneuver->speed;
        path.speed_units = maneuver->speed_units;

        //! Initialize other control messages
        m_dp.value = m_desired_pitch;
        m_ds.value = m_rpm;
        m_ds.speed_units = IMC::SUNITS_RPM;

        //! Start the goto phase
        m_state = ST_GOTO;
        m_task->setControl(IMC::CL_PATH);
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

      //! On EstimatedState message
      //! @param[in] estate pointer to EstimatedState message 
      void
      onEstimatedState(const IMC::EstimatedState *msg)
      {
        m_estate = *msg;
        if (m_state == ST_FLOATING) {
          //! Check if vehicle reached surface
          if (-1*(m_estate.z) < m_surface_threshold) {
            m_state = ST_DONE;
            m_task->inf(DTR("Reached Surface"));
            m_task->setControl(0);
            m_task->signalCompletion();
            }
          //! Check if vehicle should enable thrust
          if (m_estate.theta < m_pitch_threshold) {
            m_state = ST_THRUSTING;
            m_task->inf(DTR("Started thrust"));
            m_task->setControl(IMC::CL_SPEED);
            m_task->dispatch(m_ds);
            m_timer.setTop(m_thrust_duration);
          }
        }

        if (m_state == ST_THRUSTING) {
          //! Check if vehicle should disable thrust
          if (m_timer.overflow()) {
            m_state = ST_FLOATING;
            m_task->inf(DTR("Stopped thrust"));
            IMC::DesiredHeading dh;
            dh.value = m_estate.psi;
            m_task->setControl(IMC::CL_YAW);
            m_task->setControl(IMC::CL_PITCH);
            m_task->dispatch(dh);
            m_task->dispatch(m_dp);
            m_timer.reset();
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
          //! Speed control
          ST_THRUSTING,
          //! Done state
          ST_DONE
        };   


      //! Start floating to the surface
      void
      floatToSurface(void) {
        m_state = ST_FLOATING;
        m_task->inf(DTR("Floating To Surface"));
        m_use_thrust = true;
        if (m_use_thrust) {
          m_task->inf(DTR("Floating with speed control enabled"));
        }
        if (m_desired_pitch != -1) {
          IMC::DesiredHeading dh;
          dh.value = m_estate.psi;
          m_task->setControl(IMC::CL_YAW);
          m_task->setControl(IMC::CL_PITCH);
          m_task->dispatch(dh);
          m_task->dispatch(m_dp);
          m_task->inf(DTR("Enabling pitch control"));
        } else {
            m_task->inf(DTR("No pitch control during floating"));
        }
      }

      //! 
      IMC::DesiredPitch m_dp;
      IMC::DesiredHeading m_dh;
      IMC::DesiredSpeed m_ds;

      //! State of state machine
      State m_state;
      //! EstimatedState data
      IMC::EstimatedState m_estate;
      //! Depth to be considered surface
      fp64_t m_surface_threshold;
      //! Desired pitch for the pitch control loop during float-stage
      fp64_t m_desired_pitch;
      //! Flag for enabling thrust control during float-stage
      bool m_use_thrust;
      //! RPM-value while floating
      float m_rpm;
      //! Lower limit for when thrust burst should be activated
      fp64_t m_pitch_threshold;
      //! Thrust duration
      uint16_t m_thrust_duration;
      //! Timer for thrust duration
      Time::Counter<float> m_timer;

    }; // Ends class
  } // End Multiplexer namespace
} // End Maneuver namespace

#endif