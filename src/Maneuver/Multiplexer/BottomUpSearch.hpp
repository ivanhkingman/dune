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

// Local headers
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    struct BottomUpSearchArgs 
    {
      //! Depth threshold to be considered surface
      float depth_threshold;
    };

    //! BottomUpSearch maneuver
    class BottomUpSearch: public MuxedManeuver<IMC::BottomUpSearch, BottomUpSearchArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args pointer to Maneuver's arguments
      BottomUpSearch(Maneuvers::Maneuver* task, BottomUpSearchArgs* args):
        MuxedManeuver<IMC::BottomUpSearch, BottomUpSearchArgs>(task, args),
        m_state(ST_START) 
      { }

      //! Start maneuver function
      //! @param[in] maneuver BottomUpSearch maneuver message
      void
      onStart(const IMC::BottomUpSearch* maneuver)
      { 
        //m_task->inf(DTR("Started BottomUpSearchManeuver"));
        m_task->setControl(IMC::CL_PATH);
        IMC::DesiredPath path;
        path.end_lat = maneuver->lat;
        path.end_lon = maneuver->lon;
        path.end_z = maneuver->z;
        path.end_z_units = maneuver->z_units;
        path.speed = maneuver->speed;
        path.speed_units = maneuver->speed_units;

        m_task->dispatch(path);
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
        {
          //m_task->inf(DTR("Reached Goto"));
          m_task->signalCompletion();
          setState(ST_TRANSITIONING);
          //floatToSurface();
        }
        else
          m_task->signalProgress(pcs->eta); // Todo: Problem here is that the task eta is given by the goto eta, which is not true
      }

      //! On EstimatedState message
      //! @param[in] estate pointer to EstimatedState message

      /*
      void
      onEstimatedState(const IMC::EstimatedState *msg)
      {
        m_estate = *msg;
        switch(m_state)
        {
          case ST_FLOATING: {
            m_task->inf(DTR("Floating..."));
            std::string pitchString = std::to_string(m_estate.theta);
            const char *c = pitchString.c_str();
            m_task->inf(DTR(c));}
            if (m_estate.z < m_args->depth_threshold) {
              m_task->inf(DTR("Reached Surface"));
              setState(ST_DONE);
              m_task->signalCompletion();
              }
            if (m_estate.theta > -5) {
              m_task->inf(DTR("Pitch too high. Enabling thrust."));
              IMC::DesiredPitch dp;
              dp.value = -1;
            }
            break;
          default:
            break;
        }
      }
      */

      ~BottomUpSearch(void)
      {
        m_task->inf(DTR("BottomUpSearch destructor called"));
       }

    private:
      enum State
      {
        //! Starting state
        ST_START,
        //! Going to waypoint
        ST_GOTO,
        //! Floating up to surface
        ST_FLOATING,
        //! When transitioning between states
        ST_TRANSITIONING,
        //! Done state
        ST_DONE
      };

    //! Go to state
    //! @param[in] state transition to this state
    void
    setState(State state)
    {
        m_state = state;
    }

    //! Start floating to the surface
    void
    floatToSurface(void) {
      m_task->inf(DTR("Floating To Surface"));
      IMC::DesiredSpeed ds;
      ds.value = 0;
      ds.speed_units = IMC::SUNITS_RPM;
      m_task->dispatch(ds);
    }

    //! State of state machine
    State m_state;
    //! EstimatedState data
    IMC::EstimatedState m_estate;

    };
  }
}

#endif