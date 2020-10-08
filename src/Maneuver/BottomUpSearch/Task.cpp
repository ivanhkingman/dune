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
// Author: Ivan Kingman                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  //! Steers vehicle from the bottom up to the surface
  //!
  //! Insert explanation on task behaviour here.
  //! @author Ivan Kingman
  namespace BottomUpSearch
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        war("Hello World from BottomUpSearch constructor");
        bind<IMC::CustomManeuver>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }

      //! Respond to custom maneuver message
      void consume(const IMC::CustomManeuver* msg) {
        war("Recieved Custom maneuver: "); war(msg->name.c_str());
        if (msg->name == "BottomUpSearch") {

          // Todo: Make method of this called: Generate goTo-message:
          // Note to self: This message is just an example, fields should be filled in according to fields of custom message
          IMC::Goto goTo;
          goTo.setDestination(30);
          goTo.setDestinationEntity(255);
          goTo.timeout = 1000;
          goTo.lat = 0.72;
          goTo.lon = -0.15;
          goTo.z = 2;
          goTo.z_units = 1; // depth [m]
          goTo.roll = -1; goTo.pitch = -1; goTo.yaw = -1;
          goTo.speed = 1000;
          goTo.speed_units = 1;

          dispatch(goTo);
          // Wait until goto succeeds: Monitor? ReturnMessage from Goto?
          
          // Disable motor
          // While depth less than threshold
            // Maximize pitch,
            // Minimize velocity
          // When threshold reached, maneuver is over

        }
      }

    };
  }
}

DUNE_TASK
