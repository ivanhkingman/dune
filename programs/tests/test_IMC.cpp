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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: ea521376f44f776f843b4b5374c01b9a                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.707870128165);
    msg.setSource(18625U);
    msg.setSourceEntity(22U);
    msg.setDestination(37076U);
    msg.setDestinationEntity(244U);
    msg.state = 209U;
    msg.flags = 225U;
    msg.description.assign("XTDTLRUHNPWSBAFAHJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.393924017319);
    msg.setSource(50940U);
    msg.setSourceEntity(91U);
    msg.setDestination(54188U);
    msg.setDestinationEntity(254U);
    msg.state = 88U;
    msg.flags = 133U;
    msg.description.assign("OYYIXPDRLQNHELUGPCZPDWBIBHIJMOGUTRVHYQPYSXZSYTHMOADTTZLUXBGAOFPZBVKCPQYCBCKSSZDRWFAHKJGNPTCXRQAPGUWQLEKCTALBNIKYOBVHGYJCDLUVURFOJHXENEWAXRJJRFGDGOMTWFMFNQSMNVQYIOTCHWSWTZVEWAPOLDBGKEJUDALMQGWRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.144023312348);
    msg.setSource(45061U);
    msg.setSourceEntity(172U);
    msg.setDestination(45657U);
    msg.setDestinationEntity(167U);
    msg.state = 127U;
    msg.flags = 190U;
    msg.description.assign("TBWQUUEBVHZWJKEYSFWOTQFAO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.806609381557);
    msg.setSource(57870U);
    msg.setSourceEntity(244U);
    msg.setDestination(41124U);
    msg.setDestinationEntity(41U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.257619066181);
    msg.setSource(59932U);
    msg.setSourceEntity(73U);
    msg.setDestination(51159U);
    msg.setDestinationEntity(23U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.716688407397);
    msg.setSource(34568U);
    msg.setSourceEntity(172U);
    msg.setDestination(42710U);
    msg.setDestinationEntity(113U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.346343052584);
    msg.setSource(62561U);
    msg.setSourceEntity(52U);
    msg.setDestination(11643U);
    msg.setDestinationEntity(37U);
    msg.id = 125U;
    msg.label.assign("XWYIDZQLNMHKSDWPPUJQCBBCNDZAFKFPXVITSWBUL");
    msg.component.assign("JKITDQJXZQBUGTHOFGPRLZNOBHVIWKVPNCVHSNONTXAAYYBIEEULMXFLYMOOPRVEJNJHPMCYJLJTKKKTFUPPMUGZGSSQZEDSAPQORZWROGEWKJQIVCHTHLTSRBKKSLVFEYOFWFRLSQQATEKDNPUCWMUGQRMFBIUAOTZMYWJHIUXYXDPISXVLWVIMSCDMGDAIW");
    msg.act_time = 15429U;
    msg.deact_time = 19881U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.108252517195);
    msg.setSource(16740U);
    msg.setSourceEntity(155U);
    msg.setDestination(30051U);
    msg.setDestinationEntity(81U);
    msg.id = 76U;
    msg.label.assign("CVLMZVWWYASJPFNTWTKUOKANVIFVWXFBKJNVLZZYAMGPVSZHTCUKTHTHAOTLLEKSQJZMIOCGQKZBDXZATLVRSWCPMAIAUDQIXKPVWNIJFNJOZCIMYJYDHBS");
    msg.component.assign("DVJVTNHSPDSBQVWODEKRQTQINJLURDOJIDYBNFRXNSJCTFJVBGGYYKGSMJYTBEQYUHOHZFHRIMCJLFXVPQGEKBSCYCCATBCNFLNOJFDQMYIKPRUAAZZLVZOUEKWQXSXSWUENPIEMINHYWEZNGHZKSKALHVBXMVAULYEGEYLABPOCPOCMIWXSMGAIGUBM");
    msg.act_time = 57308U;
    msg.deact_time = 47290U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.198201232358);
    msg.setSource(25927U);
    msg.setSourceEntity(16U);
    msg.setDestination(18123U);
    msg.setDestinationEntity(247U);
    msg.id = 131U;
    msg.label.assign("EHWWQPUFTJNWIXVJCQRGJSDHPAHWLDRUSVXKCZCJMCGCJLINETTDBADXSVSWFMCVAQALQYLRRNVGLWVEPYGKDBLMUTEFIMKSUHMLFVKINGHAEZVDQGJEFZM");
    msg.component.assign("GUFNCHZVAJMTINETKEWRUGCRSTXEZAPSWRCZTKBKQQADEKFFQHBVUWVALEBOBQRYIBZMYVCOQWUMALQQLWEDJYGMNHTMZTOYACXMJZNNMWVVKMEPLLRBQCLEDESKVDHJYXKHDFFBLIYPJSXPMWXFBDWYJOTPBGXCBHCHJSNWXJFQFDYOPOYZVHLUS");
    msg.act_time = 51006U;
    msg.deact_time = 7261U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.207423035998);
    msg.setSource(20845U);
    msg.setSourceEntity(143U);
    msg.setDestination(32691U);
    msg.setDestinationEntity(136U);
    msg.id = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.441121213843);
    msg.setSource(331U);
    msg.setSourceEntity(72U);
    msg.setDestination(7899U);
    msg.setDestinationEntity(115U);
    msg.id = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.320707711378);
    msg.setSource(8292U);
    msg.setSourceEntity(169U);
    msg.setDestination(23060U);
    msg.setDestinationEntity(4U);
    msg.id = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.648901746739);
    msg.setSource(12128U);
    msg.setSourceEntity(71U);
    msg.setDestination(46609U);
    msg.setDestinationEntity(5U);
    msg.op = 3U;
    msg.list.assign("MYBLDKGPZVISLHCQFIFZEFHWKJWTJRQJNABSTVAVFMAQUJNGQYPAIZXUUDQBHFROMSMBDCOLSTRYZKYUWIWZRYSSTINKVOQIXGUZPVUMDRTCQZCOTQJPHDFFCHGXDFMXVMTDVHTXLMDCOTKPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.698701435824);
    msg.setSource(49027U);
    msg.setSourceEntity(97U);
    msg.setDestination(5778U);
    msg.setDestinationEntity(33U);
    msg.op = 196U;
    msg.list.assign("MSECCMUBNJGCDHSJAYOLDKJFMMLRUOEAWNBZFWWVTOKJLQMZSFAHXSBZRMQGJXTUVIXLKXGHSBICPDQLGTEJUYSCFBEYPZAGURRFNDTWVIMJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.477456595004);
    msg.setSource(18861U);
    msg.setSourceEntity(75U);
    msg.setDestination(57912U);
    msg.setDestinationEntity(207U);
    msg.op = 80U;
    msg.list.assign("CIUHFZOICJCZNYZGFCVXVLNVBZEPJQZHVAMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.365989885218);
    msg.setSource(43282U);
    msg.setSourceEntity(64U);
    msg.setDestination(8178U);
    msg.setDestinationEntity(79U);
    msg.value = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.628076893406);
    msg.setSource(37652U);
    msg.setSourceEntity(61U);
    msg.setDestination(23680U);
    msg.setDestinationEntity(237U);
    msg.value = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.183032767403);
    msg.setSource(62582U);
    msg.setSourceEntity(205U);
    msg.setDestination(33588U);
    msg.setDestinationEntity(254U);
    msg.value = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.231243128744);
    msg.setSource(44860U);
    msg.setSourceEntity(209U);
    msg.setDestination(27247U);
    msg.setDestinationEntity(141U);
    msg.consumer.assign("BGEQSJQAEWGIGSONODYHGCPRUPEJFKCDHFPGJNCYPWPLFOKIK");
    msg.message_id = 37648U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.843373843249);
    msg.setSource(39476U);
    msg.setSourceEntity(11U);
    msg.setDestination(44172U);
    msg.setDestinationEntity(2U);
    msg.consumer.assign("DKETLYMIZGQUJBYRDFNESAZTMZHSOPMLOTRZBUQYWXFXPIFEMESPOMTJXRIMRLDGJBVCRDGJBAHXMPQFFXFEXGGDZLKAHSEFPNHHSNOWPMJXLBRVRDWMAVZMNQZJCZQOXWFAQYSHGQJUNGPXCWWVKOIHULVEILBCFINYXACGVRGKUYEKLZYSLNSTQLUPBJTEGSATRFKITNWVUIHUABDYVSBTUHCNHVOAODPUDIBDRVCAYNCT");
    msg.message_id = 8910U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.190852546699);
    msg.setSource(41950U);
    msg.setSourceEntity(237U);
    msg.setDestination(30250U);
    msg.setDestinationEntity(150U);
    msg.consumer.assign("YEOIPFIGRZSPFKOKPNTULUVICTSBFGZFEJZXJNBNEQIURCAHBTBSKCKLPLHXMRQXFDZFWGHHVYGQDWVOFYASWLGVAAMOPJDBVEJU");
    msg.message_id = 63462U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.669507766442);
    msg.setSource(28043U);
    msg.setSourceEntity(226U);
    msg.setDestination(53445U);
    msg.setDestinationEntity(240U);
    msg.type = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.449724490253);
    msg.setSource(4774U);
    msg.setSourceEntity(154U);
    msg.setDestination(26100U);
    msg.setDestinationEntity(175U);
    msg.type = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.598948767267);
    msg.setSource(16873U);
    msg.setSourceEntity(136U);
    msg.setDestination(16577U);
    msg.setDestinationEntity(240U);
    msg.type = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.873543346792);
    msg.setSource(14907U);
    msg.setSourceEntity(43U);
    msg.setDestination(52863U);
    msg.setDestinationEntity(113U);
    msg.op = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.00319206150328);
    msg.setSource(63096U);
    msg.setSourceEntity(141U);
    msg.setDestination(65179U);
    msg.setDestinationEntity(196U);
    msg.op = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.625509502547);
    msg.setSource(49857U);
    msg.setSourceEntity(244U);
    msg.setDestination(46458U);
    msg.setDestinationEntity(31U);
    msg.op = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.140565788697);
    msg.setSource(2199U);
    msg.setSourceEntity(212U);
    msg.setDestination(30400U);
    msg.setDestinationEntity(222U);
    msg.total_steps = 4U;
    msg.step_number = 163U;
    msg.step.assign("OOCJIGUAMWMSRLANSUZGDENGIBBATWJGDQZHCWHNGHSQYPXYHEYFTWJWBIMRSSBVEAFYXF");
    msg.flags = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.759243752573);
    msg.setSource(52061U);
    msg.setSourceEntity(74U);
    msg.setDestination(33438U);
    msg.setDestinationEntity(80U);
    msg.total_steps = 218U;
    msg.step_number = 107U;
    msg.step.assign("LGQJWAVUHXXEPGKGBDBKUTPUMIDBQLOPIVVPYGCMBEGRLRAOXRCHKLXHLFNIWQQNMWMFMOBQZYSFZZRSLURGXOOANFDWYETFSNFECIHWVTUKJHTVDNURFFQQACNYWCMASSXYLYUJVJEBJPWF");
    msg.flags = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.622734994738);
    msg.setSource(55872U);
    msg.setSourceEntity(102U);
    msg.setDestination(19962U);
    msg.setDestinationEntity(151U);
    msg.total_steps = 45U;
    msg.step_number = 147U;
    msg.step.assign("BKNVCBNZXIRULDTQLZACOUGFYSJCHLEWZFYDERXOMGVCLPMEVAIYQTIGXHRSROLZDQXLMCMSEWMTPMJLRYQECEDNNZBIWPWVKTEWNSUZJ");
    msg.flags = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.709367229986);
    msg.setSource(29873U);
    msg.setSourceEntity(211U);
    msg.setDestination(44183U);
    msg.setDestinationEntity(24U);
    msg.state = 154U;
    msg.error.assign("JLZVCRHCIQCCKKPOPSJZLFSKXYSIUIBFOZHEIPGOHXIDOFMOGQYTGCMBIDHLDFPWNWGZDAJMQQJTEOVJPKDOZLCYFMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.0302842171103);
    msg.setSource(49703U);
    msg.setSourceEntity(231U);
    msg.setDestination(65235U);
    msg.setDestinationEntity(23U);
    msg.state = 214U;
    msg.error.assign("YBLDMDCZIOHNLQYFLMGNQAHQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.543242281876);
    msg.setSource(6425U);
    msg.setSourceEntity(170U);
    msg.setDestination(38194U);
    msg.setDestinationEntity(158U);
    msg.state = 222U;
    msg.error.assign("ESCRZNZHRIQKXGSJHWTLDZCHCRILEROLSGRWNAFYUBMAIPSBXMXJXEISKPVZKXXFZBUALOFCTHABUOOVBBEKQLEIVUCYLWZKMIQFFDPMGQLSMYHVRGVUZPVSQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.96855355253);
    msg.setSource(25946U);
    msg.setSourceEntity(17U);
    msg.setDestination(31757U);
    msg.setDestinationEntity(243U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.565717323935);
    msg.setSource(373U);
    msg.setSourceEntity(199U);
    msg.setDestination(15334U);
    msg.setDestinationEntity(204U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.454586144922);
    msg.setSource(50278U);
    msg.setSourceEntity(231U);
    msg.setDestination(28729U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.455807649738);
    msg.setSource(52034U);
    msg.setSourceEntity(2U);
    msg.setDestination(2531U);
    msg.setDestinationEntity(233U);
    msg.op = 14U;
    msg.speed_min = 0.110337597829;
    msg.speed_max = 0.65246054883;
    msg.long_accel = 0.814891558683;
    msg.alt_max_msl = 0.290962726864;
    msg.dive_fraction_max = 0.438427946435;
    msg.climb_fraction_max = 0.266465972911;
    msg.bank_max = 0.720931899856;
    msg.p_max = 0.252086003365;
    msg.pitch_min = 0.825738546661;
    msg.pitch_max = 0.546386406319;
    msg.q_max = 0.217607204219;
    msg.g_min = 0.978792152203;
    msg.g_max = 0.212238774445;
    msg.g_lat_max = 0.000168234493661;
    msg.rpm_min = 0.349449624836;
    msg.rpm_max = 0.229789696152;
    msg.rpm_rate_max = 0.479094241017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.145339391588);
    msg.setSource(30305U);
    msg.setSourceEntity(151U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(78U);
    msg.op = 191U;
    msg.speed_min = 0.462451893791;
    msg.speed_max = 0.700700815367;
    msg.long_accel = 0.422315531193;
    msg.alt_max_msl = 0.487588269268;
    msg.dive_fraction_max = 0.461074608915;
    msg.climb_fraction_max = 0.131651391456;
    msg.bank_max = 0.957774205841;
    msg.p_max = 0.395851277496;
    msg.pitch_min = 0.184691823678;
    msg.pitch_max = 0.649817522337;
    msg.q_max = 0.523156465426;
    msg.g_min = 0.762215428459;
    msg.g_max = 0.439606485261;
    msg.g_lat_max = 0.191127880222;
    msg.rpm_min = 0.502685010522;
    msg.rpm_max = 0.476340638285;
    msg.rpm_rate_max = 0.36299542708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.0156484555337);
    msg.setSource(22491U);
    msg.setSourceEntity(195U);
    msg.setDestination(60221U);
    msg.setDestinationEntity(167U);
    msg.op = 162U;
    msg.speed_min = 0.650635366481;
    msg.speed_max = 0.663249116268;
    msg.long_accel = 0.692690935896;
    msg.alt_max_msl = 0.563661357707;
    msg.dive_fraction_max = 0.236993562146;
    msg.climb_fraction_max = 0.823627484471;
    msg.bank_max = 0.482906866655;
    msg.p_max = 0.454499989032;
    msg.pitch_min = 0.570762798609;
    msg.pitch_max = 0.435041640895;
    msg.q_max = 0.685794445103;
    msg.g_min = 0.105964885572;
    msg.g_max = 0.825790367394;
    msg.g_lat_max = 0.918283679273;
    msg.rpm_min = 0.522379915695;
    msg.rpm_max = 0.812344766569;
    msg.rpm_rate_max = 0.262890276225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.830191679881);
    msg.setSource(51277U);
    msg.setSourceEntity(236U);
    msg.setDestination(10456U);
    msg.setDestinationEntity(167U);
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 38U;
    tmp_msg_0.error.assign("ZXHZWNQPZLKUVQODXYYSEMCKWYJYRWDMKTTGAZNXEVALYWMZIKOXINIBXVLPGNGURNTHFSACEQVKXCERRHMTIGKAUGKZCOJJWOBBEAVSSZPJVZNFJCTMNTJTAOCUQICNLEUGBZYVRFWLAWPIWFBCEUQJSJAFUZA");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.413952731381);
    msg.setSource(10671U);
    msg.setSourceEntity(135U);
    msg.setDestination(27435U);
    msg.setDestinationEntity(166U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.584193706256);
    msg.setSource(61747U);
    msg.setSourceEntity(23U);
    msg.setDestination(29657U);
    msg.setDestinationEntity(73U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.518834567211);
    msg.setSource(49784U);
    msg.setSourceEntity(15U);
    msg.setDestination(2344U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.288620378493;
    msg.lon = 0.195088454844;
    msg.height = 0.179264430297;
    msg.x = 0.722057145747;
    msg.y = 0.783368281004;
    msg.z = 0.912058774401;
    msg.phi = 0.921117689436;
    msg.theta = 0.25711199765;
    msg.psi = 0.407995787314;
    msg.u = 0.791525255864;
    msg.v = 0.767525020252;
    msg.w = 0.549225018594;
    msg.p = 0.0182760847912;
    msg.q = 0.11993743245;
    msg.r = 0.0654636655525;
    msg.svx = 0.839847383228;
    msg.svy = 0.686306671539;
    msg.svz = 0.413656432734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.614937056135);
    msg.setSource(20359U);
    msg.setSourceEntity(149U);
    msg.setDestination(34249U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.633720278513;
    msg.lon = 0.26730241967;
    msg.height = 0.637879294682;
    msg.x = 0.219411760326;
    msg.y = 0.104140931606;
    msg.z = 0.581392319657;
    msg.phi = 0.692602145758;
    msg.theta = 0.216988858698;
    msg.psi = 0.978569688537;
    msg.u = 0.643847239665;
    msg.v = 0.605281981075;
    msg.w = 0.433677947546;
    msg.p = 0.808709392171;
    msg.q = 0.580547201498;
    msg.r = 0.798646981651;
    msg.svx = 0.485165659967;
    msg.svy = 0.334908384445;
    msg.svz = 0.997717426871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.0922469133814);
    msg.setSource(34512U);
    msg.setSourceEntity(203U);
    msg.setDestination(25515U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.303091590895;
    msg.lon = 0.706001317266;
    msg.height = 0.750406308352;
    msg.x = 0.715555902552;
    msg.y = 0.680387637935;
    msg.z = 0.522278917351;
    msg.phi = 0.0453983910284;
    msg.theta = 0.652812436097;
    msg.psi = 0.0321511964822;
    msg.u = 0.174908799853;
    msg.v = 0.529670448454;
    msg.w = 0.230569308981;
    msg.p = 0.515473031371;
    msg.q = 0.32230534431;
    msg.r = 0.751314968805;
    msg.svx = 0.324428851854;
    msg.svy = 0.568984324432;
    msg.svz = 0.290491424561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.520062690758);
    msg.setSource(37806U);
    msg.setSourceEntity(187U);
    msg.setDestination(55806U);
    msg.setDestinationEntity(234U);
    msg.op = 57U;
    msg.entities.assign("MPUFNGPLEEPTHJAQYVIXBGETEZIOEUTAMGLMNHABHMZRLDOCWHBWCHVZXRKJVWJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.394478896105);
    msg.setSource(33574U);
    msg.setSourceEntity(126U);
    msg.setDestination(28724U);
    msg.setDestinationEntity(78U);
    msg.op = 44U;
    msg.entities.assign("JRZDDJWSTULNMHXVBROYVIJAZAREQRDEZTIVLWGTYUGEIFVCVPODBSDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.477172878703);
    msg.setSource(63140U);
    msg.setSourceEntity(112U);
    msg.setDestination(33301U);
    msg.setDestinationEntity(121U);
    msg.op = 225U;
    msg.entities.assign("HKYWOIHSYAGNAHPEBFPHYOWTXNCKBOIUZSURZATMIREFMCWFVYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.239941658767);
    msg.setSource(5621U);
    msg.setSourceEntity(73U);
    msg.setDestination(38514U);
    msg.setDestinationEntity(88U);
    msg.type = 114U;
    msg.speed = 31714U;
    const char tmp_msg_0[] = {-101, -42, -114, 15, 92, 85, -94, 7, -96, -118, 59, -113, -14, -82, 119, 52, 22, 82, -101, 52, 83, 21, -77, -6, 50, 116, -18, -34, 29, 25, 27, -84, 119, -73, -98, 104, 19, 116, -73, -17, 82, -125, 45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.618782378832);
    msg.setSource(32747U);
    msg.setSourceEntity(26U);
    msg.setDestination(53935U);
    msg.setDestinationEntity(221U);
    msg.type = 238U;
    msg.speed = 15398U;
    const char tmp_msg_0[] = {-127, 44, -39, -50, 87, 98, 114, 55, 109, 106, 60, 45, 97, 30, 53, 19, 39, -106, -113, -52, -98, -120, 34, -27, 73, -27, -93, -72, -94, -116, 97, 10, -81, -74, -25, 102, -93, 6, -115, 22, 64, 16, -28, 111, 125, -103, -50, 58, -37, -125, -63, -34, 70, -13, 106, 71, -20, -61, -37, 70, -45, -127, 79, -5, -70, -83, 35, 118, -77, -100, 55, 48, 121, -111, 7, 28, -4, -95, -28, 50, -19, 51, -102, -82, 123, -59, -99, -18, -52, -68, 20, -77, 65};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.521569887557);
    msg.setSource(31959U);
    msg.setSourceEntity(9U);
    msg.setDestination(58593U);
    msg.setDestinationEntity(97U);
    msg.type = 138U;
    msg.speed = 24551U;
    const char tmp_msg_0[] = {-66, 80, 16, -70, 60, -93, 53, 33, -5, -14, 50, -106, 99, -37, 51, -44, -9, -98, -117, 32, 124, -104, 15, -79, -28, 5, -117, -24, -69, 14, 21, -56, -50, 72, -43, -63, -19, 123, -121, -124, 119, -40, 35, -20, 115, 93, 66, 30, 123, 5, -107, 3, 90, -59, -67, 56, 103, -50, 57, -92, -64, 68, -35, 110, -24, -81, -84, -62, -14, -113, 120, 90, 74, -101, 57, 71, -24, 95, -3, 91, 101, -49, -112, 91, -5, -6, 36, -33, -74, -120, 125, -119, -61, -84, 28, 70, 114, -11, -104, -8, -30, -1, 97, 82, 33, 70, -25, -18, 76, 37, 52, -25, -60, 3, -30, -32, -128, 43, 120, -4, 1, 110, -89, -73, 89, 42, 53, -50, 76, 39, 114, -101, -100, -94, 75, -69, 35, 87, 96, 88, 16, -19, 66, -27, 16, -30, -41, -122, 98, 10, -118, 77, -58, 43, -41, 85, -37, -5, -80, -117, -40, 5, 57, -61, 34, 49, 68, 106, 114, 105, -90, -112, 33, 49, 64, 85, 66, -3, -28, -119, -48, -110, 75, -118, -78, -128, -38, 35, 37, 103, 6, -40, 16, -85, 61, 41, -9, -67, 91, 4, -34, -27, -73, -51, 50, -14, 15, 100, 13, -110, 31, -83, 38, -70, 119, 15, 79, 87, 12, 53, 43, -5, 65, 96, -114, -83, -90, -128, -93, 122, -107, 2, 89, 112, -82, 123, 52, -118, -79, -72, -4, 55, -12, 117, -108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.671688147659);
    msg.setSource(43203U);
    msg.setSourceEntity(223U);
    msg.setDestination(41363U);
    msg.setDestinationEntity(69U);
    msg.op = 212U;
    msg.tas2acc_pgain = 0.317500391681;
    msg.bank2p_pgain = 0.222924174723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.493352073486);
    msg.setSource(51467U);
    msg.setSourceEntity(44U);
    msg.setDestination(17812U);
    msg.setDestinationEntity(16U);
    msg.op = 16U;
    msg.tas2acc_pgain = 0.926340587819;
    msg.bank2p_pgain = 0.719016007821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.363091393799);
    msg.setSource(16545U);
    msg.setSourceEntity(210U);
    msg.setDestination(21976U);
    msg.setDestinationEntity(154U);
    msg.op = 23U;
    msg.tas2acc_pgain = 0.351916992348;
    msg.bank2p_pgain = 0.272761544414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.118714201154);
    msg.setSource(48986U);
    msg.setSourceEntity(32U);
    msg.setDestination(55901U);
    msg.setDestinationEntity(87U);
    msg.available = 2317137480U;
    msg.value = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.220239477829);
    msg.setSource(40312U);
    msg.setSourceEntity(93U);
    msg.setDestination(5013U);
    msg.setDestinationEntity(54U);
    msg.available = 3486460682U;
    msg.value = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.676222940877);
    msg.setSource(53734U);
    msg.setSourceEntity(151U);
    msg.setDestination(47806U);
    msg.setDestinationEntity(217U);
    msg.available = 4005755227U;
    msg.value = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.0204776337563);
    msg.setSource(28783U);
    msg.setSourceEntity(226U);
    msg.setDestination(41541U);
    msg.setDestinationEntity(226U);
    msg.op = 118U;
    msg.snapshot.assign("UWATYCMVWBMP");
    IMC::QueryEntityState tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.925788838567);
    msg.setSource(28593U);
    msg.setSourceEntity(181U);
    msg.setDestination(27557U);
    msg.setDestinationEntity(136U);
    msg.op = 170U;
    msg.snapshot.assign("YCXRBBSHFXPMYVXTLLEPQWKOZWQSMWUKZFMQLCOGZRVQUXHFIBDYXMIUZCMVFIGNAONYYPEDVLWINCTBWHXARMTTITJWEOLKCPJLJSFNWZDFGDGHSGCOEAVLRDHUKVDALNPJWKKCNPMNGIGUTWUYXSZFHITMRPRJEHMODSDHYRQOLQQVYQTRRAPGBKDVJEZNBEPRMQOUTUXKUJSBIYAQFHKNBZFECODXZLIBPUXEJAJTWBAIHZKFYNSSAV");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.042268319737;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.44960667749);
    msg.setSource(8348U);
    msg.setSourceEntity(90U);
    msg.setDestination(27933U);
    msg.setDestinationEntity(172U);
    msg.op = 241U;
    msg.snapshot.assign("BWDIAOYKJANSDQJXAWFDZNVIEWUTGJZLMPCBEEHZXEHJKGHIWGKZWWLNBBLCYIAHYSYRUYOHSRARRRVXFJOMWEXJMMATTTQHSCBHGMGPPPOLKNQDOIQAUIERFXBUREEXNCFGNZLPZMYDNKOMVCVXRNRJFYXFKTTGTTMOOVLPOUJNBDBVQEFQXUERCJKWQ");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.409649918168;
    tmp_msg_0.z_units = 213U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.436821266517);
    msg.setSource(22329U);
    msg.setSourceEntity(251U);
    msg.setDestination(52666U);
    msg.setDestinationEntity(37U);
    msg.op = 32U;
    msg.name.assign("ZGSPMNSKQXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.707870677822);
    msg.setSource(15813U);
    msg.setSourceEntity(75U);
    msg.setDestination(9028U);
    msg.setDestinationEntity(194U);
    msg.op = 128U;
    msg.name.assign("HBLCMZFDCCGADVLRLFRKGXWIBGBUHGNLSPNIYVTMKJIQFYYAHARKIYFTHCTNJVHXIDHMEZWOPNJNWXVKGAUCKIVEXZOCEEGORWFCUBIJJDILOXCLKEHJBBDLDOAOXMJJFTPUMQQQSFSJNQUSOXBDVNIPEWMTZKBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.918161210951);
    msg.setSource(14208U);
    msg.setSourceEntity(76U);
    msg.setDestination(14668U);
    msg.setDestinationEntity(127U);
    msg.op = 17U;
    msg.name.assign("FPSTKIJDCCAHFGNAEWVCIPSNTNDCGOJSXFXTSMTTHWOOTOSGDZQELYRHQFFJIXTMXALNXZQQLOIMBWCJEKWUCUVRCMVJXQKEFKIRVBGDXCYVBBWLOPQYRDTHWRXVZUMZKMPQNJFVRMJHGZBUJHKYEYVLZURHOIWUPOCBZATKBMZRNZSPUIACMXDSWXPGLNJKBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.163020554916);
    msg.setSource(10428U);
    msg.setSourceEntity(233U);
    msg.setDestination(2839U);
    msg.setDestinationEntity(137U);
    msg.type = 14U;
    msg.htime = 0.0240938278029;
    msg.context.assign("IQVPLZUIRVLMDOXQSOKOIAMLESQTMGWMDGZYDMLCICLWLIWPFOHIBBBXKGHSPCSZYRCOQHJFKMBUMVWBDGNULGKUJUVDXKJTUMXZ");
    msg.text.assign("YHMVGMYLGMDJKFFDQCUWCHDUMXRVLTQABVNTSFUNKKFJQJGAMBCLIERZHPOTBSWYGONAHAFWOXCZFFZDTLBYMPCDNWYUUWVOABFWCZFLSRPYVEHDPLEPMQJKQYRAKOVEUVKNSLMXEMOZXRJZMHNDCNKZPSIGQWETPOOSTGIUWZWAIPNAGVUTVZRAXQINKHICFEUDYSZLJIBLRISTSOWTNDEPKGGTUKYYIVIQRXGDEXBCJBRSAP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.958552792187);
    msg.setSource(5699U);
    msg.setSourceEntity(233U);
    msg.setDestination(20227U);
    msg.setDestinationEntity(120U);
    msg.type = 190U;
    msg.htime = 0.00330459326888;
    msg.context.assign("EQMAIQQRBUHNRINJFFOZMDIGPVFDDLSXMHREANVEXFMRVDOLUUGSAMVSPZOSBTLNDJUUQRPHUPXZPHCOEDWHSKJSNECRGGQWZQWOSIKKAAIYKAJCZIKBATKWVEZUMBWLLUIEWNTDOEMXGNJTFJVQRCPKBCVUFJ");
    msg.text.assign("TFSMEWBMIPHZSOINXLUBRLPGMEIFLGOCEIMOJSNKQEPWFVQWBBIAYKZUJHOEPSPHODOINZAHXRADZGENMJFCZJSDOMGXGGQDWUJJVYOSQQKYTIPCFTAYXDRHDEFIBTEWBQKCZURHNVRBBSEUYVYXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.946923514174);
    msg.setSource(18125U);
    msg.setSourceEntity(80U);
    msg.setDestination(43482U);
    msg.setDestinationEntity(207U);
    msg.type = 91U;
    msg.htime = 0.586179175864;
    msg.context.assign("CWHINTAENNZMLIFSMEXLQLABNGGQALFMEMBQRACKONVIANJQKBHUCMXGZGPTPPDDVZYZYJJDAFBLXWRTOOXQSHMTTZQYLKGRHCBAMVWKGVKBFPOWJMVHNFNZOFIOGVEUQTKOPKCWJPUWGXSSRGCHSERMIAMLBLWIUIXKSZGERXVPEBCDBDYQIBUTIHEACRJYYVUCZXZPPUWKUJIDQFLY");
    msg.text.assign("SSCMLODHOTEUZTTWKUXYGNEFLJSMFGPUMMYCRYBPKGVQCDWJBAYDNVKSMBCYFXRSWEIEVYUHLJTLADNUUBXYRQLVNAHMHFXFIUASMXYDHAKXVHQOZPWBCPEGTTITRQROVPEJBFCAKFJCBI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.721655931321);
    msg.setSource(31723U);
    msg.setSourceEntity(16U);
    msg.setDestination(42474U);
    msg.setDestinationEntity(83U);
    msg.command = 240U;
    msg.htime = 0.0962357261699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.121924612027);
    msg.setSource(45844U);
    msg.setSourceEntity(117U);
    msg.setDestination(8256U);
    msg.setDestinationEntity(27U);
    msg.command = 149U;
    msg.htime = 0.0973376152579;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 16U;
    tmp_msg_0.htime = 0.841887734098;
    tmp_msg_0.context.assign("HRJFLBKMERQTHUZZHJGHYPEBVYILQADYWZJFNWAGMFKXTVGNTTCIZXOGIBWULWSEUUGVJQRPFZHJDDCMMNDPATKERBXZETDKDSQPUEGFEUVOTYIWKLTIDOZZSRHNIWVXMCEMNAATAMJQZMWPP");
    tmp_msg_0.text.assign("SUJOGSFOWNMCUBXBNTKBILVTUGMTHGUEECIYLWXURNQHGOVDQDISZHWQNKJGKEMXSDTDBAYXEZNETFYPVHAWJKGJPWYOFORLACDZVQCDUGZCAZOCAAAPVNAZBAPIWWJMPBSJHUIYFMMRJKRDYXVBZBLQGE");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.367166956097);
    msg.setSource(663U);
    msg.setSourceEntity(196U);
    msg.setDestination(7443U);
    msg.setDestinationEntity(87U);
    msg.command = 114U;
    msg.htime = 0.0614055558517;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 191U;
    tmp_msg_0.htime = 0.519888205787;
    tmp_msg_0.context.assign("NYCUNYZUFIAUVUUGREIFTVIHDDCLHKPJMX");
    tmp_msg_0.text.assign("CUGBEFVDYZDASRYZIMBXQOURBBSLXETLODBAWQPDS");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.553484952629);
    msg.setSource(23761U);
    msg.setSourceEntity(118U);
    msg.setDestination(23018U);
    msg.setDestinationEntity(101U);
    msg.op = 46U;
    msg.file.assign("GMESCEOFIEABLQQVWNCFOSXERLBZPVEIITYGCAHIOQVMGZWPIMULUNHRQHUJMVVCOJBSECYRXNKLEYQUXYKBDVPOSLRHSYMTZNUZNXIGXZSDAOSPDJDWMMFUZWCQCAPQFLQJWVDWSVFRKYBGYHMUMKBDEKKFTTTSIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.104991681365);
    msg.setSource(8158U);
    msg.setSourceEntity(149U);
    msg.setDestination(29393U);
    msg.setDestinationEntity(250U);
    msg.op = 27U;
    msg.file.assign("NEDOIPFQHNRYHXVQOXCBBKEILZGDHTXHMTABNIVIMDHKSRCZTKRLOOYHALRELXFPTDJYMXWCHGDOIEKUAWEWKZJNKIAIEGBMSYWBGWDGGAJFSEJVIWOCPBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.0537161718116);
    msg.setSource(19697U);
    msg.setSourceEntity(91U);
    msg.setDestination(25867U);
    msg.setDestinationEntity(145U);
    msg.op = 155U;
    msg.file.assign("TIWCIBDOKKVDZGIAPNVGCEGNEMDGFVRTQCDYMPKSRMBZHHRYNMWKAWLVGLULTHCSYYSAJYQOZQVPHENFHFVBJK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.923062719199);
    msg.setSource(40124U);
    msg.setSourceEntity(76U);
    msg.setDestination(13571U);
    msg.setDestinationEntity(14U);
    msg.op = 82U;
    msg.clock = 0.924088432886;
    msg.tz = 100;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.448621554396);
    msg.setSource(12971U);
    msg.setSourceEntity(231U);
    msg.setDestination(39763U);
    msg.setDestinationEntity(101U);
    msg.op = 24U;
    msg.clock = 0.103093332061;
    msg.tz = 19;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.807969562538);
    msg.setSource(18111U);
    msg.setSourceEntity(181U);
    msg.setDestination(14791U);
    msg.setDestinationEntity(239U);
    msg.op = 85U;
    msg.clock = 0.453724845726;
    msg.tz = 31;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.205256356554);
    msg.setSource(27341U);
    msg.setSourceEntity(0U);
    msg.setDestination(36584U);
    msg.setDestinationEntity(2U);
    msg.conductivity = 0.322378504515;
    msg.temperature = 0.242985227265;
    msg.depth = 0.439944540751;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.912696570943);
    msg.setSource(55934U);
    msg.setSourceEntity(15U);
    msg.setDestination(23319U);
    msg.setDestinationEntity(253U);
    msg.conductivity = 0.135689482909;
    msg.temperature = 0.0272124461373;
    msg.depth = 0.490477744585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.184311172064);
    msg.setSource(16495U);
    msg.setSourceEntity(0U);
    msg.setDestination(42102U);
    msg.setDestinationEntity(67U);
    msg.conductivity = 0.966545761405;
    msg.temperature = 0.15776245874;
    msg.depth = 0.832809722035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.668126187109);
    msg.setSource(12640U);
    msg.setSourceEntity(205U);
    msg.setDestination(5752U);
    msg.setDestinationEntity(205U);
    msg.altitude = 0.305281750119;
    msg.roll = 41377U;
    msg.pitch = 36834U;
    msg.yaw = 7568U;
    msg.speed = -24536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.0373912265069);
    msg.setSource(11502U);
    msg.setSourceEntity(237U);
    msg.setDestination(13875U);
    msg.setDestinationEntity(180U);
    msg.altitude = 0.516859220235;
    msg.roll = 23490U;
    msg.pitch = 4026U;
    msg.yaw = 108U;
    msg.speed = -31167;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.445062496725);
    msg.setSource(26162U);
    msg.setSourceEntity(217U);
    msg.setDestination(29650U);
    msg.setDestinationEntity(209U);
    msg.altitude = 0.653830802112;
    msg.roll = 62828U;
    msg.pitch = 16611U;
    msg.yaw = 7351U;
    msg.speed = -9931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.899363739629);
    msg.setSource(30456U);
    msg.setSourceEntity(64U);
    msg.setDestination(43216U);
    msg.setDestinationEntity(220U);
    msg.altitude = 0.251297576905;
    msg.width = 0.904707079559;
    msg.length = 0.00699879706799;
    msg.bearing = 0.895188355911;
    msg.pxl = 22942;
    msg.encoding = 208U;
    const char tmp_msg_0[] = {-114, -75, 12, 99, -108, 20, -95, 23, 48, 69, 62, -39, -96, 13, -67, 50, 118, 0, 65, -57, 86, -54, 118, 124, 59, -64, 83, 31, 55, 42, 80, -89, 84, -103, 114, -73, 23, -57, 88, 88, -109, -124, -16, 13, 18, -47, -110, 53};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.00157414431549);
    msg.setSource(43514U);
    msg.setSourceEntity(71U);
    msg.setDestination(53838U);
    msg.setDestinationEntity(149U);
    msg.altitude = 0.391726157166;
    msg.width = 0.521721539113;
    msg.length = 0.123327355417;
    msg.bearing = 0.617549170264;
    msg.pxl = 5206;
    msg.encoding = 239U;
    const char tmp_msg_0[] = {82, -70, 41, -23, 45, 107, 62, 102, 20, 99, -41, -88, 96, 68, 35, -31, -58, -61, -72, 104, 1, 83, 0, 90, 2, 71, 33, -75, -68, -71, 108, -33, -121, 62, 35, -17, -67, 71, 101, -48, -128, -47, 14, 13, -86, -93, -116, -92, -125, 108, -108, -122, 120, -111, 68, 15, 116, -16, 2, 39, -64, -82, 18, 117, 63, 65, 78, 61, -104, 89, 105, 19, -41, -108, 58, -54, -18, -75, -22, -39, -51, 13, 73, -29, -2, -123, 62, -107, 66, -89, -62, -58, 27, -67, 24, 55, -69, -35, 89, 4, 11, 104, 102, -97, -21, 103, -39, 6, 99, 121, -49, -125, 41, -96, -76, -91, -121, 57, -87, 111, -111, -56, 93, -126, 3, -23, 1, -26, -22};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.458774554485);
    msg.setSource(24581U);
    msg.setSourceEntity(178U);
    msg.setDestination(37876U);
    msg.setDestinationEntity(69U);
    msg.altitude = 0.09886634525;
    msg.width = 0.79473819522;
    msg.length = 0.998606529619;
    msg.bearing = 0.654149289785;
    msg.pxl = -16583;
    msg.encoding = 146U;
    const char tmp_msg_0[] = {-95, 36, 53, 57, -69, 50, 64, -9, 126, 46, 111, 92, 76, 48, 69, -119, -40, -125, 99, -48, 15, -86, -40, -35, -30, 42, -110, -43, 6, -19, -83, 62, 52, -17, 60, -13, -4, 58, -77, 60, 58, 54, 90, -8, -39, 46, 25, 35, 4, -40, 123, -125, -58, 99, 44, -4, 117, -14, -93, -23, -102, -128, 80, 89, -87, -16, -90, 124, 125, 65, -11, 34, 95, -65, 5, -109, 51, -74, -19, -71, -126, 58};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.509656674988);
    msg.setSource(52681U);
    msg.setSourceEntity(8U);
    msg.setDestination(12723U);
    msg.setDestinationEntity(187U);
    msg.text.assign("JZUSJOSSMNCDUYDUYVDJTQUMZOFHWNATCMAITEXSKYCVMKHRRHLOPNWLVTPCBJCZFRSAOYVYUSXMGZZGXLIPKVFTXUIHGPEROJDAFXXSDGTDFXWZNATDPEGGBKKYHBQIEYZULGKQIMKCCCWEMPQQLQIROBNRXGVOZQHFNUHDUMQBAVQULNPKSVERWAWMZADPFYY");
    msg.type = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.943651566099);
    msg.setSource(58676U);
    msg.setSourceEntity(214U);
    msg.setDestination(43734U);
    msg.setDestinationEntity(113U);
    msg.text.assign("JXMXNOLVHCDSQKYCUORBAKZLWGKLRPXEHYQBZATRDEVWTMXQLJAUIXCEFOJGELPDOWDHOJISVDBMYVVUEYWMLDCLFWJWGNUQWPVPHBUAGTHCKSDSQ");
    msg.type = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.346678446111);
    msg.setSource(51994U);
    msg.setSourceEntity(1U);
    msg.setDestination(46235U);
    msg.setDestinationEntity(115U);
    msg.text.assign("YVKVPYANJLAWXPFFMDIPBOSHQGULTSVOFUFITGXSWMIZJJOZBQQJYTSTURSQCVEPDYRBANGCXDWBNNPYVKILUYGMJGYYFKVKPMNBSJBHMDJHDQUCFLVKGIZMOSLVHJKRFUEXMNMACFYKOBNQXVAGFGJUTBHOJHHIKRAXGBQCCURDXUATRPWWOCHADRWLTIEEPCSZMQEITWQANWEOHWIOXZEGWZMKZQEZIORNKSCDFLNSDLDZ");
    msg.type = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.719520496584);
    msg.setSource(26559U);
    msg.setSourceEntity(143U);
    msg.setDestination(51601U);
    msg.setDestinationEntity(12U);
    msg.parameter = 112U;
    msg.numsamples = 239U;
    msg.lat = 0.723260632782;
    msg.lon = 0.0740644103309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.439187116814);
    msg.setSource(7413U);
    msg.setSourceEntity(199U);
    msg.setDestination(26592U);
    msg.setDestinationEntity(122U);
    msg.parameter = 84U;
    msg.numsamples = 76U;
    msg.lat = 0.846002796613;
    msg.lon = 0.878271664949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.472395573764);
    msg.setSource(39944U);
    msg.setSourceEntity(252U);
    msg.setDestination(64150U);
    msg.setDestinationEntity(229U);
    msg.parameter = 251U;
    msg.numsamples = 12U;
    msg.lat = 0.392872755494;
    msg.lon = 0.370754542259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.697762203436);
    msg.setSource(51062U);
    msg.setSourceEntity(127U);
    msg.setDestination(25191U);
    msg.setDestinationEntity(107U);
    msg.depth = 8377U;
    msg.avg = 0.516040830512;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.256131416503);
    msg.setSource(57700U);
    msg.setSourceEntity(184U);
    msg.setDestination(6056U);
    msg.setDestinationEntity(29U);
    msg.depth = 44496U;
    msg.avg = 0.446397506518;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.243701769839);
    msg.setSource(38384U);
    msg.setSourceEntity(152U);
    msg.setDestination(54729U);
    msg.setDestinationEntity(20U);
    msg.depth = 16193U;
    msg.avg = 0.640190784229;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.0360996487352);
    msg.setSource(48841U);
    msg.setSourceEntity(73U);
    msg.setDestination(8349U);
    msg.setDestinationEntity(73U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.854960189788);
    msg.setSource(49686U);
    msg.setSourceEntity(30U);
    msg.setDestination(62138U);
    msg.setDestinationEntity(4U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.881720106675);
    msg.setSource(43453U);
    msg.setSourceEntity(235U);
    msg.setDestination(64771U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.279164774774);
    msg.setSource(4366U);
    msg.setSourceEntity(99U);
    msg.setDestination(35794U);
    msg.setDestinationEntity(13U);
    msg.sys_name.assign("RCAUWMSPCRFARBFNMHPDCTZUNYORKGXMYIMPYYGYWYWTEHCKXKKPLOATVZQEAUTDZDVJOZTFGOVSJDQFPRIGNIPFRWYZJLEGDNAKHZGACKFPRLSRQDTCWBLOCFUZVZEVVMFXACEHXHVLCRKNXHKSIECBE");
    msg.sys_type = 62U;
    msg.owner = 44682U;
    msg.lat = 0.0344161595355;
    msg.lon = 0.32291559343;
    msg.height = 0.929114002359;
    msg.services.assign("LAOARQDESYQVUWSKPOUD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.842630410923);
    msg.setSource(12293U);
    msg.setSourceEntity(229U);
    msg.setDestination(13605U);
    msg.setDestinationEntity(165U);
    msg.sys_name.assign("DKKEVQAQFQSTQIYTNNTDVVERRFDRQCZCPTFRAKAZRSNSCVI");
    msg.sys_type = 162U;
    msg.owner = 14676U;
    msg.lat = 0.416117387005;
    msg.lon = 0.47811212124;
    msg.height = 0.372686775846;
    msg.services.assign("JUJVUEWGCRSFVPZUWNGQXISTLJSPTYHZJGQONEKXOFOIPQGEKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.6842648423);
    msg.setSource(1882U);
    msg.setSourceEntity(165U);
    msg.setDestination(9823U);
    msg.setDestinationEntity(42U);
    msg.sys_name.assign("VYLYWODIUWCOVMY");
    msg.sys_type = 76U;
    msg.owner = 53223U;
    msg.lat = 0.00249309584578;
    msg.lon = 0.571069857862;
    msg.height = 0.466653469055;
    msg.services.assign("NRNSLAOCHUYEPAVUYVESLAGCTUSFFKPHJDOMIJHLRQPUKBWTOALITKHMGSDGJFFPDPICERLBAMTPWDGNNVJYBRZLQSZJDWVFBRCZEMOSDHMMLWZOGQFADWSZZTZYRUDKYAKTQXCUKVMEEDUGZSWLHJKVRDPMUHGQJENPFAHQZFAIXQIEBWFIBXHXETXXXJY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.53070985169);
    msg.setSource(60712U);
    msg.setSourceEntity(34U);
    msg.setDestination(52010U);
    msg.setDestinationEntity(172U);
    msg.service.assign("SGDRVZVWPQXDOTFTOCUYYFFPONUFRJUKLCQBFXIARGJEHHGIWXAHVKJKVBCDHOKHNFILJGO");
    msg.service_type = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.864456243073);
    msg.setSource(61234U);
    msg.setSourceEntity(226U);
    msg.setDestination(15398U);
    msg.setDestinationEntity(223U);
    msg.service.assign("PYMEQAXHHGSOBRRWXJYAPDWQFUDLBJBPLIDSTBRWLMQTIAEEVGVYCAVKEJRWZIKZBKGOTHZFZTJHHNMTVBPETRIANFQ");
    msg.service_type = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.500055461113);
    msg.setSource(32958U);
    msg.setSourceEntity(158U);
    msg.setDestination(39126U);
    msg.setDestinationEntity(185U);
    msg.service.assign("OPFXEHGWRPBVDOXSJLFPANSMACIOYTGGLNYPJUHJDPAUWARKUGSHQKZLIFCLXHLJQITWLELUGVQFKDEUJBFFNWJSTXDNZCKARGEUIYYVFZXLDCIYFMEZSIRZNOCERTEPXORFAMZHNDQOMBQJDAKOSVQQRNVIMVZWQOLMWNXHHXMJRVWBTHYEBSTAJONXBKRHNAKYQSCMUOSYMUCBWGZEWIIIDTUFKDVPTBVHPTZCMARJWVXYDKQGYGPSB");
    msg.service_type = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.652743835357);
    msg.setSource(22244U);
    msg.setSourceEntity(244U);
    msg.setDestination(43181U);
    msg.setDestinationEntity(203U);
    msg.value = 0.317372897721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.461598573108);
    msg.setSource(63378U);
    msg.setSourceEntity(236U);
    msg.setDestination(35827U);
    msg.setDestinationEntity(37U);
    msg.value = 0.731433020891;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.82288985544);
    msg.setSource(8484U);
    msg.setSourceEntity(165U);
    msg.setDestination(35767U);
    msg.setDestinationEntity(239U);
    msg.value = 0.771074912007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.16416272676);
    msg.setSource(14062U);
    msg.setSourceEntity(245U);
    msg.setDestination(30200U);
    msg.setDestinationEntity(34U);
    msg.value = 0.896733711598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.272269112382);
    msg.setSource(15334U);
    msg.setSourceEntity(3U);
    msg.setDestination(49686U);
    msg.setDestinationEntity(174U);
    msg.value = 0.331129367643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.926028446397);
    msg.setSource(36207U);
    msg.setSourceEntity(134U);
    msg.setDestination(23474U);
    msg.setDestinationEntity(144U);
    msg.value = 0.654660850822;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.505605931842);
    msg.setSource(48746U);
    msg.setSourceEntity(153U);
    msg.setDestination(30302U);
    msg.setDestinationEntity(151U);
    msg.value = 0.0719034321036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.414763050538);
    msg.setSource(5197U);
    msg.setSourceEntity(41U);
    msg.setDestination(19978U);
    msg.setDestinationEntity(178U);
    msg.value = 0.324641781839;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.942904531924);
    msg.setSource(36600U);
    msg.setSourceEntity(178U);
    msg.setDestination(37023U);
    msg.setDestinationEntity(121U);
    msg.value = 0.397297117941;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.951662146574);
    msg.setSource(38192U);
    msg.setSourceEntity(177U);
    msg.setDestination(53736U);
    msg.setDestinationEntity(7U);
    msg.number.assign("INWDBPACJQCLIMTRVHEKTTZCYVMTQQFBXUVLLJNQRPYJKUPNAAYKYPKZRZLRWSIO");
    msg.timeout = 14530U;
    msg.contents.assign("XZPSSAYCJXNGOQIUWDXQTEUAQMWRGUFVJGNQNMFPPYWKJTYXAGSNEQCOWIXMZRASVOIJZHZTQUIXLPBGVSB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.276203929279);
    msg.setSource(19308U);
    msg.setSourceEntity(113U);
    msg.setDestination(4552U);
    msg.setDestinationEntity(244U);
    msg.number.assign("GJKXRYMYKVMQBLJBIGIFOISUYNLNUPMCYGCGOJNUZQHSEGSEJFEFYHLMVAXSQQUTTZPVWHTDYWLGJLIEMDPTACDBKLWSAABNDKREEXTHVZOPYNFQAWDFNGHMKOUBWUCOVCGHHJKZRZLOVWCDRJYHBKUKPICXH");
    msg.timeout = 61366U;
    msg.contents.assign("KSGEXUFWYMCYQZGEBKCLIXJTJVYHCPUXDGZSOOQZRMJYYTKISGJLGMNEACWSCKVKARTUWXJPFBJDGDNFICEHMVYVMLNOYRVDDZIZIKRLOQIGDMHTUFGOLNWFUNXQVJKWHTVQPSFQDAVYCXCFHMRAWUBQHZRSQEBAPRIHBZJLSRGBZRNEEUXXNFQBEAKBYKVDAOPALTTBUFDZO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.694001530512);
    msg.setSource(58396U);
    msg.setSourceEntity(133U);
    msg.setDestination(22145U);
    msg.setDestinationEntity(167U);
    msg.number.assign("SSZXBTKRMFPHCORZRECTYWWLUOVVJHGDACPBLRVPYQHHJRAMYHEXTLGZQJJEYGGLACBCUNACVSVNCNIHXBCFGTSVLAZKRHPYTJMPXQQWIUANSDYQBQPLYRGBSELGKUVDOFPUHAYMIFDOKTFNSQEFYNMMASWBBXWMXFD");
    msg.timeout = 18249U;
    msg.contents.assign("WIZAIOKTHMRMRRTPUOROEQFJCHRRCXDMGNGAKZYDEJFUVICRDTQSFYOECJAPRXTISUMMJUPYSHVCDGHFCKPYQEWOLSCKDDVQQLGFCKWWBEULLHSDAUNHJAJKPVAAIKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.190084491848);
    msg.setSource(13051U);
    msg.setSourceEntity(205U);
    msg.setDestination(52668U);
    msg.setDestinationEntity(85U);
    msg.seq = 2820860213U;
    msg.destination.assign("UEZABBSHYMAWRDUVEOXKBFCFTYCVETWVZLDYYILASQJXNMZPKPRQQPRJR");
    msg.timeout = 17001U;
    const char tmp_msg_0[] = {-73, 11, 100, 73, 9, -57, -10, -70, -3, -59, 9, 89, 71, 5, -5, -2, 51, 77, -74, 5, -112, -5, -125, 38, 38, -111, -2, 90, 51, -53, 56, 94, 57, 9, 0, 8, -113, -16, 56, 61, 98, 98, 9, 12, -73, -88, -28, 19, 75, -9, -110, -12, -97, 67, -101, 31, -110, 80, -58, -41, 31, -55, -32, 41, -68, 55, -54, 75, -91, 95, 12, 101, 46, 118, -103, -51, 30, -24, 70, -112, 112, -127, -121, 95, 9, -108, 79, 42, 38, -51, -99, 87, -25, -18, 58, -63, 19, 100, 38, -1, -7, 50, -121, 103, -50, -46, 122, -30, -30, -51, 75, 1, 35, 117, -97, -45, 21, 82, -108, -36, -112, -23, 54, -19, -26, 10, -20, 81, 24, 108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.0385728934206);
    msg.setSource(48377U);
    msg.setSourceEntity(76U);
    msg.setDestination(47048U);
    msg.setDestinationEntity(110U);
    msg.seq = 3754273537U;
    msg.destination.assign("BFQQDKYKIZCILOEDW");
    msg.timeout = 51155U;
    const char tmp_msg_0[] = {30, -96, 84, -61, 44, -26, -98, 51, -68, 2, -102, 61, 4, -26, 84, -127, -90, -24, -27, 119, 88, -72, -24, -92};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.106559020699);
    msg.setSource(32410U);
    msg.setSourceEntity(111U);
    msg.setDestination(64349U);
    msg.setDestinationEntity(137U);
    msg.seq = 1273840266U;
    msg.destination.assign("DZJMLZXRCCGQBESOKBWYVIPWIDLNQZHXEVOFHDNXITBFDOZVYRHQBRHDZQXRLENSCWLRMDKRQCGUYQGUJEIEUPQGKJJTGYZMISITAHULOPBXHGNSMUFJNYHOFBN");
    msg.timeout = 58210U;
    const char tmp_msg_0[] = {-22, 36, -109, -50, 82, 35, 91, 87, -49, 57, 17, -7, 97, 56, 29, 13, 84, 81, 96, -64, 84, -20, 58, 12, -45, 79, 122, 61, -121, -103, 62, -67, -52, -6, 41, -17, -60, -6, 111, 94, 87, -46, -64, 2, -58, -97, -84, 7, -8, 3, -72, 126, 124, 25, -26, 78, -66, -17, -71, 110, -12, 42, -107, -29, -83, -126, 119, 121, 101, -71, -99, -81, -75, -116, -113, 72, 16, 103, -85, 39, -27, -119, -69, -35, -17, 120, -86, -112, 62, -19, 123, 121, 118, 79, -36, 54, 73, -114, -93, -98, 120, 111, 107, 40, 29, -87, -4, 58, 119, 105, 26, 67, 112, 80, 94, -86, -106, -13, 55, 67, 6, 72, 53, -115, 47, 92, -111, 51, 18, 34, -60, 54, -123, 16, 98, 89, 47, -86, 73, -62, 68, -84, 120, -66, -10, -126, -28, -107, -98, -114, 42, 123, -58, 73, -48, 87, -115, 0, -114, -106, 6, 95, -97, -24, -101, 68, -97, -101, -73, -41, 126, -13, -111, -107, -6, 30, 63, 24, -102, 20, -89, 71, 112, -40, 25, -87, -92, -46, -93, 71, 59, -122, -47, -100, -82, 24, 52, 65, -43, 68, 34, 66, -110, 100, 31, -64, 41, -53, -57, -8, 9, 126, -52, -17, 36, -94, -108, 33, 25, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.115809880177);
    msg.setSource(17601U);
    msg.setSourceEntity(19U);
    msg.setDestination(1929U);
    msg.setDestinationEntity(144U);
    msg.source.assign("JGAKYCNUWWCWJGINMVDBRBCUHUOMJEZIFPEDDKNTFVCEGOPGFQRBKSPPPSFSIMQIHYL");
    const char tmp_msg_0[] = {-29, 94, -56, -114, -55, 72, -26, -53, 126, 26, -93, -69, -117, 77, 84, -106, -19, 40, 88, 26, -81, -17, -34, -42, 87, 90, 66, -41, 5, -51, -8, -68, -121, 111, -43, 75, -105, 44, -25, -30, -78, -71, 71, -50, 96, 9, 32, 14, -14, -77, -92, 31, -123, -47, -124, -15, 56, 46, 81, -98, -29, 27, 97, 75, 63, -27, -112, -91, 27, 40, -44, -127, -103, -105, 116, 45, 45, 10, -51, 121, 9, 108, 69, 60, 7, -76, 120, -40, 116, -53, -99, 8, 10, 5, 45, -57, -73, 1, 74, 110, 2, 4, 40, 27, -25, -115, -111, -38, -63, -36, -79, 42, 78, -127, 39, -43, -9, 77, 97, -59, -28, 66, 27, 60, 20, -24, 23, 107, -33, 38, 120, -97, -76, -88, 88, -25, -101, -27, -19, 90, 43, -119, 91, 98, -72, 79, -124, 80, -6, -59, -63, 124, -81, -82, -116, -85, -22, -104, -115, -73, -56, -109, -122, 110, -97, -69, -16, 110, 53, 66, -17, -13, 117, -13, 51, 30, 60, 99, 25, -4, -41};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.122744120904);
    msg.setSource(24890U);
    msg.setSourceEntity(166U);
    msg.setDestination(26879U);
    msg.setDestinationEntity(15U);
    msg.source.assign("HNCQSATFREIZQCPIJGAACAPZSPWFUCTYSVNGV");
    const char tmp_msg_0[] = {98, 83, -103, 63, -71, -34, -71, -86, 49, -78, -91, 108, -124, 111, 9, -25, -107, 22, -85, 63, 50, 27, -68, 109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.226905313756);
    msg.setSource(29867U);
    msg.setSourceEntity(248U);
    msg.setDestination(22680U);
    msg.setDestinationEntity(24U);
    msg.source.assign("OTGNXZENQTPPFDFOGTSNSVCMFFCAYIUYSHMBSAFLJVMWJOZHDZIAIJGZKGWKCNQKKNYHZXQEHKCMATLTWHWUAPHXMLIJISRWSBXMBECMDGDASLBJQHCUPDWLFXIEYNOFZNKVXRFULTBVYFTATVWJVPEUIVALWRONUPJYECAYHZZOLI");
    const char tmp_msg_0[] = {32, -125, 27, 30, 104, -115, 75, -110, 116, -97, 97, -21, -118, -45, -19, 98, 39, -109, -51, 103, -69, 94, -3, 66, 22, -122, 96, 71, -4, 109, 41, -15, 89, 85, 100, 86, 32, 19, -87, -3, -9, -111, 14, 123, -22, -19, -96, -66, 50, -114, 62, -86, 33, 70, 80, -55, -48, 30, 125, 0, 105, 105, 13, 48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.147595793652);
    msg.setSource(7532U);
    msg.setSourceEntity(231U);
    msg.setDestination(60830U);
    msg.setDestinationEntity(90U);
    msg.seq = 487246389U;
    msg.state = 228U;
    msg.error.assign("EBUFXPXPQNSLWDAGZMZNZOQQOVFJAHZSMLTDXFGNRQLKKMHJYYVDTPACCDCSTYEKIZHNUWUJSVDDMTRNDZLARPQHYFHMUKOPORNBFYWVJEFFKKUMQCSRKUSICWGZLJKTOYNIGJUVXBVQSCVLACBGPXOSVDSENITDIMGUAOQVERQYJASRKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.375966614061);
    msg.setSource(40906U);
    msg.setSourceEntity(153U);
    msg.setDestination(31272U);
    msg.setDestinationEntity(123U);
    msg.seq = 3484522286U;
    msg.state = 6U;
    msg.error.assign("KOXTMGSWCTVDMJDSBXWAFNTCHMYNMAJHPGPBTMLTCVFRXTGBWZCCZGVSMFEFSZLXQUFCCHOWHIKLDFJKIDQZUOILUGMSFXAHUGZGJJXTBWQFNNDIKTQQIAYAFLEDKPRCWXZEZOELCJDJXOAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.644323723105);
    msg.setSource(48590U);
    msg.setSourceEntity(132U);
    msg.setDestination(19333U);
    msg.setDestinationEntity(153U);
    msg.seq = 2353975153U;
    msg.state = 90U;
    msg.error.assign("RBEJBLIXUWDDFFUNVZIXRXSWJYSHZILGSQYEMWXWLBTCCFBFOZKMXDXXNGWIASECYAIGDTVUILZSWKRFQVQABZMHPHTRZOMRIVRPFHOPGUJVLZQPUNNATZCMMATAGQAHKGGENIJQBPRORQMETRKKVTJHDYDYBSGWBJPAVGRHSNBNNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.121370855631);
    msg.setSource(49785U);
    msg.setSourceEntity(33U);
    msg.setDestination(62552U);
    msg.setDestinationEntity(169U);
    msg.origin.assign("FMWLPVFUXSFIBIWYDIBCDKWLKVNHPTOMFLDNZMCNHIWCESAYFUXGRZMRZJXLAFHRWBOJJUKJZDNAOBMHCVTZQYKXSHKQELMCTYLOSYXLWAWQMJDRANZPPXBJNZTBVDQUGHAUQOOVUVEDYKUHGKJGBVFUOTI");
    msg.text.assign("QOSSCNCRYKFJVWUWYKSXRPHXQEHSZPBIOFGZLARVEWRNKIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.543998186057);
    msg.setSource(55516U);
    msg.setSourceEntity(248U);
    msg.setDestination(58441U);
    msg.setDestinationEntity(200U);
    msg.origin.assign("PUOXOEDRLLSCZCCSMXOICPEXTUUIFSKVBIIFOQWAMTCLVMEYMIXHYBQBRBGJPWAKDUWDLWKFBJTYYZAYEYORZMQHSRQLMSWDOGAJYKOWRMEZFJVNIUVMPQRYVEPUNAWWMJHAGGODXTCSERJIRUBVKGTZKAHQKGNQLJHD");
    msg.text.assign("EWYESVPZMBNDXTJZRYEECGOLVNKZAVVGGJFVOTLSVKKKSZITPMWRDBDLJKQXNRLDKGSROSWIAHHEETUUPBODQZCEGGVKBBMQEJXARILRKSQJPKUWTFHLGBXMFFSCOIDFQQXWACLDJLTPSTZRHNWAAOWPJUYJPTDIKQSNPQYHYMLWUSMDZPPNYAFWVOAUDHJICRYHHMYQAUZIFXCJNURQOXMFMXGXNYCNYELEBIZUZBWNGACIOBGCTOTIHFBMRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.491214817021);
    msg.setSource(15582U);
    msg.setSourceEntity(156U);
    msg.setDestination(8348U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("VDNSZDNIVZSLWRNNOFBNUZZOOJFIJTAKUQQQARODJJWFIIVXJVNSUVKOAHMZCBNXKABEJHDAVKFIDMLCWZBXLTNWYMTDTPSLVFLRRLUDRHYEVAHNLCMOSCXUACBDREOOIBDIPCXRYYJMYFFXZEGGGIZ");
    msg.text.assign("HFNFZYXRPZEMHKGUANMFGSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.367815419348);
    msg.setSource(46313U);
    msg.setSourceEntity(76U);
    msg.setDestination(8261U);
    msg.setDestinationEntity(120U);
    msg.origin.assign("WVRRURUCHDICHMZXVVWJDFPFYUJLQPMXNQAZGUSNSYZMZWREJCZQZGLWFZJWVIMB");
    msg.htime = 0.240209698621;
    msg.lat = 0.231536615196;
    msg.lon = 0.181618821388;
    const char tmp_msg_0[] = {70, -65, 26, -56, 106, 116, -69, 123, 41, 60, -77, -118, -99, 11, -36, 106, 79, -61, -114, 24, -69, -22, -126, -77, 91, 106, -42, 66, 1, 50, -126, 84, -118, -84, -41, -43, 70, -127, 62, -2, 54, -122, -35, 100, -42, 1, 71, -73, 80, -14, -64, 35, -23, 126, -16, 36, 89, -59, 57, -100, -126, 105, -81, 2, 13, -32, -103, -80, 122, -42, -100, 28, 107, 16, 5, 48, -88, 37, -42, 105, 51, -17, 113, -75, -63, -17, -111, 10, -91, 41, -58, -60, -10, 85, 29, -74, 1, -79, 53, 92, 94, 103, 75, 58, -84, 85, 74, -112, 78, -100, 74};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.357915685553);
    msg.setSource(64739U);
    msg.setSourceEntity(159U);
    msg.setDestination(25451U);
    msg.setDestinationEntity(221U);
    msg.origin.assign("OYOITGFQFPFMMDQRNXLWCDRPPZHZBXLQSZPKLXLQNHWEBJERASDXFIOENPHVOIMCYWTBYTOIBIUZCBUAFCZYAGZJDNKOGEIHXTRJRFWGSKIPMTNFVVTASHZHEWCWVARXJHYESDMOYUSDNFLAESIRQUXJVOQDXQFGTSYKEKJUDUQX");
    msg.htime = 0.0273566639992;
    msg.lat = 0.690343736964;
    msg.lon = 0.222552793551;
    const char tmp_msg_0[] = {103, -128, 69, -79, 100, -31, 32, -19, 29, 5, -81, -55, 51, 23, -37, -100, 64, 63, 54, -56, 111, 77, -79, -30, -96, 33, 100, 100, -66, 52, -121, 13, 57, -81, -27, 56, 71, -91, -113, -39, 10, -64, -32, 14, 32, 57, 87, 13, -124, -12, -6, -49, 66, -120, -34, -35, -113, -122, 108, 7, 90, 100, 71, 102, 13, -91, -82, -121, -46, 6, -45, -84, -55, -66, 4, -44, 78, 122, 0, -13, 16, -39, -93, -4, -100, 111, 97, 24, -86, 122, -78, 13, 15, 65, 58, 49, -86, -54, 19, 76, 53, -48, 119, -81, 98, -90, 82, -47, 62, -5, -79, 34, -122, 93, 81, 100, -51, -3, 2, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.727535713218);
    msg.setSource(11674U);
    msg.setSourceEntity(2U);
    msg.setDestination(47831U);
    msg.setDestinationEntity(176U);
    msg.origin.assign("YXLJMDDZHCTVOUASFZKCRGXKOJHTFEOGEWNHXPZAMKVAWIOUBTCVKHOELIFPRPRIZTIQRFPGXYPTQSSZ");
    msg.htime = 0.839633253606;
    msg.lat = 0.58326347139;
    msg.lon = 0.670364095034;
    const char tmp_msg_0[] = {121, -69, -49, -106, 99, 89, 39, -126, 63, 9, 106, -88, -60, 86, -45, -41, 62, 5, 23, 68, 105, 22, -89, -116, -32, 92, 67, -84, 94, -75, 117, 64, -121, -27, 82, -105, -41, 30, -6, 67, -31, 117, 7, -116, 16, 64, 49, 93, 49, 63, -79, 67, -101, -122, 9, 71, 74, -113, 84, 125, -119, -58, -35, -71, -114, -113, 14, 87, -46, 23, 52, 41, -97, -124, -59, 44, 51, -43, -5, -102, 100, 31, -84, -50, 92, 80, -46, 119, -123, 69, -117, -11, 29, 61, 11, -92, 108, 84, 13, 100, -4, -79, 48, 20, 121, -112, -19, 7, 40, -31, 22, -73, -116, -84, 104, -100, -128, 47, 39, 8, 17, -117, 36, -11, 88, 108, 41, 18, -100, 9, -55, -56, 35, 71, 48, 47, 97, -64, -110, -27, -17, -15, -39, 60, 115, -8, 57, 7, -98, -18, -16, 71, -9, -71};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.681135496364);
    msg.setSource(59382U);
    msg.setSourceEntity(168U);
    msg.setDestination(30819U);
    msg.setDestinationEntity(37U);
    msg.req_id = 1199U;
    msg.ttl = 9526U;
    msg.destination.assign("ITZSKFUUVCWJQMAFJQEYQUCGFWSTNDYFPTHNFHXZBCZIJRBRVIEIYGYUFFCNRZDAQXOUPMJCTQOEYUOOHKREZVWOXSKPGIMBWRNLJOBZVEIBVNTLDRHNDGGPTKGYEXAMRZPFUDHAYGAYSUGOSVHLANOSWLQJSTMNYPIQQKPPAPXMVVJQIVKEHKMCRSBTTCYCEMOZILTDXMWBKDLWBJBZ");
    const char tmp_msg_0[] = {-19, -97, 64, -52, 28, -69, 53, 114, 59, 96, 22, -6, -104, 11, 34, 54, 60, 77, -110, 37, -91, 52, 46, 39, -93, 42, 105, -114, 114, -61, -128, 30, 105, 53, 51, 60, 107, -93, 36, 109, 42, -107, -32, -44, 39, 9, -54, 21, 66, -40, 112, 87, 19, -94, -90, 49, -9, 40, -86, 116, -82, -94, -23, -95, -60, 9, -127, 44, 88, -126, 29, 75, -17, 79, -96, -103, 89, 110, 10, 15, 5, -39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.0823155877757);
    msg.setSource(30611U);
    msg.setSourceEntity(104U);
    msg.setDestination(44230U);
    msg.setDestinationEntity(30U);
    msg.req_id = 55531U;
    msg.ttl = 52862U;
    msg.destination.assign("BTTAYCKVDPPWEPDQMPXGSBODXQZUJHAATJGBRROEIHPJCCUHVEZYMGQKQNCFLQGSFMSLBQZTDCYAWTVAWFKCHLIWCYAJSZXSOOQKXEQFWFACSADYITLLKMBNRZEIMCZSTMOKNPZDELAJJGUEXSLXJVVRMOQVUPFVEIWHUVWMZZTBFGJKRHNUJJDNEQSIPHAYXDBWXDBFYUIOIYNKUVGRMRLRKGY");
    const char tmp_msg_0[] = {91, 6, -9, 73, 38, -75, 73, -94, 44, 59, 3, -62, -123, -94, -128, -31, 86, -33, -19, 34, -59, -6, 62, -98, -127, -100, 0, 80, 86, -13, 61, 77, 36, 27, -28, 15, 99, -71, 24, -22, 122, -107, -15, -6, 20, 70, 31, -43, 125, 75, -113, -7, -52, -96, -62, 99, 64, -122, -109, -111, -71, -30, -15, 15, -23, 126, -125, -126, 115, -11, -88, 112, 10, -77, -39, 16, 6, 26, -23, 45, -87, -85, 53, 37, 48, -55, -69, -2, -39, -19, 86, 53, 47, -13, 117, -12, 120, 45, -28, -6, 47, 76, -53, -55, -31, 53, -89, 102, -38, 113, -110, -82, -44, 66, -82, 75, 106, -98, 53, -51, 28, 115, 33, -7, -63, 113, 0, -57, -37, -96, -21, -9, 95, 98, -24, 113, 55, 10, 120, -79, -56, 10, -98, -23, 21, -99, 85, 85, -110, 42, -93, 11, -68, -64, 81, 117, 9, -52, 79, -97, -126, -89, -9, -51, 14, 28, 39, 125, 123, -107, -63, 124, 63, 25};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.792154261658);
    msg.setSource(51040U);
    msg.setSourceEntity(103U);
    msg.setDestination(14636U);
    msg.setDestinationEntity(90U);
    msg.req_id = 65427U;
    msg.ttl = 54938U;
    msg.destination.assign("XOKQVFHGKFGCRJEIUKGWVDXIMMJYWWREGZROUEIOATYPMKKXBDFSBDDWTEEKQNCNWXYYNQJMHSFCEAFSUQSPPIARRPGFTCVVHCGACIJPBWTSKUCTKCMOMLXAWYXWBPYHTSSBKMLLXIJ");
    const char tmp_msg_0[] = {-53, 29, -13, -10, -87, 20, 74, 57, -45, -109, 28, -122, -46, -73, 69, -127, -64, 122, -35, -79, 37, 65, 83, 4, 114, 120, -55, 101, -69, 97, 67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.777873583421);
    msg.setSource(34949U);
    msg.setSourceEntity(131U);
    msg.setDestination(12472U);
    msg.setDestinationEntity(181U);
    msg.req_id = 26832U;
    msg.status = 130U;
    msg.text.assign("SCPBFEEWRLTYXHJKOHFAUIGLECLBAQENAVDGUUREIRPJCZQFUFPZWDRADFOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.882216746047);
    msg.setSource(47008U);
    msg.setSourceEntity(14U);
    msg.setDestination(14708U);
    msg.setDestinationEntity(55U);
    msg.req_id = 4885U;
    msg.status = 111U;
    msg.text.assign("HFUUXEEKNQTMEALWYQGRPSWMDAUABDLKCERXGCGITHISNKYJBEIKHBPYTWNNPSERZEKUGPGDJFZTLKSOXOXLSKZYPBBMKTDVXAMHNUTQLGGNHJYVYVZYRNIMYZOCJZARTNVGRFOZVTCRCSHQELIODDHOBOITSFFXBLTHJUPJXHOVFADSISXRIVMVODZEKCGNURBCVPCZVPFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.698938926185);
    msg.setSource(37783U);
    msg.setSourceEntity(226U);
    msg.setDestination(20972U);
    msg.setDestinationEntity(238U);
    msg.req_id = 46172U;
    msg.status = 228U;
    msg.text.assign("FGYYOKJAOMPHIBRSVLCDNZAYRRRAQLEVPWGSSLXWXKGXNWCGOPFTQJYSCHJHEAPWHJSIVMTUPDIZOXSUNQESUAOFWXPBYZZJACUCAEEFLSDNKZRRQTHJYYHWMPOAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.000640670869243);
    msg.setSource(35287U);
    msg.setSourceEntity(213U);
    msg.setDestination(43025U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("MVVTHPHUJCFNWWXECEAKLYSJBMAELSDMEZROODGNQONUUZVFFLHIGVFKIFYGPJQBASUBYCWQCQHTJPX");
    msg.links = 3501995816U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.648750812456);
    msg.setSource(37836U);
    msg.setSourceEntity(30U);
    msg.setDestination(7478U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("MQVPPWCCFC");
    msg.links = 2152863516U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.178977427644);
    msg.setSource(49104U);
    msg.setSourceEntity(133U);
    msg.setDestination(22668U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("AULSWSRCLLFQXLAPGXBZDZDWYXMMQQYXXA");
    msg.links = 3735768481U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.704530198532);
    msg.setSource(42592U);
    msg.setSourceEntity(167U);
    msg.setDestination(25723U);
    msg.setDestinationEntity(175U);
    msg.groupname.assign("KHORAKGKJDKQWMUPCQFZCVORCTYBIBQVEPDTAZZZOQFGHWNVEEHMFYSQQUSHNIYFNMZHLUPOHSYRDMOLAKLNUQRGFUGEIDFIZSOVJAMFXAAJRNJOKPUMUDTVS");
    msg.action = 197U;
    msg.grouplist.assign("TPQOMFBQIHEAMKQJXYIATJXYKIULJOMZOBGGRWKXLRFSODAGTPYDVZJKBDEURIFTZUYTTEWOKGLUQPIHKIKDJXKWMHCBCMUJNIEPZYZDLSOLWGFPAONXHQYVDEALPDOQTZYKXLNJHDNWMMROJENSZEJFVZURPXWEXFXYWQIGJCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.397925147421);
    msg.setSource(51357U);
    msg.setSourceEntity(54U);
    msg.setDestination(3896U);
    msg.setDestinationEntity(11U);
    msg.groupname.assign("XCIPKMSELXAWOZEARGRKEONFCSEGBRZCSAKYMWBZEOXUN");
    msg.action = 151U;
    msg.grouplist.assign("ZBMUXUYTSEMVXRDWHZCHRBDFEGUYJACIKVWNSRQBOSNWUGBYPQIMHDSQYQOIUWDBGYJUYVGMQVSCTAEPIXKSBHEZXPXNWJAFJXDPOLPUYLACOKKBUFCMPKDWNQRVCAVHL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.246853897565);
    msg.setSource(37397U);
    msg.setSourceEntity(197U);
    msg.setDestination(41063U);
    msg.setDestinationEntity(132U);
    msg.groupname.assign("QNWZNASRSOCGLOAYLHDRBOXSTYAHWEJTFLRPDJEIXQKRSVOICYYWVWXBPYGLJVEFAVJKSGJNUSDBDWRPNDEFVYMB");
    msg.action = 153U;
    msg.grouplist.assign("BVBRKNSPPWQWIDISZKRSLNYDKLFTBUTXNPNUYROMVKOLDSJPMAJGZCUJZXTHRUOLTAGHXDNQNIZFQMEEEMABUJJHNUAYCQXYXCMCZPILCFOBEMVHRPBIOIQDIKSZUBMIZZCPAVXFGHDCWFGETLGPSOWAJXJUFKEGDDLYAMPFVMTQUCRXIYRIFTCWYPFREAYHMQRDBTBKUQQNOCWHAYZTXWWALKLLDTGS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.253432692068);
    msg.setSource(26140U);
    msg.setSourceEntity(140U);
    msg.setDestination(16455U);
    msg.setDestinationEntity(133U);
    msg.value = 0.597597488153;
    msg.sys_src = 32154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.747249417979);
    msg.setSource(18830U);
    msg.setSourceEntity(97U);
    msg.setDestination(35641U);
    msg.setDestinationEntity(41U);
    msg.value = 0.884998275637;
    msg.sys_src = 8640U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.998073197517);
    msg.setSource(36060U);
    msg.setSourceEntity(137U);
    msg.setDestination(25900U);
    msg.setDestinationEntity(114U);
    msg.value = 0.345963383085;
    msg.sys_src = 36958U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.941631807191);
    msg.setSource(53111U);
    msg.setSourceEntity(103U);
    msg.setDestination(35071U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0937526403502;
    msg.units = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.0131671490723);
    msg.setSource(19333U);
    msg.setSourceEntity(61U);
    msg.setDestination(43205U);
    msg.setDestinationEntity(34U);
    msg.value = 0.573831585036;
    msg.units = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.663932023126);
    msg.setSource(61675U);
    msg.setSourceEntity(169U);
    msg.setDestination(35006U);
    msg.setDestinationEntity(82U);
    msg.value = 0.357949476196;
    msg.units = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.543761152903);
    msg.setSource(42372U);
    msg.setSourceEntity(71U);
    msg.setDestination(19326U);
    msg.setDestinationEntity(205U);
    msg.base_lat = 0.631243769835;
    msg.base_lon = 0.0449547436616;
    msg.base_time = 0.0799740491219;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 28466U;
    tmp_msg_0.priority = -34;
    tmp_msg_0.x = 11900;
    tmp_msg_0.y = -10168;
    tmp_msg_0.z = -9771;
    tmp_msg_0.t = 8970;
    IMC::EmergencyControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 146U;
    tmp_tmp_msg_0_0.plan_id.assign("ARSKLJBUDLGFWMXYAQZCCQLRCPKTTLRNYVQHFWEDMIXEFYHAOVEPOXEIITJRIYHVWWRV");
    tmp_tmp_msg_0_0.comm_level = 22U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.67993234124);
    msg.setSource(10433U);
    msg.setSourceEntity(91U);
    msg.setDestination(30707U);
    msg.setDestinationEntity(85U);
    msg.base_lat = 0.189424196308;
    msg.base_lon = 0.87749307342;
    msg.base_time = 0.582774868587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.880235218205);
    msg.setSource(41756U);
    msg.setSourceEntity(224U);
    msg.setDestination(32757U);
    msg.setDestinationEntity(148U);
    msg.base_lat = 0.10912754226;
    msg.base_lon = 0.0624022052517;
    msg.base_time = 0.0249216654613;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.976836970409);
    msg.setSource(18881U);
    msg.setSourceEntity(247U);
    msg.setDestination(61078U);
    msg.setDestinationEntity(156U);
    msg.base_lat = 0.116680711075;
    msg.base_lon = 0.194172891262;
    msg.base_time = 0.73517415539;
    const char tmp_msg_0[] = {10, -117, 69, -6, -88, -31, 122, 73, -71, 7, -107, -15, -50, -35, -64, -22, -86, 72, -54, -128, 124, 2, -28, -63, 22, 37, 33, 86, -16, 8, -86, -79, -26, 76, -104, 84, 21, 84, 10, 69, -76, 79, 5, -42, -49, -82, -26, -14, -97, -101, 124, -97, 73, -100, 22, 48, 70, 109, -104, -47, -28, -43, 83, -47, 65};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.749148530471);
    msg.setSource(51351U);
    msg.setSourceEntity(231U);
    msg.setDestination(58955U);
    msg.setDestinationEntity(112U);
    msg.base_lat = 0.718764392271;
    msg.base_lon = 0.678554835589;
    msg.base_time = 0.293824118438;
    const char tmp_msg_0[] = {3, 59, -21, -23, -7, -42, 98, 103, 75, -92, 36, 10, -76, -71, 96, 112, -4, 108, -42, -27, 66, 14, -43, -110, 21, -7, 49, 22, 104, -43, -102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.273869141326);
    msg.setSource(62651U);
    msg.setSourceEntity(68U);
    msg.setDestination(2388U);
    msg.setDestinationEntity(55U);
    msg.base_lat = 0.695937100049;
    msg.base_lon = 0.787067622485;
    msg.base_time = 0.124129361468;
    const char tmp_msg_0[] = {26, 13, 101, -101, -29, 53, 2, -27, 39, 66, -124, -99, 51, -6, -26, -124, 103, -68, 31, 94, 0, -90, -15, -100, -2, -35, 106, -99, -22, -54, -55, -71, 76, -3, -111, -85, -93, 94, -64, 55, -71, -2, 98, -27, -103, -127, 61, -117, 36, -50, 120, -66, 9, -68, -116, -96, 107, 86, -21, 98, 121, 123, -83, -50, 81, 126, 26, -62, -43, -41, 120, 102, 50, -50, 95, -76, 100, 56, 41, 36, 108, -126, -67, -109, -9, 112, 41, -94, 45, 72, 31, 93, 6, -115, 86, 15, -106, 37, 124, -55, 100, 6, 34, 45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.98629608222);
    msg.setSource(5453U);
    msg.setSourceEntity(133U);
    msg.setDestination(1228U);
    msg.setDestinationEntity(43U);
    msg.sys_id = 57554U;
    msg.priority = -83;
    msg.x = 23849;
    msg.y = -25204;
    msg.z = -10792;
    msg.t = 24029;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 197U;
    tmp_msg_0.goal_id.assign("GNMIKBRJFZAPXVJWG");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("SMEZKTCYYWYMRSRWKGIPPJJBKKYBOFBAHXZDMNFMZCHDWAGORMBVPGWCSSWGFMEEMDDQEXXBUCXYDHFNFEXENUZNITTHHWPKSXFSYOUQLCOANLYKWZITJVVRBVTKAECYCQFZVUEUTSGHVVHTSFAHVGIAVAGCGFBEYXLQRFLOJOBWTDNKDLUHYXPCZKRPOIQRWULPOIPZUZOAUA");
    tmp_tmp_msg_0_0.predicate.assign("BZCXLKPUMPFSYEVFCYTCDULKOODIUV");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.230775460226);
    msg.setSource(16295U);
    msg.setSourceEntity(20U);
    msg.setDestination(19709U);
    msg.setDestinationEntity(134U);
    msg.sys_id = 11499U;
    msg.priority = 102;
    msg.x = 22176;
    msg.y = -19411;
    msg.z = 12805;
    msg.t = 19769;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.814605549178;
    tmp_msg_0.ch02 = 0.116863928827;
    tmp_msg_0.ch03 = 0.580910014018;
    tmp_msg_0.ch04 = 0.068058109591;
    tmp_msg_0.ch05 = 0.533768009477;
    tmp_msg_0.ch06 = 0.833373204548;
    tmp_msg_0.ch07 = 0.906067364695;
    tmp_msg_0.ch08 = 0.905514788075;
    tmp_msg_0.ch09 = 0.106964152731;
    tmp_msg_0.ch10 = 0.372699383043;
    tmp_msg_0.ch11 = 0.471522258745;
    tmp_msg_0.ch12 = 0.808911077544;
    tmp_msg_0.ch13 = 0.777221597769;
    tmp_msg_0.ch14 = 0.707324350057;
    tmp_msg_0.ch15 = 0.272082686725;
    tmp_msg_0.ch16 = 0.92361264756;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.87263648956);
    msg.setSource(63481U);
    msg.setSourceEntity(82U);
    msg.setDestination(54754U);
    msg.setDestinationEntity(237U);
    msg.sys_id = 45994U;
    msg.priority = 43;
    msg.x = 31819;
    msg.y = -13448;
    msg.z = -28685;
    msg.t = -22949;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 3663813477U;
    tmp_msg_0.start_lat = 0.301090016358;
    tmp_msg_0.start_lon = 0.00902690910643;
    tmp_msg_0.start_z = 0.217802893968;
    tmp_msg_0.start_z_units = 70U;
    tmp_msg_0.end_lat = 0.631614108673;
    tmp_msg_0.end_lon = 0.443912988094;
    tmp_msg_0.end_z = 0.452081488666;
    tmp_msg_0.end_z_units = 217U;
    tmp_msg_0.lradius = 0.159253082828;
    tmp_msg_0.flags = 203U;
    tmp_msg_0.x = 0.154130035617;
    tmp_msg_0.y = 0.434638499026;
    tmp_msg_0.z = 0.309767807113;
    tmp_msg_0.vx = 0.775730318125;
    tmp_msg_0.vy = 0.94574127677;
    tmp_msg_0.vz = 0.233247929115;
    tmp_msg_0.course_error = 0.950788677859;
    tmp_msg_0.eta = 32425U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.675056741503);
    msg.setSource(18703U);
    msg.setSourceEntity(71U);
    msg.setDestination(33443U);
    msg.setDestinationEntity(59U);
    msg.req_id = 45634U;
    msg.type = 0U;
    msg.max_size = 44313U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.782106636247;
    tmp_msg_0.base_lon = 0.971264686771;
    tmp_msg_0.base_time = 0.408366094192;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 18908U;
    tmp_tmp_msg_0_0.destination = 2107U;
    tmp_tmp_msg_0_0.timeout = 0.265307683808;
    IMC::SystemGroup tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.groupname.assign("BQAMPFNHPVTLGKNUQEOLXAIYHYRJBXTWYUYUVIOWNQQCBCLBBMGTOFADZDAUKZLDSYQUDVSZIRINUGTRBRWLLPKSJVYREMSEAMCFGFWBYHRWQTWVPGOPWQSSFJXQNDNCJXOYIXEEZRVCMKEWVKCLSNTTUHHNXFZCQXIGOJGQDZPZKEHGAHPYOKCSIKCGHTIEUZLXTDUDALMPESJMBMFIMJHF");
    tmp_tmp_tmp_msg_0_0_0.action = 20U;
    tmp_tmp_tmp_msg_0_0_0.grouplist.assign("DNWAKQEXPBQRRPESHHVOANGAKORHJODWOXKWTGOQFIWMOTPJCUGPRYYGEMQLHCLBNXIGYAJCU");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.862112078037);
    msg.setSource(29519U);
    msg.setSourceEntity(49U);
    msg.setDestination(55264U);
    msg.setDestinationEntity(54U);
    msg.req_id = 3662U;
    msg.type = 74U;
    msg.max_size = 6514U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.793646141451;
    tmp_msg_0.base_lon = 0.997215276516;
    tmp_msg_0.base_time = 0.437087631242;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.716882138248);
    msg.setSource(64651U);
    msg.setSourceEntity(247U);
    msg.setDestination(34276U);
    msg.setDestinationEntity(92U);
    msg.req_id = 11474U;
    msg.type = 64U;
    msg.max_size = 25485U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.442254721622;
    tmp_msg_0.base_lon = 0.912012773782;
    tmp_msg_0.base_time = 0.970915001942;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.432719268249);
    msg.setSource(44473U);
    msg.setSourceEntity(162U);
    msg.setDestination(19394U);
    msg.setDestinationEntity(225U);
    msg.original_source = 19498U;
    msg.destination = 46894U;
    msg.timeout = 0.0363986626945;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("JLONKWJKINGIBOHUINUXIRWILXGURSYETLGPEHJJHXAMMEYAPDFKASSCMOTRXKTNVQXIVPKLLZTWHIAACIYSZANHEMFQERLVFDGDKCRIVUWHEQSPOMZZUSJRVHZYWFZVHFW");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.333381904898);
    msg.setSource(360U);
    msg.setSourceEntity(18U);
    msg.setDestination(61454U);
    msg.setDestinationEntity(73U);
    msg.original_source = 51193U;
    msg.destination = 24143U;
    msg.timeout = 0.19014654319;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.924125421639;
    tmp_msg_0.lon = 0.643249602066;
    tmp_msg_0.speed = 0.100768919176;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.duration = 23463U;
    tmp_msg_0.sys_a = 40283U;
    tmp_msg_0.sys_b = 3270U;
    tmp_msg_0.move_threshold = 0.699383598033;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.285326846752);
    msg.setSource(42641U);
    msg.setSourceEntity(50U);
    msg.setDestination(42444U);
    msg.setDestinationEntity(240U);
    msg.original_source = 33686U;
    msg.destination = 44678U;
    msg.timeout = 0.20751137665;
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 54162U;
    tmp_msg_0.destination.assign("WGPWDMXUJRNNQBMGCHMIKHFVPXKRBQFSQUVFZTTLNNPTIOZRZDJXRBOTPRBOEVAYGAGKNVJZUEIFGBOROHAHLBNSSEKRETISVDDVQKFQHGHQSYTZYLWICT");
    tmp_msg_0.timeout = 0.370398142947;
    IMC::FineOil tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0702195503997;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.734539630036);
    msg.setSource(23574U);
    msg.setSourceEntity(197U);
    msg.setDestination(13424U);
    msg.setDestinationEntity(129U);
    msg.type = 238U;
    msg.comm_interface = 36838U;
    msg.model = 6292U;
    msg.list.assign("VIJEUKOJHOXSLVSBKOTCMPKUDKEDXGISKBOJTGQVIBPVOZZVPPAGAGZOUJFINYQZGOXXRRUDCFUTCUSWNCTEHNOBUEFSWHKTPYDJBWNGAJLTLQMRBZDIYTFLWGLYTAHEMDZLBSSZTMFEDZYECOHFUHANAMHARNRKPVRMMBTGGQWRPJPYVJBMMDAACMXEGRQZXVJLDPBJHFQUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.0925315893237);
    msg.setSource(17181U);
    msg.setSourceEntity(41U);
    msg.setDestination(6832U);
    msg.setDestinationEntity(137U);
    msg.type = 248U;
    msg.comm_interface = 61033U;
    msg.model = 29454U;
    msg.list.assign("TESBMCRFVEEXAFOTTW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.954963126009);
    msg.setSource(4228U);
    msg.setSourceEntity(148U);
    msg.setDestination(3095U);
    msg.setDestinationEntity(120U);
    msg.type = 221U;
    msg.comm_interface = 20152U;
    msg.model = 12292U;
    msg.list.assign("CCPTRUSZAIIUAYLCLJREXLJUAHPQQPCAWXFYOLDAFHSVYKMEDUTNYZQUNCMEBCWBEVVPSVZAHCURUJKKVFOODTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.210653737594);
    msg.setSource(43864U);
    msg.setSourceEntity(186U);
    msg.setDestination(58328U);
    msg.setDestinationEntity(28U);
    msg.type = 24U;
    msg.req_id = 1869734384U;
    msg.ttl = 37920U;
    msg.code = 118U;
    msg.destination.assign("BFFTHCNGWKEMIQFRJZVTHVBHNQITYHLQRPMKSZZJVDJ");
    msg.source.assign("OUGRIPYCECBOUHKPNADBAZJFDCXNMLZSGOFUSJBERTFFYKRYQXDCQAQNYFOIWGJKPUKMIJAIDHHNIDVWPEBWOOGUI");
    msg.acknowledge = 107U;
    msg.status = 38U;
    const char tmp_msg_0[] = {-25, 8, -14, -115, -113, 15, -35, 6, 31, -19, 72, -51, 38, 68, 126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.315633194462);
    msg.setSource(53683U);
    msg.setSourceEntity(149U);
    msg.setDestination(16859U);
    msg.setDestinationEntity(254U);
    msg.type = 37U;
    msg.req_id = 2732207736U;
    msg.ttl = 24473U;
    msg.code = 21U;
    msg.destination.assign("YNCMOKSQKIXIHUWBSQGPBHXRFCRFJTMNSZADEZXSDUDUWIGEVJLTCGEKWPLERHTRKABYYVGGPNBMAZYVSYQJCWN");
    msg.source.assign("BJERSHYYFRLKGRVSQPJRYUAXAGGEPPAHXVGOCPFBPLMCFWVKOYSPCNLIVWFTFELOZZSQBMHFTHXFQMOKYQFEIDVLTDHASDJMHUNJDNKNIPUSDCRJZTMOUWYWWRQSRURTQRMLVLIGUGDDOKZFQBDKIAWIOMCTXIPHBCNNUAVCKWMWUXJGJXNGMZEAKBSEGLKVZFAUZOQHMZTKXCEPDQXAHYBYNLTCTIXRBAIJJZVNDNS");
    msg.acknowledge = 224U;
    msg.status = 250U;
    const char tmp_msg_0[] = {-81, -12, 8, -105, 19, 98, -57, -106, 56, -16, -72, 50, 0, 15, -120, -63, -65, 22, 49, -22, -27, 124, -126, -128, 67, 37, 62, -70, -99, 86, 66, 118, -65, -115, 61, -64, -14, 48, 75, 74, 98, 90, -88, -49, -69, 18, 97, -17, -94, -92, 79, -71, 56, -38, -121, -70, -105, -118, 8, 89, 27, 34, 61, -89, 95, 99, -80, 2, -72, -70, 51, 73, 23, -70, 66, 103, 67, 105, 51, -89, 81, -85, -74, 39, -98, -67, 6, 116, -68, 66, -75, 17, 80, -90, 13, -12, -22, 1, 88, -3, 71, 6, -44, -118, -92, -10, 8, -121, -92, 32, 103, -69, 38, 32, -80, 81, -12, -32, -94, -13, 95, 58, 38, 68, -93, 111, 94, 101, -2, -54, -59, -25, -33, 125, -95, -9, 109, 32, -84, -44, -101, -37, 31, 114, -118, -93, -21, 23, -116, 106, -47, -128, -94, 114, -118, -87, 67, 93, 28, 82, -63, 103, 125, 27, 5, 17, 91, -25, 45, 67, -29, -48, 90, -61, -122, -69, 58, -19, -60, 35, -43, 64, 31, -24, -62, 1, -96, 71, 69, 74, -114, -62, -37, -45, 45, -98, 3, -29, 17, -103, 28, 69, -107, 57, -105, 52, 120, -95, 32, -66, 25, -90, 17, 71, -52, 81, 84, 62, -121, -26, 42, -54, -96, 80, -121, 65, -31, 41, 12, -5, -75, 83, 55, 5, 115, 120, -69, 13, 82, 104, 72, -44, 1, 109, -78, 122, 96, 21};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.207306351148);
    msg.setSource(47299U);
    msg.setSourceEntity(102U);
    msg.setDestination(4501U);
    msg.setDestinationEntity(37U);
    msg.type = 98U;
    msg.req_id = 4180268284U;
    msg.ttl = 30760U;
    msg.code = 41U;
    msg.destination.assign("YMJZYKMPMLDNWRDVXSYN");
    msg.source.assign("XYCBSBLXRSORIZJHJUELTDONAIDPKEQOTDMGNYPHCM");
    msg.acknowledge = 126U;
    msg.status = 38U;
    const char tmp_msg_0[] = {8, 73, 105, -3, -2, 120, 121, -19, -122, 65, -26, 35, 19, 26, -44, 45, 69, -55, 84, 99, -63, 96, -31, 125, -57, 39, 44, 58, 60, 2, 107, -28, -94, -87, 99, -96, -16, -25, -10, 24, -2, 46, -67, -81, -52, 47, 95, 2, 104, -128, 56, -102, 0, -92, 39, 18, 72, 20, 106, -52, 112, -118, 89, 43, 74, -113, -64, -65, -123, 111, -84, 110, 99, 81, -18, -52, -109, 73, -58, -77, 81, 69, 79, -82, -47, 113, 121, -58, 47, -52, -48, -20, 28, -126, 103, -71, -43, -38, -20, 28, -18, -70, -71, 65, 84, -109, 78, 39, 57, 9, -61, -23, -9, -55, 34, -126, -3, 69, -78, -119, -55, -116, 76, 41, 75, 73, -114, 112, -15, 94, 30, 104, 111, -13, -127, 43, -97, 46, 71, 105, 60, 84, -85, -82, -4, -77, 81, -115, -2, 11, 61, 94, 18, -79, -105, 82, -93, 10, 105, -57, 73, 89, 10, -25, 91, -43, -100, 46, 19, -74, -48, 99, -100, -55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.869912256829);
    msg.setSource(8283U);
    msg.setSourceEntity(5U);
    msg.setDestination(64601U);
    msg.setDestinationEntity(7U);
    msg.id = 250U;
    msg.range = 0.445183289584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.538856810063);
    msg.setSource(22493U);
    msg.setSourceEntity(98U);
    msg.setDestination(51658U);
    msg.setDestinationEntity(211U);
    msg.id = 77U;
    msg.range = 0.265135261733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.363891357847);
    msg.setSource(48628U);
    msg.setSourceEntity(252U);
    msg.setDestination(24043U);
    msg.setDestinationEntity(27U);
    msg.id = 171U;
    msg.range = 0.51270349713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.574721716338);
    msg.setSource(31631U);
    msg.setSourceEntity(6U);
    msg.setDestination(45098U);
    msg.setDestinationEntity(253U);
    msg.beacon.assign("FLFWGZKIVRCMOCMWSVEYJFXDMJUXNBGMUMUPSEKGRBXQXLIJGPUPTHMTIEUBCPHWCZDMAJDEHLVYQJETLPCDIEWHADACNLNQUTWAPZBFIUJBFBQDSIHHVYNJEFCKPKPRJBLAZLZQUIJZCOQZXRWTTKRNSDYNMAHLVAVNAYHKIEOPKMOOVNLXORZZSFH");
    msg.lat = 0.299076532877;
    msg.lon = 0.276069578042;
    msg.depth = 0.0962422107603;
    msg.query_channel = 225U;
    msg.reply_channel = 168U;
    msg.transponder_delay = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.393459580412);
    msg.setSource(40175U);
    msg.setSourceEntity(139U);
    msg.setDestination(8404U);
    msg.setDestinationEntity(192U);
    msg.beacon.assign("LFIFTMFDGJCVUQNAKETPNBUNBJVVTOCXAHPSDMHXPEGKCJKVYRVPAKUYAWZHGJSBQKTFIQPZYDLZSMRGFWDOWYXKKIITDPEAREBJEQJDZQXJLARWIXLROOGUECNMVJXTREXMEEHQYCSDKMQBPOGFXCVSJRHWIBPIUJ");
    msg.lat = 0.323878561774;
    msg.lon = 0.393705579581;
    msg.depth = 0.851102523768;
    msg.query_channel = 210U;
    msg.reply_channel = 65U;
    msg.transponder_delay = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.0440136666225);
    msg.setSource(7022U);
    msg.setSourceEntity(154U);
    msg.setDestination(12642U);
    msg.setDestinationEntity(139U);
    msg.beacon.assign("KGAZFHDEZBVGMTNKVNLAWMSWEJIRBBLJRNRNJUHTDAHJYKCSOUZWYRHXJRXCDPTSQMCZFBUNNICGSCPDMAEZHKHMJLNFGPUGLMERLKEQVENRBTJPRZIJZVXRQITSTPDEDMHTWUAQLRAUDVEGVCWIOXWNADKLSWKVUYFIQPXHYQLMSBQFLAZJXEKYFYUFJTZKFXOONUPBPMWPSIHSYIVAOCGWSHG");
    msg.lat = 0.0756551501666;
    msg.lon = 0.982432514834;
    msg.depth = 0.166056786188;
    msg.query_channel = 195U;
    msg.reply_channel = 16U;
    msg.transponder_delay = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.481823084746);
    msg.setSource(44132U);
    msg.setSourceEntity(224U);
    msg.setDestination(5595U);
    msg.setDestinationEntity(25U);
    msg.op = 118U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DPTDUKBKDDCCOPIHVCPMPLGARTZNXJLDQJRNFZCBQWBSZFZLMNNGZSAAUJGFGXKTTDRVKGXRAUQJAKCXXBFTMFMEUBYHSMIYNIESGEQTQGWMZNMQTWLKVQBUVOYHEVHHOLILIHLCNPNWWERBEUR");
    tmp_msg_0.lat = 0.694680008117;
    tmp_msg_0.lon = 0.728148767153;
    tmp_msg_0.depth = 0.834132222142;
    tmp_msg_0.query_channel = 189U;
    tmp_msg_0.reply_channel = 70U;
    tmp_msg_0.transponder_delay = 52U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.0403572881599);
    msg.setSource(30868U);
    msg.setSourceEntity(88U);
    msg.setDestination(29103U);
    msg.setDestinationEntity(154U);
    msg.op = 229U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KCCPSLGOBXZXXGWDKU");
    tmp_msg_0.lat = 0.890260588556;
    tmp_msg_0.lon = 0.480064578526;
    tmp_msg_0.depth = 0.0885062214786;
    tmp_msg_0.query_channel = 195U;
    tmp_msg_0.reply_channel = 131U;
    tmp_msg_0.transponder_delay = 26U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.782976338162);
    msg.setSource(61850U);
    msg.setSourceEntity(219U);
    msg.setDestination(42524U);
    msg.setDestinationEntity(14U);
    msg.op = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.538270711429);
    msg.setSource(52520U);
    msg.setSourceEntity(65U);
    msg.setDestination(10581U);
    msg.setDestinationEntity(51U);
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 50117U;
    tmp_msg_0.value = 36U;
    tmp_msg_0.error.assign("PVKJMWLVJXOFUDKLDNHZGHAXXCLMEHPMZVSZBXSNTRFPURCWCTOJSTSYJHFRWQIAFSUUMXSIFGDYJOWEERONSOTYJMQMNVWTKO");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.280516992065);
    msg.setSource(49654U);
    msg.setSourceEntity(169U);
    msg.setDestination(37142U);
    msg.setDestinationEntity(151U);
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.26569759862;
    tmp_msg_0.y = 0.20924916739;
    tmp_msg_0.z = 0.543598762915;
    tmp_msg_0.phi = 0.986153179754;
    tmp_msg_0.theta = 0.536240872519;
    tmp_msg_0.psi = 0.725165107631;
    tmp_msg_0.p = 0.180922633067;
    tmp_msg_0.q = 0.384107423921;
    tmp_msg_0.r = 0.476221576458;
    tmp_msg_0.u = 0.781729434391;
    tmp_msg_0.v = 0.48497903551;
    tmp_msg_0.w = 0.771661894192;
    tmp_msg_0.bias_psi = 0.125204012451;
    tmp_msg_0.bias_r = 0.321233059836;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.583143522129);
    msg.setSource(15438U);
    msg.setSourceEntity(208U);
    msg.setDestination(6479U);
    msg.setDestinationEntity(108U);
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.963703596519;
    tmp_msg_0.reason = 0U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.198371679115);
    msg.setSource(10830U);
    msg.setSourceEntity(171U);
    msg.setDestination(14492U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.354847181363;
    msg.lon = 0.826438907325;
    msg.depth = 0.0656856624695;
    msg.sentence.assign("DCJRBOVEEALQHSSSKNBDLLCXDDXYEMSZXPCNJEKHEFXHSGGAQXNUJARHTDHUEWYPJFAJGBKCMJMOLMZPRNUWQF");
    msg.txtime = 0.671328251026;
    msg.modem_type.assign("UTBZVRZJKWAPMNNNPQMKCUCMDBDSHOLKCSHSWFDCNJZIUGMPIMOJQQLVBOQNVDTHSBQREGADJVEAGOAANYNJDOUSHIDIFR");
    msg.sys_src.assign("IHURSGXHMNJXSHUSPQQQXUYSWBGMGWVILZLFRUCMLRURCMARSIVKLMTPSFAJEKXZCTAEHXLTTVTKHDBNIQOYGHGKZBYRZDEIMFZCODPPALNAYCGPOWQRWOICNEUPVKOBJQIVWFXYAHRDQBEOMJAVXDYUINFNVYPGLMQEOEIERNJDGEBKOTXCKTKSQSSMMJFNDGC");
    msg.seq = 22254U;
    msg.sys_dst.assign("RYIWJKHJQEGEFNGSKTRFOIJAUWDKRWBKXPANWEXNZOBTDCMUUFSUBPVXZVVITY");
    msg.flags = 22U;
    const char tmp_msg_0[] = {-82, 94, 8, 74, -35, 63, -104, 112, 14, -37, 85, -67, -34, -30, 26, -89, -39, -62, -80, 91, 41, -107, -82, -92, -22, 36, -67, -78, 49, -66, 6, -96, -106, 122, 88, -11, -12, -20, -50, -63, 54, 57, -52, 2, -98, 72, 123, 93, 110, 16, -25, -97, -33, -82, 117, -28, -85, -38, 120, 3, 87, 28, -35, -50, -2, 22, -73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.181712224142);
    msg.setSource(29933U);
    msg.setSourceEntity(29U);
    msg.setDestination(27189U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.710121323736;
    msg.lon = 0.340692612427;
    msg.depth = 0.150002157225;
    msg.sentence.assign("ZCJXOCCEJHDICELPBOOFZOLTGZHDMYQQGZVQEDPXTBWLIDBWVBXXRRSLVGGCWYJUSNHEOSEMCUWVEPDNVQQNTQJUTACVLATQDNMAPBMZXKGYBIAVHSGRLGAJPTPLGKYRWARFKRTGEYWMZNCGUNFHLYMPHIKEWEODCTJISBRRSAMTOFPFIAZVQHWUJXDFUIXXSHLOJJMVSRYHUWSOXPDSKYFIIQUMKTZHWMZNKKKNJIBACYLFKDF");
    msg.txtime = 0.146391673559;
    msg.modem_type.assign("QQYEKXZTWFVKOILEBHMBQNTIMDNNUWSAXXNRUMWOYHBGZMGZYARTXWURLFNCYJXKGZDJWOGTDNZGBRKNAXCTIJHYMIZMLZROMDLXSLNMQDWZPBJUVYSCZCSCZAJEMPQRBASUKGBPQINLGBOVJSHGELGPFWVPJVSKYXPEFTIHTKDQDPNUCSSLT");
    msg.sys_src.assign("QYMVIOJRHPSLMEAALNIKWOXGEUCWKEKMPBYRRXOJZVNYGAMZPUCMNZEAANFUVBVTKUPYHGDEADNJFYMWGDFHSTNKZFQTTSS");
    msg.seq = 50046U;
    msg.sys_dst.assign("FTUVCKMMYOJDZNRXEVYNHZCBLLNBSHXITRHQQTYYMVXZZEPYRTASTPXZGBKHSDOMXWHDCZPDACAVBMZCOCXGOSREUBOWWRLUFCXDTJKWCRJPLPGFQXENHCYNYYWSOWLDBEAQFTMIFBPEFIK");
    msg.flags = 204U;
    const char tmp_msg_0[] = {-70, -59, 80, 113, 82, -94, -128, 109, -93, 77, -83, -88, 36, -38, -96, 105, 72, 2, 64, 1, 14, -37, -39, -27, 77, -66, -89, -35, 99, -29, 89, -127, -32, 126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.559566974446);
    msg.setSource(38687U);
    msg.setSourceEntity(84U);
    msg.setDestination(23483U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.15814976333;
    msg.lon = 0.786259588739;
    msg.depth = 0.179269255066;
    msg.sentence.assign("UZSXMWGHLLVIERALSKPQNOLGWGTAONIPMTHBVFHNVNYDPDYOCTMUZKHATSJTYBQKRBUXBVKNWRUL");
    msg.txtime = 0.926592939584;
    msg.modem_type.assign("XECDGIEUXZBYAYRCBXWQLUGDSDQPLFUXEJTVQEWFSEGFKKQEBZRATRFJSSWJACNBMQDMRTNAELKEZCIVWCFFCTJQPVLPRBSAVPDXPJGHUZEVOBOHJBDVDLI");
    msg.sys_src.assign("SUGQDHVOOPCRUXDWFDKNTOVFNGQMZMEPVIHMDWNNTHYYFBCVKZAGUPFZQUDOKXKWPXCIJQMTJWJLWSOSBRIYQWYLBUSRSOGZBXMVJOJTWIKOAXJRHLBRBQVTDMRXAAIMHMJQIGEGPDBDS");
    msg.seq = 20718U;
    msg.sys_dst.assign("XYUHPUKTWBDRHVBLGHIJCYUBETGOIHJNLEVLKRFKRXTPONGFBZPSZWTYTUXSWVOCBCIHRSZWMWXLBLFADRETJAYQJARMKBO");
    msg.flags = 192U;
    const char tmp_msg_0[] = {-70, 75, 6, -115, 46, 85, 21, 66, 1, -98, 15, -125, -30, 14, -122, -80, 82, -60, 53, -99, 5, -61, 119, -113, 84, -40, -126, 101, -44, -63, 44, 31, 18, 68, 42, 8, -9, -11, 105, -57, -41, 57, -15, 101, 30, -35, -51, -40, 119, 8, 67, 70, 9, -33, 28, 83, -95, 55, 42, -49, 126, -44, -60, 97, -29, -18, -92, -35, 11, -18, 125, -55, 15, 49, 118, -92, 27, 112, -128, -83, 50, -34, -33, 94, -100, 23, -21, -120, -18, -73, 27, 89, 50, -3};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(6.54319098672e-05);
    msg.setSource(31512U);
    msg.setSourceEntity(142U);
    msg.setDestination(3766U);
    msg.setDestinationEntity(235U);
    msg.op = 156U;
    msg.system.assign("HJLNVNKKFMKNFDUZEYPKBLAXSRFIQDGJOCNHOSWVULSCSWJUXEYDZFBOPSYFFCUGACSPFHXODJMVOTYGLIVHBJKBUQRHPBNEWWYRFPNOGGMHZUCVUSQGKZCIPHGUUHYQHRATRIJVEVMXJWBDARMXIWMIZRCEBQLFXYEJSVKBETZBMXTZPGYQTCTLJQLAQNQCBDPQAMANZTWYXADKEYIMCOXNDIIPDXDZGRUSWZKJRFPMSER");
    msg.range = 0.0802326807112;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 163U;
    tmp_msg_0.entities.assign("UKYMKAMLTDLXPFDTZZPLUBEUOPWPDTJRZFAQNWTBMEJZKNNABRLRMCCIQZZNXMSFJFSBTVJAILUPJAQMYXMVVGSSLZOSTGHAUQWGFUZOSYXPUDADXGVHUCWHDBDGCZOCKNCSQRKVDWPRTJLOESKBFQWEIJKLBYXYXHENMQFNOVOQIUEYJGYMRELIOHINVCPCHCHIAXRIONHJKM");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.796738864152);
    msg.setSource(32026U);
    msg.setSourceEntity(176U);
    msg.setDestination(18102U);
    msg.setDestinationEntity(122U);
    msg.op = 231U;
    msg.system.assign("MHPPZVBSAHNXORXIXDKMBUYZMWTVDLDSTWLNUPDJHBWKLOQNCCRLUWGAPCGNEGILVIQDEEJOKVZPZASYOEYLVNZDBKRAFKGBZSHXYBDBDNJVJMASFUAXWECAUGLWQCVPNAREESJOPYRCIWIJUDSLHGIITEJTUCUEMKXTKXYFVBGTXPQQMPKQJCGSZTRBQHFOYNSQXHORFMFGWSRLIARZQHMWDIXZLFYPTNZFIOHNJKFKUCCMG");
    msg.range = 0.426112949018;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.192503622487;
    tmp_msg_0.ch02 = 0.286971804731;
    tmp_msg_0.ch03 = 0.460876031847;
    tmp_msg_0.ch04 = 0.902204159065;
    tmp_msg_0.ch05 = 0.72177047063;
    tmp_msg_0.ch06 = 0.498662581534;
    tmp_msg_0.ch07 = 0.612150174173;
    tmp_msg_0.ch08 = 0.476773853372;
    tmp_msg_0.ch09 = 0.734368811684;
    tmp_msg_0.ch10 = 0.930543739062;
    tmp_msg_0.ch11 = 0.666505854544;
    tmp_msg_0.ch12 = 0.334934473318;
    tmp_msg_0.ch13 = 0.428954294791;
    tmp_msg_0.ch14 = 0.399738237277;
    tmp_msg_0.ch15 = 0.31517162428;
    tmp_msg_0.ch16 = 0.955120213083;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.558246070054);
    msg.setSource(63696U);
    msg.setSourceEntity(130U);
    msg.setDestination(9870U);
    msg.setDestinationEntity(15U);
    msg.op = 0U;
    msg.system.assign("LCMXARFBMKMQIMRYYYJRLVPHQTZXLCUEGPFGSFEIQWYZVZYOWCETSZKTPDHXRVEAWKTRPCITUIUGQJDUGAOSUGGVZCWKOBXAACWFNXSGBJNPGXAOSNFIEEOXHP");
    msg.range = 0.744027847581;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.900256702562;
    tmp_msg_0.speed = 0.917736493385;
    tmp_msg_0.turbulence = 0.2310033335;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.652159292841);
    msg.setSource(21272U);
    msg.setSourceEntity(224U);
    msg.setDestination(31272U);
    msg.setDestinationEntity(217U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.832816026163);
    msg.setSource(36289U);
    msg.setSourceEntity(90U);
    msg.setDestination(31930U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.608430426076);
    msg.setSource(17470U);
    msg.setSourceEntity(182U);
    msg.setDestination(2837U);
    msg.setDestinationEntity(44U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.49609230965);
    msg.setSource(58339U);
    msg.setSourceEntity(239U);
    msg.setDestination(40233U);
    msg.setDestinationEntity(82U);
    msg.list.assign("OINUBMLQORNIJSHHOHKEHQBQKYPQRYZZYWDUWPEPWDCPTWRABMBHCYXZVJLRYFGTPANZWXXHXOQXUSCKZFGWVPFILYFZGTSOXOAPVCRTFJJWUQRAFBOYBRMUCRZNPNBJRDBSTMSZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.812978165536);
    msg.setSource(36469U);
    msg.setSourceEntity(9U);
    msg.setDestination(18781U);
    msg.setDestinationEntity(193U);
    msg.list.assign("GQIBHGHKKECBVLJNAZUAFAVDQMJENLFHWVGCZOXJRZGJKZJRTIHECKDBVVOUKHMHETEGKRKCAXREISMLJLNNXNOUVSLBJPAWVYSQZFGIFRFMYEHLWTZZAYKPSZAXDCBWLZDNBSXCMGQAWTPIBYSOTYMOWMKFVAMWSDUTGNYPHKOUZDDQINRYQYMNLVGXXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.337776956773);
    msg.setSource(8914U);
    msg.setSourceEntity(150U);
    msg.setDestination(41375U);
    msg.setDestinationEntity(244U);
    msg.list.assign("FTVFQTNZBWDKWUYRVAEUTPRUANFXJCRJBKJLFZBLPNDGATWFGHKDCOKREQKITQPLAJHONTVRPPGGMDUQQHUGIGZGPAFNKJLFYNEHVYRSWPXDVSXMSZOEFHWJMLIHXIIOPEEFJKLZWXOGRMAWXQVIKYCDUKSZDOLEQCVEJBZURMWACXDEMDBQISHCITZPVHROJOMHYLMSLIAWVTUMBXNRVCHAUSAXCYJSENTYLQBNMBGZYWFDUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.373652276411);
    msg.setSource(19094U);
    msg.setSourceEntity(203U);
    msg.setDestination(25487U);
    msg.setDestinationEntity(146U);
    msg.peer.assign("LEQJSENJCXOOZHWYASPDZTQUFKAERPEYPLMKCQKUCGLKFWVTWHBRWGNQUDVVRBOP");
    msg.rssi = 0.769258175466;
    msg.integrity = 19819U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.99470947525);
    msg.setSource(51500U);
    msg.setSourceEntity(130U);
    msg.setDestination(61633U);
    msg.setDestinationEntity(229U);
    msg.peer.assign("OHKKTOHEFFBQDUJENWMRZWLVQLFGXDVKRTFWEAAWXOMXDJRNTRYHDKSQLECMNJNQCYWXJVRLQEVYGTZZXBCSAZOKSBJKDKMGZZPUANQDONEHLFBZEHJDNPUIIVWVYIQTICGVNIWZSUBXCWSQLHBHLROTYAAUBUCZCGGGPGMTSYNZYPJORPVIIAT");
    msg.rssi = 0.244939481419;
    msg.integrity = 50117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.0366297056058);
    msg.setSource(43061U);
    msg.setSourceEntity(69U);
    msg.setDestination(35217U);
    msg.setDestinationEntity(82U);
    msg.peer.assign("RQJYIQEIVEKHKOMXKGUIMNOKRQSUDDPJYLTAVOQHFUXZGFFBIENUOQDPMJZAPTWDWBUAWRWLNLTGWTCXGUCASZIELPFUJKMRDYVXLCTYMNBQSZXAPXMZBIXUGMSCNJMHCRQAFXWPBFKKBWOJZFLLMVCZLFJKEPHGQEIRBHUNBMTAZIQWNTDJSEDPBYLCOXKEENDHGWSCGPFBRYIYSKDQOVVPYOVZRHGESDRYLORZXASOCVFHVHSNAWICVJ");
    msg.rssi = 0.577738760767;
    msg.integrity = 37605U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.989339674035);
    msg.setSource(8511U);
    msg.setSourceEntity(53U);
    msg.setDestination(28386U);
    msg.setDestinationEntity(62U);
    msg.req_id = 55142U;
    msg.destination.assign("ZKWMVUBIMIPWZXSXPNTECALKYVRAHAYIUMRHWVOQYLIMEZBUDCBGLCJCAEJZQOCSXATQLOVYZWTGENXFZVBJJGRCPKLVZATXJJIKSSOEBROODBGRJVSXAEKTBNGRCQGEYCHGSKXKNEGISENGKSDDWLWRDFPFPYFRMVNLAFO");
    msg.timeout = 0.397285667776;
    msg.range = 0.822107358098;
    msg.type = 57U;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 91U;
    tmp_msg_0.eta = 28453U;
    tmp_msg_0.info.assign("NJIKKUORAKZBLJHSKXJEPDEXQJDLLJEVYZKTYZTCSXGUGOQQWRNVDYQXWAGZFCJHADZSAPNHPABUOMHZNMOWMSEPEXBNIOCRERHPFLCVU");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.544219142681);
    msg.setSource(43549U);
    msg.setSourceEntity(224U);
    msg.setDestination(47888U);
    msg.setDestinationEntity(2U);
    msg.req_id = 59369U;
    msg.destination.assign("MOMGFCQWMYSAUNGVFZSAAWSXQZOEVDBRYMVWRABILKMYFQZOHLBMYWFONCJEZTDPIOCGCNSNRAETEFZRKITFXKUUFSLQZLSMEKSPEJXCUBBPKKRCUGRZQQKTJBMRBGIMWYFHNSWKXHIWVGYQJHGIAQRKUATPUIVMVTOJRHICSDLDFJHEHYVNXEYHOWAODRJPCQLNWVDZXGP");
    msg.timeout = 0.458595601484;
    msg.range = 0.0398825706905;
    msg.type = 143U;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("LSYGTQIOQFVQMDTMPAGLQIHWCSOGBXRVNUTATCFYAZJHNUZFVEZZOXRPYKHICNBXJPJBWSAZMYCCDYBULHICRGRBEFXTNMDUJSIOOXSRXZYTKPCTPZNQCNEPDBMKWEIXFUDSXJBHLWLWVHOWMGNAKWEDGNVDPDWHQZNJSOTEIEEJRMUMQHRRKVZPGGQ");
    tmp_msg_0.data.assign("RRGLKBWKZZCWTECIPUNSSYHBJBLTVUZDITHMWGEAPQCVRHVJGMLGBSDMY");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.65246499943);
    msg.setSource(37928U);
    msg.setSourceEntity(15U);
    msg.setDestination(19534U);
    msg.setDestinationEntity(192U);
    msg.req_id = 46890U;
    msg.destination.assign("VRNPQMRJNTPYAQHGQEUJHVAAUOIBYNFGMPDEZROAABVYZQJXKHEDLNGFCXTUIGJZLCNZGBTMVHAZYPBCFXCVXULPFDBCJXJGPPOOMPCMZQSEQEJKOHXZVFTHAIRUFHBVIPNLBLMGXIOXTDJEUTBPDLWZYSCSREKCSVCASKLYJLBNZDNFWGTT");
    msg.timeout = 0.522649594237;
    msg.range = 0.464503900332;
    msg.type = 96U;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 20337U;
    tmp_msg_0.type = 67U;
    tmp_msg_0.utc_year = 53435U;
    tmp_msg_0.utc_month = 43U;
    tmp_msg_0.utc_day = 234U;
    tmp_msg_0.utc_time = 0.83555097637;
    tmp_msg_0.lat = 0.622600820711;
    tmp_msg_0.lon = 0.377599821595;
    tmp_msg_0.height = 0.144601084384;
    tmp_msg_0.satellites = 218U;
    tmp_msg_0.cog = 0.986333317025;
    tmp_msg_0.sog = 0.972211829245;
    tmp_msg_0.hdop = 0.322252452897;
    tmp_msg_0.vdop = 0.452430554284;
    tmp_msg_0.hacc = 0.655269992332;
    tmp_msg_0.vacc = 0.840216530775;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.0656299994624);
    msg.setSource(27821U);
    msg.setSourceEntity(112U);
    msg.setDestination(32957U);
    msg.setDestinationEntity(55U);
    msg.req_id = 14045U;
    msg.type = 212U;
    msg.status = 32U;
    msg.info.assign("IVIXYWOLJPXSDEGIWBGSWPUEAPOOZWEPVHSAAPJOMXELWSGUBRZXGOYAYRQMORWHHNJGTQCFVWTFUECDFNVTDCKJIZUIMKHRDLKIAQZILMADXNJLVMJKRC");
    msg.range = 0.210569246036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.0548657574822);
    msg.setSource(59701U);
    msg.setSourceEntity(42U);
    msg.setDestination(42513U);
    msg.setDestinationEntity(230U);
    msg.req_id = 11054U;
    msg.type = 39U;
    msg.status = 209U;
    msg.info.assign("OTBVMHNZYADNZEODQCDKTARSKLAQMZMTXBMVIKYMPWRIYKDPFIUVPEOZIXIUBYLVNNBLHUXKBHHJPWTXNJKGHQTKPLWCQGNLOYZDPUGMDGRUGQVNIBVEVUXAIJRRXCLQPSZSRQHXXZXYOOEWEGYCAYMHSNBWMJBGDSZOZPGJTSQTMMXIVTCFGJNRJISEBPUHFVOIEQFQCAADSCSWULUJYAFKAWJ");
    msg.range = 0.257676409753;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.943045708094);
    msg.setSource(58060U);
    msg.setSourceEntity(98U);
    msg.setDestination(48784U);
    msg.setDestinationEntity(228U);
    msg.req_id = 3234U;
    msg.type = 37U;
    msg.status = 49U;
    msg.info.assign("ZTRZLSXHOWRCJBTNOQYAECRMDUQWMXINSNEPXIENPFXPKKJLUNITZJCWLPHJVUYBOVCFFMFNDMWOQUAZSWLQOGGZADBRALSRHXKNAAVLDBMGSBWCBYZREPQOROQNDZGDXKFYGEGJXPDVYJRNUCTKCZJMFLJYIQOCHPBLORMWVTFEEMSYWSFGTHSUTVHTTDQVJIYASPKAISGZPXRHXNFJVBBWECUKKIEVQYFMKALAOUIYHDBIGXIEDULG");
    msg.range = 0.26578685628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.238779241561);
    msg.setSource(19098U);
    msg.setSourceEntity(239U);
    msg.setDestination(50995U);
    msg.setDestinationEntity(164U);
    msg.value = 7232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.809580839279);
    msg.setSource(37039U);
    msg.setSourceEntity(38U);
    msg.setDestination(57142U);
    msg.setDestinationEntity(229U);
    msg.value = 30746;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.132429228094);
    msg.setSource(10587U);
    msg.setSourceEntity(83U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(238U);
    msg.value = 1102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.0569499991551);
    msg.setSource(44517U);
    msg.setSourceEntity(22U);
    msg.setDestination(49848U);
    msg.setDestinationEntity(18U);
    msg.value = 0.949545787529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.310980649558);
    msg.setSource(53959U);
    msg.setSourceEntity(96U);
    msg.setDestination(12620U);
    msg.setDestinationEntity(86U);
    msg.value = 0.568821196666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.848158884009);
    msg.setSource(5258U);
    msg.setSourceEntity(94U);
    msg.setDestination(25357U);
    msg.setDestinationEntity(96U);
    msg.value = 0.413756034793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.280187257388);
    msg.setSource(32285U);
    msg.setSourceEntity(236U);
    msg.setDestination(49711U);
    msg.setDestinationEntity(237U);
    msg.value = 0.928310426105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.144140553935);
    msg.setSource(54489U);
    msg.setSourceEntity(48U);
    msg.setDestination(38157U);
    msg.setDestinationEntity(120U);
    msg.value = 0.00964553788445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.499199302765);
    msg.setSource(11838U);
    msg.setSourceEntity(28U);
    msg.setDestination(51485U);
    msg.setDestinationEntity(11U);
    msg.value = 0.96714279122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.373250693427);
    msg.setSource(11773U);
    msg.setSourceEntity(240U);
    msg.setDestination(19947U);
    msg.setDestinationEntity(150U);
    msg.validity = 48671U;
    msg.type = 197U;
    msg.utc_year = 2395U;
    msg.utc_month = 52U;
    msg.utc_day = 253U;
    msg.utc_time = 0.667818452416;
    msg.lat = 0.882257350483;
    msg.lon = 0.635973848376;
    msg.height = 0.564294368834;
    msg.satellites = 195U;
    msg.cog = 0.329167474684;
    msg.sog = 0.210369523856;
    msg.hdop = 0.924525479698;
    msg.vdop = 0.452735995906;
    msg.hacc = 0.452511227405;
    msg.vacc = 0.171565996171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.21704412538);
    msg.setSource(13687U);
    msg.setSourceEntity(153U);
    msg.setDestination(27084U);
    msg.setDestinationEntity(37U);
    msg.validity = 21288U;
    msg.type = 170U;
    msg.utc_year = 60167U;
    msg.utc_month = 253U;
    msg.utc_day = 105U;
    msg.utc_time = 0.715853306532;
    msg.lat = 0.257347015893;
    msg.lon = 0.372503874879;
    msg.height = 0.719837644419;
    msg.satellites = 111U;
    msg.cog = 0.479095698016;
    msg.sog = 0.809247742111;
    msg.hdop = 0.743747871615;
    msg.vdop = 0.751187893635;
    msg.hacc = 0.979385307673;
    msg.vacc = 0.145160365831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.201163158548);
    msg.setSource(64350U);
    msg.setSourceEntity(53U);
    msg.setDestination(6495U);
    msg.setDestinationEntity(120U);
    msg.validity = 13369U;
    msg.type = 126U;
    msg.utc_year = 16453U;
    msg.utc_month = 91U;
    msg.utc_day = 26U;
    msg.utc_time = 0.165493845474;
    msg.lat = 0.213947518947;
    msg.lon = 0.135418211339;
    msg.height = 0.469123001682;
    msg.satellites = 153U;
    msg.cog = 0.621982382497;
    msg.sog = 0.842023373873;
    msg.hdop = 0.375417052001;
    msg.vdop = 0.0659915475942;
    msg.hacc = 0.117454240424;
    msg.vacc = 0.855073293709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.871307979375);
    msg.setSource(22440U);
    msg.setSourceEntity(90U);
    msg.setDestination(9858U);
    msg.setDestinationEntity(118U);
    msg.time = 0.355692427993;
    msg.phi = 0.826783391152;
    msg.theta = 0.755161910152;
    msg.psi = 0.363698785496;
    msg.psi_magnetic = 0.561904013564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.981608232794);
    msg.setSource(58589U);
    msg.setSourceEntity(106U);
    msg.setDestination(28263U);
    msg.setDestinationEntity(218U);
    msg.time = 0.799435185795;
    msg.phi = 0.128520278856;
    msg.theta = 0.671888535838;
    msg.psi = 0.102061906978;
    msg.psi_magnetic = 0.239698800549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.0290040638248);
    msg.setSource(14225U);
    msg.setSourceEntity(214U);
    msg.setDestination(59469U);
    msg.setDestinationEntity(184U);
    msg.time = 0.267991596908;
    msg.phi = 0.313481028963;
    msg.theta = 0.594401222466;
    msg.psi = 0.433621196138;
    msg.psi_magnetic = 0.548229788372;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.270888221903);
    msg.setSource(20772U);
    msg.setSourceEntity(24U);
    msg.setDestination(55456U);
    msg.setDestinationEntity(26U);
    msg.time = 0.123484046331;
    msg.x = 0.640536066617;
    msg.y = 0.0739623363246;
    msg.z = 0.386166432047;
    msg.timestep = 0.720013464678;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.9420961914);
    msg.setSource(6563U);
    msg.setSourceEntity(117U);
    msg.setDestination(61960U);
    msg.setDestinationEntity(243U);
    msg.time = 0.862586349812;
    msg.x = 0.841433097619;
    msg.y = 0.145347026937;
    msg.z = 0.237912927787;
    msg.timestep = 0.234035845191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.35330233001);
    msg.setSource(21161U);
    msg.setSourceEntity(48U);
    msg.setDestination(52392U);
    msg.setDestinationEntity(182U);
    msg.time = 0.968566690668;
    msg.x = 0.939023406057;
    msg.y = 0.190653431419;
    msg.z = 0.295363333236;
    msg.timestep = 0.321288133255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.624922239334);
    msg.setSource(48123U);
    msg.setSourceEntity(12U);
    msg.setDestination(36106U);
    msg.setDestinationEntity(169U);
    msg.time = 0.933052293035;
    msg.x = 0.9489926599;
    msg.y = 0.0994445485558;
    msg.z = 0.984446037597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.596344410072);
    msg.setSource(39022U);
    msg.setSourceEntity(148U);
    msg.setDestination(49604U);
    msg.setDestinationEntity(115U);
    msg.time = 0.661044478901;
    msg.x = 0.490164258607;
    msg.y = 0.509444786168;
    msg.z = 0.112722853271;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.626336408282);
    msg.setSource(63640U);
    msg.setSourceEntity(253U);
    msg.setDestination(59896U);
    msg.setDestinationEntity(47U);
    msg.time = 0.70069589122;
    msg.x = 0.764951289807;
    msg.y = 0.130759295093;
    msg.z = 0.927682324231;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.699130665816);
    msg.setSource(12465U);
    msg.setSourceEntity(189U);
    msg.setDestination(29521U);
    msg.setDestinationEntity(19U);
    msg.time = 0.843365162042;
    msg.x = 0.884740357712;
    msg.y = 0.0783590049719;
    msg.z = 0.0686592920937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.546242158458);
    msg.setSource(35307U);
    msg.setSourceEntity(56U);
    msg.setDestination(59773U);
    msg.setDestinationEntity(41U);
    msg.time = 0.825086635605;
    msg.x = 0.964498159097;
    msg.y = 0.77326143086;
    msg.z = 0.411420290339;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.931477378468);
    msg.setSource(44994U);
    msg.setSourceEntity(229U);
    msg.setDestination(5040U);
    msg.setDestinationEntity(60U);
    msg.time = 0.119549694865;
    msg.x = 0.463208957623;
    msg.y = 0.276295554057;
    msg.z = 0.800269268525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.900615947542);
    msg.setSource(53192U);
    msg.setSourceEntity(177U);
    msg.setDestination(42647U);
    msg.setDestinationEntity(59U);
    msg.time = 0.348896218236;
    msg.x = 0.402909493147;
    msg.y = 0.0716470200545;
    msg.z = 0.257560640153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.931843697592);
    msg.setSource(41216U);
    msg.setSourceEntity(9U);
    msg.setDestination(23752U);
    msg.setDestinationEntity(145U);
    msg.time = 0.491395647559;
    msg.x = 0.662859481779;
    msg.y = 0.535104881872;
    msg.z = 0.821244434562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.814884670981);
    msg.setSource(35267U);
    msg.setSourceEntity(129U);
    msg.setDestination(49159U);
    msg.setDestinationEntity(227U);
    msg.time = 0.719383990199;
    msg.x = 0.277202363439;
    msg.y = 0.886933306506;
    msg.z = 0.433437600126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.110927961422);
    msg.setSource(39145U);
    msg.setSourceEntity(91U);
    msg.setDestination(51456U);
    msg.setDestinationEntity(168U);
    msg.validity = 46U;
    msg.x = 0.261366308824;
    msg.y = 0.0773486858257;
    msg.z = 0.8449169549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.949718970519);
    msg.setSource(54798U);
    msg.setSourceEntity(43U);
    msg.setDestination(15178U);
    msg.setDestinationEntity(20U);
    msg.validity = 243U;
    msg.x = 0.126769191921;
    msg.y = 0.688317757997;
    msg.z = 0.870142495319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.583941168602);
    msg.setSource(30813U);
    msg.setSourceEntity(98U);
    msg.setDestination(25339U);
    msg.setDestinationEntity(237U);
    msg.validity = 48U;
    msg.x = 0.320063736719;
    msg.y = 0.409250951202;
    msg.z = 0.283892925354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.338240980977);
    msg.setSource(56773U);
    msg.setSourceEntity(10U);
    msg.setDestination(5468U);
    msg.setDestinationEntity(146U);
    msg.validity = 77U;
    msg.x = 0.218867474025;
    msg.y = 0.244082921633;
    msg.z = 0.93702838296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.0924190311384);
    msg.setSource(45246U);
    msg.setSourceEntity(151U);
    msg.setDestination(40556U);
    msg.setDestinationEntity(203U);
    msg.validity = 107U;
    msg.x = 0.220932355287;
    msg.y = 0.530219059906;
    msg.z = 0.229597910277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.213676554266);
    msg.setSource(64120U);
    msg.setSourceEntity(51U);
    msg.setDestination(36128U);
    msg.setDestinationEntity(68U);
    msg.validity = 0U;
    msg.x = 0.167299504201;
    msg.y = 0.999784455362;
    msg.z = 0.232070799509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.698655447881);
    msg.setSource(15904U);
    msg.setSourceEntity(53U);
    msg.setDestination(13677U);
    msg.setDestinationEntity(94U);
    msg.time = 0.872362447325;
    msg.x = 0.934999619825;
    msg.y = 0.507352589225;
    msg.z = 0.113343110142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.742145125889);
    msg.setSource(17952U);
    msg.setSourceEntity(32U);
    msg.setDestination(23413U);
    msg.setDestinationEntity(64U);
    msg.time = 0.902080030381;
    msg.x = 0.379824921515;
    msg.y = 0.671273062084;
    msg.z = 0.0277858914856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.31529229511);
    msg.setSource(11441U);
    msg.setSourceEntity(244U);
    msg.setDestination(53488U);
    msg.setDestinationEntity(50U);
    msg.time = 0.0553458601059;
    msg.x = 0.894202458198;
    msg.y = 0.0994385328446;
    msg.z = 0.0238809791966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.535760294302);
    msg.setSource(47419U);
    msg.setSourceEntity(14U);
    msg.setDestination(14873U);
    msg.setDestinationEntity(230U);
    msg.validity = 87U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.68938157571;
    tmp_msg_0.y = 0.450769827473;
    tmp_msg_0.z = 0.85794081794;
    tmp_msg_0.phi = 0.709577894386;
    tmp_msg_0.theta = 0.388315444744;
    tmp_msg_0.psi = 0.70148425857;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.433173880215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.733818510735);
    msg.setSource(64183U);
    msg.setSourceEntity(135U);
    msg.setDestination(51324U);
    msg.setDestinationEntity(160U);
    msg.validity = 116U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.496397714957;
    tmp_msg_0.y = 0.497951753124;
    tmp_msg_0.z = 0.356370814436;
    tmp_msg_0.phi = 0.420946945713;
    tmp_msg_0.theta = 0.630916204578;
    tmp_msg_0.psi = 0.310872584017;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.313591530356;
    tmp_msg_1.beam_height = 0.69887838643;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.126931056132;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.492678100674);
    msg.setSource(12364U);
    msg.setSourceEntity(127U);
    msg.setDestination(36123U);
    msg.setDestinationEntity(22U);
    msg.validity = 235U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.360556591034;
    tmp_msg_0.y = 0.547063138448;
    tmp_msg_0.z = 0.354172076148;
    tmp_msg_0.phi = 0.389508406517;
    tmp_msg_0.theta = 0.207551875793;
    tmp_msg_0.psi = 0.362564383793;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.516543155788;
    tmp_msg_1.beam_height = 0.902037478469;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.412993793497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.89021853167);
    msg.setSource(47862U);
    msg.setSourceEntity(184U);
    msg.setDestination(40200U);
    msg.setDestinationEntity(60U);
    msg.value = 0.804564403708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.824762411578);
    msg.setSource(50528U);
    msg.setSourceEntity(65U);
    msg.setDestination(7631U);
    msg.setDestinationEntity(18U);
    msg.value = 0.904573128433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.167934796797);
    msg.setSource(40806U);
    msg.setSourceEntity(198U);
    msg.setDestination(43444U);
    msg.setDestinationEntity(159U);
    msg.value = 0.437260000209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.687681027114);
    msg.setSource(24061U);
    msg.setSourceEntity(164U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(228U);
    msg.value = 0.062048222042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.48460461579);
    msg.setSource(9232U);
    msg.setSourceEntity(28U);
    msg.setDestination(25364U);
    msg.setDestinationEntity(170U);
    msg.value = 0.422902148234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.786053812553);
    msg.setSource(17114U);
    msg.setSourceEntity(161U);
    msg.setDestination(65049U);
    msg.setDestinationEntity(201U);
    msg.value = 0.087896501016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.999376143173);
    msg.setSource(65084U);
    msg.setSourceEntity(90U);
    msg.setDestination(65389U);
    msg.setDestinationEntity(101U);
    msg.value = 0.475770629517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.435132327936);
    msg.setSource(62297U);
    msg.setSourceEntity(246U);
    msg.setDestination(34818U);
    msg.setDestinationEntity(214U);
    msg.value = 0.358647373633;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.589096100358);
    msg.setSource(15392U);
    msg.setSourceEntity(132U);
    msg.setDestination(60083U);
    msg.setDestinationEntity(161U);
    msg.value = 0.154593679386;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.353856178867);
    msg.setSource(18648U);
    msg.setSourceEntity(9U);
    msg.setDestination(61557U);
    msg.setDestinationEntity(131U);
    msg.value = 0.203536847745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.464328418559);
    msg.setSource(60193U);
    msg.setSourceEntity(185U);
    msg.setDestination(14932U);
    msg.setDestinationEntity(108U);
    msg.value = 0.368410828023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.420873689319);
    msg.setSource(63380U);
    msg.setSourceEntity(140U);
    msg.setDestination(19017U);
    msg.setDestinationEntity(84U);
    msg.value = 0.477990055544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.118858183176);
    msg.setSource(60211U);
    msg.setSourceEntity(95U);
    msg.setDestination(47076U);
    msg.setDestinationEntity(156U);
    msg.value = 0.905439518274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.6805297036);
    msg.setSource(12524U);
    msg.setSourceEntity(153U);
    msg.setDestination(28568U);
    msg.setDestinationEntity(118U);
    msg.value = 0.394212712124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.50694012433);
    msg.setSource(62538U);
    msg.setSourceEntity(144U);
    msg.setDestination(29692U);
    msg.setDestinationEntity(55U);
    msg.value = 0.241759366061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.58132657109);
    msg.setSource(5782U);
    msg.setSourceEntity(196U);
    msg.setDestination(36103U);
    msg.setDestinationEntity(29U);
    msg.value = 0.87650544873;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.954119970072);
    msg.setSource(17004U);
    msg.setSourceEntity(154U);
    msg.setDestination(50291U);
    msg.setDestinationEntity(22U);
    msg.value = 0.315049925385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.475329978938);
    msg.setSource(45407U);
    msg.setSourceEntity(28U);
    msg.setDestination(61352U);
    msg.setDestinationEntity(229U);
    msg.value = 0.831747943636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.373098259314);
    msg.setSource(28045U);
    msg.setSourceEntity(241U);
    msg.setDestination(20632U);
    msg.setDestinationEntity(220U);
    msg.value = 0.585390355145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.993617827813);
    msg.setSource(55268U);
    msg.setSourceEntity(90U);
    msg.setDestination(41013U);
    msg.setDestinationEntity(35U);
    msg.value = 0.766138676397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.573817536633);
    msg.setSource(47921U);
    msg.setSourceEntity(55U);
    msg.setDestination(3490U);
    msg.setDestinationEntity(173U);
    msg.value = 0.855783089881;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.398912718378);
    msg.setSource(29896U);
    msg.setSourceEntity(28U);
    msg.setDestination(37148U);
    msg.setDestinationEntity(59U);
    msg.value = 0.568761746272;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.6840616966);
    msg.setSource(49514U);
    msg.setSourceEntity(89U);
    msg.setDestination(32415U);
    msg.setDestinationEntity(148U);
    msg.value = 0.365827124573;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.150286645917);
    msg.setSource(53671U);
    msg.setSourceEntity(152U);
    msg.setDestination(58190U);
    msg.setDestinationEntity(185U);
    msg.value = 0.607619204464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.704887874198);
    msg.setSource(21499U);
    msg.setSourceEntity(89U);
    msg.setDestination(51105U);
    msg.setDestinationEntity(161U);
    msg.direction = 0.313038423114;
    msg.speed = 0.624671156043;
    msg.turbulence = 0.780275729983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.362343956279);
    msg.setSource(28101U);
    msg.setSourceEntity(124U);
    msg.setDestination(62630U);
    msg.setDestinationEntity(80U);
    msg.direction = 0.331358297923;
    msg.speed = 0.164480652357;
    msg.turbulence = 0.858644999711;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.883789781829);
    msg.setSource(44139U);
    msg.setSourceEntity(234U);
    msg.setDestination(27940U);
    msg.setDestinationEntity(121U);
    msg.direction = 0.770663441807;
    msg.speed = 0.502537686564;
    msg.turbulence = 0.896665969386;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.89663420674);
    msg.setSource(4158U);
    msg.setSourceEntity(51U);
    msg.setDestination(6624U);
    msg.setDestinationEntity(222U);
    msg.value = 0.109292452974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.732818030021);
    msg.setSource(10211U);
    msg.setSourceEntity(76U);
    msg.setDestination(54519U);
    msg.setDestinationEntity(207U);
    msg.value = 0.884478950299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.581792094016);
    msg.setSource(38971U);
    msg.setSourceEntity(210U);
    msg.setDestination(33268U);
    msg.setDestinationEntity(16U);
    msg.value = 0.411709920042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.398741547319);
    msg.setSource(18816U);
    msg.setSourceEntity(1U);
    msg.setDestination(16786U);
    msg.setDestinationEntity(37U);
    msg.value.assign("EGYQNSUVVXUJTVBSNOIKOMUCCRUTAJSWRRJMPGFZYJRJHYTRMGKVTJKDVWQBZBLNQZDQAPSMHBQIDSZTGSSEPIRQXHUDMDAFHQBWIFUFOBTPZLWKYEHEPIHXHHPALMUROJFELVPCWWAPCEOJYCWXTGGCILLQMXYMOAETQXCUZSADGCNDNNQUTDVB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.858754979737);
    msg.setSource(15140U);
    msg.setSourceEntity(20U);
    msg.setDestination(58167U);
    msg.setDestinationEntity(190U);
    msg.value.assign("MQEMDWTAEMAGNRLNBEPPDDYSTQYWOBHTQOGFZETPPVBJOEKTIVNZHCPWZQBXCZBFFJTGPKWNDFUPPIIMKFXYLZVFUMQXRPCBKFOLMQOOYOHSCULMHADWHOYFSGLGAKGXSONBBEICYJDDVXSYLMDNLWBIIVQRDOCLGRJAKBQEEJHVRSGXJYQUUVJHZZESXXNMFIMJXYXSUVPKHHKIQAGWTEWFYAUNZNTVCA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.103609501356);
    msg.setSource(47424U);
    msg.setSourceEntity(111U);
    msg.setDestination(11748U);
    msg.setDestinationEntity(33U);
    msg.value.assign("VWJXZALBXRGREDLMFNXYSRAHGCUALKOVITBTDPYKPPBCWBXEKCNCFCUBHYHUGEHTMMUCMZKZZLJJMAVILODQEHODYAADZKFFUDTCBXNUIJFUEUJCYMOQHVYKNBSNMQAIIMTOICQWWCPJTWVPRSVPYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.337802267496);
    msg.setSource(59148U);
    msg.setSourceEntity(129U);
    msg.setDestination(4183U);
    msg.setDestinationEntity(31U);
    const char tmp_msg_0[] = {94, -29, -14, 26, -86, -1, 84, 53, -16, -89, -104, 65, 8, -90, 41, -78, 4, -42, -9, -73, -16, 38, 101, -30, -59, -87, 24, 111, 66, 97, -32, 88, 23, -104, 77, -20, -124, -101, 121, -54, -51, 16, 71, -29, -125, 0, 39, 54, 42, -74, 97, 5, -107, -112, 33, -71, -92, -2, 27, -75, -88, -26};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.78743979373);
    msg.setSource(33917U);
    msg.setSourceEntity(137U);
    msg.setDestination(62237U);
    msg.setDestinationEntity(29U);
    const char tmp_msg_0[] = {18, 5, 64, -1, -77, 123, -53, -72, 70, 54, 107, 20, 84, -35, -29, -57, -84, 29, 109, 69, -30, 74, 89, -74, 31, 0, -41, 18, 96, 82, -109, 58, -32, 45, -24, 7, 90, 12, -104, 100, -128, 30, 58, 118, -94, 105, 101, 61, -53, 67, 79, -38, 112, 54, -8, 28, -1, 111, 102, 108, 126, -40, 12, -104, 74, -87, -40, -88, 41, -100, 110, -10, 12, 43, -43, 58, 111, -21, -71, -116, 84, 48, -126, 90, 36};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.67256490198);
    msg.setSource(40171U);
    msg.setSourceEntity(70U);
    msg.setDestination(47090U);
    msg.setDestinationEntity(156U);
    const char tmp_msg_0[] = {-127, 87, 36, -22, 70, -105, 56, -123, 88, 50, 27, -81, 98, 98, -68, 12, 70, -110, 106, -93, 16, -59, -45, -37};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.454315375748);
    msg.setSource(23605U);
    msg.setSourceEntity(170U);
    msg.setDestination(45763U);
    msg.setDestinationEntity(64U);
    msg.value = 0.368420485407;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.613317595096);
    msg.setSource(3947U);
    msg.setSourceEntity(77U);
    msg.setDestination(7412U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0311039854382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.543853855392);
    msg.setSource(27668U);
    msg.setSourceEntity(10U);
    msg.setDestination(32031U);
    msg.setDestinationEntity(164U);
    msg.value = 0.748558647371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.230200007134);
    msg.setSource(63221U);
    msg.setSourceEntity(152U);
    msg.setDestination(35420U);
    msg.setDestinationEntity(146U);
    msg.type = 131U;
    msg.frequency = 2710121307U;
    msg.min_range = 4597U;
    msg.max_range = 24221U;
    msg.bits_per_point = 35U;
    msg.scale_factor = 0.842394665565;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.181379276643;
    tmp_msg_0.beam_height = 0.333627325494;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {108, 109, 22, -65, -31, 15, 52, 113, -36, -23, -37, -99, 106, -60, 122, -53, 65, 7, 48, 9, 18, 84, -3, -54, 65, 66, 20, 85, 71, 24, -116, 64, 14, 87, 114, -41, 50, 43, 42, -90, -39, -91, 84, 49, 88, 59, -99, -71, 47, 90, -86, 25, 33, -29, 118, -111, -61, -49, -52, 36, -30, -37, -16, 25, 86, 12, 31, -107, 99, -1, 76, 26, -21, 21, 40, 27, -9, 27, -112, -21, -46, 53, -118, -47, 58, -11, 117, 103, 115, -30, 113, 21, 20, 80, 29, 36, 34, -115, 59, -65, 79, 115, -75, -39, 97, -118, 98, -51, -85, -32, -14, -45, 117, -86, -15, -47, 20, -93, -49, 108, 16, 37, 38, 62, -36, -66, 27, -101, 11, 45, 107, 106, -80, -90, -26, 57, -106, -78, -12, -28, 121, -87, -30, 10, -85, -18, -61, -28, 66, -74, -46, -30, -121, 33, -117, 31, 43, 80, -27, -54, -41, -74, 86, 68, -2, -101, -89, 47, 11, -110, -85, -85, 40, 90, -48, 112, 71, -61, -12, -3, -86, -108, -58, -89, -127, 119, -7, -22, 3, 5, -50, 3, -21, 113, 33, 55, -84, -74, 47, 23, 43, -83, 46, 112, -8, 69, -103, 63, 48, 43, -45, 51, -93, -60, -1, 86, -69, 118, 34, 34, -6, -69, 67, 76, -64, -97, 91, -82, 4, 120, -125, -77, 75, -58, -3, -121, 0, 69, 70, -12, 33, -68, -2, -81, -77, 47, -37, -62, -42};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.752696432731);
    msg.setSource(54834U);
    msg.setSourceEntity(202U);
    msg.setDestination(7821U);
    msg.setDestinationEntity(12U);
    msg.type = 218U;
    msg.frequency = 1987833707U;
    msg.min_range = 15634U;
    msg.max_range = 56282U;
    msg.bits_per_point = 217U;
    msg.scale_factor = 0.978394992736;
    const char tmp_msg_0[] = {31, -26, -70, 103, 54, -72, 89, -63, -59, 0, 112, -21, 68, 81, 63, -25, -74, -92, 88, -109, -102, -83, -119, 30, 74, -108, 60, 65, -13, -53, 3, -12, -49, 37, -68, 42, 67, 74, -60, 30, -74, -50, 42, -13, 64, -41, 120, -3, 124, -15, 123, -13, -48, -42, -69, 54, -16, -54, 82, -14, -72, -125, 84, 21, 125, -25, 65, -42, -71, 86, -21, -59, -101, 72, 102, -13, 101, 109, -61, -46, 41, 46, 76, -105, -29, 0, 35, 104, -1, 103, 108, 8, 98, -68, -107, -66, -16, 99, 10, 18, 92, -10, -75, -30, -16, -88, -45, 69, 111, 91, -47, -102, -2, 13, 110, 78, -59, -54, 9, 124, 28, 68, 117, 105, 114, -12, -121, -86, 119, 41, 118, -117, 119, 76, -46, -41, -78, -13, 94, 124, -115, 28, -11};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.550568548964);
    msg.setSource(33350U);
    msg.setSourceEntity(94U);
    msg.setDestination(26163U);
    msg.setDestinationEntity(60U);
    msg.type = 153U;
    msg.frequency = 195923694U;
    msg.min_range = 19720U;
    msg.max_range = 10316U;
    msg.bits_per_point = 88U;
    msg.scale_factor = 0.916542198815;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.482693084887;
    tmp_msg_0.beam_height = 0.752324751963;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {64, 40, -40, 21, -107, 88, 44, -1, 67, -16, -86, -37, 16, 65, 90, -62, -71, 68, -54, -80, -89, -20, 97, -105, -117, 83, -92, 16, 57, 125, 53, -37, -31, 38, 76, 73, -81, 123, -106, -109, -80, -84, 47, -53, -66, -51, -75, -48, 84, 15, -71, 19, -97, 29, -8, -22, -6, -95, -97, 84, 61, 2, 15, 103, -72, 26, 14, 52, -17, 25, -125, 103, -116, -71, 4, -111, -70, -57, -93, -50, -50, -115, -48, -57, -12, 23, 4, 97, 70, 55, -114, 22, 56, 37, -122, 107, 29, -46, 92, 69, -128, 28, 119, 115, 119, -42, -65, 73, -98, -93, -45, -37, 33, -125, 92, 19, 95, -45, 22, -27, 40, 38, -12, -46, -16, 57, -23, 2, -123, 106, 109, 62, -12, 51, 38, 82, 20, 20, 3, -60, -69, -3};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.482827002419);
    msg.setSource(17653U);
    msg.setSourceEntity(221U);
    msg.setDestination(4212U);
    msg.setDestinationEntity(181U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.609595877982);
    msg.setSource(46227U);
    msg.setSourceEntity(251U);
    msg.setDestination(22392U);
    msg.setDestinationEntity(132U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.696756838451);
    msg.setSource(58462U);
    msg.setSourceEntity(225U);
    msg.setDestination(63991U);
    msg.setDestinationEntity(176U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.0987232328772);
    msg.setSource(26428U);
    msg.setSourceEntity(70U);
    msg.setDestination(48010U);
    msg.setDestinationEntity(135U);
    msg.op = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.445601383643);
    msg.setSource(35334U);
    msg.setSourceEntity(71U);
    msg.setDestination(27162U);
    msg.setDestinationEntity(9U);
    msg.op = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.350636737452);
    msg.setSource(28175U);
    msg.setSourceEntity(111U);
    msg.setDestination(55291U);
    msg.setDestinationEntity(124U);
    msg.op = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.340843123909);
    msg.setSource(53739U);
    msg.setSourceEntity(46U);
    msg.setDestination(3929U);
    msg.setDestinationEntity(131U);
    msg.value = 0.795855545591;
    msg.confidence = 0.364739648599;
    msg.opmodes.assign("OWLQKEXROGIYSOZXNPBSSMXCPLHMMUZPPXDHINAYNUSWQIDTKISWRZIZKQXEHDTDJHORVUGTYKNPAXVDNLKWDGJCJCONMEYZRSFHTHHPYUAFBAKZTGJWFMOMCQERVZQKCJGEVRADOUCSCYVLZRBWDDZSUCPYTXUMOBZNTGGYIFVTEWMRLFTLQSCJQMJGLFBGCNFGJKEVQFYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.250243228541);
    msg.setSource(4913U);
    msg.setSourceEntity(112U);
    msg.setDestination(41790U);
    msg.setDestinationEntity(137U);
    msg.value = 0.100932154253;
    msg.confidence = 0.0487667942893;
    msg.opmodes.assign("YBPSMSBZHNONFYOWDJTXXUSKJZYNRP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.494621135397);
    msg.setSource(16308U);
    msg.setSourceEntity(11U);
    msg.setDestination(24023U);
    msg.setDestinationEntity(225U);
    msg.value = 0.85205705347;
    msg.confidence = 0.606606230159;
    msg.opmodes.assign("MHKAQSLBIVAVMZOJHVYFRWZYBXGLGCJWYVHTWZXTFRKRQFJTRLOTIVQUPXFDLSOFQMYXTJRSXDKHPFFCDTZRSODGKMRMZHXHXPQZUAVDCOEYCMMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.510925260644);
    msg.setSource(57596U);
    msg.setSourceEntity(158U);
    msg.setDestination(46851U);
    msg.setDestinationEntity(223U);
    msg.itow = 3461270931U;
    msg.lat = 0.0347089140326;
    msg.lon = 0.779165490053;
    msg.height_ell = 0.20575886514;
    msg.height_sea = 0.840666857695;
    msg.hacc = 0.169034089866;
    msg.vacc = 0.580929960799;
    msg.vel_n = 0.808519008237;
    msg.vel_e = 0.926116003675;
    msg.vel_d = 0.603962002429;
    msg.speed = 0.578273439968;
    msg.gspeed = 0.375773632378;
    msg.heading = 0.648156192792;
    msg.sacc = 0.43631547639;
    msg.cacc = 0.320695363991;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.709368346209);
    msg.setSource(55737U);
    msg.setSourceEntity(47U);
    msg.setDestination(28895U);
    msg.setDestinationEntity(89U);
    msg.itow = 3954902842U;
    msg.lat = 0.405282969486;
    msg.lon = 0.00214091488844;
    msg.height_ell = 0.482804636772;
    msg.height_sea = 0.376244101545;
    msg.hacc = 0.139645989332;
    msg.vacc = 0.56222924705;
    msg.vel_n = 0.410551695422;
    msg.vel_e = 0.39876096284;
    msg.vel_d = 0.547921189604;
    msg.speed = 0.687393162791;
    msg.gspeed = 0.355903217506;
    msg.heading = 0.912401500328;
    msg.sacc = 0.267537007573;
    msg.cacc = 0.705513525199;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.126072515838);
    msg.setSource(58329U);
    msg.setSourceEntity(130U);
    msg.setDestination(60962U);
    msg.setDestinationEntity(161U);
    msg.itow = 3965284732U;
    msg.lat = 0.459638721698;
    msg.lon = 0.295958383687;
    msg.height_ell = 0.309916249021;
    msg.height_sea = 0.156592886855;
    msg.hacc = 0.353632897305;
    msg.vacc = 0.813619704593;
    msg.vel_n = 0.989812300018;
    msg.vel_e = 0.147733123219;
    msg.vel_d = 0.785495253636;
    msg.speed = 0.616583163527;
    msg.gspeed = 0.403311322086;
    msg.heading = 0.571590498048;
    msg.sacc = 0.987777760239;
    msg.cacc = 0.377023423082;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.369680164727);
    msg.setSource(2845U);
    msg.setSourceEntity(234U);
    msg.setDestination(38793U);
    msg.setDestinationEntity(105U);
    msg.id = 230U;
    msg.value = 0.633909802262;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.920735521096);
    msg.setSource(59211U);
    msg.setSourceEntity(187U);
    msg.setDestination(37439U);
    msg.setDestinationEntity(116U);
    msg.id = 143U;
    msg.value = 0.424195552737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.667756321339);
    msg.setSource(42718U);
    msg.setSourceEntity(91U);
    msg.setDestination(8379U);
    msg.setDestinationEntity(90U);
    msg.id = 104U;
    msg.value = 0.653383009144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.55795875196);
    msg.setSource(43959U);
    msg.setSourceEntity(148U);
    msg.setDestination(63638U);
    msg.setDestinationEntity(7U);
    msg.x = 0.874414474059;
    msg.y = 0.531592187867;
    msg.z = 0.831343510482;
    msg.phi = 0.874876750017;
    msg.theta = 0.757878942946;
    msg.psi = 0.205585809839;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.686898821766);
    msg.setSource(31825U);
    msg.setSourceEntity(95U);
    msg.setDestination(54044U);
    msg.setDestinationEntity(186U);
    msg.x = 0.550632774382;
    msg.y = 0.332515854791;
    msg.z = 0.444124572871;
    msg.phi = 0.337827624735;
    msg.theta = 0.587163888081;
    msg.psi = 0.219609774531;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.81274571076);
    msg.setSource(56547U);
    msg.setSourceEntity(98U);
    msg.setDestination(52301U);
    msg.setDestinationEntity(128U);
    msg.x = 0.227215565457;
    msg.y = 0.167634577798;
    msg.z = 0.669926665072;
    msg.phi = 0.91698046522;
    msg.theta = 0.765562695311;
    msg.psi = 0.234868180132;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.194160845455);
    msg.setSource(47063U);
    msg.setSourceEntity(224U);
    msg.setDestination(60507U);
    msg.setDestinationEntity(124U);
    msg.beam_width = 0.653430527787;
    msg.beam_height = 0.42179949529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.631056744654);
    msg.setSource(9957U);
    msg.setSourceEntity(89U);
    msg.setDestination(62332U);
    msg.setDestinationEntity(78U);
    msg.beam_width = 0.374355461547;
    msg.beam_height = 0.625518520251;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.357098961732);
    msg.setSource(39519U);
    msg.setSourceEntity(5U);
    msg.setDestination(40308U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.0369944455575;
    msg.beam_height = 0.21793878417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.83233417791);
    msg.setSource(30119U);
    msg.setSourceEntity(143U);
    msg.setDestination(6312U);
    msg.setDestinationEntity(136U);
    msg.sane = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.981645683433);
    msg.setSource(65454U);
    msg.setSourceEntity(63U);
    msg.setDestination(60264U);
    msg.setDestinationEntity(48U);
    msg.sane = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.205553469642);
    msg.setSource(62932U);
    msg.setSourceEntity(50U);
    msg.setDestination(6405U);
    msg.setDestinationEntity(221U);
    msg.sane = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.193796126568);
    msg.setSource(62848U);
    msg.setSourceEntity(113U);
    msg.setDestination(3481U);
    msg.setDestinationEntity(99U);
    msg.value = 0.329361529152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.38948629407);
    msg.setSource(60308U);
    msg.setSourceEntity(40U);
    msg.setDestination(33366U);
    msg.setDestinationEntity(35U);
    msg.value = 0.955500523447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.0627379246265);
    msg.setSource(63900U);
    msg.setSourceEntity(224U);
    msg.setDestination(19730U);
    msg.setDestinationEntity(70U);
    msg.value = 0.357488176116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.889059448931);
    msg.setSource(58641U);
    msg.setSourceEntity(76U);
    msg.setDestination(63767U);
    msg.setDestinationEntity(149U);
    msg.value = 0.344839809347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.145562433535);
    msg.setSource(15386U);
    msg.setSourceEntity(191U);
    msg.setDestination(3812U);
    msg.setDestinationEntity(158U);
    msg.value = 0.255589936538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.560694337996);
    msg.setSource(1145U);
    msg.setSourceEntity(74U);
    msg.setDestination(9998U);
    msg.setDestinationEntity(251U);
    msg.value = 0.11566395932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.807310973502);
    msg.setSource(19701U);
    msg.setSourceEntity(228U);
    msg.setDestination(24775U);
    msg.setDestinationEntity(195U);
    msg.value = 0.349990497494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.63726482851);
    msg.setSource(38596U);
    msg.setSourceEntity(64U);
    msg.setDestination(20301U);
    msg.setDestinationEntity(151U);
    msg.value = 0.831111689717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.838573179049);
    msg.setSource(46146U);
    msg.setSourceEntity(235U);
    msg.setDestination(43435U);
    msg.setDestinationEntity(150U);
    msg.value = 0.103464106593;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.887073732431);
    msg.setSource(2659U);
    msg.setSourceEntity(112U);
    msg.setDestination(18143U);
    msg.setDestinationEntity(124U);
    msg.value = 0.164733807206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.619651038534);
    msg.setSource(1892U);
    msg.setSourceEntity(166U);
    msg.setDestination(53315U);
    msg.setDestinationEntity(239U);
    msg.value = 0.248268954117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.120921943514);
    msg.setSource(23291U);
    msg.setSourceEntity(201U);
    msg.setDestination(41857U);
    msg.setDestinationEntity(200U);
    msg.value = 0.932062908451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.630118965846);
    msg.setSource(41424U);
    msg.setSourceEntity(179U);
    msg.setDestination(56365U);
    msg.setDestinationEntity(183U);
    msg.value = 0.0814629421567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.508994916436);
    msg.setSource(17344U);
    msg.setSourceEntity(6U);
    msg.setDestination(1384U);
    msg.setDestinationEntity(250U);
    msg.value = 0.234808936804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.993392488036);
    msg.setSource(57483U);
    msg.setSourceEntity(133U);
    msg.setDestination(42364U);
    msg.setDestinationEntity(137U);
    msg.value = 0.275888191584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.897907514517);
    msg.setSource(56069U);
    msg.setSourceEntity(242U);
    msg.setDestination(62642U);
    msg.setDestinationEntity(221U);
    msg.value = 0.924008162667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.15534738664);
    msg.setSource(46013U);
    msg.setSourceEntity(240U);
    msg.setDestination(62466U);
    msg.setDestinationEntity(17U);
    msg.value = 0.492066696686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.124055265192);
    msg.setSource(61322U);
    msg.setSourceEntity(74U);
    msg.setDestination(22946U);
    msg.setDestinationEntity(50U);
    msg.value = 0.670029518427;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.751407375082);
    msg.setSource(46304U);
    msg.setSourceEntity(64U);
    msg.setDestination(55085U);
    msg.setDestinationEntity(150U);
    msg.value = 0.228450363101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.0742872368171);
    msg.setSource(13568U);
    msg.setSourceEntity(140U);
    msg.setDestination(60695U);
    msg.setDestinationEntity(197U);
    msg.value = 0.334526405575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.433109295634);
    msg.setSource(12057U);
    msg.setSourceEntity(94U);
    msg.setDestination(33925U);
    msg.setDestinationEntity(254U);
    msg.value = 0.134946958008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.196120092213);
    msg.setSource(26665U);
    msg.setSourceEntity(18U);
    msg.setDestination(23700U);
    msg.setDestinationEntity(15U);
    msg.value = 0.362871766761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.586116194209);
    msg.setSource(45167U);
    msg.setSourceEntity(101U);
    msg.setDestination(65288U);
    msg.setDestinationEntity(29U);
    msg.value = 0.918527877541;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.165064178163);
    msg.setSource(36462U);
    msg.setSourceEntity(10U);
    msg.setDestination(6684U);
    msg.setDestinationEntity(107U);
    msg.value = 0.946347410027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.304298775568);
    msg.setSource(43673U);
    msg.setSourceEntity(248U);
    msg.setDestination(45426U);
    msg.setDestinationEntity(24U);
    msg.validity = 22228U;
    msg.type = 177U;
    msg.tow = 1868621046U;
    msg.base_lat = 0.294278462687;
    msg.base_lon = 0.629926676573;
    msg.base_height = 0.855358591239;
    msg.n = 0.455228177093;
    msg.e = 0.598465760765;
    msg.d = 0.63575852072;
    msg.v_n = 0.823506567867;
    msg.v_e = 0.267988516705;
    msg.v_d = 0.586354285966;
    msg.satellites = 25U;
    msg.iar_hyp = 32448U;
    msg.iar_ratio = 0.63005057367;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.948694088906);
    msg.setSource(55765U);
    msg.setSourceEntity(203U);
    msg.setDestination(20416U);
    msg.setDestinationEntity(114U);
    msg.validity = 7284U;
    msg.type = 34U;
    msg.tow = 957904160U;
    msg.base_lat = 0.359937137312;
    msg.base_lon = 0.929107172621;
    msg.base_height = 0.107974243737;
    msg.n = 0.582821225343;
    msg.e = 0.978274834628;
    msg.d = 0.481280918298;
    msg.v_n = 0.232749873312;
    msg.v_e = 0.366281116644;
    msg.v_d = 0.972202994494;
    msg.satellites = 158U;
    msg.iar_hyp = 23905U;
    msg.iar_ratio = 0.548638612446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.673042960074);
    msg.setSource(61638U);
    msg.setSourceEntity(209U);
    msg.setDestination(24108U);
    msg.setDestinationEntity(209U);
    msg.validity = 15076U;
    msg.type = 23U;
    msg.tow = 3357158957U;
    msg.base_lat = 0.26689336455;
    msg.base_lon = 0.286526183804;
    msg.base_height = 0.0715473688834;
    msg.n = 0.119304482963;
    msg.e = 0.463298726753;
    msg.d = 0.408143645627;
    msg.v_n = 0.234855266696;
    msg.v_e = 0.532800645391;
    msg.v_d = 0.400229307489;
    msg.satellites = 165U;
    msg.iar_hyp = 42269U;
    msg.iar_ratio = 0.540704172852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.462117743962);
    msg.setSource(23004U);
    msg.setSourceEntity(205U);
    msg.setDestination(59827U);
    msg.setDestinationEntity(101U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0114995095935;
    tmp_msg_0.lon = 0.100540303422;
    tmp_msg_0.height = 0.461854468396;
    tmp_msg_0.x = 0.124378600467;
    tmp_msg_0.y = 0.117382568922;
    tmp_msg_0.z = 0.041982586791;
    tmp_msg_0.phi = 0.431930464075;
    tmp_msg_0.theta = 0.148369600303;
    tmp_msg_0.psi = 0.800012147687;
    tmp_msg_0.u = 0.884682221439;
    tmp_msg_0.v = 0.51602892752;
    tmp_msg_0.w = 0.466530223848;
    tmp_msg_0.vx = 0.732156274472;
    tmp_msg_0.vy = 0.891521702221;
    tmp_msg_0.vz = 0.18745781219;
    tmp_msg_0.p = 0.347655728073;
    tmp_msg_0.q = 0.630553041411;
    tmp_msg_0.r = 0.721554336126;
    tmp_msg_0.depth = 0.525578588193;
    tmp_msg_0.alt = 0.793507502909;
    msg.state.set(tmp_msg_0);
    msg.type = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.840216860878);
    msg.setSource(13477U);
    msg.setSourceEntity(147U);
    msg.setDestination(15957U);
    msg.setDestinationEntity(21U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.219989475176;
    tmp_msg_0.lon = 0.355295508611;
    tmp_msg_0.height = 0.887432987557;
    tmp_msg_0.x = 0.678495086449;
    tmp_msg_0.y = 0.432938174312;
    tmp_msg_0.z = 0.521102017396;
    tmp_msg_0.phi = 0.664930371165;
    tmp_msg_0.theta = 0.786528046874;
    tmp_msg_0.psi = 0.768696608776;
    tmp_msg_0.u = 0.766840188147;
    tmp_msg_0.v = 0.044280275396;
    tmp_msg_0.w = 0.723250573684;
    tmp_msg_0.vx = 0.0614681374756;
    tmp_msg_0.vy = 0.855172879287;
    tmp_msg_0.vz = 0.767745542463;
    tmp_msg_0.p = 0.470916414165;
    tmp_msg_0.q = 0.466267664023;
    tmp_msg_0.r = 0.662414883681;
    tmp_msg_0.depth = 0.652314926588;
    tmp_msg_0.alt = 0.785773317096;
    msg.state.set(tmp_msg_0);
    msg.type = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.183633261709);
    msg.setSource(3976U);
    msg.setSourceEntity(111U);
    msg.setDestination(39618U);
    msg.setDestinationEntity(224U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.370668592364;
    tmp_msg_0.lon = 0.363963151372;
    tmp_msg_0.height = 0.524947875498;
    tmp_msg_0.x = 0.347439838467;
    tmp_msg_0.y = 0.795639180255;
    tmp_msg_0.z = 0.91217686858;
    tmp_msg_0.phi = 0.608614041965;
    tmp_msg_0.theta = 0.0317805352837;
    tmp_msg_0.psi = 0.214915935778;
    tmp_msg_0.u = 0.441089035857;
    tmp_msg_0.v = 0.572586189935;
    tmp_msg_0.w = 0.613303620599;
    tmp_msg_0.vx = 0.599426111371;
    tmp_msg_0.vy = 0.0197971598319;
    tmp_msg_0.vz = 0.426901033289;
    tmp_msg_0.p = 0.604659297185;
    tmp_msg_0.q = 0.512883635642;
    tmp_msg_0.r = 0.96501111808;
    tmp_msg_0.depth = 0.135813134323;
    tmp_msg_0.alt = 0.595109583663;
    msg.state.set(tmp_msg_0);
    msg.type = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.869337092795);
    msg.setSource(21948U);
    msg.setSourceEntity(245U);
    msg.setDestination(52336U);
    msg.setDestinationEntity(35U);
    msg.value = 0.651996305578;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.995731441204);
    msg.setSource(28324U);
    msg.setSourceEntity(8U);
    msg.setDestination(43744U);
    msg.setDestinationEntity(44U);
    msg.value = 0.349436748032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.153969140592);
    msg.setSource(6924U);
    msg.setSourceEntity(93U);
    msg.setDestination(6190U);
    msg.setDestinationEntity(10U);
    msg.value = 0.570378415152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.388401193568);
    msg.setSource(6932U);
    msg.setSourceEntity(210U);
    msg.setDestination(58549U);
    msg.setDestinationEntity(222U);
    msg.value = 0.474974214079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.22493912718);
    msg.setSource(63066U);
    msg.setSourceEntity(79U);
    msg.setDestination(3322U);
    msg.setDestinationEntity(40U);
    msg.value = 0.933878638675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.00444396354214);
    msg.setSource(43344U);
    msg.setSourceEntity(58U);
    msg.setDestination(39079U);
    msg.setDestinationEntity(83U);
    msg.value = 0.565672970634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.0223806849529);
    msg.setSource(31726U);
    msg.setSourceEntity(150U);
    msg.setDestination(47240U);
    msg.setDestinationEntity(33U);
    msg.value = 0.37717706369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.281605672772);
    msg.setSource(9374U);
    msg.setSourceEntity(58U);
    msg.setDestination(18320U);
    msg.setDestinationEntity(240U);
    msg.value = 0.213512195539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.063968124653);
    msg.setSource(55417U);
    msg.setSourceEntity(32U);
    msg.setDestination(49900U);
    msg.setDestinationEntity(27U);
    msg.value = 0.992330638061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.303235566833);
    msg.setSource(4485U);
    msg.setSourceEntity(183U);
    msg.setDestination(20122U);
    msg.setDestinationEntity(11U);
    msg.value = 0.443315460902;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.065995637215);
    msg.setSource(48542U);
    msg.setSourceEntity(235U);
    msg.setDestination(18589U);
    msg.setDestinationEntity(219U);
    msg.value = 0.285319667809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.357080813974);
    msg.setSource(20863U);
    msg.setSourceEntity(22U);
    msg.setDestination(53580U);
    msg.setDestinationEntity(120U);
    msg.value = 0.949356796542;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.738875788657);
    msg.setSource(4564U);
    msg.setSourceEntity(252U);
    msg.setDestination(12622U);
    msg.setDestinationEntity(221U);
    msg.value = 0.46486397821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.896320798896);
    msg.setSource(31932U);
    msg.setSourceEntity(10U);
    msg.setDestination(19055U);
    msg.setDestinationEntity(43U);
    msg.value = 0.390017084557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.202637599286);
    msg.setSource(3481U);
    msg.setSourceEntity(217U);
    msg.setDestination(64626U);
    msg.setDestinationEntity(26U);
    msg.value = 0.543442126521;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.93973822578);
    msg.setSource(16894U);
    msg.setSourceEntity(44U);
    msg.setDestination(62789U);
    msg.setDestinationEntity(132U);
    msg.id = 15U;
    msg.zoom = 57U;
    msg.action = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.77433240966);
    msg.setSource(50058U);
    msg.setSourceEntity(35U);
    msg.setDestination(14168U);
    msg.setDestinationEntity(146U);
    msg.id = 106U;
    msg.zoom = 80U;
    msg.action = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.953360211927);
    msg.setSource(657U);
    msg.setSourceEntity(235U);
    msg.setDestination(15198U);
    msg.setDestinationEntity(21U);
    msg.id = 36U;
    msg.zoom = 157U;
    msg.action = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.383978917703);
    msg.setSource(48556U);
    msg.setSourceEntity(228U);
    msg.setDestination(244U);
    msg.setDestinationEntity(69U);
    msg.id = 247U;
    msg.value = 0.349998714779;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.362486263163);
    msg.setSource(30576U);
    msg.setSourceEntity(45U);
    msg.setDestination(3208U);
    msg.setDestinationEntity(139U);
    msg.id = 119U;
    msg.value = 0.13005354597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.885181672801);
    msg.setSource(51537U);
    msg.setSourceEntity(126U);
    msg.setDestination(14837U);
    msg.setDestinationEntity(96U);
    msg.id = 147U;
    msg.value = 0.323272851578;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.902630059523);
    msg.setSource(31232U);
    msg.setSourceEntity(244U);
    msg.setDestination(46427U);
    msg.setDestinationEntity(217U);
    msg.id = 228U;
    msg.value = 0.534262367044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.334501054402);
    msg.setSource(16302U);
    msg.setSourceEntity(62U);
    msg.setDestination(37791U);
    msg.setDestinationEntity(80U);
    msg.id = 151U;
    msg.value = 0.358393845821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.874332902569);
    msg.setSource(13057U);
    msg.setSourceEntity(102U);
    msg.setDestination(47058U);
    msg.setDestinationEntity(174U);
    msg.id = 240U;
    msg.value = 0.301679462002;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.422152034811);
    msg.setSource(44304U);
    msg.setSourceEntity(202U);
    msg.setDestination(52122U);
    msg.setDestinationEntity(5U);
    msg.id = 22U;
    msg.angle = 0.101189503187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.318987198981);
    msg.setSource(16174U);
    msg.setSourceEntity(189U);
    msg.setDestination(59416U);
    msg.setDestinationEntity(206U);
    msg.id = 3U;
    msg.angle = 0.743871193703;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.459295350064);
    msg.setSource(19475U);
    msg.setSourceEntity(154U);
    msg.setDestination(51409U);
    msg.setDestinationEntity(240U);
    msg.id = 175U;
    msg.angle = 0.498163185526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.64490758244);
    msg.setSource(50900U);
    msg.setSourceEntity(158U);
    msg.setDestination(29536U);
    msg.setDestinationEntity(104U);
    msg.op = 89U;
    msg.actions.assign("QUCEFOSDAPNXERZTGTAFVJQWSBQZAVLJIHERZYGGXCGLPOXHRSPMQXSKXIBJAOWNIYZPRZWPYDXKZSVXSJRGNJMNKMOTIPKFNOYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.472871862269);
    msg.setSource(18509U);
    msg.setSourceEntity(76U);
    msg.setDestination(53359U);
    msg.setDestinationEntity(79U);
    msg.op = 74U;
    msg.actions.assign("UQANIOKXOEZNIOJEXSZPQYOIUJZEELGQWTLUVHXNFLCUWSBZMAUNPZNYCRHWGVPBISCGRGUSXNPTLXTVWMLZCSOBJFIMTKRYCNKIPFVHGWQJLLQRFXAMXLGZLMPTTADDCKFBOSUFCACWYZDQHRKQQREQKYJDMDNEAPJHFCWOMRBDEBHNKNUYYGKDIYOYVVSEJGWHRGMAYSBTIWKIJCKPDVVFBSGRPXSV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0310959006584);
    msg.setSource(45959U);
    msg.setSourceEntity(69U);
    msg.setDestination(20343U);
    msg.setDestinationEntity(139U);
    msg.op = 176U;
    msg.actions.assign("QPREDUHUEENTIYEFFTYMTDGCQJWTVGOAEIWDNBWRGLMIKUGXRRUXNVOGBNBBHBTPBUJRFCQTOKWVSRABYODWPVQKSGEJLETMDRZQNWCXAZKPXNNYKJZRKFPBSXULAWHCVMSAACYRWHQLOOFWOXFYESBJYFGIPKOKLKQHXJUANMIJCMCHBVDSSLQZFXYDZOIZZXUEPZAMGXHQLNJUWMJORCLNPSGTIPVUSDKMHILVIMPGQDDTEVTHI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.50739525953);
    msg.setSource(28208U);
    msg.setSourceEntity(226U);
    msg.setDestination(39642U);
    msg.setDestinationEntity(76U);
    msg.actions.assign("BWFUZHKMOSKDXEMXOKFNQYOLILWSWQTRVCWXJIIEMTXRNPICXCGOSDFUJGDULCVOLFNNIHOYDQNTOAQIJGRBQSUPRWGVJMJFPYWRVNZTVAYZFWBPZVBBCYEVRKMMZNDHETSXBDUSUFCKYYCNNYJPWQIKJENPGTRHVMDFXTZAHJTWECIGIRMRQPUASMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.0373479339496);
    msg.setSource(8226U);
    msg.setSourceEntity(109U);
    msg.setDestination(62665U);
    msg.setDestinationEntity(157U);
    msg.actions.assign("UJJTPTPEAWFVCLYQVRPMGVMOBRKENEQSDMSXSURIINDBOZCLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.773205310312);
    msg.setSource(57378U);
    msg.setSourceEntity(109U);
    msg.setDestination(39530U);
    msg.setDestinationEntity(252U);
    msg.actions.assign("QYRPQKZYXCNLDRSLQGWKBXECIEBBHPGYYWZAAFAJBUSYIIEVFYMDVTGATJWMOMFPGLNKRKMADEUEZBVCXUHSJVGHEVCZJDTRSQWIGNSBJFCOBLOIIKMWTSVTITIKXLTJAUCRGRDXUWPSLBAHCOVHUUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.654602130898);
    msg.setSource(25210U);
    msg.setSourceEntity(95U);
    msg.setDestination(2198U);
    msg.setDestinationEntity(159U);
    msg.button = 157U;
    msg.value = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.363009998479);
    msg.setSource(27197U);
    msg.setSourceEntity(219U);
    msg.setDestination(25144U);
    msg.setDestinationEntity(140U);
    msg.button = 141U;
    msg.value = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.572901265086);
    msg.setSource(19215U);
    msg.setSourceEntity(220U);
    msg.setDestination(3065U);
    msg.setDestinationEntity(120U);
    msg.button = 109U;
    msg.value = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.903992636979);
    msg.setSource(33195U);
    msg.setSourceEntity(48U);
    msg.setDestination(47375U);
    msg.setDestinationEntity(198U);
    msg.op = 51U;
    msg.text.assign("VZLBXNVDGZAJAMSETIMOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.649169696167);
    msg.setSource(46512U);
    msg.setSourceEntity(123U);
    msg.setDestination(41257U);
    msg.setDestinationEntity(84U);
    msg.op = 89U;
    msg.text.assign("KTAHXJZTPUYHAUGIVHWXPROKRNUJBIMSABWTFPYMSDLHNZPPLTEUWADQDETORAEBXMNTMNPYVWJJCASMLFVFUEBQMGQGOBIQHZJDGFQDZFLCSOURXSDJKYTAEAWXKGHKFCSFOEELVCUDRBGPTOXPUIMXKUSWIGEMYGFJK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.239273724441);
    msg.setSource(17567U);
    msg.setSourceEntity(152U);
    msg.setDestination(16716U);
    msg.setDestinationEntity(88U);
    msg.op = 189U;
    msg.text.assign("XIGGKKZJYANTCPBFUUQSMUTDLTYJQCEFHRSTVOVEUVYWZLDPIXKMIIYLTUKJWMWQFMZRHXVLCULAQGNWZFKLRIALEHALOOLKTRQORZBDEOJAJQPAZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.868492561955);
    msg.setSource(2838U);
    msg.setSourceEntity(108U);
    msg.setDestination(10899U);
    msg.setDestinationEntity(91U);
    msg.op = 123U;
    msg.time_remain = 0.529063211608;
    msg.sched_time = 0.907134688999;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.192205386674);
    msg.setSource(43041U);
    msg.setSourceEntity(36U);
    msg.setDestination(53926U);
    msg.setDestinationEntity(53U);
    msg.op = 68U;
    msg.time_remain = 0.351615741029;
    msg.sched_time = 0.747818840585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.454929313311);
    msg.setSource(18496U);
    msg.setSourceEntity(131U);
    msg.setDestination(32680U);
    msg.setDestinationEntity(228U);
    msg.op = 120U;
    msg.time_remain = 0.500184570411;
    msg.sched_time = 0.419495680043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.861095067537);
    msg.setSource(59203U);
    msg.setSourceEntity(84U);
    msg.setDestination(27914U);
    msg.setDestinationEntity(236U);
    msg.name.assign("GBRDYBJPLGYEZZPLPTURDLSVWERNLDYGFWHAVZMKLXVZREHUCOTXAWIDXCUGZQFHBEWBOEXAKKJITKSELIKSSOZSIXBMMWTUPITQQIPXLDSWHVQRLBSCUVQASAMXGNYFYQHDVYLBAKWJJQONHDOWFJGNGPMXOLSEPZZ");
    msg.op = 129U;
    msg.sched_time = 0.29567986036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.022242147262);
    msg.setSource(28756U);
    msg.setSourceEntity(176U);
    msg.setDestination(12235U);
    msg.setDestinationEntity(206U);
    msg.name.assign("XUGRDNSTNTHOHEVMRHTLJOHXBDAD");
    msg.op = 110U;
    msg.sched_time = 0.80940331372;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.48378621216);
    msg.setSource(13429U);
    msg.setSourceEntity(86U);
    msg.setDestination(40979U);
    msg.setDestinationEntity(190U);
    msg.name.assign("UFTAMNWNJXDPKPTCQWQYSBKSJAYMGRSDSPVZVQQCJLLUAMSGOQDNIVZJXZYOCXWODYHMQNRQWRHHDLXOVOASSTFOBKGAOBRAUXEFGKUEYGPWBELVMVRGUFNSWLKNUYZRADSLXMPHYCBWXXAVWCQOJWSDIWVUJBKKEOTCZDIHLMVMZFGIFNZEADUIBCRQE");
    msg.op = 151U;
    msg.sched_time = 0.244767108907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.738442175029);
    msg.setSource(39267U);
    msg.setSourceEntity(112U);
    msg.setDestination(33540U);
    msg.setDestinationEntity(247U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.996798539681);
    msg.setSource(14715U);
    msg.setSourceEntity(153U);
    msg.setDestination(14715U);
    msg.setDestinationEntity(140U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.307683673081);
    msg.setSource(56457U);
    msg.setSourceEntity(71U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(16U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.999695099891);
    msg.setSource(31846U);
    msg.setSourceEntity(211U);
    msg.setDestination(25972U);
    msg.setDestinationEntity(235U);
    msg.name.assign("BQCGMCLEUXCRWRQZFIENGVEVQPWIIWDECFBLUWFOTNFPNLGUAMYYMFKVJWYIDFVSCERJBPADEHHLEUVNRGSJBOKMSPPZPOGRZTUHHSIGFLYZQNYVBIVELQRNYBYHLXCXBJPYTIOEUOBJUMVODKOTWJZCSIKTJCMOAXHAMAVKUZJXANHFJTQADZZNXMRTXOEHHSNRYVYALJXOUFKWPNZWSHRIGTSDDKLKLQZQSGSWTDWCTKD");
    msg.state = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.465496771514);
    msg.setSource(62140U);
    msg.setSourceEntity(45U);
    msg.setDestination(63043U);
    msg.setDestinationEntity(59U);
    msg.name.assign("UFFTPJLELGZXORNIUDKECXIHDQNBLXAVVAGRJZMCKF");
    msg.state = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.994162262425);
    msg.setSource(62846U);
    msg.setSourceEntity(213U);
    msg.setDestination(7608U);
    msg.setDestinationEntity(12U);
    msg.name.assign("FVEXRZRSGXBRIYWPDONRMJPSHOLIGSMPAVSGXCNADXUTAQOXIGQWBJGIISYEJUMDGZCVTJWGPQVUTUTXBFYIPEISYZUYYLLKQRYRLKCEPWPCOUDIMXMNBFNCBSWQMIHDKMFWBPJCQTXRKHSZXWHTQVNFBZEZKFCCOLJZOTEHLLAKELZQDJKNNJOZRAPJWYQBDUHRSPNOMEBJAAFF");
    msg.state = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.752379460418);
    msg.setSource(51106U);
    msg.setSourceEntity(208U);
    msg.setDestination(52445U);
    msg.setDestinationEntity(189U);
    msg.name.assign("UEQKHHUKWNZWOWQJHAUYTGAFOIXCLNYTSBOHQCNVBCXFYRRYECIUWFBNFYRJHJISTCEFESFXJTQMGAVFBHCXCLUFUYAKSVTSOIZUAZZEBJVEDZIAOOCPWTKVLNKPRDBGNSP");
    msg.value = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.305868233323);
    msg.setSource(27373U);
    msg.setSourceEntity(147U);
    msg.setDestination(19410U);
    msg.setDestinationEntity(253U);
    msg.name.assign("MPAYZMMDXAEYKTAQCAPIOWAIDYHANZWBKPFCKJSSWTQAUFTNQVZECWYBGQ");
    msg.value = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.984509144469);
    msg.setSource(11645U);
    msg.setSourceEntity(231U);
    msg.setDestination(34206U);
    msg.setDestinationEntity(17U);
    msg.name.assign("WCAXQPFIJOBRVMVGCFRNFJUMJPAWPALGGXFIGLYTEQUNJPYXXDVQGFCKNXJDOQTPKIYARLVTHBNDSJYIQRBLWSNZHEWGWZUGRHYZGEXTCMRMAPPYIJWEOMUQBXBETTCBEPFXKUXAKTVEZHHLHCNHHRLKUQPAWZKBDVBZEYNOMGFMQLLWLHQC");
    msg.value = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.758072132742);
    msg.setSource(27190U);
    msg.setSourceEntity(240U);
    msg.setDestination(13230U);
    msg.setDestinationEntity(79U);
    msg.name.assign("OBETJYBHEQGDOGDHKOWXEMTNTVZHGRGRFUVUVYYFRWBCGWZLKCSZVATQWDUNHJLAJPBBFDGAJYVYXYPMCGXXVJKMXZLXRZSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.610497672682);
    msg.setSource(27559U);
    msg.setSourceEntity(40U);
    msg.setDestination(18313U);
    msg.setDestinationEntity(49U);
    msg.name.assign("XUFHQHFDUZYRCHBKGGVSQQIHRKJQWVWCBGEBYZJERZMAWPEFLDITCHNHTANIPNXEMGLQMQGDJQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.282841057456);
    msg.setSource(39722U);
    msg.setSourceEntity(97U);
    msg.setDestination(54259U);
    msg.setDestinationEntity(54U);
    msg.name.assign("SZDMYSOXCRTHNBIPACEHAAIPDCDUUUKOIWANYAWDFKGXQWWIYSFOLHVUCZTLOVVASYGZBWGRTDYHBNZEBCAFLSFOULQJTMNBQHCBFZKZSRIOYXPAORERTDYYGPWJTRJCDCFMVCXFEVLRVFNQOUNFKIWBTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.839801439804);
    msg.setSource(2971U);
    msg.setSourceEntity(24U);
    msg.setDestination(49162U);
    msg.setDestinationEntity(169U);
    msg.name.assign("KCOORLFBWTTIESGZBQHOBJEKUMOYVJWDYTVZUBSXHIGSKAUZPIHRPVGMLVZULODYFZCPNMSCQKCJWNGFTVDBLFDJXPEHCGKGHWTYCHUYWLZRDVDJRPBAYFKRXAVQVBWNUIRKGDTEHXXNJUOOPJWARGLUQEQXFIFLWNMOMTHSXSEQWAFTBTYXQSDSMVZAEAYRPNCCSRRYBU");
    msg.value = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.491221991623);
    msg.setSource(19688U);
    msg.setSourceEntity(79U);
    msg.setDestination(60960U);
    msg.setDestinationEntity(82U);
    msg.name.assign("BODJSVVDLWAOYFZLNQQGLYQVSNQXOKLUDNHPCDKCOJTHXZAJKLEGINTAAGZOSRREGRJSPBWYFWGMNTPXVCWOHNAUMFNVMPFURAHHJIHTINBQPXMDZDJXYKRMCDIZKDAVLKNTZWFGVPBRCZWYJYDJUYSBWQPTXKLEPMQIUBIPHNKUKLXOYJBIFFHWYAROBKXS");
    msg.value = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.176556774052);
    msg.setSource(1149U);
    msg.setSourceEntity(129U);
    msg.setDestination(12479U);
    msg.setDestinationEntity(58U);
    msg.name.assign("BSDCDYARRURMYXLEGDASWROKZKHRMTOOWJXMKJHRWSGUQUWGUIAIPFAZTFYXPJDPSROGCTOZNCAMZEZBSGBITXXPJIYQRXFGIVYBJEGVDYNLLPPQWQNHXXEZPAIAMQPMEVKLJIMQTOKOSVFZQHKXRWHBVTKTLYOITLZWFUDINDCHJGBWDYCVJPVHF");
    msg.value = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.010057518949);
    msg.setSource(13093U);
    msg.setSourceEntity(236U);
    msg.setDestination(44624U);
    msg.setDestinationEntity(205U);
    msg.id = 105U;
    msg.period = 3769800174U;
    msg.duty_cycle = 1443533996U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.270913187234);
    msg.setSource(38395U);
    msg.setSourceEntity(126U);
    msg.setDestination(28465U);
    msg.setDestinationEntity(26U);
    msg.id = 125U;
    msg.period = 1021268100U;
    msg.duty_cycle = 4081492074U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.721025019063);
    msg.setSource(5531U);
    msg.setSourceEntity(137U);
    msg.setDestination(11935U);
    msg.setDestinationEntity(20U);
    msg.id = 202U;
    msg.period = 3592726416U;
    msg.duty_cycle = 243392843U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.161469619213);
    msg.setSource(16109U);
    msg.setSourceEntity(20U);
    msg.setDestination(25970U);
    msg.setDestinationEntity(204U);
    msg.id = 114U;
    msg.period = 2441096439U;
    msg.duty_cycle = 1390128188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.138115099091);
    msg.setSource(34768U);
    msg.setSourceEntity(140U);
    msg.setDestination(3859U);
    msg.setDestinationEntity(42U);
    msg.id = 164U;
    msg.period = 172539922U;
    msg.duty_cycle = 1440934162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.935807937445);
    msg.setSource(41004U);
    msg.setSourceEntity(80U);
    msg.setDestination(49003U);
    msg.setDestinationEntity(166U);
    msg.id = 32U;
    msg.period = 961304498U;
    msg.duty_cycle = 2002342046U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.393828730322);
    msg.setSource(52888U);
    msg.setSourceEntity(110U);
    msg.setDestination(3770U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.0350967053912;
    msg.lon = 0.121497715547;
    msg.height = 0.334695899484;
    msg.x = 0.369764021422;
    msg.y = 0.030730285692;
    msg.z = 0.407896091986;
    msg.phi = 0.19401982671;
    msg.theta = 0.956795091213;
    msg.psi = 0.685220848784;
    msg.u = 0.838592068623;
    msg.v = 0.0111185280281;
    msg.w = 0.849291407028;
    msg.vx = 0.836691669292;
    msg.vy = 0.958486551281;
    msg.vz = 0.289176557988;
    msg.p = 0.488883498239;
    msg.q = 0.223492806021;
    msg.r = 0.845244420932;
    msg.depth = 0.158754482639;
    msg.alt = 0.606543589135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.892618559549);
    msg.setSource(31314U);
    msg.setSourceEntity(213U);
    msg.setDestination(10044U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.793626322152;
    msg.lon = 0.537306657445;
    msg.height = 0.0297050608863;
    msg.x = 0.570739232915;
    msg.y = 0.184839382939;
    msg.z = 0.324754819743;
    msg.phi = 0.412500720368;
    msg.theta = 0.284842856346;
    msg.psi = 0.851936913422;
    msg.u = 0.290242780162;
    msg.v = 0.368871171158;
    msg.w = 0.298259438263;
    msg.vx = 0.732414113983;
    msg.vy = 0.269836519736;
    msg.vz = 0.378027635776;
    msg.p = 0.970644134766;
    msg.q = 0.959191720053;
    msg.r = 0.257774924522;
    msg.depth = 0.69543118417;
    msg.alt = 0.661807303825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.713988659755);
    msg.setSource(53954U);
    msg.setSourceEntity(1U);
    msg.setDestination(31836U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.984075437672;
    msg.lon = 0.221946160751;
    msg.height = 0.0279801902413;
    msg.x = 0.515538089801;
    msg.y = 0.489383320711;
    msg.z = 0.289357900739;
    msg.phi = 0.818242212255;
    msg.theta = 0.0904696082221;
    msg.psi = 0.880783369723;
    msg.u = 0.863565196824;
    msg.v = 0.54063061057;
    msg.w = 0.745827191026;
    msg.vx = 0.859815866484;
    msg.vy = 0.629428736066;
    msg.vz = 0.827247584219;
    msg.p = 0.294205232436;
    msg.q = 0.519866784439;
    msg.r = 0.791359808662;
    msg.depth = 0.939747454103;
    msg.alt = 0.549333613515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.472581585827);
    msg.setSource(10895U);
    msg.setSourceEntity(1U);
    msg.setDestination(13349U);
    msg.setDestinationEntity(211U);
    msg.x = 0.247952805729;
    msg.y = 0.918056619049;
    msg.z = 0.225298531487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.798124146702);
    msg.setSource(35642U);
    msg.setSourceEntity(26U);
    msg.setDestination(16653U);
    msg.setDestinationEntity(142U);
    msg.x = 0.267340091717;
    msg.y = 0.718532729257;
    msg.z = 0.186156732426;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.536782915136);
    msg.setSource(21606U);
    msg.setSourceEntity(50U);
    msg.setDestination(1794U);
    msg.setDestinationEntity(207U);
    msg.x = 0.13105943941;
    msg.y = 0.892181294198;
    msg.z = 0.316209708123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.407719385544);
    msg.setSource(2412U);
    msg.setSourceEntity(135U);
    msg.setDestination(53946U);
    msg.setDestinationEntity(57U);
    msg.value = 0.539949687166;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.5643984186);
    msg.setSource(8933U);
    msg.setSourceEntity(242U);
    msg.setDestination(18612U);
    msg.setDestinationEntity(198U);
    msg.value = 0.607074114616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.287812400517);
    msg.setSource(33262U);
    msg.setSourceEntity(154U);
    msg.setDestination(11363U);
    msg.setDestinationEntity(78U);
    msg.value = 0.327407364642;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.507785009353);
    msg.setSource(37476U);
    msg.setSourceEntity(248U);
    msg.setDestination(27111U);
    msg.setDestinationEntity(219U);
    msg.value = 0.277695570598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.495513863675);
    msg.setSource(45880U);
    msg.setSourceEntity(3U);
    msg.setDestination(17441U);
    msg.setDestinationEntity(17U);
    msg.value = 0.481608872521;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.38543027662);
    msg.setSource(44556U);
    msg.setSourceEntity(107U);
    msg.setDestination(59915U);
    msg.setDestinationEntity(24U);
    msg.value = 0.37219054575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.187283634582);
    msg.setSource(32336U);
    msg.setSourceEntity(154U);
    msg.setDestination(2089U);
    msg.setDestinationEntity(99U);
    msg.x = 0.514038294103;
    msg.y = 0.277126477552;
    msg.z = 0.641535432029;
    msg.phi = 0.267885476157;
    msg.theta = 0.726532911861;
    msg.psi = 0.0447160693661;
    msg.p = 0.162506328443;
    msg.q = 0.742952982216;
    msg.r = 0.0880330435718;
    msg.u = 0.646081067589;
    msg.v = 0.522086919393;
    msg.w = 0.535405605767;
    msg.bias_psi = 0.250194383357;
    msg.bias_r = 0.660334996775;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.41677072486);
    msg.setSource(60135U);
    msg.setSourceEntity(95U);
    msg.setDestination(21481U);
    msg.setDestinationEntity(83U);
    msg.x = 0.266093320336;
    msg.y = 0.596071199092;
    msg.z = 0.769560071254;
    msg.phi = 0.787759437142;
    msg.theta = 0.389956223153;
    msg.psi = 0.126731321656;
    msg.p = 0.0779288281062;
    msg.q = 0.0847892322185;
    msg.r = 0.676010197489;
    msg.u = 0.244509551531;
    msg.v = 0.161890472551;
    msg.w = 0.0594879577639;
    msg.bias_psi = 0.72163096251;
    msg.bias_r = 0.472961191617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.436613180506);
    msg.setSource(33142U);
    msg.setSourceEntity(178U);
    msg.setDestination(33086U);
    msg.setDestinationEntity(86U);
    msg.x = 0.811660132975;
    msg.y = 0.290410130492;
    msg.z = 0.839813467351;
    msg.phi = 0.0606787650016;
    msg.theta = 0.358019684094;
    msg.psi = 0.707990323592;
    msg.p = 0.267189323175;
    msg.q = 0.831919357946;
    msg.r = 0.196903861295;
    msg.u = 0.862734047754;
    msg.v = 0.406059386518;
    msg.w = 0.0658516373963;
    msg.bias_psi = 0.866523084377;
    msg.bias_r = 0.51207028499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.784738569796);
    msg.setSource(3665U);
    msg.setSourceEntity(137U);
    msg.setDestination(33437U);
    msg.setDestinationEntity(102U);
    msg.bias_psi = 0.661659542276;
    msg.bias_r = 0.825797382538;
    msg.cog = 0.202938908194;
    msg.cyaw = 0.984637605023;
    msg.lbl_rej_level = 0.292181415716;
    msg.gps_rej_level = 0.158530508592;
    msg.custom_x = 0.452476985991;
    msg.custom_y = 0.278710599064;
    msg.custom_z = 0.0201589625535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.66435014794);
    msg.setSource(44934U);
    msg.setSourceEntity(76U);
    msg.setDestination(18057U);
    msg.setDestinationEntity(6U);
    msg.bias_psi = 0.365467114088;
    msg.bias_r = 0.484733818057;
    msg.cog = 0.950093347971;
    msg.cyaw = 0.503120949492;
    msg.lbl_rej_level = 0.720382409188;
    msg.gps_rej_level = 0.562425261148;
    msg.custom_x = 0.425559884334;
    msg.custom_y = 0.139007428288;
    msg.custom_z = 0.0483005146731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.0469411457564);
    msg.setSource(55922U);
    msg.setSourceEntity(87U);
    msg.setDestination(47935U);
    msg.setDestinationEntity(88U);
    msg.bias_psi = 0.724078597334;
    msg.bias_r = 0.392130316478;
    msg.cog = 0.399350644729;
    msg.cyaw = 0.43223604756;
    msg.lbl_rej_level = 0.614308158052;
    msg.gps_rej_level = 0.690438579267;
    msg.custom_x = 0.949772146297;
    msg.custom_y = 0.492228019105;
    msg.custom_z = 0.0355333386574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.755467714496);
    msg.setSource(52721U);
    msg.setSourceEntity(153U);
    msg.setDestination(43054U);
    msg.setDestinationEntity(39U);
    msg.utc_time = 0.913432005227;
    msg.reason = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.192737278049);
    msg.setSource(65414U);
    msg.setSourceEntity(133U);
    msg.setDestination(12521U);
    msg.setDestinationEntity(43U);
    msg.utc_time = 0.322321363671;
    msg.reason = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.786155753769);
    msg.setSource(53964U);
    msg.setSourceEntity(10U);
    msg.setDestination(33908U);
    msg.setDestinationEntity(133U);
    msg.utc_time = 0.214118228799;
    msg.reason = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.114201779119);
    msg.setSource(19805U);
    msg.setSourceEntity(123U);
    msg.setDestination(37905U);
    msg.setDestinationEntity(182U);
    msg.id = 248U;
    msg.range = 0.347455364359;
    msg.acceptance = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.943571764774);
    msg.setSource(38838U);
    msg.setSourceEntity(88U);
    msg.setDestination(54763U);
    msg.setDestinationEntity(210U);
    msg.id = 161U;
    msg.range = 0.506348865926;
    msg.acceptance = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.748736378334);
    msg.setSource(56441U);
    msg.setSourceEntity(81U);
    msg.setDestination(34304U);
    msg.setDestinationEntity(46U);
    msg.id = 233U;
    msg.range = 0.653897032431;
    msg.acceptance = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.00430990408337);
    msg.setSource(53262U);
    msg.setSourceEntity(120U);
    msg.setDestination(24114U);
    msg.setDestinationEntity(68U);
    msg.type = 37U;
    msg.reason = 12U;
    msg.value = 0.785509267228;
    msg.timestep = 0.51436529769;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.56723843822);
    msg.setSource(30618U);
    msg.setSourceEntity(57U);
    msg.setDestination(29429U);
    msg.setDestinationEntity(254U);
    msg.type = 236U;
    msg.reason = 0U;
    msg.value = 0.683944524387;
    msg.timestep = 0.855570079123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.455787675706);
    msg.setSource(57455U);
    msg.setSourceEntity(209U);
    msg.setDestination(43955U);
    msg.setDestinationEntity(169U);
    msg.type = 74U;
    msg.reason = 94U;
    msg.value = 0.279492127507;
    msg.timestep = 0.449235583568;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.961075567855);
    msg.setSource(27997U);
    msg.setSourceEntity(216U);
    msg.setDestination(55867U);
    msg.setDestinationEntity(3U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("INZDNEKDSJZFCTUEWGHTWGOFWMSCZQSJDPCXPLLLRWZXAXV");
    tmp_msg_0.lat = 0.687573204697;
    tmp_msg_0.lon = 0.539868504888;
    tmp_msg_0.depth = 0.164860628459;
    tmp_msg_0.query_channel = 50U;
    tmp_msg_0.reply_channel = 155U;
    tmp_msg_0.transponder_delay = 87U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.763188223123;
    msg.y = 0.910943921454;
    msg.var_x = 0.18586035914;
    msg.var_y = 0.89731914064;
    msg.distance = 0.553715117233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.534252705379);
    msg.setSource(63853U);
    msg.setSourceEntity(143U);
    msg.setDestination(60170U);
    msg.setDestinationEntity(45U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YMQQYGIBGJNEFFJHOSRQOIYBJLGTZVNZHIDRCMLCBJOGLIBPPKDDBVJ");
    tmp_msg_0.lat = 0.310868400483;
    tmp_msg_0.lon = 0.290776297513;
    tmp_msg_0.depth = 0.891007838046;
    tmp_msg_0.query_channel = 196U;
    tmp_msg_0.reply_channel = 227U;
    tmp_msg_0.transponder_delay = 171U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.714291593474;
    msg.y = 0.0523310120273;
    msg.var_x = 0.661860356974;
    msg.var_y = 0.620792657152;
    msg.distance = 0.68888342268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.0712360020116);
    msg.setSource(36746U);
    msg.setSourceEntity(94U);
    msg.setDestination(60726U);
    msg.setDestinationEntity(170U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NRLGVXYTASOJOSCUBEVDWDCKCEMXFTEQZDZMDZXRYGPBHVKNCRFPSGCUPHSIOCMFYFURMVSPJBICUSZLDTNITFMSHUZE");
    tmp_msg_0.lat = 0.292792799979;
    tmp_msg_0.lon = 0.877265010698;
    tmp_msg_0.depth = 0.877654757634;
    tmp_msg_0.query_channel = 82U;
    tmp_msg_0.reply_channel = 53U;
    tmp_msg_0.transponder_delay = 216U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.690712454745;
    msg.y = 0.470331779024;
    msg.var_x = 0.219403689233;
    msg.var_y = 0.752027480806;
    msg.distance = 0.913760892049;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.134528453743);
    msg.setSource(35980U);
    msg.setSourceEntity(168U);
    msg.setDestination(4508U);
    msg.setDestinationEntity(171U);
    msg.state = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.782751860816);
    msg.setSource(22576U);
    msg.setSourceEntity(74U);
    msg.setDestination(19104U);
    msg.setDestinationEntity(164U);
    msg.state = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.650139439343);
    msg.setSource(17272U);
    msg.setSourceEntity(198U);
    msg.setDestination(40513U);
    msg.setDestinationEntity(22U);
    msg.state = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.027516110646);
    msg.setSource(54842U);
    msg.setSourceEntity(190U);
    msg.setDestination(57849U);
    msg.setDestinationEntity(148U);
    msg.x = 0.945815491556;
    msg.y = 0.586400105449;
    msg.z = 0.255041255036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.671103877594);
    msg.setSource(12950U);
    msg.setSourceEntity(158U);
    msg.setDestination(17958U);
    msg.setDestinationEntity(215U);
    msg.x = 0.306696194273;
    msg.y = 0.997842723094;
    msg.z = 0.213889165025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.235892107988);
    msg.setSource(47423U);
    msg.setSourceEntity(122U);
    msg.setDestination(23432U);
    msg.setDestinationEntity(228U);
    msg.x = 0.770567865769;
    msg.y = 0.0262203421562;
    msg.z = 0.538820263781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.619359683035);
    msg.setSource(63449U);
    msg.setSourceEntity(35U);
    msg.setDestination(27189U);
    msg.setDestinationEntity(163U);
    msg.va = 0.167064542715;
    msg.aoa = 0.693607098641;
    msg.ssa = 0.30813654336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.562137599637);
    msg.setSource(61926U);
    msg.setSourceEntity(64U);
    msg.setDestination(34487U);
    msg.setDestinationEntity(134U);
    msg.va = 0.0284360969046;
    msg.aoa = 0.543478741333;
    msg.ssa = 0.39977118196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.471654254965);
    msg.setSource(22317U);
    msg.setSourceEntity(222U);
    msg.setDestination(56851U);
    msg.setDestinationEntity(61U);
    msg.va = 0.399539278964;
    msg.aoa = 0.446199596762;
    msg.ssa = 0.047548495063;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.115541899314);
    msg.setSource(35032U);
    msg.setSourceEntity(128U);
    msg.setDestination(26709U);
    msg.setDestinationEntity(97U);
    msg.value = 0.76403032827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.619814163439);
    msg.setSource(12148U);
    msg.setSourceEntity(93U);
    msg.setDestination(18480U);
    msg.setDestinationEntity(151U);
    msg.value = 0.620793656149;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.777969059359);
    msg.setSource(44709U);
    msg.setSourceEntity(168U);
    msg.setDestination(9692U);
    msg.setDestinationEntity(87U);
    msg.value = 0.420106663473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.140893323149);
    msg.setSource(56024U);
    msg.setSourceEntity(108U);
    msg.setDestination(444U);
    msg.setDestinationEntity(237U);
    msg.value = 0.454857219867;
    msg.z_units = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.902547502337);
    msg.setSource(55165U);
    msg.setSourceEntity(227U);
    msg.setDestination(2161U);
    msg.setDestinationEntity(17U);
    msg.value = 0.852036626985;
    msg.z_units = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.104268865165);
    msg.setSource(22012U);
    msg.setSourceEntity(119U);
    msg.setDestination(32391U);
    msg.setDestinationEntity(231U);
    msg.value = 0.319828076018;
    msg.z_units = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.296785941103);
    msg.setSource(50404U);
    msg.setSourceEntity(4U);
    msg.setDestination(43904U);
    msg.setDestinationEntity(232U);
    msg.value = 0.657883087454;
    msg.speed_units = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.590195267018);
    msg.setSource(30902U);
    msg.setSourceEntity(152U);
    msg.setDestination(48958U);
    msg.setDestinationEntity(22U);
    msg.value = 0.660934846269;
    msg.speed_units = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.140829088691);
    msg.setSource(46826U);
    msg.setSourceEntity(218U);
    msg.setDestination(55832U);
    msg.setDestinationEntity(24U);
    msg.value = 0.931430782108;
    msg.speed_units = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.0360232590853);
    msg.setSource(10166U);
    msg.setSourceEntity(242U);
    msg.setDestination(5260U);
    msg.setDestinationEntity(33U);
    msg.value = 0.999788063622;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.349485350589);
    msg.setSource(19776U);
    msg.setSourceEntity(78U);
    msg.setDestination(25160U);
    msg.setDestinationEntity(175U);
    msg.value = 0.796238998646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.0586203715364);
    msg.setSource(1297U);
    msg.setSourceEntity(168U);
    msg.setDestination(38043U);
    msg.setDestinationEntity(230U);
    msg.value = 0.419820274122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.457853368183);
    msg.setSource(8090U);
    msg.setSourceEntity(32U);
    msg.setDestination(12957U);
    msg.setDestinationEntity(25U);
    msg.value = 0.790455966998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.399846872182);
    msg.setSource(61340U);
    msg.setSourceEntity(181U);
    msg.setDestination(41124U);
    msg.setDestinationEntity(184U);
    msg.value = 0.660150089784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.0401569275455);
    msg.setSource(13966U);
    msg.setSourceEntity(3U);
    msg.setDestination(20117U);
    msg.setDestinationEntity(21U);
    msg.value = 0.890916284704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.311246745375);
    msg.setSource(45679U);
    msg.setSourceEntity(220U);
    msg.setDestination(18610U);
    msg.setDestinationEntity(68U);
    msg.value = 0.622350143984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.935659655989);
    msg.setSource(5480U);
    msg.setSourceEntity(39U);
    msg.setDestination(35617U);
    msg.setDestinationEntity(143U);
    msg.value = 0.177651540642;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.367505140545);
    msg.setSource(35593U);
    msg.setSourceEntity(177U);
    msg.setDestination(1058U);
    msg.setDestinationEntity(178U);
    msg.value = 0.733515041462;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.999064698506);
    msg.setSource(7914U);
    msg.setSourceEntity(128U);
    msg.setDestination(29814U);
    msg.setDestinationEntity(12U);
    msg.path_ref = 1080370667U;
    msg.start_lat = 0.19960715076;
    msg.start_lon = 0.835297934218;
    msg.start_z = 0.682619216352;
    msg.start_z_units = 7U;
    msg.end_lat = 0.462931884694;
    msg.end_lon = 0.120207636889;
    msg.end_z = 0.402616367357;
    msg.end_z_units = 106U;
    msg.speed = 0.877540668292;
    msg.speed_units = 107U;
    msg.lradius = 0.180713742854;
    msg.flags = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.0726627441211);
    msg.setSource(10282U);
    msg.setSourceEntity(198U);
    msg.setDestination(56355U);
    msg.setDestinationEntity(103U);
    msg.path_ref = 2833144050U;
    msg.start_lat = 0.672186005651;
    msg.start_lon = 0.445828569256;
    msg.start_z = 0.545180974731;
    msg.start_z_units = 152U;
    msg.end_lat = 0.135143772519;
    msg.end_lon = 0.566669835661;
    msg.end_z = 0.835093967425;
    msg.end_z_units = 34U;
    msg.speed = 0.593859284481;
    msg.speed_units = 115U;
    msg.lradius = 0.315313307073;
    msg.flags = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.548936814765);
    msg.setSource(560U);
    msg.setSourceEntity(3U);
    msg.setDestination(47428U);
    msg.setDestinationEntity(33U);
    msg.path_ref = 2526802137U;
    msg.start_lat = 0.865527862488;
    msg.start_lon = 0.362730065484;
    msg.start_z = 0.268761868;
    msg.start_z_units = 22U;
    msg.end_lat = 0.810094482349;
    msg.end_lon = 0.782921444546;
    msg.end_z = 0.680732188106;
    msg.end_z_units = 12U;
    msg.speed = 0.774870850232;
    msg.speed_units = 221U;
    msg.lradius = 0.44953251074;
    msg.flags = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.725390827692);
    msg.setSource(63422U);
    msg.setSourceEntity(222U);
    msg.setDestination(1631U);
    msg.setDestinationEntity(150U);
    msg.x = 0.954283504191;
    msg.y = 0.362082552824;
    msg.z = 0.438838828131;
    msg.k = 0.323864719208;
    msg.m = 0.994950345443;
    msg.n = 0.391626733963;
    msg.flags = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.102604675109);
    msg.setSource(63135U);
    msg.setSourceEntity(127U);
    msg.setDestination(49330U);
    msg.setDestinationEntity(59U);
    msg.x = 0.229005857455;
    msg.y = 0.889411233294;
    msg.z = 0.266901297904;
    msg.k = 0.937780407933;
    msg.m = 0.856974221617;
    msg.n = 0.565652525269;
    msg.flags = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.443267839058);
    msg.setSource(61308U);
    msg.setSourceEntity(217U);
    msg.setDestination(48327U);
    msg.setDestinationEntity(104U);
    msg.x = 0.370895209705;
    msg.y = 0.665527580089;
    msg.z = 0.148599647717;
    msg.k = 0.864880921903;
    msg.m = 0.72375203877;
    msg.n = 0.374717882138;
    msg.flags = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.344871895647);
    msg.setSource(12868U);
    msg.setSourceEntity(14U);
    msg.setDestination(44508U);
    msg.setDestinationEntity(80U);
    msg.value = 0.492034125656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.547333334561);
    msg.setSource(59151U);
    msg.setSourceEntity(9U);
    msg.setDestination(2651U);
    msg.setDestinationEntity(247U);
    msg.value = 0.365157103917;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.982576763062);
    msg.setSource(4181U);
    msg.setSourceEntity(96U);
    msg.setDestination(64757U);
    msg.setDestinationEntity(134U);
    msg.value = 0.749943461186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.139735252531);
    msg.setSource(52518U);
    msg.setSourceEntity(236U);
    msg.setDestination(16434U);
    msg.setDestinationEntity(166U);
    msg.u = 0.399103815783;
    msg.v = 0.844299982416;
    msg.w = 0.874827321335;
    msg.p = 0.521363114056;
    msg.q = 0.0734953525094;
    msg.r = 0.0627719734189;
    msg.flags = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.493406879464);
    msg.setSource(12914U);
    msg.setSourceEntity(220U);
    msg.setDestination(4074U);
    msg.setDestinationEntity(44U);
    msg.u = 0.0817463658796;
    msg.v = 0.570909506397;
    msg.w = 0.395989066101;
    msg.p = 0.310403695469;
    msg.q = 0.971831787405;
    msg.r = 0.896513687358;
    msg.flags = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.1166786009);
    msg.setSource(27019U);
    msg.setSourceEntity(37U);
    msg.setDestination(9753U);
    msg.setDestinationEntity(155U);
    msg.u = 0.674605163352;
    msg.v = 0.163381755652;
    msg.w = 0.98243301179;
    msg.p = 0.473610281722;
    msg.q = 0.180549783007;
    msg.r = 0.382943276423;
    msg.flags = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.116355188114);
    msg.setSource(20147U);
    msg.setSourceEntity(249U);
    msg.setDestination(41200U);
    msg.setDestinationEntity(163U);
    msg.path_ref = 3521251324U;
    msg.start_lat = 0.456270389132;
    msg.start_lon = 0.230320015275;
    msg.start_z = 0.763015700743;
    msg.start_z_units = 195U;
    msg.end_lat = 0.00885102309048;
    msg.end_lon = 0.697175308158;
    msg.end_z = 0.420739309833;
    msg.end_z_units = 202U;
    msg.lradius = 0.67458407457;
    msg.flags = 40U;
    msg.x = 0.264432784204;
    msg.y = 0.622852251389;
    msg.z = 0.0851833161232;
    msg.vx = 0.228165514864;
    msg.vy = 0.0164407000614;
    msg.vz = 0.554696877691;
    msg.course_error = 0.420074867898;
    msg.eta = 54989U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.990074968799);
    msg.setSource(4641U);
    msg.setSourceEntity(163U);
    msg.setDestination(5287U);
    msg.setDestinationEntity(224U);
    msg.path_ref = 3959824363U;
    msg.start_lat = 0.906061976143;
    msg.start_lon = 0.694305458376;
    msg.start_z = 0.320052482573;
    msg.start_z_units = 104U;
    msg.end_lat = 0.892467900008;
    msg.end_lon = 0.0627637286539;
    msg.end_z = 0.691921721438;
    msg.end_z_units = 125U;
    msg.lradius = 0.34875547647;
    msg.flags = 220U;
    msg.x = 0.897712287484;
    msg.y = 0.6066500213;
    msg.z = 0.716052427685;
    msg.vx = 0.0113152656101;
    msg.vy = 0.387033827457;
    msg.vz = 0.078185215034;
    msg.course_error = 0.491367222092;
    msg.eta = 26758U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.911875933133);
    msg.setSource(28366U);
    msg.setSourceEntity(220U);
    msg.setDestination(64558U);
    msg.setDestinationEntity(198U);
    msg.path_ref = 749159221U;
    msg.start_lat = 0.543881125329;
    msg.start_lon = 0.779184962018;
    msg.start_z = 0.748170755093;
    msg.start_z_units = 55U;
    msg.end_lat = 0.0767907734698;
    msg.end_lon = 0.486557082273;
    msg.end_z = 0.355527326562;
    msg.end_z_units = 119U;
    msg.lradius = 0.536080399125;
    msg.flags = 157U;
    msg.x = 0.166019395733;
    msg.y = 0.502994787673;
    msg.z = 0.363891152788;
    msg.vx = 0.549505235664;
    msg.vy = 0.319671734419;
    msg.vz = 0.632550571311;
    msg.course_error = 0.595933298096;
    msg.eta = 49792U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.9272408895);
    msg.setSource(13297U);
    msg.setSourceEntity(27U);
    msg.setDestination(29930U);
    msg.setDestinationEntity(146U);
    msg.k = 0.374299118153;
    msg.m = 0.928248738261;
    msg.n = 0.505135028268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.698980049469);
    msg.setSource(26019U);
    msg.setSourceEntity(153U);
    msg.setDestination(30902U);
    msg.setDestinationEntity(153U);
    msg.k = 0.0113718613578;
    msg.m = 0.418898008342;
    msg.n = 0.840466370809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.55746365879);
    msg.setSource(36350U);
    msg.setSourceEntity(118U);
    msg.setDestination(48624U);
    msg.setDestinationEntity(245U);
    msg.k = 0.867504928702;
    msg.m = 0.868465824943;
    msg.n = 0.825162073101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.211977824745);
    msg.setSource(56124U);
    msg.setSourceEntity(2U);
    msg.setDestination(31422U);
    msg.setDestinationEntity(12U);
    msg.p = 0.112848851395;
    msg.i = 0.680434033961;
    msg.d = 0.48107921983;
    msg.a = 0.132425901669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.96057117028);
    msg.setSource(41760U);
    msg.setSourceEntity(246U);
    msg.setDestination(15108U);
    msg.setDestinationEntity(251U);
    msg.p = 0.282501645477;
    msg.i = 0.0667355312051;
    msg.d = 0.796763229729;
    msg.a = 0.206976806855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.135269642862);
    msg.setSource(30608U);
    msg.setSourceEntity(108U);
    msg.setDestination(23327U);
    msg.setDestinationEntity(102U);
    msg.p = 0.629488801875;
    msg.i = 0.335955616026;
    msg.d = 0.583175130346;
    msg.a = 0.582256315395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.0424957845329);
    msg.setSource(45940U);
    msg.setSourceEntity(163U);
    msg.setDestination(908U);
    msg.setDestinationEntity(16U);
    msg.op = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.519730887724);
    msg.setSource(59526U);
    msg.setSourceEntity(175U);
    msg.setDestination(5867U);
    msg.setDestinationEntity(43U);
    msg.op = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.61944714582);
    msg.setSource(8832U);
    msg.setSourceEntity(18U);
    msg.setDestination(29062U);
    msg.setDestinationEntity(63U);
    msg.op = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.641874988554);
    msg.setSource(13088U);
    msg.setSourceEntity(84U);
    msg.setDestination(64358U);
    msg.setDestinationEntity(98U);
    msg.x = 0.572470281465;
    msg.y = 0.176546513238;
    msg.z = 0.925057509432;
    msg.vx = 0.180616596912;
    msg.vy = 0.8226422041;
    msg.vz = 0.46582614891;
    msg.ax = 0.142643095897;
    msg.ay = 0.251835624455;
    msg.az = 0.0816356131953;
    msg.flags = 35089U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.0729908655);
    msg.setSource(9862U);
    msg.setSourceEntity(199U);
    msg.setDestination(8440U);
    msg.setDestinationEntity(60U);
    msg.x = 0.561950281296;
    msg.y = 0.520205132235;
    msg.z = 0.832808884703;
    msg.vx = 0.603197075818;
    msg.vy = 0.680493026819;
    msg.vz = 0.832713957433;
    msg.ax = 0.503049366964;
    msg.ay = 0.67054415076;
    msg.az = 0.0767561125823;
    msg.flags = 40639U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.36378813125);
    msg.setSource(22829U);
    msg.setSourceEntity(209U);
    msg.setDestination(30008U);
    msg.setDestinationEntity(238U);
    msg.x = 0.0142957037621;
    msg.y = 0.0561742230158;
    msg.z = 0.880010110428;
    msg.vx = 0.671238338446;
    msg.vy = 0.24297579724;
    msg.vz = 0.691430423371;
    msg.ax = 0.157785443738;
    msg.ay = 0.376211191065;
    msg.az = 0.236870124688;
    msg.flags = 50868U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.597976341864);
    msg.setSource(53358U);
    msg.setSourceEntity(12U);
    msg.setDestination(26041U);
    msg.setDestinationEntity(103U);
    msg.value = 0.362735942364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.533063368764);
    msg.setSource(47713U);
    msg.setSourceEntity(38U);
    msg.setDestination(35063U);
    msg.setDestinationEntity(27U);
    msg.value = 0.740392128392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.498612436214);
    msg.setSource(23661U);
    msg.setSourceEntity(81U);
    msg.setDestination(18865U);
    msg.setDestinationEntity(46U);
    msg.value = 0.296255987656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.23519432448);
    msg.setSource(47556U);
    msg.setSourceEntity(100U);
    msg.setDestination(25586U);
    msg.setDestinationEntity(39U);
    msg.timeout = 9125U;
    msg.lat = 0.975172857108;
    msg.lon = 0.0134352954191;
    msg.z = 0.373137783936;
    msg.z_units = 26U;
    msg.speed = 0.637874403021;
    msg.speed_units = 162U;
    msg.roll = 0.188912186333;
    msg.pitch = 0.45356990017;
    msg.yaw = 0.81499535205;
    msg.custom.assign("ZTCBXIDTPJUKKAVZJUYNIAPJRCYYULSFWCECXUHVTXTICITEKVMVNYMSEXGTWRLIZEJESIXNSTLTAUVYEZUFIHSUJWORMYZZLOLAHPJSVUBQJYCLQNDECPFYLDESJIMHKTQDZWAKEBKPFKNZBXRPFSHFNWZQQKQOQBIVVKPGWLVZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.565922102368);
    msg.setSource(45930U);
    msg.setSourceEntity(100U);
    msg.setDestination(45293U);
    msg.setDestinationEntity(145U);
    msg.timeout = 11270U;
    msg.lat = 0.0623113201931;
    msg.lon = 0.774865797932;
    msg.z = 0.898979851723;
    msg.z_units = 148U;
    msg.speed = 0.102075426606;
    msg.speed_units = 140U;
    msg.roll = 0.570482616195;
    msg.pitch = 0.626956439809;
    msg.yaw = 0.33152366726;
    msg.custom.assign("AZXCDYLLOMSSQBIUBBXVSXADGWZMNEPKFTELGRXZAKHYKIBPEPRZRLHCGGQGQBBIGFAJYOIYVKOHDSUHWRJFRIRDVFXSPTAUHUUTJFCWAGJWWOOMVAQOSZZUOXYDWDTEBNHBYJURWONSMVTNXHWNFAMLJEPMTQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.771218836546);
    msg.setSource(56536U);
    msg.setSourceEntity(141U);
    msg.setDestination(39719U);
    msg.setDestinationEntity(112U);
    msg.timeout = 51490U;
    msg.lat = 0.63061456223;
    msg.lon = 0.00504031919382;
    msg.z = 0.265572550076;
    msg.z_units = 31U;
    msg.speed = 0.0771267145506;
    msg.speed_units = 21U;
    msg.roll = 0.466005709095;
    msg.pitch = 0.797783082947;
    msg.yaw = 0.843369069695;
    msg.custom.assign("QOUNXRBOYSZNEXIUHBGLMTDNMGKICBEUMWGRQGKBMMSONQTZFAPTUHZOLQKPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.580274731466);
    msg.setSource(3815U);
    msg.setSourceEntity(181U);
    msg.setDestination(46451U);
    msg.setDestinationEntity(177U);
    msg.timeout = 41470U;
    msg.lat = 0.416610167101;
    msg.lon = 0.147985463439;
    msg.z = 0.859930552165;
    msg.z_units = 38U;
    msg.speed = 0.625694441952;
    msg.speed_units = 33U;
    msg.duration = 5996U;
    msg.radius = 0.190179773896;
    msg.flags = 201U;
    msg.custom.assign("EULJQCAKSSXXTPYEYMQXWTPZADYXLSLYMKRLTWHYIYINDWOBGBUWMECKDJELHLTBUQCHNRRJGGRAWEKFPJBOOPMHYVURPNWJSPVAOXQZZUFMKUYQTNFNASNSRFOQEKPVCGIBARAAXVOZQUYVIYCPSXUWGCGZIVLCBJBTSONDXCODLRMNZQKBNDPBLEKQRSFGJZWFGXTILVPFJZSTKHVIHGUMCDTJQEHDIZBVDCGOWHRAWEFMHUINI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.254772723691);
    msg.setSource(7751U);
    msg.setSourceEntity(240U);
    msg.setDestination(6953U);
    msg.setDestinationEntity(11U);
    msg.timeout = 33564U;
    msg.lat = 0.732613295318;
    msg.lon = 0.288589395544;
    msg.z = 0.243493022583;
    msg.z_units = 140U;
    msg.speed = 0.946610613753;
    msg.speed_units = 33U;
    msg.duration = 49616U;
    msg.radius = 0.182173879213;
    msg.flags = 67U;
    msg.custom.assign("IPRLMFYHYUSKQEXSRJXSWAQAJUVNCTBSOMSOUTJVGENTYKWSHDHUGABFGZOPALGUKOALYSTZFLNQDMKEXVYZJVDFGFINQJBHOOSXNXLMWWIRTIBPHYAVTGDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.497364914769);
    msg.setSource(31461U);
    msg.setSourceEntity(169U);
    msg.setDestination(26337U);
    msg.setDestinationEntity(11U);
    msg.timeout = 21712U;
    msg.lat = 0.0264094486678;
    msg.lon = 0.431009523409;
    msg.z = 0.645230186668;
    msg.z_units = 143U;
    msg.speed = 0.145877474821;
    msg.speed_units = 190U;
    msg.duration = 63711U;
    msg.radius = 0.7899251483;
    msg.flags = 108U;
    msg.custom.assign("KBQLFKNBFSTACNANZPNWCFPEXGKMDCXJUZZJVBDZCTGUHIUVHMBTLWHLYPSYEZMDQHSNFQMXSWGYCSCGELJRYOTDQKOKXUHEIJZZOYELCPOITLZMPYNQIKHJOMFRDCKVVDGMNFJJUSAWGIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.645487071021);
    msg.setSource(58850U);
    msg.setSourceEntity(115U);
    msg.setDestination(17020U);
    msg.setDestinationEntity(23U);
    msg.custom.assign("AVYGSDANMVBUMGEDBMTCMODRUFTODDEQFYIWZAQHKERZWOPBOFDLOPWMNVZGRNZLETCKTEZDWLLGQGUTXNMXSGARZPXFVFACJQGXKJKZYQDCQUUWBQHALPYQPOTCNILIBYRLSBEUBAIJFYWHIIHVCCETSSXUVGMKKVNORHPENOKXVLSZHISRTNPSHQDWXNZTCUDSIJJNMUYJAKHPTYZYBESGEXJWMKKRAQXVJFYFUCORJPIGOFBJH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.755280013558);
    msg.setSource(9380U);
    msg.setSourceEntity(140U);
    msg.setDestination(11746U);
    msg.setDestinationEntity(17U);
    msg.custom.assign("CHQDSKAJQDNOPRPLBOSLWGDXMNJTYCNJTDLYYCRJVYTWNBMHZR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.625492866637);
    msg.setSource(47702U);
    msg.setSourceEntity(9U);
    msg.setDestination(18727U);
    msg.setDestinationEntity(77U);
    msg.custom.assign("YJJMCJZRZXSOAFVTIZSVBTQWDAYXYUHUOAMRGYFQYKDZWHLQXSPIJOWRPTMZTBPQGNYDCTJOPWBNVLFKKVBLQAFJOZUWRTXRENENNXJMVSLPEBCFSAJEMGMPCVVNAFNSAGYVIKIUWHOSBEKEPGERHBZUTXFOCUTKEEQQHPKHPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.047278726371);
    msg.setSource(31841U);
    msg.setSourceEntity(154U);
    msg.setDestination(46356U);
    msg.setDestinationEntity(114U);
    msg.timeout = 50323U;
    msg.lat = 0.245933017044;
    msg.lon = 0.753995444034;
    msg.z = 0.289133192154;
    msg.z_units = 108U;
    msg.duration = 4645U;
    msg.speed = 0.380700723236;
    msg.speed_units = 23U;
    msg.type = 108U;
    msg.radius = 0.244942948454;
    msg.length = 0.0579180240466;
    msg.bearing = 0.571308316623;
    msg.direction = 55U;
    msg.custom.assign("SFZCVAFHCEKECXQHKQXZFWJYIMTJGEIAPZHONOHJNOBSUBWMZULPUNGHAAYXAECSAPKNRNXZLZUVAIDAQFPOFVLVWWTJZKBDPTVSJHXTZDRYQQYSMTRBHCGBKBDHLGULUDMKYMELUVBWDXWXGDYSGGEZKUKPVJTKYHRDIAXTIYWMFGKVSEIRJJRXUFPCZIUBNCONNQDOCPOQWQOMIRFNRLYGOTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.266601645802);
    msg.setSource(63989U);
    msg.setSourceEntity(137U);
    msg.setDestination(49461U);
    msg.setDestinationEntity(108U);
    msg.timeout = 15486U;
    msg.lat = 0.871457041162;
    msg.lon = 0.62756129452;
    msg.z = 0.842697485119;
    msg.z_units = 70U;
    msg.duration = 5444U;
    msg.speed = 0.173464315501;
    msg.speed_units = 39U;
    msg.type = 99U;
    msg.radius = 0.0598054275938;
    msg.length = 0.662098047234;
    msg.bearing = 0.583639085006;
    msg.direction = 126U;
    msg.custom.assign("DAKKUHLUKCFEFDYYYNAGKKHVANIESBEYUGYUQCDSPNKPIUARALTEAQREDRSTJZDZASWVHYXPHTWCKLUIVFVZHXBUSAOPIWSYJHGMFTEWBZBNCDTPGWVLXEBPTSVVBJGQFMQYCMVNLTKWCWQGZLJMIZJRXBMDMVHQDQGOROZGMSURTNSXBQIOIMOZLFUQWJOJDIDXHHXWOFFCWBLGFJAKGKITJERCQAOPCTMXNUYIPORFPJBYPRLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.349085407389);
    msg.setSource(40087U);
    msg.setSourceEntity(184U);
    msg.setDestination(42297U);
    msg.setDestinationEntity(176U);
    msg.timeout = 38843U;
    msg.lat = 0.843804146712;
    msg.lon = 0.25854706912;
    msg.z = 0.425799835057;
    msg.z_units = 20U;
    msg.duration = 60736U;
    msg.speed = 0.118711833288;
    msg.speed_units = 25U;
    msg.type = 174U;
    msg.radius = 0.608064957583;
    msg.length = 0.386524788835;
    msg.bearing = 0.268457982888;
    msg.direction = 142U;
    msg.custom.assign("QNANUEBFDJJTSILSAMLECLVTOCINCVJVXSBDNFNGGPWELGGMRYHDSJFVHMRZYGLNLEALWTXIUFUPSZAKELWRCPXFNTKIBROKKKQGPJZORZSFIBYXNZYPWIADHJRXCVFTUMZQKCDOCEHPOXELAWHUGKUTQDSFYQUHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.757118417416);
    msg.setSource(43786U);
    msg.setSourceEntity(219U);
    msg.setDestination(3929U);
    msg.setDestinationEntity(104U);
    msg.duration = 54442U;
    msg.custom.assign("RCYCSYUZSRWMYXPKMYITWZOAOOKVJFQOHUTMVJPHZAQWFPABILKBIWRMTHNUTNEVRHCWBAIUSHXSYVPOTLTGXQYGNMFSCKYFSQPDJGBNXKUMNIHLHWLDMZLTDZSVVYRXDJXCQHXOLVQOZFZGBWCLSDSKERUPRBCDEMODZRLJPAJVZFWNJPZINUBXAABGFEJYGGQBPDHVOFQXSOETWKFUPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.860184804611);
    msg.setSource(9919U);
    msg.setSourceEntity(122U);
    msg.setDestination(1564U);
    msg.setDestinationEntity(147U);
    msg.duration = 25843U;
    msg.custom.assign("UDUKVRUBWNGGMBLMVMYWYTPGBHCQWIMEJFQATRCFRHGMCVZATSDUTXNWNNKNMRDBITCVEMIZNPAWOBATHEEDZUKQPOZWOBRFCSUPQIFDVSDRYYHPFJJCPHNFVEZXCRZKGEIEKIDKAXOSUJZPMFBKGSZOLMLFCOQLOQEEVCXDXGIAFLYXAQIHOCXPHJLWPNJSRSGHATWQOVDOXTSLVMQHLTAZVUBSNDIPYAXYRKJHBQZLGTJUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.190836573227);
    msg.setSource(51651U);
    msg.setSourceEntity(40U);
    msg.setDestination(44061U);
    msg.setDestinationEntity(40U);
    msg.duration = 52616U;
    msg.custom.assign("NCYLJOMBXPNTPSPBIVDAWHJMZBFDIKRZVBCZKDIEDZLLYXRASAEHFXCCKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.266329057637);
    msg.setSource(37059U);
    msg.setSourceEntity(132U);
    msg.setDestination(63336U);
    msg.setDestinationEntity(177U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.0469263118613;
    tmp_msg_0.z_units = 227U;
    msg.control.set(tmp_msg_0);
    msg.duration = 1893U;
    msg.custom.assign("UKPDXTYOTEZFYCIIXYGZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.806460869651);
    msg.setSource(20578U);
    msg.setSourceEntity(79U);
    msg.setDestination(43318U);
    msg.setDestinationEntity(101U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.514575121459;
    msg.control.set(tmp_msg_0);
    msg.duration = 60516U;
    msg.custom.assign("CYILIJRCREERMLFQGDYXSIVSHVAWVYPWRDAGKZSJEPBRDCQYVHFQRYPUZFHMFJTSDBFQVDTBSOMLZBLAKVHWLUGDKJQKIQWYZKCCATXAMZEAJCGKLEUMHYGUMRSLPWUVCISPRSWYIEZWEBFQQBNTXDYEPQNEJTWUGNATZMWSNYCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.42276861685);
    msg.setSource(18752U);
    msg.setSourceEntity(224U);
    msg.setDestination(6621U);
    msg.setDestinationEntity(141U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.46345056191;
    tmp_msg_0.speed_units = 47U;
    msg.control.set(tmp_msg_0);
    msg.duration = 8335U;
    msg.custom.assign("QSVJWMHQKRHOFHMXOZGVEGNFROIYUCEKRBPIXSPMJPRNWPIVHSZMLCUVKOJRVAWMKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.960224077576);
    msg.setSource(30357U);
    msg.setSourceEntity(20U);
    msg.setDestination(62658U);
    msg.setDestinationEntity(244U);
    msg.timeout = 64026U;
    msg.lat = 0.835668388607;
    msg.lon = 0.216055262172;
    msg.z = 0.7067748197;
    msg.z_units = 1U;
    msg.speed = 0.638074335812;
    msg.speed_units = 171U;
    msg.bearing = 0.867019107302;
    msg.cross_angle = 0.742979139756;
    msg.width = 0.148639378849;
    msg.length = 0.0529716820748;
    msg.hstep = 0.296702250701;
    msg.coff = 32U;
    msg.alternation = 142U;
    msg.flags = 147U;
    msg.custom.assign("CTCUKTJLWTKKPUXLFQMYPVHKIWZAMVGUSAOPJPJVHMVERHYRTJUYGXIHPQMFSVENESUWDLZFGLFEDZRTFCGYUJXLHQNCIEJFNNKHOMKIMVAAQAKCBAOSVZSZGDTKMHBPSZSDGNWHFOBWBJBLAUXKLEADWORDTQYSPHBATLUWRMYNDZWDOCAXIIQWQXNIJGVXMEFJBGXIIYDCIGUQRZNSTEXJRZQYLOPOSYYDBBKGRPEFCOEPRVWUCMNCVBZH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.99435552331);
    msg.setSource(32503U);
    msg.setSourceEntity(98U);
    msg.setDestination(46814U);
    msg.setDestinationEntity(68U);
    msg.timeout = 38101U;
    msg.lat = 0.307958643102;
    msg.lon = 0.793135449514;
    msg.z = 0.590187004714;
    msg.z_units = 199U;
    msg.speed = 0.942817045658;
    msg.speed_units = 156U;
    msg.bearing = 0.128495114849;
    msg.cross_angle = 0.427561853196;
    msg.width = 0.596095916336;
    msg.length = 0.380050365902;
    msg.hstep = 0.665136403106;
    msg.coff = 146U;
    msg.alternation = 213U;
    msg.flags = 1U;
    msg.custom.assign("AGYXWYSJIAFCCULVHVQFYTCSKBCNGEDIZFPCGRZVYQYGAQMBBEOHORDKVMUUOEJFZHLNWKNXJYYQEOPPKIASMZBXOMZNJUOAVGHPKGELQLCWBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.0341471898318);
    msg.setSource(63590U);
    msg.setSourceEntity(97U);
    msg.setDestination(59847U);
    msg.setDestinationEntity(45U);
    msg.timeout = 29927U;
    msg.lat = 0.433091764172;
    msg.lon = 0.769262032972;
    msg.z = 0.717150277955;
    msg.z_units = 96U;
    msg.speed = 0.449695452319;
    msg.speed_units = 56U;
    msg.bearing = 0.421718555673;
    msg.cross_angle = 0.148184856195;
    msg.width = 0.28827427589;
    msg.length = 0.266061955967;
    msg.hstep = 0.344436031797;
    msg.coff = 209U;
    msg.alternation = 83U;
    msg.flags = 23U;
    msg.custom.assign("PQMXCYZALOQBSBTUBNEZMSIJPOKHBOBEFSEOJWHJBQPGQGAQVXFCGTXSSYMAHDOIGZARDNROIVPSHWOFZJFTDQQXEAJHHIARKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.907542095848);
    msg.setSource(53921U);
    msg.setSourceEntity(199U);
    msg.setDestination(47507U);
    msg.setDestinationEntity(152U);
    msg.timeout = 2547U;
    msg.lat = 0.532850378448;
    msg.lon = 0.772830179773;
    msg.z = 0.881040270509;
    msg.z_units = 184U;
    msg.speed = 0.489637811011;
    msg.speed_units = 130U;
    msg.custom.assign("OELLOWFGVPREWRWKQPVAXJMTARCZZGSZSXSWYKDDWSABGVCFVORLSTWISCJVUTCYOYNEYPYNQLGFQJDJHLIODUWXEDCZUSRFFGFYOAUXSMJHGNPWRTBXELMJZYYFZDWQCNILICQPAVFVRKNKZVUGJPTROHOEAIQEHYJNKVOZMUMRU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.423406373904);
    msg.setSource(55513U);
    msg.setSourceEntity(23U);
    msg.setDestination(13381U);
    msg.setDestinationEntity(175U);
    msg.timeout = 40066U;
    msg.lat = 0.90372241074;
    msg.lon = 0.0750179299697;
    msg.z = 0.556020484264;
    msg.z_units = 245U;
    msg.speed = 0.620128303663;
    msg.speed_units = 3U;
    msg.custom.assign("UHBCRFWOCTGSXCWJGFPPNPADEYWRKQKODHZVLQATBZSJMBVMBPPEODQNCJDYAPQMOEJAKYEALZUBNISELJGEXHCGKHXNVRYGVUCUIIQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.0684928609133);
    msg.setSource(50520U);
    msg.setSourceEntity(106U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(249U);
    msg.timeout = 22403U;
    msg.lat = 0.675159013992;
    msg.lon = 0.909500574606;
    msg.z = 0.182474982275;
    msg.z_units = 174U;
    msg.speed = 0.351624697752;
    msg.speed_units = 93U;
    msg.custom.assign("VLLOIWKPHQLORCYDZNYQHTNVKXDRAAPPQECFGTHQXABZEDWTFXFEMHAJWBZHLMXZTJPHOCWVPURSYBMSKTEQGBINQMIDEXJRYSOJBUJLCRMSSIZXYOYNKHDCYEGNORWXTFBWGEGHKRBYDTLDGUCSQBZDMUIRFONAEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.879978283734);
    msg.setSource(50558U);
    msg.setSourceEntity(83U);
    msg.setDestination(20930U);
    msg.setDestinationEntity(56U);
    msg.x = 0.618367241056;
    msg.y = 0.469897023488;
    msg.z = 0.507889513305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.00943694682624);
    msg.setSource(57964U);
    msg.setSourceEntity(13U);
    msg.setDestination(19206U);
    msg.setDestinationEntity(191U);
    msg.x = 0.642262440453;
    msg.y = 0.63933072796;
    msg.z = 0.905589088386;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.466759892279);
    msg.setSource(32314U);
    msg.setSourceEntity(238U);
    msg.setDestination(65226U);
    msg.setDestinationEntity(156U);
    msg.x = 0.679427119882;
    msg.y = 0.0610941077171;
    msg.z = 0.649502863235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.14440001609);
    msg.setSource(23212U);
    msg.setSourceEntity(217U);
    msg.setDestination(25776U);
    msg.setDestinationEntity(27U);
    msg.timeout = 60696U;
    msg.lat = 0.956978731757;
    msg.lon = 0.997703880481;
    msg.z = 0.141561205817;
    msg.z_units = 235U;
    msg.amplitude = 0.560142111676;
    msg.pitch = 0.605380962957;
    msg.speed = 0.0159231470672;
    msg.speed_units = 111U;
    msg.custom.assign("UOUWERSMELJNHXTRZOK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.101188412273);
    msg.setSource(27916U);
    msg.setSourceEntity(210U);
    msg.setDestination(701U);
    msg.setDestinationEntity(253U);
    msg.timeout = 1569U;
    msg.lat = 0.417979298578;
    msg.lon = 0.246717772669;
    msg.z = 0.125408984309;
    msg.z_units = 222U;
    msg.amplitude = 0.244901899886;
    msg.pitch = 0.666908108468;
    msg.speed = 0.943345840305;
    msg.speed_units = 6U;
    msg.custom.assign("MEYKWREXTETQSQZOYZNXDLVDWXHIGRGCERQNLEYMNGVVMNSVRCZQSMIITOUATULRFHTEVOMSYZLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.382562815587);
    msg.setSource(45896U);
    msg.setSourceEntity(177U);
    msg.setDestination(20617U);
    msg.setDestinationEntity(20U);
    msg.timeout = 44943U;
    msg.lat = 0.661908851532;
    msg.lon = 0.271906862096;
    msg.z = 0.334153380251;
    msg.z_units = 165U;
    msg.amplitude = 0.500290666251;
    msg.pitch = 0.761668631843;
    msg.speed = 0.400777502222;
    msg.speed_units = 86U;
    msg.custom.assign("QRRCDEDLVNCCVHRGZFDHALDYEJFKQTUOYIRVWFOONPMUWUJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.422222756371);
    msg.setSource(17409U);
    msg.setSourceEntity(105U);
    msg.setDestination(801U);
    msg.setDestinationEntity(169U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.881008020636);
    msg.setSource(15270U);
    msg.setSourceEntity(44U);
    msg.setDestination(26979U);
    msg.setDestinationEntity(3U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.492785061407);
    msg.setSource(54246U);
    msg.setSourceEntity(55U);
    msg.setDestination(56713U);
    msg.setDestinationEntity(144U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.0109315872256);
    msg.setSource(29523U);
    msg.setSourceEntity(223U);
    msg.setDestination(18567U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.971775547381;
    msg.lon = 0.526540581293;
    msg.z = 0.668793906468;
    msg.z_units = 90U;
    msg.radius = 0.358352119861;
    msg.duration = 21669U;
    msg.speed = 0.329895490313;
    msg.speed_units = 134U;
    msg.custom.assign("WEIGJJOYVGXCMOKMMGKUAJVLFZYHEWTQDWHUDMRSINCZOJIMCAROEPKWBAUCHFCOARUFPSNFOLNPXMZZVQGVLFIPEJZWGUWNSTJTRALHLEKYADORXXYNWJVBUDDRXBSCQZJDBKEBLACOHFCHVGAEYQSVXEQPUCRTDGGHVPRWYACKFHKSIOBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.00164232350847);
    msg.setSource(33015U);
    msg.setSourceEntity(219U);
    msg.setDestination(2054U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.920552818118;
    msg.lon = 0.17030906134;
    msg.z = 0.999161957766;
    msg.z_units = 99U;
    msg.radius = 0.323875465691;
    msg.duration = 34941U;
    msg.speed = 0.678996435806;
    msg.speed_units = 82U;
    msg.custom.assign("EVVKZNKACKMDOWVIYXBQPJPMKZEIDEPWVDOCFOLLODTSUHTOQPGPWFSRWVFZXHIAHBLGYEGTDGZCRFFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.721723468183);
    msg.setSource(35708U);
    msg.setSourceEntity(18U);
    msg.setDestination(22287U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.867063504598;
    msg.lon = 0.135227450701;
    msg.z = 0.00801673481049;
    msg.z_units = 128U;
    msg.radius = 0.806598525675;
    msg.duration = 31491U;
    msg.speed = 0.337435920564;
    msg.speed_units = 9U;
    msg.custom.assign("OKLPNKUCXCOSJAIFVSIVZYWFQLNJSBYCPWQCTJTKTQYVIEZOALHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.808452596014);
    msg.setSource(62793U);
    msg.setSourceEntity(42U);
    msg.setDestination(58156U);
    msg.setDestinationEntity(111U);
    msg.timeout = 22961U;
    msg.flags = 109U;
    msg.lat = 0.124130982118;
    msg.lon = 0.382297263583;
    msg.start_z = 0.797958406829;
    msg.start_z_units = 5U;
    msg.end_z = 0.296491803774;
    msg.end_z_units = 198U;
    msg.radius = 0.122511572995;
    msg.speed = 0.308376769775;
    msg.speed_units = 28U;
    msg.custom.assign("YJRFSKFGDCYTTMTTNQFUHSQCFQJJQPOQSAFHGDNQLZLBEIJDRXUCIFPDNPJKMHVIBPYVLNCZZTLUEMJBGCWKNUIZUDNHIREAOKVMWAYHLBVEPWJTSZAXGBNPKLDIGVVMCPIEIULYUYCMQBXPWVRWZENAKLXMXPMXGRVTDCNTQVZXOCNOZAELJMVBKBLGYZOEEYWRSTUIHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.00514176226774);
    msg.setSource(60834U);
    msg.setSourceEntity(104U);
    msg.setDestination(19447U);
    msg.setDestinationEntity(66U);
    msg.timeout = 7345U;
    msg.flags = 173U;
    msg.lat = 0.578625838826;
    msg.lon = 0.0408830261149;
    msg.start_z = 0.607130091258;
    msg.start_z_units = 206U;
    msg.end_z = 0.67116990605;
    msg.end_z_units = 159U;
    msg.radius = 0.561805552863;
    msg.speed = 0.129338746079;
    msg.speed_units = 40U;
    msg.custom.assign("BINDVKSMRDPKSGKQTQYVNPWLDVPPABREHMJUVDCMTCLPRFFTQUVOAFSGWHWAFEQNTXTZCLYDGTARUOMPYUUJQHCICJNVHPVDMJBLISLRFLUYIKAHIIWBBIMODZXLACJUCEXOPNAEEXMKNEZHQNXWUZBOPRQHKVHJEKIOFXVXXWSPJJKZNEWDOYUGGTFWQRWIAYBIRVSZFSRTUBZCGAGHKZGOMEELMYFDBXJZGQKSLMXJYDNYBLYSGRAQWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.0970619920505);
    msg.setSource(31311U);
    msg.setSourceEntity(49U);
    msg.setDestination(32601U);
    msg.setDestinationEntity(247U);
    msg.timeout = 58060U;
    msg.flags = 26U;
    msg.lat = 0.474174070232;
    msg.lon = 0.632711067574;
    msg.start_z = 0.510977365245;
    msg.start_z_units = 183U;
    msg.end_z = 0.185084404464;
    msg.end_z_units = 251U;
    msg.radius = 0.56363568084;
    msg.speed = 0.0172797565748;
    msg.speed_units = 201U;
    msg.custom.assign("GHVLSYXSOPMHWXOIVTBGGFPAOCHRIMTKTIDBHNZYJRUVAFSZEUCFKFZYNOMEIKDQMLDDWUOOFJLTVLMWABWVMNDDRBGRJXZJSNVYJKEESQLSKXMCJJEIRQPTXYYQSJK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.199734435494);
    msg.setSource(31843U);
    msg.setSourceEntity(57U);
    msg.setDestination(36162U);
    msg.setDestinationEntity(37U);
    msg.timeout = 61709U;
    msg.lat = 0.777468780673;
    msg.lon = 0.986015818971;
    msg.z = 0.492671081699;
    msg.z_units = 215U;
    msg.speed = 0.334237546626;
    msg.speed_units = 91U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.783991958376;
    tmp_msg_0.y = 0.512830100684;
    tmp_msg_0.z = 0.0366827443929;
    tmp_msg_0.t = 0.0411827772115;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HIDDGAQBTVGEBRJAZCIFYJJZMXGOLFBTJKNDWTGHPFUCCQFLWVXQQHRIGFOVOUBQAOTOPILXMSWSOUDHZPEUVZRAKVSJYREPSJUQAAVSIEMRNROXCZNIWIMAUIRJPBZUPEEABPYJYSTXHKQYPHHTXBLBCLBWMSZJTYGHMEKGDDTKDUCASVQQZLFTKRCWYZJSXFLMLODTRYUYXDKNLMHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.64663103847);
    msg.setSource(48771U);
    msg.setSourceEntity(58U);
    msg.setDestination(15544U);
    msg.setDestinationEntity(133U);
    msg.timeout = 9375U;
    msg.lat = 0.358272543174;
    msg.lon = 0.211200788822;
    msg.z = 0.653498807907;
    msg.z_units = 139U;
    msg.speed = 0.80883127402;
    msg.speed_units = 98U;
    msg.custom.assign("WCRLEOGKHHXJJRZVKUDPVYGOFSCZACDNUNGDLOTKWXTEVHZOPCQLFHGVNWEBEUXFRWABVXFFRQOVHRZEMUWYPPGFJZXRFANSCGXFLKOEGWSDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.287709279317);
    msg.setSource(28959U);
    msg.setSourceEntity(223U);
    msg.setDestination(18516U);
    msg.setDestinationEntity(161U);
    msg.timeout = 11760U;
    msg.lat = 0.672529118437;
    msg.lon = 0.898393569368;
    msg.z = 0.351476912811;
    msg.z_units = 202U;
    msg.speed = 0.189385946175;
    msg.speed_units = 162U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.110330167618;
    tmp_msg_0.y = 0.572710465626;
    tmp_msg_0.z = 0.671345542886;
    tmp_msg_0.t = 0.0568322280044;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TDKFURHKRMMLDBTTNZCMWOMMUDLQJASOJWYMIUYCJEEAALPONYVSNYJDCVXQVAFGNOPAIAYLLLWMTGUZRXCXJWRGJCQKPXEDBIYNIHOWSERCNNWPEEEFPTGJFFZKEPEGVAITMRGDBIKOCVGKYXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.319132585302);
    msg.setSource(10913U);
    msg.setSourceEntity(59U);
    msg.setDestination(17982U);
    msg.setDestinationEntity(20U);
    msg.x = 0.526260009156;
    msg.y = 0.731402650743;
    msg.z = 0.89661790144;
    msg.t = 0.735915992693;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.320257619597);
    msg.setSource(35764U);
    msg.setSourceEntity(41U);
    msg.setDestination(52516U);
    msg.setDestinationEntity(35U);
    msg.x = 0.795734151852;
    msg.y = 0.672005164223;
    msg.z = 0.114169316507;
    msg.t = 0.616659540955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.719086767493);
    msg.setSource(44459U);
    msg.setSourceEntity(37U);
    msg.setDestination(64569U);
    msg.setDestinationEntity(253U);
    msg.x = 0.471440736006;
    msg.y = 0.264364521813;
    msg.z = 0.429385527339;
    msg.t = 0.41529166116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.272947602654);
    msg.setSource(29696U);
    msg.setSourceEntity(122U);
    msg.setDestination(64162U);
    msg.setDestinationEntity(132U);
    msg.timeout = 54876U;
    msg.name.assign("YWRCPZERFUOWAIBHPLGOXHCWISDNOYKPOOEWABVGTQKXDSUFRFKVXMAFURXTBYWWXQZXLKTHHPPLIHIVBAOMMGWGZMFNTVGMVYJVIFSCYAINKBJSCNDLDDMNYJLQQPHHVPSQSBKMFJTNARRBEXTOUQUXKDEZUHGWHQCJQZSDAWJCYHMPFROSQIOFLNMGBGDVIVZAU");
    msg.custom.assign("QAGNEZSEROJORYIXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.248140689412);
    msg.setSource(17467U);
    msg.setSourceEntity(67U);
    msg.setDestination(53228U);
    msg.setDestinationEntity(69U);
    msg.timeout = 38742U;
    msg.name.assign("ATTMSHQEROYQHWJLXIJZWVCOZQZZHNLO");
    msg.custom.assign("RYDWFJVOJKPCYFNRTUXFWCBUHHCSGZMXNOIKVERSZVSKMTFGYEGGFAPSTHERNUACCVYWBJNQDNUXOOTPBLMHCPUMYAIYFWZTKXARZBVUIHXQLXPINQOFWKAIUEFRYEHGHTCGHDQDZEBDQMCDZWMPKZHREQSLWTVSVKANXOJQFWVKJICQMNBUJOWXNJPKSZDAEOILLBEMGVMXBZQLMTNYDDLTIOPYASBPEGPVKJH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.857742050108);
    msg.setSource(61514U);
    msg.setSourceEntity(209U);
    msg.setDestination(21060U);
    msg.setDestinationEntity(106U);
    msg.timeout = 2354U;
    msg.name.assign("YCHZUERJSBNEFBCVZPKTBBLLFOLOAJBSQGHCFWTGGAXJKTGDNSASTIFGIG");
    msg.custom.assign("KRLECFCNQJUZZNMNQBGGQTUXFIRNVOXJAAFJBVQLJBGHHCULPAODKRBHGCTEYZIUZGUMRDQAYDEQLIFEOKDMRNLBCTSZQPPJEXNLYKMTPPTGJBTXVFCEQIAMZGKIBRWPKYWHZBFXPQYULMEGPURAXCEIYUSOOLZTWTESW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.815724774536);
    msg.setSource(22505U);
    msg.setSourceEntity(224U);
    msg.setDestination(61290U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.332178057686;
    msg.lon = 0.086104367841;
    msg.z = 0.817455725389;
    msg.z_units = 199U;
    msg.speed = 0.225197450102;
    msg.speed_units = 101U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38021U;
    tmp_msg_0.off_x = 0.184206230809;
    tmp_msg_0.off_y = 0.592625010926;
    tmp_msg_0.off_z = 0.13068694473;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.452440110097;
    msg.custom.assign("WQNUBMCDNJSTADMRLXJJTQXRVWSNEMXDASNLFOJRWHMCBXHTSBOAWFOWPXGMHPUQFDVQVYQFIEXKAECTHTONXQHDVOMFGCUTCWGNWZODOLISGRYMZPPQNHLLVHZKPPKRDAZYDRLFIOMNZAQGIRKEZJEIGIBJEBKFBYTYDJPGHWNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.777559228526);
    msg.setSource(20919U);
    msg.setSourceEntity(29U);
    msg.setDestination(64863U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.926632179571;
    msg.lon = 0.290625028355;
    msg.z = 0.548124910186;
    msg.z_units = 127U;
    msg.speed = 0.0114904166195;
    msg.speed_units = 105U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.502287528103;
    tmp_msg_0.y = 0.090612173506;
    tmp_msg_0.z = 0.31861495397;
    tmp_msg_0.t = 0.291045306638;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.232307294023;
    msg.custom.assign("BSOARHMDUXLXTFYWZLBKGTYPDRCWCVCTDOCRRENXIGJTQQKLAXEBAJAMLBGMYFZBSABKULXEVPGRHYHPGMQPNIQZAFOKBTVGNFWHKOHJQODSJFLUHSSYVBIJNSEDPNKDQSVPXIJZKWFGYYLLZUHYCLYWQHUNQRCEBOSUISVIKQIRKXJVPXAFIWLTCOJPWGEXAMTNCIZMAEMTCFWGWZHJJWFOVDNOHSZXR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.246325550334);
    msg.setSource(62790U);
    msg.setSourceEntity(153U);
    msg.setDestination(17346U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.693813386792;
    msg.lon = 0.218989918295;
    msg.z = 0.957224523509;
    msg.z_units = 202U;
    msg.speed = 0.765886888919;
    msg.speed_units = 87U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54625U;
    tmp_msg_0.off_x = 0.86969497519;
    tmp_msg_0.off_y = 0.324467677507;
    tmp_msg_0.off_z = 0.905256106448;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.880518711212;
    msg.custom.assign("XKKFNGOCHVGDLUDFVQPVHABDHNJAHVSRRFEBSVBSDJECLUYITYHCARXIWHOTPFSNCLJNMLWHQNOZXLSYZKAOEBZXZTYCNUDZPVGAKSCXZRKARJELNRLDBQBUZRXEORFIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.474514249757);
    msg.setSource(63233U);
    msg.setSourceEntity(90U);
    msg.setDestination(36526U);
    msg.setDestinationEntity(241U);
    msg.vid = 24137U;
    msg.off_x = 0.494904694219;
    msg.off_y = 0.0452292373447;
    msg.off_z = 0.068794091183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.802405282997);
    msg.setSource(17149U);
    msg.setSourceEntity(72U);
    msg.setDestination(862U);
    msg.setDestinationEntity(34U);
    msg.vid = 28731U;
    msg.off_x = 0.485337744835;
    msg.off_y = 0.842582307387;
    msg.off_z = 0.854542343215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.129452536952);
    msg.setSource(4019U);
    msg.setSourceEntity(150U);
    msg.setDestination(33235U);
    msg.setDestinationEntity(12U);
    msg.vid = 22697U;
    msg.off_x = 0.48123823605;
    msg.off_y = 0.669515385013;
    msg.off_z = 0.396427494663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.633819699314);
    msg.setSource(30119U);
    msg.setSourceEntity(1U);
    msg.setDestination(37077U);
    msg.setDestinationEntity(14U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.921532532827);
    msg.setSource(34624U);
    msg.setSourceEntity(140U);
    msg.setDestination(46563U);
    msg.setDestinationEntity(230U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.93437951487);
    msg.setSource(36460U);
    msg.setSourceEntity(198U);
    msg.setDestination(25871U);
    msg.setDestinationEntity(12U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.552070447769);
    msg.setSource(38411U);
    msg.setSourceEntity(163U);
    msg.setDestination(23228U);
    msg.setDestinationEntity(221U);
    msg.mid = 63970U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.476815340716);
    msg.setSource(44171U);
    msg.setSourceEntity(3U);
    msg.setDestination(7298U);
    msg.setDestinationEntity(218U);
    msg.mid = 64416U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.374516882893);
    msg.setSource(12291U);
    msg.setSourceEntity(72U);
    msg.setDestination(58133U);
    msg.setDestinationEntity(134U);
    msg.mid = 44340U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.29712819223);
    msg.setSource(26525U);
    msg.setSourceEntity(14U);
    msg.setDestination(43742U);
    msg.setDestinationEntity(95U);
    msg.state = 154U;
    msg.eta = 43904U;
    msg.info.assign("GWZHYDJAWXXUUGFYQAMNLLHMWUUXSZKBBRLXFOJRTWNCRCLJDOYZYQREGQFHWPXAPMBCKKKEQEDTDKVLJMAVZFPNGNHUQFVOOIHGBSGIPDDWYLBJFYASDPJDZZOXLVXGCTUYFYPXJARLFZIDCSZARSEECQSMHBQFGWNKUNTEJMTOFQUYVKGSVAQHVTRJEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.496772890161);
    msg.setSource(22894U);
    msg.setSourceEntity(233U);
    msg.setDestination(14291U);
    msg.setDestinationEntity(186U);
    msg.state = 143U;
    msg.eta = 8588U;
    msg.info.assign("OEJCLNJEAFHGIDWDQUHWWQIGMYBQYXVSPOVWPRRVQSTXRRJNWPTYVSRFPRCWDDJJTWGIRUGKBLMMWDNBUKDOKFBJTSPCNAZOTXXBWRUVMOHSJEYQHIZFRYZVEUVVYAPXUHLBIOCPBXJGGZLQGHHOAFOCXMMECTMYAMOKFFVUKULILUXXBLNRSSTLJXZZGNQZTFJEPQCAGKFIEUKMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.0576867050251);
    msg.setSource(44076U);
    msg.setSourceEntity(252U);
    msg.setDestination(22875U);
    msg.setDestinationEntity(125U);
    msg.state = 151U;
    msg.eta = 42228U;
    msg.info.assign("JOXGZRCUHXRZXSNRYQSZNPDDNHXLNUWUCKIPODDDMSHEDKWLVHPLIEXABFOCYBJESCPLGCRGISIPGPUQKROOZDKEWYPTJGHAPZMCYMBWMVNHKGRSCBKTBBBAIQVSNSJWNOMLQAHGTZILAQOAVFWVYYFLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.0957821967986);
    msg.setSource(41164U);
    msg.setSourceEntity(13U);
    msg.setDestination(12108U);
    msg.setDestinationEntity(44U);
    msg.system = 12507U;
    msg.duration = 47466U;
    msg.speed = 0.976249621357;
    msg.speed_units = 14U;
    msg.x = 0.0970092765577;
    msg.y = 0.640273872017;
    msg.z = 0.384806989519;
    msg.z_units = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.357112489259);
    msg.setSource(37651U);
    msg.setSourceEntity(199U);
    msg.setDestination(64534U);
    msg.setDestinationEntity(43U);
    msg.system = 5829U;
    msg.duration = 61766U;
    msg.speed = 0.927117129939;
    msg.speed_units = 248U;
    msg.x = 0.129595080646;
    msg.y = 0.763417877119;
    msg.z = 0.585923530609;
    msg.z_units = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.782994155047);
    msg.setSource(35251U);
    msg.setSourceEntity(43U);
    msg.setDestination(47846U);
    msg.setDestinationEntity(19U);
    msg.system = 3456U;
    msg.duration = 64631U;
    msg.speed = 0.741143090091;
    msg.speed_units = 129U;
    msg.x = 0.424502419104;
    msg.y = 0.62843698621;
    msg.z = 0.603491743988;
    msg.z_units = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.00997484640263);
    msg.setSource(45646U);
    msg.setSourceEntity(68U);
    msg.setDestination(64517U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.723769066582;
    msg.lon = 0.227206108856;
    msg.speed = 0.660588944437;
    msg.speed_units = 14U;
    msg.duration = 3373U;
    msg.sys_a = 44965U;
    msg.sys_b = 42871U;
    msg.move_threshold = 0.808524784669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.263568007989);
    msg.setSource(15640U);
    msg.setSourceEntity(222U);
    msg.setDestination(46731U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.555337267637;
    msg.lon = 0.0372460407161;
    msg.speed = 0.192998602886;
    msg.speed_units = 83U;
    msg.duration = 47102U;
    msg.sys_a = 36868U;
    msg.sys_b = 21360U;
    msg.move_threshold = 0.130170437842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.518880689239);
    msg.setSource(48193U);
    msg.setSourceEntity(138U);
    msg.setDestination(30130U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.996391058656;
    msg.lon = 0.832126598422;
    msg.speed = 0.443920705015;
    msg.speed_units = 27U;
    msg.duration = 13437U;
    msg.sys_a = 53961U;
    msg.sys_b = 44161U;
    msg.move_threshold = 0.940438365318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.552175951523);
    msg.setSource(24625U);
    msg.setSourceEntity(20U);
    msg.setDestination(7341U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.45989586038;
    msg.lon = 0.887389104776;
    msg.z = 0.813928128839;
    msg.z_units = 14U;
    msg.speed = 0.206166387777;
    msg.speed_units = 38U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.563309564002;
    tmp_msg_0.lon = 0.199566955085;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HIFWVODJAUMZXKLTLACUXEIGGFTLTSOSWYDAQNKELTVPKEDHQLNNQEZLMPOHXUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.394236752044);
    msg.setSource(3583U);
    msg.setSourceEntity(89U);
    msg.setDestination(19036U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.429052741299;
    msg.lon = 0.245327361394;
    msg.z = 0.724051415584;
    msg.z_units = 16U;
    msg.speed = 0.999127423908;
    msg.speed_units = 140U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.282587036496;
    tmp_msg_0.lon = 0.0961572465225;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GJCMIQNKIQBXWCJHCBPISRMWOMQCJXTYTRCMOHYKRPEVAPKINHHNMSALFKUBQHVIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.19191751874);
    msg.setSource(860U);
    msg.setSourceEntity(67U);
    msg.setDestination(43952U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.857610342006;
    msg.lon = 0.0299783407815;
    msg.z = 0.266414931151;
    msg.z_units = 220U;
    msg.speed = 0.193237323795;
    msg.speed_units = 220U;
    msg.custom.assign("MYFGVOQLCFWDVQVFJHTCSEZNCUHTKCUTYPWGNCALDLPENWRAGVXFCDTFBULHELHSIDJWORNMQVTMPQNHJLZABIYGSQYZIRXHRKVACHOMIHTAOGDWOIKPBXOYZCQEGXDNGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.389603902854);
    msg.setSource(34531U);
    msg.setSourceEntity(98U);
    msg.setDestination(24843U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.243161246849;
    msg.lon = 0.878812723085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.281955348636);
    msg.setSource(53649U);
    msg.setSourceEntity(50U);
    msg.setDestination(49347U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.933379363337;
    msg.lon = 0.662953572698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.364580423333);
    msg.setSource(19621U);
    msg.setSourceEntity(163U);
    msg.setDestination(48772U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.358442650191;
    msg.lon = 0.479933922343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.633022553532);
    msg.setSource(44136U);
    msg.setSourceEntity(77U);
    msg.setDestination(16813U);
    msg.setDestinationEntity(51U);
    msg.timeout = 26344U;
    msg.lat = 0.194589689648;
    msg.lon = 0.910630860424;
    msg.z = 0.328919566686;
    msg.z_units = 16U;
    msg.pitch = 0.85354826674;
    msg.amplitude = 0.38666190514;
    msg.duration = 63611U;
    msg.speed = 0.418042760503;
    msg.speed_units = 136U;
    msg.radius = 0.599158407943;
    msg.direction = 91U;
    msg.custom.assign("IOOWYGQXDEINPJVYQIOCKONXFLRMAZBZMXWRTEIRJAQXMERSBTYCFOTJLFVCYMNZUPKWCJMPGGBBMJDJAZQBBRFBYUEQIPSYHMEKWKFNPYPFUOZJIURXPRBQDQUSWJKOUNEWYDLKKKWDULLXPSCVWLAMHIVTVGEQSDNEDXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.270074514549);
    msg.setSource(22992U);
    msg.setSourceEntity(15U);
    msg.setDestination(44168U);
    msg.setDestinationEntity(159U);
    msg.timeout = 32263U;
    msg.lat = 0.497507466001;
    msg.lon = 0.571968620186;
    msg.z = 0.859225396075;
    msg.z_units = 22U;
    msg.pitch = 0.829997611016;
    msg.amplitude = 0.404709134222;
    msg.duration = 5772U;
    msg.speed = 0.477212563837;
    msg.speed_units = 18U;
    msg.radius = 0.728207737338;
    msg.direction = 48U;
    msg.custom.assign("GJAQNCEWHPKVRYNTXMRFMZDLLRYWYDOTQEFDZWMONVCTRQMFJGUTAAECVPVHKROIESUNYCFVVDCOLGWLPAQIYSIUWQGRPNZUVHZMNWAHZXFXSXIBDURGPJODSIWMCTHVQOQYJSICWBQXDOPXDBMTXMTFZFFGRTZKNLRBKXEMVOTIMOLJKEOYKSZJWIJKJBCEJANHSCFLAQZEZBYNHDXBIFJUGPSKBVUKBBCUPASGUXSDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.443630985861);
    msg.setSource(57571U);
    msg.setSourceEntity(195U);
    msg.setDestination(31188U);
    msg.setDestinationEntity(219U);
    msg.timeout = 55799U;
    msg.lat = 0.919067082581;
    msg.lon = 0.322216195565;
    msg.z = 0.850924837065;
    msg.z_units = 113U;
    msg.pitch = 0.0034977612774;
    msg.amplitude = 0.199523733987;
    msg.duration = 3884U;
    msg.speed = 0.408884512701;
    msg.speed_units = 240U;
    msg.radius = 0.185954287511;
    msg.direction = 35U;
    msg.custom.assign("YPMHFRDBWXPFURBKVAGDLYFADYLHFVANXEONONOZBEECVNHBUVFXZUGIBIPTSSXIMXAFWWDUDFQTZPZKIOSYABOMRFAJWWNDKCMGQLYOPBNPMPJJIMDAGZIKNUUAYIQVYMJLRNZZKLZQRHGVTSFTCBDEWQZKQSQOWRIHSMTGGKVHFHKOIRSENNSEVXQGKCHVWITYTCEAOHEJTLCJAYJJPULCTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.292835182622);
    msg.setSource(42896U);
    msg.setSourceEntity(115U);
    msg.setDestination(3114U);
    msg.setDestinationEntity(24U);
    msg.formation_name.assign("PXDTNAVSOUCMQFGYFQHGDRLNVZYLOWEYEPASTWSXYCNRMIKDMDFTOWTTCPQOKIONLUMOCBVHMCQIRUUDEISDDXVKFSDAVJIERBJHXKARQTRWPTFNEMPLJUDABXRBJTBELZNIDZFYFPVJPKGZTLMEFJPGPKJGZIYKHLEXOGKBCLVOJWUKZWSSSVSAUNETOXHKNRB");
    msg.reference_frame = 202U;
    msg.custom.assign("KVZMDNQUNGNREJVCPVBYLQABXSQULKYNKCVKGRPYUEFZHVILGCGYVRUAIZPGRHWRFXMSIHUWVJJGSENJHJAOTWNSGKMMIDSLFKLPBCXQKNLOLWSSWXQMFOBBOIBPHSXPZNSBKJGNQUYOBGOZFDVYTEYDQAYECGXHWMICTEHHPZMDJTFKRTTOMRPCVTLALWZJWBJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.612580556548);
    msg.setSource(25057U);
    msg.setSourceEntity(135U);
    msg.setDestination(9233U);
    msg.setDestinationEntity(115U);
    msg.formation_name.assign("KSPNHRNSJJQCYGMAOCRJOBPCNKVKINBXSIDLPQVPLROZTRDBCAUSPWWYFUQHWOZITGIICYUOXHJPWYTDNOCEJPZPDRYLAMAGSABJDSUXTDWSLIMFWMXWGCIXGWBIPFQKHCJXAQFRSTOKVTWDIBMEFNPUHJZGRQJTHONUVTVXBRNKXDEFWMLAKHVFLQVANVRMHYAZEZVZUSLZ");
    msg.reference_frame = 0U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27248U;
    tmp_msg_0.off_x = 0.724028574565;
    tmp_msg_0.off_y = 0.0939775022811;
    tmp_msg_0.off_z = 0.904438466665;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UYBZYPPDGJGCADRBCTVKHSPKNAXEZTWRISHRUYJNZFGTWRZFEOXGCHEKSAFNRNLOBYUCYTOHKLTHQIBTVMINYWBWTXJOIVFDCOERPMVZVLKLUGQSSLXEZDWEJBQECMWYSNDTGPYLLERGXRMJDUFGZMMPUWKWTXDCPUVHVBESAPJKJVZFSJHHRCPABFNCU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.752968163624);
    msg.setSource(48623U);
    msg.setSourceEntity(48U);
    msg.setDestination(35045U);
    msg.setDestinationEntity(32U);
    msg.formation_name.assign("DKHKLNSLWYWRQIEOOFABXDYKPDWWQPUCNEETMOYDVJXUCIGHZYCATGSHJCAIFDWFXDEPQGDWOLLPJQOXORXMNSCELJLGNHNYRJFKVMWVOQPGHBJRHJVKQMBACQHRYPPXBXZZWRXOIBFINFCZKEKFDLUAPRRDJTZBAKMYMNVVQGSYTZZLCMVNUBTMURBLISONPWAF");
    msg.reference_frame = 126U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39321U;
    tmp_msg_0.off_x = 0.0723164003305;
    tmp_msg_0.off_y = 0.108909499774;
    tmp_msg_0.off_z = 0.971261135897;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TMLTLFEREAFHBYSJGRA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.526279715556);
    msg.setSource(56547U);
    msg.setSourceEntity(7U);
    msg.setDestination(38014U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("RHBFUZZVBOGFHKXWVZ");
    msg.formation_name.assign("INEATFUZULCITRQYZXNGOAOTWSCHEFLJMUDSWHZZJKXXHRXRBTRNVWRYULMYQBOJTWEDOTTZHHWKOSMPBNUPYRVLNSDUBGHPIXSGAPETRKXDSIFPOHKMPAYKKVJIVDTVCBKYJOIZEXMAZFMTKUEWLBGBJLQPOAHNCLBOQCFAZPWSJQRGWLGWHAEXUKGYWUZFNIRECDQVCUEVQAXJFMQDNMMKSBCDNRXIQL");
    msg.plan_id.assign("WHFZLNVFKLHNWRUCPRKKYMNWBFFUIBQE");
    msg.description.assign("SPKTUXLMHLKSTWEDDXGVVLPPJNMQNERGNDADTOBEYUQDYCMOROXCCJBPWAGOLJBFYJVPAZATZYHIPLOSUJAYLOHFJVMURNRWDZUXJILQCYLTDCZTSRXFYBRAKDQBOIJMFKNVFQFCUXSOUNEVPBCZVSXGVOUWZYGOWTBPXEISGGZYTEEIFQAUXFN");
    msg.leader_speed = 0.102967564685;
    msg.leader_bank_lim = 0.543972757085;
    msg.pos_sim_err_lim = 0.249016837097;
    msg.pos_sim_err_wrn = 0.696947318961;
    msg.pos_sim_err_timeout = 27692U;
    msg.converg_max = 0.44691273494;
    msg.converg_timeout = 28951U;
    msg.comms_timeout = 5725U;
    msg.turb_lim = 0.777233845803;
    msg.custom.assign("WVQCBQVMJLFDTPOLBLDIAYDRKPXVHSNXDXKZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.641076029002);
    msg.setSource(9197U);
    msg.setSourceEntity(104U);
    msg.setDestination(22746U);
    msg.setDestinationEntity(70U);
    msg.group_name.assign("MJFNJXXCHWSQKFBDOPWPCSSECEIBLCJURBYONELSAXAJQXUOVLNURWFKITMHYXPYKIZDZMEKCAVHNBQMOCDMMRVAARZLRLVHTOIEYFKVXCTXLGBZGGYDJKIJTDKLKIQMJGDWLUZRTZFAXFUASPPKCHVUQYWSISVYVURSELVEAJBH");
    msg.formation_name.assign("RSONXQXLWHGAZQKFSBMAIHIMCNAAMRVNUUNNGPLKYDERSFYLUZIASOWKRVUHUJDRJDHGYIZPGNCNMCXGTQYFTRTYEOZYJWXMRBILRWPUKPFAEJNEVFIBYFOWQDHYHOUGYKMYXOJUSQSKKTLTZJQDAJJKPWQLDWHHDFQNLTZICSEODCKPSRVLOFNIEBDHDEOXBBQCBSLARGZHXECKZPOPTZJGVMEXQEWBBFVLVWTVZJIGGVSABP");
    msg.plan_id.assign("VYRECZSDJAQOXUR");
    msg.description.assign("OPXRSZYWYYOQJUOHXJCKKZTDNAVJIEJUSRKOEHUATKFLMQZHGRUEODPIEXWLHYWAGFTYTJO");
    msg.leader_speed = 0.741720220054;
    msg.leader_bank_lim = 0.0574831166152;
    msg.pos_sim_err_lim = 0.0698668168127;
    msg.pos_sim_err_wrn = 0.142225480112;
    msg.pos_sim_err_timeout = 37461U;
    msg.converg_max = 0.0100739723802;
    msg.converg_timeout = 20949U;
    msg.comms_timeout = 40699U;
    msg.turb_lim = 0.347879900322;
    msg.custom.assign("YFVWCHUABGIPQXDUZZCKJGIKZGOGVFFKIDZNYYTBUYEHCPAIQYMUXKRDJMFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.755552305045);
    msg.setSource(46616U);
    msg.setSourceEntity(32U);
    msg.setDestination(57196U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("HWYRSFOJZXPQJTQMAZNKUZMELYCLYBBIBQURGFXYIJODBMBXFQZAPSKFGDTCAVWOVMJYDSOVWQKNZHYHWTBRJAZLGMJJCPODVZMB");
    msg.formation_name.assign("DBMSNYSKWJMSRMUKZFAAHYHBWTRXUULPRATGZWKWKTREGMBYVWRGHLIIFCJSQIWHGQSDJAIKHLBJOGXBUDNQGTJHCSVCFOFRDOQPXYLQIKO");
    msg.plan_id.assign("HRHYCKKRGOZEPOIDDDJXSSVZWQVQOLBYUCVZCYJXAWOSDWKJAVSQBYUF");
    msg.description.assign("DEHLPCXUVGMWGJCTMVIFWHASEXTCNPFQZVWESHISJDZEGRDBPFRPSUZPBYODBVQVSTCXSZEVDKQAYYAZYPWCHNBFELNXLJDHFDQMWECYIXAOUIRYNATBIRMUWGJHFVOQFBHLYRLQOJGRLYUTKRGKNNWPCKMADHJNHGLUQRKRLCTXJJDOKGQBKZSXPQEDZJIPETEVNOXFOZUTGAKUWT");
    msg.leader_speed = 0.36364577778;
    msg.leader_bank_lim = 0.111748503281;
    msg.pos_sim_err_lim = 0.226033118479;
    msg.pos_sim_err_wrn = 0.370837726468;
    msg.pos_sim_err_timeout = 26033U;
    msg.converg_max = 0.372764281822;
    msg.converg_timeout = 24647U;
    msg.comms_timeout = 57673U;
    msg.turb_lim = 0.681014828448;
    msg.custom.assign("YEWVLMOEYRYYMWYNXBRWPNHCQYHICHTDRNQUMPPMWKLXQWYZFTXPXEIAKGBGJCFUCNFIOOELLAAUEWMLRJWVFPVLUJOZIOJQQCUAZKZXGDOXSKIQJHLWVOHDFAPNJFAPVWBHIBYBFTCCNTZEDBSSEN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.56108081286);
    msg.setSource(65174U);
    msg.setSourceEntity(64U);
    msg.setDestination(31738U);
    msg.setDestinationEntity(137U);
    msg.control_src = 11213U;
    msg.control_ent = 163U;
    msg.timeout = 0.732697086175;
    msg.loiter_radius = 0.980670322294;
    msg.altitude_interval = 0.63415555077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.103303021179);
    msg.setSource(36479U);
    msg.setSourceEntity(113U);
    msg.setDestination(38305U);
    msg.setDestinationEntity(184U);
    msg.control_src = 3082U;
    msg.control_ent = 46U;
    msg.timeout = 0.688946313914;
    msg.loiter_radius = 0.300779886741;
    msg.altitude_interval = 0.342101962301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.378695378556);
    msg.setSource(64372U);
    msg.setSourceEntity(191U);
    msg.setDestination(15545U);
    msg.setDestinationEntity(217U);
    msg.control_src = 11467U;
    msg.control_ent = 161U;
    msg.timeout = 0.158433691841;
    msg.loiter_radius = 0.743144608432;
    msg.altitude_interval = 0.512155642208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.434803699269);
    msg.setSource(39186U);
    msg.setSourceEntity(114U);
    msg.setDestination(58930U);
    msg.setDestinationEntity(39U);
    msg.flags = 185U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.601963232061;
    tmp_msg_0.speed_units = 14U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.400227151977;
    tmp_msg_1.z_units = 180U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.578632949383;
    msg.lon = 0.578152000665;
    msg.radius = 0.663747094114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.0386086232554);
    msg.setSource(33501U);
    msg.setSourceEntity(208U);
    msg.setDestination(52854U);
    msg.setDestinationEntity(68U);
    msg.flags = 53U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.327256525164;
    tmp_msg_0.speed_units = 243U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.384515147521;
    tmp_msg_1.z_units = 181U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.589262083893;
    msg.lon = 0.812242106605;
    msg.radius = 0.884697519837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.191267041144);
    msg.setSource(9360U);
    msg.setSourceEntity(94U);
    msg.setDestination(5432U);
    msg.setDestinationEntity(14U);
    msg.flags = 133U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.769507132725;
    tmp_msg_0.speed_units = 105U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.786990796775;
    tmp_msg_1.z_units = 14U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.635004857887;
    msg.lon = 0.545048369272;
    msg.radius = 0.890036168245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.490762773143);
    msg.setSource(37980U);
    msg.setSourceEntity(40U);
    msg.setDestination(63929U);
    msg.setDestinationEntity(209U);
    msg.control_src = 40480U;
    msg.control_ent = 228U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 54U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.333633108377;
    tmp_tmp_msg_0_0.speed_units = 226U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.581713522458;
    tmp_tmp_msg_0_1.z_units = 149U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.420634173515;
    tmp_msg_0.lon = 0.824061567562;
    tmp_msg_0.radius = 0.957145460246;
    msg.reference.set(tmp_msg_0);
    msg.state = 86U;
    msg.proximity = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.692670464905);
    msg.setSource(227U);
    msg.setSourceEntity(241U);
    msg.setDestination(33438U);
    msg.setDestinationEntity(55U);
    msg.control_src = 41920U;
    msg.control_ent = 158U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 217U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.647036233906;
    tmp_tmp_msg_0_0.speed_units = 34U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.00077867899614;
    tmp_tmp_msg_0_1.z_units = 204U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.232754026392;
    tmp_msg_0.lon = 0.734434572624;
    tmp_msg_0.radius = 0.700683349681;
    msg.reference.set(tmp_msg_0);
    msg.state = 125U;
    msg.proximity = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.15947911289);
    msg.setSource(6310U);
    msg.setSourceEntity(96U);
    msg.setDestination(48160U);
    msg.setDestinationEntity(96U);
    msg.control_src = 6216U;
    msg.control_ent = 60U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 198U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.474815896386;
    tmp_tmp_msg_0_0.speed_units = 212U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.000774485904742;
    tmp_tmp_msg_0_1.z_units = 33U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.966693694841;
    tmp_msg_0.lon = 0.57477603846;
    tmp_msg_0.radius = 0.184420583147;
    msg.reference.set(tmp_msg_0);
    msg.state = 31U;
    msg.proximity = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.801676505759);
    msg.setSource(46101U);
    msg.setSourceEntity(190U);
    msg.setDestination(11254U);
    msg.setDestinationEntity(21U);
    msg.ax_cmd = 0.691438378325;
    msg.ay_cmd = 0.0749782087975;
    msg.az_cmd = 0.101775008111;
    msg.ax_des = 0.0661398599347;
    msg.ay_des = 0.880239254573;
    msg.az_des = 0.311198217529;
    msg.virt_err_x = 0.122519331009;
    msg.virt_err_y = 0.148334611283;
    msg.virt_err_z = 0.765555617243;
    msg.surf_fdbk_x = 0.285092130305;
    msg.surf_fdbk_y = 0.802800602519;
    msg.surf_fdbk_z = 0.644093486095;
    msg.surf_unkn_x = 0.49538772392;
    msg.surf_unkn_y = 0.542252820046;
    msg.surf_unkn_z = 0.00327218422882;
    msg.ss_x = 0.972862603523;
    msg.ss_y = 0.741218627821;
    msg.ss_z = 0.647326498924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.980843389569);
    msg.setSource(20428U);
    msg.setSourceEntity(27U);
    msg.setDestination(33867U);
    msg.setDestinationEntity(254U);
    msg.ax_cmd = 0.142119814571;
    msg.ay_cmd = 0.00894728784289;
    msg.az_cmd = 0.916492314152;
    msg.ax_des = 0.0764685732078;
    msg.ay_des = 0.335235401942;
    msg.az_des = 0.820898308369;
    msg.virt_err_x = 0.0604320994568;
    msg.virt_err_y = 0.977860514633;
    msg.virt_err_z = 0.75915493053;
    msg.surf_fdbk_x = 0.433907023052;
    msg.surf_fdbk_y = 0.345005493297;
    msg.surf_fdbk_z = 0.436600570297;
    msg.surf_unkn_x = 0.467258022972;
    msg.surf_unkn_y = 0.992596776527;
    msg.surf_unkn_z = 0.087719028385;
    msg.ss_x = 0.719528716556;
    msg.ss_y = 0.794245925409;
    msg.ss_z = 0.165133456766;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AOYVIVFCXXEYCSYUQKAPPZRAWKLXELDBHNGKCDTRIKBNQAIMLJPJOXSVVVWNBWUJMMYJIWWLECNXOVPJHCFAGJQWWZAIULZCXSDTFUEKVDDHZIBGPYGLA");
    tmp_msg_0.dist = 0.99612881047;
    tmp_msg_0.err = 0.469335461472;
    tmp_msg_0.ctrl_imp = 0.594562645622;
    tmp_msg_0.rel_dir_x = 0.310146145126;
    tmp_msg_0.rel_dir_y = 0.562250779841;
    tmp_msg_0.rel_dir_z = 0.74435029924;
    tmp_msg_0.err_x = 0.292804995547;
    tmp_msg_0.err_y = 0.431714813708;
    tmp_msg_0.err_z = 0.620433321425;
    tmp_msg_0.rf_err_x = 0.0858675326095;
    tmp_msg_0.rf_err_y = 0.591716340091;
    tmp_msg_0.rf_err_z = 0.856260656327;
    tmp_msg_0.rf_err_vx = 0.716844752534;
    tmp_msg_0.rf_err_vy = 0.572431916191;
    tmp_msg_0.rf_err_vz = 0.218015037146;
    tmp_msg_0.ss_x = 0.348696353987;
    tmp_msg_0.ss_y = 0.063570464432;
    tmp_msg_0.ss_z = 0.0388071201216;
    tmp_msg_0.virt_err_x = 0.368961527558;
    tmp_msg_0.virt_err_y = 0.663559271179;
    tmp_msg_0.virt_err_z = 0.933233563299;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.655326629809);
    msg.setSource(41362U);
    msg.setSourceEntity(178U);
    msg.setDestination(36050U);
    msg.setDestinationEntity(213U);
    msg.ax_cmd = 0.131102950721;
    msg.ay_cmd = 0.258882355931;
    msg.az_cmd = 0.666219403892;
    msg.ax_des = 0.77532239945;
    msg.ay_des = 0.317514901803;
    msg.az_des = 0.669553784859;
    msg.virt_err_x = 0.249067897499;
    msg.virt_err_y = 0.171802317894;
    msg.virt_err_z = 0.0476621902714;
    msg.surf_fdbk_x = 0.648759887435;
    msg.surf_fdbk_y = 0.39963870682;
    msg.surf_fdbk_z = 0.986676958968;
    msg.surf_unkn_x = 0.672511086953;
    msg.surf_unkn_y = 0.969306441671;
    msg.surf_unkn_z = 0.44980504247;
    msg.ss_x = 0.389117812006;
    msg.ss_y = 0.14669017717;
    msg.ss_z = 0.282888799149;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.801113119584);
    msg.setSource(34717U);
    msg.setSourceEntity(131U);
    msg.setDestination(39310U);
    msg.setDestinationEntity(249U);
    msg.s_id.assign("WYZGABZKDTOFOHGIQWZJSIDYYNOJTPEBOFLKJDGEJODMLNKVFJJSWRXHAUTCWLAAQRJYJVPFHTXYBFBWZQTHCIXZIVSIXYZXMHEOVTQYKRZBUQNTRGUMGFRCQUXWLGHEZWEOAKEMMJKCQVRYNGLPAESOAXLRHFUAWWRPNPHCUPSIPGDPANTVDINPMMQNOZRBKMKUTYXSDFRQSXEVLFITCCLZUYMUDMNBPVBAGHGDVNCOQSSEEWDU");
    msg.dist = 0.3890309451;
    msg.err = 0.0440285814705;
    msg.ctrl_imp = 0.13213210097;
    msg.rel_dir_x = 0.639862482915;
    msg.rel_dir_y = 0.548283838228;
    msg.rel_dir_z = 0.800008486445;
    msg.err_x = 0.873137337539;
    msg.err_y = 0.478162633678;
    msg.err_z = 0.888564261425;
    msg.rf_err_x = 0.262720081888;
    msg.rf_err_y = 0.117912157363;
    msg.rf_err_z = 0.879596890395;
    msg.rf_err_vx = 0.520158594048;
    msg.rf_err_vy = 0.475470010005;
    msg.rf_err_vz = 0.806402974616;
    msg.ss_x = 0.68029743722;
    msg.ss_y = 0.376998776517;
    msg.ss_z = 0.32128361711;
    msg.virt_err_x = 0.386922090386;
    msg.virt_err_y = 0.205247568183;
    msg.virt_err_z = 0.488603472323;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.108496805174);
    msg.setSource(725U);
    msg.setSourceEntity(54U);
    msg.setDestination(9037U);
    msg.setDestinationEntity(84U);
    msg.s_id.assign("EWSVRGTZLBKNTNBBIMCEFMNAGMVZTRAOAOAUBRLVPYMYMULIKCXLTHUHPGHMKUIDHXGJPFWQEBSDOCGSZVJRUCVCGAJQETLHNUVXTYPL");
    msg.dist = 0.999605375087;
    msg.err = 0.958942098394;
    msg.ctrl_imp = 0.0597409649847;
    msg.rel_dir_x = 0.236847612015;
    msg.rel_dir_y = 0.342200349937;
    msg.rel_dir_z = 0.145292937119;
    msg.err_x = 0.225469409298;
    msg.err_y = 0.80507481065;
    msg.err_z = 0.82684988934;
    msg.rf_err_x = 0.752937157114;
    msg.rf_err_y = 0.400380714948;
    msg.rf_err_z = 0.72957258366;
    msg.rf_err_vx = 0.072564232322;
    msg.rf_err_vy = 0.748746048238;
    msg.rf_err_vz = 0.94581073587;
    msg.ss_x = 0.0248104490756;
    msg.ss_y = 0.202133647225;
    msg.ss_z = 0.337014066278;
    msg.virt_err_x = 0.852970518334;
    msg.virt_err_y = 0.092023678611;
    msg.virt_err_z = 0.474064914774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.704697766841);
    msg.setSource(60752U);
    msg.setSourceEntity(122U);
    msg.setDestination(49013U);
    msg.setDestinationEntity(244U);
    msg.s_id.assign("DWCXIJLAHXFOFDWRHGPVFIJOVGTYNNBTNLCFDCITDULAQVZXLHGMFZSDPSOQUYUJWWXQGWYFZVHXVQYCZRCGJPKTWEYRSJSKBXKHBZEXDQMQLYMPPKELIPJWNCXKIVKZJGUCVZHCUDTHPKLUFAGASQ");
    msg.dist = 0.331364114198;
    msg.err = 0.199074538722;
    msg.ctrl_imp = 0.12175718949;
    msg.rel_dir_x = 0.350922951181;
    msg.rel_dir_y = 0.770651285368;
    msg.rel_dir_z = 0.434464432892;
    msg.err_x = 0.963282255883;
    msg.err_y = 0.686513055283;
    msg.err_z = 0.465519084268;
    msg.rf_err_x = 0.749494334091;
    msg.rf_err_y = 0.77961412476;
    msg.rf_err_z = 0.769601151101;
    msg.rf_err_vx = 0.831890900829;
    msg.rf_err_vy = 0.944298365295;
    msg.rf_err_vz = 0.958533245562;
    msg.ss_x = 0.0565936557286;
    msg.ss_y = 0.80046908153;
    msg.ss_z = 0.158665298363;
    msg.virt_err_x = 0.196038028581;
    msg.virt_err_y = 0.73435421867;
    msg.virt_err_z = 0.796871550497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.762712053936);
    msg.setSource(54340U);
    msg.setSourceEntity(52U);
    msg.setDestination(55491U);
    msg.setDestinationEntity(182U);
    msg.timeout = 42374U;
    msg.rpm = 0.409529455241;
    msg.direction = 186U;
    msg.custom.assign("RWNTBMEHDUOHGQNFAPETMSVNPDFABLNFYLDYSPGRMXXDKLEPERDTGXSQJGBUCMYMWLTGVERNOROVPIAFFWNGVGSU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.522304033897);
    msg.setSource(49997U);
    msg.setSourceEntity(5U);
    msg.setDestination(50384U);
    msg.setDestinationEntity(134U);
    msg.timeout = 26545U;
    msg.rpm = 0.48346304353;
    msg.direction = 11U;
    msg.custom.assign("XJGCVBZJEMLEUZELYWXXLGHKSJFMNHIKREDUQTWADBVPMTPYORNOVBWRHOKKCUQFSEYFYRWYCTJZWTHTQMJFRSWSNSDXEVYANYKCTVFJJGRSNLPLDTOCZYUXPCFAXKOLNOHCMUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.12952638537);
    msg.setSource(41952U);
    msg.setSourceEntity(143U);
    msg.setDestination(27890U);
    msg.setDestinationEntity(40U);
    msg.timeout = 35140U;
    msg.rpm = 0.852676210016;
    msg.direction = 70U;
    msg.custom.assign("GORRIKEWEBGABUMELHAFKYKCTZQFEZURGHRNTJSPOYBKYJLLGJKUUQVQHSEBKTGDTAJIOCESCDLPPJFFFADMKBDHGZWIMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.525837289147);
    msg.setSource(53667U);
    msg.setSourceEntity(241U);
    msg.setDestination(45264U);
    msg.setDestinationEntity(245U);
    msg.formation_name.assign("SSRECRHOBPAMJYMROIDHHIOZNVUHQNSGEBGTGRPXRJNFZBQNOJHDLLUAOFDOGYBALZTXFNKDJENIJKVUDCWFCOZLEQQIEBWAYXZINAHYNPYZXKSEEPICGRUKLRVPOWELZWCHQLQCJCKRTMQUWJEBEMVWKWI");
    msg.type = 155U;
    msg.op = 171U;
    msg.group_name.assign("JIHUOFYZGZJIIQKULDDUJWUMCOUMBDBFDTLTUWYCQZKRQCRFAYMHGUJOEADROL");
    msg.plan_id.assign("IFGSPMZDNLFVMDAIQBSCPWZWPPGYHKHESHRTNXVGOVYMLFQZDWJLKENMFTBEUAXDUBPZBWOEEWCRFRCEFYUVOCYYJBKWMXHZGSGKKQQVDTXHSGZLWRXUJGEJOXAHQRKWOSKVOCYTUTIJILUEJTVTLGIOCFSCNMQAYZJE");
    msg.description.assign("VGYMZZQRCOHJYVWHIMLCITURHGEBJAUPOONQUNNJCAJRDGFHZGJVVRBDXGSWBGQDHTPPZSBRSQJOQALOYYWVMQXXAFTBTUCVQJDQULKAGUM");
    msg.reference_frame = 132U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29167U;
    tmp_msg_0.off_x = 0.224758037013;
    tmp_msg_0.off_y = 0.863815468586;
    tmp_msg_0.off_z = 0.856080907957;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0821279752132;
    msg.leader_speed_min = 0.984944679476;
    msg.leader_speed_max = 0.932263504569;
    msg.leader_alt_min = 0.0605179040254;
    msg.leader_alt_max = 0.53226200588;
    msg.pos_sim_err_lim = 0.640801659472;
    msg.pos_sim_err_wrn = 0.855477523654;
    msg.pos_sim_err_timeout = 47183U;
    msg.converg_max = 0.774578050768;
    msg.converg_timeout = 58238U;
    msg.comms_timeout = 11293U;
    msg.turb_lim = 0.322861801214;
    msg.custom.assign("YHSOXUKGAXQBJSJWXYSJZVFUXQCKWUAKWVZWOXSIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.29247060759);
    msg.setSource(35397U);
    msg.setSourceEntity(152U);
    msg.setDestination(47401U);
    msg.setDestinationEntity(68U);
    msg.formation_name.assign("SSKMWFCBPWLMHBYAWCZLIPVNFNLYVAQLZHTJGCAYEGJKMS");
    msg.type = 109U;
    msg.op = 65U;
    msg.group_name.assign("DEZGPYFYEDTSTWWAPSASXCUVYCLQGFPJMRPDEVK");
    msg.plan_id.assign("FEHKHJYRTYPHPDDMBNGCVNUGFIDZOXIDEAEBARUCATTNQBWBSQCZSLZRWQXYLSLZEFXVONUVAMACPOOZSIKTMRKSSYLCIFSRKKEKKOUHIEIIBGRVHYBOPPDNCVAMYKEJCXNBHTVQLTHZMZQVAGUAAKNHGJTJOFPQG");
    msg.description.assign("MACBINSNXWSVUZZLMYVSNKZZWEYAGCKDJWINOYCLIUMERXRXDTLBAHQFEJDDWGHEVONJWPHQVHXORLMPGEPLKYUNMEIKFTCAJOLFZOH");
    msg.reference_frame = 227U;
    msg.leader_bank_lim = 0.831745723552;
    msg.leader_speed_min = 0.260168620049;
    msg.leader_speed_max = 0.325346594107;
    msg.leader_alt_min = 0.797675620738;
    msg.leader_alt_max = 0.198823318671;
    msg.pos_sim_err_lim = 0.648939862787;
    msg.pos_sim_err_wrn = 0.977023260758;
    msg.pos_sim_err_timeout = 29958U;
    msg.converg_max = 0.887403612256;
    msg.converg_timeout = 17978U;
    msg.comms_timeout = 14114U;
    msg.turb_lim = 0.145284614582;
    msg.custom.assign("LDZSVFXVAREMZCVQIFJUYHIGKOHLSQTZAPAYNHSVHZINKGGI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.57648953672);
    msg.setSource(29434U);
    msg.setSourceEntity(127U);
    msg.setDestination(47526U);
    msg.setDestinationEntity(248U);
    msg.formation_name.assign("INDFSGENEUTWYUDEEMTROPUBYNGSTMVOM");
    msg.type = 5U;
    msg.op = 6U;
    msg.group_name.assign("FLRJMCRHHDEZKMYWMANNASLQDUDHTKEADNVYSBLFZFJMMLFYCFOGXMCLSVTYDGFVUBYVOZTDZKQGGANJWKBWLMWUPBZQGQKUESTGCRYEOFZEIBUWSXFVEXPZRQCIERSWOKWBXHBNYLJRICYPVTMLJCJDJORJCATTEVGZQNFHEKHBPODGDOHPIASLZMVBIAHPREPXNAJZUQRXYVTOUFMJCTVNIDANIXCW");
    msg.plan_id.assign("BOJLFLCVLIHCZQLWECUEQEXISSNPRKYVLLPQRDAKCHFIYTSWZRYMRUPOIKBMXFZXNUDRHEUAWAVBUCSUMRYGOYATPOLGGXXCJFHIQFJGXGRECHGDBYTZMWBODWASTQNXTIQOGAYLTZMTFMKZWDNIVEDXYZTANPKGPGZVSLEHZKPUDTOJEMANPNNKJXRFFMUEBDHMJQWSZKGVRVSYJDQSVWVJETASCULROBKVMXNNDIHJFHOC");
    msg.description.assign("ELEJXNTMDPJPBIHVMTLKIRWTJWUKRAOZCFDYSIEHTYHJGRDITBSIOFHWCNICHGYLWZZAZOQIJLFOWUAHUVYUAGANRCLKAOKKNXQRPYDUJ");
    msg.reference_frame = 69U;
    msg.leader_bank_lim = 0.534382155839;
    msg.leader_speed_min = 0.936780277456;
    msg.leader_speed_max = 0.0362547211505;
    msg.leader_alt_min = 0.993874722054;
    msg.leader_alt_max = 0.456187294555;
    msg.pos_sim_err_lim = 0.471486599179;
    msg.pos_sim_err_wrn = 0.960951288506;
    msg.pos_sim_err_timeout = 32002U;
    msg.converg_max = 0.991649121664;
    msg.converg_timeout = 31182U;
    msg.comms_timeout = 42815U;
    msg.turb_lim = 0.508615013698;
    msg.custom.assign("TJNYLMTIYCHQGFALL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.594193654535);
    msg.setSource(33502U);
    msg.setSourceEntity(37U);
    msg.setDestination(7693U);
    msg.setDestinationEntity(147U);
    msg.timeout = 55476U;
    msg.lat = 0.33586357666;
    msg.lon = 0.651812556482;
    msg.z = 0.376842908292;
    msg.z_units = 181U;
    msg.speed = 0.667947893249;
    msg.speed_units = 142U;
    msg.custom.assign("YTNCATVUEJFPQKIREBJZEYFPMSLVJFFDKDNPGBEPIVUKNUCLVGEBULGOFFLAGMEWEMIHOINQCWTWDVUXTFCBXKPSAMTIWSZGMSMJHARQTIXZKYQVNHRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.29584495854);
    msg.setSource(21223U);
    msg.setSourceEntity(86U);
    msg.setDestination(37668U);
    msg.setDestinationEntity(168U);
    msg.timeout = 56603U;
    msg.lat = 0.577188397972;
    msg.lon = 0.363086728223;
    msg.z = 0.35393858019;
    msg.z_units = 130U;
    msg.speed = 0.591881517703;
    msg.speed_units = 180U;
    msg.custom.assign("UYQVMOSUFPUKIYXJKTMWOZKSIZMQRWCCIXJWTYAMNOSTGKTNXTACDPVSEXHZXQRBOJYGVDVWTGJJRBOPALYTBCMKZNLTCKNGLRIVANISFBWLLLBINBSZGHDHRUKFENFGQTODBIIZGSLGCCURFSAAPAVFPNSZXXYAXDZQXBEPUPKRJMJJLWREROMUQQHVJPQMDKBRDYVFZBGIZHF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.79729709303);
    msg.setSource(52174U);
    msg.setSourceEntity(102U);
    msg.setDestination(37961U);
    msg.setDestinationEntity(150U);
    msg.timeout = 11304U;
    msg.lat = 0.535821212807;
    msg.lon = 0.550304518008;
    msg.z = 0.903587054618;
    msg.z_units = 109U;
    msg.speed = 0.773670538716;
    msg.speed_units = 67U;
    msg.custom.assign("PRDEWMDGDFJXPASKMSGQPICHBTLJEAPZJKFWYCTVSZKMGGCHDXLVHLGMRSZVBUBKAJAWDUCJOHEAINJBTTULXXOOWMNFAQWIKESYVZHKWQDRBCMXHOFMUOXAPNPELLXSFUBLYADKTRGCQOOOAPZCRXNAYTFUTVRCBINEWHPIYZDKGMLTSQORRCYEJSHBKOSTIGYNMEYVJMYZPSFDHQKIUNHLNLQXUGRZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.729001519149);
    msg.setSource(54872U);
    msg.setSourceEntity(135U);
    msg.setDestination(42393U);
    msg.setDestinationEntity(7U);
    msg.timeout = 47468U;
    msg.lat = 0.726630722371;
    msg.lon = 0.964215561067;
    msg.z = 0.703806307592;
    msg.z_units = 149U;
    msg.speed = 0.545759504246;
    msg.speed_units = 73U;
    msg.custom.assign("FSHIEFBGQJHNHVEDIVGITBNJKNRIUDBTLMGFOOHYIPWJLKBRJZNWOVQLKUMDSYAAVYIXXZGPLKRMDCTPEZNORPHOFZZXXECPDWSRQVOZWEFVCQNUMALCTLKHMRSGVUBARBBFSOEJCIHUTSEWWPQUKVLRHNMYSOXBHEXLLAMOCRUBPKFWASJQRPUFKQZMNTCJZYTGVPCUNMHWXXGUYBTTDXWSPYYIIZCDFIKJEYVXSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.526901834786);
    msg.setSource(44562U);
    msg.setSourceEntity(113U);
    msg.setDestination(10221U);
    msg.setDestinationEntity(245U);
    msg.timeout = 40448U;
    msg.lat = 0.963543691522;
    msg.lon = 0.37571266369;
    msg.z = 0.310486531302;
    msg.z_units = 249U;
    msg.speed = 0.0809127066184;
    msg.speed_units = 113U;
    msg.custom.assign("XACOEDMURDBORVTOZQQWUDGUTCYCIGFLOWZWTDZJJWBUXUWVQFCGPWYFMAPVCNGIXSAAOCXMPPHZVAUKMPJYEBKVQIOPJLKBNBPTJCIZRFADVWYFYSKHLSLKEOIDQXLQCGNNJEJK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.162495104083);
    msg.setSource(44825U);
    msg.setSourceEntity(249U);
    msg.setDestination(48358U);
    msg.setDestinationEntity(75U);
    msg.timeout = 30043U;
    msg.lat = 0.650553233574;
    msg.lon = 0.63571531329;
    msg.z = 0.78597344301;
    msg.z_units = 210U;
    msg.speed = 0.6781692827;
    msg.speed_units = 204U;
    msg.custom.assign("EUAAIYWZGALZLPSJJKXSBNSUTICFJFXNOHCHEINVPRGAMUUSRYOFTSFTQSOGAIATLDMQGAJUPEODYKLWYGVPGWVDLSRHMNLBRFNHKYPDUNPCCSXROSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.243791704073);
    msg.setSource(21596U);
    msg.setSourceEntity(236U);
    msg.setDestination(35800U);
    msg.setDestinationEntity(130U);
    msg.arrival_time = 0.306772094532;
    msg.lat = 0.731814348675;
    msg.lon = 0.248913847428;
    msg.z = 0.894829253355;
    msg.z_units = 84U;
    msg.travel_z = 0.0034990608104;
    msg.travel_z_units = 79U;
    msg.delayed = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.658126113404);
    msg.setSource(32591U);
    msg.setSourceEntity(145U);
    msg.setDestination(5794U);
    msg.setDestinationEntity(163U);
    msg.arrival_time = 0.210934046328;
    msg.lat = 0.0718266560504;
    msg.lon = 0.414746329941;
    msg.z = 0.698007774288;
    msg.z_units = 117U;
    msg.travel_z = 0.557810211282;
    msg.travel_z_units = 173U;
    msg.delayed = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.705171136632);
    msg.setSource(17547U);
    msg.setSourceEntity(47U);
    msg.setDestination(54100U);
    msg.setDestinationEntity(168U);
    msg.arrival_time = 0.979835734113;
    msg.lat = 0.536573056609;
    msg.lon = 0.338394650758;
    msg.z = 0.307745257928;
    msg.z_units = 214U;
    msg.travel_z = 0.812436701437;
    msg.travel_z_units = 59U;
    msg.delayed = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.463670166784);
    msg.setSource(55217U);
    msg.setSourceEntity(11U);
    msg.setDestination(64735U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.202019078011;
    msg.lon = 0.673213319303;
    msg.z = 0.65480064927;
    msg.z_units = 3U;
    msg.speed = 0.445670319504;
    msg.speed_units = 87U;
    msg.bearing = 0.730803938537;
    msg.cross_angle = 0.646318938437;
    msg.width = 0.553106088842;
    msg.length = 0.217586935792;
    msg.coff = 103U;
    msg.angaperture = 0.041263687485;
    msg.range = 27028U;
    msg.overlap = 171U;
    msg.flags = 116U;
    msg.custom.assign("LVIEPWFWUUVRIEJLZAFCVIFQDBJZARAHDXKGMYTQCBBYSIBCTNMHOKHWQMMNXXTXDMTDZHWPVEGEXPVAYUUQYIIFLQDBQERZENFOFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.4133525858);
    msg.setSource(65213U);
    msg.setSourceEntity(59U);
    msg.setDestination(15276U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.517530656057;
    msg.lon = 0.0235940481575;
    msg.z = 0.230878494259;
    msg.z_units = 91U;
    msg.speed = 0.425246364742;
    msg.speed_units = 186U;
    msg.bearing = 0.317876356318;
    msg.cross_angle = 0.836111631845;
    msg.width = 0.972017601391;
    msg.length = 0.982816177632;
    msg.coff = 219U;
    msg.angaperture = 0.306579169737;
    msg.range = 3070U;
    msg.overlap = 102U;
    msg.flags = 254U;
    msg.custom.assign("CLLHJQYGSNDWCHHLZYVFPFHZUAIEIPPBHSNINZSQXKGGFYYIZTRSLWTFWBIDOXEFIQUYSQTEPIHBAOVIPQNQMTFSJJNXMLJEUWLJKSVUACQHYMROMGRPMRJNAFTVXSOVRYNZDSCTGGXZAKWAHHBAKKUAEZWLPDODEVPEBBIIBVBURQRDUMGUGTZXJVFXJNTJEMQERMKWUORCCXFNKJC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.26992398531);
    msg.setSource(47639U);
    msg.setSourceEntity(139U);
    msg.setDestination(60439U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.925108948984;
    msg.lon = 0.304040561444;
    msg.z = 0.360533257838;
    msg.z_units = 160U;
    msg.speed = 0.479726778797;
    msg.speed_units = 84U;
    msg.bearing = 0.403911618054;
    msg.cross_angle = 0.238804133434;
    msg.width = 0.402600592316;
    msg.length = 0.525330219367;
    msg.coff = 212U;
    msg.angaperture = 0.169924226185;
    msg.range = 54783U;
    msg.overlap = 159U;
    msg.flags = 4U;
    msg.custom.assign("EAZURPWWLBRYZFSVYNTZMGPRFRMMDJUWYGGFXGETOSJRFEAYXXCEVKROIRKNIHMQTTYSLSGEGMVFPHKWIOUGPQPTUPDBDQCDCEYLIUV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.288141427582);
    msg.setSource(63176U);
    msg.setSourceEntity(140U);
    msg.setDestination(46387U);
    msg.setDestinationEntity(151U);
    msg.timeout = 58338U;
    msg.lat = 0.657170507482;
    msg.lon = 0.415843664587;
    msg.z = 0.774688872381;
    msg.z_units = 116U;
    msg.speed = 0.50676611581;
    msg.speed_units = 139U;
    msg.syringe0 = 47U;
    msg.syringe1 = 239U;
    msg.syringe2 = 232U;
    msg.custom.assign("USVSODZAWAKZQVVCZTTZECIXXSOBVWF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.473620780733);
    msg.setSource(17097U);
    msg.setSourceEntity(15U);
    msg.setDestination(44954U);
    msg.setDestinationEntity(40U);
    msg.timeout = 15825U;
    msg.lat = 0.636121353446;
    msg.lon = 0.922857245204;
    msg.z = 0.723270054855;
    msg.z_units = 238U;
    msg.speed = 0.488634082938;
    msg.speed_units = 109U;
    msg.syringe0 = 85U;
    msg.syringe1 = 151U;
    msg.syringe2 = 210U;
    msg.custom.assign("COSCQDJBCNVZUCYBSEPXACYTAUJZMABOIOLWMRMTAGZQBAOMTDRLAEHESPNAFUBFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.792853554089);
    msg.setSource(28776U);
    msg.setSourceEntity(4U);
    msg.setDestination(27907U);
    msg.setDestinationEntity(169U);
    msg.timeout = 1020U;
    msg.lat = 0.812357364705;
    msg.lon = 0.346683878183;
    msg.z = 0.691386397662;
    msg.z_units = 25U;
    msg.speed = 0.313668164371;
    msg.speed_units = 149U;
    msg.syringe0 = 201U;
    msg.syringe1 = 205U;
    msg.syringe2 = 208U;
    msg.custom.assign("UVMBCWEWVTEQCAIGDIGFFBRWNUTXJXBPDFTAGBYDLEGKLQCJVYTCXSEVHTHZCEMFKLNHRFURIRCJENIOKJQDSPNMGVRZCDZJSPPSYOLLLJWIJMENNMKZLRAMSTYCPWAANODXRSZCBVMRMOYBXQGQOWQWKGJARLUVPWHKUUZYMQHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.795456552436);
    msg.setSource(41736U);
    msg.setSourceEntity(125U);
    msg.setDestination(32782U);
    msg.setDestinationEntity(95U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.0779175300788);
    msg.setSource(49916U);
    msg.setSourceEntity(85U);
    msg.setDestination(37190U);
    msg.setDestinationEntity(73U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.597162404666);
    msg.setSource(35236U);
    msg.setSourceEntity(153U);
    msg.setDestination(63200U);
    msg.setDestinationEntity(248U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.778997886323);
    msg.setSource(64363U);
    msg.setSourceEntity(78U);
    msg.setDestination(7528U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.772158197812;
    msg.lon = 0.245818020961;
    msg.z = 0.427171782475;
    msg.z_units = 118U;
    msg.speed = 0.967200728878;
    msg.speed_units = 30U;
    msg.takeoff_pitch = 0.0272985302253;
    msg.custom.assign("XSYYLBYVEVQBCBJSIDEPF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.221873028876);
    msg.setSource(20052U);
    msg.setSourceEntity(8U);
    msg.setDestination(30511U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.645507530371;
    msg.lon = 0.614537038639;
    msg.z = 0.299610848874;
    msg.z_units = 199U;
    msg.speed = 0.374976300844;
    msg.speed_units = 169U;
    msg.takeoff_pitch = 0.145042542335;
    msg.custom.assign("ITJDBAFPOSBZMEMHPETQLMIGCBKLGXAHVDNVMEIQJNVSOUADKHALLGQDSQNQGXCPIXIAWYFXEZUCTQDWHNSZKRHKNOJLJMZGEHPYUOABLZFWKQRPOFEEUEKSRCSWUTNPSTSKHDLGDMJPYCAONDLCUPFYVCGSYIFYHXQLXBQPYVJVTVHBTNRJMWAEMAZXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.0787933997551);
    msg.setSource(18544U);
    msg.setSourceEntity(76U);
    msg.setDestination(61495U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.467247845385;
    msg.lon = 0.83459228608;
    msg.z = 0.650844943455;
    msg.z_units = 131U;
    msg.speed = 0.178819092324;
    msg.speed_units = 175U;
    msg.takeoff_pitch = 0.0439907264467;
    msg.custom.assign("RMGNEUZASNFIOGHRSNDWKICVFREZHQPHUEWZBJYUGVXWFIZGGEHJELKTLUSQMSTABDZZSUOCFBMAAZXPHNUICQQIOFFCWLQUYETNOVHCCKXGEHOSXMAPQRFCNWPOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.393031325135);
    msg.setSource(45109U);
    msg.setSourceEntity(89U);
    msg.setDestination(54485U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.518318449274;
    msg.lon = 0.291499263469;
    msg.z = 0.72528788394;
    msg.z_units = 143U;
    msg.speed = 0.520887339552;
    msg.speed_units = 222U;
    msg.abort_z = 0.750739901261;
    msg.bearing = 0.278015463746;
    msg.glide_slope = 170U;
    msg.glide_slope_alt = 0.279864587988;
    msg.custom.assign("DRISNMBPFBWDGXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.139086477477);
    msg.setSource(1373U);
    msg.setSourceEntity(14U);
    msg.setDestination(58687U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.159470761613;
    msg.lon = 0.38892561675;
    msg.z = 0.227415161908;
    msg.z_units = 198U;
    msg.speed = 0.115119958402;
    msg.speed_units = 187U;
    msg.abort_z = 0.152835539118;
    msg.bearing = 0.521158892364;
    msg.glide_slope = 72U;
    msg.glide_slope_alt = 0.0460544308694;
    msg.custom.assign("IQNYCWKDYLQJTHSHXRFITFHRMNTUAJRUHDZFWNCRITCNRWGDBLMDQCKCJVHUPBDUDYYWOEFIVGLPYVQLTILKESSPGZHNBFYRJIQSNOEOEEUSFUVFXPILIYMUWZHBBMDHOXTNLKCJWVMZAMOHXBGDRQRKVBOXGZVXSKCWQWXXGOZXZLEDZCWBPLOEOUQWBLSHDV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.0856632975541);
    msg.setSource(52778U);
    msg.setSourceEntity(76U);
    msg.setDestination(2912U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.565823199498;
    msg.lon = 0.280229416814;
    msg.z = 0.362622152331;
    msg.z_units = 146U;
    msg.speed = 0.738630282418;
    msg.speed_units = 211U;
    msg.abort_z = 0.0529650990895;
    msg.bearing = 0.481620858293;
    msg.glide_slope = 238U;
    msg.glide_slope_alt = 0.360996347048;
    msg.custom.assign("JXSCXAUEFBLTDRWOMFUOUXUQRHKEHSJIMFBPHBDEVOROIFOOGMKPZNRNABJQVFVULXBQVMBQJSVZIYTHWTOIXYINRVSIFMCCMHMAJEQRCZNCIDBTLHTGJZMMWLHYKXYUWPGCTWDQDKAXJHNFVMEQUQFLKDJABS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.275939696824);
    msg.setSource(51658U);
    msg.setSourceEntity(211U);
    msg.setDestination(31164U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.116676039582;
    msg.lon = 0.031568047691;
    msg.speed = 0.576837705194;
    msg.speed_units = 223U;
    msg.limits = 55U;
    msg.max_depth = 0.347525916615;
    msg.min_alt = 0.475505224187;
    msg.time_limit = 0.82436763867;
    msg.controller.assign("ZSVAXDNLECAMCXDSHQLJNQEPIYOOHIVZDPUYOXGNMHWSMVTPJIVGKERLBTGSYFSNPRZIBPEMPCQVKUKGRLSJIIFGVZTYCKGANDUDNUJLFGHFBDXQYNZVKKOHEQVYTSIDPWGYFQJBFUPUKQFTCKCOSPFJDYUXIJRJELTCIXGZRBFQT");
    msg.custom.assign("VEIZQZQCTXIDTUEFOFMHOQWSCPYGLXUMJDFBOTJGNOWSMUZBYGSAMYDXKBVFMCGMWCOHLRYKVHHPOCUODGOHPGTQNDLBJSOERQPADCVISYKTYP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.153752298025);
    msg.setSource(25308U);
    msg.setSourceEntity(154U);
    msg.setDestination(39545U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.757494676073;
    msg.lon = 0.706533631741;
    msg.speed = 0.751185184266;
    msg.speed_units = 242U;
    msg.limits = 118U;
    msg.max_depth = 0.431836349906;
    msg.min_alt = 0.169563192392;
    msg.time_limit = 0.0681188598151;
    msg.controller.assign("XNHSXMVJXRHIBVYICOIWCDEETVAFUTVPOLCECZLTGZJDZAPORQKTVLMBYGQGBTMFHIVCWULQBLGONHPYRJOQZOOYDJSDBTPCJRZNKJZAFFGJFQXVIGKCNBPQKQITCAPAMOSFNHRGLWYSSHWMDAXKUHWNZLERORWQDKGHLUYEVEPKEMPPOXSKDLISCWURWTXSNTXPEJDVRUCVTAGZYBYDYKUHBUFAZJMEWNNBDFGQUJULXYRZEMINM");
    msg.custom.assign("LDKZGSWWNKNQGTPXPZRVTRVELOHAWVAIMEZGXEPBTPCRDGMOOFSAAPHIYTFEYXMLOZYAJUHTUCVZEPWYFSBCHTMNFCJGMVYFJQJWJROTAZVKJCLQBCTGDUEFMLVUOHNQONZBXVLGJDXPDUGHSJXBUCLINQFXQPYWIDKDYWKXEKAIKBVBQDYCAAHDLQBFMQIPIISKEJFRXRYUNZBVSQRMWC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.278811394146);
    msg.setSource(60257U);
    msg.setSourceEntity(191U);
    msg.setDestination(51365U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.495677500099;
    msg.lon = 0.495442664438;
    msg.speed = 0.719321776441;
    msg.speed_units = 100U;
    msg.limits = 199U;
    msg.max_depth = 0.600621094797;
    msg.min_alt = 0.158346124859;
    msg.time_limit = 0.834877880262;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.673072299429;
    tmp_msg_0.lon = 0.436976796088;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("WVFVJUXQQETUMYBPUSNZZVOCNTJGRNNFMPNCOLEDEOOMDJNDAUFTKSNWHCWHLZZRKRKZWXABEFTEXLTJIZKWLIGBVIGTGXKFHGLLQIQMYLAYYLPLAHCUPWFSNOPRDOSXEHPABBIFMYEMFQMAUJNRJXENCMOTGSTOXKSDOACIVZWODIQGKMKCREXHYYVBSRRCTJH");
    msg.custom.assign("YMITKDRBUJEYVVRBTLYHAISEHVDUFMJAYUAUAMPTKDFRKNPURWVLHMTZPPJBTWSVOMONDGXWGUAPCISMQWHVRBIPGHSJYEJDJWRICESCFIBBEOPKBWCXJPCDKWXQDOINDAZZOJKDILGNTLRZNYXWMCXXIUXRZUPLHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.703447306501);
    msg.setSource(27263U);
    msg.setSourceEntity(5U);
    msg.setDestination(49522U);
    msg.setDestinationEntity(96U);
    msg.target.assign("ROMCVGTBUGFJCLXLFWXTGXQTBKBNNDAYRGOCAJYYKBQXBXVCFCZJEZ");
    msg.max_speed = 0.964337735221;
    msg.speed_units = 90U;
    msg.lat = 0.917482422112;
    msg.lon = 0.393040404389;
    msg.z = 0.721219204236;
    msg.z_units = 102U;
    msg.custom.assign("AXKWURCEENJOATGYOXBUNSNHRVSPUXOEVIPJWBYWIFSFTINQRSCQQWJUAWMBKVTZHGCMRPELTOECGRVJRFJYHLALPJHBBOUGAHOVIN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.457881257731);
    msg.setSource(57612U);
    msg.setSourceEntity(56U);
    msg.setDestination(40651U);
    msg.setDestinationEntity(175U);
    msg.target.assign("PLDASJHVVWNZT");
    msg.max_speed = 0.262966644492;
    msg.speed_units = 124U;
    msg.lat = 0.661779756402;
    msg.lon = 0.329548092167;
    msg.z = 0.199958661693;
    msg.z_units = 107U;
    msg.custom.assign("CJVQVVEWPJQRMGAEPBIXMUFFSSSVDISNTRRCGGYHMIOWYLJCNAIDCBUFUCOLSLBKHWIAIKMWXDECSGLWWOHBXRSNTEWYAGUXPXEPBGMLOOJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.0222656966361);
    msg.setSource(61117U);
    msg.setSourceEntity(247U);
    msg.setDestination(58013U);
    msg.setDestinationEntity(252U);
    msg.target.assign("GKQDNDXNTUMBUSNFRCGBGREZAOKHMGZOZDLGBUHECZRRXXQKQPYGVJIRSIKFMITKQWQOFODUXLQDVSCWLUULEHHAGVYUYEMEYAFKLUPWFHHMWLKNMYNBWVZWIHTHBJVOEHFCCYFLGBCBSANRJJSXDZDYXPTDPWIP");
    msg.max_speed = 0.305895809124;
    msg.speed_units = 101U;
    msg.lat = 0.131209696061;
    msg.lon = 0.0892192198948;
    msg.z = 0.0618515505186;
    msg.z_units = 69U;
    msg.custom.assign("LXLZOKJETNNGGSDLAQRXOIDHTKXZVQKUWBRCEXOFZNVGACLYSDAFYYBLNLYMTSOBJJHLAYJMNPW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.319758425208);
    msg.setSource(43797U);
    msg.setSourceEntity(250U);
    msg.setDestination(4631U);
    msg.setDestinationEntity(174U);
    msg.timeout = 3530U;
    msg.lat = 0.404961966239;
    msg.lon = 0.858878188644;
    msg.speed = 0.170124281985;
    msg.speed_units = 67U;
    msg.custom.assign("FXTXWKFCVPTNAYPMMLUHBACQIFRHREUDKSOFOWSJEHPUWKEWCOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.879520738126);
    msg.setSource(33205U);
    msg.setSourceEntity(157U);
    msg.setDestination(29237U);
    msg.setDestinationEntity(232U);
    msg.timeout = 61784U;
    msg.lat = 0.529684370529;
    msg.lon = 0.231139396459;
    msg.speed = 0.53619371528;
    msg.speed_units = 177U;
    msg.custom.assign("ERARLTRQBDERPAUCQRYVSOLBNEOTVFWPXLANRIQNGGYTWDJHZNPHZZJIUWVYLCQMRSIYGKAONZXLPPHNWIBDCBPZQXCBPZEVGTFLXTSUUKFYHSLCOEXJTJBYOHKCZOLUMEHWNCWMOFPBKAVAFWFITSGDXFWQEMYSGXSTDMKXGIUDKMMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.275817271063);
    msg.setSource(23787U);
    msg.setSourceEntity(87U);
    msg.setDestination(33666U);
    msg.setDestinationEntity(21U);
    msg.timeout = 18248U;
    msg.lat = 0.152639251753;
    msg.lon = 0.282768931979;
    msg.speed = 0.478891269222;
    msg.speed_units = 168U;
    msg.custom.assign("IPTEALQKZYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.994986958856);
    msg.setSource(56547U);
    msg.setSourceEntity(223U);
    msg.setDestination(3906U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.502720244871;
    msg.lon = 0.680027143458;
    msg.z = 0.624566594145;
    msg.z_units = 10U;
    msg.radius = 0.289103166875;
    msg.duration = 53735U;
    msg.speed = 0.524881508776;
    msg.speed_units = 24U;
    msg.popup_period = 7329U;
    msg.popup_duration = 61074U;
    msg.flags = 83U;
    msg.custom.assign("USKOXWSSKIQSXTFRKKNVBZUIFVWSUCSUFLLUPXYPYOIIEGJTVDNWTPMHDRZFVEAAPZGQHUWZHQHWMBDQRMUYOLVJEGPAMXBNCMGNFWTGOBSFBWVCXYQHYCJOIXRECNRQJPKWHXGRACQQTKNAZICBUJYLASGCAMIPGZAKVNDXVRULJYZIERQHDFIADLKPGAVUERSZKMNXBOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.498588246373);
    msg.setSource(56563U);
    msg.setSourceEntity(70U);
    msg.setDestination(41072U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.0145119968745;
    msg.lon = 0.629485622123;
    msg.z = 0.208814826867;
    msg.z_units = 132U;
    msg.radius = 0.36979868207;
    msg.duration = 55754U;
    msg.speed = 0.368159116265;
    msg.speed_units = 156U;
    msg.popup_period = 25600U;
    msg.popup_duration = 50818U;
    msg.flags = 101U;
    msg.custom.assign("DXUUKIAJOPWDIGXYEBSFOJGHRSVRRIJZCUKEYNGJGCLGTFPDNZUDJMNZACAEGILIPDAOBYTOAAXRTQOHGWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.171718002022);
    msg.setSource(23344U);
    msg.setSourceEntity(77U);
    msg.setDestination(64726U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.512593292441;
    msg.lon = 0.524134400707;
    msg.z = 0.506829015943;
    msg.z_units = 100U;
    msg.radius = 0.927343553821;
    msg.duration = 1740U;
    msg.speed = 0.815237907548;
    msg.speed_units = 26U;
    msg.popup_period = 16027U;
    msg.popup_duration = 99U;
    msg.flags = 181U;
    msg.custom.assign("UCSAXPPUJHGSDFVDGWOPDXREXCGKRZLRFMBWITRKEXJIRSBAQZCLPSWNPFMBZYUVDVHZZUIGAWMZCESFWTSSQWLYKBPOMIQMGNECDJLMRLFMEIBAPYJHLOOVMDEXIEOJDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BottomUpSearch msg;
    msg.setTimeStamp(0.216765063932);
    msg.setSource(59264U);
    msg.setSourceEntity(34U);
    msg.setDestination(2034U);
    msg.setDestinationEntity(217U);
    msg.timeout = 57381U;
    msg.lat = 0.0334256302739;
    msg.lon = 0.299058557519;
    msg.z = 0.778844429834;
    msg.z_units = 3U;
    msg.speed = 0.910771381939;
    msg.speed_units = 135U;
    msg.roll = 0.0682812945642;
    msg.pitch = 0.366638766508;
    msg.yaw = 0.942001848107;
    msg.desired_pitch = 0.363238432412;
    msg.surface_threshold = 0.696232843822;
    msg.custom.assign("NVLOTFYGHKKTIRBDQZMLPPTNDRUNUDLTCBHSUWJGAREWMEWGBUYEZNJPFMCJCSTNBTVEXPWCFBRFCCPDUMAPXGLOVWGULOIIXDNYTHXPXNXJWKYQLVZXDIPVJACIABBFLBJDDVSMCANTSAZAKAZEGXJJRCHRKFOLNORRFDQYRUGISYQZQRZPSOBKNHYKPYIMYSQOJESWDGGMGVLUUIHQTMASVXZLOHVFZMFUZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BottomUpSearch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BottomUpSearch msg;
    msg.setTimeStamp(0.60094213266);
    msg.setSource(65129U);
    msg.setSourceEntity(46U);
    msg.setDestination(12910U);
    msg.setDestinationEntity(218U);
    msg.timeout = 21456U;
    msg.lat = 0.0739983506632;
    msg.lon = 0.00232295414097;
    msg.z = 0.854685215647;
    msg.z_units = 202U;
    msg.speed = 0.226796985215;
    msg.speed_units = 229U;
    msg.roll = 0.16807273921;
    msg.pitch = 0.594161264991;
    msg.yaw = 0.699350929744;
    msg.desired_pitch = 0.602258319974;
    msg.surface_threshold = 0.194028293306;
    msg.custom.assign("BPLOTNLTUNSSXDLCEYCMDNKNIBXGVELGELABWAPMIYTOLKUEFVNMVMHWZLQKJTPTJDZFCXAFVQMYBKPOHFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BottomUpSearch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BottomUpSearch msg;
    msg.setTimeStamp(0.388095515364);
    msg.setSource(34226U);
    msg.setSourceEntity(101U);
    msg.setDestination(555U);
    msg.setDestinationEntity(128U);
    msg.timeout = 43678U;
    msg.lat = 0.828983765785;
    msg.lon = 0.607898001845;
    msg.z = 0.784619157557;
    msg.z_units = 94U;
    msg.speed = 0.0792534662215;
    msg.speed_units = 121U;
    msg.roll = 0.893973173388;
    msg.pitch = 0.692321096922;
    msg.yaw = 0.978247566441;
    msg.desired_pitch = 0.510473935173;
    msg.surface_threshold = 0.42241592943;
    msg.custom.assign("OGRPHRZKJRZLVUKDBMEWVYOQWIJWTHRXEPTPXKCHHSIMODVLLHBMAZITWUNJUEMANXWEXJHPUOQGRJFQEGDPAROWYCZTAVEYMEBBIXCCOSQARDGLDYVIHFVRMLDKJPOJKDATZWZHFTFALQSCDNKGCNYXUYGUNYSZDATVSALSEOSHPEPIYNIBLVSQLSKMTMJKQQTUVYGVKFMHRCSRBQEUZIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BottomUpSearch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.96438652356);
    msg.setSource(6425U);
    msg.setSourceEntity(74U);
    msg.setDestination(23617U);
    msg.setDestinationEntity(235U);
    msg.timeout = 30031U;
    msg.lat = 0.513891452494;
    msg.lon = 0.180028422772;
    msg.z = 0.0639433056386;
    msg.z_units = 148U;
    msg.speed = 0.574461773491;
    msg.speed_units = 43U;
    msg.bearing = 0.761621121569;
    msg.width = 0.0778556868393;
    msg.direction = 193U;
    msg.custom.assign("AMDVMZFTMCYBDMAZWLNQOUNNUMIGTZFCEFMRINIJVPZWCVYDNVDOFEJXUYWGMLFXJWQVGDWHDSGAQAYOZABQXKWUBSAUGBWCABDKKLHPVLSCSZOUHHFKHRPOKTHBQDKICZXRVTQUOXYZXYQFEPNRYWPOBFWVTDIGIKEFQAXSRIITQVLPQJTYJUKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.681394007109);
    msg.setSource(33742U);
    msg.setSourceEntity(9U);
    msg.setDestination(27459U);
    msg.setDestinationEntity(199U);
    msg.timeout = 45833U;
    msg.lat = 0.124274920942;
    msg.lon = 0.498014847387;
    msg.z = 0.480034697012;
    msg.z_units = 59U;
    msg.speed = 0.230340211456;
    msg.speed_units = 10U;
    msg.bearing = 0.860547855356;
    msg.width = 0.605970233322;
    msg.direction = 239U;
    msg.custom.assign("OXDEDESCZUZZTKGYWLFVJGIN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.739100686005);
    msg.setSource(48215U);
    msg.setSourceEntity(239U);
    msg.setDestination(21232U);
    msg.setDestinationEntity(242U);
    msg.timeout = 36609U;
    msg.lat = 0.514429529663;
    msg.lon = 0.592028804779;
    msg.z = 0.962811926043;
    msg.z_units = 124U;
    msg.speed = 0.47959099841;
    msg.speed_units = 226U;
    msg.bearing = 0.290361226205;
    msg.width = 0.598427798759;
    msg.direction = 230U;
    msg.custom.assign("FUZTWZIMQPSTNZLVJYMKIEXUZJKKISGRZGAOJBPXEFRGUXDIPZADZGBENQKBTWACUAOXLU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.0773148105146);
    msg.setSource(22648U);
    msg.setSourceEntity(251U);
    msg.setDestination(6906U);
    msg.setDestinationEntity(97U);
    msg.op_mode = 55U;
    msg.error_count = 30U;
    msg.error_ents.assign("XDXZECAMOVSIGCNVRDDNVLUQLYPYLKHBERDIAIGESLEFHMQVFKBJFVHMJEIHDVFIEUETGJHZJQXMLHBZOHCRPNNYZIPSOBDKTLTCLWFTFZKBXQSPYUPCURWQNUQOXZTAOVXWGYJDJFFOEFKMSWABMGUKKCMQRQNJEAASHVSNRGOOAUBUJIREWXLJTIUBGCYTWZDOISXQRACUJPWKVNXHWBZZVACPGSIZGNALYTKYYBOHPRQPRLGT");
    msg.maneuver_type = 12894U;
    msg.maneuver_stime = 0.739615659893;
    msg.maneuver_eta = 12767U;
    msg.control_loops = 1362441324U;
    msg.flags = 193U;
    msg.last_error.assign("IHNGELTIGEFQNQMLTSGPXMOVVUCPRN");
    msg.last_error_time = 0.571759883678;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.0851733675041);
    msg.setSource(64274U);
    msg.setSourceEntity(146U);
    msg.setDestination(45728U);
    msg.setDestinationEntity(100U);
    msg.op_mode = 16U;
    msg.error_count = 155U;
    msg.error_ents.assign("KKQKSIQAHJUCDMPSCRYNDZMKFOKDOXLRTVHWBNPSXYWMRAXYDBZBRC");
    msg.maneuver_type = 40203U;
    msg.maneuver_stime = 0.844921360072;
    msg.maneuver_eta = 7774U;
    msg.control_loops = 1213902003U;
    msg.flags = 43U;
    msg.last_error.assign("BGRFQHVNJKEAFJSDPUOYNZAGWKFFNPZZHVKFRTIALBTKZRATWIMJCXCQNMULWHVGJZKFODSWXJMACYMWEEERLJXRGCHOBWVRSCJAGUUFUCDLBFYXSSLTZGYRKHHGVHMKQRGHIDMIXADOEFLQGSYAVOBTPTASWHXZKJCACVQXSJUCUPXLRDQUZYITUQWMYPNLTBFNQZDEYPBVIJZOMNOTQIEXNDBICVBRKLMYWPPQSOENKSOHE");
    msg.last_error_time = 0.957187764363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.288750854542);
    msg.setSource(36938U);
    msg.setSourceEntity(172U);
    msg.setDestination(17766U);
    msg.setDestinationEntity(248U);
    msg.op_mode = 237U;
    msg.error_count = 50U;
    msg.error_ents.assign("SKRVTGWXPWEPYAJUPUXAIYTJHFJGTRTBOJLLZUCJTNGXTIUILYDSHBBEFOCDWISXFUVZUMZWNXQQTQXBMZAAELUAWFEYVVHOACMGFTEGNASHS");
    msg.maneuver_type = 33431U;
    msg.maneuver_stime = 0.907742085081;
    msg.maneuver_eta = 45566U;
    msg.control_loops = 565952408U;
    msg.flags = 16U;
    msg.last_error.assign("CZEHHXVUEJJLOFAZETQXKMLIMRWQMISYNGIVFWFPFCWGKEXIFOXAFVYHMYODZREZGUNNSGNGVHDXPCMPZNAPTTBZBPJHHAJVHRFZTWUVOXENRJPUSKMAIGIBMYOUJLSEVDKSRTMOCSYKMSBRLACITIGDEPXDYTYXPSQEJFCNUYGJEKUKBWWGFIZLQWVOAQC");
    msg.last_error_time = 0.130600755763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.695932229216);
    msg.setSource(60583U);
    msg.setSourceEntity(110U);
    msg.setDestination(48209U);
    msg.setDestinationEntity(199U);
    msg.type = 80U;
    msg.request_id = 12831U;
    msg.command = 89U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 25232U;
    tmp_msg_0.control_ent = 58U;
    tmp_msg_0.timeout = 0.268088618143;
    tmp_msg_0.loiter_radius = 0.847084345945;
    tmp_msg_0.altitude_interval = 0.561524855093;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 42462U;
    msg.info.assign("OSHJZQLLGDEGFQYAIUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.386046832839);
    msg.setSource(64098U);
    msg.setSourceEntity(171U);
    msg.setDestination(21208U);
    msg.setDestinationEntity(57U);
    msg.type = 108U;
    msg.request_id = 47942U;
    msg.command = 32U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 30503U;
    tmp_msg_0.lat = 0.789374900611;
    tmp_msg_0.lon = 0.667261978105;
    tmp_msg_0.z = 0.174051543649;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.speed = 0.319742085388;
    tmp_msg_0.speed_units = 145U;
    tmp_msg_0.bearing = 0.0310339048765;
    tmp_msg_0.width = 0.433741746732;
    tmp_msg_0.direction = 22U;
    tmp_msg_0.custom.assign("ZVAPNHOFUWDWSRKUGJQHMVTRJCHNDPCEZWUQIERRCYKBZBVOWTWZODSGZUHYCXJTNIHL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56279U;
    msg.info.assign("RUCTOPLFCOYVJMLVJWJWFEBIHWVFPMCQSAPLDBAUKMPZEWIQMNAOKRABOALYGNITGXJLOLNBZTIYQODIDEXHIMPHIRRDVJXXMNYEXSEYLINVDBSFWVUZARTCQHGBNSSWQAURYEKMVUUCTOLGRAFTSYGIKLFCUHGZRZDSQBEVFYEESDCEJKCGJZSPCJFGYHDAKGVMMMQWWQKZHQIXTPQTSVRHBHTLZRPBXAPKTZFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.382713933833);
    msg.setSource(5553U);
    msg.setSourceEntity(111U);
    msg.setDestination(35300U);
    msg.setDestinationEntity(50U);
    msg.type = 0U;
    msg.request_id = 8382U;
    msg.command = 62U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.370770852067;
    tmp_msg_0.lon = 0.251199645585;
    tmp_msg_0.z = 0.11609793584;
    tmp_msg_0.z_units = 112U;
    tmp_msg_0.speed = 0.244098711338;
    tmp_msg_0.speed_units = 113U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 3947U;
    tmp_tmp_msg_0_0.off_x = 0.751492197756;
    tmp_tmp_msg_0_0.off_y = 0.833652050634;
    tmp_tmp_msg_0_0.off_z = 0.175089781736;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.487726434909;
    tmp_msg_0.custom.assign("PIMLDOSVTSQPQFFHULSZQDGMTLZDXAKAGULVJMKNGHUJJBJBZGONTDCUJRODXIRZCYYNKZFWEAWBDMYFHKAVQUYQQDRXAPWEDHKTLOGYIECWYMLG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56046U;
    msg.info.assign("LZAZFMZCAVPBOSVVRKGXVEJQVBYPDHGBCQMCXIIOVILRZBJWTARSPXXIRLKGGLMOQJWUXFRUKFDXRFBDHTPNOZVYLNKQUVCKZILUUNTSPFYGENHYGWNIKEVKPNWUDLFYZFXEIPAJYPDUEADDOOJMJSHQGQTHCHGBSHFXCJONN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.676009530021);
    msg.setSource(4184U);
    msg.setSourceEntity(188U);
    msg.setDestination(63356U);
    msg.setDestinationEntity(207U);
    msg.command = 215U;
    msg.entities.assign("YULENCDGBGSUWTJYNZIZQHXESWTACVWJOLVYHUHDUZLFIQLFNUMRYCE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.419471717679);
    msg.setSource(32199U);
    msg.setSourceEntity(31U);
    msg.setDestination(63911U);
    msg.setDestinationEntity(106U);
    msg.command = 187U;
    msg.entities.assign("YPHJANQKXSAYPDJDIULLWGOFJTXVHZUSUXCIGZXWJVJBUYPVPHHZCETLMRSUVNHAJRXMFTPKISZKBIISRDADZWAVPMQGEVBFXPCKMDDFKRVYLYMLMFIFNQMEJLHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.264091365503);
    msg.setSource(40380U);
    msg.setSourceEntity(113U);
    msg.setDestination(31876U);
    msg.setDestinationEntity(81U);
    msg.command = 206U;
    msg.entities.assign("SSGEKILVAKGGXUOHXPAYCDEHSKHVLEWQLTWZVXRFHEZRGFFHBHKJSSLTMIDGQLKCHLBDFRRVOTYVVAMJOLPUDJYCKZNUYZYVXEGPLYMXFMSRPJNPVYFKNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.53847370199);
    msg.setSource(26984U);
    msg.setSourceEntity(29U);
    msg.setDestination(62932U);
    msg.setDestinationEntity(229U);
    msg.mcount = 42U;
    msg.mnames.assign("SIVVDELWQRPYCZHLYCWRHJNYUTBKFDGZYRLLBAKIFXSATTUYCGXPEWZJDSZVJIDSOAHLHKJFTTXAVMRNHDQCLMQTQUADESSTOOPGUFUVEPUDRCHWSMFLJNTZXAHQPCXAIDOMBTYFGNBOQQVBPKWVMVSESEYUKZVIIXUJWRPFEZERNCWRQKBNXXZJFDHAIMRQJIUBM");
    msg.ecount = 102U;
    msg.enames.assign("VFVTSJRBQZRDILMYZCGJTWLZHOIAOHHZAISXBULVSMLFVGCKYJMGMXETLBTKZOVAVOWKPKDCFYBAXURCCGIBIWDISXUKDCHDAOAMFCJTMJSEQPYWPXUEVRCQPSSYBOLVNEXKQFEMAJSNIDJKEIGFZNBGODBMMHCQHRUEFYQRPRYNLZDLNOOUZHFTPGNOBCDWGKAXTVXPQYWYJKSMWYSGZNWDXVEWUAN");
    msg.ccount = 69U;
    msg.cnames.assign("BLJQNCVEKENSFQVMYPPQBUWIIOIWABRVNQHVWWUUMXFMTIQCFDALAHCEKSHDT");
    msg.last_error.assign("USLPVRRGVCESMSFUXRHBXWQKTQRGZHEHJSTKBRUABTYDIZJUHYLIGQMVEUPQLEVOOZOCIPEAJXNWHEXKXAWGMPCRZGJFDLINOWRTBZKOSVDCGKCGJHJIWTSMCOMETDWGKDPISWQDKHXFJYYVTRENAVOZHWTDJMSKXLQPNYRMCDOZPUKLRLGBZAFSLFIUXFDEUNQYAIXUWBLFSXJNBNYIOBZAHYMTNPHDTIUFA");
    msg.last_error_time = 0.517644668141;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.636389990654);
    msg.setSource(27057U);
    msg.setSourceEntity(136U);
    msg.setDestination(46150U);
    msg.setDestinationEntity(132U);
    msg.mcount = 91U;
    msg.mnames.assign("DAPFBUBZJWDHUGLDAMCMMBYDTJQMOOKAMAIUKRHTVBUTTIARGGYDGYXYXRWZHVJSMKZOWEFPFHESWQJTIZJUEIIFK");
    msg.ecount = 143U;
    msg.enames.assign("HDGLVUWEFDNCAEYPQWLMSBKBZMLYVLZLQFXXVNRYIODSPTBUTNTXJLSFYCFBGRVNZTHZKUCITAIMBYQZUPSBDIKHAGPHCMROUCNQFMEXGQVCKXYQAGKDNXJUAEHWBJLFPAJTBFUSGDWOASEOPKWMYMIIWPEXKHHZGOJHOQIFZ");
    msg.ccount = 167U;
    msg.cnames.assign("DFYDRJUUJEAGSUTNL");
    msg.last_error.assign("GUUJYLLKGTVRWEMQFLVDDMPZGRCHSXYFONLTMEVDLHBCQBZXJVIYTLESAKWBTSHPBN");
    msg.last_error_time = 0.484226984728;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.717209515983);
    msg.setSource(1506U);
    msg.setSourceEntity(222U);
    msg.setDestination(30970U);
    msg.setDestinationEntity(103U);
    msg.mcount = 70U;
    msg.mnames.assign("GCLELHQTJGWOBRUNCIFUXSEMDSGYFRQXJFZZTMZAXHAVCFNZOOBATCJYWQBHGWGDSVFPBUPUUJRQHKGS");
    msg.ecount = 141U;
    msg.enames.assign("ULCMODWVUARUZQMGGMXXCTZNDJIYIWSNANMYCDHFMKOIRDHIAOVQWUTZPJTEWLRZMXALMKJNGELQKHCPZNWNBDGQDGVWFJHFISEPCWWUBTPXEYRBPYWESXQPUPJKLSOYOZMFLVXVFPYMOVNXZJZSHLJOCIIZJUKCYRQIUAQCDAWCURMXJEBNBENLFFDAXTORAGPSGNRVIBHVGBEKAFVFSPSF");
    msg.ccount = 253U;
    msg.cnames.assign("KNNXPZAKSKUGFPBWEMLIENJJQCSSRDMJBXTUJNAQEHXUVRJCPAQFSBWQEHFGPIYJZYXVHLNJBKSRCADQQFKGIDRFQKWYBOVLCLOWDQHWRTPGR");
    msg.last_error.assign("FNQOXSELPACFDBOFRFSYPF");
    msg.last_error_time = 0.321734691759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.925608314275);
    msg.setSource(5625U);
    msg.setSourceEntity(156U);
    msg.setDestination(7263U);
    msg.setDestinationEntity(137U);
    msg.mask = 197U;
    msg.max_depth = 0.469511295361;
    msg.min_altitude = 0.0505219849341;
    msg.max_altitude = 0.00146252014549;
    msg.min_speed = 0.0667653068551;
    msg.max_speed = 0.518046185662;
    msg.max_vrate = 0.987748046462;
    msg.lat = 0.408573097773;
    msg.lon = 0.847359389174;
    msg.orientation = 0.326367273973;
    msg.width = 0.766411032975;
    msg.length = 0.966653189921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.269255024308);
    msg.setSource(36889U);
    msg.setSourceEntity(154U);
    msg.setDestination(53860U);
    msg.setDestinationEntity(78U);
    msg.mask = 64U;
    msg.max_depth = 0.0124557822108;
    msg.min_altitude = 0.872746501604;
    msg.max_altitude = 0.454924152828;
    msg.min_speed = 0.573335651787;
    msg.max_speed = 0.906406484314;
    msg.max_vrate = 0.403119703861;
    msg.lat = 0.947071742762;
    msg.lon = 0.236947209346;
    msg.orientation = 0.251200758985;
    msg.width = 0.987564260814;
    msg.length = 0.75727089052;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.565705755444);
    msg.setSource(10869U);
    msg.setSourceEntity(61U);
    msg.setDestination(11542U);
    msg.setDestinationEntity(160U);
    msg.mask = 137U;
    msg.max_depth = 0.0922405672758;
    msg.min_altitude = 0.976958606752;
    msg.max_altitude = 0.625217913184;
    msg.min_speed = 0.634548812135;
    msg.max_speed = 0.893180909846;
    msg.max_vrate = 0.754752345538;
    msg.lat = 0.566794623642;
    msg.lon = 0.226083190942;
    msg.orientation = 0.806371640272;
    msg.width = 0.781902145997;
    msg.length = 0.588594653999;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.762970687735);
    msg.setSource(6491U);
    msg.setSourceEntity(175U);
    msg.setDestination(44641U);
    msg.setDestinationEntity(31U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.187833034676);
    msg.setSource(18264U);
    msg.setSourceEntity(229U);
    msg.setDestination(18137U);
    msg.setDestinationEntity(126U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.522299116743);
    msg.setSource(14800U);
    msg.setSourceEntity(2U);
    msg.setDestination(43183U);
    msg.setDestinationEntity(149U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.112663648152);
    msg.setSource(63211U);
    msg.setSourceEntity(178U);
    msg.setDestination(40087U);
    msg.setDestinationEntity(235U);
    msg.duration = 49812U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.992154554723);
    msg.setSource(18954U);
    msg.setSourceEntity(115U);
    msg.setDestination(27102U);
    msg.setDestinationEntity(236U);
    msg.duration = 7323U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.833717272316);
    msg.setSource(52115U);
    msg.setSourceEntity(45U);
    msg.setDestination(1088U);
    msg.setDestinationEntity(34U);
    msg.duration = 14200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.625871973871);
    msg.setSource(18733U);
    msg.setSourceEntity(182U);
    msg.setDestination(512U);
    msg.setDestinationEntity(208U);
    msg.enable = 88U;
    msg.mask = 1389821784U;
    msg.scope_ref = 1004580979U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.980543575519);
    msg.setSource(1596U);
    msg.setSourceEntity(69U);
    msg.setDestination(49258U);
    msg.setDestinationEntity(101U);
    msg.enable = 126U;
    msg.mask = 3567067128U;
    msg.scope_ref = 2567665788U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.774134114939);
    msg.setSource(20803U);
    msg.setSourceEntity(178U);
    msg.setDestination(6509U);
    msg.setDestinationEntity(134U);
    msg.enable = 74U;
    msg.mask = 767917419U;
    msg.scope_ref = 1553077266U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.692948819188);
    msg.setSource(4100U);
    msg.setSourceEntity(220U);
    msg.setDestination(13171U);
    msg.setDestinationEntity(143U);
    msg.medium = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.595349109612);
    msg.setSource(43957U);
    msg.setSourceEntity(95U);
    msg.setDestination(6835U);
    msg.setDestinationEntity(44U);
    msg.medium = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.170062583161);
    msg.setSource(45877U);
    msg.setSourceEntity(10U);
    msg.setDestination(47239U);
    msg.setDestinationEntity(26U);
    msg.medium = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.30546390069);
    msg.setSource(44294U);
    msg.setSourceEntity(181U);
    msg.setDestination(33551U);
    msg.setDestinationEntity(218U);
    msg.value = 0.413314544887;
    msg.type = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.73691532627);
    msg.setSource(6936U);
    msg.setSourceEntity(9U);
    msg.setDestination(2967U);
    msg.setDestinationEntity(82U);
    msg.value = 0.596066174592;
    msg.type = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.994851444088);
    msg.setSource(1964U);
    msg.setSourceEntity(25U);
    msg.setDestination(15530U);
    msg.setDestinationEntity(118U);
    msg.value = 0.928268505029;
    msg.type = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.982879160223);
    msg.setSource(1675U);
    msg.setSourceEntity(118U);
    msg.setDestination(59104U);
    msg.setDestinationEntity(29U);
    msg.possimerr = 0.288250935133;
    msg.converg = 0.813245614013;
    msg.turbulence = 0.276004157298;
    msg.possimmon = 243U;
    msg.commmon = 23U;
    msg.convergmon = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.934349346723);
    msg.setSource(48864U);
    msg.setSourceEntity(201U);
    msg.setDestination(3965U);
    msg.setDestinationEntity(107U);
    msg.possimerr = 0.216094756992;
    msg.converg = 0.0219081710143;
    msg.turbulence = 0.164329483608;
    msg.possimmon = 176U;
    msg.commmon = 13U;
    msg.convergmon = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.422954432191);
    msg.setSource(55221U);
    msg.setSourceEntity(153U);
    msg.setDestination(647U);
    msg.setDestinationEntity(201U);
    msg.possimerr = 0.533865678105;
    msg.converg = 0.0757764389425;
    msg.turbulence = 0.641070180997;
    msg.possimmon = 120U;
    msg.commmon = 243U;
    msg.convergmon = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.849608792172);
    msg.setSource(35554U);
    msg.setSourceEntity(25U);
    msg.setDestination(38512U);
    msg.setDestinationEntity(235U);
    msg.autonomy = 235U;
    msg.mode.assign("EJVLATWNBBOVUDUHAQFCWLFLSJSCCDDOYESXJJMGHBIKNEDGSBVKODKOKCPJVPYUPPWEKVFHQMXVIDWVRERNAQO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.573353677064);
    msg.setSource(61502U);
    msg.setSourceEntity(54U);
    msg.setDestination(27616U);
    msg.setDestinationEntity(156U);
    msg.autonomy = 100U;
    msg.mode.assign("XFZXBPCJIEQLFEODNJQPVQSNVZUHRUOPDTUEJHFTGKWMDANWXJKEPQOBFKKHRJAZMXISNNUPKWHOTJBVKWPRNGUWEDTCMBBBTILDVRYZVTJLSKACZMISHMNGCPAXOLJVEHUYMSYLXGKIKVQYZZAQLPQAESHRAMFRXEKARBMGUGESBGGORYGV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.617373248692);
    msg.setSource(20591U);
    msg.setSourceEntity(185U);
    msg.setDestination(14351U);
    msg.setDestinationEntity(254U);
    msg.autonomy = 59U;
    msg.mode.assign("IDTCXUAUMFJCCERFAJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.545993787509);
    msg.setSource(59349U);
    msg.setSourceEntity(99U);
    msg.setDestination(6544U);
    msg.setDestinationEntity(236U);
    msg.type = 50U;
    msg.op = 123U;
    msg.possimerr = 0.539232835316;
    msg.converg = 0.885640108152;
    msg.turbulence = 0.546858728483;
    msg.possimmon = 245U;
    msg.commmon = 25U;
    msg.convergmon = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.722158858817);
    msg.setSource(57179U);
    msg.setSourceEntity(249U);
    msg.setDestination(46299U);
    msg.setDestinationEntity(210U);
    msg.type = 154U;
    msg.op = 198U;
    msg.possimerr = 0.730137848372;
    msg.converg = 0.427437319347;
    msg.turbulence = 0.336620015669;
    msg.possimmon = 187U;
    msg.commmon = 88U;
    msg.convergmon = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.920736283245);
    msg.setSource(11101U);
    msg.setSourceEntity(93U);
    msg.setDestination(15259U);
    msg.setDestinationEntity(42U);
    msg.type = 237U;
    msg.op = 160U;
    msg.possimerr = 0.0880993623033;
    msg.converg = 0.725411966783;
    msg.turbulence = 0.616818288331;
    msg.possimmon = 189U;
    msg.commmon = 165U;
    msg.convergmon = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.126837592712);
    msg.setSource(36652U);
    msg.setSourceEntity(112U);
    msg.setDestination(53805U);
    msg.setDestinationEntity(26U);
    msg.op = 114U;
    msg.comm_interface = 117U;
    msg.period = 35622U;
    msg.sys_dst.assign("CBDQWKPKUHWUAAWRLPNENDXVJUQSISZDBEWGLZZHPPIEOXCWORFRPEMUTZDTXYUQQSTHBEJVYQZFIVWOARCGHLGOMHSGKCKVKTUMRNVXGCWW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.510404402628);
    msg.setSource(42047U);
    msg.setSourceEntity(122U);
    msg.setDestination(6166U);
    msg.setDestinationEntity(24U);
    msg.op = 80U;
    msg.comm_interface = 157U;
    msg.period = 58103U;
    msg.sys_dst.assign("ZQAPKPHZPRSFRSOOSKUDYMNUJGHFCENBSVTXIXYEAXFSJYWVMHZBFDNPQUOCVYQJCMCEEUVRMXHRRXGVHDJSRCPKMYUKXRZWGJYWAIWPVBFDMXGDWJKUHBQRGUQIACJNEOHYGFMJWOVHLNQPIWROLLTSPCAFWEXOGZTDZQMDJWLOTKSILKOBIDHBUBTUXIMFGBQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.334418711583);
    msg.setSource(7753U);
    msg.setSourceEntity(199U);
    msg.setDestination(28369U);
    msg.setDestinationEntity(121U);
    msg.op = 222U;
    msg.comm_interface = 30U;
    msg.period = 62576U;
    msg.sys_dst.assign("NAJCGUHBHAQLJXZYBIWRUXEGVEMREHAFWDSCRQASUKMXYDTGTKORQYBCAXDNSJVTJMGENSDGZSDFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.283809172102);
    msg.setSource(62850U);
    msg.setSourceEntity(102U);
    msg.setDestination(18485U);
    msg.setDestinationEntity(248U);
    msg.stime = 3780534283U;
    msg.latitude = 0.699529715452;
    msg.longitude = 0.690254989055;
    msg.altitude = 1339U;
    msg.depth = 56163U;
    msg.heading = 63168U;
    msg.speed = -31699;
    msg.fuel = -99;
    msg.exec_state = 21;
    msg.plan_checksum = 54603U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.318728113911);
    msg.setSource(5627U);
    msg.setSourceEntity(17U);
    msg.setDestination(33711U);
    msg.setDestinationEntity(241U);
    msg.stime = 2663407872U;
    msg.latitude = 0.91434333445;
    msg.longitude = 0.659184301786;
    msg.altitude = 56447U;
    msg.depth = 62948U;
    msg.heading = 28525U;
    msg.speed = 3053;
    msg.fuel = -20;
    msg.exec_state = 70;
    msg.plan_checksum = 9232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.309720018678);
    msg.setSource(56351U);
    msg.setSourceEntity(110U);
    msg.setDestination(60541U);
    msg.setDestinationEntity(58U);
    msg.stime = 3597116575U;
    msg.latitude = 0.75885600866;
    msg.longitude = 0.173948110439;
    msg.altitude = 60145U;
    msg.depth = 35973U;
    msg.heading = 45535U;
    msg.speed = 18473;
    msg.fuel = -41;
    msg.exec_state = -4;
    msg.plan_checksum = 17226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.147039944341);
    msg.setSource(29865U);
    msg.setSourceEntity(135U);
    msg.setDestination(25783U);
    msg.setDestinationEntity(194U);
    msg.req_id = 34231U;
    msg.comm_mean = 157U;
    msg.destination.assign("PSHSLJRPQA");
    msg.deadline = 0.979340577968;
    msg.range = 0.669025475348;
    msg.data_mode = 5U;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.325094488159;
    tmp_msg_0.width = 0.918260632048;
    tmp_msg_0.length = 0.918260963149;
    tmp_msg_0.bearing = 0.566863568492;
    tmp_msg_0.pxl = -42;
    tmp_msg_0.encoding = 57U;
    const char tmp_tmp_msg_0_0[] = {51, 36, -117, -114, -18, 18, -103, 22, -86, 10, -114, -100, -26, -61, 22, -64, 88, 63, -8, -103, 73, 33, 16, -3, 4, 83, -3, -91, -27, -127, -103, 119, 95, 63, -102, -4, -112, -49, -52, -26, -105, 110, 80, -27, 83, 102, -37, -108, 110, 10, 114, 2, -4, 4, -55, -125, 21, 31, 25, -87, -8, 35, -30, 64, 4, 17, 36, -50, 58, 65, 62, -79, 5, -48, 67, -54, -22, -116, 56, 55, 67, 76, -37};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GNBLDJCXWRXTAFYZRTYVELCCJZHSDHACBOOHHKQGPAFQIXHNZMUZXMHYAZFYTMEDLYWPNNCLOCPUZOJJYVQQVSVXL");
    const char tmp_msg_1[] = {3, -10, 121, 124, 51, 80, -122, 34, -115, -39, -30, 64, -83, -52, 50, 76, -10, -81, -90, 103};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.388762851624);
    msg.setSource(59508U);
    msg.setSourceEntity(8U);
    msg.setDestination(30146U);
    msg.setDestinationEntity(98U);
    msg.req_id = 19688U;
    msg.comm_mean = 82U;
    msg.destination.assign("RHJKGEIZCNUHRVNLVYYLXJGLVIHJHPZEXPLOYFIDNGTBVDAYSSKXWEQGFASVWOPGSJJYHFJRBMECWJUMHIFWNXOMXBYDWBGCIAFNDFPAOGUQZVLZHAUXDNOMXCGABCSDTQUNWVPODRQP");
    msg.deadline = 0.683592368239;
    msg.range = 0.763983773538;
    msg.data_mode = 48U;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.170361086548;
    tmp_msg_0.temperature = 0.15194408522;
    tmp_msg_0.depth = 0.0697050968843;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HNFHNXCQBXKFGMSGNDPUPOIMLDRWUPUXQVVXCVSYEGBWWZXYYYVISUTAMBLQLJGQTFHFGBXQBYBGDMZLOEWOXYCKPVFWYDLVRVAHAASNQKMQFKNVYKLYHJCCEMZMUIOJWRDDKMWOZKXFUMCTEJZVZEZBPMAFPDVGJKCQEERBWETJEFDICTIANRNLNDAOPUAXROGTUZHFWPQBA");
    const char tmp_msg_1[] = {-46, -48, -100, 80, -122, 3, -95, 2, -71, -34};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.8613309756);
    msg.setSource(50032U);
    msg.setSourceEntity(199U);
    msg.setDestination(47485U);
    msg.setDestinationEntity(106U);
    msg.req_id = 54962U;
    msg.comm_mean = 222U;
    msg.destination.assign("NSLSZHUBVVIENUYLFFOCXDISQQBNZTSQGCEILHKGMFUTBA");
    msg.deadline = 0.718199795864;
    msg.range = 0.262303228701;
    msg.data_mode = 155U;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 97U;
    tmp_msg_0.max_depth = 0.649824196372;
    tmp_msg_0.min_altitude = 0.0870288908239;
    tmp_msg_0.max_altitude = 0.664408832072;
    tmp_msg_0.min_speed = 0.602985887165;
    tmp_msg_0.max_speed = 0.0907588463556;
    tmp_msg_0.max_vrate = 0.456989665917;
    tmp_msg_0.lat = 0.228971538326;
    tmp_msg_0.lon = 0.428061469831;
    tmp_msg_0.orientation = 0.801378340911;
    tmp_msg_0.width = 0.342985349996;
    tmp_msg_0.length = 0.741196852175;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JKHZKBHSGZAQPNHLOCPXLNIMLKWMNBKNYVJOAKHTFDEDJYBRLFGGAPLEZNHFUTQRSCFUEALXHRTVRBDQXAMHOJPTWIMWYWTWSIWLUKKFDBFKDWRIQFYNUCNCDWLEIRYIRJSJGZHKNGDOPUAZXVMYZEQZFGSEGWSAGEIYVOTMQSFMBBSYFTHUNCBYPBUVJMEQORUGVDODO");
    const char tmp_msg_1[] = {-107, -62, 73, 72, 49, 8, 17, 92, 62, -46, 57, 108, 85, 76, -117, -115, 105, 51, -87, -69, -57, -25, -89, 121, 11, -15, -67, 90, -68, 65, -11, 94, 111, 72, 114, 62, -15, 10, -54, 49, 47, -99, 36, -70, 109, 90, 0, -87, 102, -30, 12, 7, -48, -125, 120, -77, 28, -13, -21, -32, 54, -87, 74, 34, 43, 49, -124, -63, 85, 79, -17, -53, 110, 65, 116, -106, -51, -30, 19, 107, 114, -53, -109, 60, -91, -100, -63, -94, -107, 83, 59, 60, 56, -113, -29, 33, 35, -127, -17, -108, -93, -25, 108, 64, 3, -89, 8, 80, -14, -35, -92, -29, 96, -121, 35, 90, -82, -52, 52, 46, -104, 38, -51, 91, 78, -64, 55, -5, 78, 83, 120, -127, 100, 57, -18, 15, -55, -103, -53, -46, -108, -9, 79, 6, 17, 115};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.994303000882);
    msg.setSource(59035U);
    msg.setSourceEntity(230U);
    msg.setDestination(13075U);
    msg.setDestinationEntity(102U);
    msg.req_id = 12019U;
    msg.status = 157U;
    msg.range = 0.924757520607;
    msg.info.assign("IQWEDETLENUOFUJKPLOEAGLGYKVZIHRUHVLSVBPJWLWJHGWQQAHONRZKCMZIIRKZQGBHBXRKNFSUSHNBGBFEBFIXRNLJAFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.119113212329);
    msg.setSource(42098U);
    msg.setSourceEntity(252U);
    msg.setDestination(8205U);
    msg.setDestinationEntity(178U);
    msg.req_id = 25079U;
    msg.status = 130U;
    msg.range = 0.182841580207;
    msg.info.assign("LEDHIIXBFHYAOWTUIIUJVEZHVMUGQAHPGNOQYGVUNUGVDOTZCGHHBWESUDVBFXVMKZCBOGKAIEKKKVNMCQNLHDSCGPWJOXIWFNMWJTKDSAGZZAOQHQXWIPYLBSIGNSDBEKBPZVMMETLCUSHCBZUXYILQPAJOFYKODXTZXRXTDSACVJNPJJNNMHRATQJUQPLWBPYOTREFSWYKCRQPSFEKNMQTRJWLPGLYZYCUDOZMRRXXBREFFADVIEYMJSWF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.983856572791);
    msg.setSource(11320U);
    msg.setSourceEntity(106U);
    msg.setDestination(37135U);
    msg.setDestinationEntity(45U);
    msg.req_id = 24190U;
    msg.status = 116U;
    msg.range = 0.13480012299;
    msg.info.assign("IRQNMCXHDZBGXAONEMHQSCWDZQFYCFFNBMTVKGMKYNJXYDMJJKUVWJCZKRMAHLATCDSPIATYNEGDAPOSYNQSTCQVYPVLESRWPAYWLZARKUETEHYGWMMNDDUKUGUGPVIJAQTJMEGOJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.497928437083);
    msg.setSource(50217U);
    msg.setSourceEntity(46U);
    msg.setDestination(43507U);
    msg.setDestinationEntity(112U);
    msg.req_id = 43260U;
    msg.destination.assign("LMXMPIUZZCOLRXUKUJCYZSGCLBVRDVBIARHWMPGXGWQFCGPZMMBRDIPPFTCAFUAPXMNBYAUTAHYKKNQETUBEVJQWROHEOXVGUAZETOGBVVAFVFQPRQYHE");
    msg.timeout = 0.216025715723;
    msg.sms_text.assign("PQTGVACXFIEIYWYTUGJOKSXRTDYLINCHWCAOXISZHKQMTZGRETQOFZFBIKTFZPMVDBGDEIUWNMGNFFFAYODGBPLJWPQICVQSCAOWKOZZCOYQAAKIBUSQJCHLCOZLE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.938277528128);
    msg.setSource(25113U);
    msg.setSourceEntity(237U);
    msg.setDestination(49315U);
    msg.setDestinationEntity(106U);
    msg.req_id = 45638U;
    msg.destination.assign("CNRJHMETVRWLWKPQVRLKWIMOZIHMDBOMTGLHSVEAFKCBTUYDCQAKDQUFHBAYCVOFUEURTAJSQAXLGJVRXXDASWYGSUOQKWPDQBQROVCCZXHALKBFRRMOMCFEHOJVKZSSAZKEPOCGZKLFQPLNWPUIQWRNJTNPYXDILYXZUCPOIJVFBYNEGIFVR");
    msg.timeout = 0.552890880465;
    msg.sms_text.assign("GOKHIQYMMCODQEYRCVFSMHWFKQWFEOFLSQCUNHVKWMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.630036756859);
    msg.setSource(23354U);
    msg.setSourceEntity(167U);
    msg.setDestination(31123U);
    msg.setDestinationEntity(22U);
    msg.req_id = 40106U;
    msg.destination.assign("QQUGOAHMJODUAORUQYCWXVEAURVTBIILGTILCIMTXYWQTTWSVZTBBOBLJOJNXREDCTELIWUMFVOZJYIZKFLDDKHJSBAZQSVNAEIKXEJAHHLEBMVKHKHPFGHAUPKMPBPSNQZCBKZFHPWHXYBZPKFWNLAOVJGSVFAISSGJPBRUQDXRFCWLZMVWRJPXYNGDCTGKQVNSRZOWTXYENQEDWYRPIRMGNDKCEOCFGDRFG");
    msg.timeout = 0.0316389219622;
    msg.sms_text.assign("MGDLCRZHDSPXBPQZDEVMBBEBMVAFSFXQCKCHWYKNCGKXPXNSCUXVUECKHDZHBPSHJUGKIDOFNJEATFNNSZZJWQAAOTRQCBELQUTFWGTAREEOXGXWQLOJVYRVSECFJHWBMQPTGYMFDUISDNETGWRSOJLKOGKNXYOMTOWYWQDJZULRIOVLRAKNTBZFIAJYUHSCYRHPCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.843508457431);
    msg.setSource(57630U);
    msg.setSourceEntity(35U);
    msg.setDestination(5020U);
    msg.setDestinationEntity(4U);
    msg.req_id = 44467U;
    msg.status = 56U;
    msg.info.assign("FOAVHCLABQDMTIHLAKSVGNBGMOXRQJDRBDCXSUQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.518411718295);
    msg.setSource(50908U);
    msg.setSourceEntity(40U);
    msg.setDestination(56776U);
    msg.setDestinationEntity(224U);
    msg.req_id = 59333U;
    msg.status = 37U;
    msg.info.assign("ZMEAPKYHKLXHTAJVFHDXUTONLGXXYKRLFEFBAYCIUWOXHCIGQRKQQAOLNJIWBWZHNGPDDMRDFEQNAYCWXUWVVPLAOZFBMRKUMSWTTMTIWAVQQCVECXGV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.462184021908);
    msg.setSource(55285U);
    msg.setSourceEntity(95U);
    msg.setDestination(26553U);
    msg.setDestinationEntity(22U);
    msg.req_id = 17189U;
    msg.status = 184U;
    msg.info.assign("CJMLDXDHBNOGCQMKIYYKVLYPQPTAYJWHKPXHUSTIUDZYAUUBTOETELSINWRVXBPIOKRAEUMNXQDQRTKHEZFTCVZZFSANJVJPALBEMST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.348712447282);
    msg.setSource(23166U);
    msg.setSourceEntity(235U);
    msg.setDestination(57454U);
    msg.setDestinationEntity(159U);
    msg.state = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.0745795301686);
    msg.setSource(6659U);
    msg.setSourceEntity(185U);
    msg.setDestination(58040U);
    msg.setDestinationEntity(146U);
    msg.state = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.466865769874);
    msg.setSource(60841U);
    msg.setSourceEntity(242U);
    msg.setDestination(42556U);
    msg.setDestinationEntity(106U);
    msg.state = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.600985245257);
    msg.setSource(27936U);
    msg.setSourceEntity(173U);
    msg.setDestination(54492U);
    msg.setDestinationEntity(43U);
    msg.state = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.687060696932);
    msg.setSource(27551U);
    msg.setSourceEntity(72U);
    msg.setDestination(9392U);
    msg.setDestinationEntity(63U);
    msg.state = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.699268687603);
    msg.setSource(14669U);
    msg.setSourceEntity(228U);
    msg.setDestination(48447U);
    msg.setDestinationEntity(19U);
    msg.state = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.196704618211);
    msg.setSource(25830U);
    msg.setSourceEntity(177U);
    msg.setDestination(25240U);
    msg.setDestinationEntity(234U);
    msg.req_id = 8092U;
    msg.destination.assign("GJXDZAZEDDTHDDCWLWTFWPMKEYMFJFJWAIVEVFGZCBIIBPGHIRHVZBSEOLOKQKBAICQWXWNKUQKCSZDZXNSLXKYMCEQCPHRGSUCJMXIFLSEFKDBOFTHUWAQQNOCHNPSJVQLEGVUXA");
    msg.timeout = 0.846657556804;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 7U;
    tmp_msg_0.plan_id.assign("JCXAPZZHQKJMRBSOTFZAJVMGSOEDCRQWULZJFLIHEDIRFHQMZFIMUBWSSNRQGYAQWYIJTBYCTDXLZZCADLGODLAKFYNFQRAGL");
    tmp_msg_0.plan_eta = -1721995498;
    tmp_msg_0.plan_progress = 0.96788565017;
    tmp_msg_0.man_id.assign("SQQODVJRCSTCROLFEEZOBJPCAFWTEWKXMYYVTMMCLQOKCENJBSWABE");
    tmp_msg_0.man_type = 20570U;
    tmp_msg_0.man_eta = -1352758790;
    tmp_msg_0.last_outcome = 194U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.973422497902);
    msg.setSource(27153U);
    msg.setSourceEntity(195U);
    msg.setDestination(38497U);
    msg.setDestinationEntity(86U);
    msg.req_id = 12790U;
    msg.destination.assign("PUZBZUMMNLTQKBULGOKJGYWVPPNTMSSPBYTNFFGEWASAZO");
    msg.timeout = 0.55697112454;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.309554270288;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.258873730043);
    msg.setSource(54715U);
    msg.setSourceEntity(238U);
    msg.setDestination(61429U);
    msg.setDestinationEntity(199U);
    msg.req_id = 57862U;
    msg.destination.assign("PXCSQDGKOMAXTQAIMREKVVJNTOCJVZEFJMFDYVQEBHYNDYZRFBDLIFQWUOUFZDCEWHTPIMSMANYWUSSEONDWROBNDYZIGVUPAGXREHVUWXITACOEXYTLORKHZPYYUJHNFRLRAUPVIJXCXJXEYHCKJQTGIKWOBQABLZVGHIDSHWSFQLKGWAFZUOUZGKALPGCTLNKPFRXSGNMFTJALSBPKKWHMBNRNTGBQCPPBSLRQZDLJQBVY");
    msg.timeout = 0.849105073799;
    IMC::TeleoperationDone tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.643757333076);
    msg.setSource(46322U);
    msg.setSourceEntity(87U);
    msg.setDestination(58623U);
    msg.setDestinationEntity(126U);
    msg.req_id = 36090U;
    msg.status = 227U;
    msg.info.assign("IEQRDNIJPGAQPQIPLQMIPNSRSAGBMECJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.123592618706);
    msg.setSource(62588U);
    msg.setSourceEntity(14U);
    msg.setDestination(47214U);
    msg.setDestinationEntity(156U);
    msg.req_id = 38052U;
    msg.status = 247U;
    msg.info.assign("MSAVCCQJMWJUTFRPBHBYSUGPJQDHVRLJEAXPCXOXMTPSSZFGGAMSGOPYVZEJUAHMQC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.769295538668);
    msg.setSource(45944U);
    msg.setSourceEntity(151U);
    msg.setDestination(14727U);
    msg.setDestinationEntity(167U);
    msg.req_id = 49343U;
    msg.status = 56U;
    msg.info.assign("QZIQUWQVONBUMTKRUGAZUABLNMRSKKQRZUAWGQGNAHZHMYOQWAJPPGIXIQHBEMUVVMSFTBXYNDLCTEXKFCMHNJLDXYOJXFTEGADQIRDGLLJRETXUTYHRGVWKDXOORMBSUUYNNV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.827057326287);
    msg.setSource(14956U);
    msg.setSourceEntity(149U);
    msg.setDestination(8278U);
    msg.setDestinationEntity(232U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.473454577376);
    msg.setSource(63738U);
    msg.setSourceEntity(176U);
    msg.setDestination(35584U);
    msg.setDestinationEntity(164U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.358470426461);
    msg.setSource(41133U);
    msg.setSourceEntity(127U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(55U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.889228099864);
    msg.setSource(47079U);
    msg.setSourceEntity(129U);
    msg.setDestination(40299U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("XQSUTRNJFEOUTZQOTHPMBKKTDOVF");
    msg.description.assign("OMPQCPYFIUFSLEXCUWZLMMWYSEYCBDUDFEWVQXOHBPYKINGWHWZPTZQVKTDOUMAMVYVVBACLIJTBYLGLQFXDOKFMXFIWXHQBZHNSRCTBHRZNIBIEFOVAXUPKOJWFGLGNKTVDYMIZUFKHMSEZATQRKERNSPCERSQKSJLWOCGYXDZNWNXEGGUWORJDZNRTAUSVMXAJOXMAJKEUYTNEYGHGJAHPQDZLBHJAVSLCPVCRBCIDPAQKJ");
    msg.vnamespace.assign("WVTLAZULPPDFKNISWUJOQPUIDWHZMUKNCHQPXHRFEO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FTBKKCRNPISEWBZKAVVXWTZAMUOUDOEIOXGFRNUZXLVJAAFWSYTFWDYSJXGCIXKMGFCLSXNCTLDEUAFPEUFSPGCZMSAPDNLRPBNGQHJHYVRNWRRVBMKPOKGMWHPEQBUWYTVPDQDIEAHMLJZXVKJELZDSJLBETOVMG");
    tmp_msg_0.value.assign("KPIFBWHRUZEANELBGZILRVPWLQYFAPVNQZBTLOZJQYRNGSIYCBHQQTHNEOXMYDLORLGADSLSRBJGMKVOQKEXERXUDZHDPRAIXQJVBIEIKCTOASQLYBSKVCRTUIFAAHMNTYAZOCFGVIYSKTDXAJCWOWHWUKGEQJFPXTTSGVHSEZZGUWHCLFNWMYUXFCKCQRJPBKRHPMMMIDDUOCBFCHTFZEMZPNOMODBDYMX");
    tmp_msg_0.type = 181U;
    tmp_msg_0.access = 215U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UCWWZSHELXHBDVIL");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ERZAXGNXNTCYWOAKVLUCIRPXUVTFR");
    tmp_msg_1.dest_man.assign("EOPPKVAZDYUEQDMLCJOMWUNIYOTWWKSKTDASZUXTQMIMBEQOUROOSVXELUGINYGCXATJGKEYDJRLYRJCBJQXYKNERSBCGSLPFVQHOSNFFDBZPHIWVKPMJHENSPBPSQRWFZUWXCATGKRCCLDNNBHMJWGEL");
    tmp_msg_1.conditions.assign("DZXUIZUKYWBBOAJIVJCGNPVWCQYASQKDLEWSHQZRIEKHJMIRLTWKTGDEJPMOLFCJXNHMZVAELKVYXJPLZSIOMDJHYURMFHFAHZREIHKWLLLEPXDBQRTYYZGGIDAINBQVTUPMPYUNDQCRTNVBAXHYXWZNCCRCUSOOFWPXMGLWSNOVSMZTILWMFPGAVCXKSOPVIUAAUMRNJYDEEBGVJGXSUTORBBYHXTUBKFDGFNBFQJKFDEOCZCKPAQTQTNEFQO");
    msg.transitions.push_back(tmp_msg_1);
    IMC::ExternalNavData tmp_msg_2;
    IMC::EstimatedState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.5298263972;
    tmp_tmp_msg_2_0.lon = 0.730518016419;
    tmp_tmp_msg_2_0.height = 0.389227199868;
    tmp_tmp_msg_2_0.x = 0.791852459966;
    tmp_tmp_msg_2_0.y = 0.453301495632;
    tmp_tmp_msg_2_0.z = 0.932753139567;
    tmp_tmp_msg_2_0.phi = 0.636489163715;
    tmp_tmp_msg_2_0.theta = 0.610044644103;
    tmp_tmp_msg_2_0.psi = 0.881683233964;
    tmp_tmp_msg_2_0.u = 0.620377221605;
    tmp_tmp_msg_2_0.v = 0.493160644131;
    tmp_tmp_msg_2_0.w = 0.0927080589609;
    tmp_tmp_msg_2_0.vx = 0.0143132992006;
    tmp_tmp_msg_2_0.vy = 0.205461295114;
    tmp_tmp_msg_2_0.vz = 0.125468478726;
    tmp_tmp_msg_2_0.p = 0.721300458382;
    tmp_tmp_msg_2_0.q = 0.994737682667;
    tmp_tmp_msg_2_0.r = 0.414033808348;
    tmp_tmp_msg_2_0.depth = 0.270480269898;
    tmp_tmp_msg_2_0.alt = 0.980151342454;
    tmp_msg_2.state.set(tmp_tmp_msg_2_0);
    tmp_msg_2.type = 95U;
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.728386847116);
    msg.setSource(14494U);
    msg.setSourceEntity(74U);
    msg.setDestination(50791U);
    msg.setDestinationEntity(203U);
    msg.plan_id.assign("FGTSOEMQWWMRMLDFJIGSVLBIXHYDVBFAPIUNCILEQFVWPWUI");
    msg.description.assign("WBXGDNEDPAUSAKRZYQDMYLJTMDOMVHYCFZBOPMTBHFDIMYKACFHWUKVIHREIIMAUIKQIJLLPQZAXXQCTDPKQFVWSJGNJPTGHKCABLYYNZELAZDOSVPVKSRXTGFEPRCKJZLTF");
    msg.vnamespace.assign("VGVEAKGTRALRUSDJDNMJEQKWSXADSWNCLCJYXODIVFRAWUKCPABNVHWWFTHCMXFKEGTYLBLZOIGCVOSUCMYNANMCQFGMODQVZMCOSEFCXXVXBOPBLZBDNZGU");
    msg.start_man_id.assign("FQGAWLKWQJPRQINRQJCWDFZCW");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WNFRHBPXCRFBRXPADKILMCMCKDBWIG");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("BKZCCSIQEFMYELEZDHQWQVNPGRDTDIZGULETDUACZVVUMEFNXBIPOOGITBHLCWVDIJJSWLDOPFARFNFYMOSCJHG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Conductivity tmp_msg_1;
    tmp_msg_1.value = 0.275514341983;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SmsTx tmp_msg_2;
    tmp_msg_2.seq = 2387301842U;
    tmp_msg_2.destination.assign("OYGAJYZJCMNXPTKCXVMIHXDSOPFWABCXGONODJROYGWPCAURHYSMJGIBTVSCQPHXLYXHBVBYKUBUUKZIEIFILVVKFUDNQPFWLIURACLZDHARZJDGUMJZCKLFNQMFXTQDSQRETYXXRVKAVPIEFBYBGMQHGIRZZMPKQTMRWDRBHFOOBJEAHJNZTEWVSPNHMGETGOPHZWLBLCULJ");
    tmp_msg_2.timeout = 14797U;
    const char tmp_tmp_msg_2_0[] = {73, -53, -83, -107, 18, -10, 79, -11, -67, 112, -102, 68, 1, 38, -65, -95, -37, 68, 126, -99, 6, 108, 52, 113, 49, -123, -111, 41, 111, -26, 38, -117, -104, 50, -12, -33, 18, -126, 1, 122, -63, -123, -86, 80, 21, -55, 42, 111, 17, -103, -60, -106, -83, -39, 35, 116, 72, 15, 65, -83, 91, -128, 98, 66, -72, -70, -20, 59, -123, -17, 115, -94, 3, -116, -55, -64, 21, -64, -11, 19, -53, 47, -39, 106, 117, -17, 101, -104, 100, 84, 116, 37, -3, -71, 47, 43, -72, 14, -71, -31, 119, -41, -62, 103, 126, -17, -27, -78, -112, 88, -59, -83, -58, 90, 32, 108, 21, -5, -47, -89, 42, -80, 92, 109, 106, -79, 22, -62, -77, 114, 7, -112, 108, -124, 1, -67, -70, 90, -39, -49, -9, -128, 21, -38, 49, -48, 40, -38, 107, 51, 95, -17, -36, 61, 47, 110, 6, 120, -37, -34, 64, -107, 63, -80, -39, 58, -40, 18, 11, -30, 32, -89, -61, 120, -35, 81, -116, -70, 118, -35, 125, -105, -38, 113, -5, -126, 58, 95, -75, -24, -122, 4, 8, 58, -68, -27, 18, -22, 26, 80, 97, -100, -127};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.164010033601);
    msg.setSource(52681U);
    msg.setSourceEntity(38U);
    msg.setDestination(40347U);
    msg.setDestinationEntity(98U);
    msg.plan_id.assign("ZDLSZKLYUBEOTRCVOTHHDAQZCRIDTQTWIRGPIZTMGOGAIPUEDNENMLLCXSFUWPYILXEVQLMHAHDKVSOONA");
    msg.description.assign("BFGUJDKQWCIUPAHSMUAMGXVCJZQKWJDZHFAADSVXMBFWGXDYWXZSYARXQELXNOJYHAJQMWKJSUNLQVHGFRVFOFZBGHVZLJPUYTLDYLBMIPUCUZFUGEHLWRWTRNTSWSVPN");
    msg.vnamespace.assign("HBBUVGCLPZGJOOKMWNTTONMSWCZWNPUDVPGUZUOIHHRDUEHDUJXPIPAPCMFBJDHKDRNKUFLXVWMTVFKAYVFEYEFNNSLRRBMSA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QYOLNLWPQCKAZADNVHYGOWEUXJTOKATVSQHLNCIQZMLMQJWKXFBDSRDNGKCQKUWAFJHUEYNURLSBRGIJXAZBPPUEJAHYPWPNJH");
    tmp_msg_0.value.assign("MMKAYWNSQLHFLIURNJJSVCBUBNNLOPNFSRKAZGESVONHWMQDGLPBJRMOJWYDQHQAIKDBUUWSMGDBDTCDXGGBSUHARKTTTFCPAFLAVCQHRKDGZQPQLCITPJEHEXZDBNVQERVCKTTCOARVRIUGJAFXELZMGBLZBWEOOWVYWCKCYFISLWHJPPMTJZWMXFPKDFDZUHYRXZIGCMHVBSUNOMQUFWLINISJXOXYPTZKJVGZNYPRTFUEAEXXEQOES");
    tmp_msg_0.type = 179U;
    tmp_msg_0.access = 33U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VEHPIGBQNWOGOMBAFFRWJQKAOBKDRATQFBFBGQAWCJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QBTYSVFLTZDUERFSGXGHMJEP");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 62901U;
    tmp_tmp_msg_1_0.lat = 0.536556249983;
    tmp_tmp_msg_1_0.lon = 0.0251713111806;
    tmp_tmp_msg_1_0.z = 0.778202968497;
    tmp_tmp_msg_1_0.z_units = 157U;
    tmp_tmp_msg_1_0.speed = 0.766356105999;
    tmp_tmp_msg_1_0.speed_units = 63U;
    tmp_tmp_msg_1_0.roll = 0.633879106908;
    tmp_tmp_msg_1_0.pitch = 0.255557176024;
    tmp_tmp_msg_1_0.yaw = 0.962470352705;
    tmp_tmp_msg_1_0.custom.assign("PROVPWBIAUFCEYPZDKTJOCOTCLXXQFQULHVMXBEDWROGCDXXBCKGBHMICUOMJKKOKZIZWZLXLSEVNGAFXNTZVMUFSRCQYSEQZKMOYYTCRPSIZRPTDSEPHGNAAVNVNPBQNHIVWCPZXWYOUQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PlanDBState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.plan_count = 4997U;
    tmp_tmp_msg_1_1.plan_size = 1438898575U;
    tmp_tmp_msg_1_1.change_time = 0.103684983735;
    tmp_tmp_msg_1_1.change_sid = 15998U;
    tmp_tmp_msg_1_1.change_sname.assign("WALVZVIAKNCQZPOQOPBTLKAHEIYIKJCHN");
    const char tmp_tmp_tmp_msg_1_1_0[] = {-64, 78, 42, -26, 98, -92, -38, -121, -20, -13, 89, 99, -127, 65, -107, -59, 115, -17, -54, -13, -93, -66, -102, -66, -19, -123, 75, -49, 18, 103, 13, 105, 73, 117, -115, -74, 24, -123, -30, 59, 123, -73, -72, 120, -8, 64, 67, -115, -107, -103, -50, 81, -95, -7, 94, -31, -92, -54, -20, 64, -71, -62, 12, -88, -22, -12, -86, 42, -103, -45, 126, -100, -122, 59, -66, -41, 120, -109, 121, -102, 78, -119, -7, -32, -15, -67, -63, 19, 11, -90};
    tmp_tmp_msg_1_1.md5.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("KYUPGVZSPGGFJREXDIAYORJOFLTUMWUDZFOJWXZIHMWBLA");
    tmp_msg_2.dest_man.assign("RUGWVBERPDUZICDYZWGLEEEMHBQNLQMFZJGGSNPDIRYSTRCOHGJMFBXSAIOTTZTWVKIUKUTHHPHLYFJFYVCCQYUKLUMXIEESJTZIIGWBOWSQ");
    tmp_msg_2.conditions.assign("UPDIEZAFERSIPOQBTIANWUQRBQXFFQOPFHKWOMQMWLUAQKBJKIUANNDNFZFMJZVMKSMGKDXDTSLIJIHJIXZGWPKVJEWJCGGRVQGAMRXLVHVOVCHXCXCEEGDIGZWWRKTQSHSUZTDARGITOWDXTHOFTSXZPZDJBGPXFOUNUFQLYETBDCU");
    IMC::DvlRejection tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.type = 106U;
    tmp_tmp_msg_2_0.reason = 7U;
    tmp_tmp_msg_2_0.value = 0.703279344368;
    tmp_tmp_msg_2_0.timestep = 0.532131711336;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.328786846583);
    msg.setSource(14352U);
    msg.setSourceEntity(9U);
    msg.setDestination(5057U);
    msg.setDestinationEntity(91U);
    msg.maneuver_id.assign("IPUZSQUNWBIAQEKRZCBYMZTVTXLOZGXRIUWSSLASDDTKJDURUHLGAEYVXHFD");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.105093883006;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 25230U;
    tmp_msg_0.custom.assign("BHILBWVNFSAOHGLANAJTACHMJKLQLDHEJXGCIVACKJKTCJFBFURPUVJIKKXQTAOHCSXPKQWTYSALLNDQZEPBVEJICJSDUQGRNMRTLENEYSDPLXNMZRZZFNKMZEKSOGZWHSMCHWTCDDAMWFNVUGUUTQYVPQHTCULXSBYSOWMIZDATMOWDUHXUHZBYRKPWJIXGFAWGBEO");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.761184238147);
    msg.setSource(38263U);
    msg.setSourceEntity(89U);
    msg.setDestination(14424U);
    msg.setDestinationEntity(233U);
    msg.maneuver_id.assign("KEGHCSWLPNDSBBBIJABNGKCTDFWDFGYBXBFASJXPYOUXRRVNOUGWXGZEDTWEJ");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 18270U;
    tmp_msg_0.lat = 0.163243172;
    tmp_msg_0.lon = 0.381381875921;
    tmp_msg_0.z = 0.296044061483;
    tmp_msg_0.z_units = 249U;
    tmp_msg_0.speed = 0.19602866079;
    tmp_msg_0.speed_units = 138U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.741484067081;
    tmp_tmp_msg_0_0.y = 0.266761471047;
    tmp_tmp_msg_0_0.z = 0.353718834541;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MMWRQANQDSHACQMWHCLVKDOJJSJLDJKNKRYQHKXVYGVFMBDLOJXPWGFSFPILVZBFPGAEGWIEMPUWBNCZYBLHONXCRCWYIVTCGNEDCCPPFFIKUBSAOSMOT");
    msg.data.set(tmp_msg_0);
    IMC::QueryEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("MNZENOIIRTHMYVUVZQREHXCIVGEEBHXMMLUCEKSWIIXZRIZCPHZSFXPKQONPHPGDKDA");
    tmp_msg_1.visibility.assign("ZLUWXPTXNYOHKJCGRTPKWNDJYTDLMXLTLGROSWXZHKOKGBNWDNQUEVVHGLDPMXMRNQXIZRADJIMITIVQRLSLJQEGRXZAUGEAZBEBJIWCYIAMDVDHCUVUYFSFANMOBKJKXLYOIKTJDHFPHYZFMAVYYDR");
    tmp_msg_1.scope.assign("UKUXSBCBNJYZQZFMIGINCZFDDOETBTHQMFBDQZHWPSEBDSHNRQYCXKVTIDCCYDIXRMUVPQBIKKWQTAOHVCFKELORXJBWAYPJFTLWJJZRTJDZZECDSLPRMLGNXYAETSKJIFPLULUEAFVHGOLQA");
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.129054414775);
    msg.setSource(16258U);
    msg.setSourceEntity(54U);
    msg.setDestination(64408U);
    msg.setDestinationEntity(61U);
    msg.maneuver_id.assign("IWDWXJWOVSAFEEOKVAXDEJJTGRCIFTQXZQDZRFRHK");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 7021U;
    tmp_msg_0.lat = 0.91771173812;
    tmp_msg_0.lon = 0.284885650293;
    tmp_msg_0.z = 0.729621119773;
    tmp_msg_0.z_units = 225U;
    tmp_msg_0.speed = 0.371475497539;
    tmp_msg_0.speed_units = 101U;
    tmp_msg_0.roll = 0.795849928923;
    tmp_msg_0.pitch = 0.188099571949;
    tmp_msg_0.yaw = 0.349152943822;
    tmp_msg_0.custom.assign("YENQRZTRHBQQILACYHFHAGWZIKCAIJONZSBPSACTWEUDCLLFRKTUDGVCODDSDPVXNUESZNQZIHXUGMPFPLEGRPJESFMTXFRANQLKHLLBVWHYBTTYPRSJRKBFPGCTHHCAYGFRVMBMAAKOLSRKNULCEJXDGZNOJYESTIUNTFFPYWOQWVXNODKWUPMDIIXXMVAUBZMQRK");
    msg.data.set(tmp_msg_0);
    IMC::NavigationData tmp_msg_1;
    tmp_msg_1.bias_psi = 0.914066832623;
    tmp_msg_1.bias_r = 0.148616027292;
    tmp_msg_1.cog = 0.987239470412;
    tmp_msg_1.cyaw = 0.0708557573673;
    tmp_msg_1.lbl_rej_level = 0.656331189473;
    tmp_msg_1.gps_rej_level = 0.288308572144;
    tmp_msg_1.custom_x = 0.0633760953885;
    tmp_msg_1.custom_y = 0.286630492492;
    tmp_msg_1.custom_z = 0.514579673688;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::MonitorEntityState tmp_msg_2;
    tmp_msg_2.command = 74U;
    tmp_msg_2.entities.assign("AQWMQNSYCWXHXNANBOKKDVUABADQJTKYAVTITGTPMUNMUCKGLHKVBUAGKJDWPPLZJWRXEFYYLAPLRAIFJYEYOSCUYORWQAHPOBBNUZQQTTJJPTQJWTDKJLEAFCSXQZOMNGPLUICTSPZRDPYCJWGFOVRWMZZBFZEMISBCZCBGIENIXVHMRSDODEXHXFIYVCPINYUCGZFZOEVKHDNTXVWODWBKFJMQEHILERXR");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.170554087531);
    msg.setSource(46377U);
    msg.setSourceEntity(198U);
    msg.setDestination(41339U);
    msg.setDestinationEntity(94U);
    msg.source_man.assign("KCGCFZJTLCVBFRVCJYWJYGBPDGZNQIEPISMRXDMFVZXTWWIQKGDTMTVWZKBWHRORUERABOEPANUSLXZNDIZKMUJBVFHNCYRPMKQMAQHCGERDDSISUKIIOPHJGOBYVBZZRQPACQGWDNCSAVXNWMSHLYJTSGLXLETFGVNMOLSADOXUXUETKTLBPOWCYNXWCENTWHJQEKNAIJYVMUILXXUYFJOYALIF");
    msg.dest_man.assign("UOMIWVGKKFGEMDAIHODHIWWCDAXJEGPTENVSUBVWADIZELNZKCFNRRCELGUYLMQJSDOUNMQFRQPMFNLRAHUBEHRYCYHPVFPUXQAPWMFBXSAHQYXKGQPCETURDJXLAZMIGO");
    msg.conditions.assign("MCQBEGUWXXDLCALPIQLICAPHVYOKOTXDBSTMEXCRSDWKHZJFVWDWQHZTZQNFJZRYWWTHMAKUJVPAXOHNVLIYYZFVDTOEKCVQTMROSJESGIAZHIUUOPTKPMOGWPQXQXCKELEKRYFDJUBLRNAWR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.892643280038);
    msg.setSource(24709U);
    msg.setSourceEntity(164U);
    msg.setDestination(45132U);
    msg.setDestinationEntity(246U);
    msg.source_man.assign("ARHYGMAHKDDFCOPTHOBNNPJYAFCBZBPUTPWVLGNUITZPIFXZTRZBMAHURLHYQFDBEYCFAOIVHSUMWQCQTXKXWAFIZHESMJZVWKMQGCKXEUOUEMCONZLINWASKJPEOIEOYWRRMNTCQQZFDRVZWJCPKGLYGIVQIBYJVONETDLVNAKCMBMVUUQQSWGOGLKEFVGPJQSDBDTEORXYRXIKRYGPSDZLVJLSFCPTXIXTUNUFJHAHYWLGBDSJERMSXAJ");
    msg.dest_man.assign("YEXTWRHUZAUNNBFTOGPLIYWZAMOIXSYVAHNRPXMQVBNLCEAWHXPZEYQVBIQHMQUSPOXHWJSDWCCHBUAPMFIIFJRYYUDFHLZDIAUZJLPCZLTWELPKKMFMVHZTBWQGSGGIVXJNVQNPXBHHCFYEEVULRZDFSBWIGGJAVNQIDOCBOVNWNRGKSDTUUSZYFIUGTRGSETZKEXMPQTACOPFJBODLDKTOEYFAYJSGOQWRDKQJCNSBRRCKJE");
    msg.conditions.assign("WYHFPOIFYBZYXCDSRPNVTEZQTXGWDRQBFKHCVYLZQVOBNVSCJPNKPRECHUPZTRBXMEFAJIRBCMBTBUDINQRVHJBCONXXHVLQTMHJADLQMZXDGCMPHGJSIFTSA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.0988862857853);
    msg.setSource(18196U);
    msg.setSourceEntity(174U);
    msg.setDestination(32474U);
    msg.setDestinationEntity(25U);
    msg.source_man.assign("RCFIPYHULURNDXBZAKGGQICBGVSPPREWEYWNUMLFHQTOQAXDOCWVPICOZJBTQAXMANMIKKGJSAFUZCKKTXJFBTTHQAEWZYYYGKLCNASKXDNRQCUZIQEZMMNVDESCQDVAPDWFDJBOBJRPVFPEMUBMSRGSHKOFFYZCFAOQSLLUYIHDBWVDLLETOTITWJCSKZXPGZHINTHWHMVNYRUVONEZDJXAGFELVMSINVKGRUUEJXTGSPOWRJMIX");
    msg.dest_man.assign("WIJDYZMEVODGNNQDXPBQONFJTLVRXFUVBKNMXRWSAGZSOSQRAHLOFWVDESEPCBWBPJJOLLZMTBPHELPNMGRCNZKFBJCKXHHUAIBEJWSIOYAUTRLQEZSZHTMRVAYLQUOYTIJUMPUWXFNCCMDHQWRIJAOSHWYBFLK");
    msg.conditions.assign("IIDGTJIFWZCMVRQGRQARFHWHGDPOIOLQAUOTOGZRHXJMPQOBRLQGQGKPLPCSSDVSQLXTAWPYVHYVIABGJSACBSNJHBXAMEJEROCCZMIZHNKBYGOTEPRIRUTPAEDFZNXDDUHXQFUIUVMSWEJKWDUXZYFESPCMKASZTJWLUEJFGWWNYLKYUHXCCBBJN");
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.343059954983;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.873673049853);
    msg.setSource(10819U);
    msg.setSourceEntity(87U);
    msg.setDestination(6699U);
    msg.setDestinationEntity(235U);
    msg.command = 89U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OJPMKTSGHJXNZUXQOHZIYCUEAYHSCAZUSTLMNAVYPDXGRFCLLMIKFKTKGOMNRDSQSOBCURLWJAWNVMZFTMRPKUOPSHXHVBILECGLTXMCFIFBNAPKAQYRJVJKKXLXBDQVUHBMOBDARRSZVEMXJWSPF");
    tmp_msg_0.description.assign("BHZGMDCIJLFFTIGUTOHPAHOAYHYNGMNFSSFQMVDERUEBQXPNAQTWIWLPFJWTDAYAGCQXCRRKCGAAEXSVRXSJOSMHVMFJTRWWBLVQCLGZEVLRESDORNQCRAKMGLUIYBABVGPZDOZFJWXCEQNOWFGSSGDKZMTITYJJDLUUOPKDNCRKVIEWWNCFPMYUOXBBIZJBERVEXYQTZNMZPKDNHOOTZWKHZNKQLYUHPJPTALXHCIBBFSM");
    tmp_msg_0.vnamespace.assign("LGDOPHNFWVACDHQ");
    tmp_msg_0.start_man_id.assign("LUMFVMSAUHODXUNTPSETUQAEGGLBHLJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AOQFWJIUTQRECVAGQNGHXDKPIDEHOAMDFWLLSFNLYIOZUJZWHZQRTSTKSOBAPFLDQXVETDZUAHONNSAEGMSCRJPBXUIRIJYDGBQJKKYMCVKXCQFRIQCGOEMEAWVUZDZNHYBNHGMSSIOMGTQNFFWEYLIAYGRWSDPTAHECFTBYWWSCKFGZPHXBMDYBLOWOPBJXCKCLKYCPZUTRLVZJYRBWNXVBRKIQPJLHVNULPJNGIT");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 57976U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SUDHDBJPRQUIPYIHKSUBLXHSZUOXDPRNLEAGKAJOIVHHGINHMGLULLRVWJXNVQSDKBFKSTLTGXKNKHISACYBTZNPEVRGFRCOFMLGRMBMOLQAMZSMNHZWUMUYOFTOIVEWZWSWUEXUCBESYZDQFCZPVENZWQEYXNTNGQXPAIRCROJVJKCBJYIVFJLTIYPCRFPCD");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JDMLTFLKZLGQPBCNVYDNGKOSKQEVZHWDXAFUCEWBJQCBCCZUDMKDCKGSMPAKVJX");
    tmp_tmp_msg_0_1.dest_man.assign("OHSOWBXPDVYYNCNAGBESZLPEUFDBVKRGGQHSIHHDJAKFDOXDYKXDRONZSOIQZTUFETVRQERBMTCWDIIPXQPCBDVUKEWBRZDUEKKILWWAAJLPYVAPHDLZQXBGTNNZPZIMVUCPZBMYWMSLYHNXKFFHWGPFEFLETVRKZOJICGTMGPLFOYJREXRGSLVWNCNAYNILOVMAAYKWQCHHFXJMKH");
    tmp_tmp_msg_0_1.conditions.assign("KDPZAYQXIEMRPHAAJNSIVTRBVZOIBHBDHYPWWCSYAMUVGDNQSFCCEHVLIEZSNRLMBTMJVBPSBZMZJVHIJBRJYTNSOTCUYSDYXLXRXPDQMEOWMGTFIFUPPNWAUHPKCCSGLGUGKEAHVZOXXOQLRLAKUTXDTPKIKURHYRSYFZTQULOAKENJBDRXCFXFIUKWDLDMJWFODUGVGTEAGONQNFAKBIWKJFWWVFLYQQYBQO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.16473690173);
    msg.setSource(51926U);
    msg.setSourceEntity(79U);
    msg.setDestination(56914U);
    msg.setDestinationEntity(248U);
    msg.command = 192U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KHNIBNIJIALDDDJSGXAMJFRLNZZGBCHIMLZKLAAWGASQVQMPIRBHZOXZJNYORSPWLBFYEFYNUHUKFQYQJZEERCCFNISENGUTPVAUJGOKGVHHTLGMCWKMJNMVEDFZENYEMSVKXAIXFOHQOVGCTWRCKOK");
    tmp_msg_0.description.assign("CADHCUUZONAMWLGTKOEGBKMZPRUZTIPLUSPFRVREZEZTCTCXLLKZNGBURKZIBGSPYSDOSZSXYBOJHUVPWOMHHIKAYDQNXTWUCVJFMGLIWJEKJHWJRZFCFIGOEDWKCXQSXXMPRYLERHMWSZBHLEVYYJDGBWQBTFMGYVLMQQU");
    tmp_msg_0.vnamespace.assign("VTUNCWLISXHPHBUIYNOUWWNSAEVLMRBRMQHQGZDOEGBCTEGEOMWCXPOGKLOAXFKKNBCEQHVDISYJYCRMJMSYWCYGPLNWSDZPMWGDWSFNTBXFHZNXCUGNPZDNPDECLIMFQRIPQJKXDIFHGLVMAZJVRILYKTKZZDSXGEQOVAURAJQNEWUXIZXVKSUTBOVIJMTDHDKWBFKBCGTAMLJPPVRFPFYKATZSOJFVECXFEUHTQRIRTHASALJOY");
    tmp_msg_0.start_man_id.assign("SDFYAURZBNXYYONHKCLNRPBPOQYNSDHQZNWMDVUFFXJQJKWQWEUHTRBIG");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("FBRAFDHQGTJUFWAZRNYLOTEWOWHKBMLIGSWIDQRAHRPBOHPUCNYCSZDZGDEGTBHWVBTTIJQPTLAMMDQXYQKMPDSLDEXXEZFSZECGBJUPVFKBAMJOEDFHWGYDSXOGKLQUSVICNFRN");
    tmp_tmp_msg_0_0.dest_man.assign("SZPYULBBXWKVAJBXUWDJWDKHQLJTMSWSWSLECRGOWCWEMILVCTGNYBSMFE");
    tmp_tmp_msg_0_0.conditions.assign("XZLBVAXSEDMQFFKEIRYGNITPAPYNMQKUXMDGRCDOIVJPYUULYBHJJPYNBCITQJMPFGGRHUBEFTULQYOWIWY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.501276599493);
    msg.setSource(48557U);
    msg.setSourceEntity(167U);
    msg.setDestination(23976U);
    msg.setDestinationEntity(230U);
    msg.command = 0U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DXFBBLVEXWCXKBLPKWNELQBSUPOQRLFMETCRWDHPEIJXFVASUIGUZYTRTVLAORZXJWKMZAKDGGMZIWXPULQWMTVODQEHWEIKTOHAIBIWRPBOCAWSTSDUEFXXCOXCKEJDDKHUOSNUUSNIARSCFSOBNYDHZQGMWHKPLZIUQQNFBFPJJMJKJITNVEBFVHLGPLGRFJ");
    tmp_msg_0.description.assign("OVNCUYREWF");
    tmp_msg_0.vnamespace.assign("PJXSMRDQZKYGGSNVTMVIDVNFNBTKATZUEHVYWDZHZMRTNPWGOHFUUIUVIXHMODJUTRJQEOZLNCAJYOOZHMFRYJIPFWLUBLFCICYXOACIVCWPALQOFZGQXNJTAKRPQWYSAHEZEBBNKKNXLXYGUSVIEFODGGGMQBCYMSRLBTKGWKMPULAXABEVRVCGQQ");
    tmp_msg_0.start_man_id.assign("BCUPUYIKOUXUKCIRDYACLJZGXQSEOJWBHYSFBQMQRDOGPTWVRZZYESEXXPRTTNHSOAYFCUJUCKRJBAQCVMIGCGVTPIFDUNEAHYYSZOITGLVOLRBHUDZALVMHZMDXVEFNPHXDBEKFJYWFMULKUXZOSXNAJHPLWTBFCWQAXLZKCTQDGDJNMHGLSPMKKLQDWJFIRSVZHWRWIZMIGMQODNIASTCNTEAQOOXYYVESKEPBEGVRKMQTVNIAN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QYOFWQUNEUDMNNDGDDFSRBVRJPTQCWYQNYDDGHMKIFYEXZHGUPURJANXPJ");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0536921702706;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.400064636654;
    tmp_tmp_tmp_msg_0_0_0.z = 0.478882367832;
    tmp_tmp_tmp_msg_0_0_0.z_units = 4U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.617538452731;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 145U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.608221499948;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.821210125045;
    tmp_tmp_tmp_msg_0_0_0.width = 0.794564560835;
    tmp_tmp_tmp_msg_0_0_0.length = 0.780553369274;
    tmp_tmp_tmp_msg_0_0_0.coff = 25U;
    tmp_tmp_tmp_msg_0_0_0.angaperture = 0.0761491045357;
    tmp_tmp_tmp_msg_0_0_0.range = 12017U;
    tmp_tmp_tmp_msg_0_0_0.overlap = 244U;
    tmp_tmp_tmp_msg_0_0_0.flags = 56U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HHFBGYYBNRLOPSFDMKSVHOMWBKMSXIAUHGGRAHLZIKIDJIULYRKJCBJXRZJZDIYNKNPUSWFXOPVFZARUPPBCXCCDDNWGCGMUVEKYZUQDEEJTKNSAGWNOZTLWYOWWRSXBQATEKOFQDIIMZCYAMPVUBJDECFROAFMXWOLCFPEQIOAELMQWVNSTHOCJWHTBHPXJARGZUNMPIXFUDV");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.445070627898;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::NavigationUncertainty tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.827906324964;
    tmp_tmp_msg_0_1.y = 0.30452500785;
    tmp_tmp_msg_0_1.z = 0.19164042064;
    tmp_tmp_msg_0_1.phi = 0.914404192191;
    tmp_tmp_msg_0_1.theta = 0.313444468726;
    tmp_tmp_msg_0_1.psi = 0.449297122739;
    tmp_tmp_msg_0_1.p = 0.259765440225;
    tmp_tmp_msg_0_1.q = 0.434851622032;
    tmp_tmp_msg_0_1.r = 0.293416629748;
    tmp_tmp_msg_0_1.u = 0.29166626517;
    tmp_tmp_msg_0_1.v = 0.329632563733;
    tmp_tmp_msg_0_1.w = 0.119098152285;
    tmp_tmp_msg_0_1.bias_psi = 0.217851771947;
    tmp_tmp_msg_0_1.bias_r = 0.544735341478;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.303651322153);
    msg.setSource(5003U);
    msg.setSourceEntity(20U);
    msg.setDestination(60832U);
    msg.setDestinationEntity(52U);
    msg.state = 223U;
    msg.plan_id.assign("YPEQNBAWWCVWZTGJEFIBMLDBCTACLKOTJRAZCZMIFVNUUJZHRQHZGAFYMECEPNTZOTGVTGZHKQVHRIMNUZQVRKRNAPXDIDPWSROGJZJGMCCIHWKQQFKKDDFNOYDLDTOFHJSSTLBUSGJYSOXVJGOYDVLDWMCPJNLUSYOQXVXQPSGFKICR");
    msg.comm_level = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.893784782887);
    msg.setSource(20647U);
    msg.setSourceEntity(57U);
    msg.setDestination(61366U);
    msg.setDestinationEntity(10U);
    msg.state = 220U;
    msg.plan_id.assign("HRBTQKMXWAJJCJQWKMGZZYRTTFBADLQCFARYUXUXOIYNDAKKUPDVBBXEMEBWRFMGHHANGAYVIJZWENEXHIJYELPAPSWIVOTNDELSSKWXAHQGCDHQVGCZIQZCJBGXDUUNCRUSTHNPBT");
    msg.comm_level = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.113058447183);
    msg.setSource(53909U);
    msg.setSourceEntity(233U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(249U);
    msg.state = 254U;
    msg.plan_id.assign("YADWEVRHOLADGOPOAMGGBWXIZFNKHRJOKUBXICBZDAIOUNVWCTAPWLYXTPQXALCKJPFWCJLMXDZETIVIUYSCWMSMXSEPVMNNXFLYXRNZVBDKZYMSRDNQZBXQPBHDAGJFWRZVUEKUBZQIJSJJSUCTUHRYGBPWGTPYVBNEONHCUQMNJPFHVLDGEQMCHEEBKQFYGSFHTNYPFATKFGOYRFJOLIQMTIZKIQSHLVGESSOE");
    msg.comm_level = 67U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.397623270386);
    msg.setSource(36279U);
    msg.setSourceEntity(60U);
    msg.setDestination(3847U);
    msg.setDestinationEntity(197U);
    msg.type = 146U;
    msg.op = 35U;
    msg.request_id = 63398U;
    msg.plan_id.assign("ILYRCYSJCUZUBXOGCGSPYSAMUARGJFFXQHTJZZHLQOQJVYGHBFFINNVPDYD");
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 183U;
    tmp_msg_0.period = 2938437050U;
    tmp_msg_0.duty_cycle = 2314201527U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AUUGCSSNIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.541049427913);
    msg.setSource(40405U);
    msg.setSourceEntity(1U);
    msg.setDestination(679U);
    msg.setDestinationEntity(58U);
    msg.type = 49U;
    msg.op = 187U;
    msg.request_id = 37788U;
    msg.plan_id.assign("SZDOBWMIAXARCQTCNQNVZHQFEYWJXPRFXJGCUIWGLGAAAPIKKTIBENXNPHKUTHQFHSLVBFOFOPHZVSQQMWHJRHVAHUJXUDCAQJDEYEOYSDIWVMZWLNXEOCYLGXOPUKPZXNWWAPZLKDLRQRLGJTFBCJRPDSPRIFMJIDIGGLZBYVPCMVQEXMCTYNTVKUZTFHFBRBYMERGWOSHAGNBERFDYZMVJSXNOUYABDKMKOKTYTEBVITDKSCZUNLGLWSOS");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 63754U;
    tmp_msg_0.value = 194U;
    tmp_msg_0.error.assign("MPXZZQGZVMMKHHCKNOCEMIRXSYFABKTUPUIONFMNMXLHMGWTCASAZQIZPYDOWXPFADNQFKUERSVUNTZNSSKKRQGVJYPDTGYLOKFEEXGBOBDGUTZELYQOQSYLFOCHFLXWGTXSRREHBVCPUAYPKAIYGWMRQPTZDHMXWWWYAHJJVBIGVXCAQNRCJBVLKABWHXAKOJIURUIFNBDJSOPTQFOUCJEZLMHDVJIJEHVYPLTGWJUZWFRBEQCD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GNRLABSONWRTWZTVUVFZFJLHBAHSBQLEXHNGRDQYZQWNNVDZZVKBJOKGLDUSVVZFSLWKGXJIBYWYKQOXFRZOACFWIOUXPCAGGGMGSQPFZBPQUIGTOAWLBTNREHSARVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.0362669436561);
    msg.setSource(51827U);
    msg.setSourceEntity(213U);
    msg.setDestination(61252U);
    msg.setDestinationEntity(166U);
    msg.type = 231U;
    msg.op = 196U;
    msg.request_id = 29436U;
    msg.plan_id.assign("SIUCCBYWQMBBKJQXVJVPGSHNUFOCKJWZAWMLHKFKFZSRRXU");
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.680865403778;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MSKOVMGEHYXINOJZKLGQXKQZUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.630240643224);
    msg.setSource(40200U);
    msg.setSourceEntity(58U);
    msg.setDestination(33067U);
    msg.setDestinationEntity(87U);
    msg.plan_count = 6124U;
    msg.plan_size = 3238421848U;
    msg.change_time = 0.128166126739;
    msg.change_sid = 35321U;
    msg.change_sname.assign("NRRTBJHKGCPJIMQEIOUTHGURLYJDPQBZDNJYPAAQKLBEDVBMYXLWINUEJHT");
    const char tmp_msg_0[] = {-34, -2, 108, 69, 58, -31, 32, -100, -17, 36, 91, 87, 57, 19, 45, 89, 121, 94, 85, -97, 101, -48, 27, 83, -90, -64, 69, 89, -126, -127, 56, -2, -93, 23, 59, 13, 32, -33, 51, 123, -10, -123, -114, 53};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.829953381573);
    msg.setSource(10466U);
    msg.setSourceEntity(16U);
    msg.setDestination(59922U);
    msg.setDestinationEntity(234U);
    msg.plan_count = 14592U;
    msg.plan_size = 4100897577U;
    msg.change_time = 0.314655774848;
    msg.change_sid = 30269U;
    msg.change_sname.assign("TASHOXINUMGFJXYCVKNVZCZJMSEVCJFYZQWAGKUPSEYJGPHUOSTFYWGRTXZZIRYFLLKBVOZEYXQFNHHNDCJQRQWEFGRLXLJPNQRBMORQYADHIJUNQSNEXPODHMZBLWUSTUTQIUOYFMWKSRKGARPFDOALBJVCLIIEWWCNLDXGPCBPVKPKHZIEJKKJFVKSXRYMDMTEIOPMXBANLABEWAODMSX");
    const char tmp_msg_0[] = {95, 28, 46, 68, -91, -14, -48, 26, 38, 101, 48, 103, 94, 25, 97, -1, -4, 50, 6, 69, -48, 87, 40, -31, -34, 53, 39, -21, 13, 28, -35, -59, -38, 120, 73, -52, -87, 51, -56, -28, 72, -127, -16, -33, 1, 56, -103, 33, 85, -94, -15, 48, 50, -80, -65, 29, -26, -125, -29, -43, -67, -32, -76, 110, -50, 1, -61, 1, -32, -8, -73, -91, -114, -78, 40, -120, -9, 95, 75, -125, 58, 105, -61, -42, -104, -87, 118, 96, -97, -122, -99, 106, -67, 63, -33, 15, 87, -75, 48, -14, -3, -109, 51, 103, 27, -107, -62, -8, 51, 101, -120, -56, 50, 118, 85, 101, 122, 118, -37, 58, -75, -62, 73, -101, 24, 120, -46, -81, 121, 15, 14, 40, 102, 74, -69, -109, -87, -113, -6, 23, 46, 33, -8, -92, -84, 71, -21};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.926854796594);
    msg.setSource(65155U);
    msg.setSourceEntity(176U);
    msg.setDestination(14201U);
    msg.setDestinationEntity(57U);
    msg.plan_count = 46446U;
    msg.plan_size = 3587390036U;
    msg.change_time = 0.282007206087;
    msg.change_sid = 21806U;
    msg.change_sname.assign("IPSNJTEDBCHILPVOYCCNDTZUBTAPPSAHHCKVSSPBZIMTRKTOHIENYO");
    const char tmp_msg_0[] = {-56, 111, -109, 25, 51, 98, 16, -128, 70, -13, 118, 16, 54, -94, 42, 24, -88, -9, -70, 59, 65, 119, -63, -9, 116, -70, 40, -106, 0, -36, 31, -110, -16, 52, 9, -89, -82, -123, 76, 23, 42, 109, 21, -2, 98, -17, 88, 45, 30, -68, -67, 36, -100, -8, -122, -55, 31, -82, -91, -7, -31, -117, -94, 108, 60, 14, 65, 53, -119, -75, 20, 54, 104, 10, -12, -127, 72, 113, -26, -34, 4, 115, 38, -127, 77, -46, -12, 91, -86, 67, -18, 73, 40, 105, 27, 35, -40, -95, -24, -3, -100, 101, 91, -127, -3, -58, 94, 30, -88, 30, -100, 82, -29, -124, 79, 25, 34, 93, -33, -114, 110, -24, 81, -8, 76, -108, 42, 50, -48, 99, 98, -105, -9, 66, -86, -23, -80, -17, 95, 60, 75, 17, 75, 14, 15, -8, -18, 53, -20, -76, 114, 42, 59, 2, 16, -107, 7, 85, -62, -68, -71, -96, -16, -83, 109, -40, 98, 79, -83, 94, -109, 80, -31, 5, 45, 91, 63, 101, -97, 39, -93, 84, -24, 108, -78, -82, -46, -100, -39, -65, -127, 58, -75, -76, -95, -1, -107, 18, -123, 116, -22, -61, 66, -76, 19, -123, -29, -86, 36, -40, 72, -77, -118, 105, 33, -44, -98, -123, 1, -98, 29, 84, 51, -23, 100, -102, -96, -62, -91, 28, -118, -116};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.401552600347);
    msg.setSource(21113U);
    msg.setSourceEntity(91U);
    msg.setDestination(27083U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("GNNWTRIBTYQWKYFOKMXYXEOAKDRNHMZVBXFGLJRRJALZWXFUGBVDRTSWUFYEKGZSYWVFKSDACIJMBOPNNQIOBOJHMVADKJCXHSNLHLMIEBNTMAEAAZNEFUBDHPBDFJPXGMCURXQPTGDPRSZGVOONUQWWZVWKHNFKEJCMWEDAMXQZSJZSCKP");
    msg.plan_size = 43878U;
    msg.change_time = 0.157930471645;
    msg.change_sid = 456U;
    msg.change_sname.assign("DEFNBODKNFNOXRPGDUHWDCPYQLJHOEZEUPZQNKYWBFCSABDHOCPGSCDAROFATKEVRWNYMGFIUIDIFIMGUTXOYBSZZOGLSAWTCKYSOHMZVSMHQHMVCZJGDIRWBTEMTLEBBWJCFRLCAPQUERSXPJVXIXGSMLUBLFPIJLGV");
    const char tmp_msg_0[] = {-1, -107, -49, 115, 107, 77, -77, -28, 14, -50, -21, -114, -22, -1, -86, -34, -116, -92, -100, 88, -37, -33, 7, -51, 111, -20, 123, -43, -62, -127, -123};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.996202698611);
    msg.setSource(24007U);
    msg.setSourceEntity(146U);
    msg.setDestination(52095U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("JEWFVWVNLLDLGKFMKOMDSHDEJHICJKWKYODOWJUOYYPVNPSJKOGMGZVJLTPFKJBRIBGYIDUXABALEGLCMQBMQMLEVLUBCSTSMNXCRXJEMZHJUTQQVNSUACKTAZZIOIXNDCRUVFTRNOXBPVANKRUURHGNTPYRFLDQCZXOAGQAXTEWHCETCBSTFLZXTZIQHDEHPASXAHOSUYCSRWPMXWWZVIAIQMRNPYIKGSDEYKGUBFFROYHPJZEQBIVPHBNGWF");
    msg.plan_size = 51464U;
    msg.change_time = 0.384675522751;
    msg.change_sid = 23357U;
    msg.change_sname.assign("FUPHBLKSUOVYJALBJIKLDHOGRJUEDINWBNOMCYCAQWGKNJVUGFFOMBHYBKRIJAGLWUXTBTMTXZSFCMMAXPZQEZXHURBXDZQDLMEJFHKGBNONNGRPKMKHFOPYEYCCCOJFJRKEDDP");
    const char tmp_msg_0[] = {-45, 8, -57, -83, 99, 59, -98, -22, -101, 117, 11, -26, -48, 101, 83, -86, 59, -87, -103, -108, -33, 111, -30, -32, 53, -128, 75, -53, -73, 122, -68, -38, 77, -2, 126, 68, -106, 57, 72, 123, -15, 9, -9, 105, 7, -65, 122, 30, 97, -49, -128, 21, 45, -12, -120, -33, -52, -70, -104, -128, -107, -92, -126, 121, 122, -79, 81, -46, 50, 45, 47, -103, 124, -124, 6, -106, 101, -29, -16, -27, 110, 0, -119, 38, -18, -68, 109, -99, 70, -37, 75, -117, -73, -93, 76, 98, 89, -55, 66, -58, 30, 44, 11, 82, 109, 82, 88, 23, 25, 25, -105, -37, -35, 92, -73, -76, -112, 123, 43, 114, 118, 48, 100, 7, -37, 81, 45, 124, -60, -80, 98, -119, 47, -93, 37, -77, 93, 121, 80, 53, -34, -84, -6, 38, 69, 90, 92, -49, 41, -12, -77, -72, 84, -99, 20, -81, 111, 30, 35, 107, 40, 0, -24, -18, -36, -30, 31, 73, 15, 23, 67, 44, 125, 109, 36, -85, 11, -7, -43, -106, 23, 11, -44, 103, -13, 123, -24, -106, 68, 5, -125, 123, 122, -109, -119, -102, -54, -29, 74, -85, -41, -60, -40, 39, 120, 108, -39, -43, 92, -30, -52, -13, 20, 91, -4, -44, -73, 52, -45, -81, -88, 85, 110, -20, 73, -71, 121, -63, 119, -67, 113, 68, -98, 11, -14, 114, -101, -62, 50, 68, -86, -28, 99, -108, -103, -77, -83, 39, -31};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.868290200551);
    msg.setSource(53746U);
    msg.setSourceEntity(230U);
    msg.setDestination(43734U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("GJVFKTRIDGGBENEKALFRXQ");
    msg.plan_size = 549U;
    msg.change_time = 0.656088000361;
    msg.change_sid = 2074U;
    msg.change_sname.assign("MOGQHFLVSINUUJTNXQLGVAFJBMUYUPRVCDKW");
    const char tmp_msg_0[] = {-37, -123, -51, -98, 87, 24, 44, 47, 77, 108, -101, 45, -12, -109, -99, 41, 65, 88, -12, -74, 56, -124, -4, -96, -79, 13, -99, -39, -68, -48, 83, 116, 16, -124, -6, -128, 94, -9, -26, 46, -81, -97, -16, 35, 119, 118, -61, 55, 60, -125, -5, -18, 65, -25, 8, -13, -73, -75, -96, -127, 69, -59, 42, 106, -116, 3, 82, 14, -4, 27, 110, 121, -3, -126, 21, -2, -18, -79, -32, 58, 21, -100, -114, 49, -80};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.171374235418);
    msg.setSource(62685U);
    msg.setSourceEntity(205U);
    msg.setDestination(38426U);
    msg.setDestinationEntity(27U);
    msg.type = 29U;
    msg.op = 59U;
    msg.request_id = 37563U;
    msg.plan_id.assign("KDUPBAXMWQHEKYYOIQMFXZYBZPLKTYYOOXJHVIANBOIMJEEENPLGEXZCQSCQRBKNXSPHQSPWZKRMLCUHHFEHGLLWZWESSWABVLEIWMZPVWTDLCGGRPXQW");
    msg.flags = 11631U;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 91U;
    tmp_msg_0.text.assign("FQOJHZEYSPQDZDUDNOVSAVFSMEZWNRPNOFGADQHXMEZWGIFKPDOIYAKWUWJHVRHULHQCBHWLWJWPKEYERGDTMJXXCHGSYVIFRGFICCRGAJDNPCJCLSHCNFYJZTUSAFBWIXUKWONVTLEZRGKPEMABJPOZQALXATTQWTKKYACRBQOUIMKLFVOGMOEXVBSCXDYNRMSILIZLMTJBXTYUUHPEPGDY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CFETAKHVZLFQMXSEJAXANMOQUWQOVHRZJQYLHVGSNYPUJPPGCOFZXDBDODDQSYNIIKZRIFPTSHCBZMERPGIXESIUNFJQKLCLZDGPAABLBAWOMZWBYYHKQXUCAWVNNIBUSJSBSFUXNRVMHAERYQTFTGENCRRKEHBKMDNQBMJKMESBXWCLOQPUSIZYVODAWDTMKJDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.693442189179);
    msg.setSource(10670U);
    msg.setSourceEntity(21U);
    msg.setDestination(38609U);
    msg.setDestinationEntity(23U);
    msg.type = 73U;
    msg.op = 89U;
    msg.request_id = 52989U;
    msg.plan_id.assign("ILRCHJNTYVXEJNDUOUKMFQJXGLRKZMRXTDZWCAPXJLCQKLGOTPMPBWQWAWOVIEVYGVDAHUVON");
    msg.flags = 287U;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 180U;
    const char tmp_tmp_msg_0_0[] = {-22, 80, -48, -73, -75, 115, 75, -89, -119, -71, 60, 96, 27, 75, 30, 103, -25, 19, -74, -14, 26, -58, 93, 52, -8, 61, 85, 2, -55, 111, -45, -75, 20, -66, -109, 98, -5, -16, -79, 4, 110, -29, 82, -87, -18, 111, -112, 108, 51, -24, -21, -57, 61};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PYUMDJLDWTTNQJVDFCHORTWBMHTGZOUVQMEYBZBELNHPPZHSXRXLCGQUFFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.524865147716);
    msg.setSource(36125U);
    msg.setSourceEntity(191U);
    msg.setDestination(63331U);
    msg.setDestinationEntity(116U);
    msg.type = 5U;
    msg.op = 190U;
    msg.request_id = 27486U;
    msg.plan_id.assign("XHFZKIRLFOLHAICOFBHYFYVPMKNWXGHTVNKJPLPGXPSOWQJJNXPNLDQYNMIO");
    msg.flags = 35642U;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 113U;
    tmp_msg_0.x = 0.144806205542;
    tmp_msg_0.y = 0.0421726670651;
    tmp_msg_0.z = 0.655675387014;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SUZZFTGLRTZWOSDIOEUHCOJTZYORQDELXMWVVVFRBHUBHQXHEIMCPXAAIXQQYRUPJZBDLRCTZRDWEXQWPAAJMNFFCZIYFEVEPCSSWJFRWSNSTGRMKIL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.568625605224);
    msg.setSource(21862U);
    msg.setSourceEntity(77U);
    msg.setDestination(45561U);
    msg.setDestinationEntity(187U);
    msg.state = 200U;
    msg.plan_id.assign("TSLEMFORNUVTCLANWTVPOZOJXKKTIODVOPEXAZUJKXTJLWQSARHEMKPPLHIPNIGNRYGWLTJTTHSWBHMOHHIRFQXGJW");
    msg.plan_eta = 283395033;
    msg.plan_progress = 0.922056948219;
    msg.man_id.assign("DLSIAWRJMDQPXNQSYBELBQTFYGNUXSRTIZFKBSLPWQBVUETFTOMGHJZBAKTZAMDUGHVUCYERAOSNKZGOSENHIABBIPJPWZQFRHEZVZYHFOHNJIATWPTWURJTJKPSBXFEYEKKUORRNTJCUSLGDCYKXBDGSOWSDOIMWXMMVWPLLEQYKIYCDGQMZAPYHFVOLJKOHP");
    msg.man_type = 10569U;
    msg.man_eta = -1777530527;
    msg.last_outcome = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.772872144586);
    msg.setSource(28345U);
    msg.setSourceEntity(52U);
    msg.setDestination(46825U);
    msg.setDestinationEntity(206U);
    msg.state = 202U;
    msg.plan_id.assign("NXTZUWCWLGAPQGXTFQYPLOUGVBWKAOCHNZLOIELIBHRAKIYASRWZCQJNSSBRIXBFWWEOOEJTPZEDQNXFVSPGECZTVTYYNMMZGBNMKLDNOCDADOUFGBSXJKBCYKOZTKJFISPGXIBZURAHLXZPBQRWJEKOYCYGHGYUBNSAHHMFWPQKKJKXFXPTMRECIURDIDVHUEZCDISFEJHUFYVRURLPUMPRW");
    msg.plan_eta = -432752630;
    msg.plan_progress = 0.647973798692;
    msg.man_id.assign("EQVSKBCFLXYKQGRIAGCJVDIIYWDKXGUTMZYVYBQRETEEPEZPPBFYXZDNNYJEWWWVTVCUSXKYSTWSSOFGNXDCHBRJTVQWCOJBKXJFHEATJLHAAKJLCASLRJNUZVMOODUPVKXCZRAYPGMIFBMOFUTMLCDWMJUWPXMWRNNONZPXUNIFTILCOWFSRE");
    msg.man_type = 50126U;
    msg.man_eta = -1345460573;
    msg.last_outcome = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.746645532826);
    msg.setSource(20851U);
    msg.setSourceEntity(115U);
    msg.setDestination(25991U);
    msg.setDestinationEntity(96U);
    msg.state = 80U;
    msg.plan_id.assign("GKSOGQXTOTGDZXBHMXRIOGPHFJJAZAXFQTKHUVDXLPQBIUZRXLUHQENSNYTZPEIGTKYUWMCGXSZ");
    msg.plan_eta = -3583929;
    msg.plan_progress = 0.00798957813648;
    msg.man_id.assign("XCNMBKLHVTDJXPBUTZDPRZJPXBMOSAIIJDYIKLGDLLFAVZCCFGIZCILDPUNQGXWWJVYYLJWGLISCAHLPUWLJOVQNNUDMYECAFMPWMLOSRUKFKXINTZZIWHYHNRNVJSDWXGTPHZOEKGTEDBKXCCMBNOFYQZIKJQAXPHVBAOKUBENVYQTGTSHVSZKFQQTHTRRBEYGQSVEFBRABDMFMEODRPNUEWGJUWUAHRU");
    msg.man_type = 61390U;
    msg.man_eta = 150886396;
    msg.last_outcome = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.213275713727);
    msg.setSource(41509U);
    msg.setSourceEntity(102U);
    msg.setDestination(21990U);
    msg.setDestinationEntity(34U);
    msg.name.assign("GPQBYAXVNTMZNRTDIKCOWEUTLGJLIDZNPCAIHKOMWOFKMIFQPNZKXMXUAELSVFBTVBEEAZXXCJQDWYQRHVWTARPYTDAGMFNDBZRYHXCTHJRWDLEQUTLGJJPAMSZBHWEIUSYRCWMXITBPGDW");
    msg.value.assign("LOWJBTOSPUIXNATZKDNEHQREYKVPYCILWWTZHPPJHFOJXWOLFKEVFVLUBGFFGRJDGROUGTBJHANEYVWEESVTBONCWSREPTIJACPS");
    msg.type = 116U;
    msg.access = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.501851316431);
    msg.setSource(15004U);
    msg.setSourceEntity(69U);
    msg.setDestination(55247U);
    msg.setDestinationEntity(53U);
    msg.name.assign("UDZJNBPAZFQFCIARQZUXEQCTEPQLNSPNFNMAKCCXYXTZVNOIFPBHZRIGSEKUXJYJQOAGEAJFKGJNUXNGLVFHHWGXOVDZKKZHTDVT");
    msg.value.assign("USBFWILUYKZLQDGMVZGHRETIEEWGSMTCXGVRCNUHDDQHJSYUIRUJSZQMDKXDBNPWLXKXIVMEHHDLWPNBZZNEWFZEVRYYTMORXAKCCCGQXDULIMBYNICTYIQVVPJOVCXVFTYDFMOWOIETPSJWPJWHPSBBSCRKCTJBAZLBXHVOICFFPYJNBQAGPTRA");
    msg.type = 97U;
    msg.access = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.802992392149);
    msg.setSource(38721U);
    msg.setSourceEntity(253U);
    msg.setDestination(37292U);
    msg.setDestinationEntity(13U);
    msg.name.assign("JFAWLCYEOPLPXXZOGUHQNGWAQDNCTEUGWSIMZDEJNUPCRXCPMKAMMZBPIHQVJNKSNSBDNKMTOZEDIDRSVOYRATZOJEEYGPJAQIWGDIYVSLHFLWRGGPSAWQZBC");
    msg.value.assign("DYLDXVVMQBGGMPCMLYGHOVHZNRQGOXORDDJNPKDONANMSOMSPMKJQCOIIIEXXLDVJPZZXHWLRZLFHZSAHAAFKACZIYQZWUDBQUFTFYKLAWOTEVUBCQZGLZTRZSREKEBIXMXVTUYMKXYEDMPKCPP");
    msg.type = 207U;
    msg.access = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.933599766864);
    msg.setSource(9597U);
    msg.setSourceEntity(198U);
    msg.setDestination(11062U);
    msg.setDestinationEntity(16U);
    msg.cmd = 102U;
    msg.op = 81U;
    msg.plan_id.assign("JKVQASVWAJOVTCLUBPINQLODXMOFEKUQGHSWKJSZDFLVQMRQMMBVOKEZCVPXCGZXUSAZEVXUUMMYVFOFZLJAIIWXCH");
    msg.params.assign("TJUWPWBJAXJKCGNFRFEHSOVLJQQXKSREGVUIRFXCUMRYFJMYWKDSOOIPKDALELOEVADKDPADWNUXNPYTXWBGLMLM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.325250931034);
    msg.setSource(39731U);
    msg.setSourceEntity(128U);
    msg.setDestination(2063U);
    msg.setDestinationEntity(186U);
    msg.cmd = 115U;
    msg.op = 216U;
    msg.plan_id.assign("OVJTZUTMKGPRWHQBFSLXQAWBVWYGCDSATPHVYDKDYMYISCWEAQRFICAVARNIEIRDYQENKEXCCTKVRSGDXONNJNIHZPGWUDXAPMAKTPLQBWTDKGZKJISSMFDVJHMIGANXQBZCYHBGLTKHLFOELUPNYTZSISUOLAZNZBGOHRYVOBUCLKOCHUFHRRWYXJSRXJMLBX");
    msg.params.assign("CXWZADBMHKYPWXQFLYDMDXCRPNDSSGFWJJGIPULXNTKRNQPRRHUYCKJNWQIPYGQCJUUZOASNMIBYWZVGNXCTXMQEZCLQBNYHBTWMLJRFIAFYAXUHWJHNKJAVRGTSLDZBMSCXVXFOIZPIWBGSIAJTBGDQTLVOLIRTVBLZVFEGYOFGJAEPFTWTLNMUVCZUNJDLQIHQROKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.415420385257);
    msg.setSource(58552U);
    msg.setSourceEntity(101U);
    msg.setDestination(62477U);
    msg.setDestinationEntity(115U);
    msg.cmd = 150U;
    msg.op = 166U;
    msg.plan_id.assign("ZWVQRFYPSXWCTXBVFGJDQPQPGEBLYDJTUXDHCUFOXRZMWSCQSRBYPBKISEXCKSFGACIHMOWITUZRCUTLBGVVWNRFOHYQMOMXRGLTGJLP");
    msg.params.assign("KMDAQQBTDWPKCZPYSEDNTOCBVADDSUWYEKMFXSOKRZPBVQBUWTZULSQYNIKTCYVYVPKRSGJLTFLHAOTCAAYWTWXPEMSAIZXAZSLLLDOXGMJEJLIERCOHJHMIXHKQNIZDWPSKUMPWJJHOZYFMCHPWRUFIJUIIRXXFZMMOQGGSVQGACIQHUTVJCBXEFHFKNHGRENNBULDXFZCQTQRNWRKRFLY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.989439500651);
    msg.setSource(60859U);
    msg.setSourceEntity(143U);
    msg.setDestination(59309U);
    msg.setDestinationEntity(164U);
    msg.group_name.assign("EBUIECKFKGEHGTJUECMHETEUEJPCKSBQCRMKJXYGUNEKIUTZFGJVDOYDOKSPFWCYSSVHBMBMRZHUD");
    msg.op = 138U;
    msg.lat = 0.532028499105;
    msg.lon = 0.241486369302;
    msg.height = 0.800657227945;
    msg.x = 0.613970370294;
    msg.y = 0.317125505633;
    msg.z = 0.300631999801;
    msg.phi = 0.255072661672;
    msg.theta = 0.336332026755;
    msg.psi = 0.482785216611;
    msg.vx = 0.515476512223;
    msg.vy = 0.312648844479;
    msg.vz = 0.805767206489;
    msg.p = 0.653112023145;
    msg.q = 0.0652107182307;
    msg.r = 0.199669059706;
    msg.svx = 0.864072861227;
    msg.svy = 0.221845923341;
    msg.svz = 0.409972486787;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.805679856207);
    msg.setSource(26438U);
    msg.setSourceEntity(82U);
    msg.setDestination(36928U);
    msg.setDestinationEntity(141U);
    msg.group_name.assign("MOZHBWRETPVOTIBGWEZHWQOWIKETPGVAKHGDMTHMFQMBJFNQ");
    msg.op = 121U;
    msg.lat = 0.951895276653;
    msg.lon = 0.865996084901;
    msg.height = 0.15758553288;
    msg.x = 0.843487213535;
    msg.y = 0.690235824851;
    msg.z = 0.879604327568;
    msg.phi = 0.503825580795;
    msg.theta = 0.289420666876;
    msg.psi = 0.15689440128;
    msg.vx = 0.411757496063;
    msg.vy = 0.882018967466;
    msg.vz = 0.050471345259;
    msg.p = 0.194283361571;
    msg.q = 0.4789539201;
    msg.r = 0.650383332919;
    msg.svx = 0.0174490086579;
    msg.svy = 0.207501863427;
    msg.svz = 0.101672903065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.49382899502);
    msg.setSource(58003U);
    msg.setSourceEntity(164U);
    msg.setDestination(24107U);
    msg.setDestinationEntity(96U);
    msg.group_name.assign("DJJIRFDUZMDDTSWZWBUNFVPRLBDQCMZBHETEMUXYNMQSHHIHDRJYTTOEGARFUVOETVGCVYFEOFSPCUYLKXKTRCXNSEUQBBKLGMLOYTANAJQDMK");
    msg.op = 228U;
    msg.lat = 0.82828320082;
    msg.lon = 0.922147066943;
    msg.height = 0.556199001395;
    msg.x = 0.56103537553;
    msg.y = 0.846824742032;
    msg.z = 0.846169031634;
    msg.phi = 0.477821338085;
    msg.theta = 0.0620714933339;
    msg.psi = 0.440912421105;
    msg.vx = 0.296230107353;
    msg.vy = 0.702207278064;
    msg.vz = 0.236033125735;
    msg.p = 0.343789109747;
    msg.q = 0.417719815415;
    msg.r = 0.787220641859;
    msg.svx = 0.674187337446;
    msg.svy = 0.622916040614;
    msg.svz = 0.604757619149;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.494634570242);
    msg.setSource(61015U);
    msg.setSourceEntity(116U);
    msg.setDestination(45327U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("ZYJXMVMVOPIRJGHFQCKXFWFDLVNKLTPOXJWPWLAMRQFXGFTWOKGFVWDDTQHPUCRUASPAUDOMRDPJYEYLZYNYWIXPQDGBBTMCCWCVEVSTXQSIFOJCZITJOVKGSJAEZOHXNLGWLYS");
    msg.type = 36U;
    msg.properties = 157U;
    msg.durations.assign("EXUZRQTODGGSFUUCKAQKQQCEXVWYSANUJGKAMDTUV");
    msg.distances.assign("CDASNNIZYCHOBFKQUYTRJOYPUASBTPRVMGGPETDDLTHWJOZXULMCVYBPDWMKQIILLWM");
    msg.actions.assign("GLTRTGKSKHICK");
    msg.fuel.assign("BQTDNQRGMJRBJETZUZHAUAXHVPRXGDXDOUVJPPRRFQDTQQUCCCUBTTSVOQLYNFMSAFNNBOZGMGSXXFKXXEKJAQSJSNGOWLMFXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.281531942402);
    msg.setSource(64426U);
    msg.setSourceEntity(206U);
    msg.setDestination(38622U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("EBFXRTCRTTUGJQUCLWUIOREFQABWVWUXTMWZELYQIHLDIGAWOAFYABXTLTFQSFHURIJFLLKQLNDVUDGZXFMCENUYKBVMIVSMHOYDJPNNOPGUBPWDMGEPXFGAGOEKTDBDVJRVHPHCORIJJEEZOXTRCJRILDKMKCDMRPYAPNZCSCVKZEPSTWXSECHVPJZKZGHFXYSWVZKKMJNRVNSTFSULHGQPBBXQOMQMOH");
    msg.type = 202U;
    msg.properties = 67U;
    msg.durations.assign("AEIIHSIVUNNMHTVAPXONFGMXKRSDJTRURUSFTDOEYEYOGPHBAKOHQYYFCSSQQWWQAROKJQOSLPQQZCPWRLPNVCSUWLALEUGJREZOJYGWZMIWQVTDPLEKPFJTCIDYBTVGTHTCWZLKIMZKDKSMIBFNXCAUPUPDVUFLJBWFTREZMBGQBDYRECXWYACMVAKLCHSRX");
    msg.distances.assign("UHCUPBJPAYDQXGYPTHBKKSIELTEWLPRNQNRTETDTPEGJCZAJCINOIXNSYSDFJHOXGRUSDWECTIKOMKHAWV");
    msg.actions.assign("JLAOEDVDCNIXGSEYOWGPVCNCFPZHKMWREPWAFJKQEGLQIL");
    msg.fuel.assign("RZHSLLVANFARKDIECNNJDHFMAICQAIPTXPGCZDCTOUKVBCDOKTPPHYQWOXBQGVUOSWYJJKWNEXKZMJGVIQGFOPBVLWRLF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.370346470996);
    msg.setSource(8946U);
    msg.setSourceEntity(221U);
    msg.setDestination(46174U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("UPRCQEVEDDDOUTYFPMSYLOBLZHIUUQOKAURJHXXVINXJZSRMXGTWGUTHFMAKROJNHXRBFBYQITLSCQXKPBQPYCOZGPDWMNURAZYHNVCWWLMWVUATKASQJSFNRYCKIAXUJKPGZZFVFWDDSXZZEFV");
    msg.type = 111U;
    msg.properties = 182U;
    msg.durations.assign("ZWBWGQMAKOCIEVFOFYDKNWDFUZSWNHYBWQXHGMGZQWGTMBDXOXHERILRAIDYBUPIZHZJPGUKMQBCNJZFCJMSNXOKWMOEPOHDUKRYVBTEBFQXJFAQUIJLFQIOSEICDDTSWRPJFXEUCVXPAVIVULPHAXOHTRZKSCZCLLSJYDNFTASCQVJYLMVQSLHFAIADJNONLPTGUEPNGHCESSAVQBRJKYURBTAWORYNZKYMGVRVXDPCRKGKETPL");
    msg.distances.assign("DIHNWZCCQTVUWNZYFNRXCLMFXZUJHNAEQLHEHRQMPXVTPWAYDRVWDTCOMOYEYWFOXAAXHIKTUFIBTBDIGGGGHFKOALPBQUMSJJLDSTDBCHMKUGHPKVKSXZGROLOTWGCLWODGNIELYZYPJNPGYWIQYILEVVHCQNJBJRAEKIGYZFPMXCKNSULASXSQXJPMPQEDZEKLOOFVRBOHFJSAZKVEMWJCQKQAJIDYFSU");
    msg.actions.assign("NSVAXOUHPENZHAXKUDFROCJTQWCOVOCDMWGYLVSNAZERQVSGPYLJSQJBZMDZTFBIVKIEKEQULRHIABIOCDBJJKPDUFNSWCDLCMUIRCTTSDEQKSRPXWIINSIEFEDJPCRGAHRFOMYJY");
    msg.fuel.assign("VKQQAGIHYPMVOIMWBGGSDZIOCECVGZTFWQLDKRCUYIRMZJXOYZFJRBBMALPPFBLAEAMTVHODS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.991419719688);
    msg.setSource(28771U);
    msg.setSourceEntity(58U);
    msg.setDestination(20112U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.0691689467136;
    msg.lon = 0.822977450267;
    msg.depth = 0.171418743111;
    msg.roll = 0.600452683249;
    msg.pitch = 0.990030976344;
    msg.yaw = 0.974313100808;
    msg.rcp_time = 0.622799508783;
    msg.sid.assign("OSAHOJIRRWBMNDDIALPVINURYJGVWDTPFSRODKSFPXHSYKACXYBLZMLKXUGVJSDFORPEDMNK");
    msg.s_type = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.513291023583);
    msg.setSource(32886U);
    msg.setSourceEntity(37U);
    msg.setDestination(51203U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.697464334643;
    msg.lon = 0.938905013169;
    msg.depth = 0.81578457362;
    msg.roll = 0.494746837936;
    msg.pitch = 0.9295275556;
    msg.yaw = 0.319175822705;
    msg.rcp_time = 0.0465308506681;
    msg.sid.assign("XEWUNRDLEVGMMOXNLIP");
    msg.s_type = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.474170776711);
    msg.setSource(21967U);
    msg.setSourceEntity(40U);
    msg.setDestination(24401U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.778919609817;
    msg.lon = 0.00615441125965;
    msg.depth = 0.467275650725;
    msg.roll = 0.0531875896878;
    msg.pitch = 0.368411076786;
    msg.yaw = 0.239058330217;
    msg.rcp_time = 0.45440168552;
    msg.sid.assign("GFKWYKHBPLJKUDMULLVMYWZJLDNLKJHFNWDAFXPAVYQPZGYXPCUOHCITEJHKNGIZKGGSVMZXVQDXFBIRBFFNAQNGYPTADIXQTNEAWKGNBYVVCHUCPARZKYUCEUVOBBWGNCH");
    msg.s_type = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.714532732343);
    msg.setSource(39799U);
    msg.setSourceEntity(212U);
    msg.setDestination(40599U);
    msg.setDestinationEntity(98U);
    msg.id.assign("PXEPKFBTXGOCTXPCDVTJETAPYZJIZGNBHOLIXXHJMWYKULGDIODMCLHRISPVQRRMAWMZZQNSQUQHLIJESLFFESVRULDVGHZBGCPZYTUWQUANFFSQLYDNGUYECIFSYVNGMKBHDTARIKJJCITFNKAMRTMSLWJJKPNDDDVQ");
    msg.sensor_class.assign("CTJZHRAQYTONACVWWHGZKHLRODXZMFWGRKXLPFIUXAYPSLHPNWJBYNBKEPPSOLBCUUNTZGZOBAQSPTO");
    msg.lat = 0.161145134305;
    msg.lon = 0.11158783036;
    msg.alt = 0.800916638972;
    msg.heading = 0.384354465992;
    msg.data.assign("IFKVYBJSBCEB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.951360516518);
    msg.setSource(17507U);
    msg.setSourceEntity(170U);
    msg.setDestination(57372U);
    msg.setDestinationEntity(133U);
    msg.id.assign("KADRXYJYBDRYDZNWURWCLBWSULAPHRBMYNMQZVHBCRGYLRJGEBHNDNHBFOVSOVQDJSKTYXEOEPLOCMXMIPKGKEKPSEALWUWXLWWDXDC");
    msg.sensor_class.assign("YLQLMUWYUSGDCVBTFHHYOJEKULK");
    msg.lat = 0.947409372273;
    msg.lon = 0.525079714741;
    msg.alt = 0.924583895644;
    msg.heading = 0.766290251029;
    msg.data.assign("HPUNIOBXFMGMSQGXBHIJETPSFTCDBIZKYELW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.744001205017);
    msg.setSource(36719U);
    msg.setSourceEntity(125U);
    msg.setDestination(31594U);
    msg.setDestinationEntity(147U);
    msg.id.assign("ZPMRSBDBCGDUXOASNCFRFBAEJSOYRJQBUXYPQGZFLLDLLCOHTGUOTDWINDTQKJDJZHUMEFSLTOCABFSYXXGRLVZIPQSXONKHURHNFQGPQ");
    msg.sensor_class.assign("NDLODIOTUCBSGNKDRQPIVVOIVCYSDTSEZWKOJZRDBZLCBOHLRHXAYXURMHAZVVQNQRHOABIXRCOJAXTMXFGRIGZBAU");
    msg.lat = 0.991078058938;
    msg.lon = 0.723195468666;
    msg.alt = 0.772246160564;
    msg.heading = 0.621440844526;
    msg.data.assign("YQRHYVHLXPDGOJAZHGDCKIGGNKEGZASWUXVPUQBJFVOOBJOHCSPRVEBCWPOCLBTXNDXCLRKAZSNLGCYYWBIFSMUSFFYJBNCSVZEOPROMURIIHRYWQNALEUAIYNQFMADJDQTEJGAPCPFSWQWSSJQXTIUGZAZEDPMVHWYURFZOHKIZTEXTQYKINKTMBKDXJPDBXVUYVSQAMZKVHERARHNLFEIOTXWWMJUTHUTJRZNGTPWLBVXCMFKLCDKDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.191736142668);
    msg.setSource(32313U);
    msg.setSourceEntity(68U);
    msg.setDestination(28957U);
    msg.setDestinationEntity(169U);
    msg.id.assign("MWUUKMHAEQDZXNVEMOTIASLGPFROMINLQEQPSYAOODBANHFZCBNBVDPWKMBQCYRQMCNWINYERGILZAHWNYIBKXOGST");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UJWTXOFTLHDVHKYJCKFXSVWIQMEGTAOVGKXDKAEYKGHPYHSUMDZQQJGRXENNQTJQYSSTWMQMDHZZCLSGNECIBEWRBUKXTXUZTXPRVKNJZLJYHRZNFEAVIONERNTLMFCUXDWHYBPPQZLCOG");
    tmp_msg_0.feature_type = 205U;
    tmp_msg_0.rgb_red = 145U;
    tmp_msg_0.rgb_green = 189U;
    tmp_msg_0.rgb_blue = 54U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.11752036527);
    msg.setSource(59716U);
    msg.setSourceEntity(96U);
    msg.setDestination(1270U);
    msg.setDestinationEntity(28U);
    msg.id.assign("BHISIVXLKVGDOCRSPBXYETQZDLFDGEFPRRQOITEOSZLIILMNNKGNTFVCXOQSYAQFPUVJSSVHXWSPYXWWWEPNKYGIGCJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DFUIKCBBTGXOVOVLWKYDZNPGICAUFLRNMWXGQERGUNBEZLLAGNCTQLRVPEGPHLRWBXUJEMOMGJHEBJAYHHKKSEFROAQPMZYUJTYVZVOJOWTUBJFRKRKOPIXSNQIWCYVDZXJDCAZKLMSDVFYFFKGTDFQXZETXQPBFYJWSZQNBYXIPVUOSLWESKKMSQDORS");
    tmp_msg_0.feature_type = 215U;
    tmp_msg_0.rgb_red = 224U;
    tmp_msg_0.rgb_green = 253U;
    tmp_msg_0.rgb_blue = 243U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.545693492876);
    msg.setSource(20575U);
    msg.setSourceEntity(86U);
    msg.setDestination(40519U);
    msg.setDestinationEntity(102U);
    msg.id.assign("BHAVLIFZWNXSHYZCMCBTUDVLDPAVLSJLWSFTLEDZVKMWRWWJGSLXIPOPVFKZTCKLJKOQCBZHFNSTNCVTSFWBQYUPMVQGHFAFTDGTKXXXOMNQEJCANZECPOKWGRYTAULZEAFHCBDMNTACDOHUOPYIFIRQFRYZMYDSGNBJHPHISTEYQSQIARODNIHOAOIZKNQOJQHBEQIIKBEWVUVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.598462880598);
    msg.setSource(38390U);
    msg.setSourceEntity(44U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(159U);
    msg.id.assign("ZOXXIEPDKBVGIORZUAVEVFPXWJUNQCFBGWSBLQTJKIEVGBFQZRMYRDJKMSJIKCRGDATUNXAHIVFNRPSLZLLYCPECMIEHVVOPMWSGVYSFHYHYQUOO");
    msg.feature_type = 45U;
    msg.rgb_red = 42U;
    msg.rgb_green = 235U;
    msg.rgb_blue = 60U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.870855844662;
    tmp_msg_0.lon = 0.655737678402;
    tmp_msg_0.alt = 0.624784580866;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.513605486893);
    msg.setSource(63543U);
    msg.setSourceEntity(161U);
    msg.setDestination(17911U);
    msg.setDestinationEntity(38U);
    msg.id.assign("VWBGTZIBCHLHKCAGRIHYMGILNFJMRUTEMWJWBVQDEFHTSXVKPGYQSJBXXEOYGAMOOTMNPUOOHCPZAECLHCAVJKICQKYUYEBTXZHTWVTPZVAWPIUDCZZEKFAKODNDGUSFFKUOOSBXEADIDWLWLMGVHEZORNLKNKURINNZCXGRMSFSQYJVJHSJFQMDXFDEHPSARBBQRUIVLZQTNNRJBPNLUSRFQLSTXOU");
    msg.feature_type = 19U;
    msg.rgb_red = 124U;
    msg.rgb_green = 126U;
    msg.rgb_blue = 226U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0369355088778;
    tmp_msg_0.lon = 0.175403416292;
    tmp_msg_0.alt = 0.402385696364;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.656488898305);
    msg.setSource(57402U);
    msg.setSourceEntity(161U);
    msg.setDestination(15672U);
    msg.setDestinationEntity(90U);
    msg.id.assign("WWVMRWTUTEVVQRVTKWCKJDGYZPJLNIRESAEOIYYKZNXAJYENGSNPPAGZWRCCHJMGQXLOBUXNXTUDKJOIVFDQHVBFQNXIHKIZMVASFKGHFILBASUDWEFCHELBXOXJDYIPVLNTDUCISYYMKBDDSTMHAJCOLDMBQLGPFUPAPGXLSTORZFGQYHTFONMOBPWI");
    msg.feature_type = 245U;
    msg.rgb_red = 93U;
    msg.rgb_green = 194U;
    msg.rgb_blue = 10U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.598507205249;
    tmp_msg_0.lon = 0.399879184592;
    tmp_msg_0.alt = 0.401732304184;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.148325187874);
    msg.setSource(18695U);
    msg.setSourceEntity(80U);
    msg.setDestination(26858U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.0341470759221;
    msg.lon = 0.455317165087;
    msg.alt = 0.712897552551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.171907107621);
    msg.setSource(4337U);
    msg.setSourceEntity(100U);
    msg.setDestination(14629U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.316962870404;
    msg.lon = 0.367110186475;
    msg.alt = 0.603142833109;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.363123954347);
    msg.setSource(41820U);
    msg.setSourceEntity(230U);
    msg.setDestination(31829U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.122858650826;
    msg.lon = 0.917693128767;
    msg.alt = 0.758519067171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.553557715876);
    msg.setSource(7739U);
    msg.setSourceEntity(185U);
    msg.setDestination(26445U);
    msg.setDestinationEntity(31U);
    msg.type = 161U;
    msg.id.assign("UKCZTRYWSWFVJPVZQIKYCJQFUNJRNNUKMJFIEVSADWEC");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("HNBGBHMMORDOHPFLOA");
    tmp_msg_0.value = 86U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.672875657437);
    msg.setSource(53765U);
    msg.setSourceEntity(252U);
    msg.setDestination(60498U);
    msg.setDestinationEntity(116U);
    msg.type = 70U;
    msg.id.assign("DZXVJTTKELOSEYXTQATGTRDZASUMFXOQPLHSPJHVGRGNEPVHLYXMRSRIIOKSQWKGDAIDUCBSCNWPGDBXEPGW");
    IMC::StopManeuver tmp_msg_0;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.221736595629);
    msg.setSource(50163U);
    msg.setSourceEntity(83U);
    msg.setDestination(40706U);
    msg.setDestinationEntity(178U);
    msg.type = 176U;
    msg.id.assign("IIOULEATIWWKHVTNBDQOFBYMGEXBUHDUNPOSCUNGSZMQXFCKUATRLYCJQMJBOHQVAEFRTTMWVANWLJRFZGYUTWEHJXQHEZQWRISKKXEFVIXWSAKIUSRDVINVCNCOFBKJOJGGBQLIERIYPWYNMFBLKVHADPHYSGPLJUSDYWZMFLBXQPZHJTUDJCCZGPKMPDLAKKPBSLGXSTRQHNGDUMYYRHOZPDJSACZVRERZB");
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.707607482816;
    tmp_msg_0.y = 0.682489282458;
    tmp_msg_0.z = 0.851020948292;
    tmp_msg_0.vx = 0.151924331266;
    tmp_msg_0.vy = 0.54208331165;
    tmp_msg_0.vz = 0.907816027238;
    tmp_msg_0.ax = 0.0603346921128;
    tmp_msg_0.ay = 0.820318851862;
    tmp_msg_0.az = 0.0533627136712;
    tmp_msg_0.flags = 8145U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.688738248037);
    msg.setSource(43377U);
    msg.setSourceEntity(18U);
    msg.setDestination(6775U);
    msg.setDestinationEntity(155U);
    msg.localname.assign("VIEYRSZXNIIBZXNMRHUWCODLJSMTTIDQVALYXTXRSPTJWVACXDUREHVFOGMFEKFKAATYRAULOVCIIJXRBBOCQUYGWLJQEUDNGJDFTMAAYQBHFMWFUICVLBVXOKWNSKHIMPAQMOLLVCOZZHSWQJFZBYQFMCSLSYPSTPEDXMKGGPNDYSEQYZXWRLBVPBHIHWEXKOWDQGENCPQOSDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.0906170447246);
    msg.setSource(29685U);
    msg.setSourceEntity(142U);
    msg.setDestination(33082U);
    msg.setDestinationEntity(149U);
    msg.localname.assign("LMVRKTHOLQSGUNOEZFMPFXFGDFSXSTZKUNRADINSJWOQBWQIOVDCYLBBJAKZAZDGKIRLXQOKRVCWXRUVOUUGBZUJXLMWQTAXELHNPMQQHRAFXJKQHMTYGC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XQLEFCLNIXJTLBJXIIXBGANTMVNFAXHSSYAOCZBQULSSFLANIFWZUCGOB");
    tmp_msg_0.sys_type = 241U;
    tmp_msg_0.owner = 7603U;
    tmp_msg_0.lat = 0.716466106597;
    tmp_msg_0.lon = 0.0797488628293;
    tmp_msg_0.height = 0.694941362812;
    tmp_msg_0.services.assign("ZWSFCGHTWZBQSMRRTOWOSUBYJHNSANIJQHDHFOUDKAQUNQPFDJIOKUJLEEBBYYNVFBJXTQVWCXZSECWRDNMROAVLAQSTKHVYGPTNNUYGQKTRIGZYLUPVZKMFNXIFPUHHWLGCKJSOVEBREILYUFWBOKIAEIVKZDAMTCIRZFDLTJHRUGPWLEZJTAYBXJCQBCIFLMZLPKDX");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.732316940515);
    msg.setSource(23068U);
    msg.setSourceEntity(138U);
    msg.setDestination(36695U);
    msg.setDestinationEntity(149U);
    msg.localname.assign("XDDRBOCJGATV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UOBSKLNZUJWLMEXPMJNLCVQKBPVIGGHOQNANFEPKEYXOGOHQKG");
    tmp_msg_0.sys_type = 217U;
    tmp_msg_0.owner = 60682U;
    tmp_msg_0.lat = 0.576519600702;
    tmp_msg_0.lon = 0.262189053449;
    tmp_msg_0.height = 0.79199895134;
    tmp_msg_0.services.assign("CMAFFLXMODQFBWEXPSYGTSGSGXGFHRPKIMSEYPZTPSTINCLZFCPNESWZYQHMVZIMJIQNDBZYPZROQJDTHULCPAWSWBAWKURMHCEBCXMDLLUYTJWYWVQWLFURSOKILECNIRAXKZJBSVFNHFGOVKPZVAI");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.316537402572);
    msg.setSource(30608U);
    msg.setSourceEntity(226U);
    msg.setDestination(40261U);
    msg.setDestinationEntity(197U);
    msg.timeline.assign("NTXGIRCILGQNNFHCXFFBTWPXATBDNUXPXZOQFPSRURYIFWJVAPRVXNANRVLKZOVJ");
    msg.predicate.assign("FGAMDWHKVNXMCWOPSXQQZQUSCFTUTPHRGJVCWREWJMNMTMAFDWGKAZMDMBTNEGQFGUVMRSADFSCITHZE");
    msg.attributes.assign("NUNXLVJMXBBUVYIODFILZIGVSUCLKURETSJCXROWRLOZLYMWXUHVPNEBYTKUMDXADVGHSQHGYMLAEXHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.217699614477);
    msg.setSource(47954U);
    msg.setSourceEntity(32U);
    msg.setDestination(47471U);
    msg.setDestinationEntity(140U);
    msg.timeline.assign("JCXVVFUHANYOFICTYCWTQRZPISNHXXKMORLWVETQDMWZHJOLJWRMLDFVRJCQASPRBWDHTXKVJLOVUDMCENCIZRXLXOBDPNJNBAUFREVMMIBZQOWAUYSDFUHTIBIAPJCYCPGPIQDNBGKMHYRLUQTEPFAAGGUDJDLUEKSOKSDCNREUZVQMTCYWIYGFRKXPQEJFVUBKTVTYWKOLSHZNJAWGXLSWZBE");
    msg.predicate.assign("YXXSPUWICAXYIBYHRPWYZRFBJNJGFMBVHUSBTJROFMLISNNVTPUSHVLGJUKHMYUXHSEMPBXBMQEZYKINCOUFZYCSZPAPHSFFLXQOMUJOQFTOSGQATGCGECNDOIXFOSZQWJMVBMTIOHEJQVBHXIWGASEMDWAETXDFDRZQZQNAKXATLPPEEUGPOVTCRJNKKKZCVDVBKLLQLIKHPCUCAIRHOLTALWRJDACUNIRWMVQRFZJLZDNWENYGGDY");
    msg.attributes.assign("DGQPYLSPVEIBEOECQNY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.342125494744);
    msg.setSource(203U);
    msg.setSourceEntity(88U);
    msg.setDestination(5818U);
    msg.setDestinationEntity(200U);
    msg.timeline.assign("PUWYYFSVJYCUXWATKPSQGLCIMGMZCTIBELJTTXWVLXBTEUOXANKCFGAJLOOBIKUGTWOWJNCSWVYVUVRFSGXDQUATIODPJHFDHFWHJNBLXVOYRNOHESGJOWHROTGBYHLIT");
    msg.predicate.assign("RUYFEJFEPBVKCBOBCZQVQIPFMXXKLKZYVNFJHDMCTDLSGPSJPWRNYDMRJZUBMIQDKWARZBDBCZKYXDZTFXCXAWAQNOGOJNVBXGMLKA");
    msg.attributes.assign("VKGFGTYUIKQVQRGKETTEDBPWBVZZOMUBQCGSJEURJMMPYENQTDBCDAYKGCJMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.523704744682);
    msg.setSource(35728U);
    msg.setSourceEntity(235U);
    msg.setDestination(11287U);
    msg.setDestinationEntity(211U);
    msg.command = 164U;
    msg.goal_id.assign("MJRRJDJBUXFELAPUDCGZXLARYFHDZSFITGWERQUAZBIBCIYEJDXOSVTKKHNIDWVXOXSRWCOKOZJJELFBSHOPRM");
    msg.goal_xml.assign("LWNBONZBLWVTPYNEQEGKTPDRDTRKZVPUSXKHUCDKXJZQAWYDPYKSGKMIWEXXDHYVQBVFPOJGRZMMNXLIHGFSQSDBCEUDKYHTUPSHIEHLBCFITTCURITOYBXZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.358897902654);
    msg.setSource(37403U);
    msg.setSourceEntity(134U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(184U);
    msg.command = 23U;
    msg.goal_id.assign("BGXHLJCSPYPMQMFAJNYC");
    msg.goal_xml.assign("WLQZFEAENVKTEMDUIC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.701314031751);
    msg.setSource(49462U);
    msg.setSourceEntity(82U);
    msg.setDestination(15291U);
    msg.setDestinationEntity(110U);
    msg.command = 29U;
    msg.goal_id.assign("KNVDSFQGWWENEGJMCVMRQXRBZWFBMHZHERXIGBMLBVOPZEDUSKOSPKZBEVUGVGDCXIXAUWKZJLQHITKYCJWBZAYC");
    msg.goal_xml.assign("GRZLSMVOLXLGPGXVJCCXABLFTPBDWCQVDKEWWRSBJYZYBRGLKEJFLQOXZESAZASSDFEJUTTGOQGATLYATYIUKYIHJJMWUBPTPWAEIPSGOQHCPSAJOWUBEQZVVHDRDKIVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.658062179532);
    msg.setSource(61837U);
    msg.setSourceEntity(14U);
    msg.setDestination(16512U);
    msg.setDestinationEntity(205U);
    msg.op = 228U;
    msg.goal_id.assign("GTLEOQACSNMBPEET");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YSUDKGHZVYEKPPCNXZYAQOMWFLXCDKWFGKPSKLEJCOUIOIVXPAJOHGYWUVZENHKZDCKSWYZMVFDAIAJKCIEDPOXAEMYQANHLWZWITFFTRHMHEGJBFIEMQTVTGBLNHVEDQRRJULBWSKRLQBPSYNWDRICUXTNOXURABFZMORMTCLAUVZTLUWBSPU");
    tmp_msg_0.predicate.assign("TQDRAYEDTXZRQHAUVGVKASYXXTGFMXBSJEZBOGGYFXHMXRWBNSJUGFOMODNEEJACYNMHLHPJPPEGSLAOTTOAEUTHPSMZZDRWGVHLSFWQXWEIEUCDZQUAKDVQWFRJVYWHGBJBQCZDUIXUQSPGWNWLIAKERKNBCWZ");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.551179205521);
    msg.setSource(63386U);
    msg.setSourceEntity(45U);
    msg.setDestination(8780U);
    msg.setDestinationEntity(180U);
    msg.op = 172U;
    msg.goal_id.assign("GPASFSXWSONFINJQDEYOCULCNTRRRSJVBAMLJGVHLSDXANAQFZMUQCYVICEXMHFUZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WYWRKMXKVMAKBCRZARIFJWADM");
    tmp_msg_0.predicate.assign("BHJTKJMQYDPIZTBQXMPCQRJCSGLQRNCINANOYIDGDJJOGKUCNBCYPXCJNPZZYYIWYMDWDEECEKKLZPWTWTHUHZSQNLPKITSTISXYLMUEAKXUOVAHGDBCEOFAWKNLKTVELZOHXPVIVNBJZHAEFGNBAHQEMUFFKYDWHRJZUXFSFSJMXDULQVOKXAQHYRZLVTOIFODBNWBRRAVORWESPHQQUGTAFULGMJYZWAFCVXDS");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.927780362386);
    msg.setSource(49780U);
    msg.setSourceEntity(127U);
    msg.setDestination(16209U);
    msg.setDestinationEntity(183U);
    msg.op = 74U;
    msg.goal_id.assign("TXVTIDZODYPIVLBSCZICREFGURPDZVKKLTNMXVEPIESHYZQJRLNPUEPEGWNQLFVSUBTQEZJGJQZIROBMOIOTJDHRKQAOGZCDHJKIPMSXNCCGUHTMQDFMRYLBEFHEYGBFBCKAXXNGCBASYGWMTZLIOKOJTFCEVMTBLOKFQJDULJALXPUAAOFUYQNSWYPBYJQRFNWKW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UHRYEUXKICOFVGOSXHJBGMLKCFLDKGIZUQGXNNHXAHBYARQHZMPLWUBEOWZYZPUDICWMPZRGZIRQCVDIOXQOMWSUHQTFVVTKSPTJFNFINHIAMEGLYJMZXODIRMKRVYBJRSJTDJWJKBSETBGXPSNMXLVJBYQJXFQSV");
    tmp_msg_0.predicate.assign("CIREPMPMGFBQRMAOGYJZHHEFVQSXIKDPVBONDJENF");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.341579816644);
    msg.setSource(6222U);
    msg.setSourceEntity(9U);
    msg.setDestination(5743U);
    msg.setDestinationEntity(164U);
    msg.name.assign("FXEXSPMRHSRIYLGEQIJEQYHJDQSZIARIOPBEKWOSSZYSOCVVXJGDCCYBTINFUYUKRRMPOQJKFFVQDZVZLPGWDENBGYTWKZLOSXONMJKAKOFFBJAEKLXCJQNFIRQITLU");
    msg.attr_type = 127U;
    msg.min.assign("UERMHRKZESJIDFUXAFGDAJYQRACUUMJWABPNLPSYWECPVISNNOOMGVNWZECYBBGVTSXERYZCDVQSXFMMTYZXHOFDGRASVUBAMAXEWSIHUYXQHQXWKGKJZOKOCOKXDVYKCENHEJPOMAGYLYNBTQZQDRBXRFPHSPFDWZIJRIPNHQTIWFZTQAAMLNBMOKUGNDVPWJXJW");
    msg.max.assign("GGQJPLBMYBSUCTLHXAVHACIXMYNRGUZDQOIWCAOZAUSKZLUHPROCGCZAJNWXQAPTEFCZKCZWDKMUFGSDYTUBBNMYMVNAWHJVVBSNIXSOVXPTFRPDEKQQTOMLLKMGFFYIPDPBRVIOTDEVWIWFEOGQEEWXCRXQEWENDAOJYYKBHTSFZQKELIKXDMYMFGS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.223669083347);
    msg.setSource(40314U);
    msg.setSourceEntity(28U);
    msg.setDestination(47507U);
    msg.setDestinationEntity(57U);
    msg.name.assign("WKPGCDXWVIZKNCLDOORJJWRLDQUHYINKQBYAURJZPVPGIKBGWLTWRFVPGU");
    msg.attr_type = 71U;
    msg.min.assign("UBFZSKHVQTTONLCLZSSXXQERQVPQTQMWHPIVHVPBFENXKASEDEMJUBIKBJQGDQIDHRAFSDZDZOFXYNQTDT");
    msg.max.assign("SUQGCXTBPESYVXKVDCSNKUBVFOXNYFGFAJKLGDAEFEUFZZYCQXIKJKIXKLNVRIOVFLNTGDECGWDYZVSHCFACOUQMWMCIDKDPGHSMHVLOHGDZYMPMXAJNZMSLURDQBNBJBXJUFWQIUNGLBLERIWMZKXQNEAHSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.164215224344);
    msg.setSource(13981U);
    msg.setSourceEntity(224U);
    msg.setDestination(46106U);
    msg.setDestinationEntity(45U);
    msg.name.assign("ECRHAPEZYRKVVGJHAPMXYBRJBFHLKZRGEWLPXSQJTNADKMMWEGKLQJRYVUFDEVXMCIJJIOODPKBVSAVUTGITZNSUCDIOWIXQFHCDBPNWRKEXRZLKUOIUFXJPODTRZAVEAWEFNIJSDQVOXBDFWDFMKTSTHHMYGNLLITMWHIRZFPNWDVJNXZOUBKASYQHHGCQBZRMAGKVBNSTWACLGSTEFSPWOUA");
    msg.attr_type = 211U;
    msg.min.assign("DZXCUFAEGTMZXGYENRSNCES");
    msg.max.assign("WXLMGPJGHAPOWPBXFSOWLNUNHCTVADXZNZJREMLGAHDZGPTWBOOUQPDFTYINKKLRXFORZFLXYVYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.78942461802);
    msg.setSource(16750U);
    msg.setSourceEntity(82U);
    msg.setDestination(14970U);
    msg.setDestinationEntity(106U);
    msg.timeline.assign("BEPYORZYAGEXUNUTPREILHTXBBKEAGULDUROPEEJYXIDWDDUUVSIGFSWCEGKSJFFKCTRFBTAFOYEQOLLYTQCGUOMVIMCXPDRISGPSRRJAQWWVHWPOTXNTINDKZACBBWYBVLJHGVYAIFKTAVJWLAMZNZHPXMNLGLSHGPYHHKMUXTXBDCVQRLKSZDBCCRZWNYOPDGXQOQZLKMQQFHRIMVHNIJJK");
    msg.predicate.assign("ENFHBAYRPUNDL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KURVDHFMXGYPVDWMZNPMBRYSEOAHHTSEDYBRVIGNIYDPVWYTLLRTZXNWUDNHYVBUWGAPZSHJLCDULJSQDHTNCVJEZWKHLZBSYMLOBDPGCOKBPGQGMRSNPDCROLUE");
    tmp_msg_0.attr_type = 247U;
    tmp_msg_0.min.assign("LOYPMVPMJDTZBJZLIEJNUYCXUXTYIOGSSQEFHDYDDRBMMFXEACKUZZVOUCGPIAFLXVWHPVNCKWHWNZTIQIOVYDCFWMUHDXMGEKZYGAFAQKDAWRTNRQRYG");
    tmp_msg_0.max.assign("VAZMTLDVCJVTXLNTPBDGOBNORAQIWOAKWCUGLDAOQZWHSWMLFPUNYTIQWIRIPGXEOXLXDCWGXTVYUIWCLFNJTELQGMXJEZPKWRORJSNBEHBDXXNRMCKUHCBPKYCHJPAKYKEIEVWZQCVHFSDJZFGQPBQJUZKLYYMTQIYRFFBNRENXUPMCQJZZSJGDPSKUSMDSTVOCTHFERMARINAWFZOLNKSJO");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.792935570215);
    msg.setSource(3081U);
    msg.setSourceEntity(102U);
    msg.setDestination(10936U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("KFMFDOFHRHAXBJFCIPTNBNZUWSJQNDPWGKLHBXLUSGVYPFDCYYBLUOENGCARRHWATEBFRJCYMFQTXUFBNNGMLDBLCEREYWVPADZPIGIDYGQBJENEY");
    msg.predicate.assign("VEIAZWHFSDEXPRZKWXRXCVDOIKQWMNFJLSLCMUTTCYVTIRNQMTODZCTFHSRFMIDGSGMSOVNXRNJAXFOCPNFSOZKKIIPQBJSPEHLQERDOWIGZQWWBFZCIKVCNYGLRTZHBPPYOAYMXUFGUQWDFKLL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.741292865786);
    msg.setSource(65071U);
    msg.setSourceEntity(33U);
    msg.setDestination(5121U);
    msg.setDestinationEntity(114U);
    msg.timeline.assign("ZDNGXYFFDEFXDFIXTFPAKKVSSWQJCHBPPCJOTLNVDMBMFAOTHVIZJHIQCCHXINXNQOQHCWUHZKSBAPFJSWYIBYTBTWAWQINYNURFRYSKLDWMTOYMMJHPAQIGDTHEVZKHMUICSIOCRYJGRERGWDVCLUUSRFBDXGEZJVZVWBYAZAK");
    msg.predicate.assign("NRLKMMHCFGGHUNEDAAPHMVGDFQJNXPMSMWJZBIVHALYIJFPRQLVWGDLCSVWTTFSMOIDBRIGEXKFVZUJNZZVLBTIIHKOFRDXKXWYPSTAXMPPBVYBTUMQSYQBWTPNHNSCDRRUPTCXAGEEHSKZRURJFLRUOJYLSURUNFIJLXVSWHPIZLEEOOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.820971904234);
    msg.setSource(6343U);
    msg.setSourceEntity(75U);
    msg.setDestination(41397U);
    msg.setDestinationEntity(165U);
    msg.reactor.assign("MRQBWFTQWBVICYKOIRZLRLJHOPBXBAYOYGWYUUAKFLNAHOHLPKUKYTFGRDUSTOCQTYNYNNEVLOJECIFRDVHCQAUDOCNVKMXDTHAZCUXIDDWKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.307030725646);
    msg.setSource(48260U);
    msg.setSourceEntity(137U);
    msg.setDestination(37992U);
    msg.setDestinationEntity(46U);
    msg.reactor.assign("QDVYUZLQKLTSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.480283366045);
    msg.setSource(50275U);
    msg.setSourceEntity(248U);
    msg.setDestination(13614U);
    msg.setDestinationEntity(237U);
    msg.reactor.assign("GAZPIUBYMIOFZEGYCGUQMMCJCSQSCLYRFLXRNMTUATRZYTWWBJIKKPKYYZASKUVWHESDMVARAJODNCTJOZVGYPCLXLXLRAPELIJRHTQRONFUHOJNBBVKDNUFFJGADUVHOPQNRQBMFGPUDMVXWWEZHNEVCVERBZPXAHAPJHTTIOIDVQISXKNWXZIRKCFJQTBESDFNMLZBDBMJVGZKHWHLCDNWQHIEUIAYMLDPLKYSYXETQSWOXQT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YXRSRCTCLSSLRRWAHLCTTBOBPWADWNZKOYXWKLJRELEXQBEMTYYCNFGQGGNDJMMMIMNQZYUTIOVDKVAESIBLDIIJPPIQKDBVBJKGTELIDYDNHOR");
    tmp_msg_0.predicate.assign("LZAGFLDSXGZSMJRTXVUGIHARODCIJPNSMWALCD");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.908643410946);
    msg.setSource(46686U);
    msg.setSourceEntity(230U);
    msg.setDestination(48871U);
    msg.setDestinationEntity(102U);
    msg.topic.assign("XAPJWSXHBYMRGROAQKECAKHMCJCXNPORIHQT");
    msg.data.assign("XJYIUEVNHTSPVXIYYUCNUOXEJTIYQFSRRDKAPHYLGZIDPPMRKBAISFUMPYILRTUSZQWMSTLUDDESOCKNWFBODLAOUMXVHRBTCTLWIQGQORTHLMJJKLMQFWZNNMHJHXANEJQZJKNSIXAOQSFSCKQCAYDLBCWUBVWFPOGIDRWQGVV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.637703743704);
    msg.setSource(49674U);
    msg.setSourceEntity(167U);
    msg.setDestination(51238U);
    msg.setDestinationEntity(10U);
    msg.topic.assign("SYQWFDMGQAFUTRQVBJNRSYPEPGOPTDKJRPRTWUOHDGCIAPXQVHSNIUCZXVFQHYWKYZKMRUANOZCXAVMLDVCVOMDYDUGZHGLYCYRBNBXNFUNLQPCHVOXVTHABFKEWGTPAEKWHMPDBDJWGTKYKNLJEOPMGMSTIAEW");
    msg.data.assign("EMJJICUPRSCBPJAXMGPLXMIOVLNFMDFZSCSFDGASOQTVEXNIRQLMUVDFYNCLILGMLBJKTACMOZHCGWKKRSLQKAIFPIPHHVDCBTBTVOTLTWZSBWOQHHKGDIRAYKORLQTJIVOAKHNOTXRACQVUARBUECNWXYBNEERQNKWWYTRXQOWFUYVXMFGBUQPATVZCSUDOYIJXDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.473717562787);
    msg.setSource(35208U);
    msg.setSourceEntity(145U);
    msg.setDestination(20498U);
    msg.setDestinationEntity(86U);
    msg.topic.assign("IBALJVKGJSVCPSIEPDDAZTRWKHRSHLCTLHIQTRCDEEYIHZQZBFOEWFGPETVOXWYHHVFUBPSLUUCAUDHWEJDMTYZLBSIEPQOVYKPXXPHNFWVOROQBGYEQNMGBGLMAWIHJVENNGMDRWJGLIXCUQFUWOVPFHOYSDYNAQLNAOTBDMJGFPRXSEKCVTVUGSCSMBMXRIRPRI");
    msg.data.assign("LPGUXZGIMTRBFEVJHOVLRZCPMTQFBMRTOHUIWJJABVQELRYNMCOGCQYXSPGASPOCSHTBNRCFIXZZQYZGVWAPYCXZBRSOXNYKOMYDVWBFDMXWLKXSDTVCGILD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.29399531379);
    msg.setSource(61158U);
    msg.setSourceEntity(55U);
    msg.setDestination(13435U);
    msg.setDestinationEntity(23U);
    msg.frameid = 196U;
    const char tmp_msg_0[] = {101, 56, 14, 80, 26, 114, -127, -28, -56, -95, 23, -128, -43, -28, -53, -5, -12, -50, -72, -74, 103, 8, -24, -24, -46, -112, 98, 26, -119, 21, -99, -89, -7, 122, 118, 97, 45, -68, -106, 112};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.739121472624);
    msg.setSource(47978U);
    msg.setSourceEntity(74U);
    msg.setDestination(42660U);
    msg.setDestinationEntity(163U);
    msg.frameid = 147U;
    const char tmp_msg_0[] = {12, 116, 25, -23, -48, -40, 20, 73, -98, -109, -53, 26, 43, 97, -97, -24, 39, 110, -126, 106, 113, 96, -60, 23, -63, -31, 41, 45, -116, 80, 114, -112, 16, 36, 5};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.939156260977);
    msg.setSource(25473U);
    msg.setSourceEntity(123U);
    msg.setDestination(63903U);
    msg.setDestinationEntity(195U);
    msg.frameid = 206U;
    const char tmp_msg_0[] = {101, -92, 105, -75, -16, 42, 5, 111, 7, 67, 100, 5, -86, 117, 75, 73, 62, 101, 79, -29, 24, -66, 81, -9, -19, -128, -65, 46, -72, 73, -116, 34, -29, -108, 51, -84, 78, -63, -59, -88, -32, 71, -79, -126, -67, -42, 118, -69, -67, 70, -82, -19, 50, -84, 89, 107, -110, 18, 28, 20, -127, 93, 59, -98, -84, 2, 66, 82, -81, 3, -64, 46, -17, -76, 69, -10, -87, -58, -121, 79, -106, -111, 41, 46, -21, 80, -103, -22, 51, 59, -90, 30, -119, -72, 57, -126, 86, -14, -19, 3, 30, -6, -50, 34, 2, 17, 109, -54, -52, 48, 44, -40, -120, -52, 58, -58, -126, -13, 38, -8, -3, 12, 5, 73, 30, -101, 102, 86, 4, 74, 77, -50, 12, 34, 15, -30, 81, -122, -60, -26, -67, -5, -104, 38, 19, 125, -87, -28, -54, -64, 89, 38, -105, 61, 38, 113, 47, 103, -107, -74, 66, 26, -63, 36, 55, -27, -27, -69, 106, -32, -1, 112, 34, -76, 37, -3, -99, 55, -108, -89, -73, -102, 18, -123, -109, -13, 64, 105, 21, -87, -8, 120, 90, -62, 33, 48, -90, 4, 18, 79, -103, 87, 34, 38, -125, 42, -71, 10};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.563408593103);
    msg.setSource(36537U);
    msg.setSourceEntity(96U);
    msg.setDestination(4898U);
    msg.setDestinationEntity(54U);
    msg.fps = 129U;
    msg.quality = 76U;
    msg.reps = 230U;
    msg.tsize = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.657631716752);
    msg.setSource(39931U);
    msg.setSourceEntity(122U);
    msg.setDestination(8875U);
    msg.setDestinationEntity(177U);
    msg.fps = 109U;
    msg.quality = 154U;
    msg.reps = 109U;
    msg.tsize = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.171844501043);
    msg.setSource(6446U);
    msg.setSourceEntity(42U);
    msg.setDestination(2827U);
    msg.setDestinationEntity(213U);
    msg.fps = 142U;
    msg.quality = 214U;
    msg.reps = 224U;
    msg.tsize = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.749526975683);
    msg.setSource(36468U);
    msg.setSourceEntity(90U);
    msg.setDestination(44876U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.157791773009;
    msg.lon = 0.305159410764;
    msg.depth = 97U;
    msg.speed = 0.255974383008;
    msg.psi = 0.630350627885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.32326616624);
    msg.setSource(1043U);
    msg.setSourceEntity(236U);
    msg.setDestination(53064U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.292965602866;
    msg.lon = 0.134631801842;
    msg.depth = 206U;
    msg.speed = 0.971786689237;
    msg.psi = 0.634835972181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.229817315087);
    msg.setSource(51869U);
    msg.setSourceEntity(71U);
    msg.setDestination(27400U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.00664360114575;
    msg.lon = 0.891964740383;
    msg.depth = 71U;
    msg.speed = 0.0589672338933;
    msg.psi = 0.761195421884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.822625819263);
    msg.setSource(60243U);
    msg.setSourceEntity(139U);
    msg.setDestination(57484U);
    msg.setDestinationEntity(56U);
    msg.label.assign("VWZHZMGLDYKCRVODYULIEWXVLLXDISHFMUWZTMJNYIBIHQHSUJXARWQAJZUSFLCKNEUAMZPPEERCQEMFRUPGTZJSFCNMJOTDMUHEPGUTRZJMKPYQNGNODWTFBSGBLGAQSNGSGFGPTLIKIEJU");
    msg.lat = 0.270615186696;
    msg.lon = 0.315949641099;
    msg.z = 0.441212440541;
    msg.z_units = 8U;
    msg.cog = 0.926151651049;
    msg.sog = 0.84711344775;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.71738738465);
    msg.setSource(37535U);
    msg.setSourceEntity(151U);
    msg.setDestination(35384U);
    msg.setDestinationEntity(30U);
    msg.label.assign("GMUTGZFQQBHCONQMQGFSLEVSUHYTKPDPVDKRQHCVPENWEKRBASQMNDRBXEXSIATOXXYFUEBPRLZXGNVJZHGTJFIASDJCJOQDAMTFEKYBMYWEGWMVDMBXDXPWZUDYOLVHLOGSJBYGIOSOURVNJCECSUACSEOZWCIKYLKLKXCFRJKOGSNTVHPXBLMZDFAZVRNKTQTBAWPIIJJFMVDA");
    msg.lat = 0.264942800054;
    msg.lon = 0.378038387133;
    msg.z = 0.111623381864;
    msg.z_units = 117U;
    msg.cog = 0.00636198736572;
    msg.sog = 0.944449156246;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.249857708471);
    msg.setSource(27874U);
    msg.setSourceEntity(66U);
    msg.setDestination(11095U);
    msg.setDestinationEntity(241U);
    msg.label.assign("HIJFWRXRFKSILNRGQBGHDSHYJGBLQZUQYAZTOLVVJMYUDUCOGIAMCPNWWAJHUQHTAKYFASDLSIGVVKQKVEGDBVXWUOQLNDRLWPPCGTXSTRUAELSCHYRAWOZNKTRYZFOTFWIVBFNBSSPXYEWMAHMPFNXJDEYJPPHDIGIOKLTQPCUUQVUNKXAJTMKBMIEWRNZOEJHPOEXQTYEXCOJRLBXCYD");
    msg.lat = 0.262054337363;
    msg.lon = 0.0951900147766;
    msg.z = 0.0815247938289;
    msg.z_units = 207U;
    msg.cog = 0.82194748225;
    msg.sog = 0.674719248509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.582849438044);
    msg.setSource(12184U);
    msg.setSourceEntity(171U);
    msg.setDestination(4860U);
    msg.setDestinationEntity(222U);
    msg.name.assign("YCPRVQOHVBSZMOWQKXYSVUIUTEPATVQUSMQWFMHCXZASZFRRAUYYULQKVGLLWMNZMIUITCCFJINOFGOHPKUHZLKKTEGOGHPUQBSWLNTGISNQIEQDWNPURAHJCBFPRRDSSMHQBLFJYINTFCRRPZLOMOBDWHIVJVDMYZGXZEBBGKNSLERCTXACZEDAEDDSKEYJGYOAAMUADXMKPXPCONBZCGXENX");
    msg.value.assign("SRGCRTJRYYWQILOIUPZPVBYQSVUCPCPDFDKNXKYIAOAZBDXCLRWHHGNNFPHUNUZCLLVEIHHVWOCIBIOVFCNZEQMVGFAUCNXWRFJSQJBJXIGKBRPSXWLOBHAFKMMJHPFEDEEDTXQYGLYUAXHTCXLIGAWEMBNRKMKLRWWSYVMABFDDTMQPTKMNQFJCUOKQXBTEVXTJSTGZGHLYBLRWTGIEDNKIVOONESYOUMTWKAZUEAZAMZSGJJQDPUOZPYHSF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.781856807858);
    msg.setSource(63823U);
    msg.setSourceEntity(220U);
    msg.setDestination(31214U);
    msg.setDestinationEntity(124U);
    msg.name.assign("JBQBDXZRAYDPCGMWDSERNYXSICTAMKPZCYVWJPTUBZLUTJFXXFYADUELTKQLZERGTOFZLQPSNEHYUJLMGOQIRJMGOWSQAPIVNHKZVKPBEBIZGGYXOPSHQTVFFKUIHUJGWRIUSKNAWTCVBNLDTMVUMBDKFGHAS");
    msg.value.assign("FFKGAEIZYARLMLJEZPXBKXGOQGJMZKJMKCAIBULOBVUQTIDODPOQJOGBKMNPBDUSNTGORHSBTHAKLYZAWUCXSXVWGQFHCOSDMKENVLHLWBITWTVYBXUGODURSEZPNETVNVXKYVQJRCNFRWFDVPEQGVEHMTMIEMCLDBYNFYRFWOJYFEYHWSVCSCZWJYUXZEHIDAUHMOQRSHGURCRIXQMLLXJSCPAYIWCRPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.307652280032);
    msg.setSource(11047U);
    msg.setSourceEntity(164U);
    msg.setDestination(62465U);
    msg.setDestinationEntity(41U);
    msg.name.assign("PFWNYUVDISLTZBTHYXOGPTUUQJDCEUMBGSDCHQQZGICOGORZNBOIDTIFLLSASAUBEXTUXHWIRAVINBQJOFQPHYHXPWUDWHRIUVVFVICOZZCCCKRALRNFVNYPYTGOZWVEQMTWNKLZRXEGVNZTTEEQPGKVPVJIUMSPAEYFZHFLBOJMSRBWKHXSMRJBGKUXABEKYIGNKDGJRKOMLAFAKYQHMXFQWSWMDZTRAPEQLELJDMXKSJDJYSXDOLJCCNCMH");
    msg.value.assign("QKVMDVMKIJEBRYABDKSIWZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.817544541956);
    msg.setSource(60521U);
    msg.setSourceEntity(49U);
    msg.setDestination(5538U);
    msg.setDestinationEntity(223U);
    msg.name.assign("NMXLDZVFSWWJZYDHQXTLABUWGRSQGSOKYUGOHIXCXSRHNEJPNPQYLPPMOPYTCDVOSUFWVSTFZNEINVHBILUAXQFGXFDRUYCFFKVZBITMHTT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BHVALPWXBNFAMJBUHOOZRBUJHDINPADTZNGWCHODQLLANFEUVSYBWIQLFYGLIQBXVKPFCPHRIWMWESKUZXXRWEOIJEWOCNTKYTKEEUNDDWBWYZSVBVCXTOTMMKPJYVARXXEHTCURICQUFGDSDSHTRMNCIMDPOJVZJVLAUHNFYUJKFGECJZPXRRIQOHKAERFAGDZKYGXNSN");
    tmp_msg_0.value.assign("CMEXULYMTOWXSCEOGTSZGLDOXLDJIMILPZWYWXAAFBKAIYJXFMRHCYOZUGWBQKXGBISJLCNZGAOSPTGZUHHWSRFIRVAWSANFLVRNZDQBJZHMRHIZDFWHZFGEGIOBRBTVYNBNQDSWREUDPEAPEHPPPIIUJH");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.76093059196);
    msg.setSource(48840U);
    msg.setSourceEntity(179U);
    msg.setDestination(9873U);
    msg.setDestinationEntity(192U);
    msg.name.assign("MJXJUHATOWWHVXBFRZUHZLVZZITVZAFQQMZLRDVGDGCONGGFAYADIAGSXLQDYSUBBXZKITYLMONOAMEEIVEYG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JTNUITEQFMGPIXLRWABWVLBBXZYONELBMMXMQRXAODGIKRUXWICYCCFHXKOLSFDRQGWBJAJORDJEUWWKIKPPDKNPUZNSLPMTVOLGVHVVDZOPDBGSIIASNYWDTPCGBMZQOHUCRSWFPAYMVLXNNYJEZCFQKSFAIQPDEROCCANRFURPMUTTGXJFMAMBYKWXJUHQHJSKGKCTIALVIHH");
    tmp_msg_0.value.assign("SFLQOVQQDIIFJOELSLXRLZWFLDRXHOMAJNIZMNCBBADBFGNVYJPRDYHZUODBLBMHKTPBJTZDEWNSQSSPMSHUKKAHDQPKLKQLGZVWIFHVMYGMXAMTEGZWTEQQXEKYYIKFCNTIPCJNBOKRUYGVXAPECULGZZYXQZSNTGDXMAHUTRUJXHOWWZRLABVHGCUWIOFOSERBPTEXVYGWQEGNWJIYVIAKKUPCFARWICNPFYBDJRMPVNODJVUORXSMJCT");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.897969653122);
    msg.setSource(2392U);
    msg.setSourceEntity(179U);
    msg.setDestination(8963U);
    msg.setDestinationEntity(81U);
    msg.name.assign("ZCNQNZJXGBFAEUZYCWDBORTTYBKSFCBOJPFMVQKGVRSLBRVGHKSYUIJRGDTFXWBACMKEEEUILQVTHPOUUJFRFZZZOUZCYSOOXLWWDPYYPGWHEDKOVIOLDIPLIXTQJCICLUAJZTHMUKAP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HGVNSOGLVXTEMDAAKTTALXECOKLGQEGJQRIWOSYOWBQWZRQJGLRYJXAFKSRZFTRQFWKPUIYPZVNZRATGPNVCEMBAOXHQJPHGJYXRNBDZ");
    tmp_msg_0.value.assign("HVTCAYGSHVMFAOIECXLGGYABCMRAYCNWTGLUWBYFAIFOBYPPOUFIXIPDHJHQCADYWKOPMHKXQUKNSSMJRVWQELJDQZZNOROUXHVEIFSDNWTEJZUYQJNGGDPMDWYXPLMGFOVLETWBNEWZZSVDQZNWPMCTQRIFAHBVAFQUITAKUBOVSWISJZHEMIJPJRKQKNGQUKBOKLYLORSCLGBXEBJZEZXTRSNMCEXULPXNTGFYZRDLDRFJTRBSXMVA");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0971879841888);
    msg.setSource(12823U);
    msg.setSourceEntity(118U);
    msg.setDestination(33191U);
    msg.setDestinationEntity(246U);
    msg.name.assign("IPFXMSEZYXFSWQQBPRCJXEDLJCKHYNURJWTD");
    msg.visibility.assign("WSXUMESJSLOVIRZRGKSQLSPQTTBMYOIRBAWSBFUBQW");
    msg.scope.assign("PUHMOCLGYKJZSYGZMXIYDASRMTCRYZJXVHFDAZPWX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.527503495045);
    msg.setSource(34410U);
    msg.setSourceEntity(14U);
    msg.setDestination(24413U);
    msg.setDestinationEntity(22U);
    msg.name.assign("KZYSTHJOORIUMQZUWUSZSGPKGWFICPKVYJFMRLPBKTZNDPYGHWWALVHSERGVNMBFINHENCXQXDVCPZQMNBVYYQ");
    msg.visibility.assign("KXWGBTJDZIRQTPXAIXQEDMYECBCSFTPKXQAOAFRJVHIEYNTPNPUSXBHFGKNMYTILDCYKRUGWPQNAVVADAJTCIOXGYLUDJSUWVRZPGP");
    msg.scope.assign("NCRNXLMFGZAQAEBPQDZNBOKVSAOSSVEIFNTTFCGPYKBGONKQHGTSZRGPCKZQMUIBJFXTSXRHJQNQHRWZKMLUAPSOKDQQHUYMGLXMEXJVTOXFIDWYQAGEPVLUXQOHUWUOPZYVJLEWDWNLJNCYJHGAABYEMISEOXOWIKYEYBYDHKZOCNGLZBVZLDDZXSWALLTPCYRDAFRTDVPWCUTMMVMJUCUSFFUKRDREMCSJIRIIKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0789266183182);
    msg.setSource(58547U);
    msg.setSourceEntity(58U);
    msg.setDestination(22586U);
    msg.setDestinationEntity(133U);
    msg.name.assign("VATCTMQZYHIIYOTNKUWOVNITAHICSBWVEUNAQPSKRHQZSEULPEMILKBZDQQNDCGXLNYJXGJYASVUFMNEYWMOBSZABGBAJHGWJZHLUVOPVDPRUEODROOJKZRZFIAHZSHUIAVSQFLRKHXHKJUWNGDDGWMOWLRCQWVIMDKYUPREDXRTCLIPJMWQONBQBEYLHUSKLATEXFGEFNCMPXRZKATYCJNSBWZJCD");
    msg.visibility.assign("HBUEZEFUYGEVZNMRQYTAXFTGJLPCPJSQLRXMIK");
    msg.scope.assign("SPDGGVTIZYZZCYVITGIRSUSWWNONQUMOJUXFGKJCEVZVCBBCGOWRPRSPLVJIJTBRLAIEZHKLKTQMAJFMQNEXPQXXCPHTILVFLAEKQSOQXSNOBNDMDBVILKSDPFDQQYFYTUYDTCKVNJSMOHGINOAXLDWCEMLAYGJYBMCIVKZCUOZKYQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.739167000289);
    msg.setSource(3455U);
    msg.setSourceEntity(95U);
    msg.setDestination(39979U);
    msg.setDestinationEntity(62U);
    msg.name.assign("JCZERNVWKLDYAMSPVVPBXSDZBWSSKMBTKTCXHKAEKHZDHBKMERPCAFHWPYRWNODPCESONADIAQHLEVRAWXAAOKTVAMFHQCQOQZYQFX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ARRTSKSQYTGGQEKHZSHAHIMYDJNBVWSPYZYBOTOIRLIOSENCMKAZIOZVFJEVVCCLLOIINCYQHNAVPUJCUUMAFXJYMJXZLEULRHZLHEOGTVBRHQDUYUTNJWFHGPGIDADGAPOQJKKQNSDGDOJZBFXKWQARELWWQEFCSY");
    tmp_msg_0.value.assign("PMSQPGRUGXFNFHIIFDOLMJJCLXOWGBQBAFIHNCHYPSLAGCDDKAITVMRYOCLBKQCKTTWAFTYJZJXBSDHDUVBSUHTZUNUMRSEWMCTKLIZKSZYPPRZFFAYBXVTXAAVGRLQSZWTMJLHOCBWMNEJXENHAIBEHQVPWBVADRWRGFIQZBZOOQTIRKNVOCYYCWTAZPJLDQDNDXEEHQXH");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.215518646682);
    msg.setSource(36276U);
    msg.setSourceEntity(64U);
    msg.setDestination(5636U);
    msg.setDestinationEntity(61U);
    msg.name.assign("YSNDGAEVGTLRNRRUIIEBHRQVFBYXPMZHRLGESYCZVQQDFEAAWJTWNEPGISURTBLFRLIHTMONOBZVEZPAKRHHCYMOMUPOLFAJYAIQXBYCCSXUBBHXOHUQJWPENPTTWJLTYAVLRNUKISOXPZCVTNJEOPZNWDAWMYJOOJBMLHCBQIGKKLUAQDLPDZFCKXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.45779896852);
    msg.setSource(10360U);
    msg.setSourceEntity(206U);
    msg.setDestination(61751U);
    msg.setDestinationEntity(89U);
    msg.name.assign("GTTXMQORMAGWDYWOXAZGHCQYRUBBSZJNOZQFVGDHNUPXLSCYMIURTXKFEGIVAYEKAECEAVPXTMRTATFPGWLYMQFPWVLOYFDJWHHSHISEBHVBUJTCJCFNKSEZFJBDYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.540174178241);
    msg.setSource(14838U);
    msg.setSourceEntity(126U);
    msg.setDestination(23047U);
    msg.setDestinationEntity(8U);
    msg.name.assign("TWBZRWVFTWBSDYAMHBEBLYEDAYIXMPLUBPIFSQPSQICXHLHIKWTHNRYPARUFRYOAKNLUUSATJJTKPSGJHMNGDLOSXQZTWOHGHQKIMCRFCPDROWGGXRREZYKUVXKVWQCPGJBOCQHQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.28044376668);
    msg.setSource(46803U);
    msg.setSourceEntity(202U);
    msg.setDestination(15133U);
    msg.setDestinationEntity(64U);
    msg.name.assign("LIKLDEJMYTIGHIQECYPBDUQMYXNWWPNDAETEZLYXLFAHBSDAPZYMFOJMDRVPRSRSAKGKSXIWFQAFSKSBOFPNOGOAYJAZWBEZHSUGNXXQUJDSIPDHJXAPMNQGJWVOHFFBYHCUEXTZKYVNZXYKZFWPKTRROTUZQQKBIYDCEIVOLQBTHVHHKRHLGFCEENGIRVUQWMUNDOMVWCGPEXTFLPGSBRTOMCJVWJMDUTBCGUULBVCIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.877086975089);
    msg.setSource(37600U);
    msg.setSourceEntity(86U);
    msg.setDestination(62781U);
    msg.setDestinationEntity(198U);
    msg.name.assign("OTBOGDDOMSJYKZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.353712822614);
    msg.setSource(1282U);
    msg.setSourceEntity(215U);
    msg.setDestination(47257U);
    msg.setDestinationEntity(218U);
    msg.timeout = 4134138356U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.265022569253);
    msg.setSource(8470U);
    msg.setSourceEntity(7U);
    msg.setDestination(19448U);
    msg.setDestinationEntity(225U);
    msg.timeout = 1615077955U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.136201333695);
    msg.setSource(38724U);
    msg.setSourceEntity(20U);
    msg.setDestination(34128U);
    msg.setDestinationEntity(26U);
    msg.timeout = 2865464119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.697260234666);
    msg.setSource(8649U);
    msg.setSourceEntity(126U);
    msg.setDestination(31381U);
    msg.setDestinationEntity(21U);
    msg.sessid = 1322256494U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.468204410361);
    msg.setSource(5099U);
    msg.setSourceEntity(136U);
    msg.setDestination(4049U);
    msg.setDestinationEntity(189U);
    msg.sessid = 2574559649U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.879062054401);
    msg.setSource(26593U);
    msg.setSourceEntity(95U);
    msg.setDestination(28200U);
    msg.setDestinationEntity(223U);
    msg.sessid = 3209762123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.122250882071);
    msg.setSource(37302U);
    msg.setSourceEntity(171U);
    msg.setDestination(21146U);
    msg.setDestinationEntity(126U);
    msg.sessid = 1344575865U;
    msg.messages.assign("EMDIVQAPFQNKLASFYAASKGDSVMJEGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.455593045659);
    msg.setSource(22623U);
    msg.setSourceEntity(128U);
    msg.setDestination(955U);
    msg.setDestinationEntity(82U);
    msg.sessid = 2211376267U;
    msg.messages.assign("KOSLTQMBKWGZGGYKCYHVNSSXCWGDUWVZITPSJVCGBRDELMKKANEKQZXPYAECNFJHWZVUVUSPQPOQDHNGFDTRNWRFYUZDCJILMNUJGSLNOEMFTTXLQM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.503524930727);
    msg.setSource(62024U);
    msg.setSourceEntity(41U);
    msg.setDestination(63961U);
    msg.setDestinationEntity(115U);
    msg.sessid = 1762111630U;
    msg.messages.assign("CGFIQWGWMBYJOTMBVCVGRGVBLHDPXXIZKCWXYHJIFPUTPNMFKUXUVODELDUIXAMPCTGABEWNQPYEOKLKFSARCXFINJTCNUAXIQHHGZJQFMDIOBSZMPZPYYASKDYPNJQXNJFDREJONBEDMKDVMTSHLZDZNQTQLIMDVWEGGRLHCAUBRHWUNJCBGWRRZEOYSFSOAUVEWKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.353078506463);
    msg.setSource(35976U);
    msg.setSourceEntity(117U);
    msg.setDestination(31526U);
    msg.setDestinationEntity(187U);
    msg.sessid = 1326229446U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.874694895614);
    msg.setSource(35248U);
    msg.setSourceEntity(112U);
    msg.setDestination(32390U);
    msg.setDestinationEntity(168U);
    msg.sessid = 71416701U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.414223163415);
    msg.setSource(9867U);
    msg.setSourceEntity(229U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(246U);
    msg.sessid = 1562136178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.593066838298);
    msg.setSource(13647U);
    msg.setSourceEntity(167U);
    msg.setDestination(25704U);
    msg.setDestinationEntity(92U);
    msg.sessid = 1806238994U;
    msg.status = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.673075712556);
    msg.setSource(34353U);
    msg.setSourceEntity(105U);
    msg.setDestination(58542U);
    msg.setDestinationEntity(69U);
    msg.sessid = 3589705731U;
    msg.status = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.778252540024);
    msg.setSource(50218U);
    msg.setSourceEntity(205U);
    msg.setDestination(24130U);
    msg.setDestinationEntity(189U);
    msg.sessid = 2320928122U;
    msg.status = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.863998031255);
    msg.setSource(54614U);
    msg.setSourceEntity(173U);
    msg.setDestination(64223U);
    msg.setDestinationEntity(225U);
    msg.name.assign("QNVQUGSMCWFXEPCGFIIVFZUZHIGSBNPCFOFVOHRDZXZJRPLXBSHQHKAJCMSVROSMWJYLTMMLOZTKOXUCTVKTWLVOLNQXYJBQWGNMEAVORLPEUAEHOGZZGSKZAPWYWUTWPNAHMZDTWNEIAXLYWXQNJNDCKDVIHWJHMIYHTRQDOSERYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.779452923179);
    msg.setSource(61554U);
    msg.setSourceEntity(167U);
    msg.setDestination(30833U);
    msg.setDestinationEntity(185U);
    msg.name.assign("FYTYMQMAIIKVDIVINAVJHNLGPGRGOVQHIISYKIHKLVQJBWELKXGCCPHUXLLNCWAZHXBZVBGRUONCJUFLBGUZLYVXOEYFZBYZHSFFUYALYBTYMGTCKIAESLQGPBVJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.941517421603);
    msg.setSource(37858U);
    msg.setSourceEntity(24U);
    msg.setDestination(41735U);
    msg.setDestinationEntity(100U);
    msg.name.assign("KTYIDREEDXRVTLILQBVFOCWODKDCZKFTKBCHIJNQEHWWWBBGTLHGCOWNEYXHMTWFFDUKSGZZFNSYQTQXEBPNEURYYHVNZAZVVPZWPHAOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.504484754687);
    msg.setSource(62140U);
    msg.setSourceEntity(98U);
    msg.setDestination(16850U);
    msg.setDestinationEntity(97U);
    msg.name.assign("ZNHKBOUQFFUKLAEGAGMDXDCGCHMXXSPGTPWJHCJZKAXDBDJWHYFWOAZSAAOMEYECQPRZHRTLWPNIWNARHGUEVCZMXKWIUINRSMQLNTSIRPBVSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.745991541152);
    msg.setSource(52423U);
    msg.setSourceEntity(128U);
    msg.setDestination(55817U);
    msg.setDestinationEntity(219U);
    msg.name.assign("HIWEYKUVQWQDESGUWAPZBLFQCKWLUKZIYKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.837030319085);
    msg.setSource(42625U);
    msg.setSourceEntity(123U);
    msg.setDestination(62726U);
    msg.setDestinationEntity(133U);
    msg.name.assign("YMHVDQBWWBHOANNYGDMXBXKUGHSIAADMJHULBPTCOPOZUFAEEQVKHJODFFHJSDWKMUWRACWKXDZLMMSHFZVYQKUUEQFSUGETNCDVMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.720823466731);
    msg.setSource(38513U);
    msg.setSourceEntity(117U);
    msg.setDestination(49602U);
    msg.setDestinationEntity(208U);
    msg.type = 222U;
    msg.error.assign("MCLBNSQDPIGJJKNMTUDTNGCVVDPMSSBAMGVGXJFVVUFQGSNHWHORMKCRERTAYIFWNGZLZFCQSMETEBHUWTCZIXCPJPWMJUMKGYEJQDQJJONBRUDPUKBKYEKIIXNUHFFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.355490385121);
    msg.setSource(24064U);
    msg.setSourceEntity(72U);
    msg.setDestination(22775U);
    msg.setDestinationEntity(124U);
    msg.type = 38U;
    msg.error.assign("EVIDVXRQNBKCFDWVCCHZHTUQFFDLVTAQNKFNYVSXQYWNLKSDAYCUKOPOOVFPAYMFHJBNJPURSGAXIBUMARTJELYRUJSVHILKOMFHVMQTDHEWX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.363675364724);
    msg.setSource(2218U);
    msg.setSourceEntity(224U);
    msg.setDestination(43655U);
    msg.setDestinationEntity(44U);
    msg.type = 163U;
    msg.error.assign("ZLXHSRFJBHWAREOKLHFRGUUMLYPEICFHULZNFJZZCQWDAJEFTEFSGBXIZECLPGFPMCPSCJVOAQHIBAWCROTOOKAQEYINNVQLJQUSKITMUKBPJRDYXTXAJWTKNUKZNQPVERIVMHONMQBYXYQVFYCPDUITJZIJUFBEDGGAZWWQSDTKMDSVKVDTYGYOLSNQBTXIOVOCPLVEXRSWXGXCHDYIWLHTENUDAPDNRCFSAMKZRKAHBUGXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.236156062214);
    msg.setSource(37163U);
    msg.setSourceEntity(251U);
    msg.setDestination(40974U);
    msg.setDestinationEntity(123U);
    msg.seq = 13300U;
    msg.sys_dst.assign("QHGKNNEHUDZ");
    msg.flags = 212U;
    const char tmp_msg_0[] = {-79, -35, -46, -14, 17, -50, 62, -32, -76, -99, -114, -115, 14, 59, -8, 48, 100, -96, -17, 93, -62, 74, -57, 1, -34, 38, 24, 118, 101, 18, -98, 93, 4, -122, -88, -87, -18, 70, 92, -32, 24, -95, 61, -22, -10, 81, -113, 31, -109, 61, -114, 11, -116, 52, 60, -71, -42, 94, -49, 106, -8, -87, 111, -37, -5, 34, 110, 108, -113, 4, -99, 77, -56, 58, -6, -54, 53, -1, 126, -68, -85, -74, 76, 24, 104, 112, -27, -120, -47, -99, -121, -74, -60, 7, 126, 24, 89, -32, -1, -103, -39, -11, 22, 102, -79, 4, 126, -94, -50, -113, 56, -40, 80, 11, -50, -56, 73, -56, 94, -87, 99, 102, -44, -5, 21, 41, -49, -54, -34, -52, -40, 101, 28, 32, -97, -4, -70, -42, -107, -1, 63, 49, -93, -17, 114, -59, 118, 71, -29, -57, 61, 1, 57, 27, -83, -125, 118, -83, -3, 35, 114, -124, 110, 73, 45, 98, -121, -91, -113, 4, -122, -117, -19, 39, -35, -21, -34, 68, -60, 18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.774285760739);
    msg.setSource(17464U);
    msg.setSourceEntity(175U);
    msg.setDestination(20793U);
    msg.setDestinationEntity(105U);
    msg.seq = 11277U;
    msg.sys_dst.assign("UONSFWCJPSCMGBPFDSXFFZERPMLLKXLZCVBKGELUEIKUNVBNKTZVB");
    msg.flags = 167U;
    const char tmp_msg_0[] = {-31, -22, 106, -18, -86, -74, -46, -81, -34, 88, -33, -22, -115, 110, -115, 67, -13, 14, 3, -88, 26, -40, -94, -34, -11, -111, 36, 119, 68, -74, -126, -51, -12, 16, -17, 15, -114, -89, 115, -109, -60, -69, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.958813482694);
    msg.setSource(55775U);
    msg.setSourceEntity(57U);
    msg.setDestination(11433U);
    msg.setDestinationEntity(97U);
    msg.seq = 22963U;
    msg.sys_dst.assign("ZZEYPMSOYSEKTTXCJMTFAOLKBQPYXMWVJNEHNVUJVRVIDMAHJIRMRDTUJPDFQOXPSALLHBHSSPHQNWGQGKZGTCLBRCAXBEHBLCFFDXKGAONVODULQRPXNQYMSVJQKJOCIQWCNWLJVXEZWECWSHKWMDAMVORTVDSOPIVZUTCELFTKGQZABRYUQYJNYESTYSRFIOIHTKRRNFPZCPFYWFWYZ");
    msg.flags = 31U;
    const char tmp_msg_0[] = {-95, 80, -52, 96, 85, 49, 16, -21, 29, 21, 124, 111, 65, 18, 29, 75, 63, 106, -56, 10, 93, 33, -20, -84, -103};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.784520068252);
    msg.setSource(17652U);
    msg.setSourceEntity(99U);
    msg.setDestination(55480U);
    msg.setDestinationEntity(205U);
    msg.sys_src.assign("PKDVUFDEYQVHFOJUPRKSNVJTNXZIDPLGZTQQWFIEPFNUKXATCFGROJYUYTVQSVGEDMNSLBLFVHMMMBQXSFJBBESNOCHIASHLUBNIXEXFOHKBQZDYVYHSKJRVUMLAFWEQCX");
    msg.sys_dst.assign("XQKEOFIQTUEBRZNGPBKXLPNTYTJAZDMONHFCVKBUBVQGDFPXGMIBVPKTUQEINZZDPCXUJRPJIBGGHJVURZVOQZENALPEXDAEHRNHYQGAVTOFXBCWGAWWHJACIOWHUPLXDRLNEEKKDTSKNSXWBMDYRBPMYSRUNTTYATZJIHOABSISYSUCMUGVQFVZMKVMOSSIDWUYCHFZTJLJIRDRFVXKFARACHQCSMOY");
    msg.flags = 0U;
    const char tmp_msg_0[] = {-113, 13, -31, -92, -84, 88, -62, 75, 16, 85, 47, -46, 79, -24, 36, -99, -49, -78, 31, -28, -25, 101, -13, 69, -92, 41, 8, 110, -71, -22, -2, 63, 59, 61, 41, -21, -7, 36, 117, 41, -108, -39, 43, -60, -90, -45, -113, 68, 40, -123, -92, 0, 25, -115, -106, 60, 43, 10, 118, -75, 90, -104, -109, -28, -9, -101, 44, -79, -34, 110, -89, 107, 96, 25, -94, 23, -119, -89, 76, 14, 14, -37, -97, 92, -31, -30, 103, 39, -111, -29, 119, -125, -58, -92, -48, -39, -113, -14, -119, 88, -15, 52, -41, -83, -100, 73, -13, 17, 57, 54, 10, 77, 122, 26, -28, -39, -6, 14, -112, -33, -35, -18, 49, -35, 55, 67, 57, 23, 54, 123, -112, 16, -117, 5, 28, 65, -76, -3, -99, 110, -43, -2, 27, -61, -42, -126, -38, -113, 77, -59, -7, 63, 70, 13, 1, -89, 43, 107, 24, 52, 31, 101, -82, 98, -38, -125, -65, 96, 41, -10, -23, -12, -106, -12, 122, -113, -70, -39, -102, -111, 42, -121, -112, 50, -110, 0, 120, -6, 25, -102, -97, -8, 48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.426991981676);
    msg.setSource(12024U);
    msg.setSourceEntity(73U);
    msg.setDestination(2804U);
    msg.setDestinationEntity(204U);
    msg.sys_src.assign("AJHOFHGOTZTPLPJQPKPLOSKCZYUGGIMQUOLEBRCTXSDVWJVEZXAYTAKYBTTVFVVFJVDZBPANFZWKPWDVVGBVCQCLNKGRXDGCXMYBGGDUJLFESRA");
    msg.sys_dst.assign("WJHIHBHLARYUGBXGBHWRDJFNOSNSEEOYAEBZVAHKMJTTKTDCLBNIROCQUDFQPFHNETQLPAPOREYJGFLCYYXLVQJXIDAAMFIUCQXBLPWYCYDFIPQMZROWTGBOVVNHGQYIVORIKEJTXBVESXNINPQXGEQNKVZDJSRAYXKUDTVGJUATZEZZLHPMGZMPWBSEKNZFQYCGHISWRU");
    msg.flags = 116U;
    const char tmp_msg_0[] = {-6, -59, 77, 94, 63, 91, -22, 10, -96, -84, 43, -53, 62, -49, -36, -97, 86, 21, -29, -61, -80, 118, -119, 18, -30, 5, -125, -40, -22, 76, 95, -86, 75, 107, -106, 47, -33, -46, 0, -97, 117, -79, -21, 22, -122, 66, -117, -30, -76, -87, -25, -93, 2, -59, -61, -1, 42, -65, 46, 99, -117, 47, -115, 107, 116, 16, -104, 111, 79, -70, -49, -103, -60, -122, 97, -32, -24, 77, -39, -123, -85, -51, -9, -88, -111, -16, -126, 55, 30, -31, 94, -48, 3, -105, 45, -57, -99, 78, -7, 48, 28, 74, -118, -125, 27, -81, 5, 106, 38, -61, 88, 77, 104, -1, 28, 97, 44, -124, -42, 109, 56, -71, -117, 73, -105, 119, -56, -67, -85, 111, 46, 74, -84, -54, -89, 65, -102, 124, 100, -4, -9, 63, 95, 83, -3, 109, 26, 102, -57, -121, -37, 117, -6, -115, -116, 97, -4, 45, 7, 108, 11, -31, 126, 17, -36, 109, 109, 95, 5, 19, -4, 11, 108, -57, -15, -19, -10, 15, 109, 55, -87, 88, -102, -13, -45, -97, -3, 58, 11, -84, 75, 61, -22, -106, 72, 97, 69, 30, 1, -88, 108, -15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.324630619894);
    msg.setSource(40650U);
    msg.setSourceEntity(61U);
    msg.setDestination(30974U);
    msg.setDestinationEntity(34U);
    msg.sys_src.assign("JSRBFFNSIGXIGOPFMVBKKTFUWBDYOVXVRBNLBMPDYQPEQHCBBVVXILZVSJMTLICLAFOZFQQBKWZCLWEJCVWICHOPEYDLMASFMYAXG");
    msg.sys_dst.assign("HOHBKEIDCVMELWKQPDBUCGVUOFEJWMIJYKEHCKCIJNNINPKOEGZTJQRRUA");
    msg.flags = 186U;
    const char tmp_msg_0[] = {99, -78, 103, 99, -107, -5, 5, 96, 21, 64, -4, 125, -79, -120, 69, -65, 49, -19, 82, 119, 95, 85, -19, -128, 57, 51, 31, -37, 22, 31, 102, 106, -76, 105, 37, 80, -67, -70, -92, 7, 29, 81, 19, 95, -128, 54, -13, -109, -27, -47, -116, -93, 92, -117, 109, -10, -124, -64, -41, -93, -90, 57, -32, -43, 51, -101, 73, -95, 24, 68, 86, -29, -5, 47, -119, 101, -36, 35, -64, -81, 58, 73, 58, -83, -89, -125, -45, 106, 71, 103, 70, -118, 59, -123, 39, -91, -103, 9, -110, -116, 114, 11, -15, 24, 93, -34, 15, 63, -81, 34, 21, -110, -47, 33, 3, 78, 86, 49, -75, -127, -70, 122, 107, -95, 49, -70, 121, -38, 77, 55, -83, -74, 36, 33, -68, 5, -64, -5, 27, -9, 20, -83, 95, 57, 106, 15, 118, -8, -73, -121, 20, -94, -40, 103, 75};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.936382404524);
    msg.setSource(13805U);
    msg.setSourceEntity(133U);
    msg.setDestination(63070U);
    msg.setDestinationEntity(15U);
    msg.seq = 422U;
    msg.value = 254U;
    msg.error.assign("APGRUYBNFQVXMCGEQYYTKDDXPOAXIDLPPJPNRBOXLZWFPMBSFKYXHDZEMJJCCOBXSRYDYGKGJJDDNEYQEXBCMEBELIMQIVMADZUVUGJIZTLSQWWKCUOQCFSSJZWAPUSOVDCDOUHTVXUIXMFRAYTGOQFMLFPVKEVOTSLLKGXYTPECUVHNNRMWLASZRHCTBNNFRHQIQPBJBHVWNZINWGWHISJUAILACFZOTZTEHKVJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.228912726486);
    msg.setSource(38827U);
    msg.setSourceEntity(59U);
    msg.setDestination(854U);
    msg.setDestinationEntity(15U);
    msg.seq = 4360U;
    msg.value = 62U;
    msg.error.assign("CZTKYPNTEUKOCBYMICNCUOIOMQXGZYBZZLHCFBVEDPLVMGNTUWVSTVPSJIBQOGYKLTKJAQABWIHKRUBFAVHHGFXHPPAFANYQVQLEQSLQJOFCEHVQQSXRPAIVCLOASMPGCWIGXRNDOXRWWMLFXFRJWOMSXHSJKARHNSNXKNUSK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.342903167378);
    msg.setSource(48413U);
    msg.setSourceEntity(58U);
    msg.setDestination(13855U);
    msg.setDestinationEntity(69U);
    msg.seq = 27424U;
    msg.value = 165U;
    msg.error.assign("WQIGDGQXEFJEGRRWITNFBJKMONGMXSEYOUSCWBEBAIMTJFOVISJXRHYNOWFKPKXHANCXRTLBZGWUZOVRLRSHNMZAVCMOLZXISINRGSYWUWZCDSKATYAUKTPFPEVBBSVJZIEVLMCBGPACPLHPIUPDMVLZNWCGBHROYITONQDADKVPXDAQIFTUMAWBQQJUZAYQOLOUQTEDTCDCXLHYZEHWG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.00314729801599);
    msg.setSource(55682U);
    msg.setSourceEntity(76U);
    msg.setDestination(531U);
    msg.setDestinationEntity(146U);
    msg.seq = 51847U;
    msg.sys.assign("FXQUGEZOSGMOXBFD");
    msg.value = 0.17527257574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.163356339115);
    msg.setSource(23345U);
    msg.setSourceEntity(9U);
    msg.setDestination(28917U);
    msg.setDestinationEntity(182U);
    msg.seq = 11855U;
    msg.sys.assign("MSKFHZAPAJZLXDSOYWGBWMACGJELIASLAPPDRFPTMVKQJUIRJIABMYEDRGEUAVEJHYXVTFVVGGLKTOJSCXPLFWFXZCXQJWPJINNGTGOEZHHMNUQRNLRBNCTNQWOERTYHUORM");
    msg.value = 0.602665045124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.112173465061);
    msg.setSource(34406U);
    msg.setSourceEntity(193U);
    msg.setDestination(41003U);
    msg.setDestinationEntity(101U);
    msg.seq = 22685U;
    msg.sys.assign("OGAASPJRIQXQLRZFFYIPSNOLBVHDGTSFBTFJYSDPSEASZWDAMEVFPTXVZBBMDSZBCAXYURJUNKHFCZGUJIWXPUPSCKHOBLEPIHLIZVDRUNDKTOOTVUOIHRLYWEKMJLRIMLBXEMSDKXEWYJUNFOQYDQMRAZCQHHBMKACXGTWVOCSQNWWLEGFCYAZHTXCQZGENXXNRVENQNUVIGTPQCFKAHMJTGQROMHJTWYEWPLYDGUOFIKKLA");
    msg.value = 0.805099883732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.125859574535);
    msg.setSource(53785U);
    msg.setSourceEntity(114U);
    msg.setDestination(33982U);
    msg.setDestinationEntity(36U);
    msg.seq = 6238U;
    msg.sys_dst.assign("IZROPAOCYZDGKMBLJNWTZWOEZFVFKWGWP");
    msg.timeout = 0.84067033354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.708578078891);
    msg.setSource(5747U);
    msg.setSourceEntity(33U);
    msg.setDestination(1947U);
    msg.setDestinationEntity(80U);
    msg.seq = 26519U;
    msg.sys_dst.assign("XKJSEVNUWJDOBVUHPKOFYLYVNUOWUVIAKAHEXRVXJGUTCLGSQRRMMWEQOMJUKGKNGFRWDNTDHBEDFSEQAPR");
    msg.timeout = 0.525271157938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.83909218794);
    msg.setSource(52857U);
    msg.setSourceEntity(104U);
    msg.setDestination(7341U);
    msg.setDestinationEntity(188U);
    msg.seq = 48173U;
    msg.sys_dst.assign("VFUUAAAIOBPRWURMLGVNQWGBXDIQGEODACJWMFHTQLZJRZFKAKCQYODEKLXVHLAKN");
    msg.timeout = 0.921905295578;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.0473896241982);
    msg.setSource(54643U);
    msg.setSourceEntity(245U);
    msg.setDestination(33705U);
    msg.setDestinationEntity(138U);
    msg.action = 160U;
    msg.longain = 0.301519427477;
    msg.latgain = 0.427324289673;
    msg.bondthick = 763752253U;
    msg.leadgain = 0.291744032349;
    msg.deconflgain = 0.328708615123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.664906404209);
    msg.setSource(61862U);
    msg.setSourceEntity(217U);
    msg.setDestination(32291U);
    msg.setDestinationEntity(139U);
    msg.action = 52U;
    msg.longain = 0.379623324204;
    msg.latgain = 0.757684980177;
    msg.bondthick = 2608176821U;
    msg.leadgain = 0.514572775919;
    msg.deconflgain = 0.582623977238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.07273785283);
    msg.setSource(7421U);
    msg.setSourceEntity(54U);
    msg.setDestination(16609U);
    msg.setDestinationEntity(129U);
    msg.action = 11U;
    msg.longain = 0.5816797517;
    msg.latgain = 0.451429192717;
    msg.bondthick = 3320410928U;
    msg.leadgain = 0.637769942027;
    msg.deconflgain = 0.075816845738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.826288162807);
    msg.setSource(6094U);
    msg.setSourceEntity(82U);
    msg.setDestination(47849U);
    msg.setDestinationEntity(75U);
    msg.err_mean = 0.36364076697;
    msg.dist_min_abs = 0.0525766533252;
    msg.dist_min_mean = 0.0943215616341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.524909754787);
    msg.setSource(31603U);
    msg.setSourceEntity(20U);
    msg.setDestination(43550U);
    msg.setDestinationEntity(50U);
    msg.err_mean = 0.0882104948009;
    msg.dist_min_abs = 0.0332068914404;
    msg.dist_min_mean = 0.774201112069;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.463764321403);
    msg.setSource(10187U);
    msg.setSourceEntity(192U);
    msg.setDestination(28776U);
    msg.setDestinationEntity(243U);
    msg.err_mean = 0.37224256244;
    msg.dist_min_abs = 0.3824673803;
    msg.dist_min_mean = 0.0168110154493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.49510217623);
    msg.setSource(60393U);
    msg.setSourceEntity(27U);
    msg.setDestination(11950U);
    msg.setDestinationEntity(17U);
    msg.action = 173U;
    msg.lon_gain = 0.537089450692;
    msg.lat_gain = 0.406198809269;
    msg.bond_thick = 0.218435145598;
    msg.lead_gain = 0.591396444077;
    msg.deconfl_gain = 0.923104014691;
    msg.accel_switch_gain = 0.0206734583211;
    msg.safe_dist = 0.695162857233;
    msg.deconflict_offset = 0.989575850612;
    msg.accel_safe_margin = 0.0739043127787;
    msg.accel_lim_x = 0.629088042035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.0921041767467);
    msg.setSource(22355U);
    msg.setSourceEntity(48U);
    msg.setDestination(49558U);
    msg.setDestinationEntity(211U);
    msg.action = 7U;
    msg.lon_gain = 0.893393730056;
    msg.lat_gain = 0.314007239581;
    msg.bond_thick = 0.310470012309;
    msg.lead_gain = 0.132874772659;
    msg.deconfl_gain = 0.0654358701562;
    msg.accel_switch_gain = 0.661786018726;
    msg.safe_dist = 0.254555043476;
    msg.deconflict_offset = 0.426418682973;
    msg.accel_safe_margin = 0.576667581813;
    msg.accel_lim_x = 0.0843152162403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.829221871573);
    msg.setSource(15046U);
    msg.setSourceEntity(63U);
    msg.setDestination(32048U);
    msg.setDestinationEntity(73U);
    msg.action = 169U;
    msg.lon_gain = 0.353919684964;
    msg.lat_gain = 0.851828739208;
    msg.bond_thick = 0.324041835409;
    msg.lead_gain = 0.506094237772;
    msg.deconfl_gain = 0.935349675727;
    msg.accel_switch_gain = 0.522232111219;
    msg.safe_dist = 0.43455602271;
    msg.deconflict_offset = 0.722700787597;
    msg.accel_safe_margin = 0.350702652052;
    msg.accel_lim_x = 0.85952096707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.627876215109);
    msg.setSource(28942U);
    msg.setSourceEntity(231U);
    msg.setDestination(6541U);
    msg.setDestinationEntity(119U);
    msg.type = 176U;
    msg.op = 178U;
    msg.err_mean = 0.966230335473;
    msg.dist_min_abs = 0.328821280128;
    msg.dist_min_mean = 0.0997758129441;
    msg.roll_rate_mean = 0.527360403542;
    msg.time = 0.136655201859;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 238U;
    tmp_msg_0.lon_gain = 0.861017140854;
    tmp_msg_0.lat_gain = 0.414316865567;
    tmp_msg_0.bond_thick = 0.251277664218;
    tmp_msg_0.lead_gain = 0.322831515909;
    tmp_msg_0.deconfl_gain = 0.0724983397279;
    tmp_msg_0.accel_switch_gain = 0.252276189813;
    tmp_msg_0.safe_dist = 0.219028163565;
    tmp_msg_0.deconflict_offset = 0.299045059997;
    tmp_msg_0.accel_safe_margin = 0.771782030793;
    tmp_msg_0.accel_lim_x = 0.248137119831;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.328212663179);
    msg.setSource(22749U);
    msg.setSourceEntity(157U);
    msg.setDestination(25670U);
    msg.setDestinationEntity(142U);
    msg.type = 131U;
    msg.op = 198U;
    msg.err_mean = 0.367155636717;
    msg.dist_min_abs = 0.175574076681;
    msg.dist_min_mean = 0.0514363002654;
    msg.roll_rate_mean = 0.88771828694;
    msg.time = 0.116898327617;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 91U;
    tmp_msg_0.lon_gain = 0.959430961665;
    tmp_msg_0.lat_gain = 0.357230061;
    tmp_msg_0.bond_thick = 0.391036283358;
    tmp_msg_0.lead_gain = 0.0304935817849;
    tmp_msg_0.deconfl_gain = 0.567342862646;
    tmp_msg_0.accel_switch_gain = 0.42985841556;
    tmp_msg_0.safe_dist = 0.300033396923;
    tmp_msg_0.deconflict_offset = 0.528024862285;
    tmp_msg_0.accel_safe_margin = 0.687714759177;
    tmp_msg_0.accel_lim_x = 0.988334203429;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.821040517078);
    msg.setSource(44477U);
    msg.setSourceEntity(103U);
    msg.setDestination(62887U);
    msg.setDestinationEntity(83U);
    msg.type = 239U;
    msg.op = 184U;
    msg.err_mean = 0.555514394894;
    msg.dist_min_abs = 0.991604126897;
    msg.dist_min_mean = 0.14417548148;
    msg.roll_rate_mean = 0.0904168485712;
    msg.time = 0.181403972873;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 128U;
    tmp_msg_0.lon_gain = 0.947781576506;
    tmp_msg_0.lat_gain = 0.596066968683;
    tmp_msg_0.bond_thick = 0.774767602454;
    tmp_msg_0.lead_gain = 0.460815257926;
    tmp_msg_0.deconfl_gain = 0.0139218088014;
    tmp_msg_0.accel_switch_gain = 0.297262262372;
    tmp_msg_0.safe_dist = 0.636952404872;
    tmp_msg_0.deconflict_offset = 0.242397838436;
    tmp_msg_0.accel_safe_margin = 0.199354790624;
    tmp_msg_0.accel_lim_x = 0.780528935472;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.233852701056);
    msg.setSource(55841U);
    msg.setSourceEntity(215U);
    msg.setDestination(15775U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.36374860695;
    msg.lon = 0.12290209766;
    msg.eta = 1332361728U;
    msg.duration = 660U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.396305090054);
    msg.setSource(58880U);
    msg.setSourceEntity(225U);
    msg.setDestination(11466U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.486340054589;
    msg.lon = 0.177384719134;
    msg.eta = 3212880283U;
    msg.duration = 22901U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.701534017382);
    msg.setSource(46667U);
    msg.setSourceEntity(104U);
    msg.setDestination(56862U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.519026971057;
    msg.lon = 0.0520235031552;
    msg.eta = 901203192U;
    msg.duration = 45962U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.529606607932);
    msg.setSource(2951U);
    msg.setSourceEntity(31U);
    msg.setDestination(52822U);
    msg.setDestinationEntity(179U);
    msg.plan_id = 31460U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.73385321343;
    tmp_msg_0.lon = 0.781973511644;
    tmp_msg_0.eta = 3543754120U;
    tmp_msg_0.duration = 12549U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.525908785568);
    msg.setSource(65246U);
    msg.setSourceEntity(251U);
    msg.setDestination(52641U);
    msg.setDestinationEntity(115U);
    msg.plan_id = 39999U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.134587350069;
    tmp_msg_0.lon = 0.601036758986;
    tmp_msg_0.eta = 1205746941U;
    tmp_msg_0.duration = 26164U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.489184639599);
    msg.setSource(39323U);
    msg.setSourceEntity(89U);
    msg.setDestination(53596U);
    msg.setDestinationEntity(185U);
    msg.plan_id = 21677U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.829760855119;
    tmp_msg_0.lon = 0.662122250773;
    tmp_msg_0.eta = 2749015965U;
    tmp_msg_0.duration = 4499U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.919827534154);
    msg.setSource(44894U);
    msg.setSourceEntity(212U);
    msg.setDestination(46310U);
    msg.setDestinationEntity(247U);
    msg.type = 214U;
    msg.command = 28U;
    msg.settings.assign("FATWWTPCSWVFRUVRPEFMLOCRPUCYWTTDVAJBFQZBBJYGHFROPYKDIOGCOYIWMXPDJYMBCKTXAULIJQVOJPHSOMJHQZWUUMZMLWNBACFQOMQRUISL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5676U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.688798325923;
    tmp_tmp_msg_0_0.lon = 0.0838040438183;
    tmp_tmp_msg_0_0.eta = 1565475205U;
    tmp_tmp_msg_0_0.duration = 7203U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ONEGFVNVJUTOQCSXFVRMTSWXHCMEJZCXGZQXWHLHAPWVCWIPADBPQPVRBKAKHZFTUPKWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.528110545154);
    msg.setSource(58018U);
    msg.setSourceEntity(175U);
    msg.setDestination(13602U);
    msg.setDestinationEntity(42U);
    msg.type = 221U;
    msg.command = 86U;
    msg.settings.assign("XMUTCRRUBDYEMAUSUHSKWPFAYXXWVKLHCKZJPEGMYXTHQV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53315U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.750645500039;
    tmp_tmp_msg_0_0.lon = 0.013213054163;
    tmp_tmp_msg_0_0.eta = 1956332590U;
    tmp_tmp_msg_0_0.duration = 27408U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NXVLYMDLQOVMKYRYJXWGELCIVOUDMDRCWBHISXBPTBGTXRYEODJQSNHMEBRTFXLYIHAFMWTVGMUAOZEQCPKXCAEHKZSSCDYRFTOXXXOWNSFDYUHQPSNOIMTLUWFRHFBRLMKKQTAVNNDAHVYGJJPNUBPPYFSZVHZCVKZLDKWWAAUQPGIQJNLJRPUZZTFEEEBBUSRKIRKGJVWANVLTDJOIIUBDKEQLEOIGGBYWCXMMATHQOIJSFZCWGHCJSQGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.62032450601);
    msg.setSource(44395U);
    msg.setSourceEntity(160U);
    msg.setDestination(16817U);
    msg.setDestinationEntity(225U);
    msg.type = 61U;
    msg.command = 251U;
    msg.settings.assign("JUGNODWRTPLIUINSZHHGGXWISBCMEYDFLZTWDGWSCKFCKNPRVPMBQSYBQKVZAEDGQPABWOJYRTOXIZLAFKKFHTUMGNPVTGMLLXDJHNTCBCFDLJUSBRMDORUVWEJOWQUVXYGNCPUGPOEUBMWJWAQRNQJEGOXSEHXSEIKONIBQAPCCIKIYLCEOBADHSSUABYHDYJVFRVZURZHRFFXFXKM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 61669U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EWNIRCEBGCMUXKVFCLYKUDTLAIHONQNIUZOMOZJHMGPCGQLQPVNZFXGKMREPFTZOIYXKZMSWNWBNIFWWCPPEHEMDDHFTQRBPZRAMTRDRHSXYEDQJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.603486155076);
    msg.setSource(52585U);
    msg.setSourceEntity(179U);
    msg.setDestination(7583U);
    msg.setDestinationEntity(114U);
    msg.state = 239U;
    msg.plan_id = 43751U;
    msg.wpt_id = 50U;
    msg.settings_chk = 10613U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.0737367215643);
    msg.setSource(65300U);
    msg.setSourceEntity(202U);
    msg.setDestination(19286U);
    msg.setDestinationEntity(145U);
    msg.state = 26U;
    msg.plan_id = 54580U;
    msg.wpt_id = 254U;
    msg.settings_chk = 23521U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.579847071541);
    msg.setSource(45426U);
    msg.setSourceEntity(44U);
    msg.setDestination(44481U);
    msg.setDestinationEntity(168U);
    msg.state = 46U;
    msg.plan_id = 38010U;
    msg.wpt_id = 245U;
    msg.settings_chk = 13374U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.341444294198);
    msg.setSource(12330U);
    msg.setSourceEntity(25U);
    msg.setDestination(34189U);
    msg.setDestinationEntity(117U);
    msg.uid = 240U;
    msg.frag_number = 33U;
    msg.num_frags = 79U;
    const char tmp_msg_0[] = {-89, 95, 58, -60, 55, -39, 48, -96, -64, 27, -8, 75, 86, 5, 7, 43, -98, 104, -109, 46, -90, 123, -113, -29, 46, -18, -66, 106, -58, -123, 3, -110, 110, -15, -66, -89, -41, -36, 11, 88, -66, 83, -89, -126, 123, -9, -20, 73, 101, -110, 11, 108, 44, 35, -74, 7, 66, 3, -99, -13, 79, 92, -6, -115, -97, -77, -92, 102, 7, 79, 124, 99, 49, 22, -18, 126, -77, -16, 56, -100, -124, 39, -112, 89, 39, 70, -52, -19, 113, -66, 73, 46, 97, 109, 5, -12, -34, -118, -108, -89, -80, 91, 48, -5, 26, -58, 124, -56, -27, -62, -82, 112, 96, -104, 65, -97, -31, 81, 100, 6, -22, 67, -76, -39, -64, 87, 76, 115, 54, 92, 16, 39, 76, 32, -34, -5, -128, 109, -94, 64, 86, 39, 73, -57, -33, 6, 66, -38, -29, -60, -52, 28, -63, 58, 71, 14, -26, -4, -65, -63, 14, 51, 54, -44, -20, -5, 75, -9, -128, -95, -100, 3, 104, 91, -68, 100, 109, 122, -44, -114, 53, -85, -90, 90, 73, -31, -103, -65, -63, -67, 72, -97, -1, -52, 94, 1, -97, 94, -32, -95, -25, 68, 5, -54, -40, -69, 18, 99, -91, 82, 0, 30, -109, 114, -105, -71, -89, -52, -2, -19, 59, 50, -103, -102, -103, -51, 109, 56, -115, -85, 11, 57, -123, -74, 5, -89, 126, -105, 8, -51, 117, -64, 27, -40, 108, 24, 60, -74, 0, 30};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.46237143985);
    msg.setSource(34581U);
    msg.setSourceEntity(158U);
    msg.setDestination(6695U);
    msg.setDestinationEntity(164U);
    msg.uid = 19U;
    msg.frag_number = 57U;
    msg.num_frags = 234U;
    const char tmp_msg_0[] = {-120, -77, -68, -121, 62, -103, -26, 86, 103, -117, 20, -48, 126, -126, -90, 84, 2, 84, -61, 77, -84, -114, 27, 102, -54, -65, 89, -79, 71, 67, 118, 122, -107, 71, -80, -21, -41, 120, -51, -32, 84, 77, -107, 63, 46, 90, 56, 90, 1, 51, -103, -86, -111, -61, -126, -32, -10, 82, 106, -70, 77, 112, -37, -12, -27, -85, 49, 100, -65, 47, -85, 28, 52, 55, 68, -108, -46, -72, -70, 120, -51, -30, 93, -15, 7, 62, -122, -86, 46, 51, 42, -19, -70, 27, -10, -124, -111, 10, -102, 57, -3, 41, -15, -120};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.761677183961);
    msg.setSource(7182U);
    msg.setSourceEntity(174U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(228U);
    msg.uid = 144U;
    msg.frag_number = 227U;
    msg.num_frags = 162U;
    const char tmp_msg_0[] = {71, 15, 126, 35, 56, 7, 16, 58, 19, 6, 45, 77, 39, -69, -51, -53, -103, -77, 76, 74, 83, 28, -113, -31, -125, 48, 33, -1, 1, 75, 103, -76, -123, -60, 67, -70, 104, -83, -106, -18, 48, 83, -81, -127, 47, -109, 61, 119, -76, -101, 40, -55, -10, -85, 94, -57, -113, 122, 126, 121, 57, 21, -79, 19, -99, 0, 116, -115, 50, -64, 101, 59, 29, 24, 126, -128, 15, 12, 84, -39, 98, -110, -8};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.861154171908);
    msg.setSource(16347U);
    msg.setSourceEntity(12U);
    msg.setDestination(6012U);
    msg.setDestinationEntity(22U);
    msg.content_type.assign("WUGWTFBFPUQEPEOQEAKXWHFYXOHQSLPFWSSJNJRNDPUXRWPCVFDFSYROJEJMMKWLGQPNHZAZDCMSFCATJBBGBJHPIASIBVRCNUDRTKPEVRCCZMOKYJBWFTQQPQZLYVBXAIEOGJILQVTYZBQITAPYELREOVHWNCHUNUGZXNV");
    const char tmp_msg_0[] = {106, 92, -61, -48, 47, -77, 72, -58, -120, -1, 78, -5, 98, -23, 16, -13, 46, 80, -80, 49, -5, -15, 13, -17, -5, -26, 33, -96, -105, 22, 39, -42, -68, 73, -49, -73, 101, 56, 14, -92, 49, -73, -59, -23, 123, 118, 103, 78, 1, 46, 12, -127, 61, 66, 77, -92, -83, 115, 10, 51, -34, -12, 36, 23, -86, -59, -89, 40, 126, -33, -93, 53, 9, 123, -105, -32, -78, -92, 28, 11, 106, 15, 114, 30, 65, -62, 37, 19, -90, 38, -106, 87, 46, 27, 60, -125, 51, -1, -85, 64, 74, 67, -127, -30, 66, 112, 84, 63, -8, -108, -46, -3, 78, 42, -82, 122, -20, -84, 125, -98, 19, 56, 51, 122, -102, -44, -67, 61, 26, -69, -90, 8, 96, -8, -66, -95, 1, 46, -53, 41, 75, 1, 125, -1, -93, 25, -73, -70, 95, 92, -74, 91, 103, -30, -114, 121, -18, 47, 111, -128, -10, 83, -33, 99, 7, 30, -51, -65, -80, 24, 85, -119, -4, -24, -76, -127, -110, -102, -5, -71, -1, 43, 45, 9, -100, 90, -125, -35, -7, 40, 44, 50, -108, -89};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.41685994989);
    msg.setSource(54014U);
    msg.setSourceEntity(41U);
    msg.setDestination(44067U);
    msg.setDestinationEntity(17U);
    msg.content_type.assign("XJRNIVPQGXJLONUUDKRVINGCVVQMPNBDVSYWARWNXIHJRETUDIHBTCEAZMK");
    const char tmp_msg_0[] = {97, 106, 123, -44, -2, -115, 15, 119, 105, -55, -108, 42, 85, 11, -6, 45, -52, -42, -117, 104, 87, 74, -98, -72, -84, 50, 92, 48, -82, -32, -119, -122, 80, -99, -8, 6, 81, 116, -122, -17, -72, -39, -30, -22, 62, -112, 109, -24, 40, 53, -7, -55, -86, 44, 123, -66, 60, 24, -94, 109, -55, -90, -73, -82, 78, -32, -45, -8, 96, -84, -53, -23, -107, 13, -97, -88, -43, -31, -119, 39, 33, 6, -86, -82, 75, -1, 24, 38, 60, 94, 92, -17, 67, -98, -33, -24, -118, 72, 89, 109, -128, 53, 85, -125, -115, -37, -36, 82, -18, -11, 2, 86, -30, -3, -65, -50, -125, -36, 98, 77, 6, 37, 67, -16, -95, 36, -113, -22, 103, -105, -126, -90, 68, 30, 103, 67, 28, 45, -10, -16, 89, 16, 55, -29, -6, 105, -99, 4, 98, -120, -31, -61, 1, 79, -4, 10, -20, 41, 3, -18, 117, -12, -56, 90, -83, 18, 62, -22, -11, 117, -97, -85, 49, 105, 92, 97, -97, 95, 68, -114, 44, -128, 46, -62, -42, -116, 58, -90, 111, 95, -123, 0, -18, -33, 120, 29, -91, -53, 50, 11, 20};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.512684771197);
    msg.setSource(14406U);
    msg.setSourceEntity(66U);
    msg.setDestination(44398U);
    msg.setDestinationEntity(35U);
    msg.content_type.assign("GDZRHQWCXOISQMTUUGNOMEHOYLGQAPSCVLHHLBPCXDJBUSGPEXAFLDVLQPONYQNBIVZAJMROEFJTUDGKBTNG");
    const char tmp_msg_0[] = {33, -39, 46, -27, 114, 19, -87, 83, 12, 5, 118, -108, 29, -4, -61, 103, 16, -71, -125, 31, -114, 102, -9, 82, -37, -31, 114, 124, -114, -63, 43, -54, 20, -109, 126, -104, -25, 53, -46, 91, -60, -109, -2, -115, -35, -76, -19, 47, 73, -103, -84, -87, 74, -33, 34, -119, 48, -98, -59, -88, -98, 51, -125, 39, 59, 21, -35, -64, 64, -6, 62, -50, -37, -127, -124, -117, -77, 89, 14, 69, -43, 92, -19, 115, -113, 72, 60, -125, 36, 88, -111, -44, 124, -42, 50, 120, 11, -14, -12, 9, -112, -38, 96, 121, 85, 75, -12, -72, 105, 12, -21, -11, -109, 81, 102, -38, 42, 95, -41, -9, -111, -108};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.00692614745474);
    msg.setSource(28894U);
    msg.setSourceEntity(206U);
    msg.setDestination(25225U);
    msg.setDestinationEntity(214U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.787248028473);
    msg.setSource(60803U);
    msg.setSourceEntity(135U);
    msg.setDestination(52965U);
    msg.setDestinationEntity(100U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.0803145338901);
    msg.setSource(9466U);
    msg.setSourceEntity(248U);
    msg.setDestination(41806U);
    msg.setDestinationEntity(93U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.651037722011);
    msg.setSource(607U);
    msg.setSourceEntity(145U);
    msg.setDestination(60265U);
    msg.setDestinationEntity(20U);
    msg.target = 42759U;
    msg.bearing = 0.512437840846;
    msg.elevation = 0.134210955718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.194222090295);
    msg.setSource(49020U);
    msg.setSourceEntity(91U);
    msg.setDestination(56833U);
    msg.setDestinationEntity(51U);
    msg.target = 16090U;
    msg.bearing = 0.333359260678;
    msg.elevation = 0.132049898645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.306362793336);
    msg.setSource(48752U);
    msg.setSourceEntity(101U);
    msg.setDestination(1637U);
    msg.setDestinationEntity(152U);
    msg.target = 13533U;
    msg.bearing = 0.40724755365;
    msg.elevation = 0.340514286961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.371315447555);
    msg.setSource(54740U);
    msg.setSourceEntity(179U);
    msg.setDestination(17803U);
    msg.setDestinationEntity(150U);
    msg.target = 65097U;
    msg.x = 0.667965482324;
    msg.y = 0.76732438157;
    msg.z = 0.0735598327216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.947827826093);
    msg.setSource(63394U);
    msg.setSourceEntity(26U);
    msg.setDestination(61768U);
    msg.setDestinationEntity(108U);
    msg.target = 12355U;
    msg.x = 0.677524903081;
    msg.y = 0.229609399489;
    msg.z = 0.517761665981;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.246092164351);
    msg.setSource(11989U);
    msg.setSourceEntity(165U);
    msg.setDestination(48187U);
    msg.setDestinationEntity(167U);
    msg.target = 18507U;
    msg.x = 0.204971459125;
    msg.y = 0.43740744862;
    msg.z = 0.262384852851;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.0310740384896);
    msg.setSource(52368U);
    msg.setSourceEntity(51U);
    msg.setDestination(2358U);
    msg.setDestinationEntity(249U);
    msg.target = 13148U;
    msg.lat = 0.876396205802;
    msg.lon = 0.546260477162;
    msg.z_units = 151U;
    msg.z = 0.152946058486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.242400134603);
    msg.setSource(60370U);
    msg.setSourceEntity(132U);
    msg.setDestination(35635U);
    msg.setDestinationEntity(97U);
    msg.target = 2744U;
    msg.lat = 0.388668187048;
    msg.lon = 0.354732337017;
    msg.z_units = 19U;
    msg.z = 0.035898574742;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.588995650678);
    msg.setSource(30856U);
    msg.setSourceEntity(106U);
    msg.setDestination(44596U);
    msg.setDestinationEntity(82U);
    msg.target = 20754U;
    msg.lat = 0.00469736230231;
    msg.lon = 0.722901913935;
    msg.z_units = 165U;
    msg.z = 0.0685059240377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.628493460032);
    msg.setSource(7768U);
    msg.setSourceEntity(66U);
    msg.setDestination(59907U);
    msg.setDestinationEntity(89U);
    msg.locale.assign("VMRCFYXZHHOBVOLRGXARUCKMKTTJIUCSMWSZHFYBMAEISQIQOMAXAZFIHBQOUWMEDVFZJENEYKHFPNYAZLPTDRYHIFWGQYJUSWCJLGVDPUPETGJAPVBSWGPOXHLIPGKTGOALTUJVWNBDOIUTEMTBVLAQACYOFS");
    const char tmp_msg_0[] = {77, -28, -47, -73, 97, 40, 112, -76, 56, 109, -85, -100, 54, 12, 0, -61, -109, 62, -8, 76, -68, -70, 61, 109, -56, -101, -62, 41, -112, 3, 83, 27, -104, -117, -57, -82, -49, 121, -105, -98, 93, 42, 50, 19, -67, 100, -61, 50, 58, -77, 86, -92, 83, 96, -63, 53, 71, -92, 111, -100, 44, 80, 24, -112, 16, -45, 74, 89, -51, 101, -116, 95, -52, -82, 102, 76, 40, -119, 68, -121, -89, 99, 82, 58, -34, -8, 123, -114, 1, 126, -78, 88, -47, -106, -88, 51, 89, 12, -125, 45, -115, 29, 76, 44, -2, -18, -127, -107};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.21720624304);
    msg.setSource(19073U);
    msg.setSourceEntity(83U);
    msg.setDestination(32093U);
    msg.setDestinationEntity(174U);
    msg.locale.assign("IMZYLTEMGAOWQYVNHNWKWMDZYNRHFLNGGOOIHYTBSSCCDKMHRQYAZVLACEFZGDTHWQJSCLDBMQCXILZJYUJPOBFFAPBFNORLAXWPKTPRTQXOAIBVAVOSRTXPBYTHCZQCUGBEPTMDQHXYDRUPNSLCHHAJFNDGVYQZCYMIKUXBSXTVGNOXLJIOXPUSOEJSMUAUEIRUKPNLXDBKNWLDEFEGKTJWJIWPVQFJDMUMKFRASEIJ");
    const char tmp_msg_0[] = {-70, -73, -60, -51, -88, 11, -4, 85, 21, 58, -116, 123, 82, -71, 119, -8, -74, 34, 77, 35, 16, 4, 57, -73, 99, -97, -39, -10, -96, 53, 110, -6, 40, 52, -15, -128, -59, 3, 63, -94, -11, -19, 32, -23, -90, 85, 74, -94, -61, -27, 103, 124, -85, 40, -55, 45, -73, -104, -118, 24, 78, -115, 39, -111, -77, 28, 104, -29, -46, -126, 85, 2, 110, 63, -1, 75, 109, -73, -51, -93, -71, 39, -95, 110, -110, 79, 36, 61, 48, 12, -114, -71, -110, -87, 64, -82, 81, 10, 76, -73, 86, 10, 0, -65, -119, -102, 94, 106, -52, -115, -2, 91, 36, 33, 23, -102, -128, 54, 84, -87, -8, -81};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.525559137124);
    msg.setSource(48074U);
    msg.setSourceEntity(187U);
    msg.setDestination(11899U);
    msg.setDestinationEntity(113U);
    msg.locale.assign("JDBPYJYVBYSQEZIOHVLRSMZVBTJQJGLHLESFFYOMWPGXNOFJTKBCINYTUKVVODNHTVEFCDTLLEKDQXAHPJYGJZXIKRCZNLOUWUKJGWOXILSPIQZLAQMGIQVPMRPWHWUDNYKCBRNMRZOYNXFSDUDHSIYATCFMPKZCXWBFOPCYIVGKARBMUEU");
    const char tmp_msg_0[] = {51, -104, -107, 17, -71, -38, -110, 38, 37, -33, -62, -60, -27, 25, 61, 108, 113, -69, -60, 82, -5, 92, -37, -127, -121, -70, 94, -50, -87, 108, 94, -115, -76, 14, 23, 103, 23, 31, 107, -44, -75, 111, -83, 80, 20, 118, -105, 39, -68, 82, 62, -27, 98, -39, -40, -102, 81, 107, -37, 44, -113, -68, -122, 86, 122, 88, -104, 90, -70, 95, 27, -32, 102, -42, -100, -96, 107, -65, 63, 71, 94, -71, 92, -55, -122, -71, 7, 41, -21, -68, -1, -34, -42, -65, -42, 28, 38, -95, -20, -4, 123, -102, 44, 22, 114, 79, 19, 28, -124, 25, 89, -26, -20, -68, -41, -55, -35, 111, -127, 123, -94, -87, -75, 58, -29, -27, -117, 25, -55, -57, 60, 28, -72, -54, 14, 77, -28, 111, 123, -92, -23, -38, -47, 107, -31, 46, 82, 64, 57, 20, -104, -105, -16, 55, 18, -75, 2, 90, -41, -4, 74, 24, 124, 15, 5, -47, -109, 119, 65, 125, -3, -56, 89, 80, 103, 18, -113, 87, 27, -86, 79, 40, -41, -62, 36, 56, -41, -93, 8, -5, -82, -106, -93, 13, -10, 118, -53, 42, 114, -21, 116, -109, 86, -83, 58, 101, 43, -116, -78, 15, 95, 113, 64, 9, 63, -118, 112, 13};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.217036330733);
    msg.setSource(3284U);
    msg.setSourceEntity(199U);
    msg.setDestination(38940U);
    msg.setDestinationEntity(24U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.961379467368);
    msg.setSource(56604U);
    msg.setSourceEntity(8U);
    msg.setDestination(54410U);
    msg.setDestinationEntity(251U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.306786057068);
    msg.setSource(60328U);
    msg.setSourceEntity(250U);
    msg.setDestination(2780U);
    msg.setDestinationEntity(15U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.997463135902);
    msg.setSource(20158U);
    msg.setSourceEntity(120U);
    msg.setDestination(7124U);
    msg.setDestinationEntity(212U);
    msg.camid = 183U;
    msg.x = 54960U;
    msg.y = 24963U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.127577230217);
    msg.setSource(64818U);
    msg.setSourceEntity(25U);
    msg.setDestination(22723U);
    msg.setDestinationEntity(198U);
    msg.camid = 60U;
    msg.x = 62594U;
    msg.y = 61048U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.830698326511);
    msg.setSource(13774U);
    msg.setSourceEntity(82U);
    msg.setDestination(35591U);
    msg.setDestinationEntity(89U);
    msg.camid = 201U;
    msg.x = 9149U;
    msg.y = 48423U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.968097413553);
    msg.setSource(4384U);
    msg.setSourceEntity(97U);
    msg.setDestination(37840U);
    msg.setDestinationEntity(106U);
    msg.camid = 34U;
    msg.x = 25831U;
    msg.y = 3451U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.432759738744);
    msg.setSource(5888U);
    msg.setSourceEntity(33U);
    msg.setDestination(52798U);
    msg.setDestinationEntity(0U);
    msg.camid = 45U;
    msg.x = 60179U;
    msg.y = 11311U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.175878667279);
    msg.setSource(9216U);
    msg.setSourceEntity(37U);
    msg.setDestination(30135U);
    msg.setDestinationEntity(143U);
    msg.camid = 242U;
    msg.x = 18555U;
    msg.y = 52723U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.685326105294);
    msg.setSource(44907U);
    msg.setSourceEntity(173U);
    msg.setDestination(36276U);
    msg.setDestinationEntity(46U);
    msg.tracking = 126U;
    msg.lat = 0.464331490702;
    msg.lon = 0.0808621069394;
    msg.x = 0.700046467086;
    msg.y = 0.545057763959;
    msg.z = 0.63057458923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.231198668625);
    msg.setSource(7812U);
    msg.setSourceEntity(181U);
    msg.setDestination(54714U);
    msg.setDestinationEntity(121U);
    msg.tracking = 51U;
    msg.lat = 0.344062888192;
    msg.lon = 0.472725082222;
    msg.x = 0.0996477466245;
    msg.y = 0.0290248215731;
    msg.z = 0.918884496498;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.85387794431);
    msg.setSource(64046U);
    msg.setSourceEntity(72U);
    msg.setDestination(59707U);
    msg.setDestinationEntity(224U);
    msg.tracking = 32U;
    msg.lat = 0.349215732615;
    msg.lon = 0.562296708907;
    msg.x = 0.971089056229;
    msg.y = 0.0426461480623;
    msg.z = 0.746362467927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.553266498128);
    msg.setSource(58068U);
    msg.setSourceEntity(107U);
    msg.setDestination(21476U);
    msg.setDestinationEntity(123U);
    msg.target.assign("YTHJMYATLIBQNMGBJLUGRWSISFDKKGGZDFHRELPZLOLOPIERITRUUNZDQLVAREWDKXSDHOBDZBCNXPGUSWCHRMXXDHVFSFWVVFBRQLEO");
    msg.lbearing = 0.469171090724;
    msg.lelevation = 0.779341919814;
    msg.bearing = 0.598992810107;
    msg.elevation = 0.482843657564;
    msg.phi = 0.903243587277;
    msg.theta = 0.40926859026;
    msg.psi = 0.758340204821;
    msg.accuracy = 0.470456415244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.895757381125);
    msg.setSource(57466U);
    msg.setSourceEntity(231U);
    msg.setDestination(21190U);
    msg.setDestinationEntity(207U);
    msg.target.assign("MCNGZSDIURGEVAPALJZNVJVIWIEWKAQLJNLZNEUGZTMOKTKCSGRHCXDJHOWQHQCIIYEZRKNBAHBLVXUYXBIVTUFOGEMKQSPXYXWTMLTTSOTSHCFARZLEYNBFFVJMABANFQLPMCCYLBKRSFIEMXFQXPPBEUSJDVRQ");
    msg.lbearing = 0.534423983008;
    msg.lelevation = 0.860871928607;
    msg.bearing = 0.994326439721;
    msg.elevation = 0.373762931744;
    msg.phi = 0.513104378037;
    msg.theta = 0.0885105731737;
    msg.psi = 0.0961708018862;
    msg.accuracy = 0.50369846154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.402423274862);
    msg.setSource(11009U);
    msg.setSourceEntity(123U);
    msg.setDestination(56948U);
    msg.setDestinationEntity(49U);
    msg.target.assign("IKMCFIDHLMTQZZRNMXMLAGJGJQOCUDSYREXKTPKBSZEQSVABSODDOIGSUVSQOQJERJYTZLXBYNOXZWTLIKGWRGKQVDNUJECTTCAOHYYBXSNGCQWAQPLZNCRSXETNBJLEGLYBFQWVFCVIIRFMHFPUY");
    msg.lbearing = 0.498707453138;
    msg.lelevation = 0.0118910425547;
    msg.bearing = 0.436285997141;
    msg.elevation = 0.840453942723;
    msg.phi = 0.320406493225;
    msg.theta = 0.859497685198;
    msg.psi = 0.155264470268;
    msg.accuracy = 0.116064569305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.99792947825);
    msg.setSource(30687U);
    msg.setSourceEntity(116U);
    msg.setDestination(17183U);
    msg.setDestinationEntity(90U);
    msg.target.assign("FJIIDSSQWBOVPVAYMEXTDBUJXIYFPPPGPAXLOCTBBGFXWSARQORUKJPGNQMULLQKZZMBZXQDMGVCZLYCDGAYIBWKEUTTHXLDYCTHXRJAQVNNRVDVAMKODOGUSYWMADUVSCNYNGEFMECJMWQZAWKIJRENWLRGTMBOQWOEAZHHIBRHFIUB");
    msg.x = 0.875408933626;
    msg.y = 0.983210945051;
    msg.z = 0.891458271543;
    msg.n = 0.0757980039497;
    msg.e = 0.48339086515;
    msg.d = 0.618666261431;
    msg.phi = 0.272688615665;
    msg.theta = 0.336960936565;
    msg.psi = 0.682508236913;
    msg.accuracy = 0.622299162452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.0787181903301);
    msg.setSource(63750U);
    msg.setSourceEntity(88U);
    msg.setDestination(36624U);
    msg.setDestinationEntity(84U);
    msg.target.assign("VVXYOOQBNFWNTBMYPMDMZEOGIVSJELWNUVMYUIRDAQXTKTNRNWHUJGPDXDEQYKDHCFQWXIFFBBTQVP");
    msg.x = 0.569585610173;
    msg.y = 0.199212989108;
    msg.z = 0.418764437466;
    msg.n = 0.040553375989;
    msg.e = 0.573918090236;
    msg.d = 0.443423738918;
    msg.phi = 0.581464692797;
    msg.theta = 0.265001989276;
    msg.psi = 0.359359881989;
    msg.accuracy = 0.465664285301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.223277492175);
    msg.setSource(37341U);
    msg.setSourceEntity(124U);
    msg.setDestination(38102U);
    msg.setDestinationEntity(210U);
    msg.target.assign("HLLDFOVCQDGRISBZYHCDWXHAXNAXLCFOTHEYWTUYVPLSZKQAEXPFHKHQMTYIGBWS");
    msg.x = 0.531971029974;
    msg.y = 0.56028789479;
    msg.z = 0.949286922988;
    msg.n = 0.965488062028;
    msg.e = 0.658548275282;
    msg.d = 0.629141805136;
    msg.phi = 0.590565525306;
    msg.theta = 0.822900653958;
    msg.psi = 0.767116485811;
    msg.accuracy = 0.48140516561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.314251122055);
    msg.setSource(2719U);
    msg.setSourceEntity(199U);
    msg.setDestination(59683U);
    msg.setDestinationEntity(25U);
    msg.target.assign("JPUCHMXTVUFTVVODKYUGQMRSZGPXEAVAJWWSCERYCGKQFRBPNSKSHILYSGVBXQQCLSIJNLAYFIQHNPXYFHPQFXCPKUTB");
    msg.lat = 0.393761990081;
    msg.lon = 0.565295738771;
    msg.z_units = 204U;
    msg.z = 0.672808873535;
    msg.accuracy = 0.720437741663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.827168611393);
    msg.setSource(9919U);
    msg.setSourceEntity(100U);
    msg.setDestination(2286U);
    msg.setDestinationEntity(58U);
    msg.target.assign("PMRHOFKZVSNGTASXLDWJRURCRVVWISEOJPKPHDNXMBTMXWAXNNCJYETHZPIBSUTIMHZFDKLOVBFYRZYSDMBPNYDLTAGABVFGFQCZTEQIHDSQWC");
    msg.lat = 0.533952447014;
    msg.lon = 0.87182487733;
    msg.z_units = 217U;
    msg.z = 0.670361755461;
    msg.accuracy = 0.798083992501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.309441075864);
    msg.setSource(32485U);
    msg.setSourceEntity(30U);
    msg.setDestination(12397U);
    msg.setDestinationEntity(4U);
    msg.target.assign("HDAKUBDBAOAEYWFMOVVFMYHANALNPPGOCHCHRILHHAQQGITBQRERRJJVAVGQECIMZEAEPXKFZPPCDDZWFTMOJYMISSOWKJNC");
    msg.lat = 0.432447534603;
    msg.lon = 0.73762003584;
    msg.z_units = 72U;
    msg.z = 0.641534487263;
    msg.accuracy = 0.160702390644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.359671306393);
    msg.setSource(1897U);
    msg.setSourceEntity(57U);
    msg.setDestination(8590U);
    msg.setDestinationEntity(186U);
    msg.name.assign("YZPMBNDYNJAFSOOGNXOTUIPJGRPWZEQM");
    msg.lat = 0.444105854636;
    msg.lon = 0.6542165983;
    msg.z = 0.198977571041;
    msg.z_units = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.452972456106);
    msg.setSource(23576U);
    msg.setSourceEntity(1U);
    msg.setDestination(23473U);
    msg.setDestinationEntity(147U);
    msg.name.assign("BGCUNMVVFZJQDSZINYXTHITRVDOGAZNFNFZYHRXWPIFVEHMMIUEYEQWPGUDYSNEKBVFXYWHYSVJPZQKCUOLIAZXUNBQAJOKGRKTSPXGICETTYIECDWOCGPEPQNUFKXRDCKQCOLVAADLVQHQJLKGFTBLOOBWICOKAEATGURNUHWNYKQMVCXSMWSZCTRTXJHJPAXSBAWFBVILRSBPRHYFWPBJDNEMRUPLKSEGQZUHLY");
    msg.lat = 0.105804729402;
    msg.lon = 0.524519204447;
    msg.z = 0.361129274773;
    msg.z_units = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.363706739793);
    msg.setSource(9371U);
    msg.setSourceEntity(109U);
    msg.setDestination(19634U);
    msg.setDestinationEntity(184U);
    msg.name.assign("OZJTJDFYUMEQYOAVKVXFXNRUFYQSZAMXIQWGMYPDQQHAXBPHHEXPSUFHPICWUZEJODF");
    msg.lat = 0.83366743101;
    msg.lon = 0.130053665119;
    msg.z = 0.486919107227;
    msg.z_units = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.231107521758);
    msg.setSource(19241U);
    msg.setSourceEntity(66U);
    msg.setDestination(36215U);
    msg.setDestinationEntity(70U);
    msg.op = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.0151935515439);
    msg.setSource(13129U);
    msg.setSourceEntity(248U);
    msg.setDestination(17965U);
    msg.setDestinationEntity(171U);
    msg.op = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.810928312608);
    msg.setSource(42152U);
    msg.setSourceEntity(188U);
    msg.setDestination(2482U);
    msg.setDestinationEntity(138U);
    msg.op = 59U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("LROVAPHHIXTZPHUBNBSKWAOOJUPZKVQRHFYIEKNQGZUCQYLWLLGTPOIWEEIBNQWFB");
    tmp_msg_0.lat = 0.285988913878;
    tmp_msg_0.lon = 0.139121686622;
    tmp_msg_0.z = 0.502136872316;
    tmp_msg_0.z_units = 150U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.990742871751);
    msg.setSource(26451U);
    msg.setSourceEntity(90U);
    msg.setDestination(124U);
    msg.setDestinationEntity(186U);
    msg.value = 0.202236662944;
    msg.type = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.370204380649);
    msg.setSource(24616U);
    msg.setSourceEntity(157U);
    msg.setDestination(16791U);
    msg.setDestinationEntity(234U);
    msg.value = 0.478807806093;
    msg.type = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.764746296452);
    msg.setSource(11645U);
    msg.setSourceEntity(190U);
    msg.setDestination(8307U);
    msg.setDestinationEntity(252U);
    msg.value = 0.978853580846;
    msg.type = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.800167754567);
    msg.setSource(30333U);
    msg.setSourceEntity(111U);
    msg.setDestination(28731U);
    msg.setDestinationEntity(204U);
    msg.value = 0.76037207776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.570949804842);
    msg.setSource(15614U);
    msg.setSourceEntity(83U);
    msg.setDestination(10351U);
    msg.setDestinationEntity(232U);
    msg.value = 0.0822008522592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.320946184985);
    msg.setSource(48512U);
    msg.setSourceEntity(28U);
    msg.setDestination(64923U);
    msg.setDestinationEntity(77U);
    msg.value = 0.493763768987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.292262767093);
    msg.setSource(4453U);
    msg.setSourceEntity(150U);
    msg.setDestination(30440U);
    msg.setDestinationEntity(38U);
    msg.timestamp_last_service = 0.573286296425;
    msg.time_next_service = 0.227110456928;
    msg.time_motor_next_service = 0.394728457725;
    msg.time_idle_ground = 0.73421672328;
    msg.time_idle_air = 0.23625689679;
    msg.time_idle_water = 0.954884436926;
    msg.time_idle_underwater = 0.845557523537;
    msg.time_idle_unknown = 0.575256454526;
    msg.time_motor_ground = 0.608167421717;
    msg.time_motor_air = 0.709809160272;
    msg.time_motor_water = 0.490580868059;
    msg.time_motor_underwater = 0.951811378876;
    msg.time_motor_unknown = 0.94314142823;
    msg.rpm_min = 12450;
    msg.rpm_max = -7485;
    msg.depth_max = 0.503769087293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.833960564547);
    msg.setSource(32895U);
    msg.setSourceEntity(189U);
    msg.setDestination(37686U);
    msg.setDestinationEntity(235U);
    msg.timestamp_last_service = 0.559117364216;
    msg.time_next_service = 0.0456691302858;
    msg.time_motor_next_service = 0.559321541581;
    msg.time_idle_ground = 0.278095203291;
    msg.time_idle_air = 0.18291061354;
    msg.time_idle_water = 0.784305069316;
    msg.time_idle_underwater = 0.818741448452;
    msg.time_idle_unknown = 0.899228319205;
    msg.time_motor_ground = 0.00714145246161;
    msg.time_motor_air = 0.0524232436943;
    msg.time_motor_water = 0.39628858101;
    msg.time_motor_underwater = 0.469989239234;
    msg.time_motor_unknown = 0.16865899001;
    msg.rpm_min = -8469;
    msg.rpm_max = -29167;
    msg.depth_max = 0.696853546936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.74846259559);
    msg.setSource(31228U);
    msg.setSourceEntity(253U);
    msg.setDestination(56216U);
    msg.setDestinationEntity(127U);
    msg.timestamp_last_service = 0.474053720273;
    msg.time_next_service = 0.0753471944269;
    msg.time_motor_next_service = 0.0458813970516;
    msg.time_idle_ground = 0.947215735166;
    msg.time_idle_air = 0.592676165057;
    msg.time_idle_water = 0.727760056893;
    msg.time_idle_underwater = 0.29456743851;
    msg.time_idle_unknown = 0.100754446706;
    msg.time_motor_ground = 0.126163922083;
    msg.time_motor_air = 0.761959295971;
    msg.time_motor_water = 0.880511647738;
    msg.time_motor_underwater = 0.763239580235;
    msg.time_motor_unknown = 0.117428606683;
    msg.rpm_min = 3998;
    msg.rpm_max = -2528;
    msg.depth_max = 0.835085614883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.0194225819646);
    msg.setSource(6136U);
    msg.setSourceEntity(72U);
    msg.setDestination(30140U);
    msg.setDestinationEntity(4U);
    msg.severity = 95U;
    msg.text.assign("JPVLEIWUOWELJMPRFAMBVWFIDGHUOOJGZYIPQSAUWRUMXLSGUAYKDXZUQRWFPMCGPHESEGNLXVQNBZNYMHTHZHEOLCHDCULCOLJKRLYWTLOSFTBABBCIQZYSQFTIASEDVJDPHGZRJOSYTHXYHJBWDCO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.16363342933);
    msg.setSource(56259U);
    msg.setSourceEntity(6U);
    msg.setDestination(37800U);
    msg.setDestinationEntity(10U);
    msg.severity = 52U;
    msg.text.assign("MAVVEUYCUXPPJEFKQTDOWUSLXXHCJYLRBIAEZNJNGCPMWPWATFFZRIYHNCSTPGOOZHMOKAUCNIMAQZYBJVTDMJPSFIRTJCLJNQVXEDKLERVCWGWTSUIXRSGBDMLYNTHYBQBXKDAYVBKQHICHBZFMGGRJSQUDFLZBXSROFHDEKGWYXHLJVILWPKVZUDTZRIT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.994184884435);
    msg.setSource(13940U);
    msg.setSourceEntity(193U);
    msg.setDestination(48225U);
    msg.setDestinationEntity(14U);
    msg.severity = 111U;
    msg.text.assign("FMQEYLHJGIDMKQNMJCLDNRMQMUGQWFWLJZDNVVMWZRBQQBUSUPJOLFGKOAUWFVWSBAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.244788168408);
    msg.setSource(61170U);
    msg.setSourceEntity(205U);
    msg.setDestination(11370U);
    msg.setDestinationEntity(179U);
    msg.channel = -103;
    msg.value = -406106777;
    msg.gain = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.291207725341);
    msg.setSource(64527U);
    msg.setSourceEntity(220U);
    msg.setDestination(43280U);
    msg.setDestinationEntity(250U);
    msg.channel = -62;
    msg.value = 1044050321;
    msg.gain = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.327880859554);
    msg.setSource(62571U);
    msg.setSourceEntity(201U);
    msg.setDestination(37843U);
    msg.setDestinationEntity(60U);
    msg.channel = 73;
    msg.value = -2094658545;
    msg.gain = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.514772046787);
    msg.setSource(39999U);
    msg.setSourceEntity(50U);
    msg.setDestination(7189U);
    msg.setDestinationEntity(6U);
    msg.ch01 = 0.717414707515;
    msg.ch02 = 0.845919221441;
    msg.ch03 = 0.689232259043;
    msg.ch04 = 0.525074574179;
    msg.ch05 = 0.0849770583711;
    msg.ch06 = 0.501798952633;
    msg.ch07 = 0.366124585454;
    msg.ch08 = 0.0486148930277;
    msg.ch09 = 0.171335647135;
    msg.ch10 = 0.990840784872;
    msg.ch11 = 0.594050636625;
    msg.ch12 = 0.222985358863;
    msg.ch13 = 0.716254329454;
    msg.ch14 = 0.64378908504;
    msg.ch15 = 0.768751204136;
    msg.ch16 = 0.264565772628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.550732598301);
    msg.setSource(57923U);
    msg.setSourceEntity(202U);
    msg.setDestination(36551U);
    msg.setDestinationEntity(51U);
    msg.ch01 = 0.430171456797;
    msg.ch02 = 0.0652958837795;
    msg.ch03 = 0.411053977309;
    msg.ch04 = 0.721933753327;
    msg.ch05 = 0.772771021805;
    msg.ch06 = 0.492914756164;
    msg.ch07 = 0.485106770011;
    msg.ch08 = 0.745562926814;
    msg.ch09 = 0.593797418311;
    msg.ch10 = 0.692200368289;
    msg.ch11 = 0.495525458719;
    msg.ch12 = 0.250273778206;
    msg.ch13 = 0.330351243848;
    msg.ch14 = 0.990844624634;
    msg.ch15 = 0.0854363869309;
    msg.ch16 = 0.967574293869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.187338983656);
    msg.setSource(6793U);
    msg.setSourceEntity(96U);
    msg.setDestination(17650U);
    msg.setDestinationEntity(249U);
    msg.ch01 = 0.676301188331;
    msg.ch02 = 0.249567609816;
    msg.ch03 = 0.123735574192;
    msg.ch04 = 0.882423266418;
    msg.ch05 = 0.063566747983;
    msg.ch06 = 0.51472748557;
    msg.ch07 = 0.551089916039;
    msg.ch08 = 0.0247588547799;
    msg.ch09 = 0.189455356168;
    msg.ch10 = 0.849998715001;
    msg.ch11 = 0.470393451042;
    msg.ch12 = 0.248237747095;
    msg.ch13 = 0.984462386548;
    msg.ch14 = 0.00739812644083;
    msg.ch15 = 0.0711767417914;
    msg.ch16 = 0.205654961902;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.940187446814);
    msg.setSource(29137U);
    msg.setSourceEntity(245U);
    msg.setDestination(44684U);
    msg.setDestinationEntity(193U);
    msg.value = 0.628501426151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.202171862965);
    msg.setSource(34279U);
    msg.setSourceEntity(17U);
    msg.setDestination(4319U);
    msg.setDestinationEntity(119U);
    msg.value = 0.890298136329;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.0626496119295);
    msg.setSource(45685U);
    msg.setSourceEntity(181U);
    msg.setDestination(60899U);
    msg.setDestinationEntity(105U);
    msg.value = 0.588280703386;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.338568863921);
    msg.setSource(29377U);
    msg.setSourceEntity(55U);
    msg.setDestination(12161U);
    msg.setDestinationEntity(9U);
    msg.op = 120U;
    msg.lat = 0.0266027760296;
    msg.lon = 0.395541763895;
    msg.height = 0.0755941932438;
    msg.depth = 0.48097083597;
    msg.alt = 0.657890679102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.588388851602);
    msg.setSource(28693U);
    msg.setSourceEntity(95U);
    msg.setDestination(6858U);
    msg.setDestinationEntity(36U);
    msg.op = 8U;
    msg.lat = 0.69492318643;
    msg.lon = 0.708122842398;
    msg.height = 0.190393750485;
    msg.depth = 0.266085840709;
    msg.alt = 0.429693228878;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.247994917685);
    msg.setSource(41670U);
    msg.setSourceEntity(213U);
    msg.setDestination(14343U);
    msg.setDestinationEntity(181U);
    msg.op = 202U;
    msg.lat = 0.321240042755;
    msg.lon = 0.298366394097;
    msg.height = 0.606912017781;
    msg.depth = 0.706077138946;
    msg.alt = 0.782499696245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
