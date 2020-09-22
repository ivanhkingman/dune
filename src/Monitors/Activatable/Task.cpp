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

namespace Monitors
{
  
  //! Activates by default and deactivates upon receiving a fixed ammount of announce messages.
  
  //! @author Ivan Kingman
  namespace Activatable
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      unsigned int limit;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Announce Message counter
      unsigned int m_counter;
      //! Task Arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_counter(0)
      {
        param("Announces to print", m_args.limit)
        .defaultValue("5")
        .description("Number of announce messages recieved to deactivate task");
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER,
                    true);
        bind<IMC::Announce>(this); 
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

      //! Announce callback.
      // TODO: Code refactioning to improve readability
      // TODO: Change prints to appear on single line
      // TODO: Change prints to avoid warnings about variable types
      void consume(const IMC::Announce* msg) {
        m_counter++;
        if (isActive()){
            war("Recieved announce message from "); war((msg->sys_name).c_str());
            std::string s = std::to_string(m_counter);
            char const *pchar = s.c_str();
            war("Announce messages recieved: "); war(pchar);
          }
          if (m_counter == m_args.limit){
            war("Announce message limit reached");
            requestDeactivation();
            if (getDebugLevel() == DEBUG_LEVEL_SPEW) {
                spew("Task is being deactivated");
            };
          }
      }

    };
  }
}

DUNE_TASK
