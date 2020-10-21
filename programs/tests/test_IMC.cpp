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
// IMC XML MD5: 7ba846541eecaf7a7244da3370b23673                            *
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
    msg.setTimeStamp(0.800134600385);
    msg.setSource(44439U);
    msg.setSourceEntity(69U);
    msg.setDestination(6665U);
    msg.setDestinationEntity(219U);
    msg.state = 126U;
    msg.flags = 197U;
    msg.description.assign("CDOPKGSJLNBONATHRJYALZGWJXFMPBFVQIDLQIOCANMIHDDBSEFZBEYQYDGXXYXFIAUTDMMEEXSDIZHYQDQUVRYBCCEZHJRAFQWEESYHCZRVJXEXBFNUDTMPRJUULFOKFPHSJSGOHHJKLWETUQLMWZWTPPSVVMACZAWRTFTGXXITY");

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
    msg.setTimeStamp(0.0498465137886);
    msg.setSource(34872U);
    msg.setSourceEntity(70U);
    msg.setDestination(1478U);
    msg.setDestinationEntity(198U);
    msg.state = 123U;
    msg.flags = 210U;
    msg.description.assign("EYXKAXLZYTNGJBCCCPCZJHTURDKYEINCDNMGHDFFLKZTHKEYLUKRXZLOSFYMFKWGXHPSWYTFYQHSPNVCGGPUOPLUOVDYKCSERSLZTRRNAAHBQELMUFFJYYKTQWSNQPCDOXRDBVWBVJMQMOUIGZAWSFWDVHERIALWERBHLJNQQNZTVPORTUFLPIUXADMTJHSONXOWGVWMCAGEZEVIMHGVQBPG");

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
    msg.setTimeStamp(0.531587262402);
    msg.setSource(7308U);
    msg.setSourceEntity(21U);
    msg.setDestination(60754U);
    msg.setDestinationEntity(218U);
    msg.state = 122U;
    msg.flags = 153U;
    msg.description.assign("SOGXEHEEZPTKHQJKBDFQMIWXVABCGAIKDCPSHBSMQUCHNXYMRNWODHTEIUWOWZGKXMWVLLSNYYFBDEDLVLMNFVJWSDGEYTFXXELJVQORLZRGZASPHUOFTGJEJPZNBZMTNRIIRWQMXREYZSAVFXYIZZXVLOTLAMKNCVMBIQTLRDKIOYJNKIIJJGWCJPRBFBQDWXZHCPPAFCQVKCYUEFOQKJGTDASHPA");

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
    msg.setTimeStamp(0.334910843441);
    msg.setSource(32937U);
    msg.setSourceEntity(162U);
    msg.setDestination(20943U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.464891900991);
    msg.setSource(13309U);
    msg.setSourceEntity(92U);
    msg.setDestination(52239U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.0536385523292);
    msg.setSource(8993U);
    msg.setSourceEntity(132U);
    msg.setDestination(47086U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.526058998573);
    msg.setSource(61261U);
    msg.setSourceEntity(113U);
    msg.setDestination(50767U);
    msg.setDestinationEntity(237U);
    msg.id = 139U;
    msg.label.assign("SDUGDBZAPCEJDPHJZTSDRMFDMESYXQRKXPFGFSBRXADJQYTOQVZCRCYCMPFKFWTCKRKXDNWLSJLJZWSNIFYAACLNNURZTDJEVOSRNMUAUVBLPEADOTOBEJTNCQMTYGRKKSUBEQUNHQXTPIEPGGMQZNWVPETGI");
    msg.component.assign("WESTNEAQVLVCNJIZWDUFHUUKMQPXZIHJRZLUHNMULHDGNOMVBDRIRBQVRZFMQDFWPYGMBRPLCAKZHXKUJTFKBQGICFRRVDMZMPOUFZXNJPIHRLOWGVXNLTETISCXLROOSKPBHEBYDCKDYAAOEYQAZWSNDQEOXUPYQPOHGHQCETDYSWNFKAYTZTUMYJGEAQWJTEBFLWWOFONJNGAVXCFGRVDUSVGTPMVKIYKCSCLILEKSSCIJJZIMGBJHBP");
    msg.act_time = 39559U;
    msg.deact_time = 63542U;

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
    msg.setTimeStamp(0.256713729207);
    msg.setSource(6092U);
    msg.setSourceEntity(171U);
    msg.setDestination(11983U);
    msg.setDestinationEntity(158U);
    msg.id = 246U;
    msg.label.assign("SKNMLNNJLPRBEDDVGPLAIPDMWQOZPVCKZUCYXWWMSYPIABHTSJCQWOEOOFCDLVVRPPVOGNCRUVXKLDKWAENCJESYESWEQL");
    msg.component.assign("UHTNZJVRREQUSPCMAKKNIDYTNXWBZZGVGMECKLEUXCMXNPBFIDQAN");
    msg.act_time = 8121U;
    msg.deact_time = 35U;

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
    msg.setTimeStamp(0.683886721831);
    msg.setSource(40956U);
    msg.setSourceEntity(44U);
    msg.setDestination(50496U);
    msg.setDestinationEntity(122U);
    msg.id = 78U;
    msg.label.assign("JQMSXEWBPNYHEECQJNKXXTAOEYUTMPWWCFLLTTSPGRVSAKSAWLOYVOGYZGWTOHQCZLWQFAPMAQUCF");
    msg.component.assign("MQXFLUEPSQZYCIOFVIJJNYAYRKWPFANVGNGHGTJAFXGNQKXUMHKBGYXCISZOOPPWRTTYVJMLVQPHYUYOSRPJXBIBBSIOEPHTODKXVWOAEKUTIDWDCAMGNBBDNLZRPUYHENOHJVDFZEXGVNIDLRSBUCMDWKUGCTMLHSFDEGKRIPVQFFSFTCCAQNZTQNJQVIEOWABKYCDLLZUAZMZDKEMUIBWGHRXLPXEXJZMMWLCHKSRVAURJSRLAFYTESQCW");
    msg.act_time = 42042U;
    msg.deact_time = 6024U;

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
    msg.setTimeStamp(0.846326257321);
    msg.setSource(63889U);
    msg.setSourceEntity(160U);
    msg.setDestination(23910U);
    msg.setDestinationEntity(145U);
    msg.id = 226U;

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
    msg.setTimeStamp(0.403226415648);
    msg.setSource(49236U);
    msg.setSourceEntity(201U);
    msg.setDestination(41514U);
    msg.setDestinationEntity(249U);
    msg.id = 106U;

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
    msg.setTimeStamp(0.800741620014);
    msg.setSource(18649U);
    msg.setSourceEntity(163U);
    msg.setDestination(35410U);
    msg.setDestinationEntity(196U);
    msg.id = 225U;

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
    msg.setTimeStamp(0.597445011905);
    msg.setSource(56728U);
    msg.setSourceEntity(63U);
    msg.setDestination(10119U);
    msg.setDestinationEntity(195U);
    msg.op = 246U;
    msg.list.assign("BMOWBMGPAQSGJGAHYPJHWEKZUEKVYFXUTGREVRCVVUTWFIQVYKPPEODKDOHJWOTMEJGMRXKOKBXSDHCQHTOQFBFNGJFR");

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
    msg.setTimeStamp(0.792518607898);
    msg.setSource(58474U);
    msg.setSourceEntity(177U);
    msg.setDestination(28755U);
    msg.setDestinationEntity(252U);
    msg.op = 187U;
    msg.list.assign("GGWVRGUUWBDUOIXQAOSDCZYQQCJQBAIARFSZWBQBJWNMFPOUZSPETKSJXNI");

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
    msg.setTimeStamp(0.51295807755);
    msg.setSource(15233U);
    msg.setSourceEntity(219U);
    msg.setDestination(8830U);
    msg.setDestinationEntity(132U);
    msg.op = 198U;
    msg.list.assign("ROXJKJKFZAELNPGUKCYOBGVJHDNHQXVVPSHGZTNTZETGYHDVPXGMKPAYUN");

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
    msg.setTimeStamp(0.410827589745);
    msg.setSource(35824U);
    msg.setSourceEntity(218U);
    msg.setDestination(3796U);
    msg.setDestinationEntity(214U);
    msg.value = 167U;

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
    msg.setTimeStamp(0.223334076774);
    msg.setSource(51835U);
    msg.setSourceEntity(181U);
    msg.setDestination(31037U);
    msg.setDestinationEntity(119U);
    msg.value = 152U;

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
    msg.setTimeStamp(0.153851961824);
    msg.setSource(11585U);
    msg.setSourceEntity(190U);
    msg.setDestination(5129U);
    msg.setDestinationEntity(12U);
    msg.value = 236U;

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
    msg.setTimeStamp(0.588136768798);
    msg.setSource(41346U);
    msg.setSourceEntity(254U);
    msg.setDestination(61337U);
    msg.setDestinationEntity(170U);
    msg.consumer.assign("MQLRRKWFYQJHWCFKYEOIKSOHNJOXIILCYXXMRQFNKGGZPDZJWHUTXKGTLHMEATAVRBOCTAICNJCRSTRCHDXFJOVEAMAEQPXPQWSSDBUPQKJSPSYDWYSJNXWPSRDIEQMQHAHZHIEPILZBVFWZVJBDPNWMKUEXJGNKBOUAOAXGDUYGSSFBYWZRGNFBBLUGETFIKMBLROKUHPTNQVCFJRZOOBDZCPNYUMZVYCWILUANETTDLVCQV");
    msg.message_id = 9686U;

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
    msg.setTimeStamp(0.459883714965);
    msg.setSource(17604U);
    msg.setSourceEntity(215U);
    msg.setDestination(54180U);
    msg.setDestinationEntity(227U);
    msg.consumer.assign("VXJTTUTOUMZSYLHGASNVRMNKSLUDHUXEXWICNVUYPASZHINRBXBQYKKZKTWMC");
    msg.message_id = 20282U;

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
    msg.setTimeStamp(0.98433188981);
    msg.setSource(39178U);
    msg.setSourceEntity(17U);
    msg.setDestination(17185U);
    msg.setDestinationEntity(236U);
    msg.consumer.assign("OMTAEAADWDACNSCRFQTCXILQKBXPYJKOGLAVWVZCIQOJMG");
    msg.message_id = 19922U;

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
    msg.setTimeStamp(0.8689521556);
    msg.setSource(40381U);
    msg.setSourceEntity(100U);
    msg.setDestination(31469U);
    msg.setDestinationEntity(103U);
    msg.type = 167U;

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
    msg.setTimeStamp(0.329845674131);
    msg.setSource(21599U);
    msg.setSourceEntity(252U);
    msg.setDestination(31590U);
    msg.setDestinationEntity(167U);
    msg.type = 70U;

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
    msg.setTimeStamp(0.445436697016);
    msg.setSource(58589U);
    msg.setSourceEntity(134U);
    msg.setDestination(37425U);
    msg.setDestinationEntity(167U);
    msg.type = 214U;

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
    msg.setTimeStamp(0.391837356707);
    msg.setSource(35929U);
    msg.setSourceEntity(20U);
    msg.setDestination(48358U);
    msg.setDestinationEntity(59U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.630057517417);
    msg.setSource(52475U);
    msg.setSourceEntity(51U);
    msg.setDestination(28883U);
    msg.setDestinationEntity(45U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.175858559387);
    msg.setSource(57196U);
    msg.setSourceEntity(61U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(201U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.683950617225);
    msg.setSource(39066U);
    msg.setSourceEntity(250U);
    msg.setDestination(51396U);
    msg.setDestinationEntity(232U);
    msg.total_steps = 172U;
    msg.step_number = 234U;
    msg.step.assign("UJGOXVNKBVIRBCDTNFRPZRYUJCMOWEEQRSONSHQBRULSTUSIDPLXAFITPGTSRWHPMEBJSPAHWJYHXWUZIQPKRCDBABOOUJDIGXNHLEIAQGMPWGCHLIFFGVJQOTMNKVCSVHKZQETFATSCBZVEYMVTGYLDWFTNZKAUNLDXRQYSFIGXNXWGFKENDXZWJRZAMILQCODLAVJ");
    msg.flags = 182U;

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
    msg.setTimeStamp(0.728827297661);
    msg.setSource(46071U);
    msg.setSourceEntity(189U);
    msg.setDestination(1333U);
    msg.setDestinationEntity(150U);
    msg.total_steps = 210U;
    msg.step_number = 181U;
    msg.step.assign("MDJZLHWHOCHAFNHOYBTIJYIELFUOXUR");
    msg.flags = 207U;

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
    msg.setTimeStamp(0.86516083156);
    msg.setSource(66U);
    msg.setSourceEntity(86U);
    msg.setDestination(6631U);
    msg.setDestinationEntity(173U);
    msg.total_steps = 138U;
    msg.step_number = 205U;
    msg.step.assign("UZTUYDXMRNLQSANMFVJDMEQWMQGKMABCVLSZIHUGBILGHXPKBXTZQPXPJSRVENWWDRGMGNWENOCQOBSKFFDHSBAFWKQJQVEUHAGJHELYJKHCBTSEPRFDULNFIYVXLJRCXKUZDCUITFDH");
    msg.flags = 171U;

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
    msg.setTimeStamp(0.666431940652);
    msg.setSource(61109U);
    msg.setSourceEntity(44U);
    msg.setDestination(34490U);
    msg.setDestinationEntity(153U);
    msg.state = 33U;
    msg.error.assign("JKJDZFOWLFIEHKKDLLQLMEGOFUXHHDKEMJCISUVOHARXEVIVQBFWBRXDUZFQXWVUQJYCZXRAANDQWIYNRFWFTKGCJSVMHTBENTDSCUUWOXFLNHYJGRDPPZJHSTTGPAOEOTDDMUBDPIGVEPMIGPUBGYBGQCM");

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
    msg.setTimeStamp(0.051277992725);
    msg.setSource(62731U);
    msg.setSourceEntity(12U);
    msg.setDestination(53652U);
    msg.setDestinationEntity(141U);
    msg.state = 134U;
    msg.error.assign("HNBFCPYECOSZWCAJKRIWHAPDGQTCBYVSKIMXFBUWCFOKKYOQUTUSYTXGBRPFVMFCIVNDQLTTFVAKVPKSJJEKDYENLKTUIG");

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
    msg.setTimeStamp(0.646781522549);
    msg.setSource(35237U);
    msg.setSourceEntity(78U);
    msg.setDestination(27160U);
    msg.setDestinationEntity(12U);
    msg.state = 64U;
    msg.error.assign("FEREIOFSKEHEFVKZJOPCQXHGKWKNJXZRNLZUWQHGDEULZJDPBBBEBVJJSHTAOAYZOTOOSSUKYUPLWIXTDCFKJZECIIKLEBKODUVHNPNGYCMSFLLCQWZGTX");

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
    msg.setTimeStamp(0.377831249233);
    msg.setSource(25125U);
    msg.setSourceEntity(168U);
    msg.setDestination(37067U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.422517559353);
    msg.setSource(58090U);
    msg.setSourceEntity(84U);
    msg.setDestination(3780U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.610663351445);
    msg.setSource(27257U);
    msg.setSourceEntity(251U);
    msg.setDestination(2144U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.824821949418);
    msg.setSource(9973U);
    msg.setSourceEntity(89U);
    msg.setDestination(60131U);
    msg.setDestinationEntity(186U);
    msg.op = 237U;
    msg.speed_min = 0.061175382928;
    msg.speed_max = 0.561116851345;
    msg.long_accel = 0.856051326958;
    msg.alt_max_msl = 0.597002745648;
    msg.dive_fraction_max = 0.00850121089062;
    msg.climb_fraction_max = 0.36074109138;
    msg.bank_max = 0.218912582863;
    msg.p_max = 0.405959242707;
    msg.pitch_min = 0.794578202843;
    msg.pitch_max = 0.801674222761;
    msg.q_max = 0.309159518694;
    msg.g_min = 0.307939103185;
    msg.g_max = 0.0527437864933;
    msg.g_lat_max = 0.583318219391;
    msg.rpm_min = 0.499159500243;
    msg.rpm_max = 0.0695360681471;
    msg.rpm_rate_max = 0.875908472654;

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
    msg.setTimeStamp(0.558707538445);
    msg.setSource(9835U);
    msg.setSourceEntity(203U);
    msg.setDestination(27395U);
    msg.setDestinationEntity(9U);
    msg.op = 48U;
    msg.speed_min = 0.285637532356;
    msg.speed_max = 0.242392836381;
    msg.long_accel = 0.843283355346;
    msg.alt_max_msl = 0.0980725557713;
    msg.dive_fraction_max = 0.656659768234;
    msg.climb_fraction_max = 0.797151475257;
    msg.bank_max = 0.481120165132;
    msg.p_max = 0.758995397032;
    msg.pitch_min = 0.543157895374;
    msg.pitch_max = 0.556093982688;
    msg.q_max = 0.547920983742;
    msg.g_min = 0.300624588367;
    msg.g_max = 0.655332852379;
    msg.g_lat_max = 0.344153877737;
    msg.rpm_min = 0.923959476635;
    msg.rpm_max = 0.32749420011;
    msg.rpm_rate_max = 0.486430783503;

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
    msg.setTimeStamp(0.447691480926);
    msg.setSource(32642U);
    msg.setSourceEntity(227U);
    msg.setDestination(9290U);
    msg.setDestinationEntity(228U);
    msg.op = 53U;
    msg.speed_min = 0.433279821506;
    msg.speed_max = 0.968656819671;
    msg.long_accel = 0.684245739144;
    msg.alt_max_msl = 0.394315574636;
    msg.dive_fraction_max = 0.801879037455;
    msg.climb_fraction_max = 0.469212331659;
    msg.bank_max = 0.349447945816;
    msg.p_max = 0.841534903859;
    msg.pitch_min = 0.45447332481;
    msg.pitch_max = 0.543698952673;
    msg.q_max = 0.457969630075;
    msg.g_min = 0.18172518083;
    msg.g_max = 0.437091542469;
    msg.g_lat_max = 0.445164748145;
    msg.rpm_min = 0.452202787893;
    msg.rpm_max = 0.67178346896;
    msg.rpm_rate_max = 0.183314151109;

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
    msg.setTimeStamp(0.258202175829);
    msg.setSource(65201U);
    msg.setSourceEntity(84U);
    msg.setDestination(16933U);
    msg.setDestinationEntity(2U);
    IMC::CommSystemsQuery tmp_msg_0;
    tmp_msg_0.type = 204U;
    tmp_msg_0.comm_interface = 18882U;
    tmp_msg_0.model = 21242U;
    tmp_msg_0.list.assign("QPEFBBOHXIIAIMLASQQYGVOLMUEZDUKRGTUMQEIZAQKEPUSVXPJBXUOBRTEWUVEMHNTBTNRJCYPGRPOEAAHVBPMNKDLCWSKWGKQYJPRLNRJGDOJLJYRLJWKCVTYSDYZCIOGCSZEOYZGOIHXMXVFYFWOZTGXKXNNCQLHUZZNLYVQETIAYMUIXHGWRPKN");
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
    msg.setTimeStamp(0.45019415443);
    msg.setSource(42471U);
    msg.setSourceEntity(229U);
    msg.setDestination(15458U);
    msg.setDestinationEntity(88U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.888682640992;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.922643455678);
    msg.setSource(18857U);
    msg.setSourceEntity(169U);
    msg.setDestination(53212U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.928665196794);
    msg.setSource(51493U);
    msg.setSourceEntity(102U);
    msg.setDestination(48457U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.63702173613;
    msg.lon = 0.374482697644;
    msg.height = 0.396301206213;
    msg.x = 0.215034736686;
    msg.y = 0.269831567361;
    msg.z = 0.116334625311;
    msg.phi = 0.778203643184;
    msg.theta = 0.612433699714;
    msg.psi = 0.920554923827;
    msg.u = 0.773175838994;
    msg.v = 0.457604405552;
    msg.w = 0.695866462315;
    msg.p = 0.641233133569;
    msg.q = 0.921874727297;
    msg.r = 0.997748240763;
    msg.svx = 0.995057746948;
    msg.svy = 0.00816101679616;
    msg.svz = 0.304355473484;

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
    msg.setTimeStamp(0.148105269259);
    msg.setSource(57854U);
    msg.setSourceEntity(113U);
    msg.setDestination(22368U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.701807360087;
    msg.lon = 0.173775198849;
    msg.height = 0.0252563839053;
    msg.x = 0.7452554181;
    msg.y = 0.191811516143;
    msg.z = 0.880586034209;
    msg.phi = 0.7197305575;
    msg.theta = 0.985797507039;
    msg.psi = 0.0184021503762;
    msg.u = 0.95185686183;
    msg.v = 0.546170936973;
    msg.w = 0.165894179699;
    msg.p = 0.435851031516;
    msg.q = 0.888178007311;
    msg.r = 0.15726928335;
    msg.svx = 0.138266870071;
    msg.svy = 0.365632984054;
    msg.svz = 0.625400394927;

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
    msg.setTimeStamp(0.137263105818);
    msg.setSource(47191U);
    msg.setSourceEntity(95U);
    msg.setDestination(55313U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.48182657402;
    msg.lon = 0.152887727169;
    msg.height = 0.464880648641;
    msg.x = 0.725740995722;
    msg.y = 0.215410200892;
    msg.z = 0.967228041505;
    msg.phi = 0.280546594679;
    msg.theta = 0.955158613969;
    msg.psi = 0.53893550878;
    msg.u = 0.0109650076987;
    msg.v = 0.68364995625;
    msg.w = 0.284179289803;
    msg.p = 0.218922247705;
    msg.q = 0.197658605345;
    msg.r = 0.714766453926;
    msg.svx = 0.368343101174;
    msg.svy = 0.0497191407324;
    msg.svz = 0.431359284703;

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
    msg.setTimeStamp(0.338833406385);
    msg.setSource(17503U);
    msg.setSourceEntity(16U);
    msg.setDestination(48614U);
    msg.setDestinationEntity(25U);
    msg.op = 8U;
    msg.entities.assign("DAPYPINQSQVCGSMDKRJDVLNPOOEEZKYGEYXJCKZXENZOBTUWBPRAG");

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
    msg.setTimeStamp(0.646047168774);
    msg.setSource(33573U);
    msg.setSourceEntity(186U);
    msg.setDestination(7267U);
    msg.setDestinationEntity(129U);
    msg.op = 200U;
    msg.entities.assign("HUKZVTDJBFBYVGNNKRQSPTIAAFVVNKAHEJUPULHEVBRLZSWYLEDEZDMHLDXRPSXWJQCPQOUVZCGVXNQBCHNGRAUFVIAJWKLEFSESOSHLTWQHFFYNURWPHZTQKAIMZDGZEKFORUUFIKYCJOITRYDYCM");

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
    msg.setTimeStamp(0.544457643651);
    msg.setSource(3749U);
    msg.setSourceEntity(77U);
    msg.setDestination(3484U);
    msg.setDestinationEntity(13U);
    msg.op = 20U;
    msg.entities.assign("JWPPNONPWISZNADFKRCRQV");

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
    msg.setTimeStamp(0.868374697841);
    msg.setSource(41838U);
    msg.setSourceEntity(23U);
    msg.setDestination(53211U);
    msg.setDestinationEntity(223U);
    msg.type = 252U;
    msg.speed = 27558U;
    const char tmp_msg_0[] = {72, -85, 104, 118, -125, 112, 113, -124, 20, 27, 94};
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
    msg.setTimeStamp(0.0403265518091);
    msg.setSource(42050U);
    msg.setSourceEntity(236U);
    msg.setDestination(25628U);
    msg.setDestinationEntity(70U);
    msg.type = 193U;
    msg.speed = 63349U;
    const char tmp_msg_0[] = {111, -98, -54, 10, -111, -95, 55, 12, -109, -59, -105, -77, 55, 84, -88, -22, 13, 64, -16, -113, 15, -126, -81, -12, -52, 16, 24, -67, 108, -105, -53, -103, -118, 59, 21, -48, -12, -88, -15, 83, 26, 91, 83, 51, 17, 108, -42, -94, 8, -112, -109, -114, -109, -27, -85, -113, -68, -5, -65, 126, 22, 111, 58, 72, -120, 59, 110, 21, 50, 64};
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
    msg.setTimeStamp(0.864641629433);
    msg.setSource(60437U);
    msg.setSourceEntity(108U);
    msg.setDestination(60935U);
    msg.setDestinationEntity(80U);
    msg.type = 217U;
    msg.speed = 29161U;
    const char tmp_msg_0[] = {-127, 118, -56, 121, -8, 60, 114, 97, 10, 60, 79, 60, 111, 39, 10, 62, -89, 52, 12, 110, 110, 67, -91, -48, -36, 95, -13, 124, -79, -119, -92, -99, 10, 114, 3, -112, 113, 40, -56, -31, -125, -113, -116, 30, -69, 76, -108, -29, -38, 67, 59, 36, -73, -116, 100, 11, 85, -12, -48, 53, -1, 94, -121, 75, -70, -111, 32, 85, -53, -87, 105, 95, 25, 108, 76, 118, -14, -77, -100, 14, 76, 98, -19, 96, -33, 24, 111, -30, -17, -96, -108, -3, -50, 70, -29, 79, 93, 36, -94, 0, -50, -112, 69, 113, 33, 111, 52, 41, -39, -38, -87, -39, -8, -86, 76, 99, -18, 86, -5, -30, -79, 22, -120, 52, -100, -49, -33, -84, 122, 104, 7, 74, -41, 36, -31, 69, 85, -95, -102, -8, 107, 115, 76, -26, -40, 76, 57, 73, -9, -116, -104, -51, -19, -104, 119, 24, 72, 80, -25, 53, 37, 50, -71, -56, -58, 3, -120, 13, -21, -121, 101, 58, 122, -95, -99, 39, -65, -2, 25, -112, -32, -58, -23, 74, -22, -43, 49, -80, 114, 110, -103, -13, -70, -78, -52, -61, 94, -13, 124, 12, -26, 99, -76};
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
    msg.setTimeStamp(0.250263550231);
    msg.setSource(41183U);
    msg.setSourceEntity(105U);
    msg.setDestination(18548U);
    msg.setDestinationEntity(220U);
    msg.op = 29U;
    msg.tas2acc_pgain = 0.662178211097;
    msg.bank2p_pgain = 0.689096102347;

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
    msg.setTimeStamp(0.50055255284);
    msg.setSource(32856U);
    msg.setSourceEntity(200U);
    msg.setDestination(57214U);
    msg.setDestinationEntity(155U);
    msg.op = 188U;
    msg.tas2acc_pgain = 0.852561603213;
    msg.bank2p_pgain = 0.369310146458;

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
    msg.setTimeStamp(0.103147132171);
    msg.setSource(35276U);
    msg.setSourceEntity(31U);
    msg.setDestination(59171U);
    msg.setDestinationEntity(13U);
    msg.op = 11U;
    msg.tas2acc_pgain = 0.827355071901;
    msg.bank2p_pgain = 0.458016667548;

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
    msg.setTimeStamp(0.105215379789);
    msg.setSource(28824U);
    msg.setSourceEntity(186U);
    msg.setDestination(681U);
    msg.setDestinationEntity(65U);
    msg.available = 2569374758U;
    msg.value = 120U;

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
    msg.setTimeStamp(0.350050390305);
    msg.setSource(64477U);
    msg.setSourceEntity(167U);
    msg.setDestination(31825U);
    msg.setDestinationEntity(158U);
    msg.available = 3247669029U;
    msg.value = 104U;

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
    msg.setTimeStamp(0.341883025543);
    msg.setSource(27744U);
    msg.setSourceEntity(170U);
    msg.setDestination(7710U);
    msg.setDestinationEntity(19U);
    msg.available = 3550755684U;
    msg.value = 157U;

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
    msg.setTimeStamp(0.701361076069);
    msg.setSource(9829U);
    msg.setSourceEntity(49U);
    msg.setDestination(35686U);
    msg.setDestinationEntity(82U);
    msg.op = 225U;
    msg.snapshot.assign("PWKLBSHYZTHSOFLKYZJQYVYUWSCXFNLISBZTRORATGYBWWTCJZMGJTVZKJXCKKKDECJHJNMUNHYGNNUVPCGCHODLFGVMUQEMDERXFIUMESIFELDJBEOMUBJROMEQGLQCNQUVTXMSTKEFDOJDRGLVQMALNZQICGUTD");
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 8625U;
    tmp_msg_0.status = 10U;
    tmp_msg_0.info.assign("RJHDNNBTNAKTCDNBLALEQKSJJEIKMFKUIFKVOECSCCMIANSBIZQVLEXZYFEYDQIMCRVXDJGGBYXODUHRULXTYBDYAITAARUKDRRCPTIOZFSSPQGTNRCYDOGJJJYRSGUCPULOFTYBWVPQAUAVGSEGNGKTFNHPRYEHZMOKHEBKMTUFNICJEHGXDVTWZAWIPMVCOMLQBLKQUMHROXJSWEV");
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
    msg.setTimeStamp(0.649459256346);
    msg.setSource(18175U);
    msg.setSourceEntity(119U);
    msg.setDestination(46844U);
    msg.setDestinationEntity(99U);
    msg.op = 104U;
    msg.snapshot.assign("CYHVPDZVGFNIESQRKKBZLQRWPLFUXPOKSXMGMNNAKLZFEYWTKDOCYOMSUPJQANRLZCVKSDYWXJKLBQCGCQUMGSLYTPRQBBXAHFOXHMFFQSYAHJKCLGBPNGVPA");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.859431410903;
    tmp_msg_0.beam_height = 0.092005980782;
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
    msg.setTimeStamp(0.803285997162);
    msg.setSource(59198U);
    msg.setSourceEntity(252U);
    msg.setDestination(63297U);
    msg.setDestinationEntity(219U);
    msg.op = 109U;
    msg.snapshot.assign("LHXWLRJNECZMKHDWKWCEBBUOAKJNVEDKMPPCSGDIBLKZLNLGUFVPXYEISTZWQINHIPSGZFLPXDWHQJYJIFJTRPDKEWXVRIKYRZYWFVVUSXMWNSYUANQUFYCDGSZHIDYVHOHGQOPELGAFUTALOEKNCARUNPQEYJVXICJMZCDBVRQSJTQRAGYVMFTMJMEJHUITBQUAHMSTCPKXODRVLFNNOLCBFAKOPBSRQBOUGAOWODBTZCMYXGZTRSXIGMFBZH");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.221135434735;
    tmp_msg_0.v = 0.747087023617;
    tmp_msg_0.w = 0.401105636295;
    tmp_msg_0.p = 0.145792742488;
    tmp_msg_0.q = 0.719165601151;
    tmp_msg_0.r = 0.207103292078;
    tmp_msg_0.flags = 149U;
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
    msg.setTimeStamp(0.921936262688);
    msg.setSource(36206U);
    msg.setSourceEntity(223U);
    msg.setDestination(60509U);
    msg.setDestinationEntity(37U);
    msg.op = 48U;
    msg.name.assign("LUDRDGMWCSQ");

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
    msg.setTimeStamp(0.847968383776);
    msg.setSource(33653U);
    msg.setSourceEntity(9U);
    msg.setDestination(37029U);
    msg.setDestinationEntity(3U);
    msg.op = 135U;
    msg.name.assign("OIPKPNDUFIPSBIFXNBHROYQFGITVUKRECKMKM");

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
    msg.setTimeStamp(0.263147908768);
    msg.setSource(55904U);
    msg.setSourceEntity(118U);
    msg.setDestination(27318U);
    msg.setDestinationEntity(94U);
    msg.op = 232U;
    msg.name.assign("UDVLZTUCDPEEVATFWBCG");

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
    msg.setTimeStamp(0.0573389876168);
    msg.setSource(40674U);
    msg.setSourceEntity(5U);
    msg.setDestination(61667U);
    msg.setDestinationEntity(10U);
    msg.type = 99U;
    msg.htime = 0.926391814923;
    msg.context.assign("NMAKODUNEPQXDJEPWIKUGHRLJBPXIYCZAUGFJRMLOVVCK");
    msg.text.assign("IZAESRQXCORVXTHGPWCPCZYGYLAQJKBKPSGVMEDWZUNAWPGYVRHRYNBSBNHBVXXUNWWRCPLIDDNBEGNMFIQIFHLTKJIHZSMVLGSCJBCN");

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
    msg.setTimeStamp(0.273915226043);
    msg.setSource(28311U);
    msg.setSourceEntity(238U);
    msg.setDestination(56773U);
    msg.setDestinationEntity(205U);
    msg.type = 17U;
    msg.htime = 0.0745042778001;
    msg.context.assign("GTBBQCQAROAAIJYFQHBYLGLZTVADEIKPWOVFDGUKMBYMHQDVUBOSTWXXSJCWMUKNODDDKKVTESFJLFMTMCBAWAZNDOFWKGXLOSQDFZESUREBHHUUECENROZPXTTXNSXSYGLCVHOF");
    msg.text.assign("ZUANKTEQCLSMSJLTNDEKDHSSQSZKWMIDQAGMLACOGYEVIWTLGAHPPNMWWZCOGLXREAZEBJKTCLFOCBPRIMJBVUWAPUKQYUKJTNIKRTDWLA");

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
    msg.setTimeStamp(0.0223590097742);
    msg.setSource(2204U);
    msg.setSourceEntity(44U);
    msg.setDestination(37797U);
    msg.setDestinationEntity(66U);
    msg.type = 202U;
    msg.htime = 0.0571830287875;
    msg.context.assign("XCCWPDQHWJWQR");
    msg.text.assign("SYUFPLDCXFNKLRJQCPWNNVCKVGAGFRPFSXYPZBGJNDULMXPYUMFRWGVUKXQBQBZLNZWFTIEDDPWAWCANEABHOVHLMTCJIWHLCRCYNYSUNDVUEKIKSRHXSVXRZMQAXPYVVSPEQNZMFZAPIRZSUEOPEKUZVLIJAZOFLTUYJOAXRJKECQTHTHMBFMTDMTJQKUXIBDEAGOSBGRGOIOIYJMYHFITRAQ");

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
    msg.setTimeStamp(0.555260174543);
    msg.setSource(5750U);
    msg.setSourceEntity(226U);
    msg.setDestination(46875U);
    msg.setDestinationEntity(203U);
    msg.command = 163U;
    msg.htime = 0.42790053953;

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
    msg.setTimeStamp(0.645670239847);
    msg.setSource(21622U);
    msg.setSourceEntity(110U);
    msg.setDestination(37877U);
    msg.setDestinationEntity(13U);
    msg.command = 71U;
    msg.htime = 0.536672156147;

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
    msg.setTimeStamp(0.529429698556);
    msg.setSource(52914U);
    msg.setSourceEntity(241U);
    msg.setDestination(49231U);
    msg.setDestinationEntity(151U);
    msg.command = 149U;
    msg.htime = 0.956917578337;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 59U;
    tmp_msg_0.htime = 0.879361699956;
    tmp_msg_0.context.assign("PPFMQWRPKGOPNZGFSWTVSYD");
    tmp_msg_0.text.assign("RJIJUYDJJVMTYWUUEVFOFPQCRSISAOZBZUJBSWUBAKLVOCBVTYQGTLFEPDFOQYTRXPEYXYTYKNKDNGZZXXSQXPHDHXRTYWICEQVYNXVGJPV");
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
    msg.setTimeStamp(0.127017246047);
    msg.setSource(28990U);
    msg.setSourceEntity(82U);
    msg.setDestination(62024U);
    msg.setDestinationEntity(156U);
    msg.op = 198U;
    msg.file.assign("NJDJWDQAILHFKUTWYVSDSQCTQJPE");

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
    msg.setTimeStamp(0.031316077369);
    msg.setSource(26613U);
    msg.setSourceEntity(51U);
    msg.setDestination(39599U);
    msg.setDestinationEntity(129U);
    msg.op = 1U;
    msg.file.assign("HMPAUJSYPBOJUFUEKIMNJDLYPMZWINVABGNFJQOPAXQLHXEUFDDZNUGQIBACOWSNINTGYBKDYJOSOXKDAKMPQSMKVHSEYAWNPFFPDDOSUHMKTKAZUICKNMLHGCCRWGTRGROHLSLZRKPCYZYZQVWTTFAXEXLQHXESPBGBWVBMVYTFMQVJQUCEUBRVJCJNFLQLYGPIJRWXQYRBGVIV");

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
    msg.setTimeStamp(0.455637364673);
    msg.setSource(40247U);
    msg.setSourceEntity(252U);
    msg.setDestination(773U);
    msg.setDestinationEntity(97U);
    msg.op = 105U;
    msg.file.assign("QGWJSXOOHOVBRBSGTFQZGAKLGJEKFJPVWCASYABLNZJTYEVEZXCZFRQMSRVNNCXHSDJTEKCQZXCLSVFTDMEHVUPQMZVTIWILWQRSHOXNETEMIQJPGCGDRUMUBODUCELHROPUZWFNZNYLQSRTXV");

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
    msg.setTimeStamp(0.437377130215);
    msg.setSource(36475U);
    msg.setSourceEntity(209U);
    msg.setDestination(7105U);
    msg.setDestinationEntity(15U);
    msg.op = 252U;
    msg.clock = 0.721639125023;
    msg.tz = -81;

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
    msg.setTimeStamp(0.581603673174);
    msg.setSource(45030U);
    msg.setSourceEntity(254U);
    msg.setDestination(13216U);
    msg.setDestinationEntity(231U);
    msg.op = 139U;
    msg.clock = 0.693100265187;
    msg.tz = 121;

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
    msg.setTimeStamp(0.661683860789);
    msg.setSource(46357U);
    msg.setSourceEntity(224U);
    msg.setDestination(11398U);
    msg.setDestinationEntity(48U);
    msg.op = 157U;
    msg.clock = 0.633566913819;
    msg.tz = -111;

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
    msg.setTimeStamp(0.900902792628);
    msg.setSource(41510U);
    msg.setSourceEntity(51U);
    msg.setDestination(14488U);
    msg.setDestinationEntity(58U);
    msg.conductivity = 0.969893677705;
    msg.temperature = 0.272914692897;
    msg.depth = 0.0191871460919;

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
    msg.setTimeStamp(0.110147323479);
    msg.setSource(31989U);
    msg.setSourceEntity(29U);
    msg.setDestination(62771U);
    msg.setDestinationEntity(244U);
    msg.conductivity = 0.870399710832;
    msg.temperature = 0.805673427968;
    msg.depth = 0.317597111969;

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
    msg.setTimeStamp(0.230205609413);
    msg.setSource(16818U);
    msg.setSourceEntity(48U);
    msg.setDestination(6312U);
    msg.setDestinationEntity(119U);
    msg.conductivity = 0.416287908869;
    msg.temperature = 0.0547721792668;
    msg.depth = 0.761977919558;

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
    msg.setTimeStamp(0.699967245851);
    msg.setSource(55482U);
    msg.setSourceEntity(171U);
    msg.setDestination(61634U);
    msg.setDestinationEntity(138U);
    msg.altitude = 0.479153937089;
    msg.roll = 18389U;
    msg.pitch = 12322U;
    msg.yaw = 10828U;
    msg.speed = -32206;

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
    msg.setTimeStamp(0.00828090682408);
    msg.setSource(42933U);
    msg.setSourceEntity(162U);
    msg.setDestination(15131U);
    msg.setDestinationEntity(72U);
    msg.altitude = 0.694604510782;
    msg.roll = 22762U;
    msg.pitch = 21923U;
    msg.yaw = 52335U;
    msg.speed = 20456;

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
    msg.setTimeStamp(0.174317243194);
    msg.setSource(64955U);
    msg.setSourceEntity(180U);
    msg.setDestination(44654U);
    msg.setDestinationEntity(215U);
    msg.altitude = 0.778504321709;
    msg.roll = 59859U;
    msg.pitch = 56121U;
    msg.yaw = 47310U;
    msg.speed = -16339;

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
    msg.setTimeStamp(0.211788132269);
    msg.setSource(52003U);
    msg.setSourceEntity(87U);
    msg.setDestination(44464U);
    msg.setDestinationEntity(89U);
    msg.altitude = 0.175124112937;
    msg.width = 0.452524245619;
    msg.length = 0.151701706721;
    msg.bearing = 0.642729359764;
    msg.pxl = 22828;
    msg.encoding = 155U;
    const char tmp_msg_0[] = {-74, 77, -91, -41, -27, 76, 98, 8, 126, 27, 17, 78, -69, -97, 73, 90, -109, 108, 45, -57, -101, -25, -8, 85, 19, -60, -12, 39, -10, 57, -2, -31, 45, 49, 14, -90, 45, -23, -64, 119, -67, 106, 5, 86, -90, -98, 18, -59, 5, 57, -104, 121, -71, -118, 125, -55, -19, 62, 46, -22, -73, -89, -33, 33, -83, -22, -7};
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
    msg.setTimeStamp(0.00989745219212);
    msg.setSource(10836U);
    msg.setSourceEntity(155U);
    msg.setDestination(7130U);
    msg.setDestinationEntity(195U);
    msg.altitude = 0.636350814095;
    msg.width = 0.364766382733;
    msg.length = 0.531426663661;
    msg.bearing = 0.333992375474;
    msg.pxl = -19069;
    msg.encoding = 230U;
    const char tmp_msg_0[] = {73, -70, 38, -2, -39, -75, -74, 13, -70, 72, -70, 24, 49, 83, 120, 42, -90, -34, -2, -94, 87, 84, 5, -68, 76, 24, -96, 103, -94, 64, 3, -2, 83, -28, 6, 126, 2, 2, -18, -101, -92, 37, 26, 53, -75, -81, 65, 122, -69, 40, 122, 122, -76, -92, 124, 92, 90, 85, -72, 50, -15, -78, 46, -83, -62, 87, -125, 50, -14, 69, 34, 103, 117, 108, 84, 114, -126, 43, -57, -17, -29, 16, 97, -31, 44, -37, 49, -117, 101, 2, 43, 110, -87, -58, -120, 0, -30, 47, -18, -67, 40, -56, -45, 13, 74, -42, -83, -62, -109, -65, -25, 41, 13, -14, 48, 107, -21, -31, 35, 86, 105, 109, 80, -81, 99, -43, 75, -88, -1, -113, 97, 99, -30, 113, -4, -46, 21, 54, 27, 23, -42, -31, 16, -36, -13, 43, -71};
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
    msg.setTimeStamp(0.985452292398);
    msg.setSource(64124U);
    msg.setSourceEntity(192U);
    msg.setDestination(11326U);
    msg.setDestinationEntity(138U);
    msg.altitude = 0.698973020576;
    msg.width = 0.735907202287;
    msg.length = 0.150994240676;
    msg.bearing = 0.0564748030033;
    msg.pxl = -12734;
    msg.encoding = 13U;
    const char tmp_msg_0[] = {105, -96, 96, 62, -60, -51, 75, -51, -42, -60, -27, 84, -13, 50, 23, 49, -54, 68, 58, 67, -59, -33, 64, 82, 88, 43, -56, -32, -110, 102, -82, -117, -93, 47, -25, -46, -84, -43, 51, -35, 32, 91, 113, 106, 40, -125, 2, -60, -78, 2, 114, -24, 79, -72, -59, 100, -125, -103, -84, -61, -14, 63, -88, -101, -107, -57, -51, 23, -19, -53};
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
    msg.setTimeStamp(0.854651538602);
    msg.setSource(31131U);
    msg.setSourceEntity(157U);
    msg.setDestination(48156U);
    msg.setDestinationEntity(93U);
    msg.text.assign("LVMJFXVLWXGXSCRMUDMWLPFQQJSSVXEGEAPENWAFKJKQCJZISNPCQDCMCGPJZADUGNZPYCATEEUZQXPBQXFERHYRHBHQIXUEMDFONSEMTFKLDPXHULHNZDMNOYICWGOOKSOAIJKHTBVXTLUYRTYIHRRLIOFVTDWNKYLASHPMJAZDWOCPERQTNATJIRGZHBQYWQKSJIFBEGCZOFIYBDXOMLBRDOKVUMJGBVUFTKNVBPYZTRCVSU");
    msg.type = 144U;

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
    msg.setTimeStamp(0.807532718495);
    msg.setSource(45788U);
    msg.setSourceEntity(138U);
    msg.setDestination(19823U);
    msg.setDestinationEntity(221U);
    msg.text.assign("SQATLUNUQMDMRPVKHAFTZFWXIPDFNUKQWXMAOHZCSMNOJMZEBKVLDXFQVHWOQOVIKTEYEBXEGPTZJBASJNCZTYXXTZLH");
    msg.type = 86U;

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
    msg.setTimeStamp(0.502393894316);
    msg.setSource(11381U);
    msg.setSourceEntity(34U);
    msg.setDestination(28204U);
    msg.setDestinationEntity(46U);
    msg.text.assign("TNFEFTMPLYBOFYPGYM");
    msg.type = 80U;

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
    msg.setTimeStamp(0.109707345169);
    msg.setSource(60095U);
    msg.setSourceEntity(64U);
    msg.setDestination(45015U);
    msg.setDestinationEntity(85U);
    msg.parameter = 4U;
    msg.numsamples = 245U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 36115U;
    tmp_msg_0.avg = 0.878270154021;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0522807419576;
    msg.lon = 0.288480534104;

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
    msg.setTimeStamp(0.505160460927);
    msg.setSource(4192U);
    msg.setSourceEntity(109U);
    msg.setDestination(40662U);
    msg.setDestinationEntity(12U);
    msg.parameter = 1U;
    msg.numsamples = 103U;
    msg.lat = 0.826654742365;
    msg.lon = 0.101097401231;

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
    msg.setTimeStamp(0.170243493268);
    msg.setSource(39774U);
    msg.setSourceEntity(189U);
    msg.setDestination(7909U);
    msg.setDestinationEntity(13U);
    msg.parameter = 152U;
    msg.numsamples = 6U;
    msg.lat = 0.352195166568;
    msg.lon = 0.219622233009;

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
    msg.setTimeStamp(0.76295747076);
    msg.setSource(44190U);
    msg.setSourceEntity(244U);
    msg.setDestination(53312U);
    msg.setDestinationEntity(51U);
    msg.depth = 58428U;
    msg.avg = 0.813524861185;

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
    msg.setTimeStamp(0.0342192678571);
    msg.setSource(11889U);
    msg.setSourceEntity(252U);
    msg.setDestination(53460U);
    msg.setDestinationEntity(110U);
    msg.depth = 3721U;
    msg.avg = 0.946888675216;

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
    msg.setTimeStamp(0.410218371155);
    msg.setSource(59390U);
    msg.setSourceEntity(191U);
    msg.setDestination(1607U);
    msg.setDestinationEntity(209U);
    msg.depth = 40389U;
    msg.avg = 0.329502739274;

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
    msg.setTimeStamp(0.584593170783);
    msg.setSource(46262U);
    msg.setSourceEntity(9U);
    msg.setDestination(39502U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.942945682492);
    msg.setSource(24777U);
    msg.setSourceEntity(240U);
    msg.setDestination(3239U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.24728249118);
    msg.setSource(17490U);
    msg.setSourceEntity(222U);
    msg.setDestination(10841U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.740012168516);
    msg.setSource(17288U);
    msg.setSourceEntity(89U);
    msg.setDestination(24494U);
    msg.setDestinationEntity(4U);
    msg.sys_name.assign("NOJGYPKWILLPDZWKUZHSUQXBNYTRQNMDUVMWPWODIMSGBZJAJARCMILFBGUWWISCFRNCKRKGGFXQOXKIZRJVSBJYDYVHVUPCKWZFSRHESYCVHHUOTLLCJWVWMPYLQHELJEEOIFAXEGEEMNQGJMKLOONGBWRPGUQODZTTKQBIYMUDEB");
    msg.sys_type = 181U;
    msg.owner = 31165U;
    msg.lat = 0.108449333204;
    msg.lon = 0.125234098189;
    msg.height = 0.210608978669;
    msg.services.assign("ELZHLRWADVKBQOEZLTWOOOKYKNVSOEHTQJJZKQMBFCUSZLJGBTAVGATFBNLJWETHPIPQ");

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
    msg.setTimeStamp(0.248075758219);
    msg.setSource(51317U);
    msg.setSourceEntity(94U);
    msg.setDestination(28534U);
    msg.setDestinationEntity(130U);
    msg.sys_name.assign("VFWTOGUDOLIYPVNOZBDZEGDGWYPLEINLAXLSSVEXLBJGHVECAFKPMNWGHZYCTIQSKW");
    msg.sys_type = 180U;
    msg.owner = 45586U;
    msg.lat = 0.0665756542449;
    msg.lon = 0.188256715323;
    msg.height = 0.661300074968;
    msg.services.assign("GBDHMEPJYOOBUPATLBOCLIZGJGJCKOJVIMTXFVDWDWOGFECMWCTABVZRNZSAXQPZUZRXAQZGELKVTSOUY");

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
    msg.setTimeStamp(0.0663570561997);
    msg.setSource(4600U);
    msg.setSourceEntity(67U);
    msg.setDestination(19529U);
    msg.setDestinationEntity(122U);
    msg.sys_name.assign("TRXYBXOEXCUDEDKFBWHVLZZREMQLBCQFRYFVQPYXGYSDIRMFVLDUACNCPLKAHCSWULHAUSUKPYUVETLHIWTRCRYBXDSOOVIOYAFSJIVTNWBVHGOYNXAHMWR");
    msg.sys_type = 232U;
    msg.owner = 30732U;
    msg.lat = 0.687525607841;
    msg.lon = 0.118882990057;
    msg.height = 0.319979662736;
    msg.services.assign("SENZECFBXVKTQPYMHYRCTHYRDCZPISWYGDRHOATCTCDOCZRYNADHFXVMKEFQVIRBTXHIODXSPBPWAIWNBGHLAQJLKSXBPSQPGNPYPFGBXSHUVBXEZIZWJGKHNKLFEKMWDURUYBUWOMLKEUMAOANZFINXFQALTGJYLMJYCGTUKDNHQVVKFOIGLUFEAQURSRMQTDSDZMGVVOWPHNRCUWJZCIILR");

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
    msg.setTimeStamp(0.9908820395);
    msg.setSource(4713U);
    msg.setSourceEntity(138U);
    msg.setDestination(36008U);
    msg.setDestinationEntity(22U);
    msg.service.assign("EHXHSUOUNGDTUINTAZMNJJZSXSWYPDTCQBNRFXFGVIWLFEYQBCPAJZLXHQCJLQOZSJPWZOBNIFHGDRKJRBWUKEIEXXULVDRDQAJTMBNRNXZERRGLVQHTWYVYSMDLMLGOYFGUSVSKNKOYPBGIAFCTTJMOWZOLYRQAHDMIFITZMVWYKIQOVSLAUQCVENW");
    msg.service_type = 5U;

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
    msg.setTimeStamp(0.977788905729);
    msg.setSource(25656U);
    msg.setSourceEntity(114U);
    msg.setDestination(24539U);
    msg.setDestinationEntity(51U);
    msg.service.assign("PUUEXRTQKCOLNHOSDXBVROCQKRNEHFOCYDKTRNKURORMFOZTGJXVAFFBFTNTWPMIXZWGBYVFJRXJZZEVWHYCJGCQUYAPMIEXJUEGLEJRNFHLUOYEVNUVWJVQ");
    msg.service_type = 142U;

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
    msg.setTimeStamp(0.205025084997);
    msg.setSource(39043U);
    msg.setSourceEntity(94U);
    msg.setDestination(4595U);
    msg.setDestinationEntity(111U);
    msg.service.assign("GHEZLVGQNWZFTTOBTRHKUCFAAEFRCCDNZJTVPDXKORWPKIIQSPWADMXZRVXWOYLPJKKHLRMNDSHZBNUHPZWGESMYQNMHQVJASEUGZJDYATMKWXALEZIMULHXDYPOSXMBTLQCVITCBKRFFGOTFPSBHXCSCEFYSSWLYMGUFMKJGWAQDARQGTRJKZFYUWLBYIIWJLLUEXQNEXRIBPRYBEOOOMDOZVXCHUBNEIQUJIGVVIAA");
    msg.service_type = 24U;

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
    msg.setTimeStamp(0.402987641018);
    msg.setSource(64212U);
    msg.setSourceEntity(186U);
    msg.setDestination(47455U);
    msg.setDestinationEntity(203U);
    msg.value = 0.545657945778;

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
    msg.setTimeStamp(0.0205181248377);
    msg.setSource(60173U);
    msg.setSourceEntity(66U);
    msg.setDestination(61314U);
    msg.setDestinationEntity(112U);
    msg.value = 0.25210087637;

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
    msg.setTimeStamp(0.827167319926);
    msg.setSource(46487U);
    msg.setSourceEntity(233U);
    msg.setDestination(12016U);
    msg.setDestinationEntity(42U);
    msg.value = 0.613543009313;

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
    msg.setTimeStamp(0.134498869649);
    msg.setSource(54475U);
    msg.setSourceEntity(162U);
    msg.setDestination(46344U);
    msg.setDestinationEntity(107U);
    msg.value = 0.868996644614;

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
    msg.setTimeStamp(0.360110666201);
    msg.setSource(43708U);
    msg.setSourceEntity(43U);
    msg.setDestination(17643U);
    msg.setDestinationEntity(164U);
    msg.value = 0.945890767122;

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
    msg.setTimeStamp(0.586496308862);
    msg.setSource(23092U);
    msg.setSourceEntity(150U);
    msg.setDestination(56932U);
    msg.setDestinationEntity(159U);
    msg.value = 0.498643311125;

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
    msg.setTimeStamp(0.654400106588);
    msg.setSource(51672U);
    msg.setSourceEntity(54U);
    msg.setDestination(35817U);
    msg.setDestinationEntity(142U);
    msg.value = 0.304881015952;

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
    msg.setTimeStamp(0.669438988239);
    msg.setSource(18718U);
    msg.setSourceEntity(208U);
    msg.setDestination(17089U);
    msg.setDestinationEntity(64U);
    msg.value = 0.216266509293;

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
    msg.setTimeStamp(0.70448548623);
    msg.setSource(3933U);
    msg.setSourceEntity(13U);
    msg.setDestination(29571U);
    msg.setDestinationEntity(44U);
    msg.value = 0.482023718928;

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
    msg.setTimeStamp(0.587027339966);
    msg.setSource(36701U);
    msg.setSourceEntity(34U);
    msg.setDestination(28879U);
    msg.setDestinationEntity(84U);
    msg.number.assign("EXAYKEIZPDAZDZYNBKLOOOOBIWXBPMUTKTDGHINWGVGBILNJINEVBRPWOSCVNZGDFNZUIACFEDIDCRCDNWKPJZIYNPAELBEKJRJBABMPCAHHXQDKVPRAVGJCFHZMHYPTORVQFXQMBKNRVHKDZHRCTGKGENJYUYLTXVFMWJASASSTGCSFUQKURJRTSZLXUFMXGWOCOEXJRGTMVLQPIFYVDSZOFMWWUJQULUYOSHW");
    msg.timeout = 27260U;
    msg.contents.assign("NBDHWSAASCFXMBSLQJJGLWORMSEFLIBGJCURVSRVJAKWHUUMTLRYOFLKWRFAMDUGJKPPMEXGYADQAKUPNSGDKSOPPIQFDYQVRMNIBZZUJYXQEDEIULRTPJULCNITCWLAXODZDYETTCNVNMQBZLWNAZFFYSXXPRJB");

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
    msg.setTimeStamp(0.262370264521);
    msg.setSource(33341U);
    msg.setSourceEntity(233U);
    msg.setDestination(60909U);
    msg.setDestinationEntity(125U);
    msg.number.assign("GWZQJQTQFW");
    msg.timeout = 8402U;
    msg.contents.assign("EAGZJWMCFRVDQTOYSEANGWUUQYXQYIYFZPLVLFZFABIHVOUFWBIVLUJTNMPHRKTBCGWFZHJRGZGZLJDVZYRUBLTXNDZNCIANEASHQMIYSAZXOBOFREEGHBJXXPQKCKUDGYIOAXCWWOFPCAYCJJDDTHUCPHNKTARTUCJOUGMDIBOSMTSEBHWQSPLWBKVAHRDPGYMIKTMSQNFPNPEQWHWTUNIJVSKKMSVFLMBE");

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
    msg.setTimeStamp(0.0067400491986);
    msg.setSource(39664U);
    msg.setSourceEntity(130U);
    msg.setDestination(16517U);
    msg.setDestinationEntity(35U);
    msg.number.assign("KKFDJOLOGKYYWXCDIGUKXGOYRWENKZSX");
    msg.timeout = 31045U;
    msg.contents.assign("PRCWZVVSADRFKTTYEHQHBTLGBSLALRSEOYYTYMXNHYWYMCBXLJID");

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
    msg.setTimeStamp(0.528406065249);
    msg.setSource(19554U);
    msg.setSourceEntity(154U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(162U);
    msg.seq = 4142195249U;
    msg.destination.assign("ZRXKMIEGPCSXLMPQVLMMIMESGQWXLFEKXZFHPOWLHKNEYYFTQOCONBJPUEHQTVFQUTZMPURZBWWYJGUBSNA");
    msg.timeout = 4835U;
    const char tmp_msg_0[] = {96, -111, 70, 99, -44, -76, 24, 47, -85, -66, -7, 77, -75, 16, -127, -13, 87, -79, -91, -64, -69, -22, -13, -106, 97, 40, -66, 115, 78, 99, 56, -39, 120, -126, -89, -10, 18, 71, -29, -49, 8, 81, -32, -40, -119, 93, -117, -86, -120, 59, 3, -26, -8, 1, 43, -52, 5, 5, -37, -5, 103, 26, 88, 67, -113, -70, 35, -126, -105, -5, -121, 105, -82, 45, 32, 103, -37, -24, 51, -116, -99, -16, 106, -90, -40, 91, 41, 15, -29, 11, 55, -102, 114, 41, -14, -39, 116, 63, 25, -3, -112, -56, -44, -61, 88, 32, -55, -26, 36, -101, 28, 35, -113, -45, 112, -6, -22, 2, -52, -72, 76, 66, 26, 30, 58, -15, 100, 48, -9, 23, 80, -30, 95, 61, -58, -121, -58, 126, 119, 59, -22, -24, -44, 44, -92, 71, -110, -95, -81, 36, 35, 55, -44, 124, 20, -71, 1, 117, -79, -36, 103, -75, -47, 61, 86, 50, -67, 64, -116, 75, -61, 30, 64, -65, -32, -124, -126, 57, -58};
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
    msg.setTimeStamp(0.956884119606);
    msg.setSource(63207U);
    msg.setSourceEntity(131U);
    msg.setDestination(56731U);
    msg.setDestinationEntity(152U);
    msg.seq = 1240660077U;
    msg.destination.assign("OCUAXWGJHDBBUPNSH");
    msg.timeout = 14885U;
    const char tmp_msg_0[] = {109, -30, -70, 49, 19, -122, 7, -81, 94, 35, 71, -6, -105, -95, -26, -28, -2, -19, -124, -20, 80, 114, -26, 124, 51, -72, 87, 5, 28, 63, 95, -128, 45, 114, -22, 103, 125, -117, -104, 42, 83, 14, 15, 14, -126, -59, -19, 97, 102, -13, -88, 110, 119, -46, -2, 105, 38, -33, 45, -53, 109, -51, -1, 85, -83, -87, 107, -113, -119, -80, 44, 6, -109, 118, 49, 63, -113, 25, 57, 94, -117, -70, -82, -21, -100, 19, -103, -96, -9, 81, 94, 122, -53, 102, 32, 37, 69, 52, 110, 89, 63, 48, 9, -18, 103, 5, 1, 0, -102, -30, 22, 78, 124, 113, -112, -49, 13, 87, 25, 66, -63, 106, -98, -34, 10, 75, 106, 73, -60, -127, 39, -60, -97, -110, -79, 46, 112, 113, -66, -112, 26, -4, -6, 49, -36, -9, 1, 109, 116, -52, 90, 9, 32, 96, -114, 7, -67, -91, 117, -84, 70, -32, 74, -109, -88, 86, -35, -89, -99, -98, 41, 16, -65, 104, -55, 62, 74, 106, -70, 42, -45, 120, -119, 36, -97, -112, -83, 122, -39, 51, 23, -87, -33, -120, -122, 119, -60, -5, -8, 0, 30, 72, -84, 90, 66, 100, 79, -57, -127, 91, 112, 58, -95, -45, -12, -28, 0, -10, 80, -5, -115, -37, -59, 84, -86, -127, -30, 10, 48, -52, -8, 116, 53, 115, -103, -5, -85, 21, -29, 49, -44, 24, 102, 59};
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
    msg.setTimeStamp(0.0101288859815);
    msg.setSource(55768U);
    msg.setSourceEntity(157U);
    msg.setDestination(49469U);
    msg.setDestinationEntity(16U);
    msg.seq = 3699950402U;
    msg.destination.assign("FSLHNXUVHIDCXZJGRQUFORIPBCLGNKWZQZCZPDBRGYZMPNQFLSALQYMRFIHMBBHUVSSEVGKYGVXAPUKKNRGWUUWRQUAVNDCWSIYOOBZWOQZXOYQJGTOCLBZISEDBHKKMDPAJFHXEJJKTCMJHYNRCADXLAMSSCDES");
    msg.timeout = 45745U;
    const char tmp_msg_0[] = {-14, 28, 65, -63, -17, 87, 42, 32, 12, -109, 115, 25, 1, -5, -70, -58, 101, 72, 86, 62, 67, 102, 72, -87, -125, -51, 21, 60, -97, 77, 5, 60, -117, -95, -74, 126, -27, -114, -101, -65, -12, 45, 69, 25, -97, 69, -94, 62, -21, -120, 97, 44, 100, 71, -115, -62, -128, -81, 53, -2, -58, -16, -24, 94, -119, -27, 101, -22, 93, 22, -67, 106, 46, 24, -113, -48, -115, -59, -76, -62, -87, -32, 94, -25, 120, -53, -39, 125, -48, 22, 33, 118, -98, 15, -99, -63, -26, 123, 19, -13, -111, 105, 86, 19, 61, -123, 27, -122, 6};
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
    msg.setTimeStamp(0.647854353812);
    msg.setSource(39349U);
    msg.setSourceEntity(175U);
    msg.setDestination(2052U);
    msg.setDestinationEntity(16U);
    msg.source.assign("XZWVRFFAALVWVKPWFTYWSURBQADDRXKRPFRXTLPIERJDGCOMPKXMYOUORSWGGEXPDMIJCNGSGPYXVHIIQOSTCZJXZVHGAHOEDRDZOLXUCJNWQSFBPQNJVYFHBANCMLQNGUHONMWHINQTULHRGACKMEUTTSIBDZITQCGBYNWZGAMKEPJJLTAKZIOJBOCKAMIELVBEYSSSXIHEENLQACZWMZVTTPHOFUMEYZDQYQULVYPRJKDYJLXDHKNBBUCBS");
    const char tmp_msg_0[] = {-75, -63, 44, 69, 110, 59, 73, 63, -123, -71, 51, 89, -93, 93, -10, -79, 35, 15, 0, -6, 30, -107, 16, 75, -50, 37, -24, -126, -29, 58, 15, 23, -32, -124, 49, 98, 97, -41, -120, 74, 63, 102, 122, -35, 0, 19, -14, -100, -102, 35, 29, -87, 119, -69, 70, 10, 75, -69, -52, -71, 117, 20, -11, 106, 43, -15, 46, 59, -85, -124, 17, -71, 116, 104, 29, -34, -107, 108, 80, 59, 57, 106, -120, -24, -116, -26, -112, 16, 103, -110, -98, -101, 79, 65, -51, 117, 8, -11, -82, -54, -123, -57, 44, -88, -83, 102, 116, 114, 119, -79, -46, 10, 7, -81, -56, -4, -117, 60, 63, -22, 33, 0, -89, -102, 82, 30, -36, 29, -46, -54, -91, 96, -128, 19, 57, -62, 16, -19, 41, -111, -28, 88, 85, 104, -28, 56, -110, -93, 2, -97, -126, -8, 56, 111, -47, -123, -20, -81, -35, -98, -125, -37, -15, 115, -102, 90, -43, -60, -13, 25, 117, -126, -112, -101, -38, -56, 47, 98, -128, 1, 47, 88, -105, -86, -67, -81, -106, -105, 99, 82, 27, -97, 105, 77, 100, 22, -24, -75, 52, -86, 12, 40, 123, 58, 52, 11, 88, 91, 96, -12, 22, 59, 76, 82, 89, 125, 45, -91, -105, 67, 92, 6, -27, 28, 37, -127, 102, 113, -71, -43, -45, -21, 109, -56, 86, 90, 37, 19, 117, 68, 63, -49, 43, 103, 25, -35, 36, 107, -83, -110};
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
    msg.setTimeStamp(0.636802606077);
    msg.setSource(9696U);
    msg.setSourceEntity(115U);
    msg.setDestination(23957U);
    msg.setDestinationEntity(5U);
    msg.source.assign("MCJEAOMADFACQVNFIWBLSIPSKORSPHKEPYIQWNSDI");
    const char tmp_msg_0[] = {-58, -111, 88, 64, -43, -2, 46, -90, 125, -54, -35, 24, 120, -90, 65, 117, -51, -13, -69, -56, -48, 107, 84, -73, 102, 7, -19, -101, -98, 37, -61, -32, -39, -18, 82, 24, 107, 32, -108, 100, 53, 8, 14, 45, 78, 107, 53, 9, 53, 19, 93, -73, -114, -105, -93, 61, -27, 21, -61, -68, -89, 77, 10, -39, 116, 23, -39, 63, -54, -113, 118, -52, -42, 124, -65, -37, 63, 28, 37, 31, 66, -21, -38, 20, -56, -10, 23, 17, 59, -36, 113, 105, -128, 67, 99, 31, 43, -108, -113, 60, -13, -35, 118, -94, 95, 124, 16, -58, -78, -5, -75, 109, -59, -46, -94, -83, -76, 101, 74, 80, 42, 14, -99, -16, 61, -72, 71, 100, 103, -71, 110, 32, 4, 0, 46, 27, -88, -62, 119, -104, 100, 16, 85, -37, -56, -63};
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
    msg.setTimeStamp(0.0556375421986);
    msg.setSource(26393U);
    msg.setSourceEntity(160U);
    msg.setDestination(32632U);
    msg.setDestinationEntity(49U);
    msg.source.assign("BZCBYBKQHKZDDUCSCFILAIOWKHPCPVHQICTUOODEOXQSOWDYLBDVYWPLWQOFELKHPZGRPBWNRWUSONTDBNMILKVULYMEVTYMTSWMPMGCBFGENIMXQGHIXDGJBVAIZYJJSVZWZXTPOTNRBXLEJRWETOYXDDQHVIAFBGASAARZONJMZJKAGAGFNSNTWJREXHTEELRKUQFYQMRDUFCGTJ");
    const char tmp_msg_0[] = {-23, 65, -17, -25, -9, -99, 5, 39, 117, 33, -61, -79, -82, -94, -72, -7, -58, -64, -21, -113, 42, 87, -118, 29, -66, -89, -107, -96, 99, -99, 4, -108, 43, 108, 110, 49, -9, 120, -54, -8, -35};
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
    msg.setTimeStamp(0.606003679711);
    msg.setSource(24949U);
    msg.setSourceEntity(210U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(69U);
    msg.seq = 218836173U;
    msg.state = 193U;
    msg.error.assign("ZYQEWTFMVGCMTMPPQUPGSVZLHJRIOAYHFKIQYWETERDLXQPMWRGICLUHQJLEYINSQDZBTBTUDXRNBLQTPSCKOHJAWKKHAWISJZAJVOWHACYBJWUDNDXUNYVMCNBTIBOVNHGNOXGSCREKPEIJBLCIXFXOKOJCGNENYOZPVMDO");

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
    msg.setTimeStamp(0.400754117357);
    msg.setSource(33527U);
    msg.setSourceEntity(220U);
    msg.setDestination(22651U);
    msg.setDestinationEntity(7U);
    msg.seq = 441357321U;
    msg.state = 234U;
    msg.error.assign("MNWCULGHMXQFXSMKUSIIZNRSYEAZLFHMYGXGSPLXVRJITKJLSBRLYBYAUJYWROJQ");

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
    msg.setTimeStamp(0.666350805198);
    msg.setSource(12782U);
    msg.setSourceEntity(144U);
    msg.setDestination(19642U);
    msg.setDestinationEntity(169U);
    msg.seq = 1853027511U;
    msg.state = 251U;
    msg.error.assign("PHFRBFNXSGSBNLJQOLCOTYTHETOWNDWXSGEAYHWPCMHACZDFBPLOXZZIXDULKEGSCEUBCDIIIFYRWGKZUTVADPDPSNJZOOWVOMVZGFHMRVRPAZILCDRSUIYMDMJXRGJNYXEVAAVKNXUTBICYNAETQKRJBKWUQTEQSJARBHUEOOLVMHQKYTCEZXSPIGQKLLKYVOFCTIPWGJBQXUHWWURNYASBSNZFMMRVFTPMJFHMQIYJEKPDUGQNDQLJKX");

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
    msg.setTimeStamp(0.383144266552);
    msg.setSource(19707U);
    msg.setSourceEntity(83U);
    msg.setDestination(50187U);
    msg.setDestinationEntity(163U);
    msg.origin.assign("VPZQJWYAZBKOMAGOIJCCZSRTTQCQHYMDHJVSOEZGANDUSGRZWKLQCLASVXEJVIPFOUOASWENNPYEASRKSOVTOVYKPKXDUWAGO");
    msg.text.assign("QAKEKEGPWENIHMBSVTGNDAAOIQCHBPWFEUDYDBEDQQIRCMGNELCCLNJTIVTPBJBCQZNJTOUYYROHHFXYHAWZZAECDQAJPUYKHBSOXNFDSCFPRGMGXPRUXNHOASRXWJWDXRWVKVKLIKZJDRQFLIROWGTMHQAPUUEYWGZGBOIEAFBVXFRZKITHZABMUKGJLDVCMRVSVQTFXKZYJN");

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
    msg.setTimeStamp(0.629250834661);
    msg.setSource(44486U);
    msg.setSourceEntity(237U);
    msg.setDestination(38739U);
    msg.setDestinationEntity(126U);
    msg.origin.assign("VTCMDHJWVBWQZAXGTFEOSVXWVBKBLGQMHUAVIYGZORSQEPRFSGRNPPNBMZMDPDNIPNWBMUEBXNXUNLPAJFUJBIHTFFHSOPQLMFCDGHCYVVDHKCFQOOKJWHNRFYIAQSMVYSTOZYCGXTJKYWQDKMXZIAKUOKGSZERHWLBFJJQLLTUQIYGRGA");
    msg.text.assign("IXCTVCVZVPYSFFYLVCEC");

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
    msg.setTimeStamp(0.685963156812);
    msg.setSource(31775U);
    msg.setSourceEntity(8U);
    msg.setDestination(46696U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("KXBDCOFFPZYMRAKUBCPKUCIWHIBGRURZXPLYGQTCZFVSFZIJRIOXNGQXLDBNRSONCQCOCLCZECNLFYUXHJSHAV");
    msg.text.assign("SFGKKEHDCOGKFACTIYKTVPNSMPEFCB");

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
    msg.setTimeStamp(0.608243354055);
    msg.setSource(30230U);
    msg.setSourceEntity(81U);
    msg.setDestination(31204U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("ESIQVQILYSOLXQGLGGRPKHKYLSMUBTZUJCBCWRRGQMJNWGPCEZIRDFMOMKPVDTFMXWBWCUCARJUIIWXEZEIJMXXHAZUFJWFUJNOBARVSZTACNXOKUXWIQFHHDLZERBISNBALMQDHCVYODQVJGDLZJDRNQHMWAVPVN");
    msg.htime = 0.629135136187;
    msg.lat = 0.483546971761;
    msg.lon = 0.185744537217;
    const char tmp_msg_0[] = {-5, -109, 83, 115, -50, -62, -66, -65, -113, -91, -80, 3, 21, -58, -23, -95, -45, -48, -102, 71, -46, -128, 34, 75, -36, 89, 82, -7, 48, 18, 71, 53, -74, -120, 17, -98, 119, -24, 52, 40, 86, -80, -78, 51, -116, 23, 59, 76, -51, -10, -95, -95, 59, 16, 118, -114, -128, -66, -82, 65, -86, 96, 97, 20, -76, 25, 71, 1, 99, -78, 5, 82, -5, -41, 10, 10, -100, 93, 4, -56, 62, -34, 21, -100, -82, -50, -46, 124, -124, 21, 77, -52, -46, -125, -104, 90, -124, 11, 33, -43, 45, 29, -87, -77, 113, 24, 43, 32, 40, 102, 73, 107, 11, 99, 97, -61, -38, 51, -27, 30, -19, 99, -40, 86, 44};
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
    msg.setTimeStamp(0.343548557696);
    msg.setSource(13723U);
    msg.setSourceEntity(249U);
    msg.setDestination(44367U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("YFURTSPDNSFMOTYYVHEIURNTNSPNBJBATBTKJFXVRRVZLCFJHBDXSI");
    msg.htime = 0.920655311947;
    msg.lat = 0.342790283653;
    msg.lon = 0.0696240817167;
    const char tmp_msg_0[] = {0, -121, 109, -24, -11, 4, -73, -25, 61, -37, -56, 4, 125, 26, -16, 103, -115, 113, 84, -73, -68, 120, -72, 11, -22, -106, 20, 74, -123, -6, 110, 30, -96, 4, -37, -113, 67, -33, -68, -79, -124, 89, 23, -7, -49, -21, 80, 54, 81, 5, 83, -77, 126, 2, -94, 12, 116, -118, -102, -100, 107, 21, 83, -64, -37, -101, 41, -45, 39, 115, 73, -107, 30, 68, -38, -17, -3, -108, 115, -52, 111, 59, -35, 58, 78, -11, -24, 72, 119, 122, 100, -28, 101, 25, 54, 40, -35, -70, -123, 111, -68, -77, 21, 63, 117, 7, -50, -106, 68, 96, -124, 13, -21, 97, 122, 18, -19, -121, -70, -120, -100, -115, 34, 43, 69, -14, -83, -41, 88, 22, -102, -77, -52, -57, 24, 101, 26, 100, -57, 84, -46, 62, 110, 110, 77, -112, 49, 25, -12, -77, -38, -23, -42, -85, 124, 26, -123, 32, -72, 118, -31, 27, -7, 118, 51, 61, 75, -95, 101, 117, -64, -45, 59, -13, -15, 48, 76, -29, 26, -112, 102, -78, 8, 12, -8, -84, 39, 5, -71, 30, 102, 15, 99, 62, 31, 83, -119, 82, -46, -128, -73, 110, -81, -8, 104, 90, -74, -1, -72, -7, 25, -31, 55, -126, 29, -58, 33, -31};
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
    msg.setTimeStamp(0.717293495487);
    msg.setSource(9101U);
    msg.setSourceEntity(168U);
    msg.setDestination(24724U);
    msg.setDestinationEntity(23U);
    msg.origin.assign("FFHAJETJPFGTZF");
    msg.htime = 0.828745058201;
    msg.lat = 0.159561989984;
    msg.lon = 0.182744824152;
    const char tmp_msg_0[] = {-110, -24, -45, -100, -5, -122, 74, 117, 38, -57, -106, 8, 49, -68, -14, -28, -26, 46, 75, 13, -115, 22, 111, 114, 20, 34, -41, 94, -74, -89, 0, 14, 82, -27, 102, 9, -54, -22, -20, 24, -121, -127, -88, 13, -44, -62, -43, 52, -16, -30, 74, -17, 113, -126, -81, -77, -11, 60, -121, -103, -84, -111, -7, 71, 7, -40, -32, -84, -14, -56, -12, 42, 76, -38, -51, -128, 113, 87, 94, -17, 18, -27, -63, 112, 12, 55, 48, 96, -65, 82};
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
    msg.setTimeStamp(0.614800906812);
    msg.setSource(13860U);
    msg.setSourceEntity(185U);
    msg.setDestination(38293U);
    msg.setDestinationEntity(240U);
    msg.req_id = 10663U;
    msg.ttl = 10961U;
    msg.destination.assign("WYUPVKLQXAKWTUXEEIBAKEQXQIBLEABPPWIYKOMUSBAPSFOG");
    const char tmp_msg_0[] = {63, -69, -102, 0, 29, -43, 106, -109, -106, -88, 87, -96, -23, -8, -107, 94, -11, -35, 77, -68, 72, 94, -59, -36, 19, 74, 119, -50, 45, 113, -2, -19, 65, -24, 83, -29, -111, 19, -42, 1, -62, -22, -13, 39, 12, 26, 64, -84, 23, -23, -8, 90, -10, -111, -126, -79, 63, 125, -43, 124, 13, -42, 38, 36, 91, 72, -8, 40, 91, -1, -125, -52, -118, 61, -120, -92, 20, -48, -126, 48, -87, 110, -61, 56, 102, -123, -50, -63, 56, 116, 121, 12, -4, 21, 96, -28, -40, 72, 123, -118, 19, -123, -35, 40, 94, 98, 0, 31, -6, -6, -101, -30, -42, -100, -47, 125, 3, 51, 90, -49, 124, -93, 123, 61, -40, 80, -106, 57, 62, 49, -4, 28, -121, 14, -128, -106, -38};
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
    msg.setTimeStamp(0.613837687061);
    msg.setSource(26230U);
    msg.setSourceEntity(168U);
    msg.setDestination(59344U);
    msg.setDestinationEntity(82U);
    msg.req_id = 47397U;
    msg.ttl = 810U;
    msg.destination.assign("MVYVHVTOFNZYCGMGNFUIZRCTEVEQECWFRWLIOXWHMKBLJHZGIWNLCQADHRBNGSMLYUWSQESDDEMOSYZMUGYFSBDVVJIZUKIUICKDCKOOPFFKMAZPZYAAVNDNHJXCGTXBJTPXRXOFSBGJRCLXAFJVERZPILJUOHRLQDYBKLGLPPUSYO");
    const char tmp_msg_0[] = {-38, -5, 90, -75, 99, -67, 86, 5, -16, 55, 39, 113, 85, 49, -94, -101, 69, -118, -27, 36, -122, -67, -54, -49, -29, 81, -9, 111, -55, 18, 66, -16, -69, 102, 91, 63, -5, 118, -64, 17, 89, 73, -64, -26, -105, -76, -4, -9, -40, -30, -117, -26, 102, 59, -78, 9, -118, 9, 23, 44, 74};
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
    msg.setTimeStamp(0.97086126269);
    msg.setSource(50704U);
    msg.setSourceEntity(170U);
    msg.setDestination(48933U);
    msg.setDestinationEntity(156U);
    msg.req_id = 39169U;
    msg.ttl = 10303U;
    msg.destination.assign("KEWICNSXSLJHKYESENOUEWOFGAJOIZTMAKPXXXFDJGOPPCBJPYSMASRVFAOBRUNWFNGKWK");
    const char tmp_msg_0[] = {19, -25, 17, -125, 120, 116, -85, -30, -127, -98, -60, -97, 14, -47, -79, -21, 126, -85, -34, -44, -65, 45, 22, 99, 38, -39, 83, -30, -88, 1, -42, -28, 119, -18, 63, -16, -119, -106, 91, -128, 84, 93, -77, -30, -66, -28, 20, 126, 7, 72, 15, 109, 123, 121, 45, -109, 28, -49, 32, 63, -27, -54, -36, 43, 19, -42, 80, -33, 11, -117, 16, 57, -86, 28, 108, 88, -109, -31, 58, -97, 123, -69, 53, -108, 65, -27, -90, -22, 91, -32, 28, -25, -118, 72, 49, 100, -87, -114, 55, -102, -125, -7, -36, -24, -13, -104, 76, 60, 28, -81, 95, -79, -35, -56, 107, -4, 89, 17, 51, -91, -40, -5, 126, -77, -4, -49, -108, 119, -80, -119, -118, -10, -114, 76, -109, -106, 40, 13, -59, -27, 71, -75, 57, 6, 49, -24, 106, 33, -95, -88, -112, 84, 56, 54, -12, -32, -19, 81, 11, 85, -50, 65, -49, 49, 53, 59, 93, 77, -26, 112, -112, -112, -30, 112, 31, -118, -75, -23, 58, 0, -61, 24, 38, -58, -61, -5, 17, -38, 92, -50, 108, 63, -54, 81, 43, -80, 53, 10, 101, 55, -30, 70, -98, -85, -100, 23, -6, 66, -4, -13, -79, -92, 120, -103, -123, -59, 93, 53, 64, -98, -98, 61, -7, 92, -33, 107, -71, -64, -7, 58, -45, -95};
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
    msg.setTimeStamp(0.708942794069);
    msg.setSource(491U);
    msg.setSourceEntity(117U);
    msg.setDestination(21211U);
    msg.setDestinationEntity(117U);
    msg.req_id = 21240U;
    msg.status = 182U;
    msg.text.assign("VRBOLSLBCVSHCBBOQOJQBOHTCEJNIZQVHCLIGEYKVZMCRGPPTHEFDXENZUZEPAZWOTOGSZODGPWVTRAGMPHUJNMLUMQAYAUZBLQUFNZDSMLBJQROWFMXILIICLBAZP");

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
    msg.setTimeStamp(0.00542330882565);
    msg.setSource(43893U);
    msg.setSourceEntity(141U);
    msg.setDestination(566U);
    msg.setDestinationEntity(21U);
    msg.req_id = 53900U;
    msg.status = 205U;
    msg.text.assign("SOZFWLUMDWMKUYPWNJVCUSBZPRCJXGTIGEGRUFUVHDFZQKVIOCZREXVIIMJQYKGGBRESLZMHGRBCOFNTXNLDTVVMDNZAQBOYJTUJHYQFUJPKSK");

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
    msg.setTimeStamp(0.830488952254);
    msg.setSource(13534U);
    msg.setSourceEntity(1U);
    msg.setDestination(53810U);
    msg.setDestinationEntity(191U);
    msg.req_id = 29536U;
    msg.status = 107U;
    msg.text.assign("LOREVDEEBTTUYSILQBFSCFGDQCEVTWSGZTRAWAWJAJWPNKPVQEUZSLGWQCRDRINBYZBPKGIKVTNKHAKLFDFLVTIZYSCMHGOVRSFZKBAJPFLGSUYCEJXBJPXANUDCBUCSIRRTWIEPFALTTKHXMWXOODEUNCRZBYDJHEQXKVDNZZVQBSQLDMAQXXURUPHGJRYXNVGVNWMHYPFINXBYAHMYZFLAFIOMHIGZGJYSQOTUL");

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
    msg.setTimeStamp(0.0824111325627);
    msg.setSource(41731U);
    msg.setSourceEntity(19U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(87U);
    msg.group_name.assign("YEPUTLBVZZKOGXUMOHJPIBFLVSIVHNULDNHXMHGMECRUDZRKHAWRJZAAWJXUQNTGIWHTFWFKAUVMPVEGYJJSYBBIQO");
    msg.links = 3479592123U;

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
    msg.setTimeStamp(0.528400923086);
    msg.setSource(31375U);
    msg.setSourceEntity(143U);
    msg.setDestination(5575U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("YFPAUOBKPWBVUCILNGRSLKJFHAYQPKMMNULBUZWGGHECLZXOYDCERKPXVSFBLHTVETNGQPGQPXMFOHTTWTUIHNKCYDFQDCOTQQWLVDKWNKQIPBREIFPROFDAAGPUEMKVXZRCYTCMWOUSYBSJBHFEDMJAXZDVIVLSAJPQTRAVLWYFZMNHHOLDRVJBUHRZJEZBXNWRBIMXTIJMILJETGNYSCVDEZUMAFGUYXJSOOWCXKKGQXAISZZOHNDGS");
    msg.links = 3617255297U;

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
    msg.setTimeStamp(0.0873714461122);
    msg.setSource(8200U);
    msg.setSourceEntity(211U);
    msg.setDestination(55795U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("OZOKTBMQDBPGDTRBCRIWEJZIPNZOAYCXUTRKKJXYMBYJORAWUHAULLZOTFUNPCHRUIFUJAETFAKYSWQIOPKVPMOBQIMX");
    msg.links = 3398693411U;

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
    msg.setTimeStamp(0.940862838785);
    msg.setSource(28750U);
    msg.setSourceEntity(90U);
    msg.setDestination(56111U);
    msg.setDestinationEntity(55U);
    msg.groupname.assign("GEANFDTRCKAVECWJFVIIALALSWQHSKPHZKPOJXMIJCNDBZJKRATMBIRLBIXDWQYTURYZVUMESBNDDYEPFVLUXMKLBHIHBPPMHRTFGJWUTWSKUQGYLYXFTJV");
    msg.action = 49U;
    msg.grouplist.assign("ORWHCLYAQAUKUJSVQSPYNFJBGPOCKMOHBSBFLQGOUALSRZUZLOAQPVVDPCMHEMEWLSGXKXQEHBGLPEWDCBPISGRIMOWTOVXLDRZMNWJTXX");

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
    msg.setTimeStamp(0.025368796211);
    msg.setSource(19590U);
    msg.setSourceEntity(1U);
    msg.setDestination(13084U);
    msg.setDestinationEntity(34U);
    msg.groupname.assign("QHIYNNJOPBIKRCABMMKGXECDXLLPLGGWUMUZSJRRZBBSQXKZDBJZPDQRGZVAYISECMLUSCDFA");
    msg.action = 100U;
    msg.grouplist.assign("CEYTNDCJGFYHQLABYWYFZDJQBVPODTONKHIZVZRSMROQTAFZLLIGUVKGGEYWUEYRJFNXHMVIQKZJGEABLBQMAVSOKMAOIKNLKCAEUIBVRWWXFIQXMXSEQLLMRCBDFHEDZCRFWKZCNDH");

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
    msg.setTimeStamp(0.508383233936);
    msg.setSource(28173U);
    msg.setSourceEntity(145U);
    msg.setDestination(64487U);
    msg.setDestinationEntity(231U);
    msg.groupname.assign("HZSVGQQEPAAOQKEYYQOJSIRMBYBNOSXXVXQXJKLOGZFKUFXNEMHOTCT");
    msg.action = 34U;
    msg.grouplist.assign("VGFTXJWBDDZKIOPETQJOBRYWTHNECGQQ");

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
    msg.setTimeStamp(0.315701418795);
    msg.setSource(29634U);
    msg.setSourceEntity(175U);
    msg.setDestination(776U);
    msg.setDestinationEntity(254U);
    msg.value = 0.102986602222;
    msg.sys_src = 4721U;

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
    msg.setTimeStamp(0.961758056158);
    msg.setSource(7582U);
    msg.setSourceEntity(4U);
    msg.setDestination(46778U);
    msg.setDestinationEntity(104U);
    msg.value = 0.107316576926;
    msg.sys_src = 57194U;

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
    msg.setTimeStamp(0.8265864732);
    msg.setSource(13390U);
    msg.setSourceEntity(15U);
    msg.setDestination(38427U);
    msg.setDestinationEntity(37U);
    msg.value = 0.713130004268;
    msg.sys_src = 26231U;

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
    msg.setTimeStamp(0.708079577089);
    msg.setSource(44022U);
    msg.setSourceEntity(117U);
    msg.setDestination(59247U);
    msg.setDestinationEntity(217U);
    msg.value = 0.384141186804;
    msg.units = 48U;

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
    msg.setTimeStamp(0.257072769172);
    msg.setSource(41442U);
    msg.setSourceEntity(92U);
    msg.setDestination(35143U);
    msg.setDestinationEntity(158U);
    msg.value = 0.607563709273;
    msg.units = 53U;

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
    msg.setTimeStamp(0.237261985473);
    msg.setSource(7713U);
    msg.setSourceEntity(37U);
    msg.setDestination(31440U);
    msg.setDestinationEntity(160U);
    msg.value = 0.117575189851;
    msg.units = 246U;

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
    msg.setTimeStamp(0.236711505036);
    msg.setSource(10295U);
    msg.setSourceEntity(33U);
    msg.setDestination(65076U);
    msg.setDestinationEntity(189U);
    msg.base_lat = 0.524947397986;
    msg.base_lon = 0.549033299645;
    msg.base_time = 0.748184710711;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 22411U;
    tmp_msg_0.destination = 11582U;
    tmp_msg_0.timeout = 0.63630920877;
    IMC::MessagePart tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.uid = 176U;
    tmp_tmp_msg_0_0.frag_number = 148U;
    tmp_tmp_msg_0_0.num_frags = 25U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {56, 60, -24, -32, -91, -92, -63, 89, -82, -18, 69, 33, 92, 120, 22, -77, 109, 125, 63, -118, 8, -119, -52, -127, 21, 110, -69, 100, 123, 17, -50, 84, 7, 98, -60, 88, -107, 98, -121, -30, 62, -65, -48, -83, -123, 115, -74, 91, -115, 85, -31, -121, -84, 121, -15, 44, 81, -31, 31, -49, 74, 98, -87, -128, 70, 80, 91, -119, 76, 100, -34, -6, -119, 6, 113, -55, 119, -117, 94, 86, -61, 30, 123, 28, 66, 27, -93, -14, -20, -42, 111, 72, 48, -30, -6, 33, -16, 56, 14, -112, 105, 109, -14, -105, 27, 40, 24, 101, 111, -96, 50, 70, -29, -1, 59, -64, -111, -67, 8, -6, -69, 9, -76, -115, -73, 26, 80, 13, 69, 51, 47, 45, 96, 61, -49, -16, -67, 47, 36, -54, 71, -9, 23, 50, 123, 44, 119, 107, -34, -85, -43, 97, -62, -38, 55, -4, -38, 117, 121, -42, -7, 116, -99, 64, 123, 92, -115, 58, -98, -29, -38, -5, -103, 103, -80, 123, 60, -29, 39, -28, 59, 83, -21, 120, -80, -125, 23, 1, -60, -15, -18, 52, 39, 88, -79, 110, -59, 47, 13, -122, -25, 58, 79, -38, 26, 11, -76, 35, 4, -48, 67, 65, -21, -12, 62, 48, -24, -10, -121, -72, -102, 72, -106, -12, 14, 17, -111, 70, -77, 38, -91, -4, 99, 97, 73, -66, -54, 42, -55, 80, -1, -100, 15, 124, 83, 92, -33, 23, -74, -97, -12, 23, -53, 68};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.782460907402);
    msg.setSource(15314U);
    msg.setSourceEntity(69U);
    msg.setDestination(45908U);
    msg.setDestinationEntity(193U);
    msg.base_lat = 0.234235756101;
    msg.base_lon = 0.928983835901;
    msg.base_time = 0.316192328356;

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
    msg.setTimeStamp(0.520442603085);
    msg.setSource(62244U);
    msg.setSourceEntity(30U);
    msg.setDestination(22892U);
    msg.setDestinationEntity(207U);
    msg.base_lat = 0.98322821672;
    msg.base_lon = 0.634346746326;
    msg.base_time = 0.0608681225748;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 5801U;
    tmp_msg_0.priority = 11;
    tmp_msg_0.x = 9598;
    tmp_msg_0.y = -28406;
    tmp_msg_0.z = -2615;
    tmp_msg_0.t = 6315;
    IMC::Magnetometer tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 53968U;
    tmp_tmp_msg_0_0.lat = 0.646117976927;
    tmp_tmp_msg_0_0.lon = 0.658471137632;
    tmp_tmp_msg_0_0.z = 0.653526049742;
    tmp_tmp_msg_0_0.z_units = 69U;
    tmp_tmp_msg_0_0.speed = 0.297661754907;
    tmp_tmp_msg_0_0.speed_units = 91U;
    tmp_tmp_msg_0_0.bearing = 0.63705651515;
    tmp_tmp_msg_0_0.width = 0.522166334765;
    tmp_tmp_msg_0_0.direction = 0U;
    tmp_tmp_msg_0_0.custom.assign("EJWXEDPEGORRIPUAQOBGDBAZOZQFMYMXQWQGISFOLWPVVHBLKTSEMYBSULOZJRKXEKDUKTSWKXDKGSCUJCQNEPJMIHASFLTVTJFPPTFUMYOZYIUMCVYVGNADXZLCYQKUNJJNDVXACCTXIRNCBUKMEGDHHFGNXLZWCCQOUQRRZKGNCNIWGWMRSIEWEXVHD");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.560646308565);
    msg.setSource(47664U);
    msg.setSourceEntity(253U);
    msg.setDestination(14072U);
    msg.setDestinationEntity(127U);
    msg.base_lat = 0.552750946622;
    msg.base_lon = 0.72192846547;
    msg.base_time = 0.300576919183;
    const char tmp_msg_0[] = {-47, -11, -117, -88, 4, 18, -20, 97, 101, -110, -64, -110, 37, 50, 30, 99, 50, -119, -52, 74, -43, 47, 74, -106, -123, 21, -96, -8, -8, 6, -49, 8, 111, -95, -8, -21, 23, 15, 35, -13};
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
    msg.setTimeStamp(0.27539716123);
    msg.setSource(51595U);
    msg.setSourceEntity(160U);
    msg.setDestination(55756U);
    msg.setDestinationEntity(208U);
    msg.base_lat = 0.530613340843;
    msg.base_lon = 0.376425382665;
    msg.base_time = 0.0804833083224;
    const char tmp_msg_0[] = {9, 93, 79, 65, -107, -27, 114, -27, -6, 56, -88, 98, -118, 15, 71, -107, 63, -48, 59, 70, -120, 26, 36, -88, 54, 51, 23, -56, 105, -71, 48, -121, -51, -41, 11, -73, -122, -64, -127, -24, -64, 84, -80, 29, -7, 58, 104, -111, 14, 84, -122, -38, -64, 66, 42, 91, 22, -70, -111, -110, 95, 58, 108, 16, 65, -6, -114, 4, -26, -115, -32, 15, -57, -1, -64, 122, -58, 122, 21, 70, 17, 14, -111, -82, 117, 15, -121, 112, 114, 11, -36, -111, 101, 67, 65, -10, -108};
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
    msg.setTimeStamp(0.128266567668);
    msg.setSource(63197U);
    msg.setSourceEntity(61U);
    msg.setDestination(10769U);
    msg.setDestinationEntity(85U);
    msg.base_lat = 0.632843850067;
    msg.base_lon = 0.0934272803851;
    msg.base_time = 0.594883666181;
    const char tmp_msg_0[] = {50, -5, 76, -25, 120, -108, 94, 80, -103, -59, 7, 121, -79, 17, 80, -46, -99, -22, 16, -13, 68, -46, 74, -80, -21, -81, -1, 27, 81, -26, 85, 117, 126, -96, 83, -47, 114, 44, 55, -76, 7, 124, -120, 59, 119, -41, -88, 117, 123, -75, 89, -126, -79, 68, 3, 70, 47, -76};
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
    msg.setTimeStamp(0.310134261922);
    msg.setSource(16910U);
    msg.setSourceEntity(213U);
    msg.setDestination(53565U);
    msg.setDestinationEntity(218U);
    msg.sys_id = 22660U;
    msg.priority = 23;
    msg.x = 24112;
    msg.y = 22679;
    msg.z = 9619;
    msg.t = 9371;
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {91, 49, -71, 88, 106, -108, 24, 86, 40, 59, 119, -115, 82, 74, -100, -100, -78, -48, 104, 103, 37, 89, -18, -2, 113, -90, -93, 84, 101, 107, 73, 100, -48, 110, -98, -15, -66, 23, 29, -26, 45, -85, 39, 87, -98, -113, 86, -83, 10, 39, 23, 69, -128, 33, 88, 76, -57, 107, -62, -103, 10, 2, 36, 47, -5, 47, -1, 119, -114, -37, 123, 73, -17, -32, 109, 110, 57, 80, 114, 22, 55, -70, -52, 37, 100, -121, -35, 102, 12, 86, 3, -116, 67, -21, 35, 32, -20, -69, 47, -20, 16, 117, 70, -98, -118, 79, -3, -22, 25, -29, -118, 58, 74, -68, -126, 120, -117, 3, -18, 64, 0, 92, -99, 42, -30, -79, 108, -15, 115, 105, -101, -81, 87, 4, -33, 60, -65, -79, 85, -71, 57, -30, -94, 121, 35, -14, 109, 78, 8, -51, 113, -99, 101, -32, 60, 15, -18, -78, -79, -102, 56, 83, -67, 78, -122, 16, -23, -54, -112, -89, -76, 49, -123, 95, -72, 75, 15, 13, 31, 93, -91, 6, 58, -28, 62, -19, -13, -97, -74, -20, 52, -83, -108, -96, -48, 62, 35, -27, -106, -97, 78, -14, -91, -32, 33, 97, -66, 105, 11, -4, -72, -7, 26, 86, 24, 58, -74, 51};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.710202665754);
    msg.setSource(26705U);
    msg.setSourceEntity(65U);
    msg.setDestination(29055U);
    msg.setDestinationEntity(60U);
    msg.sys_id = 39742U;
    msg.priority = -85;
    msg.x = 29297;
    msg.y = 8856;
    msg.z = 28492;
    msg.t = -7519;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 32653U;
    tmp_msg_0.type = 73U;
    tmp_msg_0.utc_year = 61135U;
    tmp_msg_0.utc_month = 32U;
    tmp_msg_0.utc_day = 26U;
    tmp_msg_0.utc_time = 0.092494361061;
    tmp_msg_0.lat = 0.269359576675;
    tmp_msg_0.lon = 0.907668099803;
    tmp_msg_0.height = 0.305117505;
    tmp_msg_0.satellites = 64U;
    tmp_msg_0.cog = 0.99169780947;
    tmp_msg_0.sog = 0.475400500005;
    tmp_msg_0.hdop = 0.895587553143;
    tmp_msg_0.vdop = 0.775585408735;
    tmp_msg_0.hacc = 0.770700852629;
    tmp_msg_0.vacc = 0.335953136945;
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
    msg.setTimeStamp(0.574907021962);
    msg.setSource(31720U);
    msg.setSourceEntity(174U);
    msg.setDestination(15354U);
    msg.setDestinationEntity(197U);
    msg.sys_id = 47314U;
    msg.priority = 105;
    msg.x = 20315;
    msg.y = -5601;
    msg.z = -21721;
    msg.t = 24907;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 175U;
    tmp_msg_0.comm_interface = 206U;
    tmp_msg_0.period = 25648U;
    tmp_msg_0.sys_dst.assign("VVQZQOWFKALXFZHXTSAVRVDBJEWOHNYXACHXMRQZLIWIDQTAFUDWEPALFYZ");
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
    msg.setTimeStamp(0.449715737557);
    msg.setSource(23127U);
    msg.setSourceEntity(254U);
    msg.setDestination(1621U);
    msg.setDestinationEntity(158U);
    msg.req_id = 20821U;
    msg.type = 47U;
    msg.max_size = 33547U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0789502490588;
    tmp_msg_0.base_lon = 0.301461235921;
    tmp_msg_0.base_time = 0.5191194439;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 11643U;
    tmp_tmp_msg_0_0.destination = 12078U;
    tmp_tmp_msg_0_0.timeout = 0.411240184054;
    IMC::EntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("BRESRZRNKURJAKQRMEFDMBIDHKBLIFJXOHUPCFSJRIDHVDJZPFNLEQSZKQHOD");
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
    msg.setTimeStamp(0.617359843303);
    msg.setSource(24216U);
    msg.setSourceEntity(30U);
    msg.setDestination(58753U);
    msg.setDestinationEntity(114U);
    msg.req_id = 59444U;
    msg.type = 198U;
    msg.max_size = 51922U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0361633541908;
    tmp_msg_0.base_lon = 0.103018295007;
    tmp_msg_0.base_time = 0.73957404669;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 10149U;
    tmp_tmp_msg_0_0.destination = 15913U;
    tmp_tmp_msg_0_0.timeout = 0.469680591083;
    IMC::UamTxStatus tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 30355U;
    tmp_tmp_tmp_msg_0_0_0.value = 13U;
    tmp_tmp_tmp_msg_0_0_0.error.assign("PGYNSBMDFXWCTIFZUBTIRMOEWCQVWDTWKVPOCFHDKIXZODNHKYGPPZNMZPBAYBGAOLVOFTUCNQ");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.826641019785);
    msg.setSource(53955U);
    msg.setSourceEntity(143U);
    msg.setDestination(60975U);
    msg.setDestinationEntity(228U);
    msg.req_id = 23846U;
    msg.type = 239U;
    msg.max_size = 20441U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.189995733221;
    tmp_msg_0.base_lon = 0.387801526379;
    tmp_msg_0.base_time = 0.477589581182;
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
    msg.setTimeStamp(0.316060361065);
    msg.setSource(2560U);
    msg.setSourceEntity(123U);
    msg.setDestination(36075U);
    msg.setDestinationEntity(151U);
    msg.original_source = 48870U;
    msg.destination = 24553U;
    msg.timeout = 0.738632104384;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 217U;
    tmp_msg_0.numsamples = 186U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 31394U;
    tmp_tmp_msg_0_0.avg = 0.902125736229;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.717686276269;
    tmp_msg_0.lon = 0.26080906814;
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
    msg.setTimeStamp(0.685964172022);
    msg.setSource(35306U);
    msg.setSourceEntity(147U);
    msg.setDestination(61711U);
    msg.setDestinationEntity(83U);
    msg.original_source = 22660U;
    msg.destination = 14035U;
    msg.timeout = 0.531945041426;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("QSIELBWEFPJJVGUEVHUKBCTYYNDAIQCXGKWKPSMZZAZLLFNLSPUJFLCOIMMBYVHZAHQOBKWGYOASWOYGZZGXDKIPNEEVIGOZFRJJXZREAHMVBOSYMLXUHHIDEOVNDBDNJEPMKRECAPMOMRGS");
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
    msg.setTimeStamp(0.341546701217);
    msg.setSource(34227U);
    msg.setSourceEntity(217U);
    msg.setDestination(56307U);
    msg.setDestinationEntity(182U);
    msg.original_source = 18958U;
    msg.destination = 65413U;
    msg.timeout = 0.624911152888;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 19121U;
    tmp_msg_0.lat = 0.335746122151;
    tmp_msg_0.lon = 0.0143580803116;
    tmp_msg_0.z = 0.752500997295;
    tmp_msg_0.z_units = 11U;
    tmp_msg_0.speed = 0.222486421285;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.roll = 0.766709642545;
    tmp_msg_0.pitch = 0.447874553819;
    tmp_msg_0.yaw = 0.412712533861;
    tmp_msg_0.custom.assign("IAVTLTQQRESFBWIWJRXDSRXFDGBYBUEVCCJRHAUUJOEQHWGGXNKENOFKIZEAXWDMOAESIHVVGCGJNZDLLDOKYSMRSPVZEHKTZQNGNUTXDECVHSMAQKTCYQMZMFAYDMIYNFLMPGJISDBMBTJRBPXBKUTGGTYPYBIH");
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
    msg.setTimeStamp(0.71791208694);
    msg.setSource(16679U);
    msg.setSourceEntity(84U);
    msg.setDestination(36014U);
    msg.setDestinationEntity(188U);
    msg.type = 48U;
    msg.comm_interface = 65010U;
    msg.model = 24236U;
    msg.list.assign("DXEVFVXYWQVVOZAZFJHHFIHIARGTTTRAQPAVTFKDGVORBWKEKJMFDLSNQROMZQSRCCKWYCXHXTGGUOEJIIERBWJKARKPYNMNCGXLGDQZDLDSPJQWPJACDBUVPWMQE");

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
    msg.setTimeStamp(0.254801229389);
    msg.setSource(59628U);
    msg.setSourceEntity(193U);
    msg.setDestination(52702U);
    msg.setDestinationEntity(224U);
    msg.type = 201U;
    msg.comm_interface = 53960U;
    msg.model = 12041U;
    msg.list.assign("UWVDEHWTHELLIMNYYYPMIMJQIPRTOUDFHSKNHWQJRQRUMGFDHXFKVBQOCWOKYUIVBKEPBRXZTOZWAKDXFSPJMBFTODPGLKHRCDPTCTKQCNARQPCVZ");

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
    msg.setTimeStamp(0.678695327172);
    msg.setSource(59590U);
    msg.setSourceEntity(117U);
    msg.setDestination(17889U);
    msg.setDestinationEntity(97U);
    msg.type = 169U;
    msg.comm_interface = 43629U;
    msg.model = 15483U;
    msg.list.assign("LMMGKCCBWNZJZWDCOBGZMXDBSRFUSLFCZOEDKQGJMETNGHHEINBXCQHAFSDEPFQTKVYJDORYPHFXSPGMLNRMBFVHYARFMPXZWOVTGTPJQOAYKCSEJWCOLCBCXYWAIRYAFILOLXXVNKWAADZSBNVAGIJXPVTKPLHUTWBFKFHUJCPNSIYZZINKRGODH");

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
    msg.setTimeStamp(0.833190229915);
    msg.setSource(23528U);
    msg.setSourceEntity(91U);
    msg.setDestination(24456U);
    msg.setDestinationEntity(245U);
    msg.type = 241U;
    msg.req_id = 204712903U;
    msg.ttl = 60948U;
    msg.code = 242U;
    msg.destination.assign("LWCOJPMCNEWJCOSYZISHDRDZQEBRXHGZUHNTKFUMYHMTNERJUFFADMYLXSSCACFVAVYEEQCLZQZVRYMIIGZTQGVAHTWUZVONLGOHKGMSPGMDWKFODWYJATJRJKGLXSRWQPUFRLPJOQJGYQMTAVXELIESSHEBEOFOBPRUCXBBTPFXEKIJLTI");
    msg.source.assign("TEEJTVLQLDCDEJXAMAKWTLNZRCOWEBGSGQNRPADKSRCSSDORTHXCMHFODAGEZKNVXZCQWFISBUSNWWNMONIAOFBHGPKTUIXVASPGFTFPALXKRRNPFYJKCEZMGHDRJLMQQCZUHAJVYVGUCZOQGGYDIIFOFRUBHSALJHPXWVKMZBWYUQHRCONKMUTTMWKYBXDUHFYDURLIQWOLIJTJZQE");
    msg.acknowledge = 145U;
    msg.status = 61U;
    const char tmp_msg_0[] = {-32, -118, 3, 122, -42, 94, -113, -94, -9, 54, -39, -107, -18, -50, -34, 55, -75, 84, 15, 62, 75, -46, 4, 64, -61, -100, 6, 48, -53, -104, -40, 58, -13, 7, 108, -1, -116, -95, 52, 62, -100, 30, -91, -105, -80, -82, 118, 81, -84, -71, 0, -104, 63, -81, -72, 120, 4, 27, -23, -53, 12, -16, 97, 112, 47, 2, 90, 65, -19, 39, -46, 26, 120, 97, -42, 96, 6, 70, 123, -30, -41, 47, -81, 71, 14, -56, -57, 33, -49, 10, 14, -88, -53, 47, 120, 116, 11, -68, 5, 63, 126, 80, 117, 89, 45, -28, -55, 91, -30, 76, 7, -48, -56, 13, 97, 7, -105, -113, -124, 96, -7, -5, 92, 4, -57, -33, -30, -91, -16, -112, 121, -78, 16, -31, 104, -104, 4, -114, -43, -61, -38, -53, 77, 113, -87, -16, -119, 6, -108, -93, 65, 33, 74, -41, -44, -73, 60, 44, -21, 122, -77, 3, 81, 35, 54, 23, 1, -34, -12, -6, 7, 33, -104, -77, -1, 102, -120, 48, -117, -38, 66, -7, 58, 50, -4, -32, -22, 14, -79, 118, 14, -101, 57, -42, -67, -85, 112, 74, 78, -33, -3, -72, 44, 12, 88, -108, -51, 121, 55, -112, -35, 64, 65, 69, -15, 53, 97, -113, 13, -38};
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
    msg.setTimeStamp(0.666487364846);
    msg.setSource(8936U);
    msg.setSourceEntity(44U);
    msg.setDestination(28324U);
    msg.setDestinationEntity(41U);
    msg.type = 28U;
    msg.req_id = 2934903878U;
    msg.ttl = 44434U;
    msg.code = 172U;
    msg.destination.assign("ZQKDISZPGVIQXJGGWTXDLPYYAQOBOAPBDNZTOMGKOJUYLERMAHBEMECJNIVHUYURUDKZSHBTXBVTKVFEVUXLUIJKSWDPTUMOVZLVQPBLMFISWRUHZHNHSNIHTGOCRAXYFPFHXRLYYWGNNLJPCRXEZFOVFLJCOVDCTCGDIGGAVRPLZJBQYKJIRCLQUGQWEAXE");
    msg.source.assign("WPBRTCEMMYCFTPQNUKWYNICRACOPXZSHDILTSJIELIDZTZPKIGQSVVDDWVJKQMMXARDPVSGHTRFYXGOIRLWSTCARAKYFWNIUYFDOELWNANJRCPOZLTNGHHOSAEVUKDJCHULGREFOZYEXWIBNJDKUXZJBPQPHAMXGQCFMZAKHYFOYKVXSDQGQNFEJMKVRS");
    msg.acknowledge = 9U;
    msg.status = 169U;
    const char tmp_msg_0[] = {109, -107, 73, -17, 64, 35, 14, 85, -82, 118, 51, -2, -111, -95, -95, -112, 97, 10, -50, -55, 87, -88, 94, 43, -24, -89, -87, -121, -69, 13, 120, 22, -113, -84, -111, -57, 82, 56, 22, 51, 87, 4, -42, 73, 57, 43, -88, -112, -57, 66, -5, -21, 23, -41, -57, 86, -26, 79, 59, 86, -41, 37, -70, -104, -70, 1, -35, -23, -78, 99, 36, -91, -58, -47, -78, 3, -2, 113, 25, -35, 63, 2, -102, -67, 119, -45, -34, -110, 95, 28, 87, 77, -52, 25, -15, -6, 29, 55, -113, -35, -119, -122, -14, 84, -32, 88, 61, 18, 49, 27, -94, 34, -79, -12, 55, -71, 47, -49, 84, 124, 37, -11, -45, 93, -34, 14, -36, 107, 3, 57, 90, 64, -38, -105, -63, -114, -58, -63, -114, -5, -123, 13, 23, 97, -72, 63, 49, 85, -28, -59, -44, 28, 74, -29, -58, -106, -14, -33, -21, 124, 17, -57, 103, 114, 52, -29, -59, 115, -103, 11, 34, 15, -85, -107, 97, -3, -36, 54, -123, -124, -31, 92, -55, -111, 93, -103, -1, 125, -105, 48, 99, -42, 35, 118, -35, 0, 96, 21, 7, 120, 62, 52};
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
    msg.setTimeStamp(0.430957295492);
    msg.setSource(61721U);
    msg.setSourceEntity(61U);
    msg.setDestination(20365U);
    msg.setDestinationEntity(30U);
    msg.type = 111U;
    msg.req_id = 2455860519U;
    msg.ttl = 54642U;
    msg.code = 191U;
    msg.destination.assign("HWRGYPSVOTMPQERWSHHLMSKGIISFTXAHZTHHUYFAHXTJOWWLUKPBBLOFXVLBGGQPNROMLNCIZIIKUKTZQNYHVSLQKFTVJJRDWSJVNDJZRFIMONDXPMEZLPEGPOEGQOCCARHUSCTDACUITEXNBKAAYNYRJZBVWFPDLJUPPUELEICCCQMXGBKCAOUJSGVBQYKIXVQXJUNMWBVLWRMCFHIFZQADZSDENDTT");
    msg.source.assign("NMQHTYYPFJKGZCATGIOFIQEXOSWRHVZCZUIXGYFEUOWJMVKZETPLULKKDPQRMCOUIUHBSNBSDVLDKBJWVDDTQBLIWZFLSGTYIEXXNKZXWIEKRRRGJBAFMRIREESOMPFXOTGWURPQHKXIYVOSPDVUFYHGEWWQJOVUYJFQADCMNBPSTUJHRYZNSPCSFJWH");
    msg.acknowledge = 114U;
    msg.status = 225U;
    const char tmp_msg_0[] = {-114, -6, 76, 17, -27, -126, -88, -20, -48, -104, 17, 32, -58, -27, 100, 92, 45, 91, -96, 66, -41, -24, 8, -73, -120, -53, 1, 55, 69, -56, -13, -117, 46, -107, 47};
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
    msg.setTimeStamp(0.285830069554);
    msg.setSource(62468U);
    msg.setSourceEntity(171U);
    msg.setDestination(8690U);
    msg.setDestinationEntity(87U);
    msg.id = 228U;
    msg.range = 0.0483802384226;

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
    msg.setTimeStamp(0.57427307949);
    msg.setSource(33718U);
    msg.setSourceEntity(251U);
    msg.setDestination(45011U);
    msg.setDestinationEntity(94U);
    msg.id = 60U;
    msg.range = 0.854369022198;

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
    msg.setTimeStamp(0.0726783312186);
    msg.setSource(22047U);
    msg.setSourceEntity(45U);
    msg.setDestination(6197U);
    msg.setDestinationEntity(4U);
    msg.id = 249U;
    msg.range = 0.970502138407;

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
    msg.setTimeStamp(0.14322375425);
    msg.setSource(26925U);
    msg.setSourceEntity(101U);
    msg.setDestination(40141U);
    msg.setDestinationEntity(188U);
    msg.beacon.assign("QTPPESUJNTUMKGOEQUHQVHQYMGBAVGGYOYQPDGIKCPDCWZZZYLRXFCHKFZANIXEPOJIROYRJUEEFUDLOIMSTANKSMQFOFOGDW");
    msg.lat = 0.834719578015;
    msg.lon = 0.19337599327;
    msg.depth = 0.801038585974;
    msg.query_channel = 246U;
    msg.reply_channel = 210U;
    msg.transponder_delay = 73U;

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
    msg.setTimeStamp(0.00189190000474);
    msg.setSource(24692U);
    msg.setSourceEntity(171U);
    msg.setDestination(4751U);
    msg.setDestinationEntity(146U);
    msg.beacon.assign("LMCIJINRQEYRBJSIZWQYSPWJVCIQVYGZYHCUTTAWBKXBTMVQBSKNODHPOJRWYRHJMBAVSSALXONKEJKABRSDOXZWNNEVDGKMIOKQRAGFDXBXLVAISEPJROGDZPZHPCHKGUPBUELJQMAJNIEHLUBMOLFZXKESYV");
    msg.lat = 0.611257136308;
    msg.lon = 0.0919295368901;
    msg.depth = 0.531343008045;
    msg.query_channel = 248U;
    msg.reply_channel = 191U;
    msg.transponder_delay = 96U;

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
    msg.setTimeStamp(0.0955562101119);
    msg.setSource(37905U);
    msg.setSourceEntity(21U);
    msg.setDestination(25637U);
    msg.setDestinationEntity(144U);
    msg.beacon.assign("SNSVBRHUJVFLNDPWUIAJMOANGWWHZCEMRGUSTMFSGKEWPXIZWUXDXBECIRIJSBTPQLDCVZARTYWQPIFBUTQYASMHZRUFBIANXVIRQHRILFFYXQDOOCDTPFWOKHUTZPELCMVWMBLSAHDONYXAAYOOEKFJNKVMZIXSKKPYZBJCRQCUZGREEGDODTKZVYXGCKSHVIPEWYBHEJXVJGOLUMBFCLKTKVXABQJPPNDOZTJGNJDHALMNWCMTQFQ");
    msg.lat = 0.0644941896599;
    msg.lon = 0.261245870195;
    msg.depth = 0.530798676196;
    msg.query_channel = 212U;
    msg.reply_channel = 119U;
    msg.transponder_delay = 87U;

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
    msg.setTimeStamp(0.212116447644);
    msg.setSource(33309U);
    msg.setSourceEntity(90U);
    msg.setDestination(59042U);
    msg.setDestinationEntity(172U);
    msg.op = 8U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HGGUZXDHSBWHMMUEPAPRPQFJMKZCKVMJVNNXAVKORKDNCPPVIJOBCEYMZXIBDZDDUSJYICGTNKPOYEOHBKUNPYWCOWXNDBEDCFNGLSZWDGABOQYXMVHPAOUNGYYHKLMWETYNUYTQREATWIOMRFJIRLQPSLSUZURWEGKSKLIZKJTDHOIEFVWWMFCHRZFJJLJTCDVTAAYTSINEVXIBFLBCUZXIFGALXQBQBXP");
    tmp_msg_0.lat = 0.730777142454;
    tmp_msg_0.lon = 0.612172866263;
    tmp_msg_0.depth = 0.988536844927;
    tmp_msg_0.query_channel = 46U;
    tmp_msg_0.reply_channel = 77U;
    tmp_msg_0.transponder_delay = 138U;
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
    msg.setTimeStamp(0.56568584566);
    msg.setSource(41911U);
    msg.setSourceEntity(190U);
    msg.setDestination(8641U);
    msg.setDestinationEntity(167U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.57585776908);
    msg.setSource(32546U);
    msg.setSourceEntity(106U);
    msg.setDestination(560U);
    msg.setDestinationEntity(142U);
    msg.op = 122U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XMFQNGBKQGWJOJIIHCQEJQMNCY");
    tmp_msg_0.lat = 0.23250548876;
    tmp_msg_0.lon = 0.464235272179;
    tmp_msg_0.depth = 0.0669303782403;
    tmp_msg_0.query_channel = 15U;
    tmp_msg_0.reply_channel = 161U;
    tmp_msg_0.transponder_delay = 60U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.510500560062);
    msg.setSource(11104U);
    msg.setSourceEntity(207U);
    msg.setDestination(56152U);
    msg.setDestinationEntity(14U);
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 123U;
    tmp_msg_0.period = 1627088771U;
    tmp_msg_0.duty_cycle = 2385330832U;
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
    msg.setTimeStamp(0.552066089893);
    msg.setSource(11356U);
    msg.setSourceEntity(242U);
    msg.setDestination(5525U);
    msg.setDestinationEntity(105U);
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("FKYPRDZDOEXFNVMGZJOQUTANFJS");
    tmp_msg_0.timeout = 10740U;
    tmp_msg_0.contents.assign("WPTSOHJVFIDSMQVCXBMXGMNIVZOOGWWSDTUDSCVIYLEYNHBSFNCDQUEIWIANZXGNULXFTGKNYRJTRECNLMFFABKJUYDXYVAKIAGGCELFKXILVUSLLQGHWNZZDYYREPKAQWPAHBBHEZCOEQEDCZFURGTTVRNFHSKSAJWJOWUYCVWOYLORQRPIJMBAKTDOWIMJCSZEKZOQAPGMPHBFQHJMFPXGP");
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
    msg.setTimeStamp(0.289410142548);
    msg.setSource(58472U);
    msg.setSourceEntity(82U);
    msg.setDestination(49218U);
    msg.setDestinationEntity(98U);
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 1826938535U;
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
    msg.setTimeStamp(0.68560163093);
    msg.setSource(46627U);
    msg.setSourceEntity(62U);
    msg.setDestination(52477U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.131852387539;
    msg.lon = 0.0667688051335;
    msg.depth = 0.982567190208;
    msg.sentence.assign("THOJHGHEYNEORYWLVMNZKNFXVMMCIWGYLZLAQIWBPMHAMEIUCDVPVVJDFBQFKWSOOFZGMGPIBUAEKDSNQWQJRLRFTTBCDQGWESZDRVRSNPOBSKZNILNCIACIIFJAIBQXSTUZTFSTYXWXRNWHLY");
    msg.txtime = 0.928632601226;
    msg.modem_type.assign("UHRLTQPFBGKJUDQCBAGFORPXBDYJRCETFAJUUYRHRFPNNSZMRYJUKZNKHJVYXIQEOOOJARKLADHWDDWZFYNVIPSWPAVYVXEOVLZHGWTIMGFPEWCMMPXZEKRCLKPTTIGTYZNQJSISCTFUUEFDCHQCIQVPXTLGWYMMHILQDPLKMEWFYTBXAJXYIXESXOLNSZFOSHJVKNUWVGQWKRZBEMRAOBUDNATSIQLHXCLJGOCIGMKN");
    msg.sys_src.assign("IRURVNXMSQMUWHPWDXLTNPUISLKKDEUVUCTRTFVCYKFOYEOPHOQTQPHBSQYRJOTUPJCSLCGLFEIKAXHGZKEBTGWWLYXIXLADBWVOMMPQJMEAMAERB");
    msg.seq = 24186U;
    msg.sys_dst.assign("BTXUADENGVLXATPKHGI");
    msg.flags = 89U;
    const char tmp_msg_0[] = {-48, -108, -43, -113, -17, 64, -118, -113, -79, -100, -23, 70, -66, 49, 49, -125, -121, -128, -41, 97, 33, -14, -26, -36, -55, 102, -84, 27, 114, -89, 74, 17, 10, -66, -125, 94, 70, -59, 22, 40, -32, 61, -57, 27, 33, -58, -12, -73, 26, 103, -4, -111, 65, 42, 71, 35, 1, 111, 39, -5, 39, -10, 0, -15, 72, 3, -18, 83, -47, 57, -29, 60, -19, -73, 54, -7, -46, -97, 63, 62, 23, -14, 36, 37, 72, -38, 6, 95, -111, 24, 69, 79, 21, -91, 87, -102, -14, -121, 65, 105, -76, -33, -97, 80, 78, 16, 44, -37, -51, 92, 115, 86, -44, 70, 99, -38, -11, 16, 34, 51, 19, -69, 83, 77, -8, -82, 24, 113, -26, -16, -11, -65, -16, 117, -50, -50, 115, 8, -96, -16, 122, 100, -46, -24, 85, 54};
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
    msg.setTimeStamp(0.77610109832);
    msg.setSource(38275U);
    msg.setSourceEntity(180U);
    msg.setDestination(59743U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.326365136457;
    msg.lon = 0.0157110352177;
    msg.depth = 0.339588081025;
    msg.sentence.assign("OEPYZVNVCHFOVWPLFAXMBBKGNTEFMAJNKGKEWRIMQVDGNBMJPZSGKMZIOPUQIDCDD");
    msg.txtime = 0.23696256885;
    msg.modem_type.assign("DUBBNTHMGSZWKIIQMHKFEWMMRPG");
    msg.sys_src.assign("BUAOSVGBVWRAUTZACEEVFICOIWTISYLIAYTKSAOEGLSFBJYFJUKNLSXRHZNEZVOKMMBHSSMFBTEYCYG");
    msg.seq = 64304U;
    msg.sys_dst.assign("KXKMODMZECNFHXHDRSDREIAQJMUXQIOWXPWHMQZUPPFNZSBMYUZRGVSLWSSJPQUFODTRPSHADZJOVNECPRFXWLM");
    msg.flags = 212U;
    const char tmp_msg_0[] = {-66, 2, -57, 89, 26, -60, -89, -115, 106, -101, -58, -28, -37};
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
    msg.setTimeStamp(0.658264475967);
    msg.setSource(23804U);
    msg.setSourceEntity(78U);
    msg.setDestination(35941U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.329083604954;
    msg.lon = 0.783061987963;
    msg.depth = 0.138681670501;
    msg.sentence.assign("FCOEVRDBIWRMNVBJORHTNHSUHXXFEBWIXLVJPLDXNNJYUZMVBYOABATAGEWDLPFLIOITXYNOOFQJNVUHBEZZNYQNSVTFTRANFBSXBDVSXGEZUPSQCKRUCZLFCCYIJXHKGKIKICGIAJSHEMRYPVCOTQLCTYR");
    msg.txtime = 0.187295461375;
    msg.modem_type.assign("XYFAXCKOGURUVLRVRPTSBXGIDLTQHNJRGIUNCRBQLPDBRSCAAYKQDZTPGNYIOKIEFQEACXAOAWTCBBHPMMDAVXHHEKKFXCZHLBKLR");
    msg.sys_src.assign("LDHNFRVYPECPRYGUJOJUEFQATQKESVGVFRUIGUBYXHGSZWVPVOSAJWLXBWJQCMBSKCTUKQZCLTEBXCSJKAGCMPHMARUVXNTBBBJZWWVNNIDSACDICDTNZXHQXFIWQFNXMYRTXIHPNRCWDAMOUEFZQEDSQOWJYSFVGUYOLHLVTENIJRPKYAHDKOIFSBPADMIUKZYXD");
    msg.seq = 24813U;
    msg.sys_dst.assign("OQFYCDWFESQCRLQPGPNUZVFAVPDUAFSEYZSUXUMCCHCXGYKZORFFAFNAFQTWIYKBJVZLUQSDIPTYDHJGKKHBBDMITNIAHCOPWSJIMPBVGLNVRQHZLUJYZZYSJZCVXAAELSTWONLWHWEMDBXMCORHRVBJRRJMVHUYCUDWHEFNLFGJWDJHKOYOXMKEILGNRYDOIBPXBTSZDMBTXUTKNXIPKSNQLXVRPRSKIEEAGBWXGKQEANLGAJECVQOZM");
    msg.flags = 84U;
    const char tmp_msg_0[] = {-13, -24, 5, 83, -16, -125, 2, -80, -76, -32, 44, -30, -84, 69, -61, -41, -6, -107, -60, 66, -5, 105, -68, 24, -92, 118, 118, -50, -60, 48, 51, 107, -2, 55, -71, 35, -100, -75, -3, -95, -25, 117, 76, -18, 117, -122, 100, 87, 60, 60, -29, -62, -103, 31, -79, -4, -19, -41, 102, -91, 1, 12, 77, 33, -17, 96, -18, -106, 82, -85, 79, 97, -25, -92, 38, -105, -60, -93, -105, 49, -63, 120, -122, -85, 3, -83, 40, 96, -64, 111, -81, 33, -51, 76, 9};
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
    msg.setTimeStamp(0.710847755266);
    msg.setSource(18899U);
    msg.setSourceEntity(1U);
    msg.setDestination(55771U);
    msg.setDestinationEntity(154U);
    msg.op = 157U;
    msg.system.assign("RCZNSIVJGOIFCDKNIPLNQXDBACELTGZAVDGRJMDINHV");
    msg.range = 0.246556658142;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("RWGSQAPIED");
    tmp_msg_0.type = 113U;
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
    msg.setTimeStamp(0.367039486774);
    msg.setSource(15362U);
    msg.setSourceEntity(142U);
    msg.setDestination(17635U);
    msg.setDestinationEntity(154U);
    msg.op = 244U;
    msg.system.assign("GDRFTNRGIEXMUKUZAXFZDVLHWKHVAUMUZNVDNMLNEGBKBQJBEOFORJUEUDNGVNYOWTVIVHFRYZMMSYPWGPEYXKEASLZQRHWILXXCCKCSJSAPIXCMWDYTXGKVMRLKTBBRWWDPRQZPFJRQOUPIEASBOYXJSITYSDJJCAFLZQQZLLTHAUUQIKOJIZFVGHIMVHIZYTLWXYAPWNTMFMCAPLWKJSHFNOCXSGDYOEKAQOOHCHRVPDPCBUEG");
    msg.range = 0.345388734666;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 23U;
    tmp_msg_0.error.assign("JEGEOQYQKTMHGNSRNYINKYWVAXMQVNHCQCOYZDCMNKBFWTBNOQXLJWUPLEGUFEECJPIIHEQKQRGLQLPETRJZIOSPWJOZSFGFPOBHHQBLDGRPKCBMEBMWXZDRTCVDYCVWJRYDRXUUADSLFSSURFMIGHXIZKXXHBDZUND");
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
    msg.setTimeStamp(0.518117413395);
    msg.setSource(26142U);
    msg.setSourceEntity(47U);
    msg.setDestination(50095U);
    msg.setDestinationEntity(103U);
    msg.op = 25U;
    msg.system.assign("RILVTAPZIKAWBKHAOHQVYVQTIFXDREPRJSMFPJASMWKDYLNNMYAOWGXVZUSPQCHIRDLFFJNLQBPTGGMVSNJUNPWMJCOUXTDZSAZTTRHGW");
    msg.range = 0.121176417673;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 78U;
    tmp_msg_0.max_depth = 0.814347718839;
    tmp_msg_0.min_altitude = 0.407764491807;
    tmp_msg_0.max_altitude = 0.894982694516;
    tmp_msg_0.min_speed = 0.537213299001;
    tmp_msg_0.max_speed = 0.0307904285091;
    tmp_msg_0.max_vrate = 0.883910215796;
    tmp_msg_0.lat = 0.657459448975;
    tmp_msg_0.lon = 0.398555908124;
    tmp_msg_0.orientation = 0.013040940726;
    tmp_msg_0.width = 0.426052161453;
    tmp_msg_0.length = 0.167799339295;
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
    msg.setTimeStamp(0.157882304833);
    msg.setSource(45222U);
    msg.setSourceEntity(182U);
    msg.setDestination(26743U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.667436623178);
    msg.setSource(57752U);
    msg.setSourceEntity(71U);
    msg.setDestination(48356U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.998171488956);
    msg.setSource(9574U);
    msg.setSourceEntity(243U);
    msg.setDestination(22999U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.419387745464);
    msg.setSource(9239U);
    msg.setSourceEntity(224U);
    msg.setDestination(63949U);
    msg.setDestinationEntity(15U);
    msg.list.assign("VNLIQRYMHPVZDHUDURFBCBKJENHFLJCOCKTUMOAHBSNQTAFHPJPCKHMUXUCZDMHTXUITRQWSXWKEXFNIBWIVWXOIAKQMCAGINQBTUFYDGSQQBDGJLZPULTVGQZNZBHXPWILWHSRRMOALYNZVFPKFYWPKDZLKAZGESMXYFSCFSBTJEAKUUWEDEYBAYRAQFLKJEOPCTOMTRMQSOJDSVJVZRV");

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
    msg.setTimeStamp(0.260994670492);
    msg.setSource(60720U);
    msg.setSourceEntity(12U);
    msg.setDestination(44517U);
    msg.setDestinationEntity(46U);
    msg.list.assign("BSXYKLULPCAYMYPARIDKWEQZOIRBMHZCOUWNMDLNDYRKUJHAGJDMQJZLJJGMBCWAJEIMVWAWVKJPCIQSPUHYTXLXTNSLFIWMTAYGQHRSGFXTHLJE");

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
    msg.setTimeStamp(0.179731237062);
    msg.setSource(517U);
    msg.setSourceEntity(98U);
    msg.setDestination(14495U);
    msg.setDestinationEntity(121U);
    msg.list.assign("LFGZKIAVJEKPKLCMMNLQVJSHSUZPEVIFEDFUWAEZMMUHXOITPRRYBWSSNNTAXPZL");

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
    msg.setTimeStamp(0.843896513899);
    msg.setSource(32745U);
    msg.setSourceEntity(242U);
    msg.setDestination(38197U);
    msg.setDestinationEntity(198U);
    msg.peer.assign("NJPIKKJQLBDWVAGEZMVGXCOQAZRAEVFRNTZHBQGHLMNQWHNBSMSOHCXZLIRJJSUPTRLPVRYKBYLMVUIEWUTHJVPGTJVOMVIWGPPTJBTKWGWHNDDMDWSUWLMFEXZNFGGASYFCDFBCAWRCQSYHWANKTOMBTZFEBHPOAMSCEADQFQHCUKPFHDAEIPETZRKIODXIGNNZXIXARSGIOJUYBYXNXLLSZP");
    msg.rssi = 0.865365703396;
    msg.integrity = 49921U;

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
    msg.setTimeStamp(0.663118116138);
    msg.setSource(60238U);
    msg.setSourceEntity(162U);
    msg.setDestination(43303U);
    msg.setDestinationEntity(173U);
    msg.peer.assign("CGWFVVLZMAJPLKTFMOYIBBCNSORRBIPJMICYDGEQRVWLPUMUAVJGSSOOZZUBDMTCGQMVXKGQHUACHPWKNSSIAODNAQXGBNWZAPDROLBHPULGNXREQAXOTYZCYRWOTTNWFIPXKOL");
    msg.rssi = 0.686169704777;
    msg.integrity = 50177U;

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
    msg.setTimeStamp(0.301983959117);
    msg.setSource(26006U);
    msg.setSourceEntity(22U);
    msg.setDestination(32699U);
    msg.setDestinationEntity(90U);
    msg.peer.assign("YEBOWKAXWSHXNAYXPDCOKVLFJRFWJCSDTLHMVKLUAIESZMLPEGKIQQQECGOFOZBYVUZPTPDJQATXSHTCWNVSUTKIOWCSTLRZQNDBSYURCXHUBMKCNFQAKLJYQEZLJBHWXSEEGXGZ");
    msg.rssi = 0.680241958985;
    msg.integrity = 4491U;

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
    msg.setTimeStamp(0.14845543308);
    msg.setSource(23518U);
    msg.setSourceEntity(127U);
    msg.setDestination(18723U);
    msg.setDestinationEntity(246U);
    msg.req_id = 3251U;
    msg.destination.assign("KARWDEKCUIX");
    msg.timeout = 0.746588925517;
    msg.range = 0.270522442654;
    msg.type = 76U;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 106U;
    tmp_msg_0.mode.assign("WXPQGIRSZITYLR");
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
    msg.setTimeStamp(0.149215313756);
    msg.setSource(60635U);
    msg.setSourceEntity(35U);
    msg.setDestination(44124U);
    msg.setDestinationEntity(105U);
    msg.req_id = 48677U;
    msg.destination.assign("LKVBIGQUVTVSUKHRZDONTQUPLTFSMVBXQMMIQMFQOWMDEPXLBWGEWVIJHEXRXAUNCFBSQKHFZGCZDXLAWTDUZTBKUNGRCMPXKUE");
    msg.timeout = 0.703544175452;
    msg.range = 0.0797447807949;
    msg.type = 203U;
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 51U;
    tmp_msg_0.x = 16777U;
    tmp_msg_0.y = 24658U;
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
    msg.setTimeStamp(0.328134117284);
    msg.setSource(2301U);
    msg.setSourceEntity(196U);
    msg.setDestination(8648U);
    msg.setDestinationEntity(171U);
    msg.req_id = 9794U;
    msg.destination.assign("VFHYEYYFMGHQNCWILKRCJWXDEZJIDQHRESIHUFKDLXVZICXGATHIZPECWNUETIOQPMPMKIVGYPDCJSQQRDNLAMODPRQZBKOMGBAONBKDHBVKGZJCXHUTSLEXDYENNHCTNUPLYJHRGNBKMVKZUPLKZXZJLXKHEOEISXBM");
    msg.timeout = 0.632102342772;
    msg.range = 0.482204038276;
    msg.type = 224U;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 132U;
    tmp_msg_0.period = 1829716416U;
    tmp_msg_0.duty_cycle = 315617063U;
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
    msg.setTimeStamp(0.410894104486);
    msg.setSource(44387U);
    msg.setSourceEntity(180U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(56U);
    msg.req_id = 29521U;
    msg.type = 145U;
    msg.status = 94U;
    msg.info.assign("XSTBTAHFDCZZLFOJRJTQNEAWKLKUPCLGZSOJMLKEZOCTJAMIJWXPKNEWIDMSYYNIWYEKKOXTTDDXJAAXLMOHHRRFUUIBYXRXQXYNZNLZDXSDAWTMVZBWLEZQQDVRRVRHSVUVBMQKFJQDGHIWPXIUIYUOUYINTMMIKC");
    msg.range = 0.659714130476;

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
    msg.setTimeStamp(0.351907152699);
    msg.setSource(42003U);
    msg.setSourceEntity(236U);
    msg.setDestination(23873U);
    msg.setDestinationEntity(90U);
    msg.req_id = 12215U;
    msg.type = 126U;
    msg.status = 66U;
    msg.info.assign("QFPWLRVWLCNQKAJANOTAOBDYQUQMGAHTBANBWBKZNFJNYKJEHZSBZJADDMXGCHSTDNRQODWOQGGMICPWYWSLOPLOIPQISDLBRVBIJXJRCTPULDUKDNIRXZCZFFDVSAKYAFWOLEQYRPHOZHAPOXEPUTFXXLMRYUFUVKUFTESYEUWMFWBVSVZZEGEHRLHGHXGPXNJNPXSCTTKAGCOBHYUECIIMCYG");
    msg.range = 0.500220702149;

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
    msg.setTimeStamp(0.598796467813);
    msg.setSource(62299U);
    msg.setSourceEntity(84U);
    msg.setDestination(52306U);
    msg.setDestinationEntity(41U);
    msg.req_id = 58341U;
    msg.type = 253U;
    msg.status = 135U;
    msg.info.assign("HJAOEZZIHUVROZAIUPDRUTLOQKVTNWWIPSUGHQOMCZMXEQIPJXWHMDBDFLJFXCCHLKOYPGTLRKDUBCIWEWXANGI");
    msg.range = 0.266163207643;

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
    msg.setTimeStamp(0.0523912751646);
    msg.setSource(61215U);
    msg.setSourceEntity(75U);
    msg.setDestination(45486U);
    msg.setDestinationEntity(33U);
    msg.value = 22510;

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
    msg.setTimeStamp(0.201245609208);
    msg.setSource(36304U);
    msg.setSourceEntity(208U);
    msg.setDestination(43601U);
    msg.setDestinationEntity(28U);
    msg.value = 30104;

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
    msg.setTimeStamp(0.272347888302);
    msg.setSource(1363U);
    msg.setSourceEntity(165U);
    msg.setDestination(59897U);
    msg.setDestinationEntity(145U);
    msg.value = -25471;

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
    msg.setTimeStamp(0.0659683192697);
    msg.setSource(5539U);
    msg.setSourceEntity(191U);
    msg.setDestination(32142U);
    msg.setDestinationEntity(99U);
    msg.value = 0.138291754873;

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
    msg.setTimeStamp(0.75447792385);
    msg.setSource(28444U);
    msg.setSourceEntity(106U);
    msg.setDestination(9275U);
    msg.setDestinationEntity(199U);
    msg.value = 0.613582760736;

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
    msg.setTimeStamp(0.475240300811);
    msg.setSource(27677U);
    msg.setSourceEntity(22U);
    msg.setDestination(58193U);
    msg.setDestinationEntity(139U);
    msg.value = 0.514843920541;

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
    msg.setTimeStamp(0.345707183373);
    msg.setSource(31811U);
    msg.setSourceEntity(50U);
    msg.setDestination(2949U);
    msg.setDestinationEntity(104U);
    msg.value = 0.753302961471;

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
    msg.setTimeStamp(0.07498387554);
    msg.setSource(25941U);
    msg.setSourceEntity(208U);
    msg.setDestination(22902U);
    msg.setDestinationEntity(140U);
    msg.value = 0.567603798089;

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
    msg.setTimeStamp(0.577975529863);
    msg.setSource(20225U);
    msg.setSourceEntity(29U);
    msg.setDestination(61890U);
    msg.setDestinationEntity(200U);
    msg.value = 0.364437187584;

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
    msg.setTimeStamp(0.906857134789);
    msg.setSource(52394U);
    msg.setSourceEntity(173U);
    msg.setDestination(3546U);
    msg.setDestinationEntity(45U);
    msg.validity = 40733U;
    msg.type = 28U;
    msg.utc_year = 32588U;
    msg.utc_month = 229U;
    msg.utc_day = 78U;
    msg.utc_time = 0.504475347006;
    msg.lat = 0.26408767501;
    msg.lon = 0.429532552531;
    msg.height = 0.361020490815;
    msg.satellites = 97U;
    msg.cog = 0.282568774531;
    msg.sog = 0.185285394369;
    msg.hdop = 0.862028239876;
    msg.vdop = 0.968044143542;
    msg.hacc = 0.515469683962;
    msg.vacc = 0.193163248401;

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
    msg.setTimeStamp(0.778758672933);
    msg.setSource(38694U);
    msg.setSourceEntity(106U);
    msg.setDestination(4012U);
    msg.setDestinationEntity(196U);
    msg.validity = 15293U;
    msg.type = 145U;
    msg.utc_year = 65366U;
    msg.utc_month = 228U;
    msg.utc_day = 149U;
    msg.utc_time = 0.891157958734;
    msg.lat = 0.649750880361;
    msg.lon = 0.0422499627564;
    msg.height = 0.750467623769;
    msg.satellites = 90U;
    msg.cog = 0.846194104013;
    msg.sog = 0.604630608115;
    msg.hdop = 0.799951052586;
    msg.vdop = 0.76082411429;
    msg.hacc = 0.514526263901;
    msg.vacc = 0.605618768117;

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
    msg.setTimeStamp(0.282883710557);
    msg.setSource(8770U);
    msg.setSourceEntity(116U);
    msg.setDestination(50741U);
    msg.setDestinationEntity(172U);
    msg.validity = 29434U;
    msg.type = 138U;
    msg.utc_year = 63851U;
    msg.utc_month = 87U;
    msg.utc_day = 221U;
    msg.utc_time = 0.239708218288;
    msg.lat = 0.952823308052;
    msg.lon = 0.726547052301;
    msg.height = 0.161597608154;
    msg.satellites = 60U;
    msg.cog = 0.167615795699;
    msg.sog = 0.371854469132;
    msg.hdop = 0.695697426903;
    msg.vdop = 0.209131767832;
    msg.hacc = 0.56672312439;
    msg.vacc = 0.228274638501;

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
    msg.setTimeStamp(0.128867746323);
    msg.setSource(61692U);
    msg.setSourceEntity(6U);
    msg.setDestination(1360U);
    msg.setDestinationEntity(19U);
    msg.time = 0.516107287242;
    msg.phi = 0.871459875533;
    msg.theta = 0.0878876639076;
    msg.psi = 0.884973198843;
    msg.psi_magnetic = 0.98025632758;

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
    msg.setTimeStamp(0.400653277584);
    msg.setSource(40880U);
    msg.setSourceEntity(249U);
    msg.setDestination(45740U);
    msg.setDestinationEntity(171U);
    msg.time = 0.856897609352;
    msg.phi = 0.240635364456;
    msg.theta = 0.918036176974;
    msg.psi = 0.137945481175;
    msg.psi_magnetic = 0.684850289118;

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
    msg.setTimeStamp(0.106879377081);
    msg.setSource(60486U);
    msg.setSourceEntity(164U);
    msg.setDestination(30095U);
    msg.setDestinationEntity(170U);
    msg.time = 0.215641312554;
    msg.phi = 0.853425468921;
    msg.theta = 0.411457968026;
    msg.psi = 0.298752734401;
    msg.psi_magnetic = 0.382998607021;

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
    msg.setTimeStamp(0.747305913993);
    msg.setSource(20363U);
    msg.setSourceEntity(14U);
    msg.setDestination(3859U);
    msg.setDestinationEntity(220U);
    msg.time = 0.947271558306;
    msg.x = 0.314303639364;
    msg.y = 0.343577929556;
    msg.z = 0.0155976982143;
    msg.timestep = 0.237386752669;

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
    msg.setTimeStamp(0.00628832447496);
    msg.setSource(53850U);
    msg.setSourceEntity(87U);
    msg.setDestination(8545U);
    msg.setDestinationEntity(131U);
    msg.time = 0.364293079093;
    msg.x = 0.658490619234;
    msg.y = 0.648211129244;
    msg.z = 0.199807045162;
    msg.timestep = 0.553152309789;

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
    msg.setTimeStamp(0.682939281134);
    msg.setSource(31391U);
    msg.setSourceEntity(237U);
    msg.setDestination(35985U);
    msg.setDestinationEntity(152U);
    msg.time = 0.430286734344;
    msg.x = 0.620097529676;
    msg.y = 0.838447016;
    msg.z = 0.464574265131;
    msg.timestep = 0.437743741162;

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
    msg.setTimeStamp(0.290047202155);
    msg.setSource(41399U);
    msg.setSourceEntity(3U);
    msg.setDestination(13424U);
    msg.setDestinationEntity(23U);
    msg.time = 0.0226594420484;
    msg.x = 0.419179350911;
    msg.y = 0.100178079399;
    msg.z = 0.461043785445;

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
    msg.setTimeStamp(0.248213518222);
    msg.setSource(65349U);
    msg.setSourceEntity(31U);
    msg.setDestination(38809U);
    msg.setDestinationEntity(19U);
    msg.time = 0.000507312912581;
    msg.x = 0.0528049926489;
    msg.y = 0.0949974125132;
    msg.z = 0.461668548541;

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
    msg.setTimeStamp(0.373667353137);
    msg.setSource(9226U);
    msg.setSourceEntity(0U);
    msg.setDestination(2039U);
    msg.setDestinationEntity(50U);
    msg.time = 0.30889923418;
    msg.x = 0.470346746837;
    msg.y = 0.532924939325;
    msg.z = 0.592187774978;

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
    msg.setTimeStamp(0.540378338875);
    msg.setSource(31950U);
    msg.setSourceEntity(94U);
    msg.setDestination(38313U);
    msg.setDestinationEntity(125U);
    msg.time = 0.115853020984;
    msg.x = 0.696389058798;
    msg.y = 0.427614987993;
    msg.z = 0.865610337447;

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
    msg.setTimeStamp(0.190196643624);
    msg.setSource(22766U);
    msg.setSourceEntity(38U);
    msg.setDestination(43725U);
    msg.setDestinationEntity(166U);
    msg.time = 0.0684883025269;
    msg.x = 0.0771372826013;
    msg.y = 0.0233988371738;
    msg.z = 0.860607098715;

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
    msg.setTimeStamp(0.423549489033);
    msg.setSource(7763U);
    msg.setSourceEntity(132U);
    msg.setDestination(63530U);
    msg.setDestinationEntity(193U);
    msg.time = 0.226093945326;
    msg.x = 0.228020398445;
    msg.y = 0.790751013533;
    msg.z = 0.97843935206;

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
    msg.setTimeStamp(0.678513009152);
    msg.setSource(30775U);
    msg.setSourceEntity(26U);
    msg.setDestination(52553U);
    msg.setDestinationEntity(65U);
    msg.time = 0.695522010992;
    msg.x = 0.951526840915;
    msg.y = 0.865333932417;
    msg.z = 0.00849096801384;

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
    msg.setTimeStamp(0.196569256946);
    msg.setSource(14564U);
    msg.setSourceEntity(23U);
    msg.setDestination(13945U);
    msg.setDestinationEntity(20U);
    msg.time = 0.431608083542;
    msg.x = 0.661833894585;
    msg.y = 0.49024431378;
    msg.z = 0.994177301605;

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
    msg.setTimeStamp(0.799274683099);
    msg.setSource(42431U);
    msg.setSourceEntity(186U);
    msg.setDestination(44415U);
    msg.setDestinationEntity(44U);
    msg.time = 0.426501620188;
    msg.x = 0.0153349171602;
    msg.y = 0.977427912297;
    msg.z = 0.468469705344;

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
    msg.setTimeStamp(0.321749177215);
    msg.setSource(33109U);
    msg.setSourceEntity(145U);
    msg.setDestination(33434U);
    msg.setDestinationEntity(66U);
    msg.validity = 214U;
    msg.x = 0.619056885265;
    msg.y = 0.790628833326;
    msg.z = 0.355720314297;

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
    msg.setTimeStamp(0.0154531699514);
    msg.setSource(45460U);
    msg.setSourceEntity(157U);
    msg.setDestination(63370U);
    msg.setDestinationEntity(148U);
    msg.validity = 224U;
    msg.x = 0.770251686663;
    msg.y = 0.138857217484;
    msg.z = 0.208986925906;

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
    msg.setTimeStamp(0.839264971481);
    msg.setSource(61182U);
    msg.setSourceEntity(123U);
    msg.setDestination(9805U);
    msg.setDestinationEntity(97U);
    msg.validity = 164U;
    msg.x = 0.704608728677;
    msg.y = 0.933346957336;
    msg.z = 0.258330058544;

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
    msg.setTimeStamp(0.23524442837);
    msg.setSource(3658U);
    msg.setSourceEntity(175U);
    msg.setDestination(18098U);
    msg.setDestinationEntity(9U);
    msg.validity = 37U;
    msg.x = 0.433417514648;
    msg.y = 0.184342050691;
    msg.z = 0.560339336379;

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
    msg.setTimeStamp(0.851315353168);
    msg.setSource(43836U);
    msg.setSourceEntity(5U);
    msg.setDestination(41951U);
    msg.setDestinationEntity(91U);
    msg.validity = 161U;
    msg.x = 0.268805843654;
    msg.y = 0.137633863522;
    msg.z = 0.154917192717;

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
    msg.setTimeStamp(0.0257247617864);
    msg.setSource(30270U);
    msg.setSourceEntity(30U);
    msg.setDestination(30868U);
    msg.setDestinationEntity(234U);
    msg.validity = 217U;
    msg.x = 0.189445825797;
    msg.y = 0.453756398529;
    msg.z = 0.0758469741944;

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
    msg.setTimeStamp(0.166234035005);
    msg.setSource(38059U);
    msg.setSourceEntity(187U);
    msg.setDestination(13574U);
    msg.setDestinationEntity(102U);
    msg.time = 0.292711882047;
    msg.x = 0.407424268548;
    msg.y = 0.0322132327494;
    msg.z = 0.97729931815;

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
    msg.setTimeStamp(0.273331054481);
    msg.setSource(4985U);
    msg.setSourceEntity(165U);
    msg.setDestination(33849U);
    msg.setDestinationEntity(46U);
    msg.time = 0.247476143382;
    msg.x = 0.269909494568;
    msg.y = 0.0843920547617;
    msg.z = 0.472955569305;

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
    msg.setTimeStamp(0.0132744968637);
    msg.setSource(3261U);
    msg.setSourceEntity(52U);
    msg.setDestination(7636U);
    msg.setDestinationEntity(190U);
    msg.time = 0.972588501511;
    msg.x = 0.434340661399;
    msg.y = 0.364378206641;
    msg.z = 0.885290094497;

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
    msg.setTimeStamp(0.129960469739);
    msg.setSource(6697U);
    msg.setSourceEntity(213U);
    msg.setDestination(46666U);
    msg.setDestinationEntity(148U);
    msg.validity = 90U;
    msg.value = 0.912410413559;

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
    msg.setTimeStamp(0.860104439828);
    msg.setSource(6875U);
    msg.setSourceEntity(218U);
    msg.setDestination(15992U);
    msg.setDestinationEntity(96U);
    msg.validity = 78U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.444556978585;
    tmp_msg_0.y = 0.392876299479;
    tmp_msg_0.z = 0.132252442757;
    tmp_msg_0.phi = 0.564544054677;
    tmp_msg_0.theta = 0.823759119115;
    tmp_msg_0.psi = 0.0548294483315;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.264003271984;

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
    msg.setTimeStamp(0.254145211113);
    msg.setSource(58564U);
    msg.setSourceEntity(136U);
    msg.setDestination(52447U);
    msg.setDestinationEntity(207U);
    msg.validity = 199U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0924097281335;
    tmp_msg_0.y = 0.229873478271;
    tmp_msg_0.z = 0.363947767499;
    tmp_msg_0.phi = 0.567557300049;
    tmp_msg_0.theta = 0.682252151172;
    tmp_msg_0.psi = 0.215107630593;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.179127983531;
    tmp_msg_1.beam_height = 0.748473057404;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.897828761507;

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
    msg.setTimeStamp(0.662040496829);
    msg.setSource(60906U);
    msg.setSourceEntity(161U);
    msg.setDestination(56989U);
    msg.setDestinationEntity(125U);
    msg.value = 0.366759303113;

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
    msg.setTimeStamp(0.166055297816);
    msg.setSource(49198U);
    msg.setSourceEntity(98U);
    msg.setDestination(10216U);
    msg.setDestinationEntity(119U);
    msg.value = 0.369367172573;

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
    msg.setTimeStamp(0.301329542116);
    msg.setSource(41100U);
    msg.setSourceEntity(71U);
    msg.setDestination(6491U);
    msg.setDestinationEntity(36U);
    msg.value = 0.207961698089;

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
    msg.setTimeStamp(0.704416954788);
    msg.setSource(11265U);
    msg.setSourceEntity(216U);
    msg.setDestination(56868U);
    msg.setDestinationEntity(39U);
    msg.value = 0.94077525571;

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
    msg.setTimeStamp(0.863570265138);
    msg.setSource(34607U);
    msg.setSourceEntity(106U);
    msg.setDestination(58293U);
    msg.setDestinationEntity(162U);
    msg.value = 0.24617048462;

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
    msg.setTimeStamp(0.171726878487);
    msg.setSource(63847U);
    msg.setSourceEntity(251U);
    msg.setDestination(50718U);
    msg.setDestinationEntity(187U);
    msg.value = 0.572457435396;

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
    msg.setTimeStamp(0.825757501324);
    msg.setSource(4929U);
    msg.setSourceEntity(102U);
    msg.setDestination(46663U);
    msg.setDestinationEntity(132U);
    msg.value = 0.759555381695;

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
    msg.setTimeStamp(0.595665874223);
    msg.setSource(20760U);
    msg.setSourceEntity(74U);
    msg.setDestination(17838U);
    msg.setDestinationEntity(250U);
    msg.value = 0.316538701315;

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
    msg.setTimeStamp(0.111521577221);
    msg.setSource(18661U);
    msg.setSourceEntity(137U);
    msg.setDestination(10432U);
    msg.setDestinationEntity(201U);
    msg.value = 0.753814862311;

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
    msg.setTimeStamp(0.203647388595);
    msg.setSource(14676U);
    msg.setSourceEntity(245U);
    msg.setDestination(22634U);
    msg.setDestinationEntity(151U);
    msg.value = 0.254635316717;

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
    msg.setTimeStamp(0.612162825392);
    msg.setSource(14035U);
    msg.setSourceEntity(25U);
    msg.setDestination(56401U);
    msg.setDestinationEntity(229U);
    msg.value = 0.510864534058;

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
    msg.setTimeStamp(0.691224707194);
    msg.setSource(2029U);
    msg.setSourceEntity(69U);
    msg.setDestination(2875U);
    msg.setDestinationEntity(53U);
    msg.value = 0.0107462376356;

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
    msg.setTimeStamp(0.337534407631);
    msg.setSource(35095U);
    msg.setSourceEntity(160U);
    msg.setDestination(276U);
    msg.setDestinationEntity(61U);
    msg.value = 0.129620859491;

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
    msg.setTimeStamp(0.983833500654);
    msg.setSource(45129U);
    msg.setSourceEntity(98U);
    msg.setDestination(44074U);
    msg.setDestinationEntity(3U);
    msg.value = 0.801275619904;

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
    msg.setTimeStamp(0.508075637929);
    msg.setSource(60945U);
    msg.setSourceEntity(75U);
    msg.setDestination(2808U);
    msg.setDestinationEntity(202U);
    msg.value = 0.794675414444;

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
    msg.setTimeStamp(0.136819724821);
    msg.setSource(55005U);
    msg.setSourceEntity(22U);
    msg.setDestination(19861U);
    msg.setDestinationEntity(13U);
    msg.value = 0.694353894169;

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
    msg.setTimeStamp(0.959934256027);
    msg.setSource(14487U);
    msg.setSourceEntity(102U);
    msg.setDestination(12780U);
    msg.setDestinationEntity(147U);
    msg.value = 0.278517373187;

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
    msg.setTimeStamp(0.771448433061);
    msg.setSource(55693U);
    msg.setSourceEntity(15U);
    msg.setDestination(3642U);
    msg.setDestinationEntity(127U);
    msg.value = 0.400771817043;

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
    msg.setTimeStamp(0.78497691216);
    msg.setSource(52075U);
    msg.setSourceEntity(27U);
    msg.setDestination(48031U);
    msg.setDestinationEntity(156U);
    msg.value = 0.0635728083795;

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
    msg.setTimeStamp(0.694823217973);
    msg.setSource(1293U);
    msg.setSourceEntity(74U);
    msg.setDestination(14868U);
    msg.setDestinationEntity(203U);
    msg.value = 0.470070957885;

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
    msg.setTimeStamp(0.908914728305);
    msg.setSource(37508U);
    msg.setSourceEntity(182U);
    msg.setDestination(49817U);
    msg.setDestinationEntity(118U);
    msg.value = 0.77377938902;

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
    msg.setTimeStamp(0.829061059407);
    msg.setSource(43211U);
    msg.setSourceEntity(74U);
    msg.setDestination(3399U);
    msg.setDestinationEntity(71U);
    msg.value = 0.263942187223;

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
    msg.setTimeStamp(0.216443295191);
    msg.setSource(40222U);
    msg.setSourceEntity(254U);
    msg.setDestination(6730U);
    msg.setDestinationEntity(182U);
    msg.value = 0.383462849015;

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
    msg.setTimeStamp(0.223184543719);
    msg.setSource(64269U);
    msg.setSourceEntity(96U);
    msg.setDestination(12476U);
    msg.setDestinationEntity(72U);
    msg.value = 0.34655347455;

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
    msg.setTimeStamp(0.8450817988);
    msg.setSource(22415U);
    msg.setSourceEntity(198U);
    msg.setDestination(45773U);
    msg.setDestinationEntity(79U);
    msg.direction = 0.568075460088;
    msg.speed = 0.660903647885;
    msg.turbulence = 0.216065361527;

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
    msg.setTimeStamp(0.263502283139);
    msg.setSource(3252U);
    msg.setSourceEntity(158U);
    msg.setDestination(25901U);
    msg.setDestinationEntity(139U);
    msg.direction = 0.113142969238;
    msg.speed = 0.323700815555;
    msg.turbulence = 0.0603045962203;

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
    msg.setTimeStamp(0.20609599613);
    msg.setSource(24436U);
    msg.setSourceEntity(103U);
    msg.setDestination(46260U);
    msg.setDestinationEntity(105U);
    msg.direction = 0.238256578346;
    msg.speed = 0.448519019238;
    msg.turbulence = 0.0732914310332;

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
    msg.setTimeStamp(0.0344251406989);
    msg.setSource(71U);
    msg.setSourceEntity(164U);
    msg.setDestination(4329U);
    msg.setDestinationEntity(247U);
    msg.value = 0.0370076105191;

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
    msg.setTimeStamp(0.118964113835);
    msg.setSource(15344U);
    msg.setSourceEntity(127U);
    msg.setDestination(17187U);
    msg.setDestinationEntity(98U);
    msg.value = 0.542196765583;

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
    msg.setTimeStamp(0.162235235668);
    msg.setSource(24513U);
    msg.setSourceEntity(121U);
    msg.setDestination(5853U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0442925236882;

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
    msg.setTimeStamp(0.034122317951);
    msg.setSource(2674U);
    msg.setSourceEntity(33U);
    msg.setDestination(22135U);
    msg.setDestinationEntity(234U);
    msg.value.assign("SANZXHVKFXYAXILKBPDEGIORIUOJSSBDQBDFFPMKKRFDMYJZNNYDYCSOSZMWGVXPLFOREJYEGBUJRPLPZZRRMQHLUYDFACXCTWZKIAMCBTQIQQWPWYBQTAXROBCIUHAKWHWKGYTOREZSVSAXIMJQOUCZPWLVLDRXDUOLLJCRKWQEXCSTMNTGQOFNDYTGFNIVBNEHNMGBYEPBSPZMSXGJLIFVGDFVUNHA");

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
    msg.setTimeStamp(0.920832145576);
    msg.setSource(208U);
    msg.setSourceEntity(178U);
    msg.setDestination(40690U);
    msg.setDestinationEntity(237U);
    msg.value.assign("VVJFTUYJGMJYPHXCZEHXENEKFXFGEHPUELSGOBKJOZFDTWVIKZNTQYBQTMRNUWAZZVGIVSIYRBGHCOLHONUFIHZCALLAEMAPNHPEMTBJOUPNQSNQIPTXMXDBWDYFUFMWJPOOSESTEGVZRKQBRWMAUYLNZBCWJGPGPL");

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
    msg.setTimeStamp(0.251665573785);
    msg.setSource(58253U);
    msg.setSourceEntity(131U);
    msg.setDestination(34550U);
    msg.setDestinationEntity(91U);
    msg.value.assign("QVLGYPVRBWGDNPCBFGNCMJFECBBNTUGFACUPBYXQEPKZCWTWHPXDVKZVKRZWOPM");

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
    msg.setTimeStamp(0.0878921969497);
    msg.setSource(53835U);
    msg.setSourceEntity(223U);
    msg.setDestination(33120U);
    msg.setDestinationEntity(48U);
    const char tmp_msg_0[] = {30, 108, 89, -29, 48, 15, -34, -48, 78, -90, -34, -107, 87, 33, 14, -5, -18, 116, 63, 56, -32, -101, -35, 112, -86, -86, 18, -73, -10, 8, -12, 102, -20, -109, 15, -39, 17, 86, -7, 61, -68, -123, -121, 14, 92, -56, 113, 22, 0, -7, -89, -73, -104, -26, 27, -36, -78, -109, -18};
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
    msg.setTimeStamp(0.622486873423);
    msg.setSource(5628U);
    msg.setSourceEntity(18U);
    msg.setDestination(40662U);
    msg.setDestinationEntity(187U);
    const char tmp_msg_0[] = {92, 24, 96, -65, -39, -100, 4, 93, 116, 100, -88, -38, 123, 37, 88, 60, 65, 27, 65, 5, -83, -59, -112, -75, 29, 61, -37, 56, -38, 98, -73, -19, -21, -44, -47, 60, 84, -126, -10, -56, 12, -47, 35, -53, 2, 94, 6, -57, 30, -112, -81, -57, 64, -24, 3, 125, -80, -68, -26, 46, 98};
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
    msg.setTimeStamp(0.282868908645);
    msg.setSource(55039U);
    msg.setSourceEntity(219U);
    msg.setDestination(37545U);
    msg.setDestinationEntity(90U);
    const char tmp_msg_0[] = {-49, 110, -35, -115, 73, -105, -5, 111, -12, -67, -49, 107, -105, -90, -94, -43, -85, 117, 30, 25, -29, 71, 4, -53, -99, 0, -45, -56, 126, -120, -53, -85, -42, -80, 20, 68, -108, 103, 69, 121, 8, 78, 102, -59, 1, -1, -48, -127, -111, 104, 63, 73, -2, -44, 93, -72, 115, -58, 63, -46, -33, 75, -123, 11, 110, 61, 98, -90, -70, 76, -120, -38, 40, -77, 15, -7, 125, 80, 23, 117, 91, 99, 91, -25, -47, 97, -51, 124, -24, 46, 60, 21, -105, 17, 42, -77, -46, 12, -46, 96, -101, 114, -65, 17, -103, 88, -120, 76, 120, 47, 22, 17, 35, -111, 107, 126, 73, 23, 124, 32, 0, 110, -102, -66, -59, -13, -94, -52, 35, -118, 40, 67, 24, 91, -47, -84, 114, -21, 91, 15, 65, -53, 12, 109, 21, -81, -1, 113, -17, 87, 87, -6, 0, -108, -17, 46, -38, -87, -21, -57, -8, -66, -60, 53, 3, 37, 92, 87, 46, -59, 39, -2, 56, -54, -9, 43, 85, -5, -51, 111, 22, -20, -6, 41, -94, 87, -10, 124, -115, 83, -82, 52, 31, 15, 5, -124, -12, -66, -26, 8, 50, 119, -12, -49, -32, 96, 31};
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
    msg.setTimeStamp(0.510173516549);
    msg.setSource(1170U);
    msg.setSourceEntity(47U);
    msg.setDestination(18384U);
    msg.setDestinationEntity(1U);
    msg.value = 0.700335190768;

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
    msg.setTimeStamp(0.461797746453);
    msg.setSource(44046U);
    msg.setSourceEntity(99U);
    msg.setDestination(65020U);
    msg.setDestinationEntity(147U);
    msg.value = 0.278950116823;

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
    msg.setTimeStamp(0.902640938652);
    msg.setSource(48153U);
    msg.setSourceEntity(112U);
    msg.setDestination(18024U);
    msg.setDestinationEntity(2U);
    msg.value = 0.690654443343;

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
    msg.setTimeStamp(0.618283380278);
    msg.setSource(33020U);
    msg.setSourceEntity(8U);
    msg.setDestination(63327U);
    msg.setDestinationEntity(117U);
    msg.type = 48U;
    msg.frequency = 4256339182U;
    msg.min_range = 8106U;
    msg.max_range = 38604U;
    msg.bits_per_point = 167U;
    msg.scale_factor = 0.831925532956;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.846977240371;
    tmp_msg_0.beam_height = 0.0231739436602;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {92, -127, -110, -29, 110, -10, -7, -70, 96, 84, -27, -116, 84, -86, 27, 84, 11, 41, -81, -68, 61, 123, -121, -70, 79, 53, 63, 88, 115, -124, -100, -67, -100, -81, -36, 47, 72, -1, 63, 74, 78, 8, 102, 60, -34, 65, 56, 102, 118, 79, -18, 80, 23, -72, -10, -31, -57, 12, 6, -12, 1, -48, -113, -18, 0, -124, 25, -40, 114, 99, -87, -15, -19, 59, 121, 56, 5, 8, -74, 113, -8, 105, -43, -57, -26, -112, 107, 54, -66, 25, -38, -45, 46, -37, -100, -43, 11, -75, -39, -26, -110, 78, -113, 97, -39, 30, 10, -90, -69, -68, -29, -82, 59, 113, 84, -87, 108, 110, 78, 23, -103, 80, -6, 101, 16, -59, 55, -42, -69, 119, 94, 77, 57, 123, 115, 123, 4, -74, -67, -91, -88, -73, -84, -14, -115, 35, 69, -49, -57, 69, -114, -115, -109, -27, -6, -25, 75, 71, -107, -110, 88, 13, -7, 31, -21, 42, 78, 26, -126, 0, -117, 38, -95, -28, 125, -17, 25, 49, -47, 6, 88, 78, -85, -21, 38, -53, 15, -120, -94, 12, -23, -89, -128};
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
    msg.setTimeStamp(0.0182289785954);
    msg.setSource(34765U);
    msg.setSourceEntity(88U);
    msg.setDestination(4223U);
    msg.setDestinationEntity(228U);
    msg.type = 213U;
    msg.frequency = 947523775U;
    msg.min_range = 29718U;
    msg.max_range = 23926U;
    msg.bits_per_point = 18U;
    msg.scale_factor = 0.134654375452;
    const char tmp_msg_0[] = {84, 75, 32, -35, 28, -86, -19, 76, -97, 11, 61, -86, -45, -122, 19, -88, 63, 74, 25, 26, -56, 114, 77, -18, -16, -125, -19, -98, -29, 126, 18, 70, 11, -39, -78, -116, 120, 125, 60, 82, -126, -76, 46, 51, -36, -101, -110, -108, -63, -92, -29, -45, -12, -19, 100, -102, 4, -61, -77, -65, 82, -100, 84, -88, -111, 95, -57, -115, 72, 5, 59, 57, 41, 40, -53, 28, -54, -30, 74, 24, 92, -105, 94, 62, 76, 78, 89, 65, 99, 34, 89};
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
    msg.setTimeStamp(0.167613576435);
    msg.setSource(19605U);
    msg.setSourceEntity(108U);
    msg.setDestination(62345U);
    msg.setDestinationEntity(154U);
    msg.type = 132U;
    msg.frequency = 3050330305U;
    msg.min_range = 11680U;
    msg.max_range = 3965U;
    msg.bits_per_point = 74U;
    msg.scale_factor = 0.176260490013;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.26722894586;
    tmp_msg_0.beam_height = 0.365472834444;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {8, 54, -87, 113, 36, 106, 65, -48, 99, 91, 57, 44, 86, -88, 20, 23, 12, -21, 114, 0, 6, -21, -84, -40, -62, -121, -81, 4, 18, 108, -19, 57, 75, 68, -6, -115, -106, -80, 61, 95, 63, 2, -99, -93, -4, 72, 11, 17, 95, -117, -68, 6, -111, 1, -51, -17, 40, -86, 94, 8, 69, -46, -106, 18, 13, 47, 125, -57, 101, 42, -126, -24, -68, -126, -42, 2, 83, 79, 33};
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
    msg.setTimeStamp(0.589963232525);
    msg.setSource(6774U);
    msg.setSourceEntity(17U);
    msg.setDestination(1784U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.110457097196);
    msg.setSource(61229U);
    msg.setSourceEntity(174U);
    msg.setDestination(59091U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.589986923263);
    msg.setSource(11809U);
    msg.setSourceEntity(28U);
    msg.setDestination(43645U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.44115548394);
    msg.setSource(24254U);
    msg.setSourceEntity(70U);
    msg.setDestination(22658U);
    msg.setDestinationEntity(87U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.779814800222);
    msg.setSource(22589U);
    msg.setSourceEntity(24U);
    msg.setDestination(60741U);
    msg.setDestinationEntity(25U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.704736223934);
    msg.setSource(21957U);
    msg.setSourceEntity(147U);
    msg.setDestination(3878U);
    msg.setDestinationEntity(223U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.0662147204328);
    msg.setSource(1605U);
    msg.setSourceEntity(144U);
    msg.setDestination(26496U);
    msg.setDestinationEntity(31U);
    msg.value = 0.554740070848;
    msg.confidence = 0.304898182955;
    msg.opmodes.assign("IGBKKGTOETYKQTQCDOATMVLVTSZIILAOLWUDBZHSRDGXXBHJRXEAMYIFPCOHEHPSKEAECCLQEJIMQWEVWJNBGRCIHOSNDNBQPXBIBQJKJULGWRHCRCDXUOTUMVFJQIPXNPMWS");

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
    msg.setTimeStamp(0.0656960255419);
    msg.setSource(39144U);
    msg.setSourceEntity(106U);
    msg.setDestination(15150U);
    msg.setDestinationEntity(129U);
    msg.value = 0.215550670657;
    msg.confidence = 0.0547801259058;
    msg.opmodes.assign("JJHOPHGBKPVPKRZYPWTYPQJDEGNBVOKLIWHWINYNSMTWORCHPXHZUYQXAFYTLIXCWDHOQMJDWRTRLCOHXKKZFJIUEXMZLFSFBVFGBCTWQATJRGNITYAAQDYNSPDMUMFQCJTYOAFENCMVLAGEYZMADDOXXNAZHXPKSURKIIUZXLJYBRSGNEVKVZV");

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
    msg.setTimeStamp(0.0916473049131);
    msg.setSource(43356U);
    msg.setSourceEntity(247U);
    msg.setDestination(61072U);
    msg.setDestinationEntity(7U);
    msg.value = 0.902261685519;
    msg.confidence = 0.841664889434;
    msg.opmodes.assign("INXVOSKTTJBEMFWIXMPSOMXUWHYGHDDBIAZQQTJWNMUWOYEAQARXDJBKNNFZJAPSVYJFPPGRSZBBCPOLBLDKJPVCFXZTCKAMCWTQRXEPUIGFJMDOONOUVKYZCYYACKPNFSIWVRDUXOALHVYIWRNZKVFUEHHZNJ");

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
    msg.setTimeStamp(0.220662409805);
    msg.setSource(43144U);
    msg.setSourceEntity(202U);
    msg.setDestination(53646U);
    msg.setDestinationEntity(9U);
    msg.itow = 2621894578U;
    msg.lat = 0.912762061278;
    msg.lon = 0.235980834775;
    msg.height_ell = 0.665110029601;
    msg.height_sea = 0.673764749054;
    msg.hacc = 0.0806038058452;
    msg.vacc = 0.0899978506691;
    msg.vel_n = 0.322541629996;
    msg.vel_e = 0.454345401956;
    msg.vel_d = 0.707939822609;
    msg.speed = 0.992408855848;
    msg.gspeed = 0.443694349587;
    msg.heading = 0.640359521522;
    msg.sacc = 0.153048175579;
    msg.cacc = 0.749742603314;

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
    msg.setTimeStamp(0.0299960798);
    msg.setSource(5781U);
    msg.setSourceEntity(161U);
    msg.setDestination(46892U);
    msg.setDestinationEntity(165U);
    msg.itow = 2887520002U;
    msg.lat = 0.00679793035549;
    msg.lon = 0.266318269643;
    msg.height_ell = 0.201527581508;
    msg.height_sea = 0.0779937245147;
    msg.hacc = 0.307098987797;
    msg.vacc = 0.482073264285;
    msg.vel_n = 0.825454904379;
    msg.vel_e = 0.944311759866;
    msg.vel_d = 0.0944052274394;
    msg.speed = 0.536739152026;
    msg.gspeed = 0.838014246013;
    msg.heading = 0.332570560766;
    msg.sacc = 0.511819491671;
    msg.cacc = 0.723082478246;

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
    msg.setTimeStamp(0.752562778168);
    msg.setSource(48649U);
    msg.setSourceEntity(124U);
    msg.setDestination(33598U);
    msg.setDestinationEntity(36U);
    msg.itow = 1058962417U;
    msg.lat = 0.463279459958;
    msg.lon = 0.832688463567;
    msg.height_ell = 0.4925356899;
    msg.height_sea = 0.256772647777;
    msg.hacc = 0.95034173899;
    msg.vacc = 0.699067986219;
    msg.vel_n = 0.747552082789;
    msg.vel_e = 0.796974005414;
    msg.vel_d = 0.101150643372;
    msg.speed = 0.463075967931;
    msg.gspeed = 0.423474309938;
    msg.heading = 0.673114394165;
    msg.sacc = 0.380225496155;
    msg.cacc = 0.436511599529;

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
    msg.setTimeStamp(0.807398967291);
    msg.setSource(58673U);
    msg.setSourceEntity(139U);
    msg.setDestination(60996U);
    msg.setDestinationEntity(13U);
    msg.id = 200U;
    msg.value = 0.153188064864;

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
    msg.setTimeStamp(0.867829702038);
    msg.setSource(62326U);
    msg.setSourceEntity(234U);
    msg.setDestination(51784U);
    msg.setDestinationEntity(32U);
    msg.id = 159U;
    msg.value = 0.619450053178;

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
    msg.setTimeStamp(0.327432311935);
    msg.setSource(42921U);
    msg.setSourceEntity(41U);
    msg.setDestination(32820U);
    msg.setDestinationEntity(157U);
    msg.id = 115U;
    msg.value = 0.823427715752;

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
    msg.setTimeStamp(0.770885033389);
    msg.setSource(14319U);
    msg.setSourceEntity(96U);
    msg.setDestination(29454U);
    msg.setDestinationEntity(33U);
    msg.x = 0.183331074091;
    msg.y = 0.284555348967;
    msg.z = 0.868111176903;
    msg.phi = 0.73634196603;
    msg.theta = 0.166839024213;
    msg.psi = 0.434185118395;

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
    msg.setTimeStamp(0.369146566543);
    msg.setSource(42236U);
    msg.setSourceEntity(228U);
    msg.setDestination(32857U);
    msg.setDestinationEntity(194U);
    msg.x = 0.911279851906;
    msg.y = 0.81115044543;
    msg.z = 0.685631502917;
    msg.phi = 0.46896754708;
    msg.theta = 0.122981620324;
    msg.psi = 0.351086171084;

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
    msg.setTimeStamp(0.0407970232444);
    msg.setSource(3688U);
    msg.setSourceEntity(205U);
    msg.setDestination(44287U);
    msg.setDestinationEntity(131U);
    msg.x = 0.533251505008;
    msg.y = 0.16188371769;
    msg.z = 0.896838831713;
    msg.phi = 0.6812914113;
    msg.theta = 0.936736122929;
    msg.psi = 0.6580013741;

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
    msg.setTimeStamp(0.674451493505);
    msg.setSource(22759U);
    msg.setSourceEntity(164U);
    msg.setDestination(5365U);
    msg.setDestinationEntity(186U);
    msg.beam_width = 0.425470393426;
    msg.beam_height = 0.257756235948;

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
    msg.setTimeStamp(0.0054942838834);
    msg.setSource(8479U);
    msg.setSourceEntity(179U);
    msg.setDestination(23075U);
    msg.setDestinationEntity(67U);
    msg.beam_width = 0.536799868896;
    msg.beam_height = 0.158621368142;

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
    msg.setTimeStamp(0.58107831645);
    msg.setSource(60358U);
    msg.setSourceEntity(59U);
    msg.setDestination(33232U);
    msg.setDestinationEntity(111U);
    msg.beam_width = 0.840712058373;
    msg.beam_height = 0.218224131719;

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
    msg.setTimeStamp(0.585024449334);
    msg.setSource(38746U);
    msg.setSourceEntity(63U);
    msg.setDestination(49529U);
    msg.setDestinationEntity(44U);
    msg.sane = 199U;

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
    msg.setTimeStamp(0.668006452122);
    msg.setSource(44220U);
    msg.setSourceEntity(79U);
    msg.setDestination(52794U);
    msg.setDestinationEntity(31U);
    msg.sane = 107U;

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
    msg.setTimeStamp(0.122344196151);
    msg.setSource(9807U);
    msg.setSourceEntity(195U);
    msg.setDestination(56481U);
    msg.setDestinationEntity(165U);
    msg.sane = 199U;

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
    msg.setTimeStamp(0.285962937368);
    msg.setSource(11945U);
    msg.setSourceEntity(39U);
    msg.setDestination(46597U);
    msg.setDestinationEntity(98U);
    msg.value = 0.518914234734;

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
    msg.setTimeStamp(0.522435108955);
    msg.setSource(60073U);
    msg.setSourceEntity(39U);
    msg.setDestination(8257U);
    msg.setDestinationEntity(137U);
    msg.value = 0.528649100392;

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
    msg.setTimeStamp(0.522114934202);
    msg.setSource(36841U);
    msg.setSourceEntity(162U);
    msg.setDestination(29296U);
    msg.setDestinationEntity(20U);
    msg.value = 0.880569354298;

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
    msg.setTimeStamp(0.345508821258);
    msg.setSource(238U);
    msg.setSourceEntity(43U);
    msg.setDestination(57967U);
    msg.setDestinationEntity(58U);
    msg.value = 0.709000868802;

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
    msg.setTimeStamp(0.319818079079);
    msg.setSource(35446U);
    msg.setSourceEntity(91U);
    msg.setDestination(57311U);
    msg.setDestinationEntity(167U);
    msg.value = 0.698891504001;

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
    msg.setTimeStamp(0.0508671193893);
    msg.setSource(42483U);
    msg.setSourceEntity(73U);
    msg.setDestination(59333U);
    msg.setDestinationEntity(116U);
    msg.value = 0.991852925442;

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
    msg.setTimeStamp(0.755934151217);
    msg.setSource(15761U);
    msg.setSourceEntity(31U);
    msg.setDestination(39073U);
    msg.setDestinationEntity(194U);
    msg.value = 0.0854683870408;

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
    msg.setTimeStamp(0.584365377176);
    msg.setSource(19220U);
    msg.setSourceEntity(71U);
    msg.setDestination(64325U);
    msg.setDestinationEntity(17U);
    msg.value = 0.342913497736;

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
    msg.setTimeStamp(0.122109227856);
    msg.setSource(51905U);
    msg.setSourceEntity(227U);
    msg.setDestination(20073U);
    msg.setDestinationEntity(217U);
    msg.value = 0.490084950075;

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
    msg.setTimeStamp(0.352180304462);
    msg.setSource(30549U);
    msg.setSourceEntity(147U);
    msg.setDestination(17836U);
    msg.setDestinationEntity(162U);
    msg.value = 0.676639458458;

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
    msg.setTimeStamp(0.404816505183);
    msg.setSource(55022U);
    msg.setSourceEntity(239U);
    msg.setDestination(8720U);
    msg.setDestinationEntity(102U);
    msg.value = 0.0227101773328;

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
    msg.setTimeStamp(0.137713993997);
    msg.setSource(34293U);
    msg.setSourceEntity(123U);
    msg.setDestination(7827U);
    msg.setDestinationEntity(216U);
    msg.value = 0.564345728315;

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
    msg.setTimeStamp(0.0322073299726);
    msg.setSource(60778U);
    msg.setSourceEntity(183U);
    msg.setDestination(14834U);
    msg.setDestinationEntity(52U);
    msg.value = 0.316160751732;

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
    msg.setTimeStamp(0.570712946235);
    msg.setSource(11218U);
    msg.setSourceEntity(104U);
    msg.setDestination(12663U);
    msg.setDestinationEntity(131U);
    msg.value = 0.898901429017;

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
    msg.setTimeStamp(0.123895829388);
    msg.setSource(2566U);
    msg.setSourceEntity(107U);
    msg.setDestination(52528U);
    msg.setDestinationEntity(254U);
    msg.value = 0.602220079471;

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
    msg.setTimeStamp(0.850662125978);
    msg.setSource(13841U);
    msg.setSourceEntity(60U);
    msg.setDestination(47257U);
    msg.setDestinationEntity(209U);
    msg.value = 0.807909093086;

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
    msg.setTimeStamp(0.340028396049);
    msg.setSource(33674U);
    msg.setSourceEntity(107U);
    msg.setDestination(10176U);
    msg.setDestinationEntity(24U);
    msg.value = 0.249752403401;

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
    msg.setTimeStamp(0.66193508461);
    msg.setSource(64991U);
    msg.setSourceEntity(222U);
    msg.setDestination(50988U);
    msg.setDestinationEntity(165U);
    msg.value = 0.743730337868;

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
    msg.setTimeStamp(0.586950530997);
    msg.setSource(1594U);
    msg.setSourceEntity(208U);
    msg.setDestination(13588U);
    msg.setDestinationEntity(184U);
    msg.value = 0.48869845358;

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
    msg.setTimeStamp(0.159477915428);
    msg.setSource(7696U);
    msg.setSourceEntity(122U);
    msg.setDestination(22138U);
    msg.setDestinationEntity(170U);
    msg.value = 0.107362861314;

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
    msg.setTimeStamp(0.327244379641);
    msg.setSource(56008U);
    msg.setSourceEntity(143U);
    msg.setDestination(14481U);
    msg.setDestinationEntity(207U);
    msg.value = 0.882152664856;

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
    msg.setTimeStamp(0.0838016286992);
    msg.setSource(59880U);
    msg.setSourceEntity(59U);
    msg.setDestination(53288U);
    msg.setDestinationEntity(220U);
    msg.value = 0.60725115724;

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
    msg.setTimeStamp(0.52948846727);
    msg.setSource(18719U);
    msg.setSourceEntity(200U);
    msg.setDestination(45169U);
    msg.setDestinationEntity(28U);
    msg.value = 0.0688347862597;

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
    msg.setTimeStamp(0.505006774574);
    msg.setSource(36242U);
    msg.setSourceEntity(1U);
    msg.setDestination(9480U);
    msg.setDestinationEntity(228U);
    msg.value = 0.825999890417;

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
    msg.setTimeStamp(0.551035782698);
    msg.setSource(31104U);
    msg.setSourceEntity(1U);
    msg.setDestination(58412U);
    msg.setDestinationEntity(204U);
    msg.validity = 8853U;
    msg.type = 26U;
    msg.tow = 3559557178U;
    msg.base_lat = 0.888346243999;
    msg.base_lon = 0.499256400393;
    msg.base_height = 0.338946782849;
    msg.n = 0.612705802483;
    msg.e = 0.545567561901;
    msg.d = 0.0788900258645;
    msg.v_n = 0.999467212875;
    msg.v_e = 0.764766212123;
    msg.v_d = 0.875007339068;
    msg.satellites = 2U;
    msg.iar_hyp = 30608U;
    msg.iar_ratio = 0.177829153689;

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
    msg.setTimeStamp(0.171328545419);
    msg.setSource(5463U);
    msg.setSourceEntity(58U);
    msg.setDestination(25311U);
    msg.setDestinationEntity(109U);
    msg.validity = 53861U;
    msg.type = 129U;
    msg.tow = 3994341772U;
    msg.base_lat = 0.141114922102;
    msg.base_lon = 0.169954671149;
    msg.base_height = 0.3138986081;
    msg.n = 0.213741683609;
    msg.e = 0.474230600257;
    msg.d = 0.638760860008;
    msg.v_n = 0.906380182058;
    msg.v_e = 0.759838782414;
    msg.v_d = 0.63898842233;
    msg.satellites = 176U;
    msg.iar_hyp = 52783U;
    msg.iar_ratio = 0.32030069846;

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
    msg.setTimeStamp(0.471665124104);
    msg.setSource(13016U);
    msg.setSourceEntity(34U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(104U);
    msg.validity = 51034U;
    msg.type = 177U;
    msg.tow = 3941443119U;
    msg.base_lat = 0.909257738817;
    msg.base_lon = 0.175608729117;
    msg.base_height = 0.286044129375;
    msg.n = 0.815487954138;
    msg.e = 0.101561637166;
    msg.d = 0.626004863636;
    msg.v_n = 0.335044141478;
    msg.v_e = 0.287626165953;
    msg.v_d = 0.950506895257;
    msg.satellites = 124U;
    msg.iar_hyp = 43196U;
    msg.iar_ratio = 0.178500826255;

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
    msg.setTimeStamp(0.234723828058);
    msg.setSource(61891U);
    msg.setSourceEntity(176U);
    msg.setDestination(46941U);
    msg.setDestinationEntity(228U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.251224768153;
    tmp_msg_0.lon = 0.730304843827;
    tmp_msg_0.height = 0.111185449792;
    tmp_msg_0.x = 0.0446728325301;
    tmp_msg_0.y = 0.988446854603;
    tmp_msg_0.z = 0.563447842153;
    tmp_msg_0.phi = 0.0189866600083;
    tmp_msg_0.theta = 0.449360767065;
    tmp_msg_0.psi = 0.766257468847;
    tmp_msg_0.u = 0.569612600774;
    tmp_msg_0.v = 0.433486796455;
    tmp_msg_0.w = 0.0608258145772;
    tmp_msg_0.vx = 0.0290918935145;
    tmp_msg_0.vy = 0.769563875093;
    tmp_msg_0.vz = 0.529835712912;
    tmp_msg_0.p = 0.380767545722;
    tmp_msg_0.q = 0.0577555641236;
    tmp_msg_0.r = 0.932090354787;
    tmp_msg_0.depth = 0.879625539402;
    tmp_msg_0.alt = 0.56619850168;
    msg.state.set(tmp_msg_0);
    msg.type = 226U;

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
    msg.setTimeStamp(0.446349713019);
    msg.setSource(6581U);
    msg.setSourceEntity(92U);
    msg.setDestination(37917U);
    msg.setDestinationEntity(151U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.576940922695;
    tmp_msg_0.lon = 0.754984487625;
    tmp_msg_0.height = 0.109565331785;
    tmp_msg_0.x = 0.89052499604;
    tmp_msg_0.y = 0.970414202932;
    tmp_msg_0.z = 0.683095707429;
    tmp_msg_0.phi = 0.055792461021;
    tmp_msg_0.theta = 0.362016974906;
    tmp_msg_0.psi = 0.497917539306;
    tmp_msg_0.u = 0.920361184005;
    tmp_msg_0.v = 0.283719724889;
    tmp_msg_0.w = 0.213575162748;
    tmp_msg_0.vx = 0.403215870574;
    tmp_msg_0.vy = 0.696812746218;
    tmp_msg_0.vz = 0.926434282572;
    tmp_msg_0.p = 0.789860490128;
    tmp_msg_0.q = 0.365357696696;
    tmp_msg_0.r = 0.843906200845;
    tmp_msg_0.depth = 0.750419898636;
    tmp_msg_0.alt = 0.556774729746;
    msg.state.set(tmp_msg_0);
    msg.type = 147U;

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
    msg.setTimeStamp(0.894280872603);
    msg.setSource(16269U);
    msg.setSourceEntity(110U);
    msg.setDestination(49605U);
    msg.setDestinationEntity(33U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.974917022016;
    tmp_msg_0.lon = 0.135007067838;
    tmp_msg_0.height = 0.531851415041;
    tmp_msg_0.x = 0.168361340277;
    tmp_msg_0.y = 0.911259456413;
    tmp_msg_0.z = 0.313573930963;
    tmp_msg_0.phi = 0.627550780104;
    tmp_msg_0.theta = 0.144346939432;
    tmp_msg_0.psi = 0.521907410691;
    tmp_msg_0.u = 0.388918352426;
    tmp_msg_0.v = 0.969696708028;
    tmp_msg_0.w = 0.983280678145;
    tmp_msg_0.vx = 0.795297176355;
    tmp_msg_0.vy = 0.513228336666;
    tmp_msg_0.vz = 0.256011459851;
    tmp_msg_0.p = 0.021707899678;
    tmp_msg_0.q = 0.765175327309;
    tmp_msg_0.r = 0.476487157831;
    tmp_msg_0.depth = 0.452073675447;
    tmp_msg_0.alt = 0.0850229208128;
    msg.state.set(tmp_msg_0);
    msg.type = 144U;

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
    msg.setTimeStamp(0.811810463969);
    msg.setSource(36268U);
    msg.setSourceEntity(215U);
    msg.setDestination(9515U);
    msg.setDestinationEntity(210U);
    msg.value = 0.185446940038;

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
    msg.setTimeStamp(0.998005752188);
    msg.setSource(45027U);
    msg.setSourceEntity(218U);
    msg.setDestination(37588U);
    msg.setDestinationEntity(57U);
    msg.value = 0.0266816522409;

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
    msg.setTimeStamp(0.249367185288);
    msg.setSource(60372U);
    msg.setSourceEntity(59U);
    msg.setDestination(512U);
    msg.setDestinationEntity(174U);
    msg.value = 0.263411390278;

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
    msg.setTimeStamp(0.231779098177);
    msg.setSource(43990U);
    msg.setSourceEntity(223U);
    msg.setDestination(55095U);
    msg.setDestinationEntity(199U);
    msg.value = 0.625915513771;

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
    msg.setTimeStamp(0.508211773086);
    msg.setSource(58166U);
    msg.setSourceEntity(30U);
    msg.setDestination(30305U);
    msg.setDestinationEntity(245U);
    msg.value = 0.612221794152;

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
    msg.setTimeStamp(0.184028653039);
    msg.setSource(48928U);
    msg.setSourceEntity(209U);
    msg.setDestination(63819U);
    msg.setDestinationEntity(126U);
    msg.value = 0.863143829732;

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
    msg.setTimeStamp(0.924206288129);
    msg.setSource(23970U);
    msg.setSourceEntity(137U);
    msg.setDestination(38855U);
    msg.setDestinationEntity(54U);
    msg.value = 0.31920120322;

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
    msg.setTimeStamp(0.462484964563);
    msg.setSource(20353U);
    msg.setSourceEntity(143U);
    msg.setDestination(10904U);
    msg.setDestinationEntity(100U);
    msg.value = 0.595631566715;

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
    msg.setTimeStamp(0.167785431534);
    msg.setSource(51069U);
    msg.setSourceEntity(140U);
    msg.setDestination(47162U);
    msg.setDestinationEntity(149U);
    msg.value = 0.132528217835;

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
    msg.setTimeStamp(0.0870265001237);
    msg.setSource(64031U);
    msg.setSourceEntity(82U);
    msg.setDestination(52861U);
    msg.setDestinationEntity(187U);
    msg.value = 0.960818064522;

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
    msg.setTimeStamp(0.720339935774);
    msg.setSource(23155U);
    msg.setSourceEntity(212U);
    msg.setDestination(44830U);
    msg.setDestinationEntity(222U);
    msg.value = 0.102655716321;

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
    msg.setTimeStamp(0.990207924876);
    msg.setSource(39600U);
    msg.setSourceEntity(49U);
    msg.setDestination(12107U);
    msg.setDestinationEntity(210U);
    msg.value = 0.575008778349;

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
    msg.setTimeStamp(0.435018582517);
    msg.setSource(43449U);
    msg.setSourceEntity(230U);
    msg.setDestination(58519U);
    msg.setDestinationEntity(18U);
    msg.value = 0.0320755372443;

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
    msg.setTimeStamp(0.576915707118);
    msg.setSource(13809U);
    msg.setSourceEntity(58U);
    msg.setDestination(34551U);
    msg.setDestinationEntity(159U);
    msg.value = 0.185892697555;

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
    msg.setTimeStamp(0.920682603455);
    msg.setSource(40595U);
    msg.setSourceEntity(241U);
    msg.setDestination(53328U);
    msg.setDestinationEntity(169U);
    msg.value = 0.166625944523;

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
    msg.setTimeStamp(0.546424020307);
    msg.setSource(9442U);
    msg.setSourceEntity(27U);
    msg.setDestination(52230U);
    msg.setDestinationEntity(231U);
    msg.id = 184U;
    msg.zoom = 181U;
    msg.action = 139U;

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
    msg.setTimeStamp(0.558475969455);
    msg.setSource(20143U);
    msg.setSourceEntity(170U);
    msg.setDestination(43883U);
    msg.setDestinationEntity(122U);
    msg.id = 16U;
    msg.zoom = 107U;
    msg.action = 187U;

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
    msg.setTimeStamp(0.212585037388);
    msg.setSource(1010U);
    msg.setSourceEntity(235U);
    msg.setDestination(8252U);
    msg.setDestinationEntity(16U);
    msg.id = 151U;
    msg.zoom = 217U;
    msg.action = 20U;

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
    msg.setTimeStamp(0.0500980147767);
    msg.setSource(64253U);
    msg.setSourceEntity(4U);
    msg.setDestination(29512U);
    msg.setDestinationEntity(100U);
    msg.id = 74U;
    msg.value = 0.137793927908;

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
    msg.setTimeStamp(0.0493406501586);
    msg.setSource(62027U);
    msg.setSourceEntity(111U);
    msg.setDestination(44448U);
    msg.setDestinationEntity(244U);
    msg.id = 249U;
    msg.value = 0.375477620278;

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
    msg.setTimeStamp(0.725462146226);
    msg.setSource(13232U);
    msg.setSourceEntity(146U);
    msg.setDestination(3986U);
    msg.setDestinationEntity(44U);
    msg.id = 157U;
    msg.value = 0.129218145546;

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
    msg.setTimeStamp(0.115465463819);
    msg.setSource(30698U);
    msg.setSourceEntity(88U);
    msg.setDestination(58546U);
    msg.setDestinationEntity(242U);
    msg.id = 50U;
    msg.value = 0.690536533787;

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
    msg.setTimeStamp(0.485049672761);
    msg.setSource(48156U);
    msg.setSourceEntity(2U);
    msg.setDestination(35943U);
    msg.setDestinationEntity(167U);
    msg.id = 241U;
    msg.value = 0.295576331907;

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
    msg.setTimeStamp(0.924397242725);
    msg.setSource(37241U);
    msg.setSourceEntity(180U);
    msg.setDestination(43216U);
    msg.setDestinationEntity(3U);
    msg.id = 3U;
    msg.value = 0.0694876439447;

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
    msg.setTimeStamp(0.87491364488);
    msg.setSource(49252U);
    msg.setSourceEntity(151U);
    msg.setDestination(5731U);
    msg.setDestinationEntity(188U);
    msg.id = 173U;
    msg.angle = 0.367741471371;

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
    msg.setTimeStamp(0.546590396904);
    msg.setSource(46322U);
    msg.setSourceEntity(77U);
    msg.setDestination(9933U);
    msg.setDestinationEntity(131U);
    msg.id = 162U;
    msg.angle = 0.530826621574;

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
    msg.setTimeStamp(0.768546626497);
    msg.setSource(1079U);
    msg.setSourceEntity(3U);
    msg.setDestination(9810U);
    msg.setDestinationEntity(101U);
    msg.id = 95U;
    msg.angle = 0.520646933549;

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
    msg.setTimeStamp(0.139032023855);
    msg.setSource(3863U);
    msg.setSourceEntity(190U);
    msg.setDestination(62113U);
    msg.setDestinationEntity(232U);
    msg.op = 92U;
    msg.actions.assign("CFNKGMYNDDYVNGGDMMTZYGXPUELGZIIEXQGSWFLFEODENVSJOMCAEZGTUWLITSKQXRRXSOXXTPJOQIKULRKAHCAIZHBMVQGLNRJDCYLHDDXWJHUTRRPOJAZJACXSWIPHQTMWBECKBHKLQFD");

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
    msg.setTimeStamp(0.665261997515);
    msg.setSource(23525U);
    msg.setSourceEntity(208U);
    msg.setDestination(26495U);
    msg.setDestinationEntity(155U);
    msg.op = 114U;
    msg.actions.assign("OTBADSJEWUSAIYXHMFFPNVOZQHYFYCTLYWPCMEJGOODSBHLISIIJISSRYAQFVGMJJZGCAYSIBRAIFEKTTEROZGPSECLKYTMVUJNHDTKRUGGHYRKNIFKKPIDDCUWXPWOLWHFDUHZVMFGDVGMEXKESDMJNZLVBKHLJQCUGBBQAXDLOWEVEUKUQNAXTYBCPOUXLKVYNBJRCMTWNCPOXMT");

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
    msg.setTimeStamp(0.484503997371);
    msg.setSource(2629U);
    msg.setSourceEntity(139U);
    msg.setDestination(62794U);
    msg.setDestinationEntity(181U);
    msg.op = 161U;
    msg.actions.assign("RJEMTHSZYXBFQEYYGDYRVEVKJLWANUIQXKKGOUTTKWBGZVLUWKWOWQCUIDBWLBNGTQCCPHPAJBLLJZQJUXLMTDMPUGKSDXGNZKHCZXBMIOODHBRTSRIGIIVM");

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
    msg.setTimeStamp(0.595560738067);
    msg.setSource(38025U);
    msg.setSourceEntity(88U);
    msg.setDestination(11265U);
    msg.setDestinationEntity(146U);
    msg.actions.assign("TJXKYJMKJUFCTHQBRVBPIONXFMYZETSK");

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
    msg.setTimeStamp(0.986926508432);
    msg.setSource(7605U);
    msg.setSourceEntity(222U);
    msg.setDestination(34587U);
    msg.setDestinationEntity(98U);
    msg.actions.assign("ENJPLQXVBBDFEHTQLAQDYJDOPATLTXXJKIIKHBKIDGSAHHQWGOPBRWSWRNZCOFZSZERITSCHHFKUMIMFRYDXIOJRBUVEAKJHZAIZQFFLDTLWOMWMUMJPVROSAAOOTIJLTA");

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
    msg.setTimeStamp(0.36438815797);
    msg.setSource(19536U);
    msg.setSourceEntity(249U);
    msg.setDestination(32263U);
    msg.setDestinationEntity(86U);
    msg.actions.assign("HLELZRJHKAOLZWHGEWMVTJDSPSMDOPBOCFEOQJNEBVSTUILDBUEWZVQCLILPHQGWANJFGUUHIMXACFBVVIWYBCKYPLPPHYNABNGXEJMGJWZSGKRNLTCAJKQAMAZVVZYXFMXYZROQYPHUTRSFEDEXDORARIUKOTJRKYYDXTIXDGPQL");

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
    msg.setTimeStamp(0.885189111829);
    msg.setSource(21260U);
    msg.setSourceEntity(148U);
    msg.setDestination(38044U);
    msg.setDestinationEntity(141U);
    msg.button = 3U;
    msg.value = 226U;

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
    msg.setTimeStamp(0.0342557360524);
    msg.setSource(29128U);
    msg.setSourceEntity(241U);
    msg.setDestination(60592U);
    msg.setDestinationEntity(31U);
    msg.button = 184U;
    msg.value = 248U;

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
    msg.setTimeStamp(0.688382653251);
    msg.setSource(64110U);
    msg.setSourceEntity(246U);
    msg.setDestination(63353U);
    msg.setDestinationEntity(123U);
    msg.button = 46U;
    msg.value = 186U;

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
    msg.setTimeStamp(0.093800504461);
    msg.setSource(28006U);
    msg.setSourceEntity(77U);
    msg.setDestination(22687U);
    msg.setDestinationEntity(217U);
    msg.op = 192U;
    msg.text.assign("VORWZNDIODYNKHUISAGLLYTDJSGIXDLQIHNYXFKKNSNLQRPFRARZWSOBPLDGKOVMCJOTJHVBSBSKLZTYDUQECEMIYIECEPRKFBVLTCZMZOTRFAANU");

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
    msg.setTimeStamp(0.571051299231);
    msg.setSource(22641U);
    msg.setSourceEntity(160U);
    msg.setDestination(23291U);
    msg.setDestinationEntity(12U);
    msg.op = 228U;
    msg.text.assign("XCONTYOIQTELQSOGIVTGFUWIAXRWJTHNJLWXKDXSDZQOODMCFISUHBNQDNRJMLFNKWKECPRGIHDKBYLZPJRQCUQJSAZNDJVVJEXFTREAF");

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
    msg.setTimeStamp(0.904633965556);
    msg.setSource(16327U);
    msg.setSourceEntity(42U);
    msg.setDestination(58122U);
    msg.setDestinationEntity(210U);
    msg.op = 137U;
    msg.text.assign("YZJIDYNQZDXOWQUROHZYSNDXTLAVSEEUHPDPGWCLBGFXTNCAXUVWCPMMQMYYHBEOYAVUSUBHEIFGUMJMAIJWXKEAFWRTSQQQLNAQUTYVEFCKXGJBBBTXZUIDXZWBO");

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
    msg.setTimeStamp(0.909570456497);
    msg.setSource(11578U);
    msg.setSourceEntity(75U);
    msg.setDestination(20226U);
    msg.setDestinationEntity(48U);
    msg.op = 114U;
    msg.time_remain = 0.0713076615602;
    msg.sched_time = 0.359392453331;

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
    msg.setTimeStamp(0.262195853681);
    msg.setSource(17846U);
    msg.setSourceEntity(2U);
    msg.setDestination(7424U);
    msg.setDestinationEntity(241U);
    msg.op = 2U;
    msg.time_remain = 0.76804626352;
    msg.sched_time = 0.837408118712;

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
    msg.setTimeStamp(0.810729777179);
    msg.setSource(37630U);
    msg.setSourceEntity(15U);
    msg.setDestination(51661U);
    msg.setDestinationEntity(97U);
    msg.op = 19U;
    msg.time_remain = 0.719503719275;
    msg.sched_time = 0.96634009377;

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
    msg.setTimeStamp(0.238480001301);
    msg.setSource(58766U);
    msg.setSourceEntity(87U);
    msg.setDestination(18562U);
    msg.setDestinationEntity(9U);
    msg.name.assign("JBOOGTZELWXSZTCFRJXPCQGXZTNDSXZSCGUQPXJAWNRRDBSFYIRRYRPKSGFURHQUAPGCPOMPOAEKFESVZKXHVGMBJKJBHIAZWEDNOAIXZGQYPXBNSJFLOFDHKMWGIUTTZDAAKNQMJUZVAYLYWVXBYQANVLXVMWYHCGLBVQUPUJLUGDBOCJKNIPUYOCTWFIYDMQQBLTLCIIEMEWLOTTHRSFVHN");
    msg.op = 11U;
    msg.sched_time = 0.163355277697;

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
    msg.setTimeStamp(0.351342385556);
    msg.setSource(34893U);
    msg.setSourceEntity(27U);
    msg.setDestination(24821U);
    msg.setDestinationEntity(64U);
    msg.name.assign("IQBOTVXWNIDIOMNBWKLJWQYSFHMVDAVMXZRD");
    msg.op = 29U;
    msg.sched_time = 0.0341471018108;

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
    msg.setTimeStamp(0.0507272583708);
    msg.setSource(37246U);
    msg.setSourceEntity(16U);
    msg.setDestination(3630U);
    msg.setDestinationEntity(106U);
    msg.name.assign("POOQHQAGPQKHVC");
    msg.op = 153U;
    msg.sched_time = 0.650803372274;

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
    msg.setTimeStamp(0.285957222648);
    msg.setSource(34893U);
    msg.setSourceEntity(127U);
    msg.setDestination(42756U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.153361544415);
    msg.setSource(36659U);
    msg.setSourceEntity(165U);
    msg.setDestination(13100U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.584947636371);
    msg.setSource(4773U);
    msg.setSourceEntity(21U);
    msg.setDestination(7331U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.725505677374);
    msg.setSource(57195U);
    msg.setSourceEntity(52U);
    msg.setDestination(8155U);
    msg.setDestinationEntity(68U);
    msg.name.assign("IQKGFPDGZXLZQPMJTTBGGZAECQGRDKQTMJUBMZIAUMDVUGPRWEHJRDYHKMYSSXHEEWRBURNOMRKIBTVPLQJHRXEKZWDNSRNSQDBWGOFCCEDVWAZQUQBBMAUKNYMPGZFTSFBFSYWLQNIUWEECTNGYAXLTHOXKOJZCNAFIQVSOLKFFJKORPXACAXSBWTDTPVFLHBLJLNCHOXPHEYDTHMHJCONJGJESUVLXIZIILPUVIKVMFVAC");
    msg.state = 211U;

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
    msg.setTimeStamp(0.756823392784);
    msg.setSource(43806U);
    msg.setSourceEntity(210U);
    msg.setDestination(38541U);
    msg.setDestinationEntity(166U);
    msg.name.assign("LPWRKRRVFLFIAPQTUICUYBYHCNMWXZBOGUEQKSJUVGGJPLAOSBDZSOUSVXPKHHRKCTKGRELDWJUMQBKRACMHCIXYVOENFBCZGQNJGHGCWRBYNNAVQKXIGLMOYHHMEFJTPLPOGFMWYWOBXUPFMLVPWJDAZMPDATJBFTSEZZSAREADDTULQVNKDJVCBTEOSMSNYFDWZUGEPTHAAZUQFJHLQCCYIXXFKWVDIQNILEKBNRNXSVZRJOW");
    msg.state = 3U;

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
    msg.setTimeStamp(0.583359437153);
    msg.setSource(42794U);
    msg.setSourceEntity(202U);
    msg.setDestination(27658U);
    msg.setDestinationEntity(38U);
    msg.name.assign("TTYIXYJIDFHWSMOJBKWSEPLUQZMMGZQTGSNRYELAWTNBXGCCKDICHQWLTFETMXOTXCQWUAVILDNVGJVPNYHBPLDXYVSCGIHARKYVFOFZJUWKXYPJOIQAUEJYHSJXBWYFTWBGESQCGKSSFOVURZHDMUZMU");
    msg.state = 234U;

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
    msg.setTimeStamp(0.874218918177);
    msg.setSource(38421U);
    msg.setSourceEntity(158U);
    msg.setDestination(11357U);
    msg.setDestinationEntity(19U);
    msg.name.assign("THQHWWPQDMBXROZFDMGJXOMPSECSJJKKEETNOEUZEZUUYVDDSPPXMIGWQOOVEVTNFAKXNUFBPDSXRFCHRPGCAMVKNDZXTUCLODBGJTNYDBHUFEIGKIIPLUMPIRNTKLRHZOSVOTYYBTMZHSQCWXFWJICLLKNIQRBHAXQF");
    msg.value = 186U;

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
    msg.setTimeStamp(0.92621239462);
    msg.setSource(60709U);
    msg.setSourceEntity(251U);
    msg.setDestination(13309U);
    msg.setDestinationEntity(240U);
    msg.name.assign("NAAWISTYCQXNTQQLZQXZQHEABOBJUZRUXQVIUSDWVMITKUVVRKBMRIGVGFOHKIWFWDTWZCPYRLNDOBKISLJOHBWLKBYEHLEMBIOTYZBFG");
    msg.value = 83U;

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
    msg.setTimeStamp(0.777353147896);
    msg.setSource(12811U);
    msg.setSourceEntity(39U);
    msg.setDestination(5274U);
    msg.setDestinationEntity(233U);
    msg.name.assign("BNLZINSVVNTQWLKJAXHIVNFGGETBYIMFFMGWQBRFWQPOKJBYWLM");
    msg.value = 220U;

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
    msg.setTimeStamp(0.627512271938);
    msg.setSource(61073U);
    msg.setSourceEntity(6U);
    msg.setDestination(53233U);
    msg.setDestinationEntity(28U);
    msg.name.assign("NQPHKSTAOXPVNZAWZGPQAGYHWWGMBZLMXXQIGDXKRKJNPUQZIVHUJCFXDYGCNMJYRIHEJOVMAJEASUKBQOJLTECOVDGVDOBTSMZCXFIGTGJSJWTHXCESYOSRSHIFNDYIKQMMLMZXSYHHEQYTUGVIBNEWC");

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
    msg.setTimeStamp(0.523197389233);
    msg.setSource(57397U);
    msg.setSourceEntity(1U);
    msg.setDestination(44389U);
    msg.setDestinationEntity(184U);
    msg.name.assign("ZKXZZLQJNJVZORPDFHBEEJPNRFMYTNWRAGWDXOPTBZENKWTBFQHYIMPOPIWVXYMUMLNLOFQLGKMRVLQJD");

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
    msg.setTimeStamp(0.994584253507);
    msg.setSource(9058U);
    msg.setSourceEntity(150U);
    msg.setDestination(49301U);
    msg.setDestinationEntity(68U);
    msg.name.assign("ZCJMWAKFGOJNSZJRMOGLARHUACXCOFWWHQGPLDEIYATBGNWSBJWGQMSTINLPXTQLH");

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
    msg.setTimeStamp(0.387864356389);
    msg.setSource(13836U);
    msg.setSourceEntity(97U);
    msg.setDestination(57520U);
    msg.setDestinationEntity(197U);
    msg.name.assign("IUYKIVGHVACUAXNGWXJLAILASQXYMJGZFDDSVQFOMBTHZBLAVGVHRBOQGPEUMLQEFUGTMGSQXKFRDMAHYEKWOTPRICKPPBATRLDYYBCJLWUJCZTZUIRXWXQKCKWORNCGZLNYBHDPTOJJECIFSIOOBPVRSEWDCYPNHGVWFBOQISWPJZIYHSCYSNBQFRSXOUVNENVXWEGHDUFTPYZTJWHREAMPZDKUSLTJZEKMFQMLVRNDMNJICAKZFKHTU");
    msg.value = 151U;

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
    msg.setTimeStamp(0.511998305557);
    msg.setSource(52964U);
    msg.setSourceEntity(46U);
    msg.setDestination(44312U);
    msg.setDestinationEntity(134U);
    msg.name.assign("VEFRPQDSFZUYNEUBGWHEZCMCAAHTMFHMRVUFLAWIBIPRXKJCJPXACSWZDEJHGXBGEYZUDZUXYSXFQYDOJUBFVGXFLGWJAYPWDDQMPOTAQLFPQUOEVKVNRZGQVKBKOYQTIOHRBIXVLNOWXIXNLLJSPNGWYZTAETJYQENWHASNRWIKDVKKHUOIKNOSVFJTMZ");
    msg.value = 101U;

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
    msg.setTimeStamp(0.168366911474);
    msg.setSource(22811U);
    msg.setSourceEntity(216U);
    msg.setDestination(61770U);
    msg.setDestinationEntity(108U);
    msg.name.assign("AQISLQPCYSOWADNCFTCVSQHRJPWWDNRNCDCCSPKLVRTLUJZHMYZVMUDTYNIBOBMXUAAAHOAVQODIEIHXWFBZWTIRSOYGKOVKZMBKCEWJBPEFUV");
    msg.value = 148U;

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
    msg.setTimeStamp(0.0247659746839);
    msg.setSource(38969U);
    msg.setSourceEntity(49U);
    msg.setDestination(51494U);
    msg.setDestinationEntity(85U);
    msg.id = 237U;
    msg.period = 302662711U;
    msg.duty_cycle = 139712151U;

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
    msg.setTimeStamp(0.201492532487);
    msg.setSource(4386U);
    msg.setSourceEntity(205U);
    msg.setDestination(44968U);
    msg.setDestinationEntity(234U);
    msg.id = 66U;
    msg.period = 3795886257U;
    msg.duty_cycle = 1508610489U;

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
    msg.setTimeStamp(0.216894910407);
    msg.setSource(23292U);
    msg.setSourceEntity(15U);
    msg.setDestination(48281U);
    msg.setDestinationEntity(69U);
    msg.id = 221U;
    msg.period = 3394216383U;
    msg.duty_cycle = 3464123496U;

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
    msg.setTimeStamp(0.103925449855);
    msg.setSource(59677U);
    msg.setSourceEntity(156U);
    msg.setDestination(44517U);
    msg.setDestinationEntity(5U);
    msg.id = 143U;
    msg.period = 220425976U;
    msg.duty_cycle = 1345287889U;

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
    msg.setTimeStamp(0.534258721336);
    msg.setSource(52299U);
    msg.setSourceEntity(70U);
    msg.setDestination(52938U);
    msg.setDestinationEntity(174U);
    msg.id = 151U;
    msg.period = 1174513567U;
    msg.duty_cycle = 1558774744U;

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
    msg.setTimeStamp(0.913217251145);
    msg.setSource(22191U);
    msg.setSourceEntity(143U);
    msg.setDestination(5607U);
    msg.setDestinationEntity(153U);
    msg.id = 110U;
    msg.period = 3964506378U;
    msg.duty_cycle = 3645043986U;

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
    msg.setTimeStamp(0.627194150995);
    msg.setSource(30840U);
    msg.setSourceEntity(199U);
    msg.setDestination(57611U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.809554128675;
    msg.lon = 0.503653759926;
    msg.height = 0.838400856026;
    msg.x = 0.793205316631;
    msg.y = 0.00532803830346;
    msg.z = 0.105084675741;
    msg.phi = 0.109634953522;
    msg.theta = 0.677743839494;
    msg.psi = 0.400449492653;
    msg.u = 0.368142460524;
    msg.v = 0.290379232756;
    msg.w = 0.869566657441;
    msg.vx = 0.461942742526;
    msg.vy = 0.245565743636;
    msg.vz = 0.695272685566;
    msg.p = 0.713200142565;
    msg.q = 0.0724444099048;
    msg.r = 0.0109934214772;
    msg.depth = 0.777003413675;
    msg.alt = 0.936633899649;

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
    msg.setTimeStamp(0.912092662978);
    msg.setSource(27695U);
    msg.setSourceEntity(146U);
    msg.setDestination(39696U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.0912023837151;
    msg.lon = 0.515498227385;
    msg.height = 0.12751454283;
    msg.x = 0.427558485369;
    msg.y = 0.376262180641;
    msg.z = 0.255570986064;
    msg.phi = 0.638552995717;
    msg.theta = 0.53220678188;
    msg.psi = 0.223155629339;
    msg.u = 0.0631965650453;
    msg.v = 0.658379881914;
    msg.w = 0.138228062957;
    msg.vx = 0.963780504421;
    msg.vy = 0.603851855813;
    msg.vz = 0.406218466334;
    msg.p = 0.46400419258;
    msg.q = 0.0753626077698;
    msg.r = 0.0280196711915;
    msg.depth = 0.194753688161;
    msg.alt = 0.896064200427;

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
    msg.setTimeStamp(0.62917055306);
    msg.setSource(46759U);
    msg.setSourceEntity(68U);
    msg.setDestination(1476U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.228347644414;
    msg.lon = 0.0699497732313;
    msg.height = 0.137289424321;
    msg.x = 0.997127035938;
    msg.y = 0.763320479846;
    msg.z = 0.0136459890786;
    msg.phi = 0.535108043124;
    msg.theta = 0.783737434554;
    msg.psi = 0.943393258176;
    msg.u = 0.705358615172;
    msg.v = 0.258139854067;
    msg.w = 0.0425986346626;
    msg.vx = 0.0156872138598;
    msg.vy = 0.392060121919;
    msg.vz = 0.936504415602;
    msg.p = 0.43477497027;
    msg.q = 0.691265273104;
    msg.r = 0.474356607084;
    msg.depth = 0.340136192261;
    msg.alt = 0.982990867243;

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
    msg.setTimeStamp(0.0586695732285);
    msg.setSource(24550U);
    msg.setSourceEntity(82U);
    msg.setDestination(30134U);
    msg.setDestinationEntity(49U);
    msg.x = 0.70862593346;
    msg.y = 0.44818893108;
    msg.z = 0.695641657829;

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
    msg.setTimeStamp(0.964902851319);
    msg.setSource(41895U);
    msg.setSourceEntity(11U);
    msg.setDestination(33688U);
    msg.setDestinationEntity(138U);
    msg.x = 0.322329093035;
    msg.y = 0.331385596954;
    msg.z = 0.057151208649;

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
    msg.setTimeStamp(0.562023839929);
    msg.setSource(3854U);
    msg.setSourceEntity(221U);
    msg.setDestination(27180U);
    msg.setDestinationEntity(157U);
    msg.x = 0.467405304882;
    msg.y = 0.525011869623;
    msg.z = 0.26760651593;

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
    msg.setTimeStamp(0.447132423359);
    msg.setSource(65228U);
    msg.setSourceEntity(216U);
    msg.setDestination(9129U);
    msg.setDestinationEntity(55U);
    msg.value = 0.919947024804;

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
    msg.setTimeStamp(0.656343082787);
    msg.setSource(25734U);
    msg.setSourceEntity(220U);
    msg.setDestination(1U);
    msg.setDestinationEntity(141U);
    msg.value = 0.260795721475;

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
    msg.setTimeStamp(0.59071534309);
    msg.setSource(56375U);
    msg.setSourceEntity(246U);
    msg.setDestination(39910U);
    msg.setDestinationEntity(52U);
    msg.value = 0.918896762433;

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
    msg.setTimeStamp(0.305001027751);
    msg.setSource(29060U);
    msg.setSourceEntity(74U);
    msg.setDestination(43137U);
    msg.setDestinationEntity(157U);
    msg.value = 0.497694529336;

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
    msg.setTimeStamp(0.743537008057);
    msg.setSource(17754U);
    msg.setSourceEntity(57U);
    msg.setDestination(41346U);
    msg.setDestinationEntity(15U);
    msg.value = 0.516174388415;

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
    msg.setTimeStamp(0.581008437042);
    msg.setSource(2130U);
    msg.setSourceEntity(144U);
    msg.setDestination(50539U);
    msg.setDestinationEntity(115U);
    msg.value = 0.659296970495;

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
    msg.setTimeStamp(0.0388632896383);
    msg.setSource(1100U);
    msg.setSourceEntity(114U);
    msg.setDestination(27594U);
    msg.setDestinationEntity(139U);
    msg.x = 0.700086857865;
    msg.y = 0.319072413829;
    msg.z = 0.959493643246;
    msg.phi = 0.576081807502;
    msg.theta = 0.95656374325;
    msg.psi = 0.605163383476;
    msg.p = 0.772588436276;
    msg.q = 0.61093939795;
    msg.r = 0.146679903816;
    msg.u = 0.490163042088;
    msg.v = 0.614080483136;
    msg.w = 0.978406705401;
    msg.bias_psi = 0.097668454358;
    msg.bias_r = 0.684649350425;

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
    msg.setTimeStamp(0.685633735183);
    msg.setSource(53191U);
    msg.setSourceEntity(202U);
    msg.setDestination(28856U);
    msg.setDestinationEntity(243U);
    msg.x = 0.113941555052;
    msg.y = 0.886080098358;
    msg.z = 0.823280051054;
    msg.phi = 0.0193340803765;
    msg.theta = 0.402975311393;
    msg.psi = 0.826568697184;
    msg.p = 0.907163274946;
    msg.q = 0.122715337763;
    msg.r = 0.0368098940144;
    msg.u = 0.156440800252;
    msg.v = 0.458351082502;
    msg.w = 0.860784486948;
    msg.bias_psi = 0.338966298539;
    msg.bias_r = 0.567636876381;

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
    msg.setTimeStamp(0.0642039673009);
    msg.setSource(54779U);
    msg.setSourceEntity(132U);
    msg.setDestination(18922U);
    msg.setDestinationEntity(120U);
    msg.x = 0.715503596709;
    msg.y = 0.965140011782;
    msg.z = 0.501397701219;
    msg.phi = 0.358197408866;
    msg.theta = 0.174098372967;
    msg.psi = 0.410095603144;
    msg.p = 0.742988642258;
    msg.q = 0.269791051761;
    msg.r = 0.731647599211;
    msg.u = 0.837335737472;
    msg.v = 0.384284834293;
    msg.w = 0.100576244291;
    msg.bias_psi = 0.606278720218;
    msg.bias_r = 0.574019971059;

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
    msg.setTimeStamp(0.0653672496619);
    msg.setSource(35595U);
    msg.setSourceEntity(141U);
    msg.setDestination(63377U);
    msg.setDestinationEntity(127U);
    msg.bias_psi = 0.618808606794;
    msg.bias_r = 0.0135959171924;
    msg.cog = 0.627178935996;
    msg.cyaw = 0.548970689971;
    msg.lbl_rej_level = 0.850790910396;
    msg.gps_rej_level = 0.0724893813037;
    msg.custom_x = 0.741824696832;
    msg.custom_y = 0.754386839314;
    msg.custom_z = 0.00787333618655;

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
    msg.setTimeStamp(0.151066375055);
    msg.setSource(38148U);
    msg.setSourceEntity(137U);
    msg.setDestination(35768U);
    msg.setDestinationEntity(144U);
    msg.bias_psi = 0.400527007304;
    msg.bias_r = 0.011183511007;
    msg.cog = 0.0588449616405;
    msg.cyaw = 0.709726086072;
    msg.lbl_rej_level = 0.682351084654;
    msg.gps_rej_level = 0.482521638179;
    msg.custom_x = 0.238453415961;
    msg.custom_y = 0.00768021252186;
    msg.custom_z = 0.263667379468;

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
    msg.setTimeStamp(0.499243269512);
    msg.setSource(58219U);
    msg.setSourceEntity(124U);
    msg.setDestination(57995U);
    msg.setDestinationEntity(188U);
    msg.bias_psi = 0.764329688412;
    msg.bias_r = 0.880851475445;
    msg.cog = 0.49449779271;
    msg.cyaw = 0.154705551034;
    msg.lbl_rej_level = 0.892072082168;
    msg.gps_rej_level = 0.358176340745;
    msg.custom_x = 0.212942606043;
    msg.custom_y = 0.584113964885;
    msg.custom_z = 0.318385936319;

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
    msg.setTimeStamp(0.804560516642);
    msg.setSource(51870U);
    msg.setSourceEntity(156U);
    msg.setDestination(35526U);
    msg.setDestinationEntity(40U);
    msg.utc_time = 0.318850635019;
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
    msg.setTimeStamp(0.00631081487706);
    msg.setSource(7897U);
    msg.setSourceEntity(222U);
    msg.setDestination(33819U);
    msg.setDestinationEntity(111U);
    msg.utc_time = 0.684567471156;
    msg.reason = 205U;

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
    msg.setTimeStamp(0.185038846661);
    msg.setSource(32817U);
    msg.setSourceEntity(152U);
    msg.setDestination(56552U);
    msg.setDestinationEntity(251U);
    msg.utc_time = 0.984840706067;
    msg.reason = 57U;

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
    msg.setTimeStamp(0.212709282208);
    msg.setSource(32033U);
    msg.setSourceEntity(180U);
    msg.setDestination(28225U);
    msg.setDestinationEntity(193U);
    msg.id = 74U;
    msg.range = 0.187013823001;
    msg.acceptance = 218U;

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
    msg.setTimeStamp(0.766693176692);
    msg.setSource(51270U);
    msg.setSourceEntity(153U);
    msg.setDestination(52043U);
    msg.setDestinationEntity(73U);
    msg.id = 123U;
    msg.range = 0.87937170083;
    msg.acceptance = 65U;

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
    msg.setTimeStamp(0.292560953734);
    msg.setSource(52870U);
    msg.setSourceEntity(10U);
    msg.setDestination(31181U);
    msg.setDestinationEntity(252U);
    msg.id = 226U;
    msg.range = 0.41225969374;
    msg.acceptance = 44U;

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
    msg.setTimeStamp(0.396418250957);
    msg.setSource(62907U);
    msg.setSourceEntity(55U);
    msg.setDestination(48509U);
    msg.setDestinationEntity(126U);
    msg.type = 160U;
    msg.reason = 191U;
    msg.value = 0.208918962801;
    msg.timestep = 0.0243905851119;

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
    msg.setTimeStamp(0.348071566574);
    msg.setSource(19382U);
    msg.setSourceEntity(72U);
    msg.setDestination(55781U);
    msg.setDestinationEntity(63U);
    msg.type = 30U;
    msg.reason = 25U;
    msg.value = 0.476509500406;
    msg.timestep = 0.799438021695;

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
    msg.setTimeStamp(0.471718422018);
    msg.setSource(42043U);
    msg.setSourceEntity(15U);
    msg.setDestination(10780U);
    msg.setDestinationEntity(233U);
    msg.type = 120U;
    msg.reason = 192U;
    msg.value = 0.65949249486;
    msg.timestep = 0.274657229905;

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
    msg.setTimeStamp(0.905967453662);
    msg.setSource(61261U);
    msg.setSourceEntity(76U);
    msg.setDestination(43725U);
    msg.setDestinationEntity(244U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RBBCNLTDKUZPHFYGACLKKQAHBBNJUZPGTCTKMMNCZVQUJMUCVIWZXQWIOJMQDUVMCEIWPPLDKNFAXRYXDGYDREYKVLGOPKXGQSUVNUFHJTSBILGWOKQTXEJIBUYJCMBXOSMNSYRMLOOQAZALGTUXIEEHCJDAEVRKMFOEOFWVZPHC");
    tmp_msg_0.lat = 0.314780024681;
    tmp_msg_0.lon = 0.363690658712;
    tmp_msg_0.depth = 0.0434115576734;
    tmp_msg_0.query_channel = 50U;
    tmp_msg_0.reply_channel = 150U;
    tmp_msg_0.transponder_delay = 77U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.32738869006;
    msg.y = 0.705251182335;
    msg.var_x = 0.84833304031;
    msg.var_y = 0.000646832927446;
    msg.distance = 0.890998278133;

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
    msg.setTimeStamp(0.671882706789);
    msg.setSource(8700U);
    msg.setSourceEntity(0U);
    msg.setDestination(62347U);
    msg.setDestinationEntity(35U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AITDVOFZYFTPCJSRX");
    tmp_msg_0.lat = 0.814053778728;
    tmp_msg_0.lon = 0.323769395448;
    tmp_msg_0.depth = 0.0229376052942;
    tmp_msg_0.query_channel = 199U;
    tmp_msg_0.reply_channel = 142U;
    tmp_msg_0.transponder_delay = 78U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.572855004038;
    msg.y = 0.142495713981;
    msg.var_x = 0.00862569146521;
    msg.var_y = 0.3620855684;
    msg.distance = 0.262719947337;

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
    msg.setTimeStamp(0.438556787499);
    msg.setSource(48589U);
    msg.setSourceEntity(43U);
    msg.setDestination(57513U);
    msg.setDestinationEntity(26U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OMEHPZXOZAPXYFDTQQVNQBSCRPJNBKTDPSANNMJHGYWXMSSTWZCZHKTEGWMAWSFHYIEFDSLGKIEOZRHSKRCNPGO");
    tmp_msg_0.lat = 0.529186410953;
    tmp_msg_0.lon = 0.445616882399;
    tmp_msg_0.depth = 0.55859784813;
    tmp_msg_0.query_channel = 104U;
    tmp_msg_0.reply_channel = 88U;
    tmp_msg_0.transponder_delay = 56U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.00195561284692;
    msg.y = 0.54722101838;
    msg.var_x = 0.0712204280322;
    msg.var_y = 0.725917714634;
    msg.distance = 0.997759943024;

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
    msg.setTimeStamp(0.65478231891);
    msg.setSource(4124U);
    msg.setSourceEntity(243U);
    msg.setDestination(39835U);
    msg.setDestinationEntity(98U);
    msg.state = 67U;

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
    msg.setTimeStamp(0.737414817078);
    msg.setSource(61443U);
    msg.setSourceEntity(226U);
    msg.setDestination(31449U);
    msg.setDestinationEntity(62U);
    msg.state = 74U;

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
    msg.setTimeStamp(0.000386478204116);
    msg.setSource(6360U);
    msg.setSourceEntity(39U);
    msg.setDestination(61204U);
    msg.setDestinationEntity(39U);
    msg.state = 130U;

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
    msg.setTimeStamp(0.092662837624);
    msg.setSource(11408U);
    msg.setSourceEntity(45U);
    msg.setDestination(45420U);
    msg.setDestinationEntity(5U);
    msg.x = 0.671892457047;
    msg.y = 0.070525631641;
    msg.z = 0.832361111737;

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
    msg.setTimeStamp(0.423926652628);
    msg.setSource(53296U);
    msg.setSourceEntity(165U);
    msg.setDestination(35561U);
    msg.setDestinationEntity(191U);
    msg.x = 0.834920749074;
    msg.y = 0.882238732619;
    msg.z = 0.720020721965;

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
    msg.setTimeStamp(0.176510789413);
    msg.setSource(33454U);
    msg.setSourceEntity(100U);
    msg.setDestination(37262U);
    msg.setDestinationEntity(215U);
    msg.x = 0.667183155193;
    msg.y = 0.794587182098;
    msg.z = 0.591314293185;

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
    msg.setTimeStamp(0.386595865378);
    msg.setSource(17627U);
    msg.setSourceEntity(112U);
    msg.setDestination(39063U);
    msg.setDestinationEntity(64U);
    msg.va = 0.127224150462;
    msg.aoa = 0.0658594082029;
    msg.ssa = 0.368659758411;

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
    msg.setTimeStamp(0.120190342703);
    msg.setSource(52868U);
    msg.setSourceEntity(36U);
    msg.setDestination(46497U);
    msg.setDestinationEntity(250U);
    msg.va = 0.566571876145;
    msg.aoa = 0.417225199944;
    msg.ssa = 0.356153005608;

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
    msg.setTimeStamp(0.361236159664);
    msg.setSource(50336U);
    msg.setSourceEntity(159U);
    msg.setDestination(60671U);
    msg.setDestinationEntity(76U);
    msg.va = 0.977630827539;
    msg.aoa = 0.248547114919;
    msg.ssa = 0.423112617442;

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
    msg.setTimeStamp(0.408573219868);
    msg.setSource(22852U);
    msg.setSourceEntity(159U);
    msg.setDestination(56167U);
    msg.setDestinationEntity(52U);
    msg.value = 0.338405168926;

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
    msg.setTimeStamp(0.790496864051);
    msg.setSource(31184U);
    msg.setSourceEntity(218U);
    msg.setDestination(49844U);
    msg.setDestinationEntity(167U);
    msg.value = 0.787064350183;

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
    msg.setTimeStamp(0.595639950967);
    msg.setSource(25547U);
    msg.setSourceEntity(132U);
    msg.setDestination(33986U);
    msg.setDestinationEntity(21U);
    msg.value = 0.414239893647;

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
    msg.setTimeStamp(0.0172050969997);
    msg.setSource(62820U);
    msg.setSourceEntity(108U);
    msg.setDestination(12237U);
    msg.setDestinationEntity(88U);
    msg.value = 0.896831863142;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.140667347436);
    msg.setSource(52248U);
    msg.setSourceEntity(130U);
    msg.setDestination(52267U);
    msg.setDestinationEntity(99U);
    msg.value = 0.801887525269;
    msg.z_units = 208U;

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
    msg.setTimeStamp(0.58238497647);
    msg.setSource(14618U);
    msg.setSourceEntity(91U);
    msg.setDestination(31328U);
    msg.setDestinationEntity(154U);
    msg.value = 0.55652676553;
    msg.z_units = 141U;

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
    msg.setTimeStamp(0.0609823193336);
    msg.setSource(16361U);
    msg.setSourceEntity(150U);
    msg.setDestination(8338U);
    msg.setDestinationEntity(253U);
    msg.value = 0.70409059759;
    msg.speed_units = 156U;

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
    msg.setTimeStamp(0.913586965888);
    msg.setSource(41012U);
    msg.setSourceEntity(28U);
    msg.setDestination(63786U);
    msg.setDestinationEntity(244U);
    msg.value = 0.522198837347;
    msg.speed_units = 85U;

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
    msg.setTimeStamp(0.718429712317);
    msg.setSource(56457U);
    msg.setSourceEntity(49U);
    msg.setDestination(55759U);
    msg.setDestinationEntity(245U);
    msg.value = 0.930626719151;
    msg.speed_units = 183U;

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
    msg.setTimeStamp(0.78467007581);
    msg.setSource(31496U);
    msg.setSourceEntity(140U);
    msg.setDestination(11823U);
    msg.setDestinationEntity(52U);
    msg.value = 0.56315608477;

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
    msg.setTimeStamp(0.563822560899);
    msg.setSource(29073U);
    msg.setSourceEntity(36U);
    msg.setDestination(343U);
    msg.setDestinationEntity(145U);
    msg.value = 0.534936012724;

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
    msg.setTimeStamp(0.420131780481);
    msg.setSource(48696U);
    msg.setSourceEntity(145U);
    msg.setDestination(57465U);
    msg.setDestinationEntity(216U);
    msg.value = 0.44894745912;

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
    msg.setTimeStamp(0.355127143977);
    msg.setSource(33971U);
    msg.setSourceEntity(242U);
    msg.setDestination(59219U);
    msg.setDestinationEntity(90U);
    msg.value = 0.451120239112;

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
    msg.setTimeStamp(0.697010734438);
    msg.setSource(59740U);
    msg.setSourceEntity(208U);
    msg.setDestination(40397U);
    msg.setDestinationEntity(156U);
    msg.value = 0.600537332561;

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
    msg.setTimeStamp(0.773882416532);
    msg.setSource(59702U);
    msg.setSourceEntity(147U);
    msg.setDestination(39343U);
    msg.setDestinationEntity(254U);
    msg.value = 0.900383003636;

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
    msg.setTimeStamp(0.627688009343);
    msg.setSource(26748U);
    msg.setSourceEntity(198U);
    msg.setDestination(63597U);
    msg.setDestinationEntity(52U);
    msg.value = 0.830867604017;

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
    msg.setTimeStamp(0.726536510848);
    msg.setSource(21965U);
    msg.setSourceEntity(43U);
    msg.setDestination(54227U);
    msg.setDestinationEntity(178U);
    msg.value = 0.885398096798;

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
    msg.setTimeStamp(0.782519103164);
    msg.setSource(51428U);
    msg.setSourceEntity(213U);
    msg.setDestination(2832U);
    msg.setDestinationEntity(95U);
    msg.value = 0.975361134841;

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
    msg.setTimeStamp(0.807465081406);
    msg.setSource(27032U);
    msg.setSourceEntity(2U);
    msg.setDestination(62682U);
    msg.setDestinationEntity(149U);
    msg.path_ref = 1016788489U;
    msg.start_lat = 0.022161922677;
    msg.start_lon = 0.829510795623;
    msg.start_z = 0.878437228231;
    msg.start_z_units = 137U;
    msg.end_lat = 0.109597170192;
    msg.end_lon = 0.0109814344274;
    msg.end_z = 0.270646959902;
    msg.end_z_units = 103U;
    msg.speed = 0.722566447439;
    msg.speed_units = 135U;
    msg.lradius = 0.203443242972;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.0162161048887);
    msg.setSource(23046U);
    msg.setSourceEntity(4U);
    msg.setDestination(16783U);
    msg.setDestinationEntity(46U);
    msg.path_ref = 2097678149U;
    msg.start_lat = 0.105783295733;
    msg.start_lon = 0.297597185096;
    msg.start_z = 0.0781189801022;
    msg.start_z_units = 196U;
    msg.end_lat = 0.439825013141;
    msg.end_lon = 0.772851300768;
    msg.end_z = 0.749321514446;
    msg.end_z_units = 114U;
    msg.speed = 0.228514396323;
    msg.speed_units = 92U;
    msg.lradius = 0.27328558469;
    msg.flags = 98U;

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
    msg.setTimeStamp(0.425516967635);
    msg.setSource(37727U);
    msg.setSourceEntity(144U);
    msg.setDestination(33075U);
    msg.setDestinationEntity(17U);
    msg.path_ref = 2043910030U;
    msg.start_lat = 0.399597615296;
    msg.start_lon = 0.427211800789;
    msg.start_z = 0.130121644557;
    msg.start_z_units = 67U;
    msg.end_lat = 0.764206895737;
    msg.end_lon = 0.52907421303;
    msg.end_z = 0.42937447323;
    msg.end_z_units = 49U;
    msg.speed = 0.178153870231;
    msg.speed_units = 116U;
    msg.lradius = 0.0137144176066;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.0663474677924);
    msg.setSource(36763U);
    msg.setSourceEntity(178U);
    msg.setDestination(19620U);
    msg.setDestinationEntity(54U);
    msg.x = 0.282648722099;
    msg.y = 0.920093073854;
    msg.z = 0.397079409641;
    msg.k = 0.995223830523;
    msg.m = 0.396137277489;
    msg.n = 0.251835364468;
    msg.flags = 101U;

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
    msg.setTimeStamp(0.131425502181);
    msg.setSource(46109U);
    msg.setSourceEntity(158U);
    msg.setDestination(49810U);
    msg.setDestinationEntity(108U);
    msg.x = 0.897099703499;
    msg.y = 0.649252591656;
    msg.z = 0.50824305169;
    msg.k = 0.925567497329;
    msg.m = 0.997796913614;
    msg.n = 0.105471998116;
    msg.flags = 162U;

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
    msg.setTimeStamp(0.73022285585);
    msg.setSource(41139U);
    msg.setSourceEntity(183U);
    msg.setDestination(55346U);
    msg.setDestinationEntity(119U);
    msg.x = 0.509378888946;
    msg.y = 0.19669093569;
    msg.z = 0.0735238095314;
    msg.k = 0.768310307577;
    msg.m = 0.604323055278;
    msg.n = 0.622111621007;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.865219533488);
    msg.setSource(57492U);
    msg.setSourceEntity(178U);
    msg.setDestination(8632U);
    msg.setDestinationEntity(12U);
    msg.value = 0.889445669527;

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
    msg.setTimeStamp(0.781325995597);
    msg.setSource(45655U);
    msg.setSourceEntity(3U);
    msg.setDestination(7978U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0274653321211;

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
    msg.setTimeStamp(0.465008383714);
    msg.setSource(16021U);
    msg.setSourceEntity(147U);
    msg.setDestination(13348U);
    msg.setDestinationEntity(179U);
    msg.value = 0.578254255095;

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
    msg.setTimeStamp(0.434373476593);
    msg.setSource(37310U);
    msg.setSourceEntity(127U);
    msg.setDestination(18923U);
    msg.setDestinationEntity(103U);
    msg.u = 0.266932123185;
    msg.v = 0.223850657613;
    msg.w = 0.75378607781;
    msg.p = 0.639292480071;
    msg.q = 0.938537080451;
    msg.r = 0.742239494386;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.0235993206091);
    msg.setSource(11736U);
    msg.setSourceEntity(159U);
    msg.setDestination(57012U);
    msg.setDestinationEntity(150U);
    msg.u = 0.994061649496;
    msg.v = 0.845085582566;
    msg.w = 0.932975452409;
    msg.p = 0.381567854479;
    msg.q = 0.396119620862;
    msg.r = 0.563814366924;
    msg.flags = 64U;

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
    msg.setTimeStamp(0.474594058199);
    msg.setSource(2180U);
    msg.setSourceEntity(95U);
    msg.setDestination(48548U);
    msg.setDestinationEntity(204U);
    msg.u = 0.622749457269;
    msg.v = 0.711294266904;
    msg.w = 0.685504621178;
    msg.p = 0.728978839795;
    msg.q = 0.906299493242;
    msg.r = 0.559308859361;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.258386096523);
    msg.setSource(55939U);
    msg.setSourceEntity(174U);
    msg.setDestination(60410U);
    msg.setDestinationEntity(65U);
    msg.path_ref = 176468231U;
    msg.start_lat = 0.192502578573;
    msg.start_lon = 0.781177186418;
    msg.start_z = 0.772741928008;
    msg.start_z_units = 129U;
    msg.end_lat = 0.279573038733;
    msg.end_lon = 0.215379082372;
    msg.end_z = 0.586719238153;
    msg.end_z_units = 96U;
    msg.lradius = 0.851447850562;
    msg.flags = 207U;
    msg.x = 0.0547324167151;
    msg.y = 0.206556815476;
    msg.z = 0.663951066696;
    msg.vx = 0.808198371401;
    msg.vy = 0.0992474351381;
    msg.vz = 0.172507721088;
    msg.course_error = 0.401894247563;
    msg.eta = 3916U;

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
    msg.setTimeStamp(0.796543893787);
    msg.setSource(16467U);
    msg.setSourceEntity(61U);
    msg.setDestination(59063U);
    msg.setDestinationEntity(82U);
    msg.path_ref = 2497266064U;
    msg.start_lat = 0.122474074822;
    msg.start_lon = 0.928010242869;
    msg.start_z = 0.862661954606;
    msg.start_z_units = 200U;
    msg.end_lat = 0.784297754845;
    msg.end_lon = 0.91088317902;
    msg.end_z = 0.58392297986;
    msg.end_z_units = 28U;
    msg.lradius = 0.322371790424;
    msg.flags = 202U;
    msg.x = 0.336584096929;
    msg.y = 0.200457916241;
    msg.z = 0.636864806004;
    msg.vx = 0.748748770927;
    msg.vy = 0.0846211714165;
    msg.vz = 0.239877505308;
    msg.course_error = 0.295155362583;
    msg.eta = 46021U;

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
    msg.setTimeStamp(0.149864823407);
    msg.setSource(41201U);
    msg.setSourceEntity(160U);
    msg.setDestination(8754U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 4145046701U;
    msg.start_lat = 0.640575687575;
    msg.start_lon = 0.718870923922;
    msg.start_z = 0.211675693408;
    msg.start_z_units = 195U;
    msg.end_lat = 0.289554716432;
    msg.end_lon = 0.419845494603;
    msg.end_z = 0.351345046704;
    msg.end_z_units = 46U;
    msg.lradius = 0.166629613217;
    msg.flags = 8U;
    msg.x = 0.40088262397;
    msg.y = 0.822007650765;
    msg.z = 0.503787071697;
    msg.vx = 0.399659205877;
    msg.vy = 0.585013882923;
    msg.vz = 0.310428168767;
    msg.course_error = 0.730800646701;
    msg.eta = 25313U;

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
    msg.setTimeStamp(0.936316104524);
    msg.setSource(51513U);
    msg.setSourceEntity(163U);
    msg.setDestination(50992U);
    msg.setDestinationEntity(158U);
    msg.k = 0.7297421652;
    msg.m = 0.0271487720048;
    msg.n = 0.281763739602;

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
    msg.setTimeStamp(0.787637761569);
    msg.setSource(35007U);
    msg.setSourceEntity(67U);
    msg.setDestination(25823U);
    msg.setDestinationEntity(120U);
    msg.k = 0.102568770456;
    msg.m = 0.322590275554;
    msg.n = 0.432533991085;

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
    msg.setTimeStamp(0.978016950305);
    msg.setSource(44801U);
    msg.setSourceEntity(120U);
    msg.setDestination(23117U);
    msg.setDestinationEntity(102U);
    msg.k = 0.268058732879;
    msg.m = 0.590249917585;
    msg.n = 0.897958349728;

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
    msg.setTimeStamp(0.855157362404);
    msg.setSource(14928U);
    msg.setSourceEntity(198U);
    msg.setDestination(38228U);
    msg.setDestinationEntity(110U);
    msg.p = 0.612788777584;
    msg.i = 0.496799033742;
    msg.d = 0.958129722732;
    msg.a = 0.383273451652;

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
    msg.setTimeStamp(0.431839951241);
    msg.setSource(44029U);
    msg.setSourceEntity(59U);
    msg.setDestination(53069U);
    msg.setDestinationEntity(158U);
    msg.p = 0.740765936315;
    msg.i = 0.360579344865;
    msg.d = 0.638144726935;
    msg.a = 0.268607179548;

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
    msg.setTimeStamp(0.860186213733);
    msg.setSource(62245U);
    msg.setSourceEntity(111U);
    msg.setDestination(33627U);
    msg.setDestinationEntity(43U);
    msg.p = 0.956313209249;
    msg.i = 0.571199682956;
    msg.d = 0.771155476975;
    msg.a = 0.53593411069;

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
    msg.setTimeStamp(0.714402844683);
    msg.setSource(9212U);
    msg.setSourceEntity(102U);
    msg.setDestination(61636U);
    msg.setDestinationEntity(0U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.310081574031);
    msg.setSource(39739U);
    msg.setSourceEntity(98U);
    msg.setDestination(32805U);
    msg.setDestinationEntity(100U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.243546113846);
    msg.setSource(36302U);
    msg.setSourceEntity(130U);
    msg.setDestination(9879U);
    msg.setDestinationEntity(135U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.278719518559);
    msg.setSource(26291U);
    msg.setSourceEntity(40U);
    msg.setDestination(37562U);
    msg.setDestinationEntity(44U);
    msg.x = 0.816403193524;
    msg.y = 0.847196883306;
    msg.z = 0.514140645452;
    msg.vx = 0.0989120113421;
    msg.vy = 0.842406926861;
    msg.vz = 0.962025848323;
    msg.ax = 0.0649116243169;
    msg.ay = 0.0784015046207;
    msg.az = 0.845226505289;
    msg.flags = 55777U;

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
    msg.setTimeStamp(0.399697743685);
    msg.setSource(53684U);
    msg.setSourceEntity(192U);
    msg.setDestination(55933U);
    msg.setDestinationEntity(71U);
    msg.x = 0.772521860271;
    msg.y = 0.981225821452;
    msg.z = 0.79532805146;
    msg.vx = 0.925623682263;
    msg.vy = 0.999639304864;
    msg.vz = 0.0602342137285;
    msg.ax = 0.641926551255;
    msg.ay = 0.0382308254012;
    msg.az = 0.552405537164;
    msg.flags = 1229U;

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
    msg.setTimeStamp(0.747063646134);
    msg.setSource(43812U);
    msg.setSourceEntity(86U);
    msg.setDestination(33346U);
    msg.setDestinationEntity(93U);
    msg.x = 0.378172555664;
    msg.y = 0.468984748058;
    msg.z = 0.672127747003;
    msg.vx = 0.942036856416;
    msg.vy = 0.562401290301;
    msg.vz = 0.709048924921;
    msg.ax = 0.104317156489;
    msg.ay = 0.062706419831;
    msg.az = 0.400891435482;
    msg.flags = 51423U;

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
    msg.setTimeStamp(0.169774950573);
    msg.setSource(34869U);
    msg.setSourceEntity(240U);
    msg.setDestination(32943U);
    msg.setDestinationEntity(66U);
    msg.value = 0.0603030934983;

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
    msg.setTimeStamp(0.535648757073);
    msg.setSource(38380U);
    msg.setSourceEntity(0U);
    msg.setDestination(15743U);
    msg.setDestinationEntity(219U);
    msg.value = 0.567878502643;

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
    msg.setTimeStamp(0.286764223491);
    msg.setSource(53677U);
    msg.setSourceEntity(173U);
    msg.setDestination(56703U);
    msg.setDestinationEntity(194U);
    msg.value = 0.0246428198226;

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
    msg.setTimeStamp(0.672694070436);
    msg.setSource(52892U);
    msg.setSourceEntity(146U);
    msg.setDestination(59562U);
    msg.setDestinationEntity(59U);
    msg.timeout = 56142U;
    msg.lat = 0.00550510875937;
    msg.lon = 0.564360252523;
    msg.z = 0.525335586218;
    msg.z_units = 152U;
    msg.speed = 0.197916723244;
    msg.speed_units = 83U;
    msg.roll = 0.0935600572933;
    msg.pitch = 0.756472444247;
    msg.yaw = 0.211397560957;
    msg.custom.assign("YIJNHDLKIVW");

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
    msg.setTimeStamp(0.000616077132598);
    msg.setSource(32905U);
    msg.setSourceEntity(82U);
    msg.setDestination(3827U);
    msg.setDestinationEntity(202U);
    msg.timeout = 32508U;
    msg.lat = 0.766085835824;
    msg.lon = 0.76927369046;
    msg.z = 0.186652687474;
    msg.z_units = 104U;
    msg.speed = 0.475333084326;
    msg.speed_units = 73U;
    msg.roll = 0.997027428365;
    msg.pitch = 0.497026647064;
    msg.yaw = 0.255809078893;
    msg.custom.assign("OIFZZGSAMFMVBYPEZSNQJYQMTPYWANYPALLIQYVICOIJOCERAWAPGDAMBFBHHXBSXQAWWSHRGUMPPFXDYISPWEDKQDQJUIPCZETUPLUWNUUWNGKWYRNHZACONGLXLIZBVMCTXREFJTBZQZKTSJKIX");

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
    msg.setTimeStamp(0.264939734571);
    msg.setSource(42314U);
    msg.setSourceEntity(153U);
    msg.setDestination(61969U);
    msg.setDestinationEntity(124U);
    msg.timeout = 43997U;
    msg.lat = 0.87831299348;
    msg.lon = 0.445457700575;
    msg.z = 0.974275685055;
    msg.z_units = 177U;
    msg.speed = 0.362172814146;
    msg.speed_units = 192U;
    msg.roll = 0.143401341481;
    msg.pitch = 0.356517955738;
    msg.yaw = 0.74589630534;
    msg.custom.assign("MXCDFNQVYCRRSQLQFFKPDKDWKOJPPCUAZRATGSFSQJBWRVEHMVXLLXWZBNYQIIXVOAVEVXDTKWWKTYLOWQTYBDUJLAQBYBOYAWLDGMZEAMZONYTMVOGPEQH");

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
    msg.setTimeStamp(0.7593987896);
    msg.setSource(56240U);
    msg.setSourceEntity(23U);
    msg.setDestination(7798U);
    msg.setDestinationEntity(26U);
    msg.timeout = 5416U;
    msg.lat = 0.698664215143;
    msg.lon = 0.358103258919;
    msg.z = 0.853777134432;
    msg.z_units = 150U;
    msg.speed = 0.177123196797;
    msg.speed_units = 45U;
    msg.duration = 17561U;
    msg.radius = 0.580215958502;
    msg.flags = 189U;
    msg.custom.assign("RLYOWIHLJKNPLIQTQUUNIPNJXYUFOFGIMMMAWEAYMJDSCJJPJBXNJQZAACVPRPSKXCMEECBNEQJZRTDAULSVPCVYSXLLXKQGUOMABGLDMNNWHZROXZSCAVVIZSEYPF");

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
    msg.setTimeStamp(0.776088137138);
    msg.setSource(40098U);
    msg.setSourceEntity(192U);
    msg.setDestination(7283U);
    msg.setDestinationEntity(124U);
    msg.timeout = 1746U;
    msg.lat = 0.461873601808;
    msg.lon = 0.266875684521;
    msg.z = 0.625315647195;
    msg.z_units = 219U;
    msg.speed = 0.593280314773;
    msg.speed_units = 161U;
    msg.duration = 7335U;
    msg.radius = 0.0730647680844;
    msg.flags = 219U;
    msg.custom.assign("BKBIWJSCALAQVNHJQBSCMFDHNVEORCAWXZCEOZMAPVYBKFMOMTPWSQZIDTECPTQILJTQPNLWOIOMZCQFPHXETFSTNYLHNJVSWUODREMZYTKZUE");

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
    msg.setTimeStamp(0.830728389598);
    msg.setSource(21242U);
    msg.setSourceEntity(42U);
    msg.setDestination(62074U);
    msg.setDestinationEntity(204U);
    msg.timeout = 60321U;
    msg.lat = 0.869930684572;
    msg.lon = 0.583915578711;
    msg.z = 0.848955935672;
    msg.z_units = 18U;
    msg.speed = 0.581611804789;
    msg.speed_units = 214U;
    msg.duration = 17670U;
    msg.radius = 0.357321243474;
    msg.flags = 45U;
    msg.custom.assign("WMOHRFIOVWTLTXTNZTWHEVPRMPCYBSGQPQRPLGOYFGYDCHRWARAADSMWAWGTKAYQKQMJDZDXVUISGPHLZBEEGENOUTXSVQVIMCVHZNMCKFBIXLUWJKBFYKPZXKXQRUFSFCBLFTTEYEIHADCJOOSTHACKZWAJJMMOKLAOUURCQYNDTCIHDPY");

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
    msg.setTimeStamp(0.173116834063);
    msg.setSource(51880U);
    msg.setSourceEntity(102U);
    msg.setDestination(61731U);
    msg.setDestinationEntity(32U);
    msg.custom.assign("ZIYALZQQNHXVDADSYJKKLYJTIGQWYXHNSWPGUJDWZRTCOPCNCBMDEXAWKYMUJINUMZPXMJVBMVYQOEXBIDWLXUEBPVFXLAVDIPRJKJCHPRJDC");

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
    msg.setTimeStamp(0.766502605346);
    msg.setSource(47506U);
    msg.setSourceEntity(167U);
    msg.setDestination(31616U);
    msg.setDestinationEntity(57U);
    msg.custom.assign("VIMLHHQVMCNNKUPIDUCTGBGTZEDGZYADJEWSGAQBBVWOXPBZHFUTGTAAHDEUJMQRISMFZXXUSO");

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
    msg.setTimeStamp(0.493196804542);
    msg.setSource(58577U);
    msg.setSourceEntity(204U);
    msg.setDestination(31908U);
    msg.setDestinationEntity(249U);
    msg.custom.assign("ZFNGLNMWBBMXRBKQNEXLEVAJYCKKOAZJXAFRBXFYPJECZBACPMVSREOWNWUQXVUTUSQGXOZDDISCFYMAPGVJGPTSGTZDDIQGYKOOVKZHZYLONTLNTUONDKJMNQXURIPLTDVAHDWECGYCMJCIJYOLFYHLTEVOIJZLIAVSWNXEPYLRHSQPQCHKSTRGBUWBOICXFIBIAMFRRQHWKBUQHFWFEUVZPHJDEIUTNXJWUWCKSRDFBSHSMRGPTKHVP");

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
    msg.setTimeStamp(0.0867455487484);
    msg.setSource(59199U);
    msg.setSourceEntity(251U);
    msg.setDestination(3847U);
    msg.setDestinationEntity(112U);
    msg.timeout = 26924U;
    msg.lat = 0.214249107089;
    msg.lon = 0.670040297669;
    msg.z = 0.777727629812;
    msg.z_units = 227U;
    msg.duration = 29319U;
    msg.speed = 0.499165287434;
    msg.speed_units = 43U;
    msg.type = 172U;
    msg.radius = 0.902523832232;
    msg.length = 0.252388700791;
    msg.bearing = 0.274059806873;
    msg.direction = 69U;
    msg.custom.assign("RCMJDWFYMSSVQNRKYSVWIWEIDGSWTDATIMBCNNVRBJMZMKZOGMXSHUBRNSLSAUVEAKQEDGKMIIJJDVHIDBXFJZDPGPWARXQCIUUBGOJKZVTTPQKIPWVRUXXAYBOETNZQVNQKXFRLNFGPXBZPWHZWDGTDHOSSRXCFQJJBMLHKOEHWVKAOHPZIC");

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
    msg.setTimeStamp(0.865296237974);
    msg.setSource(11957U);
    msg.setSourceEntity(217U);
    msg.setDestination(12249U);
    msg.setDestinationEntity(61U);
    msg.timeout = 17536U;
    msg.lat = 0.706493895168;
    msg.lon = 0.910175835171;
    msg.z = 0.695836523756;
    msg.z_units = 203U;
    msg.duration = 30778U;
    msg.speed = 0.271418393391;
    msg.speed_units = 117U;
    msg.type = 99U;
    msg.radius = 0.88686211439;
    msg.length = 0.0312488607108;
    msg.bearing = 0.322923234603;
    msg.direction = 117U;
    msg.custom.assign("XOTODDYGYUNUNDERPZGFDQSJBGBVIHRCGEGAMUQQBCONHKFWPCMMQRDMELBXMTBIHBQFQXWZWELTTZQWEWEIOZAPJUJXUUYDHLNJYVOFSLYIALMOSXDJFMXBZGGERDKCKODNVVSNUHBKYWJFWHHJZEZAUYGBPUSPVHBKCWSWTHOCTJDSCPAUPKRCOLTAOXKIWSNNATRNAVRJRLYFIYMN");

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
    msg.setTimeStamp(0.91155214983);
    msg.setSource(1039U);
    msg.setSourceEntity(66U);
    msg.setDestination(60794U);
    msg.setDestinationEntity(220U);
    msg.timeout = 5191U;
    msg.lat = 0.418167489685;
    msg.lon = 0.735127662808;
    msg.z = 0.518005633307;
    msg.z_units = 16U;
    msg.duration = 48759U;
    msg.speed = 0.525304101321;
    msg.speed_units = 23U;
    msg.type = 218U;
    msg.radius = 0.98876670173;
    msg.length = 0.633949441073;
    msg.bearing = 0.965579387018;
    msg.direction = 239U;
    msg.custom.assign("FEROCYHVIKHYJTRDICIKDSHNAUONNCUFMZLLSQEOKNFOCPKNIXWXEZLMUBELSDNVVWISIUSLNQDEQOJEMEGIGPWLTQGOLXRQXTCHBOJVBGTGCYAJPQITTVBSLWHPCTZHMTDOZBORMXWVJBBRDZZ");

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
    msg.setTimeStamp(0.948325419303);
    msg.setSource(39653U);
    msg.setSourceEntity(133U);
    msg.setDestination(60353U);
    msg.setDestinationEntity(42U);
    msg.duration = 53186U;
    msg.custom.assign("CKFSWIPXSLURGBSXZWOQKNJGSTDZFYDIWCHNALMPVZXRPTTGQRCOKYHQTKHJMTAQZVDYOQNCZKPNLAVLURNEMZFQFGRCNYYMTVSDLYITZBFZEVQIORGMIBIETOUXPSQRNCGEDKERPWEUWNBGBSDNAVOHJDIORLTEMXUFHAPYKAQCMLZGPDXMHEAIEKZSHMLIFSUVDXPJCFPAWWCNWLFXJUJVTBVKF");

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
    msg.setTimeStamp(0.553303604609);
    msg.setSource(53674U);
    msg.setSourceEntity(4U);
    msg.setDestination(33663U);
    msg.setDestinationEntity(78U);
    msg.duration = 43912U;
    msg.custom.assign("OSDQIGHLMBZYSEDBQZNUPKMEESMWUXIDLUYBIJFYXSCUQRYJIBQRDDCZNCYALODBAKRVIYPCQFCAOJEUJTZGLRKPGKKOAJHLLIGVWKRYUTMGGZVXLFRXPLKOFPADFFEWAKMNDTNXE");

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
    msg.setTimeStamp(0.805333087717);
    msg.setSource(15525U);
    msg.setSourceEntity(177U);
    msg.setDestination(57709U);
    msg.setDestinationEntity(146U);
    msg.duration = 4694U;
    msg.custom.assign("YCIKZCTCOSPJFKYPILMGFHWYBKVPWGQMKZPXVJETKFHDLNOBGSMZIGPMJKDNSIALUHLGVFOROSOGETPBFPESYTWZUXZDOXKVFFHUMCEVWIHBCRDCSYTBJCGAHUOEIYAZBXPQNLHXSVEZCATQBWNNKHJQDKLSBXEDZGRDPANXQHVQMBD");

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
    msg.setTimeStamp(0.670122667743);
    msg.setSource(43091U);
    msg.setSourceEntity(243U);
    msg.setDestination(9976U);
    msg.setDestinationEntity(103U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.135532544957;
    tmp_msg_0.z_units = 8U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11237U;
    msg.custom.assign("WDVWAMEVBXMRNPLGGHKNKUXFZLCWXEKEMLYYJJGYVOQXOQSBTHINCFHTTFUUOCVDEAJRYZFTSOBYSWFJPMCIVZZLDEZPIHEBXBQ");

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
    msg.setTimeStamp(0.580819899875);
    msg.setSource(40669U);
    msg.setSourceEntity(87U);
    msg.setDestination(4978U);
    msg.setDestinationEntity(67U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.344334811062;
    msg.control.set(tmp_msg_0);
    msg.duration = 40084U;
    msg.custom.assign("MAZPWAIIBSOPJXRVIMMFHCPHFBPPBVEBGFCDIYKBVPYZ");

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
    msg.setTimeStamp(0.186879173078);
    msg.setSource(40352U);
    msg.setSourceEntity(92U);
    msg.setDestination(48046U);
    msg.setDestinationEntity(182U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3831923228U;
    tmp_msg_0.start_lat = 0.0124945117884;
    tmp_msg_0.start_lon = 0.265592985447;
    tmp_msg_0.start_z = 0.176107130458;
    tmp_msg_0.start_z_units = 199U;
    tmp_msg_0.end_lat = 0.843369910204;
    tmp_msg_0.end_lon = 0.429939157624;
    tmp_msg_0.end_z = 0.0558206792529;
    tmp_msg_0.end_z_units = 207U;
    tmp_msg_0.speed = 0.557513219603;
    tmp_msg_0.speed_units = 236U;
    tmp_msg_0.lradius = 0.0284611423319;
    tmp_msg_0.flags = 187U;
    msg.control.set(tmp_msg_0);
    msg.duration = 46104U;
    msg.custom.assign("AEJIXTCWFJHBLHVYBVRKJHJBQUDUQEMNNBGUISPZMWNBENIIOKCOILEZJAYSVOWQXIZCYCXFHPCRRFZTCSKNQHWIHRJBMVVETWUNEKTFGGMWEOPLTSYNDHGSAQRFGIMKAITODPHKMMLDJQOURGFYPGGMYOFGDNFAVTZYACKAREVSCWWWVQUBALSYBBLUEYSVDPJHVPSUYOFUXDOTLWPJTFZLKDXXMQQKGRPDRZAU");

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
    msg.setTimeStamp(0.716253398598);
    msg.setSource(59988U);
    msg.setSourceEntity(171U);
    msg.setDestination(56733U);
    msg.setDestinationEntity(145U);
    msg.timeout = 48291U;
    msg.lat = 0.690803699452;
    msg.lon = 0.0451775222568;
    msg.z = 0.703791567368;
    msg.z_units = 153U;
    msg.speed = 0.477025899692;
    msg.speed_units = 16U;
    msg.bearing = 0.218160351246;
    msg.cross_angle = 0.899239556394;
    msg.width = 0.291898943721;
    msg.length = 0.865653326841;
    msg.hstep = 0.210330738366;
    msg.coff = 181U;
    msg.alternation = 242U;
    msg.flags = 47U;
    msg.custom.assign("YXRTEWNCJOTFRYQDZAHCMKUHJUPXBSXHFESLAPVKDYNVCMPTVPYMCLZSJOYDNHNWXXLCLZNAQVZZKDEKPXUGEXBQFTF");

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
    msg.setTimeStamp(0.627706992825);
    msg.setSource(24286U);
    msg.setSourceEntity(99U);
    msg.setDestination(19315U);
    msg.setDestinationEntity(170U);
    msg.timeout = 39233U;
    msg.lat = 0.405673889996;
    msg.lon = 0.188867339104;
    msg.z = 0.0094729782092;
    msg.z_units = 158U;
    msg.speed = 0.074919635163;
    msg.speed_units = 26U;
    msg.bearing = 0.686777683838;
    msg.cross_angle = 0.946299659071;
    msg.width = 0.699050329231;
    msg.length = 0.920625076848;
    msg.hstep = 0.792836559559;
    msg.coff = 245U;
    msg.alternation = 210U;
    msg.flags = 137U;
    msg.custom.assign("CRADZFMNOWKCCVQMHHMKFEEIERCVRCFLAGLPGUOAPHPKSONWAVARXYDKOXXJAIFBNWOJLJNXSYYLHWWGFBWYOILINZQYTGGIFUXVXTUGVNSAUJTCNOQRPHLHSKEOBHUYYMUCBLAWSUWZDBAQBJKKPTVOJBCSDXNVPJMPYCZJFXFUEREPSSHQEHLTSBFRMUVRGTIQQGECBMVWTUXTZIZINQJKSZXDILHMZFYRARBONJDGDDYPMLEPGDTTZEQV");

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
    msg.setTimeStamp(0.294236625181);
    msg.setSource(39220U);
    msg.setSourceEntity(212U);
    msg.setDestination(26525U);
    msg.setDestinationEntity(251U);
    msg.timeout = 44548U;
    msg.lat = 0.113261662947;
    msg.lon = 0.188622463508;
    msg.z = 0.443591032238;
    msg.z_units = 162U;
    msg.speed = 0.0212325681421;
    msg.speed_units = 190U;
    msg.bearing = 0.734447103155;
    msg.cross_angle = 0.675455345054;
    msg.width = 0.732435923105;
    msg.length = 0.894680052549;
    msg.hstep = 0.768553729914;
    msg.coff = 97U;
    msg.alternation = 21U;
    msg.flags = 5U;
    msg.custom.assign("SNPPKTMRVPKINGNTCLWVYIFXIYHAJLVFWFLHMRQYXFJHTZIFALKOJMSPCSZGSWNMQLFMYRSNVPSAOENTEACBUQIDWXQFURUJIBTZXWEEDYQONNDEFLQJWEHILUQICBWKABVZVXDBDADHTDBZSUJOVADBLOGCZNGRQUOKERVCUUGRTEOVZRPHMBFMTFTACMGJRSRNJKOYMGZYPQSAGOKQIGMHPXYXETXPDBKOPLUBXYDX");

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
    msg.setTimeStamp(0.0994036641324);
    msg.setSource(62558U);
    msg.setSourceEntity(94U);
    msg.setDestination(15453U);
    msg.setDestinationEntity(181U);
    msg.timeout = 35768U;
    msg.lat = 0.627863528752;
    msg.lon = 0.142346981959;
    msg.z = 0.606373910308;
    msg.z_units = 99U;
    msg.speed = 0.938947522244;
    msg.speed_units = 47U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.880345138234;
    tmp_msg_0.y = 0.399500857037;
    tmp_msg_0.z = 0.947346837331;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LUEJYHIOFGAWSUVYZVYTMRZPJOHJRLAYQHDAESRIINYVQOMGMCFZYXOLLAXKWGDFKDHVRHHSXJBCTTMOPOLPOWRQSDGVEQXTCXWKNMYQIKJMOEWMGQBEJNQXKLPATHHNSPFQCBSNKPUSGKOCFYBDRULZXGDTTIFBFNUZNRIFCXKVDJIDWRKLUEENHZGMDICZWEDJAVJQVNLSZNLPTRXTPSC");

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
    msg.setTimeStamp(0.845036704384);
    msg.setSource(10309U);
    msg.setSourceEntity(151U);
    msg.setDestination(34098U);
    msg.setDestinationEntity(165U);
    msg.timeout = 26355U;
    msg.lat = 0.538043030639;
    msg.lon = 0.862916801501;
    msg.z = 0.0346562603434;
    msg.z_units = 167U;
    msg.speed = 0.0567927043522;
    msg.speed_units = 220U;
    msg.custom.assign("WICNQBSHGZBUTENXAHXRZSQACZKMMQTYYHJEBHXSBJBGIURWURWMCMNWVAMRPPYWLVLSIFDMOCWOVKDHIZFLSUTOVDDRLUEGNDZVBQXGUVHVMNZTHFRJKAJZUMYFSJWNCFQDNUGQJKYLHOYXEOJFROSPCPLDCZVAURIOTXKAQNHGKWEFLQSGUBRJKBAHAMFFXTTYPOEXJNIIITABLT");

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
    msg.setTimeStamp(0.59729166557);
    msg.setSource(48277U);
    msg.setSourceEntity(41U);
    msg.setDestination(25591U);
    msg.setDestinationEntity(79U);
    msg.timeout = 64875U;
    msg.lat = 0.714539819197;
    msg.lon = 0.375290668412;
    msg.z = 0.0764326314695;
    msg.z_units = 189U;
    msg.speed = 0.0554566674184;
    msg.speed_units = 105U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.886869680022;
    tmp_msg_0.y = 0.771696142629;
    tmp_msg_0.z = 0.382869401094;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LLZTDPDYPITCNAZRYCKTCLZKIXKFFBUNXOIXOENUDDWDKSKCATQMALTFHRRSUROXYGHGGMFRVIUTHPSZIEVMLPNJISAYSCCRZLOHEMQTGGHIQMQDYEKCRQQUVPWYPFFMDSUWBAXSUMJOAZGOIAPDIFRJUJWBYBASQSBZXNCHNMEHQEWLFB");

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
    msg.setTimeStamp(0.6030268053);
    msg.setSource(54228U);
    msg.setSourceEntity(1U);
    msg.setDestination(59095U);
    msg.setDestinationEntity(124U);
    msg.x = 0.451540358936;
    msg.y = 0.0932862699537;
    msg.z = 0.752000638194;

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
    msg.setTimeStamp(0.0998358141159);
    msg.setSource(40802U);
    msg.setSourceEntity(5U);
    msg.setDestination(31995U);
    msg.setDestinationEntity(147U);
    msg.x = 0.250657861194;
    msg.y = 0.479793508986;
    msg.z = 0.389820708474;

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
    msg.setTimeStamp(0.783531902745);
    msg.setSource(13547U);
    msg.setSourceEntity(186U);
    msg.setDestination(22710U);
    msg.setDestinationEntity(121U);
    msg.x = 0.742596852118;
    msg.y = 0.852438582645;
    msg.z = 0.281539761563;

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
    msg.setTimeStamp(0.759075485942);
    msg.setSource(22743U);
    msg.setSourceEntity(154U);
    msg.setDestination(40422U);
    msg.setDestinationEntity(221U);
    msg.timeout = 8269U;
    msg.lat = 0.0973734255126;
    msg.lon = 0.742242425105;
    msg.z = 0.972274204398;
    msg.z_units = 4U;
    msg.amplitude = 0.52198816693;
    msg.pitch = 0.89280175228;
    msg.speed = 0.514387920805;
    msg.speed_units = 249U;
    msg.custom.assign("FAWTFOWWQUIBVZVKXWTMSMTXAAMHPHZFOQEIFNIE");

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
    msg.setTimeStamp(0.240606031831);
    msg.setSource(36050U);
    msg.setSourceEntity(204U);
    msg.setDestination(45608U);
    msg.setDestinationEntity(210U);
    msg.timeout = 58240U;
    msg.lat = 0.300191106136;
    msg.lon = 0.554952809204;
    msg.z = 0.0740207358626;
    msg.z_units = 58U;
    msg.amplitude = 0.97820511743;
    msg.pitch = 0.990590211284;
    msg.speed = 0.387765413914;
    msg.speed_units = 140U;
    msg.custom.assign("CMWUQTUXOXJNRHRNYTNQILKRXOPDQZJAZLBADWUKDSDNNBQSBXDAXHSFJXKCPIUYOFWSPDEQINPUIGWNHBALKCEMHHHKTCZBOPNVHM");

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
    msg.setTimeStamp(0.529419336543);
    msg.setSource(11057U);
    msg.setSourceEntity(251U);
    msg.setDestination(59999U);
    msg.setDestinationEntity(197U);
    msg.timeout = 28895U;
    msg.lat = 0.525180997833;
    msg.lon = 0.981584551079;
    msg.z = 0.817298103776;
    msg.z_units = 96U;
    msg.amplitude = 0.654470949566;
    msg.pitch = 0.268321847741;
    msg.speed = 0.725615544155;
    msg.speed_units = 238U;
    msg.custom.assign("AYXCFDRDKCFWA");

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
    msg.setTimeStamp(0.396618016388);
    msg.setSource(43480U);
    msg.setSourceEntity(82U);
    msg.setDestination(7729U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.55380297522);
    msg.setSource(38363U);
    msg.setSourceEntity(123U);
    msg.setDestination(31730U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.984213485069);
    msg.setSource(59854U);
    msg.setSourceEntity(114U);
    msg.setDestination(23278U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.343772979005);
    msg.setSource(64851U);
    msg.setSourceEntity(250U);
    msg.setDestination(32654U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.0959272012329;
    msg.lon = 0.288501461803;
    msg.z = 0.27780545174;
    msg.z_units = 75U;
    msg.radius = 0.135857106135;
    msg.duration = 52202U;
    msg.speed = 0.592152275785;
    msg.speed_units = 139U;
    msg.custom.assign("SWOJIZYGBLQMPZFSHBXZPBDRPKWRPELFYNWUPAAOHAVFKEHWSYUAVFAJQHZTRODCPVBEYNVECDLRFBIHUQMYGSDZRICZWPNE");

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
    msg.setTimeStamp(0.794862835961);
    msg.setSource(36761U);
    msg.setSourceEntity(214U);
    msg.setDestination(10024U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.363760451086;
    msg.lon = 0.581651709901;
    msg.z = 0.0220730610381;
    msg.z_units = 229U;
    msg.radius = 0.501564062645;
    msg.duration = 16182U;
    msg.speed = 0.618636645592;
    msg.speed_units = 49U;
    msg.custom.assign("JFUGATRWWBQQQGHOXYWEBCBCFHXTJNJDZTVCQHYMDQJOKMEXELHOLCCKODHATJLNKSJDPSYTMPUAXHSRTWZLWGGUZBYVOVPVBEXTVXFPNMELZKDKPEYJUOVEOYSWURIRZRANIPLMGDOKERBIFXKFAXJMCPLGMQEBCXUBQWCFAUNSDINKMDALUUMKMNIVZZIYPJWD");

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
    msg.setTimeStamp(0.738257457707);
    msg.setSource(3553U);
    msg.setSourceEntity(79U);
    msg.setDestination(17919U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.0423202605599;
    msg.lon = 0.76074673947;
    msg.z = 0.480250468098;
    msg.z_units = 121U;
    msg.radius = 0.316777496331;
    msg.duration = 56977U;
    msg.speed = 0.775469585762;
    msg.speed_units = 10U;
    msg.custom.assign("TSOOXDWNNKBKNCNBQDXKHYDBYFTPZPBNSKTOYJJRKKVSEEUGMVULEWZADJWBRCUZDFQCBICZVAPYOTVRUBUNUNQHEHBFGMPCTIQHLGOVAGQOOCZRWZLFIZXOPVWOIHETFMQRENWOMIECHFJ");

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
    msg.setTimeStamp(0.308155359983);
    msg.setSource(804U);
    msg.setSourceEntity(45U);
    msg.setDestination(2932U);
    msg.setDestinationEntity(53U);
    msg.timeout = 61408U;
    msg.flags = 173U;
    msg.lat = 0.1704582588;
    msg.lon = 0.444497019672;
    msg.start_z = 0.922772951436;
    msg.start_z_units = 226U;
    msg.end_z = 0.939594846428;
    msg.end_z_units = 195U;
    msg.radius = 0.725913443555;
    msg.speed = 0.45454447562;
    msg.speed_units = 236U;
    msg.custom.assign("XRGWRJSFNTNESUKYUZHJALBSYJVOJPZPYGMIINVIQDPEWCTGMSOYYAKVXXBSYEVTUAFGHEQMDCVWRIOTRIEFPGIWPQLJMLCKHDCDKLJNQURJQEFLZGRZKEIKKAMPUZWACBDSNEVCMHOCKGGUKLLARFQPBVHODVWJNFBWHZOJOZSIHWEPTWCNXZNDZA");

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
    msg.setTimeStamp(0.67134843751);
    msg.setSource(62517U);
    msg.setSourceEntity(154U);
    msg.setDestination(1061U);
    msg.setDestinationEntity(130U);
    msg.timeout = 57238U;
    msg.flags = 37U;
    msg.lat = 0.336802402798;
    msg.lon = 0.392588188563;
    msg.start_z = 0.438999718012;
    msg.start_z_units = 42U;
    msg.end_z = 0.470767053532;
    msg.end_z_units = 172U;
    msg.radius = 0.597287201749;
    msg.speed = 0.301997450473;
    msg.speed_units = 100U;
    msg.custom.assign("JUILVREWLFFCNAAJBULTYFYAUPHHISFKWTNCNMMPUEHFHOZWOXQOSJCZNCMBVPNRKTWRLEJYQVGJLNGHZACLFWRKRGGCJQKYIOWFKZIWSZQYYDVOWRRITTAXIHQNSUDUZXCUSIBIMXLDNPYYSVBJEDCCVXYHRGMVKCPLAMFXSKRMTYMUMHLDSNIBGGVPEASTANUKQIVBQOTBXBEXVWZOQZZDDPOBRDMOTWEUQEPOGLJDDPABKXHXPJFEEKFA");

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
    msg.setTimeStamp(0.702051692327);
    msg.setSource(56023U);
    msg.setSourceEntity(146U);
    msg.setDestination(9698U);
    msg.setDestinationEntity(159U);
    msg.timeout = 46922U;
    msg.flags = 124U;
    msg.lat = 0.698661827858;
    msg.lon = 0.121640837394;
    msg.start_z = 0.529114318399;
    msg.start_z_units = 85U;
    msg.end_z = 0.664779322704;
    msg.end_z_units = 107U;
    msg.radius = 0.832838547279;
    msg.speed = 0.0688189082814;
    msg.speed_units = 233U;
    msg.custom.assign("CWXPXCHQYVIJWTLGRSTNBBQHAPWOEFYEHOMXAB");

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
    msg.setTimeStamp(0.227739137028);
    msg.setSource(51703U);
    msg.setSourceEntity(48U);
    msg.setDestination(55470U);
    msg.setDestinationEntity(191U);
    msg.timeout = 58889U;
    msg.lat = 0.834212721463;
    msg.lon = 0.510061122056;
    msg.z = 0.445334178309;
    msg.z_units = 195U;
    msg.speed = 0.523839944687;
    msg.speed_units = 153U;
    msg.custom.assign("NCRGVBNGJQOJQWHJTHDKGTMGFGDLCIROBFVZUIXLNOMLDNEKEQYQFSFDUIKKXAYZXYUOQAYHIWTZNVLYHSGERNSUGTBLHOIYXSKKZMMTWZQEBMEJQNAHFWCRBKPNODPAEWVOJPTXOIJGJLKUTXZBPBCWLQCMEIYBVMWKPMSHU");

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
    msg.setTimeStamp(0.516611202735);
    msg.setSource(40937U);
    msg.setSourceEntity(183U);
    msg.setDestination(64105U);
    msg.setDestinationEntity(159U);
    msg.timeout = 16564U;
    msg.lat = 0.519734514084;
    msg.lon = 0.623235231295;
    msg.z = 0.915885807808;
    msg.z_units = 23U;
    msg.speed = 0.795023529286;
    msg.speed_units = 192U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.710288826587;
    tmp_msg_0.y = 0.906712457641;
    tmp_msg_0.z = 0.653171579439;
    tmp_msg_0.t = 0.929910441225;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MFSLRXGRAMFLBTRLKNFYTPESOQLSUUUKHSJVAYZUABKLURJWRBWSPHIKKLLIXWQFEOVLOINHYLCMDREDSMTBZWQFVZYRPEOBQYFTIVGVSJCZOVSTXQGXHDQMDEVAJCJNBGGEBUDDWCINCHCMWHBJHEKMMAAWPZTETOIBMZKSNQPDPTQWPRCEFGHROJYGNLNZPYXSCOANPXGZXFDXRNXKYIUZWQFYTNHIZOCDDUKIBGUEYIOFAATJJWKUMV");

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
    msg.setTimeStamp(0.887830834341);
    msg.setSource(50904U);
    msg.setSourceEntity(141U);
    msg.setDestination(33187U);
    msg.setDestinationEntity(102U);
    msg.timeout = 45811U;
    msg.lat = 0.834437762149;
    msg.lon = 0.932723698487;
    msg.z = 0.729184201822;
    msg.z_units = 113U;
    msg.speed = 0.957547831471;
    msg.speed_units = 71U;
    msg.custom.assign("AQKTZYBOPGHSHVTADHRUNYNCIQIMNIKRTQHWCZHCDZZNCZJDWZTSARPWZKDGVGQDHOYXXFGIPGASDFBLDETRRLLJDGRBAZNMVPUXOCEXIJAQUITNZKUVNTTQERGMEYJFXJJNHMKPQTDSJEOZRGCBWXFMOJ");

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
    msg.setTimeStamp(0.520177126461);
    msg.setSource(23528U);
    msg.setSourceEntity(166U);
    msg.setDestination(13473U);
    msg.setDestinationEntity(209U);
    msg.x = 0.533286290832;
    msg.y = 0.732578852216;
    msg.z = 0.280409985946;
    msg.t = 0.495215719368;

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
    msg.setTimeStamp(0.0963327351612);
    msg.setSource(23011U);
    msg.setSourceEntity(244U);
    msg.setDestination(57003U);
    msg.setDestinationEntity(88U);
    msg.x = 0.545368508763;
    msg.y = 0.439533460044;
    msg.z = 0.153322108974;
    msg.t = 0.964433878604;

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
    msg.setTimeStamp(0.657952882791);
    msg.setSource(18157U);
    msg.setSourceEntity(249U);
    msg.setDestination(55826U);
    msg.setDestinationEntity(123U);
    msg.x = 0.0349044125118;
    msg.y = 0.678900411277;
    msg.z = 0.178885744436;
    msg.t = 0.459146859889;

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
    msg.setTimeStamp(0.086662177607);
    msg.setSource(46807U);
    msg.setSourceEntity(57U);
    msg.setDestination(55126U);
    msg.setDestinationEntity(28U);
    msg.timeout = 55966U;
    msg.name.assign("PTVNLNEDRUCPIPKXJHWGJHVWCGEIJMB");
    msg.custom.assign("LFQVNSXZCLOJFXLZBTQZYFMDGSOXM");

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
    msg.setTimeStamp(0.942873206973);
    msg.setSource(48100U);
    msg.setSourceEntity(94U);
    msg.setDestination(43970U);
    msg.setDestinationEntity(59U);
    msg.timeout = 45150U;
    msg.name.assign("MERVHHWSMTRPXHFONENPFVFSNQNFJXKYXKDUHMKWUTUFZRSMBRKEEYOEIEZIMVPGVDRIULHJUETYTIOLSQFMKZTXXJJCEJQLFIVOAYBUEYSCUACRXPWZHCIVZDLTLQJXHQODNVIYLICDNWMIUJBAQAGBSAGGFBNCYGKSLVMDAZTPADCNBBGZRALFDMDPPCBWTQGCWOJTRJX");
    msg.custom.assign("BXVZPCHDCQYEYAFJUOGPQFXUMQSMNDUAPNWZUSWQPOPYYBAQLKPFEQBXWYMXVIERLKKMIJJSGGLAIQRLOUJNINBAJTLZBXCETBDELRYSPIFMTKGFDPTGKRBDTHQTRXVOQZDPSSHHNJZBMRMLFDKSWAYHAVNOXINCCMUA");

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
    msg.setTimeStamp(0.546962418855);
    msg.setSource(42711U);
    msg.setSourceEntity(218U);
    msg.setDestination(11726U);
    msg.setDestinationEntity(193U);
    msg.timeout = 21981U;
    msg.name.assign("SENKTDOYBSPMKTKNUEZRCMRFONHXOGTKWGAABLTYQXWJUPJJYLMDDYXCSLHQLHHSVYNBURMKICWCSKAJLJIEBERSCFBIVRQWHAQGVLEDPNODIRZYPGVYHGXVZTFNQYOUULFMMZPDUFFZZVXWDXDTOWDSVFEMKOQFJIMCHPUNBZJRDAFPWVKCGYBBIIGPAGBOT");
    msg.custom.assign("KMENGAUDZVVHTPVFGYEICDPMGYMJXCAGKFOISFTPRUSBUYMMGNZXYZVLAEGYLHDVWRSCNJNZVQGIKGZKRXPLROJMNHUBPWXWFTDMKGJIDJZKALSSRHJWWEYLQDECOXFKCKBIWHUQVOIETFPVLCBZATKMVYEOQTOSPUXAKONZJFBVRQFNGRCSBCNWE");

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
    msg.setTimeStamp(0.430442089505);
    msg.setSource(57272U);
    msg.setSourceEntity(218U);
    msg.setDestination(2529U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.950921858849;
    msg.lon = 0.793323707083;
    msg.z = 0.815444203529;
    msg.z_units = 117U;
    msg.speed = 0.409349124366;
    msg.speed_units = 9U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47169U;
    tmp_msg_0.off_x = 0.00906606539864;
    tmp_msg_0.off_y = 0.9898512109;
    tmp_msg_0.off_z = 0.100064996071;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.263338194189;
    msg.custom.assign("RVBRMSKRKREZDSLEBBSRDHPAYLZUVNHBMSTZCCNMRJIANCGOU");

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
    msg.setTimeStamp(0.573818821666);
    msg.setSource(1426U);
    msg.setSourceEntity(203U);
    msg.setDestination(23414U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.703804143294;
    msg.lon = 0.327578995325;
    msg.z = 0.760957849824;
    msg.z_units = 34U;
    msg.speed = 0.763496075121;
    msg.speed_units = 11U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.420029158603;
    tmp_msg_0.y = 0.129228887934;
    tmp_msg_0.z = 0.961301216151;
    tmp_msg_0.t = 0.281966532027;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 25368U;
    tmp_msg_1.off_x = 0.287853998759;
    tmp_msg_1.off_y = 0.765574127988;
    tmp_msg_1.off_z = 0.107683530719;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.366355263865;
    msg.custom.assign("EHADRUBZHKEBJKHMENOVOBACAZPOSCWPXUJZKTDIMJLCGFQMAIBPUXRJVLFQTUYFPGDDXLVKCFBKXWVWEFSGACNSGENPZRDYSAIMXOWWTXLHWRFNXRDKZNOFBL");

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
    msg.setTimeStamp(0.500959057683);
    msg.setSource(28107U);
    msg.setSourceEntity(37U);
    msg.setDestination(21062U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.838164210461;
    msg.lon = 0.830500078134;
    msg.z = 0.803312365293;
    msg.z_units = 29U;
    msg.speed = 0.233087886709;
    msg.speed_units = 84U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.676525912272;
    tmp_msg_0.y = 0.534348368021;
    tmp_msg_0.z = 0.67827870237;
    tmp_msg_0.t = 0.594841427561;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.852017162554;
    msg.custom.assign("NJPPQFCIUVFHRBUZFVOQHOPCEYWGSBHCZPXXGNTBYMMZKAQSJSJLKXQRTLOZIYPWIALFHDFLRVIZUCLHUETJZADPGRMBMLZGUKODPLCIQCJGZDIEAFGCCNTNTMDEBLAWY");

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
    msg.setTimeStamp(0.29752864488);
    msg.setSource(2351U);
    msg.setSourceEntity(82U);
    msg.setDestination(23077U);
    msg.setDestinationEntity(152U);
    msg.vid = 26547U;
    msg.off_x = 0.81691188715;
    msg.off_y = 0.57939108977;
    msg.off_z = 0.0777359907583;

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
    msg.setTimeStamp(0.500075167463);
    msg.setSource(28675U);
    msg.setSourceEntity(170U);
    msg.setDestination(55119U);
    msg.setDestinationEntity(248U);
    msg.vid = 58542U;
    msg.off_x = 0.10110225385;
    msg.off_y = 0.955027410795;
    msg.off_z = 0.354028040586;

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
    msg.setTimeStamp(0.545692087406);
    msg.setSource(6652U);
    msg.setSourceEntity(143U);
    msg.setDestination(11881U);
    msg.setDestinationEntity(215U);
    msg.vid = 48485U;
    msg.off_x = 0.889827669814;
    msg.off_y = 0.65015047104;
    msg.off_z = 0.82253858635;

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
    msg.setTimeStamp(0.685190042492);
    msg.setSource(52922U);
    msg.setSourceEntity(235U);
    msg.setDestination(61139U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.207445608665);
    msg.setSource(16577U);
    msg.setSourceEntity(112U);
    msg.setDestination(27855U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.637090428634);
    msg.setSource(43875U);
    msg.setSourceEntity(197U);
    msg.setDestination(42521U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.581627450754);
    msg.setSource(63689U);
    msg.setSourceEntity(6U);
    msg.setDestination(40361U);
    msg.setDestinationEntity(213U);
    msg.mid = 17151U;

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
    msg.setTimeStamp(0.414608615292);
    msg.setSource(25882U);
    msg.setSourceEntity(181U);
    msg.setDestination(58892U);
    msg.setDestinationEntity(254U);
    msg.mid = 5156U;

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
    msg.setTimeStamp(0.63884787675);
    msg.setSource(35253U);
    msg.setSourceEntity(166U);
    msg.setDestination(11251U);
    msg.setDestinationEntity(36U);
    msg.mid = 52338U;

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
    msg.setTimeStamp(0.0970716768966);
    msg.setSource(21419U);
    msg.setSourceEntity(160U);
    msg.setDestination(43642U);
    msg.setDestinationEntity(104U);
    msg.state = 221U;
    msg.eta = 52301U;
    msg.info.assign("OLZKQZBBIFAYQYHSZDOLTZNVRIKPULNIJPFNZXMROYUVDU");

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
    msg.setTimeStamp(0.975277421074);
    msg.setSource(50144U);
    msg.setSourceEntity(9U);
    msg.setDestination(42159U);
    msg.setDestinationEntity(101U);
    msg.state = 207U;
    msg.eta = 25893U;
    msg.info.assign("TAKAVVJTBVRPFJKGOHGKCGOXKNEAJCQQCENXYZSLUHLMTGWJFNZSUQCBLCQSUOOPIVBOEYXQDKTBPWHSTQUNDQBRSYSNLBARITAYAYIXAYFCKXWDOYNUSQFZLDWETXZVEIYVHUODURRJZNSQVTMPUJILIIGOQBFJMNLFZPJFGMDYOEARHHAHWBPKKFPUZLTOUEWIJPRHVIMPERXMFXJNELCIVZESZGBCW");

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
    msg.setTimeStamp(0.758465914159);
    msg.setSource(49396U);
    msg.setSourceEntity(250U);
    msg.setDestination(11516U);
    msg.setDestinationEntity(64U);
    msg.state = 108U;
    msg.eta = 26044U;
    msg.info.assign("TMMTKPSUOQYQKAHKKUILLPUWTMCKCHPZBAEHNQVIWEUDCECTXJLNOYVLZIMOIIKLKZSADFRWWGCEUSFITVNBOHKFXNXWSXKYFGJYWNMRREFVRGLXJROBYBGIRPIJHLVUQAWXPYTMSFQ");

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
    msg.setTimeStamp(0.99243342016);
    msg.setSource(43150U);
    msg.setSourceEntity(210U);
    msg.setDestination(16848U);
    msg.setDestinationEntity(12U);
    msg.system = 53048U;
    msg.duration = 63096U;
    msg.speed = 0.36880263514;
    msg.speed_units = 20U;
    msg.x = 0.0564887859105;
    msg.y = 0.144515511502;
    msg.z = 0.914755487541;
    msg.z_units = 247U;

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
    msg.setTimeStamp(0.453704196265);
    msg.setSource(32276U);
    msg.setSourceEntity(213U);
    msg.setDestination(36425U);
    msg.setDestinationEntity(92U);
    msg.system = 12850U;
    msg.duration = 41450U;
    msg.speed = 0.512755736113;
    msg.speed_units = 240U;
    msg.x = 0.64869735543;
    msg.y = 0.849489009217;
    msg.z = 0.688297040331;
    msg.z_units = 11U;

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
    msg.setTimeStamp(0.46407261399);
    msg.setSource(12923U);
    msg.setSourceEntity(149U);
    msg.setDestination(9470U);
    msg.setDestinationEntity(184U);
    msg.system = 19089U;
    msg.duration = 54874U;
    msg.speed = 0.00207271637516;
    msg.speed_units = 130U;
    msg.x = 0.674023445043;
    msg.y = 0.0285683368824;
    msg.z = 0.478530757794;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.00186520946898);
    msg.setSource(47866U);
    msg.setSourceEntity(139U);
    msg.setDestination(23511U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.327571062058;
    msg.lon = 0.733873563978;
    msg.speed = 0.460539107569;
    msg.speed_units = 25U;
    msg.duration = 54675U;
    msg.sys_a = 19406U;
    msg.sys_b = 24403U;
    msg.move_threshold = 0.849113501021;

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
    msg.setTimeStamp(0.458956663084);
    msg.setSource(12269U);
    msg.setSourceEntity(77U);
    msg.setDestination(2667U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.194083635134;
    msg.lon = 0.418976624146;
    msg.speed = 0.056142487224;
    msg.speed_units = 210U;
    msg.duration = 43752U;
    msg.sys_a = 14347U;
    msg.sys_b = 45158U;
    msg.move_threshold = 0.239405373403;

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
    msg.setTimeStamp(0.507288310726);
    msg.setSource(49102U);
    msg.setSourceEntity(231U);
    msg.setDestination(28609U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.874346627736;
    msg.lon = 0.0771198711721;
    msg.speed = 0.364919239651;
    msg.speed_units = 209U;
    msg.duration = 56959U;
    msg.sys_a = 28531U;
    msg.sys_b = 4798U;
    msg.move_threshold = 0.725650592332;

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
    msg.setTimeStamp(0.811287346119);
    msg.setSource(39432U);
    msg.setSourceEntity(211U);
    msg.setDestination(12829U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.0699496334188;
    msg.lon = 0.534736996721;
    msg.z = 0.140404578048;
    msg.z_units = 58U;
    msg.speed = 0.723163992645;
    msg.speed_units = 20U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.449014438913;
    tmp_msg_0.lon = 0.384784589957;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("APNEEONLBYHTBKOCRFSIVHEHBDZCYSGGZHEASUPFWUMSXYAEUTOLFTREICF");

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
    msg.setTimeStamp(0.449667520321);
    msg.setSource(46010U);
    msg.setSourceEntity(58U);
    msg.setDestination(41850U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.143336981254;
    msg.lon = 0.155558535235;
    msg.z = 0.983210708278;
    msg.z_units = 15U;
    msg.speed = 0.424696244902;
    msg.speed_units = 19U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0644591347649;
    tmp_msg_0.lon = 0.490855931843;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EVUBAUQMANGBWCPDXOPZZBVTQQJPYNBXXDMEHBMRIESLSFDFAWYYMYLYZBUJWIAHCLVVWEPUAFSBZFLIGDIPTBQTKTNZGWHFGCQPXSNSHMCVXGOBRGRVIHLIJTSJQFLHLJDWJWQZVGOYARAQBTOQXKKZCEPEGEIQHVKRGRODKRTJCNXFUWROXEILOJUMMNCZEYNHMJYORCRXVSKUKMAPHLUSLD");

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
    msg.setTimeStamp(0.266656925938);
    msg.setSource(23319U);
    msg.setSourceEntity(242U);
    msg.setDestination(50018U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.130675286541;
    msg.lon = 0.255259678171;
    msg.z = 0.358588762067;
    msg.z_units = 131U;
    msg.speed = 0.248753001802;
    msg.speed_units = 56U;
    msg.custom.assign("FXDNOEYEVPSWJLCFYXLBBGIXCEGCDFXCRBGJIKQMUCUOJXMAUANZIVNHBGUEZQWQTYEJVZKLVOILSMUYSPMTPGCDESNIXEFNITTQJLKFPGEAUSOKLVWQRQPBVORPYSROGRRMUPNSQRCWQVHGUXMWZOAD");

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
    msg.setTimeStamp(0.750879626519);
    msg.setSource(7225U);
    msg.setSourceEntity(83U);
    msg.setDestination(43134U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.978017026131;
    msg.lon = 0.753698031062;

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
    msg.setTimeStamp(0.106093116125);
    msg.setSource(63218U);
    msg.setSourceEntity(97U);
    msg.setDestination(61559U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.306738039375;
    msg.lon = 0.273634168278;

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
    msg.setTimeStamp(0.763624257081);
    msg.setSource(15680U);
    msg.setSourceEntity(163U);
    msg.setDestination(40201U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.821894169058;
    msg.lon = 0.608667315492;

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
    msg.setTimeStamp(0.269958606246);
    msg.setSource(15824U);
    msg.setSourceEntity(54U);
    msg.setDestination(63924U);
    msg.setDestinationEntity(138U);
    msg.timeout = 65253U;
    msg.lat = 0.622571919392;
    msg.lon = 0.92599997096;
    msg.z = 0.818672646555;
    msg.z_units = 83U;
    msg.pitch = 0.697305291776;
    msg.amplitude = 0.342008596503;
    msg.duration = 29420U;
    msg.speed = 0.99055665661;
    msg.speed_units = 224U;
    msg.radius = 0.11692739537;
    msg.direction = 12U;
    msg.custom.assign("VWNFMUEYDTGKGYVDPZPAINDHSWWUTWQHMSLXTYVNHFJQGRTO");

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
    msg.setTimeStamp(0.99168359019);
    msg.setSource(61876U);
    msg.setSourceEntity(249U);
    msg.setDestination(11752U);
    msg.setDestinationEntity(100U);
    msg.timeout = 49762U;
    msg.lat = 0.175182949926;
    msg.lon = 0.179762184854;
    msg.z = 0.970278268907;
    msg.z_units = 17U;
    msg.pitch = 0.827694620262;
    msg.amplitude = 0.702895734239;
    msg.duration = 46599U;
    msg.speed = 0.866062390039;
    msg.speed_units = 157U;
    msg.radius = 0.131449893104;
    msg.direction = 230U;
    msg.custom.assign("QQUWEWDODYUNWNWZSFCYVYGYOVXCOPLOESXXEWGAKILNBDKYSBAGGVQPLHXJABYRMEKFGMYLDEMARUIGHQZRIFPRPRCHIEIVRQBUSDFTVQHMDMKBJMXUEWP");

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
    msg.setTimeStamp(0.593759229775);
    msg.setSource(8105U);
    msg.setSourceEntity(45U);
    msg.setDestination(34382U);
    msg.setDestinationEntity(119U);
    msg.timeout = 34045U;
    msg.lat = 0.883120495685;
    msg.lon = 0.572293380083;
    msg.z = 0.633401381417;
    msg.z_units = 1U;
    msg.pitch = 0.545448233425;
    msg.amplitude = 0.896061435527;
    msg.duration = 33463U;
    msg.speed = 0.928238040593;
    msg.speed_units = 246U;
    msg.radius = 0.0533188204526;
    msg.direction = 26U;
    msg.custom.assign("OUYZOQFPNBHMBEUIUEMHJXSMJFJKBWS");

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
    msg.setTimeStamp(0.374991073733);
    msg.setSource(14642U);
    msg.setSourceEntity(1U);
    msg.setDestination(27586U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("XQRMVBPRMOZITLYWNQQIRWDKBTXHQZRHWRVSXFXAOZLDNTUTHJPUKSIWERTIZTHCPGESZVGAZFLDMDCOTBSUJPCSINCNKRYSGNIGBKQCOWCNNFETGVIIGUHSKYWJMYTK");
    msg.reference_frame = 75U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64657U;
    tmp_msg_0.off_x = 0.940059083239;
    tmp_msg_0.off_y = 0.326356688339;
    tmp_msg_0.off_z = 0.303543047585;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CKCTHKRTYOWNWUNTFPVBGGFCOJEULVIQADIKVSAPGTFJSQHOSSEKIARQSUNAEGEJWLORHJTIVXIIQTYCBUXSCEDPJXTGBNNWIUOUFOBKHSJMFTYELYIZNGFWLMRBVDVVOPNPVZZMRZLRXZPNUNMZLKQEQLFNAXEOPXPHJ");

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
    msg.setTimeStamp(0.109284250227);
    msg.setSource(59624U);
    msg.setSourceEntity(219U);
    msg.setDestination(8299U);
    msg.setDestinationEntity(150U);
    msg.formation_name.assign("JYVKHTDXIEZTMLUDHUMEAWLRKUTAIBPVTVJWMKGCGDWQCQUYEVFHYOGGFVFLRDUTQZXKZLLWYRLRCICPSUTOZZOITNJLHYSXYHOTDXGPRBHHAEYTQICEEBHOANNSRIBAYCPXEHOOROOSUCPJCBLDPFJNKUKDBCQVSHAV");
    msg.reference_frame = 140U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5319U;
    tmp_msg_0.off_x = 0.372167294997;
    tmp_msg_0.off_y = 0.876080181193;
    tmp_msg_0.off_z = 0.0674187752387;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RDLXAFONGJKJNGTNZCWYGVGPCMPTPFTZLJZERWTOMFPXXATOEBYSEUQSVXULEHNAKHHIQAXAPHWYBMPEUJDCCGVDDWFBKIIBPVYLXSCNKJQCHGUKKRHVQSWPUHYXEYXRZBQLCEAMYOMUSMOQCQGEJKRGLCZLFSNOMTMUVKYXAIVTBHBKYDIDDZJGUOGWDMQJRIJLDFIRAZRPUFPEAXRWYFNVZNAFQSNSRTIMOJWKFBV");

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
    msg.setTimeStamp(0.83259436262);
    msg.setSource(5531U);
    msg.setSourceEntity(188U);
    msg.setDestination(4141U);
    msg.setDestinationEntity(252U);
    msg.formation_name.assign("OAQPBOWSLYDUAPQMTERJRLJRUJMHPROXXGRHFCEBEWKHIOSFGJZKTLUHQLHSKRNKOYUFZVMVEQCFFNIVSVGAKCMYLFRZVCKVPJGHXUFNQSLAGBIZTJZXVNDNJOPPCSMYABGOWGY");
    msg.reference_frame = 91U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10422U;
    tmp_msg_0.off_x = 0.835757833238;
    tmp_msg_0.off_y = 0.214202867799;
    tmp_msg_0.off_z = 0.0754824130319;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YFNUBTXAEBMDJEJSXGGGIQQUKDYFGKOAOQDXVOEIYPRVRDMQTHTEEAOKHHVJPIDZWSAVRSWBKOYNCTNMISWCPKYZBVIGKMNYHH");

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
    msg.setTimeStamp(0.666273741151);
    msg.setSource(5307U);
    msg.setSourceEntity(208U);
    msg.setDestination(47644U);
    msg.setDestinationEntity(87U);
    msg.group_name.assign("CCLBKTLHSLKRZIQLGVQHDZYCJFMEWIDQVFJJWPICUJRWDZBZUGAHIXPNANTDI");
    msg.formation_name.assign("IUCEWLCAIVVTZFPAXVSKTJXQWVXDUWQHLYWUXGGMBOYAJWHZSIODINYKJGUFRGFZEOPRMNDYNNDEKBTMLERXXFWJMFTENCNBHMCPJIQHHZDQEKYZDHPKVRHZNOAHPVSPSZXBABFNGQEKZLPXLTMFOHPJGYGMMUUBQIBSSGCIJTFCUXZRLTSOALEABRSDNKTWMMDPIHCFVQ");
    msg.plan_id.assign("DBHYKVPKMOWQHUWCVPZFLBFVWVBIFPUHMYAYGRDZSGJ");
    msg.description.assign("IFIRHGVAWADTNECYHOCLUTLZRSOEMNWZEPRFZAXLVUHYRJSGABBDZKVUQDJUQOMNSJHURTXGDNDXXQPKSZJSIYSHDFYTEKBDPYHFCGKMNYRCPETQLBSPWXMTQIEZPBUZOZRVBORGOQMDPXFSWISYGMACWMJGVUAXPJGFWEKAKULXGCNIJIZYVDQLKL");
    msg.leader_speed = 0.513054126829;
    msg.leader_bank_lim = 0.0451140557206;
    msg.pos_sim_err_lim = 0.704024864406;
    msg.pos_sim_err_wrn = 0.280688772017;
    msg.pos_sim_err_timeout = 20399U;
    msg.converg_max = 0.0967677372073;
    msg.converg_timeout = 54567U;
    msg.comms_timeout = 9303U;
    msg.turb_lim = 0.124409828783;
    msg.custom.assign("GLJUKZMAFACAGQTIXRIJMYJTNLGCTQTGWMPBLOFDDUKSEXZBNPQRBCPVRNTTYBPHFZSUQYEZMKTBZIDJLLOAVIRWRMDNSNHENRSHWIGXUFNESJJHMJCMIMRHCNCVPBTSSPGZYBELHOAVMPSWUVORKFXALHQIQGBWXCRKUOYGAEXXUAKFNEDJEKJDXIERDUSTKOTXJGDLHWSUWLPYUZVCOZNQZXFAQIYWYKVVHBZMFAIKVYBQLPFFQPGCOVDOYO");

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
    msg.setTimeStamp(0.422529316652);
    msg.setSource(30677U);
    msg.setSourceEntity(19U);
    msg.setDestination(4521U);
    msg.setDestinationEntity(96U);
    msg.group_name.assign("IWNXIZCMTLUWASOBRUFNUINQBGPLFZVXKCXOZMHWXUJVTEMFCNAPSCXFKDFKLHHXFTIMKJRKUIYDDVGXLSIYGWDZRGSPPEWYUURJOYKHJFHWMAOKJLKDEQOSWZQELTBBMDQSVZEDJZRENBPEWTBGYZAASHMDLYUGJBNAXHRNOCNICERBTFXVQSRYVCVINFGQBUUWHQEMOYOHXCAVOWDVTQZVSJ");
    msg.formation_name.assign("LBIDMLEKIUAMKFMQKHBYKVXWUYXFOCHFSRJBGFERYYVORZVYUXGPVKXXQPIZQDHVZBWVRJGHABMMGOVONTCIGOPQJPMSWEALILQVZK");
    msg.plan_id.assign("XODEQZIARHDQAVJQBJKVQLWWXRMCTOQJCWJAUFGSCNEOPVDHEMOYWNKWGLNENCIWHRDBSUIXOAEBDNVUVCQBIPYNCGHSIHTMTRMOUEQJYKTAUEPIWGWKFPKHPQRAYVLKCNJNRHQDPZQPFXDGRTYMFORVPMSZILFABCETULMZSMUWSPWXZZECTFKUBOIFUTGYGAYAHCBZLLXVVDHSMKRLJIKJJHJMKBFZUYTDGDGYN");
    msg.description.assign("ZFPXAZLFHGOBZOXIUHXALAYJTDZWCCWMNHVPFVCBAMTVJDWDKNISGKTSPKSDDSDEPVQTPPPPZUXGVWOHMURSQDGXWRTWSHJKAKUPXGJKRWQJEZNFVBMYQSOSTBIQOBTXQUPJMQGLMFGMJEAVJHXBYNYAOEDHQEZKCMIARKMZYDFICOCVRINFCBTNEJAGEVSSLBCVURREIHGCCRXTWUZJWKWLDKFRMFOEBFEHNYZLXILNYUNIHQNARQ");
    msg.leader_speed = 0.973862908398;
    msg.leader_bank_lim = 0.240331476183;
    msg.pos_sim_err_lim = 0.979764195806;
    msg.pos_sim_err_wrn = 0.491144993881;
    msg.pos_sim_err_timeout = 60644U;
    msg.converg_max = 0.112266900125;
    msg.converg_timeout = 58936U;
    msg.comms_timeout = 24932U;
    msg.turb_lim = 0.517267541306;
    msg.custom.assign("HAMOJXEZBTZMZUJKOQCVVCLNCBGCFVSAUSRVCJRHEFYGGRMSUUQIKHTXOLOZDUK");

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
    msg.setTimeStamp(0.736172810801);
    msg.setSource(6087U);
    msg.setSourceEntity(139U);
    msg.setDestination(19540U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("RPVKTGPMUSHXIZUPYONRHIGEXHUJQNNCBMUZOLDVQQMYPMNMYAEVBLWQLPFLROEPESIEGYVNUVVUWCIZUQMSQCIAJGZFSLBWGFRJKASZJNTPEESXSSCTACWIWAKJFGBOLZTOSXRPCNDFXAGGVXHWXYHWDYHRKCWQVMMDDRNZEVVYJCLHINJOFFYIUHKARBBZUBADDTKTO");
    msg.formation_name.assign("YMQYXCWWAISNONJIRXHZBNIAUWLCWTIBXOFYAHTOBEWGKPNBEWFDOMJUFRTCKUMLHTERAEXDSKAYGGRQLIDKLMXPPVHRVCQBOVBWYDLPMEZSYJZZCFXQSUKYSJEILJFYTNKLJJNKMDNVLDUGUQBEUZIJMDVWHANITRGKFXMNRIQIZYTOADHUMCEAQPVCOTBHKWPLBPLGZAPE");
    msg.plan_id.assign("VWGWNHSSPGFDSHKGKFAVKZMTYUTYQOJVNLEVJTRSVXWLYFQBYGSOSYOHTODUXGPUGFHCAZQJTPKCUWABW");
    msg.description.assign("RNQNGRWNZDBGZGVHJCMYQXPMPKDBBQRAFEIZWHIUQKGHMCVTQEXEXAEEVYRZFDCJASWKMMXOOWSTAZQICTMDVOLMSEJLRZFBJLGTUOQWPQCOUGIVPWZBHTRDGNKDHJITYKFXPHPXELIKGNBZRNFDDFWFAUACQAWGBNVVXEPYFZDZAIRSFGCAIJKUFLAMUOTRPWJPBQYYLPSHSOKUINEVNHKLR");
    msg.leader_speed = 0.129441845219;
    msg.leader_bank_lim = 0.373885980536;
    msg.pos_sim_err_lim = 0.77153436222;
    msg.pos_sim_err_wrn = 0.156226154402;
    msg.pos_sim_err_timeout = 3477U;
    msg.converg_max = 0.073834003035;
    msg.converg_timeout = 47512U;
    msg.comms_timeout = 28551U;
    msg.turb_lim = 0.804893843927;
    msg.custom.assign("RUEQRUBACQSOJOJKGWPTHANKUNSWHJHYLRPZWCWMCJAUWCLVQJHHRDTQBTZBHTMZXEAFNTFEAMFMVQGYZXFXPDVOERIJOVBGSPLZHTZOZZKKWQEEOGEYGHLIEDFANKSCYLBRXULDPCGDAKJRJTFFMIXYTNLEQHPKSCPRKDXUSGBHWELDIKSBPXXICMUOGVNUNMBISIKJIPAAOMVCDWNMTGYQVNSXLYOV");

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
    msg.setTimeStamp(0.340202415653);
    msg.setSource(62673U);
    msg.setSourceEntity(181U);
    msg.setDestination(5581U);
    msg.setDestinationEntity(229U);
    msg.control_src = 60125U;
    msg.control_ent = 122U;
    msg.timeout = 0.0173468696926;
    msg.loiter_radius = 0.315304133548;
    msg.altitude_interval = 0.695928208356;

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
    msg.setTimeStamp(0.830481623308);
    msg.setSource(21480U);
    msg.setSourceEntity(89U);
    msg.setDestination(37909U);
    msg.setDestinationEntity(126U);
    msg.control_src = 20237U;
    msg.control_ent = 194U;
    msg.timeout = 0.400755573297;
    msg.loiter_radius = 0.195045217574;
    msg.altitude_interval = 0.588158324139;

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
    msg.setTimeStamp(0.217909613144);
    msg.setSource(14556U);
    msg.setSourceEntity(239U);
    msg.setDestination(7153U);
    msg.setDestinationEntity(226U);
    msg.control_src = 25040U;
    msg.control_ent = 169U;
    msg.timeout = 0.253511471306;
    msg.loiter_radius = 0.0244243363398;
    msg.altitude_interval = 0.959710506569;

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
    msg.setTimeStamp(0.243860886483);
    msg.setSource(16213U);
    msg.setSourceEntity(11U);
    msg.setDestination(16118U);
    msg.setDestinationEntity(170U);
    msg.flags = 175U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.631652266905;
    tmp_msg_0.speed_units = 188U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.583055768803;
    tmp_msg_1.z_units = 188U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.845156311278;
    msg.lon = 0.634366861649;
    msg.radius = 0.826830547929;

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
    msg.setTimeStamp(0.989979264952);
    msg.setSource(1185U);
    msg.setSourceEntity(90U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(93U);
    msg.flags = 154U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.27153124768;
    tmp_msg_0.speed_units = 70U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.542242125598;
    tmp_msg_1.z_units = 114U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.872980627374;
    msg.lon = 0.705610788602;
    msg.radius = 0.430353222325;

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
    msg.setTimeStamp(0.89329629964);
    msg.setSource(44900U);
    msg.setSourceEntity(15U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(175U);
    msg.flags = 98U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.405872296153;
    tmp_msg_0.speed_units = 68U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.95742263473;
    tmp_msg_1.z_units = 152U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.462356714063;
    msg.lon = 0.9356871549;
    msg.radius = 0.614796915588;

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
    msg.setTimeStamp(0.222761394313);
    msg.setSource(13556U);
    msg.setSourceEntity(196U);
    msg.setDestination(65303U);
    msg.setDestinationEntity(200U);
    msg.control_src = 64580U;
    msg.control_ent = 252U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 29U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.234311462466;
    tmp_tmp_msg_0_0.speed_units = 150U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.774651764407;
    tmp_tmp_msg_0_1.z_units = 86U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.416831364841;
    tmp_msg_0.lon = 0.981876139076;
    tmp_msg_0.radius = 0.299503226461;
    msg.reference.set(tmp_msg_0);
    msg.state = 254U;
    msg.proximity = 54U;

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
    msg.setTimeStamp(0.116792622897);
    msg.setSource(14256U);
    msg.setSourceEntity(114U);
    msg.setDestination(45662U);
    msg.setDestinationEntity(128U);
    msg.control_src = 45822U;
    msg.control_ent = 226U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 22U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0409682266509;
    tmp_tmp_msg_0_0.speed_units = 52U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.116018509484;
    tmp_tmp_msg_0_1.z_units = 2U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.31152062424;
    tmp_msg_0.lon = 0.130782446093;
    tmp_msg_0.radius = 0.646618766229;
    msg.reference.set(tmp_msg_0);
    msg.state = 105U;
    msg.proximity = 29U;

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
    msg.setTimeStamp(0.572272207341);
    msg.setSource(27900U);
    msg.setSourceEntity(75U);
    msg.setDestination(13788U);
    msg.setDestinationEntity(209U);
    msg.control_src = 10813U;
    msg.control_ent = 56U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 229U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.506392361735;
    tmp_tmp_msg_0_0.speed_units = 16U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.631179987341;
    tmp_tmp_msg_0_1.z_units = 122U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.296343228503;
    tmp_msg_0.lon = 0.582126202802;
    tmp_msg_0.radius = 0.0757185485456;
    msg.reference.set(tmp_msg_0);
    msg.state = 199U;
    msg.proximity = 158U;

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
    msg.setTimeStamp(0.342069971422);
    msg.setSource(32994U);
    msg.setSourceEntity(236U);
    msg.setDestination(28949U);
    msg.setDestinationEntity(89U);
    msg.ax_cmd = 0.760413372152;
    msg.ay_cmd = 0.45336561019;
    msg.az_cmd = 0.150180092775;
    msg.ax_des = 0.652040765677;
    msg.ay_des = 0.729265416558;
    msg.az_des = 0.339182609743;
    msg.virt_err_x = 0.116870857012;
    msg.virt_err_y = 0.553310356757;
    msg.virt_err_z = 0.3378742857;
    msg.surf_fdbk_x = 0.814996707776;
    msg.surf_fdbk_y = 0.512321491491;
    msg.surf_fdbk_z = 0.458259403044;
    msg.surf_unkn_x = 0.727521638949;
    msg.surf_unkn_y = 0.0728004459721;
    msg.surf_unkn_z = 0.327988442435;
    msg.ss_x = 0.267831331566;
    msg.ss_y = 0.324399725365;
    msg.ss_z = 0.128132794065;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PSLTSDBQKHTFMDGPULGZUHIEPXISYPNBDVNLGYCWFHBUSEKOUJRYJDKVQKEODNJUXHBOMGYNQWMHTZCQAGHCJMGWFWYPZEXTEQUOEKQKLFRDYYUNYRWZRVITLJTCIPCAAASBBFLEVRBHKMNBFAZZLHRQZADKOTZFXCZXVPBLCIXT");
    tmp_msg_0.dist = 0.817519566239;
    tmp_msg_0.err = 0.921638830847;
    tmp_msg_0.ctrl_imp = 0.608304848241;
    tmp_msg_0.rel_dir_x = 0.640906768758;
    tmp_msg_0.rel_dir_y = 0.820574443614;
    tmp_msg_0.rel_dir_z = 0.797267758359;
    tmp_msg_0.err_x = 0.0947957396919;
    tmp_msg_0.err_y = 0.694827664089;
    tmp_msg_0.err_z = 0.580191803091;
    tmp_msg_0.rf_err_x = 0.859282805188;
    tmp_msg_0.rf_err_y = 0.440661956123;
    tmp_msg_0.rf_err_z = 0.423963219005;
    tmp_msg_0.rf_err_vx = 0.893659072568;
    tmp_msg_0.rf_err_vy = 0.126342117667;
    tmp_msg_0.rf_err_vz = 0.764560610091;
    tmp_msg_0.ss_x = 0.0522531830267;
    tmp_msg_0.ss_y = 0.593089771659;
    tmp_msg_0.ss_z = 0.321466628444;
    tmp_msg_0.virt_err_x = 0.918153169609;
    tmp_msg_0.virt_err_y = 0.693796692006;
    tmp_msg_0.virt_err_z = 0.350004527095;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.220483686294);
    msg.setSource(29808U);
    msg.setSourceEntity(26U);
    msg.setDestination(53759U);
    msg.setDestinationEntity(239U);
    msg.ax_cmd = 0.80263474215;
    msg.ay_cmd = 0.0132708218001;
    msg.az_cmd = 0.685217929616;
    msg.ax_des = 0.603603174127;
    msg.ay_des = 0.10303129062;
    msg.az_des = 0.540927322942;
    msg.virt_err_x = 0.300352479366;
    msg.virt_err_y = 0.518125306842;
    msg.virt_err_z = 0.0601439461188;
    msg.surf_fdbk_x = 0.101402241852;
    msg.surf_fdbk_y = 0.431961163916;
    msg.surf_fdbk_z = 0.682839261282;
    msg.surf_unkn_x = 0.533080750536;
    msg.surf_unkn_y = 0.311527387023;
    msg.surf_unkn_z = 0.557980651701;
    msg.ss_x = 0.2275496286;
    msg.ss_y = 0.531114609825;
    msg.ss_z = 0.774091659587;

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
    msg.setTimeStamp(0.363480401334);
    msg.setSource(7379U);
    msg.setSourceEntity(9U);
    msg.setDestination(17135U);
    msg.setDestinationEntity(40U);
    msg.ax_cmd = 0.670444241118;
    msg.ay_cmd = 0.555950341123;
    msg.az_cmd = 0.0734313185306;
    msg.ax_des = 0.910458165302;
    msg.ay_des = 0.737833569273;
    msg.az_des = 0.459746054697;
    msg.virt_err_x = 0.952256352915;
    msg.virt_err_y = 0.844315880368;
    msg.virt_err_z = 0.832519089125;
    msg.surf_fdbk_x = 0.86231813077;
    msg.surf_fdbk_y = 0.883998524661;
    msg.surf_fdbk_z = 0.06781223553;
    msg.surf_unkn_x = 0.577204643996;
    msg.surf_unkn_y = 0.0242457600331;
    msg.surf_unkn_z = 0.199480530882;
    msg.ss_x = 0.803018074942;
    msg.ss_y = 0.824992382318;
    msg.ss_z = 0.92035534664;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MHWOSXJMIDROHKOGOINYLSLTHUYNQCTBJVEPKONZWFSERNVCXMNTBVGGYQOGIXVNOIDZMJRZAALAVXOOINJMRSUHKBCMLKKDLXGAWGUNFFQXTUZXYVRLKEDQQCIERPAEQLCFAXUJYLDVH");
    tmp_msg_0.dist = 0.799226183808;
    tmp_msg_0.err = 0.943244376189;
    tmp_msg_0.ctrl_imp = 0.343160815621;
    tmp_msg_0.rel_dir_x = 0.504548053761;
    tmp_msg_0.rel_dir_y = 0.354488927107;
    tmp_msg_0.rel_dir_z = 0.253180616789;
    tmp_msg_0.err_x = 0.177555316356;
    tmp_msg_0.err_y = 0.515468320683;
    tmp_msg_0.err_z = 0.344797680296;
    tmp_msg_0.rf_err_x = 0.646928097524;
    tmp_msg_0.rf_err_y = 0.486193825383;
    tmp_msg_0.rf_err_z = 0.878589522495;
    tmp_msg_0.rf_err_vx = 0.974781884162;
    tmp_msg_0.rf_err_vy = 0.254803576402;
    tmp_msg_0.rf_err_vz = 0.242530782531;
    tmp_msg_0.ss_x = 0.83760116876;
    tmp_msg_0.ss_y = 0.298508420313;
    tmp_msg_0.ss_z = 0.427267317843;
    tmp_msg_0.virt_err_x = 0.0360613889284;
    tmp_msg_0.virt_err_y = 0.122118405845;
    tmp_msg_0.virt_err_z = 0.121387688719;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.746127468059);
    msg.setSource(10066U);
    msg.setSourceEntity(252U);
    msg.setDestination(5351U);
    msg.setDestinationEntity(249U);
    msg.s_id.assign("NCQCVDKGTWWUAKYYEWPMKMGCNAOSGLVLRONMWQEJKXARITEYVPJTYUINBFQH");
    msg.dist = 0.213156119322;
    msg.err = 0.42137478629;
    msg.ctrl_imp = 0.481136782575;
    msg.rel_dir_x = 0.227532107833;
    msg.rel_dir_y = 0.166571672808;
    msg.rel_dir_z = 0.112952061895;
    msg.err_x = 0.769236157929;
    msg.err_y = 0.321591329654;
    msg.err_z = 0.847401916545;
    msg.rf_err_x = 0.130635259765;
    msg.rf_err_y = 0.836818165411;
    msg.rf_err_z = 0.592551088451;
    msg.rf_err_vx = 0.367589654903;
    msg.rf_err_vy = 0.107773706709;
    msg.rf_err_vz = 0.0438096879689;
    msg.ss_x = 0.721228222487;
    msg.ss_y = 0.239733932947;
    msg.ss_z = 0.677585840283;
    msg.virt_err_x = 0.816983458879;
    msg.virt_err_y = 0.959776541785;
    msg.virt_err_z = 0.807984640207;

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
    msg.setTimeStamp(0.167004393429);
    msg.setSource(22113U);
    msg.setSourceEntity(133U);
    msg.setDestination(31153U);
    msg.setDestinationEntity(72U);
    msg.s_id.assign("XZLKMXOHZVPSDOMWHVIQRBSMFIFZLQZTLTHIAHJAKDPIPTDNBSBKSMQCYYYNLBNGKFJJEQWTYFUICUQCDIVKIVSQEECEUHDAXJANRWOEPXJEMTJCVCVOELZNTRSUOHBACDLQGLGUZEZVEDSMUWKCUTIWLFMXYXLNHXGWKRPRANRINACABYXMSTFQDIQUPGGBRPGYALZHYNHWZOGOOTKXOVQAFRURO");
    msg.dist = 0.942018195452;
    msg.err = 0.22683191276;
    msg.ctrl_imp = 0.0968907913587;
    msg.rel_dir_x = 0.428570724634;
    msg.rel_dir_y = 0.955380912208;
    msg.rel_dir_z = 0.476289089793;
    msg.err_x = 0.714546654773;
    msg.err_y = 0.192623402789;
    msg.err_z = 0.258797980506;
    msg.rf_err_x = 0.378536578681;
    msg.rf_err_y = 0.520260252077;
    msg.rf_err_z = 0.893292674176;
    msg.rf_err_vx = 0.33842461274;
    msg.rf_err_vy = 0.427185894547;
    msg.rf_err_vz = 0.81026178447;
    msg.ss_x = 0.264602164654;
    msg.ss_y = 0.263566466507;
    msg.ss_z = 0.696942667753;
    msg.virt_err_x = 0.103595914413;
    msg.virt_err_y = 0.780097194749;
    msg.virt_err_z = 0.917564824819;

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
    msg.setTimeStamp(0.0602643288075);
    msg.setSource(42317U);
    msg.setSourceEntity(227U);
    msg.setDestination(60424U);
    msg.setDestinationEntity(253U);
    msg.s_id.assign("JKOELNMOILNVZHPUXTIVQHLDQVWMMUXVHQIOQWSLHZLFFZSUHQEDRWBNUGKCSDGBCQ");
    msg.dist = 0.214951499991;
    msg.err = 0.67337085538;
    msg.ctrl_imp = 0.0525086484795;
    msg.rel_dir_x = 0.92507337582;
    msg.rel_dir_y = 0.298675678389;
    msg.rel_dir_z = 0.921562917307;
    msg.err_x = 0.321826229329;
    msg.err_y = 0.911329243801;
    msg.err_z = 0.32803732191;
    msg.rf_err_x = 0.970953616906;
    msg.rf_err_y = 0.0514963725704;
    msg.rf_err_z = 0.0653596692152;
    msg.rf_err_vx = 0.438087772437;
    msg.rf_err_vy = 0.277572530155;
    msg.rf_err_vz = 0.241145243655;
    msg.ss_x = 0.369637096808;
    msg.ss_y = 0.683199284436;
    msg.ss_z = 0.312271853072;
    msg.virt_err_x = 0.359097528976;
    msg.virt_err_y = 0.349816752916;
    msg.virt_err_z = 0.794705977439;

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
    msg.setTimeStamp(0.362975725091);
    msg.setSource(54953U);
    msg.setSourceEntity(3U);
    msg.setDestination(17242U);
    msg.setDestinationEntity(250U);
    msg.timeout = 60181U;
    msg.rpm = 0.256824997181;
    msg.direction = 238U;
    msg.custom.assign("JBSEZZCTIADKVLMHVRZHDFWFNBRFZNQTQCNTIX");

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
    msg.setTimeStamp(0.635081238872);
    msg.setSource(41326U);
    msg.setSourceEntity(42U);
    msg.setDestination(45905U);
    msg.setDestinationEntity(218U);
    msg.timeout = 36041U;
    msg.rpm = 0.683493167429;
    msg.direction = 5U;
    msg.custom.assign("WLMTUNFEOYNLLZNIXUFIBGNNXZRT");

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
    msg.setTimeStamp(0.360633762152);
    msg.setSource(43801U);
    msg.setSourceEntity(247U);
    msg.setDestination(6726U);
    msg.setDestinationEntity(83U);
    msg.timeout = 570U;
    msg.rpm = 0.824302438902;
    msg.direction = 33U;
    msg.custom.assign("CCEMYNXULKXZUHHQQOMLQSUZAMBQKCFGEFAATQOPUUKHTSHCRDZUTZFILNXVGDOBJEOBDTQLDMEUWDBFZMFJYSSBVOXYSCVLDGCRQRLHGMTMTIPVEKIYWXYCNDPHTMERANYAQANLLHKYOEMNPBXCHPZFSWFNFMPBIYGYTSLXOSGIFKBZVP");

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
    msg.setTimeStamp(0.497091761258);
    msg.setSource(60942U);
    msg.setSourceEntity(106U);
    msg.setDestination(52264U);
    msg.setDestinationEntity(186U);
    msg.formation_name.assign("LRQFDGUJQAHGCDGPPSEDTYBLSBUESPMAZPLRIHCCBQQVTHKRFXNXSOBWZGTTEAYSKFNMRWALMWUVWZEAPOFDMOVAJOOHHRMJDYSBEIKMQCFAANUAZVYLSTDMEVQVNBLXIBBEFZKPZGNXJUIDZPLVHQRVXOGCEJCXGEIYKLWRZCP");
    msg.type = 240U;
    msg.op = 249U;
    msg.group_name.assign("WJMMJUHBHYLPXEZPNSLMPFOXWUVQGNEKZDVXHBSTYFPRFSTCIEQ");
    msg.plan_id.assign("USUYMYHWSDPCW");
    msg.description.assign("BEJNDVCFYBNBKPALKEZERGBCYRLOMTEJJPZOWGHZYZBESWEMVXTFQCO");
    msg.reference_frame = 103U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56184U;
    tmp_msg_0.off_x = 0.271337427329;
    tmp_msg_0.off_y = 0.799362316698;
    tmp_msg_0.off_z = 0.712811936248;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.668498488934;
    msg.leader_speed_min = 0.36319256824;
    msg.leader_speed_max = 0.53845534443;
    msg.leader_alt_min = 0.101271572122;
    msg.leader_alt_max = 0.879720795786;
    msg.pos_sim_err_lim = 0.351498957291;
    msg.pos_sim_err_wrn = 0.803364181677;
    msg.pos_sim_err_timeout = 22372U;
    msg.converg_max = 0.354102889397;
    msg.converg_timeout = 65338U;
    msg.comms_timeout = 30756U;
    msg.turb_lim = 0.737286755633;
    msg.custom.assign("KZSNYANESTCEZSMOZEPEKJLFIWQOLMNVFNRAOBLEVCMVNTKCXBWUYWUQAPVLBBRDSOGKVIGNQCFXJRSBFDAFVIDIRSGWXAKVCPURGIQPTRDGRTUJCMFWBTICOZCIOSOUFZGVBYBDQJODWMUTDHFKREBTKJYQXWQEAPJPYFYLBVPZMJEAKTNHVAGUZLGXQNMLEXGLRUEHPZWXQHNHSXUQLG");

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
    msg.setTimeStamp(0.170760288849);
    msg.setSource(30852U);
    msg.setSourceEntity(23U);
    msg.setDestination(51190U);
    msg.setDestinationEntity(151U);
    msg.formation_name.assign("OZCYGSEUWYHPXQMKCDNGGFAIIBMQKQPZDEXBHTZHVDCRAJXPGKERKGQLXWNIJHZCHNETPUKPSFCDLKKIFYNUZPXZUZLOVWTLFIUHWAGSDKOPAEUGMLJJVDKBYIRBROI");
    msg.type = 115U;
    msg.op = 47U;
    msg.group_name.assign("FUGVHUDWCULQBBVTWVSOFXMPTJVZIIIYATIHHLGITPXDJBVJYBJRZMTWBRSFROCUNAUUIDBJSAYTWHMGDXNOZSHYKUELZCFVPFPZZEHQVEIPYKEGPJNRQKQHUUBLPYQCNSDLQLXZNEYISNNTWDZSXFMNJKOTKALLMCWFUWWKOHMVAHBBGOIOEOM");
    msg.plan_id.assign("RJRMJDADWEKOQNRFFQIVEZC");
    msg.description.assign("KPPYGHSVZHDOMFNQYHMKOKJPYTGHLLPJTKBMHSDPMLMV");
    msg.reference_frame = 92U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33078U;
    tmp_msg_0.off_x = 0.382744240868;
    tmp_msg_0.off_y = 0.0149164170044;
    tmp_msg_0.off_z = 0.370751720457;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.48654309856;
    msg.leader_speed_min = 0.904961483633;
    msg.leader_speed_max = 0.766862974135;
    msg.leader_alt_min = 0.299344768675;
    msg.leader_alt_max = 0.904376318185;
    msg.pos_sim_err_lim = 0.799024894383;
    msg.pos_sim_err_wrn = 0.888257006284;
    msg.pos_sim_err_timeout = 60459U;
    msg.converg_max = 0.528126328273;
    msg.converg_timeout = 4144U;
    msg.comms_timeout = 65397U;
    msg.turb_lim = 0.32525139168;
    msg.custom.assign("MNJNULTCULCAVOUIPQHWDHQXKZXFWEBYLAMSKIQCJLRGGBSNDPOHVULEXGMUKAPKITFJGSMNXFOALTUMVSTRUMRXRCRGABVSHVRVOSAGZSLHENISQNNKPIOXWNWXFDEZWWEBCIAPDOVXWYDNZCDTFSVUKTMJDQBTFSJJCJPFGXUAKKDEWFIMZCOYPBLOBBMVJGGRHRCKYZTEJIHOQTDYIYPJRVOHYENZALZERZTYQMFYBLHWWCPXK");

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
    msg.setTimeStamp(0.470241878736);
    msg.setSource(39766U);
    msg.setSourceEntity(41U);
    msg.setDestination(63645U);
    msg.setDestinationEntity(34U);
    msg.formation_name.assign("HJLRSGEBRHCQQVAGFWOTTHDNMQKCIFOZIOZXTYGNYSEATKCGUOXTWRKKOMFSEYCVBULSWLGEFJYPHTRPRJCZIPZNBNALSXQEZCDISHBMXHRQFMNIDUZTQHUHCKFQRPRWRIZWFDPCLVLMULKMFYYPIEMMJAJQSEOCGWJJBVONKWUDKGKASHIJODDAMNAIXVLEBYUTXVKVILFSZDPBTPJTSWXNOVUYGHXPAZYCLXU");
    msg.type = 17U;
    msg.op = 70U;
    msg.group_name.assign("GMWKQPCIPMULGGNTGWELTNXZGVVIHSGCZXTQTHVDONNCYHLDJZDRFTPWRYOSXCJ");
    msg.plan_id.assign("XEQNTNYDPJOYZSUKKHYOZVUMDCZQCIGNDPFXBT");
    msg.description.assign("WGPSTURYVMRGLAEMUHAMVBOMQIXZRLNJP");
    msg.reference_frame = 152U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34317U;
    tmp_msg_0.off_x = 0.309020603591;
    tmp_msg_0.off_y = 0.641321523921;
    tmp_msg_0.off_z = 0.708907172041;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.930449372226;
    msg.leader_speed_min = 0.589376659801;
    msg.leader_speed_max = 0.753129011415;
    msg.leader_alt_min = 0.874762856332;
    msg.leader_alt_max = 0.469284585964;
    msg.pos_sim_err_lim = 0.603751091051;
    msg.pos_sim_err_wrn = 0.438940151213;
    msg.pos_sim_err_timeout = 26152U;
    msg.converg_max = 0.325035077415;
    msg.converg_timeout = 38982U;
    msg.comms_timeout = 12177U;
    msg.turb_lim = 0.808610029198;
    msg.custom.assign("CGAGFZNBAYRWMYMFZAXYDJRXBIVQZYDNFWSCPPCICNTZJPKEEUNMKEZEDODHHOHFBXSJLEROLLWRAWSUMJNFZALILGUAIWDOUTCEEJSJGWYDXJFTSWSPKLAPZCLYVRRDVRTSHXVBQIKBUGQL");

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
    msg.setTimeStamp(0.727680865529);
    msg.setSource(7933U);
    msg.setSourceEntity(7U);
    msg.setDestination(19947U);
    msg.setDestinationEntity(192U);
    msg.timeout = 35614U;
    msg.lat = 0.753955378614;
    msg.lon = 0.196673595702;
    msg.z = 0.180200669448;
    msg.z_units = 31U;
    msg.speed = 0.456018610858;
    msg.speed_units = 229U;
    msg.custom.assign("DZJXSVNEMFRXGEVNDIATYTKFGSTGFFOJCNWHTCAYYBUOPAMJTMZQRLKCFSXYNDXQNESHEHNASGGYRUCMVLLAXFLKMNFBZZDEXMCRIEJKQBMXXKIWQQSUVYMPACUKWOAFLJFUCYVLXBGPPKKARZCWBZLYGP");

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
    msg.setTimeStamp(0.544160977499);
    msg.setSource(54210U);
    msg.setSourceEntity(58U);
    msg.setDestination(18503U);
    msg.setDestinationEntity(200U);
    msg.timeout = 25568U;
    msg.lat = 0.97491618093;
    msg.lon = 0.228086445611;
    msg.z = 0.711265830623;
    msg.z_units = 226U;
    msg.speed = 0.71179630538;
    msg.speed_units = 142U;
    msg.custom.assign("MCBTOMCBZT");

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
    msg.setTimeStamp(0.539691388958);
    msg.setSource(17952U);
    msg.setSourceEntity(12U);
    msg.setDestination(53680U);
    msg.setDestinationEntity(56U);
    msg.timeout = 5008U;
    msg.lat = 0.506162207832;
    msg.lon = 0.175748338926;
    msg.z = 0.93034290209;
    msg.z_units = 137U;
    msg.speed = 0.0149685806151;
    msg.speed_units = 81U;
    msg.custom.assign("FYAQOKIRXOULCLBABRYOCLRPQBNWMAIDUSXMMJVKRKRSFIENFDMTQIJKXFZGGUSYDTHQMNPQGJEXRSLPZOCGYMEVKBRZNBWYCWDGQYIFUPJELZKGAOFXPDZNEEPGVSDQWHPJBYZKFKBWLUNBDSGHRWSQUQPHABUJNIDJGATWVIYTIEYHVHWEFBIYTZSKPXUVCUTXPVWTMADHXOOUZTCHVAJOTCEHLSRHZQDLCRLJJCKANCWFAMXX");

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
    msg.setTimeStamp(0.84974469663);
    msg.setSource(41605U);
    msg.setSourceEntity(81U);
    msg.setDestination(27764U);
    msg.setDestinationEntity(178U);
    msg.timeout = 43416U;
    msg.lat = 0.743393961907;
    msg.lon = 0.764810836711;
    msg.z = 0.347812435633;
    msg.z_units = 10U;
    msg.speed = 0.832808863646;
    msg.speed_units = 30U;
    msg.custom.assign("DMQDUJNZLCFOTNEPQFJKPESSYZCBVECNSQLROYZJUXAGMYFQWUISVCUDGFFACRWVXCMEZBGMKILKKFSDKHYOZHDKOBAJVONSHGVRMZJNM");

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
    msg.setTimeStamp(0.730022210779);
    msg.setSource(63504U);
    msg.setSourceEntity(83U);
    msg.setDestination(26330U);
    msg.setDestinationEntity(78U);
    msg.timeout = 1888U;
    msg.lat = 0.489796569637;
    msg.lon = 0.568388605759;
    msg.z = 0.113067773452;
    msg.z_units = 168U;
    msg.speed = 0.112119898101;
    msg.speed_units = 180U;
    msg.custom.assign("LGEFLIOUOYHPEKWMQRGFUUFABQPXEUSVTNZISTZHPGBBPANNETVNGXCPNPLALHRZWQAMWCUJKCSFDCHGGRVTSHROVDMMCQLFLLRIKKJTLUSHREYOKSMUKYCKRJKFYKJZBITQINDZNIEMVIGZKAVABYRDDOGOQVOFBUOPYGPNJAJCYNXJBTGEMHXCXHUFBXD");

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
    msg.setTimeStamp(0.16468959649);
    msg.setSource(5843U);
    msg.setSourceEntity(19U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(92U);
    msg.timeout = 28439U;
    msg.lat = 0.179751910101;
    msg.lon = 0.100347244839;
    msg.z = 0.0850129651172;
    msg.z_units = 254U;
    msg.speed = 0.259942013377;
    msg.speed_units = 180U;
    msg.custom.assign("KPEDJBQNRFIYROGBXGBLEAGQQDUWFMSSAKHCRHSMZBEBLPDATVVATTXTYZAMTOKJTFLKNMWUIMECNJPSDKIRJHPQWFB");

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
    msg.setTimeStamp(0.719315936299);
    msg.setSource(15594U);
    msg.setSourceEntity(200U);
    msg.setDestination(46872U);
    msg.setDestinationEntity(95U);
    msg.arrival_time = 0.563672130378;
    msg.lat = 0.356456283177;
    msg.lon = 0.414394089564;
    msg.z = 0.255456911753;
    msg.z_units = 83U;
    msg.travel_z = 0.517002662381;
    msg.travel_z_units = 144U;
    msg.delayed = 16U;

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
    msg.setTimeStamp(0.713528587342);
    msg.setSource(6409U);
    msg.setSourceEntity(149U);
    msg.setDestination(42718U);
    msg.setDestinationEntity(133U);
    msg.arrival_time = 0.29571018805;
    msg.lat = 0.248398489868;
    msg.lon = 0.610016526097;
    msg.z = 0.327010743848;
    msg.z_units = 76U;
    msg.travel_z = 0.652639743028;
    msg.travel_z_units = 116U;
    msg.delayed = 76U;

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
    msg.setTimeStamp(0.875627395276);
    msg.setSource(61819U);
    msg.setSourceEntity(36U);
    msg.setDestination(62273U);
    msg.setDestinationEntity(178U);
    msg.arrival_time = 0.647326508014;
    msg.lat = 0.963274853235;
    msg.lon = 0.0637281815553;
    msg.z = 0.473371699806;
    msg.z_units = 141U;
    msg.travel_z = 0.452582132048;
    msg.travel_z_units = 172U;
    msg.delayed = 236U;

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
    msg.setTimeStamp(0.750326239768);
    msg.setSource(54276U);
    msg.setSourceEntity(225U);
    msg.setDestination(57278U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.327419177946;
    msg.lon = 0.601729548261;
    msg.z = 0.61719909487;
    msg.z_units = 222U;
    msg.speed = 0.446412542504;
    msg.speed_units = 118U;
    msg.bearing = 0.10306033993;
    msg.cross_angle = 0.36423435493;
    msg.width = 0.498877294731;
    msg.length = 0.960093283463;
    msg.coff = 88U;
    msg.angaperture = 0.187385571151;
    msg.range = 37971U;
    msg.overlap = 135U;
    msg.flags = 134U;
    msg.custom.assign("PGCZPRKXBDOWDFVWBZXWRKIQAOLFQOKWTXKCFNSYQLXFIRBSQRBIMLHQZAVSOYLEPGHUYSEFJURXMCNSYGXWNTHRESE");

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
    msg.setTimeStamp(0.0109323414845);
    msg.setSource(30412U);
    msg.setSourceEntity(182U);
    msg.setDestination(16143U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.182389680921;
    msg.lon = 0.0564272510352;
    msg.z = 0.979230840012;
    msg.z_units = 38U;
    msg.speed = 0.695488101476;
    msg.speed_units = 63U;
    msg.bearing = 0.908730550311;
    msg.cross_angle = 0.714331037778;
    msg.width = 0.0620557704057;
    msg.length = 0.583339905279;
    msg.coff = 200U;
    msg.angaperture = 0.976490531282;
    msg.range = 14563U;
    msg.overlap = 155U;
    msg.flags = 248U;
    msg.custom.assign("HARLUYHTKZTAPSXVIEBBIYOIDHQBMRZJPEENURXPNUUMXJAWIAPPIMMHGCSDFLVUWGNHRDOMPOACWDYJEZLSOZDNADUOZTMQYCFPGYOJSFZYDJBGNUKPYMOXFTYLCQFOTYWTKIXCLLZFHWGGDAAGBVQJUXCKCHXELNXMPFIHOVBXVSNJNCBSVFKWKHRZTWSMRQONTQKQLJJPKRXEBGQUMRYNILR");

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
    msg.setTimeStamp(0.423344195301);
    msg.setSource(5194U);
    msg.setSourceEntity(74U);
    msg.setDestination(13900U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.13327450869;
    msg.lon = 0.845437962474;
    msg.z = 0.870437295836;
    msg.z_units = 254U;
    msg.speed = 0.175075754115;
    msg.speed_units = 186U;
    msg.bearing = 0.594651280128;
    msg.cross_angle = 0.823455768707;
    msg.width = 0.990983100326;
    msg.length = 0.811427122023;
    msg.coff = 168U;
    msg.angaperture = 0.816239383283;
    msg.range = 10676U;
    msg.overlap = 189U;
    msg.flags = 137U;
    msg.custom.assign("UEMFTHIGSKMGMJPEIUVSIAXGSWLUWJQRNVCOVNYPEVJYAYZ");

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
    msg.setTimeStamp(0.275686229778);
    msg.setSource(44034U);
    msg.setSourceEntity(99U);
    msg.setDestination(27110U);
    msg.setDestinationEntity(234U);
    msg.timeout = 65280U;
    msg.lat = 0.933758347565;
    msg.lon = 0.848391670078;
    msg.z = 0.101376858417;
    msg.z_units = 217U;
    msg.speed = 0.848467380074;
    msg.speed_units = 53U;
    msg.syringe0 = 95U;
    msg.syringe1 = 83U;
    msg.syringe2 = 144U;
    msg.custom.assign("QSDWFYPNVAEDESTFKNSCKKLHWZOCHPIXJJDUCMVCZPKGGEWFRGQZTKOCOJBLHPDSGDYRXUVULQORTUBTHAIZVKNNEKYYCQVLGOQVBXBCNJKXQIYFITGVEDRVSIIHFKMBHRTSUXLWUTUIJEYASYQHOTTQBEMBRXJAIHFBLLOPDSVKNRAUMUYYTHZOWUNFFDZWN");

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
    msg.setTimeStamp(0.590074172318);
    msg.setSource(4780U);
    msg.setSourceEntity(75U);
    msg.setDestination(13851U);
    msg.setDestinationEntity(245U);
    msg.timeout = 6718U;
    msg.lat = 0.361819755167;
    msg.lon = 0.121688444025;
    msg.z = 0.460526154528;
    msg.z_units = 6U;
    msg.speed = 0.522012684578;
    msg.speed_units = 41U;
    msg.syringe0 = 38U;
    msg.syringe1 = 251U;
    msg.syringe2 = 39U;
    msg.custom.assign("HOKYTPZETEUIOVRORFVAWHDIRBGDYRUIOEWNCYSXWXYGYEOKLSMCSJPBSSNIJCLXZQEL");

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
    msg.setTimeStamp(0.18798690977);
    msg.setSource(37584U);
    msg.setSourceEntity(218U);
    msg.setDestination(23088U);
    msg.setDestinationEntity(246U);
    msg.timeout = 36907U;
    msg.lat = 0.196937536917;
    msg.lon = 0.566592248274;
    msg.z = 0.139611604563;
    msg.z_units = 219U;
    msg.speed = 0.227135565257;
    msg.speed_units = 246U;
    msg.syringe0 = 49U;
    msg.syringe1 = 113U;
    msg.syringe2 = 180U;
    msg.custom.assign("LGKSMNNZFHHOJVHAMIXDBGEVWULLNYSVFJUSPXVCOLDHQKJWASDTVYTFTBGWPWXTKKIZUQKGAICQYKGBXZLZJLXGMKZMRPCHSSKEROJ");

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
    msg.setTimeStamp(0.765615201507);
    msg.setSource(12179U);
    msg.setSourceEntity(73U);
    msg.setDestination(52478U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.217599651427);
    msg.setSource(60020U);
    msg.setSourceEntity(223U);
    msg.setDestination(12325U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.392397725509);
    msg.setSource(59118U);
    msg.setSourceEntity(201U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.203649014596);
    msg.setSource(53410U);
    msg.setSourceEntity(146U);
    msg.setDestination(31872U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.0759875897243;
    msg.lon = 0.0162685266429;
    msg.z = 0.424318907676;
    msg.z_units = 22U;
    msg.speed = 0.20024905084;
    msg.speed_units = 106U;
    msg.takeoff_pitch = 0.175384674922;
    msg.custom.assign("DUNZOMMKVZCUSNAQSWAOTKNXRYUSLN");

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
    msg.setTimeStamp(0.752454647698);
    msg.setSource(47648U);
    msg.setSourceEntity(200U);
    msg.setDestination(8283U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.378371285326;
    msg.lon = 0.890676545678;
    msg.z = 0.0278504131252;
    msg.z_units = 91U;
    msg.speed = 0.622743424073;
    msg.speed_units = 86U;
    msg.takeoff_pitch = 0.771627382145;
    msg.custom.assign("QVZNLISHMYFJZGUOAZSBTHBXWCOSUBFUMRWQCJIQGVKZTDKONFBVJDDIKMAGWTJGAVFTNOLKRGAIYRPWZMKRISAQVKEFPTXZRBHHWDLMOCNYCCBFWNPZDJZMBBXFYILUQDEBMHTXTFOEMJRN");

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
    msg.setTimeStamp(0.00294450686028);
    msg.setSource(1569U);
    msg.setSourceEntity(49U);
    msg.setDestination(46445U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.440513420758;
    msg.lon = 0.274885283882;
    msg.z = 0.736901580063;
    msg.z_units = 194U;
    msg.speed = 0.0843693035564;
    msg.speed_units = 194U;
    msg.takeoff_pitch = 0.824394361108;
    msg.custom.assign("RGGPKQECHUQGJHWDTEVDWXZQASSHYDKXXDSOQUHTBICSTSTCFSCCGMFEABZAGLVHFHWNOMXMMOAMGVHQVFLWWCRAUKCSBZHJMPYFAKPKEYLXNOQIMNZMIERYRJRQSKBXYJGRJUEEWQXIUE");

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
    msg.setTimeStamp(0.899712729181);
    msg.setSource(59734U);
    msg.setSourceEntity(197U);
    msg.setDestination(63673U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.918807155965;
    msg.lon = 0.410196598516;
    msg.z = 0.375055639854;
    msg.z_units = 38U;
    msg.speed = 0.806658795197;
    msg.speed_units = 25U;
    msg.abort_z = 0.32991690214;
    msg.bearing = 0.881870191532;
    msg.glide_slope = 252U;
    msg.glide_slope_alt = 0.733288821777;
    msg.custom.assign("VBNMVFATMFHDCEJHBCMBYKFIREEPOWZXRKHCJIBYUVHYPQKEDLTZQGEZRLTWDOIP");

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
    msg.setTimeStamp(0.578479572858);
    msg.setSource(56614U);
    msg.setSourceEntity(177U);
    msg.setDestination(11216U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.00782558952487;
    msg.lon = 0.737082903462;
    msg.z = 0.602860812288;
    msg.z_units = 104U;
    msg.speed = 0.457485722575;
    msg.speed_units = 121U;
    msg.abort_z = 0.551066625784;
    msg.bearing = 0.132154225995;
    msg.glide_slope = 36U;
    msg.glide_slope_alt = 0.18953716654;
    msg.custom.assign("WBOEUEUZTQOIHGYVFXIMLBIAPKAILAIBFYAHWDCCTNRFUOMZAWLUKCYJBXKNQXENIYOJQOTHCSOXZKETACRN");

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
    msg.setTimeStamp(0.0552021370569);
    msg.setSource(48674U);
    msg.setSourceEntity(92U);
    msg.setDestination(15716U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.565756898575;
    msg.lon = 0.958757481241;
    msg.z = 0.586724206407;
    msg.z_units = 52U;
    msg.speed = 0.309399055428;
    msg.speed_units = 155U;
    msg.abort_z = 0.386946445845;
    msg.bearing = 0.915856557108;
    msg.glide_slope = 244U;
    msg.glide_slope_alt = 0.886205216499;
    msg.custom.assign("ZSEYVLBIAPONUVJLQRJRDZPUTWIBLFFCXKAQYOGMATCHAPZYLKBGUZWNANIKTLOIMFNGYXEMCSRVHHCRTJJDZIPLUESNVUZVSEETFUVYFBITBSJHFYMKTZWBIVFGNHXFMNANIBQDIPNGLAZCOGHRCPXM");

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
    msg.setTimeStamp(0.27485971086);
    msg.setSource(18768U);
    msg.setSourceEntity(173U);
    msg.setDestination(14577U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.79202838052;
    msg.lon = 0.806760411473;
    msg.speed = 0.525000387336;
    msg.speed_units = 96U;
    msg.limits = 154U;
    msg.max_depth = 0.577119721118;
    msg.min_alt = 0.559553742529;
    msg.time_limit = 0.450509845989;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.549804194099;
    tmp_msg_0.lon = 0.163882402039;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("BWRDTASSGGUITOXXWLWDFLMWZAVWMJQMYPWAUKLHEGZBUIROHFDJCKLIJTHDCEZFRUFQJNNEBQYORPVKEUNTTUBKFJRCVIMMHAYYLENGYGPNAGJZVWXOBAZSOJTHPHBYTUWPLLDQCJVUPISSQQFZSCXMVROXJDCGDCOZXKEVIWQNHDAYWFFZQIKVPULCGVMELXS");
    msg.custom.assign("WUBRGVTABTCBFPQDWVCVUUWYGXHAOSZYNWQUVBYBGKJBFIEZQBEWNCOKQIXIBZYCVRYCKDPUDKWOHMZMFPQOQAODAZNAUCMHRKLDS");

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
    msg.setTimeStamp(0.373130049508);
    msg.setSource(48685U);
    msg.setSourceEntity(190U);
    msg.setDestination(20293U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.654239369054;
    msg.lon = 0.169286396645;
    msg.speed = 0.86913081452;
    msg.speed_units = 112U;
    msg.limits = 237U;
    msg.max_depth = 0.457685369462;
    msg.min_alt = 0.669333401318;
    msg.time_limit = 0.475342510544;
    msg.controller.assign("WMMHAHZKURLIWKGVAHDODETYZHQYJZTQYIDKGLTEGRQBNERYJSPHAWVFXCIUDFFINXXFQKFJCNXASXODFZAPNESGOKNCBQSF");
    msg.custom.assign("BAMNZSTHJAIKZRKKAYAXHSQURMDKLBYGETONGXKDZYATGPMDYQYIIBYJCXVGFROMWHUMEOHQGPXHCFZNVFCOPCQLLNXLDUWPIQDTQFQOJESJQPOGPOWMCVJPTJVYJXLMUVV");

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
    msg.setTimeStamp(0.16846985939);
    msg.setSource(27259U);
    msg.setSourceEntity(202U);
    msg.setDestination(42035U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.873335113933;
    msg.lon = 0.962594256495;
    msg.speed = 0.639054446672;
    msg.speed_units = 134U;
    msg.limits = 97U;
    msg.max_depth = 0.453231774766;
    msg.min_alt = 0.321377127956;
    msg.time_limit = 0.630469308064;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.30842119017;
    tmp_msg_0.lon = 0.408562421733;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("OCPABDIHLHSWOUJWRFTTFYEJCBKMQUZLGXQKTJTXDCTGPLAASDPURGESQCSYAVUZFOZMPKKDSFGRFZVLGKUABTNXOXWCME");
    msg.custom.assign("ZTLFFVSSVZGPBRNWWZKOKURHVEW");

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
    msg.setTimeStamp(0.733093127787);
    msg.setSource(64005U);
    msg.setSourceEntity(90U);
    msg.setDestination(46985U);
    msg.setDestinationEntity(181U);
    msg.target.assign("YJHNIUIJGZMDQBIIMYRDVQFVSAGHWPDRHJPRNCALDODEZEUDHOHLHOVLIXEOGTDBFZTRKCLBMRZEPYXSFXIUVPMMEDGJRBOHZXZTXJQDYEZLBJYPPIZKQWCTNCOSFKRPRFVK");
    msg.max_speed = 0.0410531586021;
    msg.speed_units = 29U;
    msg.lat = 0.328304535462;
    msg.lon = 0.696423361564;
    msg.z = 0.142529016221;
    msg.z_units = 23U;
    msg.custom.assign("FYHFZQRAMTGMVDDBNJWFMZULUUXXXKPGIGJQBVJKOASXTJGEHLSFYNFEVULEPHYNWFLZQPZLIWPOAMBVGLSEIIUXTNTSXAKWOCAMOFNUQYDSXTUYKTZIGVKLRESZYAOQCYPWSERDTTGZBBYQHVYRIRECDEMDDPCCUNAQHXGIKQPEWVKWMQJHNLBOAFFCWIRRMGBWBKCTRZHHNJESMWZASQHPR");

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
    msg.setTimeStamp(0.00597690535084);
    msg.setSource(19550U);
    msg.setSourceEntity(87U);
    msg.setDestination(52141U);
    msg.setDestinationEntity(119U);
    msg.target.assign("PEIUWTUGZCNTELIPMEQDMAKNSPNHNMPXMVKXNDARYRMUXXPTGFTOUDYYKYWEKIKHFOXKAKBGQOMOBQJXSTKVROPALFRWIJPYILIBEMWCYUHARQIWLPJNXDEQDSGJCWCSGQCAFFULIDHVCWSQFQGTVZTLJAXZJNVFUCUYIHYNDBGOAOTVCOBJHRVMMWYOSHZHNJZJLQFGUBKSRHHDCORBAMSBSTFPZJARUEDXPLEENEIVVZDXCTBZZ");
    msg.max_speed = 0.0395407180573;
    msg.speed_units = 167U;
    msg.lat = 0.382676199707;
    msg.lon = 0.645610911188;
    msg.z = 0.235763953681;
    msg.z_units = 221U;
    msg.custom.assign("LWNAKMBBQADRSYGZNLMDKSVLTLXVYNWLSMYJZHNLUHQLLRCXOBNHDRAKRJMXIAEQGROXYGFEWPUOTZWOMVWQGVPIASMCXXCQQDBSCOUWXGKJDVF");

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
    msg.setTimeStamp(0.368903773279);
    msg.setSource(63608U);
    msg.setSourceEntity(175U);
    msg.setDestination(8396U);
    msg.setDestinationEntity(230U);
    msg.target.assign("CLAGHRDOCVMTBBYIHBPSEEDSHAKQHPUDUBXAYQSWAIMATQSZEUDSSFIQXUCJRCJCPRHHYXTZNVXEOVOETZETHFCTMKQWVJAZIUDBHBDVKRDYOLJOVUPFFKOIQLGLQQLIMPKDWWSRGOEXAAXRWJYTWLVPMNGWYBFWBKRGZZPZINQYJGPXJGVUCYHXLJUAIWSBDAVRPJLRKEPIEVUICBTFZHDCTCOMSKXJYENRGZFQNFNNWSGMUFTMLGO");
    msg.max_speed = 0.621219782724;
    msg.speed_units = 50U;
    msg.lat = 0.197097341351;
    msg.lon = 0.410731534607;
    msg.z = 0.437257143147;
    msg.z_units = 78U;
    msg.custom.assign("SACCKXASZYRIMMWSECULPNKTOYGZIO");

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
    msg.setTimeStamp(0.759629480811);
    msg.setSource(23467U);
    msg.setSourceEntity(158U);
    msg.setDestination(5480U);
    msg.setDestinationEntity(200U);
    msg.timeout = 52210U;
    msg.lat = 0.442578969818;
    msg.lon = 0.229365260727;
    msg.speed = 0.838916921502;
    msg.speed_units = 139U;
    msg.custom.assign("XBEJRCAMWTIFEODHGUXCVXQMSSZWCDAJQRONSFSHKIXPJHFLKUJXBTOLJNXRTDPXGRTYKYNIPCNTVUPNVYHJRQUMYSAIXETTYKZOBLUOIUHVVIZDMDHCWAZAAOICAAAKFXAGVQCBMIJQEMQRGQTYZGWFKBZLYDZDEEFNLWM");

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
    msg.setTimeStamp(0.0825910301389);
    msg.setSource(51183U);
    msg.setSourceEntity(113U);
    msg.setDestination(26304U);
    msg.setDestinationEntity(252U);
    msg.timeout = 1387U;
    msg.lat = 0.115164522637;
    msg.lon = 0.0649713956929;
    msg.speed = 0.0376896357715;
    msg.speed_units = 81U;
    msg.custom.assign("VZTIFDIXIRIHKDBGIYERROFKVJBKJHULSJEKDCWLUBWWU");

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
    msg.setTimeStamp(0.499659783992);
    msg.setSource(24098U);
    msg.setSourceEntity(138U);
    msg.setDestination(10496U);
    msg.setDestinationEntity(13U);
    msg.timeout = 61038U;
    msg.lat = 0.377255820634;
    msg.lon = 0.305441235537;
    msg.speed = 0.857170779187;
    msg.speed_units = 57U;
    msg.custom.assign("POHYXLEBMYUIVEYAYGMXJE");

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
    msg.setTimeStamp(0.743798431879);
    msg.setSource(40277U);
    msg.setSourceEntity(66U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.525973633988;
    msg.lon = 0.180218937089;
    msg.z = 0.719908548672;
    msg.z_units = 118U;
    msg.radius = 0.320774827179;
    msg.duration = 55240U;
    msg.speed = 0.0750926541459;
    msg.speed_units = 21U;
    msg.popup_period = 15926U;
    msg.popup_duration = 27729U;
    msg.flags = 216U;
    msg.custom.assign("UESWBBJRKZEZCMKTAFWZZZJGERAYFOULRRGDPIUWRKPDHMHMFMXGZAXAMIQQWNM");

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
    msg.setTimeStamp(0.67427550329);
    msg.setSource(36200U);
    msg.setSourceEntity(240U);
    msg.setDestination(58155U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.959462933653;
    msg.lon = 0.189419124818;
    msg.z = 0.868816990218;
    msg.z_units = 64U;
    msg.radius = 0.978338186176;
    msg.duration = 802U;
    msg.speed = 0.352540701156;
    msg.speed_units = 82U;
    msg.popup_period = 15549U;
    msg.popup_duration = 10710U;
    msg.flags = 250U;
    msg.custom.assign("FVAQVIYIIVPMDXLWJETRHXTDCPDYXJHVZLUSBJWFCEIYPORHXWFKLGVELTOMPOPUQOLIOYQLBZFAKTLXJPEWETCZFOQJTFRUBXANPADYKUADEUCASQCZJYMKIZIVGEDDWWTRCWMSACGKWUYHRXNEFONQZGAXHDN");

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
    msg.setTimeStamp(0.0604420527716);
    msg.setSource(27041U);
    msg.setSourceEntity(131U);
    msg.setDestination(28202U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.877643841804;
    msg.lon = 0.859360784403;
    msg.z = 0.425593754821;
    msg.z_units = 247U;
    msg.radius = 0.442443337635;
    msg.duration = 29768U;
    msg.speed = 0.0719624153752;
    msg.speed_units = 50U;
    msg.popup_period = 19405U;
    msg.popup_duration = 39276U;
    msg.flags = 148U;
    msg.custom.assign("TFTDRJWZUPSXMDEZSCMNLPZYVWBGHAOEIWJMUACGNBNCDBTEKNUASJQYSUIHSIRGKOTWQFYTFBKGFKQNHXBWAVPODDVYYMCSXOVGIFTRYYZKXRJBOHWNQAVKBAQESPCLEXVSWWHCPFIEKRQPKWKJVAYD");

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
    msg.setTimeStamp(0.412977458693);
    msg.setSource(61941U);
    msg.setSourceEntity(176U);
    msg.setDestination(60696U);
    msg.setDestinationEntity(244U);
    msg.timeout = 570U;
    msg.lat = 0.72222849873;
    msg.lon = 0.243115947265;
    msg.z = 0.0421071933061;
    msg.z_units = 88U;
    msg.speed = 0.752089996662;
    msg.speed_units = 231U;
    msg.roll = 0.00391526760108;
    msg.pitch = 0.110354482969;
    msg.yaw = 0.475742309778;
    msg.custom.assign("OSOISSCAZJWUOGXHUINVBAYDQGMJUNMZTPTVJKGMZFOZHANNVKWTJBYWMNQKRDOWXSLKYOVXVENZTCORBAMVDUIKQRBSUHFBULLYESDJBPYXHLFVGDMFELAWFMTSVLSDQWJUCFXIZOJKIKREERUFNVCBGYWBYHXGCGREFATAICKCUSKCYDWRAZCLDRYDMICVGWRTPIZPHQKTQPYXQZZNLLFQEFXSXLQHNOAWPPPBPGGHXIJHHRPDI");

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
    msg.setTimeStamp(0.923870729223);
    msg.setSource(45521U);
    msg.setSourceEntity(26U);
    msg.setDestination(13547U);
    msg.setDestinationEntity(216U);
    msg.timeout = 53041U;
    msg.lat = 0.286929118261;
    msg.lon = 0.443689690485;
    msg.z = 0.597216976944;
    msg.z_units = 228U;
    msg.speed = 0.429505478428;
    msg.speed_units = 75U;
    msg.roll = 0.276946480825;
    msg.pitch = 0.0415627045578;
    msg.yaw = 0.291108533912;
    msg.custom.assign("MDMDFUNJXXYXZSOOMJCKTYESRDXZVTVHWANUGYQIWCEHUTIQGTSSJNJQMBACJARGOYJOQBDLDEXWNGYFFLMIMLUTOHUGRWGVEIUXNHOTUSHLYDGFHKRBCZFFVQUPBKLXWZRSWKFXFRSPMJFKDDHPAHHNSQRMBPDBENAVVKKITG");

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
    msg.setTimeStamp(0.705735582171);
    msg.setSource(38262U);
    msg.setSourceEntity(127U);
    msg.setDestination(65345U);
    msg.setDestinationEntity(89U);
    msg.timeout = 35905U;
    msg.lat = 0.0646862522599;
    msg.lon = 0.165368353319;
    msg.z = 0.420274713164;
    msg.z_units = 69U;
    msg.speed = 0.177865578113;
    msg.speed_units = 146U;
    msg.roll = 0.180708235763;
    msg.pitch = 0.879672344752;
    msg.yaw = 0.258896868037;
    msg.custom.assign("ZPHDNEPQWWRTSNQSVYMTGZLFDPFIHSEFKROXBBEMCZKVZOGMQHVHELKZXDEDUKAWGDEZHRUJOMWZEPQQWLWRUYLODHLSCYIQXYLIPQMFWRAITXJVTFQDWEIOSCBRNLJPCSKYVMPOTNYCIVUVYIGJQLIGUCBIGAGYCBJBZFRJAFDCHNJSGNGXEKIUUERHASXLUWTXNKTZBPCXNUOKHOSSPNRKFKBWLTDOVFPTJMZDAYNFB");

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
    msg.setTimeStamp(0.276096632422);
    msg.setSource(36197U);
    msg.setSourceEntity(151U);
    msg.setDestination(26409U);
    msg.setDestinationEntity(113U);
    msg.timeout = 51533U;
    msg.lat = 0.404843121565;
    msg.lon = 0.405915649035;
    msg.z = 0.269043127878;
    msg.z_units = 107U;
    msg.speed = 0.267990407602;
    msg.speed_units = 144U;
    msg.bearing = 0.269143351007;
    msg.width = 0.655296197196;
    msg.direction = 5U;
    msg.custom.assign("DCMMCWIRHLJLPDBVNAKUNKQKQHJTFOKKBBTUAVGEYSZUCTVOUOFFIMRCBVSWJYXRCFKQRTHWWYYOVVZNFFGBASWDNCBBPQDRNVWHDANAGTLQEBCYQXBSCGPUVZMMMPIEFVAFZAXEJKXPMJZEQMSLGJULIEXTIOBSEGKYHTPLDXPFKUGNJWJ");

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
    msg.setTimeStamp(0.404518122117);
    msg.setSource(63494U);
    msg.setSourceEntity(233U);
    msg.setDestination(57113U);
    msg.setDestinationEntity(7U);
    msg.timeout = 18390U;
    msg.lat = 0.319404497549;
    msg.lon = 0.0212383956496;
    msg.z = 0.570201717922;
    msg.z_units = 197U;
    msg.speed = 0.523473499705;
    msg.speed_units = 3U;
    msg.bearing = 0.592645889708;
    msg.width = 0.418034871825;
    msg.direction = 107U;
    msg.custom.assign("HLEBBVZALBCRFCWXPQOSJYHHNZSQIYBJVNEMAGCDUEWLNFMYVFDGVXDWZUAKYZIOGLWXNRPDQYQMMUNVTOPDEXQCJXOGLRV");

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
    msg.setTimeStamp(0.300322395111);
    msg.setSource(63392U);
    msg.setSourceEntity(27U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(132U);
    msg.timeout = 50860U;
    msg.lat = 0.706130948692;
    msg.lon = 0.948836060714;
    msg.z = 0.945280382097;
    msg.z_units = 78U;
    msg.speed = 0.300620799338;
    msg.speed_units = 50U;
    msg.bearing = 0.371384300648;
    msg.width = 0.915426526316;
    msg.direction = 11U;
    msg.custom.assign("UXMVFQSPYMYNKJZZUYIWIXNJUXBGLHTEWIAYITXWPBOWJOKRDEENOEBAMIPTKTJKAZNENFIYZCZ");

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
    msg.setTimeStamp(0.0119632453861);
    msg.setSource(56268U);
    msg.setSourceEntity(65U);
    msg.setDestination(59722U);
    msg.setDestinationEntity(71U);
    msg.op_mode = 125U;
    msg.error_count = 14U;
    msg.error_ents.assign("YSTSPWEROXZAAAOUMZQZUVBEXOQSPVWWVHABOJKEVYJVAKHDTUIJCIGUKKWPLQKDNSYDGEOLYFTINBNICDJNPSPLHMMELCWDJORBYQSRIKRBIUGNTPKXTDDLRFBUBQXGYWCWLKFVSUWWCYXZLDTMFZSEXWMGKVJFXHYBQIPOUALPMYANIHZXONMRGZRBOLGJCUFJOQJGCYSCQAZLMIEVQTFZDX");
    msg.maneuver_type = 28458U;
    msg.maneuver_stime = 0.410337318673;
    msg.maneuver_eta = 3426U;
    msg.control_loops = 614502498U;
    msg.flags = 151U;
    msg.last_error.assign("IYKSIEEBZYSKHJWQRFRDLDUSJMYHLLRIMSXQLJASZQAWGZWGJPZTWCJYNNCDZPEDAFXDPKRKWUCEVNXXOTYKTGZUEFBZYABAHOKOFWURQEWTCSYHMLMGHEUDJODIATBQAWHPGPQKRRVTLSOTGEMMGRDPAVPOA");
    msg.last_error_time = 0.463459529727;

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
    msg.setTimeStamp(0.832374290126);
    msg.setSource(7442U);
    msg.setSourceEntity(47U);
    msg.setDestination(27381U);
    msg.setDestinationEntity(127U);
    msg.op_mode = 54U;
    msg.error_count = 215U;
    msg.error_ents.assign("ZALPAUKGPEBMBQNSAONMWFZOOIRHRHMHBDBHQFKDABJUZGYZBCYVCGRPFQHATXDCJZSQZXYFREWAQVKJCLYWXTMDOMQEXUJXDCSYMHFUYCGEESINMRJFSLRDKPWNWIXUFJFHGNPLEULOGYBNTLYVTPUDADCNV");
    msg.maneuver_type = 36916U;
    msg.maneuver_stime = 0.627711131732;
    msg.maneuver_eta = 63694U;
    msg.control_loops = 1620440503U;
    msg.flags = 189U;
    msg.last_error.assign("XYWDVELIPNIK");
    msg.last_error_time = 0.872884760037;

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
    msg.setTimeStamp(0.426537153338);
    msg.setSource(24463U);
    msg.setSourceEntity(253U);
    msg.setDestination(13472U);
    msg.setDestinationEntity(177U);
    msg.op_mode = 112U;
    msg.error_count = 145U;
    msg.error_ents.assign("IZOSCSFRYGQNCAMNJNQVKCPBVSIULSESKJXIQXOJNJBGOBWTKZRFAKICOTJNZKNTUQOODRWLURXVAJJQOEPKUZEHCTFRBARUMRFBDDFHMSHXIGYIGLHDIBMNIVELCUOZMKFXTXAGBVFDPPWVWOPASAYGDLRQOYWYCJLALXHVKESFPTCPFHDPQYBBWQHYZGYBEJAHMHVIPFYEDGWUTUWMUSWVVQLYHQTLENRCEGMDNDETWTUIRNLXZXSA");
    msg.maneuver_type = 6805U;
    msg.maneuver_stime = 0.171484886325;
    msg.maneuver_eta = 52417U;
    msg.control_loops = 2220983625U;
    msg.flags = 205U;
    msg.last_error.assign("GJITJAUSKIVRNCNCVHFPVEXTLBGPIOCFJGVKKBROQDIHEYAQIXVDUJOQJCWAS");
    msg.last_error_time = 0.144787736259;

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
    msg.setTimeStamp(0.958438066409);
    msg.setSource(52617U);
    msg.setSourceEntity(200U);
    msg.setDestination(31845U);
    msg.setDestinationEntity(15U);
    msg.type = 167U;
    msg.request_id = 45618U;
    msg.command = 126U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 18264U;
    tmp_msg_0.lat = 0.593023670289;
    tmp_msg_0.lon = 0.943468486353;
    tmp_msg_0.z = 0.519803678164;
    tmp_msg_0.z_units = 98U;
    tmp_msg_0.duration = 56966U;
    tmp_msg_0.speed = 0.109655836486;
    tmp_msg_0.speed_units = 120U;
    tmp_msg_0.type = 207U;
    tmp_msg_0.radius = 0.616761108314;
    tmp_msg_0.length = 0.575556646869;
    tmp_msg_0.bearing = 0.89150098986;
    tmp_msg_0.direction = 30U;
    tmp_msg_0.custom.assign("SOVERUOOGJKCLIGIUDRKITWKHLBMCIYFPEPCZNZNBNENRFCDEURBPHIVEEPDW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47292U;
    msg.info.assign("AJLPJWJXYKQMABHEIGSIKZVJCVYVBPAIFSTHUTPUVZJUTTWVYIGTKBFOCQWLWGTNMOEHRRZZFGKHYCJOCPYXNPCZYPQIQQMDOKXHFYMOUXRSHRMXEMORBXXDFAYPMLDNNOPZGENNUDZSFRCXSRTLLQIGWKAVVRLQSJHSWAFHBBNCUUZCFDWEAELYIBURXOTBZWDBKQDEVS");

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
    msg.setTimeStamp(0.55858739078);
    msg.setSource(27123U);
    msg.setSourceEntity(243U);
    msg.setDestination(22657U);
    msg.setDestinationEntity(147U);
    msg.type = 15U;
    msg.request_id = 14019U;
    msg.command = 244U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 62417U;
    tmp_msg_0.lat = 0.651358815256;
    tmp_msg_0.lon = 0.781674972561;
    tmp_msg_0.z = 0.389163466486;
    tmp_msg_0.z_units = 108U;
    tmp_msg_0.speed = 0.867644189981;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.syringe0 = 207U;
    tmp_msg_0.syringe1 = 6U;
    tmp_msg_0.syringe2 = 118U;
    tmp_msg_0.custom.assign("RSRMKWIQWPVUAVFCVGHXCDRHGFYTZNIZOXDEIIHMRJEMWEQAJGRLWOFBTUXOVWYFNNVNECEFTJLZLOLXVAMFFZMXFULWTQDCXGAHQKYOUQESIHLSINUTMDJZAEVYPBUOPKDRCPCIGJKDGSVLWBZCLIQFAJMMEJKXMRTHOKRSZUDALZBYPVWUMOTDTTGNCXBHPZXYVHAKKAKKTBIBQNBBGQQOYH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 65446U;
    msg.info.assign("TFBBCADZRZTYGOLTNYRSXMGGXLJIDUBPSALJFYGMOGCIUXWVOFNOCMNFADVAPTEHGANRQKYQLIWVRVDLHOIEPOSXLQYJFDZWDEAXWOGMIQRAMRSONQPKDTIBDCITJEHUGFXKUKUMWFYCQYJWANZYFQHPIJHEXNIGCMMMJTUYZZVNZTQKZNBBESRCBUZWUSHAEEUYXOJQPRVGJPIHBFFSNUHVLXLKBLOV");

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
    msg.setTimeStamp(0.126242110728);
    msg.setSource(37360U);
    msg.setSourceEntity(51U);
    msg.setDestination(41338U);
    msg.setDestinationEntity(119U);
    msg.type = 198U;
    msg.request_id = 42769U;
    msg.command = 80U;
    IMC::BottomUpSearch tmp_msg_0;
    tmp_msg_0.timeout = 12339U;
    tmp_msg_0.lat = 0.235816650188;
    tmp_msg_0.lon = 0.531525469513;
    tmp_msg_0.z = 0.925843031452;
    tmp_msg_0.z_units = 154U;
    tmp_msg_0.speed = 0.412261057026;
    tmp_msg_0.speed_units = 39U;
    tmp_msg_0.roll = 0.12669611746;
    tmp_msg_0.pitch = 0.937565886167;
    tmp_msg_0.yaw = 0.507783248064;
    tmp_msg_0.custom.assign("METTHPGFNLHHZUKVXVSPUXOFHIHQNLHQKVAWDYWIJWJYAJSQAWMUBOAPRUFGRCNRUTQDKPEMOKCRHEEFSEVUBZJIVLYYDVGMVBOOBWTOVIUIMUGCXBNSXMRGQJMIWEHBXGRGQPAPXCLVXTDZECSHXQAFSLZNGKPURWQEXILFTFFEKOAHFJOKWNCSLNSZTCRIDZWBOTARQGAD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47518U;
    msg.info.assign("DWUTTUOQLAGJNWRQDGCVBSHRBCFNLXAVENGLKRBUPJTXORONIQPAOZPXMATDIYNAKBDGATHEHWLSQLIYCULYQCOPWEBVJHHDJHNPMWFMGYUIGTBCVPTURDXDNKMGMJYOKAEGXHCXOFPNZVJVJSGEIMVWCAACUZSXWAJVYWUFEXGQSNYYKQIMLBERVMSZHIPUKKRZXFTBZNBXERSCSFDPIMRYJCWJZKIPSTYMOLZEOITFKWOKFSQHZFLRD");

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
    msg.setTimeStamp(0.991701125374);
    msg.setSource(817U);
    msg.setSourceEntity(12U);
    msg.setDestination(62135U);
    msg.setDestinationEntity(249U);
    msg.command = 252U;
    msg.entities.assign("RFOLOVHQXWUPAIGQGZEQLJWADSFYZRTLPQKURXHIREYNOHGMEMWYTLXIDRTLSPQPCCBWPFQHXUABUEBSXHIAZVWMHFDOJWJUWJKQXDICZDLDPGERCMUMHNFTJEKSNYAOQE");

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
    msg.setTimeStamp(0.896171003083);
    msg.setSource(18328U);
    msg.setSourceEntity(134U);
    msg.setDestination(65278U);
    msg.setDestinationEntity(67U);
    msg.command = 85U;
    msg.entities.assign("QTDGNINMQHDUKJSUQUZMEFKJSOVWMEKOXHZVSLXVWKGNJELFCYSUQRHRZBXXOPSYGBIBDLJUEKIOCRHNKPKNYHYNSBTZFFRZXCZTAFPMKSVDBIIAXYEFNMFTALWWREXAGMWDVOHWRZALAOTCVMYYVIZGLFPGYCOPBIQDUQHEBELGPGMJAOTYGCBQRIEDDZU");

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
    msg.setTimeStamp(0.788251961816);
    msg.setSource(31692U);
    msg.setSourceEntity(211U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(143U);
    msg.command = 26U;
    msg.entities.assign("PJAZTYPMIIDSSUAHETDFSOZMZYXDJKR");

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
    msg.setTimeStamp(0.191399923775);
    msg.setSource(29189U);
    msg.setSourceEntity(153U);
    msg.setDestination(4844U);
    msg.setDestinationEntity(174U);
    msg.mcount = 217U;
    msg.mnames.assign("WGLJZUYHYLPOZCBAIESBJFXKMOEAXJEWWALJEKRUNBXYSVOEOGOWRD");
    msg.ecount = 136U;
    msg.enames.assign("FVSVYICRHXIAPQKDWVDJZZOGAUZCAORRSGZPKHHMVMXMFRCNKMCBSNVAN");
    msg.ccount = 60U;
    msg.cnames.assign("EIFLMACGMVSTWRCKWIIKAXXSAFDMJCEHZEVIJTVRKIIZ");
    msg.last_error.assign("BAPGVNLBTFIDWUEEQNIOLOQAOHYZAFWMZJXTGYSYUGKDPXIHDGRDJBTUFKGGUMTRJEVSSQNGVGMJNMWLMOXOKOWXEHCXVFLYWGLMSYNJFZN");
    msg.last_error_time = 0.550286385997;

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
    msg.setTimeStamp(0.239412214118);
    msg.setSource(44156U);
    msg.setSourceEntity(11U);
    msg.setDestination(28569U);
    msg.setDestinationEntity(135U);
    msg.mcount = 229U;
    msg.mnames.assign("ISJMKZYLWMUBNAFOXAVCLSUDDJQISVJKPSGTO");
    msg.ecount = 165U;
    msg.enames.assign("LPTEHWSVLFEHDV");
    msg.ccount = 5U;
    msg.cnames.assign("FMQLMPEIOGLDLJGMXQJTDVNFOWUCIFTRENHHBDTWENCGRSUAYESTATHKJCBCMLOTDSCIEHCVJGMRHIFBNMSLQCXQOODPX");
    msg.last_error.assign("SAVZRDXYTMDLGUWPCIZBLDZJGAFDXPPGMYKUKMIOMYYOVUENDAFVUUHDEQIISUMOATG");
    msg.last_error_time = 0.442292607191;

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
    msg.setTimeStamp(0.89489290917);
    msg.setSource(32154U);
    msg.setSourceEntity(239U);
    msg.setDestination(57156U);
    msg.setDestinationEntity(197U);
    msg.mcount = 136U;
    msg.mnames.assign("VZVNUMHABJL");
    msg.ecount = 147U;
    msg.enames.assign("EWUQCYEAEBUEXUNPWBRWXAOEMDZVGFVJFVBGCUOGMMZAQBKSOKQBYSIKKZVILNRWOLRLUWIOGNO");
    msg.ccount = 100U;
    msg.cnames.assign("FHJOPKDAGBHTPFYXEOLMIDHZJSQFUESUXVYBIQFQHUASNVNAZWXIGUNTLEJMBFTULUYMUXAETBFSRTPDKGMCDLCCJHBRGUMMVRCYXXRCJWXDSTZRVOYBIJERKDPQVWBIWGNPFYZULHOUZDYIVGSKRAOACCXNCMOOSBYLZEKEIE");
    msg.last_error.assign("VMOAONKNSVPOZQXFZYBAQTYDBSNUTTZQSCPAJMKUGVDZXMKUFLFIFAMYKMNUECFQIUOBGGYXDBRHHHCGVWOVHPUCJXKYKWJXDMRDRLZQQEQJRWFPYRLSQPQJTIKOSRUAZPBYOWPZM");
    msg.last_error_time = 0.890346248242;

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
    msg.setTimeStamp(0.1487528429);
    msg.setSource(39760U);
    msg.setSourceEntity(222U);
    msg.setDestination(30328U);
    msg.setDestinationEntity(38U);
    msg.mask = 9U;
    msg.max_depth = 0.157329180214;
    msg.min_altitude = 0.636201232866;
    msg.max_altitude = 0.493938642115;
    msg.min_speed = 0.335444566913;
    msg.max_speed = 0.0926103884868;
    msg.max_vrate = 0.228014417846;
    msg.lat = 0.885238190778;
    msg.lon = 0.634955350752;
    msg.orientation = 0.545561744454;
    msg.width = 0.547985303318;
    msg.length = 0.836187593593;

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
    msg.setTimeStamp(0.578738436388);
    msg.setSource(19106U);
    msg.setSourceEntity(215U);
    msg.setDestination(58946U);
    msg.setDestinationEntity(49U);
    msg.mask = 175U;
    msg.max_depth = 0.689753425322;
    msg.min_altitude = 0.39047744933;
    msg.max_altitude = 0.13724730967;
    msg.min_speed = 0.914314410834;
    msg.max_speed = 0.253447697894;
    msg.max_vrate = 0.183555171739;
    msg.lat = 0.105425664291;
    msg.lon = 0.136824804352;
    msg.orientation = 0.377388557415;
    msg.width = 0.0652929588606;
    msg.length = 0.576640032417;

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
    msg.setTimeStamp(0.151120827552);
    msg.setSource(35176U);
    msg.setSourceEntity(92U);
    msg.setDestination(42012U);
    msg.setDestinationEntity(32U);
    msg.mask = 100U;
    msg.max_depth = 0.857963018252;
    msg.min_altitude = 0.500274439823;
    msg.max_altitude = 0.839692664735;
    msg.min_speed = 0.514617677074;
    msg.max_speed = 0.617848798945;
    msg.max_vrate = 0.960029649903;
    msg.lat = 0.774996800309;
    msg.lon = 0.722982003993;
    msg.orientation = 0.271400941709;
    msg.width = 0.00733716355891;
    msg.length = 0.389506200361;

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
    msg.setTimeStamp(0.620848594382);
    msg.setSource(62232U);
    msg.setSourceEntity(36U);
    msg.setDestination(35817U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.321233236963);
    msg.setSource(55901U);
    msg.setSourceEntity(182U);
    msg.setDestination(48919U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.420710487844);
    msg.setSource(28631U);
    msg.setSourceEntity(145U);
    msg.setDestination(3856U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.511252845177);
    msg.setSource(44000U);
    msg.setSourceEntity(124U);
    msg.setDestination(18051U);
    msg.setDestinationEntity(45U);
    msg.duration = 49784U;

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
    msg.setTimeStamp(0.130387467558);
    msg.setSource(15363U);
    msg.setSourceEntity(4U);
    msg.setDestination(25101U);
    msg.setDestinationEntity(62U);
    msg.duration = 19308U;

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
    msg.setTimeStamp(0.0525429578896);
    msg.setSource(4606U);
    msg.setSourceEntity(171U);
    msg.setDestination(33157U);
    msg.setDestinationEntity(46U);
    msg.duration = 4969U;

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
    msg.setTimeStamp(0.509272376356);
    msg.setSource(44584U);
    msg.setSourceEntity(233U);
    msg.setDestination(50413U);
    msg.setDestinationEntity(59U);
    msg.enable = 157U;
    msg.mask = 1817264741U;
    msg.scope_ref = 2319602510U;

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
    msg.setTimeStamp(0.580986718929);
    msg.setSource(39899U);
    msg.setSourceEntity(60U);
    msg.setDestination(56465U);
    msg.setDestinationEntity(182U);
    msg.enable = 185U;
    msg.mask = 2342809190U;
    msg.scope_ref = 2867487764U;

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
    msg.setTimeStamp(0.306314482091);
    msg.setSource(17331U);
    msg.setSourceEntity(24U);
    msg.setDestination(42513U);
    msg.setDestinationEntity(52U);
    msg.enable = 116U;
    msg.mask = 4282703564U;
    msg.scope_ref = 2918110071U;

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
    msg.setTimeStamp(0.823752041391);
    msg.setSource(30411U);
    msg.setSourceEntity(45U);
    msg.setDestination(16390U);
    msg.setDestinationEntity(157U);
    msg.medium = 59U;

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
    msg.setTimeStamp(0.773390582088);
    msg.setSource(13002U);
    msg.setSourceEntity(157U);
    msg.setDestination(47549U);
    msg.setDestinationEntity(229U);
    msg.medium = 46U;

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
    msg.setTimeStamp(0.970401612796);
    msg.setSource(20960U);
    msg.setSourceEntity(127U);
    msg.setDestination(204U);
    msg.setDestinationEntity(243U);
    msg.medium = 162U;

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
    msg.setTimeStamp(0.784140811892);
    msg.setSource(36398U);
    msg.setSourceEntity(160U);
    msg.setDestination(18227U);
    msg.setDestinationEntity(44U);
    msg.value = 0.858252675569;
    msg.type = 196U;

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
    msg.setTimeStamp(0.194562056384);
    msg.setSource(61284U);
    msg.setSourceEntity(162U);
    msg.setDestination(32065U);
    msg.setDestinationEntity(69U);
    msg.value = 0.902835363372;
    msg.type = 232U;

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
    msg.setTimeStamp(0.188910640202);
    msg.setSource(2095U);
    msg.setSourceEntity(214U);
    msg.setDestination(32149U);
    msg.setDestinationEntity(178U);
    msg.value = 0.0868694495529;
    msg.type = 100U;

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
    msg.setTimeStamp(0.723277936305);
    msg.setSource(38954U);
    msg.setSourceEntity(229U);
    msg.setDestination(20917U);
    msg.setDestinationEntity(159U);
    msg.possimerr = 0.738431192583;
    msg.converg = 0.167002098411;
    msg.turbulence = 0.133217575981;
    msg.possimmon = 115U;
    msg.commmon = 46U;
    msg.convergmon = 99U;

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
    msg.setTimeStamp(0.608052256167);
    msg.setSource(10449U);
    msg.setSourceEntity(162U);
    msg.setDestination(61946U);
    msg.setDestinationEntity(176U);
    msg.possimerr = 0.281361440759;
    msg.converg = 0.381402405413;
    msg.turbulence = 0.216099791755;
    msg.possimmon = 123U;
    msg.commmon = 11U;
    msg.convergmon = 25U;

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
    msg.setTimeStamp(0.169287799179);
    msg.setSource(38030U);
    msg.setSourceEntity(89U);
    msg.setDestination(908U);
    msg.setDestinationEntity(110U);
    msg.possimerr = 0.98106958246;
    msg.converg = 0.741396455907;
    msg.turbulence = 0.807330026983;
    msg.possimmon = 106U;
    msg.commmon = 158U;
    msg.convergmon = 56U;

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
    msg.setTimeStamp(0.370997488527);
    msg.setSource(34354U);
    msg.setSourceEntity(160U);
    msg.setDestination(43178U);
    msg.setDestinationEntity(238U);
    msg.autonomy = 231U;
    msg.mode.assign("NLRDCZFPXFQWCOSUQRICEJMMPCJNPBRSKNIHALRXWKQWDLSSNUTYCMISOOQCIQEVYVAJJUZVQGTDTVWHTVIAJLLKZXHYQDEIJRPOOSMAYJLPLSBHKMZPQVYPEUOYRETAKZANDXGHGGXOYMOMKNPVTFKBFZ");

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
    msg.setTimeStamp(0.928301019384);
    msg.setSource(16265U);
    msg.setSourceEntity(8U);
    msg.setDestination(1903U);
    msg.setDestinationEntity(104U);
    msg.autonomy = 53U;
    msg.mode.assign("GFVIKGVHCHLFZEUOLJBHJNSLTSCQACKVVQCOPGWPTARYETMSUUSBWMIIJRFGLWOWAHHFTDVTWDLMJZEDHJNVVOMGUKEUROIIBUIZRZXCXLKHYCMBFBFAOABENNQYISGNUQOCSDXZRCRIOKSE");

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
    msg.setTimeStamp(0.328551058228);
    msg.setSource(6038U);
    msg.setSourceEntity(93U);
    msg.setDestination(44183U);
    msg.setDestinationEntity(249U);
    msg.autonomy = 98U;
    msg.mode.assign("LDXUTFFRBAQIGKARMOHQTGZKZUWW");

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
    msg.setTimeStamp(0.254161013495);
    msg.setSource(20785U);
    msg.setSourceEntity(9U);
    msg.setDestination(26347U);
    msg.setDestinationEntity(83U);
    msg.type = 64U;
    msg.op = 166U;
    msg.possimerr = 0.153629883915;
    msg.converg = 0.438735491377;
    msg.turbulence = 0.415789071264;
    msg.possimmon = 125U;
    msg.commmon = 118U;
    msg.convergmon = 155U;

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
    msg.setTimeStamp(0.899201465921);
    msg.setSource(53237U);
    msg.setSourceEntity(172U);
    msg.setDestination(8951U);
    msg.setDestinationEntity(148U);
    msg.type = 171U;
    msg.op = 226U;
    msg.possimerr = 0.896852053738;
    msg.converg = 0.0625220386829;
    msg.turbulence = 0.0476043351417;
    msg.possimmon = 46U;
    msg.commmon = 199U;
    msg.convergmon = 127U;

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
    msg.setTimeStamp(0.344091899607);
    msg.setSource(48175U);
    msg.setSourceEntity(185U);
    msg.setDestination(37972U);
    msg.setDestinationEntity(172U);
    msg.type = 16U;
    msg.op = 24U;
    msg.possimerr = 0.65067577099;
    msg.converg = 0.936203795683;
    msg.turbulence = 0.918323000253;
    msg.possimmon = 238U;
    msg.commmon = 125U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.411202593303);
    msg.setSource(22835U);
    msg.setSourceEntity(254U);
    msg.setDestination(11045U);
    msg.setDestinationEntity(165U);
    msg.op = 17U;
    msg.comm_interface = 244U;
    msg.period = 12782U;
    msg.sys_dst.assign("RHBNRMMRCUJXKLQJXMIKWIIQISVTVJIFKHQNEXXYLPPDPBUZEXRGOGFNVBUIOBGZHWHRMZSVZQYTPIDDRACUMTNR");

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
    msg.setTimeStamp(0.884878522664);
    msg.setSource(18136U);
    msg.setSourceEntity(158U);
    msg.setDestination(11211U);
    msg.setDestinationEntity(242U);
    msg.op = 194U;
    msg.comm_interface = 16U;
    msg.period = 7517U;
    msg.sys_dst.assign("CPHBHXIGFRWNLHNGFFVODERZKQYN");

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
    msg.setTimeStamp(0.264897734533);
    msg.setSource(6494U);
    msg.setSourceEntity(56U);
    msg.setDestination(20531U);
    msg.setDestinationEntity(144U);
    msg.op = 42U;
    msg.comm_interface = 159U;
    msg.period = 19196U;
    msg.sys_dst.assign("DHHBXQLOAKAKOYUNFSEKWRXLLPNFWCHNLCRFVCMBSYIRCHKBVQDFZMYENVGKOTBWGOUCNLXANIFIMHZKUJTPGEDSZF");

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
    msg.setTimeStamp(0.83260042022);
    msg.setSource(59429U);
    msg.setSourceEntity(42U);
    msg.setDestination(4850U);
    msg.setDestinationEntity(19U);
    msg.stime = 615305455U;
    msg.latitude = 0.106252502036;
    msg.longitude = 0.923046371914;
    msg.altitude = 21056U;
    msg.depth = 38726U;
    msg.heading = 59298U;
    msg.speed = 11570;
    msg.fuel = 97;
    msg.exec_state = -49;
    msg.plan_checksum = 7345U;

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
    msg.setTimeStamp(0.407091809526);
    msg.setSource(23523U);
    msg.setSourceEntity(210U);
    msg.setDestination(18845U);
    msg.setDestinationEntity(213U);
    msg.stime = 3068440822U;
    msg.latitude = 0.474289284994;
    msg.longitude = 0.202591101356;
    msg.altitude = 3768U;
    msg.depth = 59105U;
    msg.heading = 13841U;
    msg.speed = 20032;
    msg.fuel = 22;
    msg.exec_state = 98;
    msg.plan_checksum = 40514U;

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
    msg.setTimeStamp(0.5079498526);
    msg.setSource(52310U);
    msg.setSourceEntity(194U);
    msg.setDestination(32414U);
    msg.setDestinationEntity(41U);
    msg.stime = 1004024590U;
    msg.latitude = 0.87725772161;
    msg.longitude = 0.818183933687;
    msg.altitude = 58337U;
    msg.depth = 48014U;
    msg.heading = 42467U;
    msg.speed = -1440;
    msg.fuel = 66;
    msg.exec_state = 63;
    msg.plan_checksum = 35099U;

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
    msg.setTimeStamp(0.401788628259);
    msg.setSource(19401U);
    msg.setSourceEntity(9U);
    msg.setDestination(42267U);
    msg.setDestinationEntity(103U);
    msg.req_id = 40294U;
    msg.comm_mean = 188U;
    msg.destination.assign("EUTIJVJNWEJXTJDRIAZPQILJKUAFTHNTZBCFMMTAMUQABTQGDARQQKFHWPDGLUDCBZNSYZHKSXDPSCSWKKIHLEPKPMBMQGQIKXOXEGHFOFZURDNJGRMAPYTHNOWLESLYUKGRXIHRLOJAOGYCRIOMYKXRNBDFRSZDQDQ");
    msg.deadline = 0.343132714262;
    msg.range = 0.510208400086;
    msg.data_mode = 115U;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.903120580674;
    tmp_msg_0.v = 0.198559925204;
    tmp_msg_0.w = 0.738223246844;
    tmp_msg_0.p = 0.281868123616;
    tmp_msg_0.q = 0.236301993783;
    tmp_msg_0.r = 0.316967045375;
    tmp_msg_0.flags = 87U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SFZDSXYJTMLRLPIWLKFAQKUNFMWCBKAXZNXKHGFNXMQVQBENFVMUGEEISDCEAFNYRGSSVMMICWBYIIPWNDHZRDBDZPPWITLNP");
    const char tmp_msg_1[] = {117, 109, 20, -56, 75, -31, 103, 53, -13, 104, -55, 42, -27, -100, 57, 35, -100, 38, -37, 27, 69, 68, -104, 12, -99, 7, -83, -84, 86, 54, -83, -79, 57, 110, -100, -105, -85, 49, 94, -115, 0, -38, 6, -54, -32, -47, 89, -95, 77, -116, -5, -116, -96, -23, -51, 86, -92, 103, -125, 73, -116, -27, 88, 38, 21, 42, 13, 20, -11, 31, 58, -11, -73, -45, -51, -72, 60, -87, 101, 71, -2, 9, 34, -116, -47, -97, -66, 72, 51, -116, -108, 125, 103, -113, -65, 122, -25, 77, 88, 69, -115, 71, -83, -124, 36, 109, 107, 105, -127, 50, 4, -88, 30, -104, 52, -22, -27, 104, 10, 104, 101, -23, -80, -11, 60, -110, 92, -115, -54, -34, -25, 38, -45, -121, 16, -64, 10, -89, -42, 105};
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
    msg.setTimeStamp(0.589074982736);
    msg.setSource(62915U);
    msg.setSourceEntity(100U);
    msg.setDestination(7144U);
    msg.setDestinationEntity(16U);
    msg.req_id = 13084U;
    msg.comm_mean = 25U;
    msg.destination.assign("JOAETSXQIZZCYWZQIYPEHQTXMYLYOZXMNFGPGBNHQKCOBNIBAGDMLCDCOGKINVYPSJUGKMFVOZFPDWXSRFWKVKVOSTOXOWVPGDHHADMIWMVKTOPFFKDBIRNIFEPNAFUCGTXHHUFECVLIHTEACPQALRMGXRYTPMVQUZQWULJIMJNJJWEQROQUYWXALGESXZUFCNHLXBYKRSWLCACSDDAPZRSYJKBEWBTSAEVJDQHVRMGNJIJDNBBYHUUUEZLBTR");
    msg.deadline = 0.837280461454;
    msg.range = 0.867633811779;
    msg.data_mode = 89U;
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.548822333048;
    tmp_msg_0.aoa = 0.852986728945;
    tmp_msg_0.ssa = 0.201462992433;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OCLBGXZAFJGZOFJFPFVCQBBQYLGXKCVCBDVNHUFKYKSKXTRJAOINVYOEKHLLIUVFTKBNLRGBRRNHBCPIGTPJMATRYYOKUPUWFSRYREWQQIMHWPPDSDWQWKANHTCEVILQDCENNHQHVINAWOAOLGWJXZUSDEDRGVLZXDNEAJBXWYSZFAZZUUGOKDCPXHJYMMBTWPZTSGAGQIIYUO");
    const char tmp_msg_1[] = {-104, 37, 22, -101, 81, 69, -36, 46, -32, -39, 95, -10, -106, 103, -52, -121, 52, -3, -21, -128, -81, 87, 3, 54, -96, 8, -125, -72, -92, 35, 120, 91, -20, 18, -14, -108, -23, 53, -115, -78, -120, 4, 2, 58, -117, -36, 90, 54, -116, -107, 51, -86, 71, -124, 106, -61, -56, 120, 111, -44, 53, -10, -56, 1, 57, -41, 52, 79, 78, 61, -100, -51, -97, 124, 69, -94, 74, 84, 44, -58, -45, -47, -121, -16, 35, -5, 107, -7, -123, 56, 46, 92, -50, 69, -7, -25, 31, 4, 10, -93, 119, 113, 89, -52, 74, -127, 18, -77, -47, 91, -1, 25, -116, 122, 102, -87, -80, -29, -63, -118, 6, 12, -101, 97, -27, 35, -12, 113, 87, 39, 51, 11, -69, -68, -54, -2, 104, 32, -95, 75, -67, 29, -8, 12, -59, 104, -75, 86, -55, 50, 88, -72, 4, -90, -10, -34, -34, -49, 110, 92, -64};
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
    msg.setTimeStamp(0.298955394181);
    msg.setSource(51780U);
    msg.setSourceEntity(214U);
    msg.setDestination(43332U);
    msg.setDestinationEntity(43U);
    msg.req_id = 8631U;
    msg.comm_mean = 139U;
    msg.destination.assign("ZPKOMIZJQLLDHKTSWGMUHKCODSOWXIUHFHJEFMHKFRUUVAVNOLVRQYFQBWGNJPGBWZCUXANFXDYSPXTTHMPRRXLSVZIIKBVRNAEZQPGRQATCDBXBJCWEWRTAOAMBTMFPQEJXHMVSLDKNTUYFSRHRYGOLYMIQYBDZVWWDZDZLKZAKYULVOCEPNMWLLIYYJUCACKIFPGGQFIJXTUIYCEGACWNEJPOH");
    msg.deadline = 0.952460748544;
    msg.range = 0.258398362422;
    msg.data_mode = 117U;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.464841548873;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MMDLRPFVNTMJGQQWUORVKZODACTBWDZKAPPMMQUYSYZIZLFSVIVXVAGZRUECHGFGIFXCES");
    const char tmp_msg_1[] = {-118, -13, -25, -83, 81, -98, 13, -46, 101, -20, -86, 23, 79, 10, 7, -19, -49, 80, -9, -19, 82, 92, -41, 15, 69, -117, -64, -32, 99, 3, -57, 103, -106, 97, -93, -43, -119, 47, 59, 70, 20, 52, -3, -98, 40, 118, -125, 55, -103, -22, 26, 60, 43, -75, -67, 13, 122, -19, 82, -119, 90, 59, -20, -49, 98, -71, -23, 39, 110, 41, -48, -91, -8, -21, 72, 56, 25, 11, -48, 95, 38, 19, -9, 71, 48, 40, -37, 24, 34, 82, 103, -113, 48, 96, -101, -81, 112, 20, -24, 65, 13, -99, 57, 5, 19, -121, -22, 105, 22, 22, -46, -56, -97, 61, -56, 49, -39, -41, 15, 76, 79, -55, -39, 100, -20, -123, -18, -71, -128, -41, 7, -29, -40, 8, -105, 96, 25, -42, -20, -128, -102, 31, 40, 61, 68, 6, 33, 52, -83, 106, 33, 20, -64, -44, -96, -120, -95, 88, 3, 51, -94, 14, -46, -22, -11, -115, -2, -110, -101, -12, -118, 98, 46, -113, 14, -65, -15, 11, -22, 5, -47, -12, 14, -53, -43, 69, -100, 61, 22, 95, -28, -2, -124, -56, -92, 59, 62, -50, 67, -110, -89, 31, -54, -112, 109, 76, -67, 78, -25, -23, 59, 78, -35, -84, 63, -124, 23, 84, 76, -91, -3, 36, -53, -70, -73, -32, 42, 122, -47, -117, 20, -76, -25, 22, -31, 122, 16, 102, -14};
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
    msg.setTimeStamp(0.918351201985);
    msg.setSource(4811U);
    msg.setSourceEntity(210U);
    msg.setDestination(29582U);
    msg.setDestinationEntity(5U);
    msg.req_id = 42026U;
    msg.status = 10U;
    msg.range = 0.683408636792;
    msg.info.assign("YGNMVGVYTAFTHJPNODAAVANKCZXHAULCVNKNODOSGZUNZHMQJUTSKBNMHMMDJHKCYXRBSSCLVFAFQUZWEJKRLRISFQAHYPUPFEIEVVOJDTTGPKHRZTONGCELFCLHPQOCIDTWIGDGUWLHHXIXJDKYZEMQOWFVMJXSEWJW");

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
    msg.setTimeStamp(0.765612809916);
    msg.setSource(53654U);
    msg.setSourceEntity(162U);
    msg.setDestination(18207U);
    msg.setDestinationEntity(243U);
    msg.req_id = 22313U;
    msg.status = 34U;
    msg.range = 0.000437665001943;
    msg.info.assign("ZGFDNFCFBJZKASUQGQMBPRXBXVVTARDONQWDOTQCZWJCNAIUOAJROVHABRBZEKIGXEFJPTFAD");

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
    msg.setTimeStamp(0.624149433088);
    msg.setSource(58513U);
    msg.setSourceEntity(88U);
    msg.setDestination(29431U);
    msg.setDestinationEntity(159U);
    msg.req_id = 42145U;
    msg.status = 251U;
    msg.range = 0.253277230336;
    msg.info.assign("HVBGJHOATFDWINJHZSICHAAYBLHZWJRSPUFNGGDDYDFOHZZWELSFUOVGTUUFHTPWGPOLNL");

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
    msg.setTimeStamp(0.793831783755);
    msg.setSource(50346U);
    msg.setSourceEntity(65U);
    msg.setDestination(3463U);
    msg.setDestinationEntity(27U);
    msg.req_id = 31000U;
    msg.destination.assign("TZHYKCAQWAGSIMTDRZKIRUXDDQJJFJKRBFQXSJVZMYILIBMWZKO");
    msg.timeout = 0.613850523871;
    msg.sms_text.assign("BJOZIVTCYROGTGJXMDYRVAEHANEHVZPNGOCWYVFDDBNEHOKSDTJQXXHRIKINPAEULSHJXXQKDUHZISE");

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
    msg.setTimeStamp(0.406404794907);
    msg.setSource(48332U);
    msg.setSourceEntity(183U);
    msg.setDestination(36947U);
    msg.setDestinationEntity(210U);
    msg.req_id = 31675U;
    msg.destination.assign("WHPPCDMEQDKERUHUDAYDBTYSTLBPERUBKIHSL");
    msg.timeout = 0.945640182274;
    msg.sms_text.assign("NFNJIBISROWXEPYYRCQMOJOYLEIRXDTVCGCXGDAGWDVFVWIDGFZELABWWUHHJDNIJDPUQZLSNMNQIXBCFKFOXDOAIUJBLRZAVWHGCFZXEBUUESFAVZVCNZRGOOSJKYLLJDTCFYTHPBZAKEKHFQTQFVXKGQEAJATKNLPBXYCKMGXPTZUUTGMOOMVTAXUYVLR");

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
    msg.setTimeStamp(0.446013804361);
    msg.setSource(8987U);
    msg.setSourceEntity(162U);
    msg.setDestination(64345U);
    msg.setDestinationEntity(59U);
    msg.req_id = 42662U;
    msg.destination.assign("TSZDIHKBSNVOSJPMGOXKFL");
    msg.timeout = 0.92867105401;
    msg.sms_text.assign("XAUNPBOUVZZGJVXFEKQAMZZILRCDQPRCIOYKBELIKOTVDFQBYUDLPRCDKJRMRFZKOJQDXAWWHXTRVTIUIFXDFALYMLGCTLNXGEJVSACTWRMSVAYTBLVGIDM");

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
    msg.setTimeStamp(0.990650719727);
    msg.setSource(32374U);
    msg.setSourceEntity(113U);
    msg.setDestination(17371U);
    msg.setDestinationEntity(217U);
    msg.req_id = 7933U;
    msg.status = 52U;
    msg.info.assign("PTKNTYBSEPYMWKAVGLOFRGJKJHNUFSQAMJXBLDRMDVZATYZOCORSQEBNKLHCFRBHEFWVOJXBWGUDSQJHUXYPPWKSYPCUWFZCJVGIIUZZPYQBIQKELWTFCOHNUXLDREFRXJBAMJJIGIMMYEVFIIVOLTNXWEUSUDGNDDWVTGNYMVRMEPTQZKYNARTCTUQIZBCPRNTXXMGUOASNXGPQHDDBHRHFVSL");

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
    msg.setTimeStamp(0.645905866352);
    msg.setSource(3814U);
    msg.setSourceEntity(176U);
    msg.setDestination(17792U);
    msg.setDestinationEntity(244U);
    msg.req_id = 20426U;
    msg.status = 159U;
    msg.info.assign("RUEZXXOINGWWPRHKVRFCFSUMVICUYDIHYATDVCDBZWGFUAPPMWYUTOJYUVPFSUTVKOZERXGUGNASWTFTQQQBMOGLWXEBYTYKHBIIIVJPJO");

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
    msg.setTimeStamp(0.54367326661);
    msg.setSource(61126U);
    msg.setSourceEntity(35U);
    msg.setDestination(337U);
    msg.setDestinationEntity(166U);
    msg.req_id = 47386U;
    msg.status = 85U;
    msg.info.assign("ZDGTQRDETBTOWMYLPVLGJWDCIZOUTMRVTHXMRBTXJZEXVXOBPABPUJZFVMIXUFJTAKMCEFZFOO");

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
    msg.setTimeStamp(0.190736752398);
    msg.setSource(13021U);
    msg.setSourceEntity(238U);
    msg.setDestination(24803U);
    msg.setDestinationEntity(188U);
    msg.state = 94U;

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
    msg.setTimeStamp(0.347964321488);
    msg.setSource(18095U);
    msg.setSourceEntity(212U);
    msg.setDestination(65299U);
    msg.setDestinationEntity(143U);
    msg.state = 141U;

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
    msg.setTimeStamp(0.535555670243);
    msg.setSource(36489U);
    msg.setSourceEntity(82U);
    msg.setDestination(33884U);
    msg.setDestinationEntity(173U);
    msg.state = 15U;

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
    msg.setTimeStamp(0.151250319826);
    msg.setSource(49656U);
    msg.setSourceEntity(82U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(115U);
    msg.state = 93U;

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
    msg.setTimeStamp(0.667453738577);
    msg.setSource(51626U);
    msg.setSourceEntity(2U);
    msg.setDestination(42111U);
    msg.setDestinationEntity(155U);
    msg.state = 21U;

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
    msg.setTimeStamp(0.701551051415);
    msg.setSource(35827U);
    msg.setSourceEntity(64U);
    msg.setDestination(29463U);
    msg.setDestinationEntity(10U);
    msg.state = 206U;

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
    msg.setTimeStamp(0.223762125126);
    msg.setSource(54143U);
    msg.setSourceEntity(248U);
    msg.setDestination(254U);
    msg.setDestinationEntity(53U);
    msg.req_id = 36608U;
    msg.destination.assign("DXOBFBKABJVUBJDKLVZKDESKYHZWOPBYOXSRSRTPVEHAZWOZOWJALRKADRAIZIEWOEQLRSYHQNYQXMSTZUJCAONQLEHNUAQNUSIRGVNXJQZFFFPFBKPTIFEJYSBGPLGRJSLIWHBQCIKNGUJFQTCEYTVXVZXTFXYXMVCMRWAWDNGGLIMUEGKBMJSWHDDNQKMHHXHNPLMWAODXOGOTEZFUIMI");
    msg.timeout = 0.59520464139;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 5598U;
    tmp_msg_0.lat = 0.174886317787;
    tmp_msg_0.lon = 0.667307567719;
    tmp_msg_0.z_units = 169U;
    tmp_msg_0.z = 0.216646149508;
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
    msg.setTimeStamp(0.0881044778939);
    msg.setSource(39994U);
    msg.setSourceEntity(91U);
    msg.setDestination(16154U);
    msg.setDestinationEntity(151U);
    msg.req_id = 39412U;
    msg.destination.assign("FNDTJAPBHHDCGKJIVFHAWCYUHJSCILDGBRZKWHYUOWNTLHPSTVRVJTRKISICYQGPHZQBFLEONPXXVXAUJDOGVGKLZWOXXVWQPMFEBOQVKEOAA");
    msg.timeout = 0.245186257863;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.988301948242;
    tmp_msg_0.beam_height = 0.914828277269;
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
    msg.setTimeStamp(0.552589417192);
    msg.setSource(43011U);
    msg.setSourceEntity(94U);
    msg.setDestination(7848U);
    msg.setDestinationEntity(9U);
    msg.req_id = 47104U;
    msg.destination.assign("NZAMJXFWGSRADQJHQDOBCXODHVCUPPPHAECRFVWZZTWLYZHGEWEYEDOQMPJYVEBFCTJCUWXNXOLNZRAMOOHDGQAHAPNRFSLVZJEPBWXIQFLFESMCBLIROIMLGNSCDTYAWTMQHG");
    msg.timeout = 0.0390601567757;
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.680119506726;
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
    msg.setTimeStamp(0.52274353658);
    msg.setSource(19065U);
    msg.setSourceEntity(183U);
    msg.setDestination(23606U);
    msg.setDestinationEntity(48U);
    msg.req_id = 12943U;
    msg.status = 184U;
    msg.info.assign("FRLORYFXBUEGXOFNIDZXRIFUSBLIAPPCAJELZLIJCRRQWITKTEIHBPXSHWDLUFKXVPFDLNQBSSSRBLTJLIFAGYOTFBVKNHCDKVAHHNYGMQJVGCSLXTUMOATNMDKYMUWTUIEUJPRKCDYWKDXKRWBEQQXCRDUWZPOYBDHWWMZJYQPOZFMRWYVACCJUZGISOY");

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
    msg.setTimeStamp(0.283178325925);
    msg.setSource(52896U);
    msg.setSourceEntity(92U);
    msg.setDestination(42842U);
    msg.setDestinationEntity(240U);
    msg.req_id = 59826U;
    msg.status = 236U;
    msg.info.assign("HXCEGVMAZVNNHVQFPRKQDCOUYYOLNLBSFDKGTSDTTZBZBDXKWRCYJCGDTUBPVZVHIJSGRADTPXPCUEMBIUDBRHMZDSFDWEXVXQJYPHHTFXFNUIKEAMCASTIMSCMAPPFLQAKVLLKLTIHGNOLSQOFMNALINWEQOURHPCJQOYUJAXZJAUBEBMHYMZWWVORNWKIUWNGJBUWTJMIEEVYCIZPNQLFQVRRSIOG");

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
    msg.setTimeStamp(0.877947546004);
    msg.setSource(50156U);
    msg.setSourceEntity(232U);
    msg.setDestination(44588U);
    msg.setDestinationEntity(253U);
    msg.req_id = 24496U;
    msg.status = 126U;
    msg.info.assign("EVIYRHSGYQVAKZGBUBFLWJMNKEJWMYRWWBAEYNACFRBTZMLPBPQSDBCIFDVZAQSNZBWGXARALSVHCSCIYXMEFXHAQPCTJWZVQRFJEMKZHLGXOUWWDJGDLIHUINRTIYSRDFMDPCTMBFVYPLPXQXNEEXCDUHZTOLQNTYSRIDEPUSOYLMHKCJBWOKHIQSFEKNTVUOGAXHPSZTQGZLDKHRGZUCXYTRCWNAOFAJFKIBTOVOPUENMMNI");

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
    msg.setTimeStamp(0.555268889846);
    msg.setSource(24690U);
    msg.setSourceEntity(243U);
    msg.setDestination(37705U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.149749015506);
    msg.setSource(50443U);
    msg.setSourceEntity(244U);
    msg.setDestination(24172U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.603771339309);
    msg.setSource(41594U);
    msg.setSourceEntity(12U);
    msg.setDestination(23577U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.972125383288);
    msg.setSource(41900U);
    msg.setSourceEntity(140U);
    msg.setDestination(49022U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("AWHJIEMZPFIBSCHDGMZOZQGOMYIREWEI");
    msg.description.assign("SHSPABGDAURPMNKBQHIYRNRZMXTMDLQMJVYBOBWNLLHNTXTLWAKWCMSOVEFBVFZTYQFMVCATHDVCOUHWLXDXEUIRGUWNGZBFQDWMXRIKINGQJSSUQVD");
    msg.vnamespace.assign("KIXJSJHZSXVIRATXBLMBVNSARXFIHWXWTBQADQGRMJKZFIATEKNLDEDYEDWMCLQUPKTWJSWGEOFSGXYNBUFEJHLIWCLVZGZRUCQABDUEVRKXPNGVDXNMMCRPPGLHLLOMQEIHJUFKFNM");
    msg.start_man_id.assign("HYDDREUIIHUCYFVJPVNGPXPPLGGWZTDBFSKAKXHZKHNVVVMMVZQDSTLUCBYIHTBEFMIJESIUACZNOCRENNLXNBWLGPGKLYLWUWTOJXLJAWIOQKHEAETNYWJYFHYTMZKJEDNVHDPTRSNMXIROKMVQSFSWCIKFAQYHFSPWOLUGVKCXMTROYMFQEOXORLFXSBARUTARDRJTBQIZDAUSXWDOUEDMLBBPBCH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QPKWEMOJACJIBL");
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.366417295898;
    tmp_tmp_msg_0_0.lon = 0.14921508773;
    tmp_tmp_msg_0_0.speed = 0.456935631492;
    tmp_tmp_msg_0_0.speed_units = 89U;
    tmp_tmp_msg_0_0.limits = 215U;
    tmp_tmp_msg_0_0.max_depth = 0.465129040937;
    tmp_tmp_msg_0_0.min_alt = 0.663286687332;
    tmp_tmp_msg_0_0.time_limit = 0.314751130503;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.903770138918;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.817045420379;
    tmp_tmp_msg_0_0.area_limits.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.controller.assign("GASSDRNPUNNFHYZQDVGVCOQIWMATDTLSVZXTIBUQWIEOGWHUILMOWZMGMPMWAAILQVTNPNCDLRPNJLAVRRMZJUUBAEABHLEEBVDHBFSLQRXRZONTGZLHPJOCTQMEKEXUAVZSBDVPFJKFVSARTBCGZOEXKWYEPIGFSYNFLQKOGDNMEBCJOWZSRXDUXUFREJZKHPHSYBOJWHGAGYTYDCIRFYQCCSYJXQPITJMWJNXKDLBUYTFVCXP");
    tmp_tmp_msg_0_0.custom.assign("BYIYGXBGNSRVTV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::ManeuverControlState tmp_msg_1;
    tmp_msg_1.state = 226U;
    tmp_msg_1.eta = 57572U;
    tmp_msg_1.info.assign("OLYCTZDBPTKIHJVCTGJKCXSGPKNUBHQGEDULWABRZBNBRHIFPMFCUSQYZQSHADYOJZTQNANTQESAJKBCNMURKJGLOJUBDSZEPCRWAWZLVMPAFHUFANISMFANUKSVJDUIOXIMOIGOLIWROHNQGVHYVWOTRMNFCLGLDYEVZPRUYCTDTWGVMWKDRIGHENCMXFVXWGZREPXLPHHPTYLYQUETQXVXLVBEWPXDBCWMESOMBQIRDYKJXAQOFKE");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.313724121948);
    msg.setSource(60870U);
    msg.setSourceEntity(125U);
    msg.setDestination(27666U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("BKJNQXZTNAWPRTRCCAMAFMDEHIYWWMGJYJCTPRCVHYMQKUOMRRVBQCBIFOVZQBBCOSVUTEZFOJ");
    msg.description.assign("LKZHHXDCTQFENBYGEAFGUQAQJWEMJICFVYHXMNBGKIOHSHWIZDJROVQXDUTFBUQLXRDVBRQBASPPSADLI");
    msg.vnamespace.assign("ZPDFQVWVHQIOUBTGLQANMAZTPJCVETTKBWNYETLEVYKPDXPTPAZZGFEUYXDPPXKVHMYARLCLWVDOAONTTLCUISWRETBWHFZSMJFRFOCYULDPULCDMCGNJHBHIBOZFZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WDGKZWBYSLFCAZVCKMNXLGRUJTBHLSAHXYOQKAKMPVQAZLWNWRPRKOLEENXNQXGUIVJBBELBYGUTRXJIFPNYDQYCPMGRZLVAEFITJVAOZISJDICNVMKAEFDIAXHCMBOZLQFLIOFTTYQQGIMVSRUHMBUEZPMPTALVVHWRGEKTSTZFPFNPPJOJJYTIHDEXFMFJUBUZQDOTYWWSKBIUXGRUGAYMSXWPERKWHJQVNCHNSDSNCQDCRXGYZOCEKCSODH");
    tmp_msg_0.value.assign("LGUNOOPUELUTHLRXCCCWWXJVFBCZZLPIBXXRYWPJDAQGRKFFRVYZBYYHARMVAXNQOWJPJMZDP");
    tmp_msg_0.type = 221U;
    tmp_msg_0.access = 233U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WHYRKKRABETAVNUMMDPALSQIXELEYFWUNJIAXJXQCDLNWDHRCOISXCWHVEKPVOALCITFRLLAPAJUHXTLJUSKX");
    IMC::ReplayControl tmp_msg_1;
    tmp_msg_1.op = 45U;
    tmp_msg_1.file.assign("BHSCSRMEZXURVRZDIHGWVMZWCOUCQXUFZUBOEOMWXBYAFOPSZGHICAEFKONPHFOTBBRGWDBEJTPBTJPHONMTTZJFSHBSRYZ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ImageTxSettings tmp_msg_2;
    tmp_msg_2.fps = 6U;
    tmp_msg_2.quality = 111U;
    tmp_msg_2.reps = 194U;
    tmp_msg_2.tsize = 76U;
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
    msg.setTimeStamp(0.38231611621);
    msg.setSource(10768U);
    msg.setSourceEntity(0U);
    msg.setDestination(15190U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("JZIKZQRQVLJAVHBKIZNLTSOSTIUGIUKFTBXMSDQWOWVPBDELLNZJPMXDHJZU");
    msg.description.assign("DMPHREUULTJHRBPUGZYZGNCCVDVZZUOVPAQXMAZLTLIAJYRDZYOMESQEQWOFTSPIJTWCUEXKGAMIFVACCSFVDKMOXKWPWIIBXFSCFZHMVDTPOHHUTSMEBWAKPRJLKNYSHKHSDADMUMGQYULWWLRJXKNEXBDYNQSUHSGKGNTLRBNBHJRXFBNJICZEGXIMORYVEYIDOHXTJFRVQZLKQOOTNGZQGWQWXFPPJYGYBF");
    msg.vnamespace.assign("BDVJQPOASNVPIZGYPCWXOZFTOL");
    msg.start_man_id.assign("SLZAHWQEJRSRQXZKEORIOZEJOGBITUWQYALUJJRGICNHHFDEJUFYPFYMXXYOKPHMIGJOSPDBDGXZCBEUVZGJVNYHFXUVKWAKBTWGOKBXDHRNCKPSYYJNRAIBSIGDRMWFMWYTEHPHNOLPEIDFVNIASLXZQVYTUEPPMALMAVZGFFUAHBCUMDMNZZTQWWNJQXAKOSCSSRLVDQBITWNBHXQCDWZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YVYJOISDPPMDGJPZ");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.826407007483;
    tmp_tmp_msg_0_0.lon = 0.870257775916;
    tmp_tmp_msg_0_0.z = 0.203189212664;
    tmp_tmp_msg_0_0.z_units = 197U;
    tmp_tmp_msg_0_0.speed = 0.915401039531;
    tmp_tmp_msg_0_0.speed_units = 247U;
    tmp_tmp_msg_0_0.start_time = 0.811449393011;
    tmp_tmp_msg_0_0.custom.assign("UTUWREBUTQZXRFUJYFTHFTEQZGNFEIJNQBJWQVYGIOINVWDSHNNDOGBHZJIVFPAVLUXYTLIADDIGCRRABCKPOWJCHNDXSAPRKNEZPTGPUCKICHCKHKMMXFYLVDWSLRGOYJLOCBZEIAGXVZDXZMHSWKYXLZVNNJNCFWOQOSQTFGCPQADYMYJPXBLMQESWZJPLTGKMBRUTAWYOKKEH");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::WaterDensity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.574255412042;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::TCPRequest tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.req_id = 2899U;
    tmp_tmp_msg_0_2.destination.assign("HXQEDIZZWRROOTXVAQAPMRSOPTDAHLZXGKIPGQKLNEDJDZRYTIZTBEHKEWHXVQAUYZGPESMFGQJLLDBSULFVTCFGARBHBKKIJUWORWMYDLASANCTCJKQFYNMECWYJVTTQOCBKCVFODYPCSKMVHWFDIXMG");
    tmp_tmp_msg_0_2.timeout = 0.208131758127;
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.378952827201;
    tmp_tmp_msg_0_2.msg_data.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KQMYXIZEAOEKALHONDRQWJTTNL");
    tmp_msg_1.dest_man.assign("GBNCONJFYANAOVYYLKJNOFBYSJZCYRTUILNBVCEMRGOLSQGXUDWQLLGYVIPMDRBEYSUJDODGMPRWXSZZBMOGBPJFRBAALAIDMEFJTATCKFUES");
    tmp_msg_1.conditions.assign("GKLQLRVMNZZTLWKETXQVWBNDYUQXFNZZJUYTZTPPTZRCUIUUPJLDWPKSBFLNCBXMJCOMQKXMRENQCQYBPIMAFSAAIVK");
    IMC::IridiumTxStatus tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.req_id = 55043U;
    tmp_tmp_msg_1_0.status = 219U;
    tmp_tmp_msg_1_0.text.assign("GYUBPDQRWAHQXTISSRHHGZMYLDNXJUYCJSDVGHFZCDNVLUUXMBDLNXCTJPBRDKVXZACIELETYIJTCERAESVAQWKIPJXWAVTVZLRKIJOCSCGBUXWSWZFDZZTNHNVUEYSMZMCVONPTXKFMDWLAODMVHUEANWOBGSNKKTIBEYMAGGQHLQYRQRHJEGPZYGYPABTURF");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::FormState tmp_msg_2;
    tmp_msg_2.possimerr = 0.0230603795806;
    tmp_msg_2.converg = 0.0656096121898;
    tmp_msg_2.turbulence = 0.292895221614;
    tmp_msg_2.possimmon = 234U;
    tmp_msg_2.commmon = 252U;
    tmp_msg_2.convergmon = 79U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.194512880593);
    msg.setSource(50365U);
    msg.setSourceEntity(243U);
    msg.setDestination(39458U);
    msg.setDestinationEntity(166U);
    msg.maneuver_id.assign("DVNXCYPFUJWXBCKVWDDOEJDOXTCVNYRXZQBGAZTHIAXEWHUSGKUIV");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 34227U;
    tmp_msg_0.flags = 152U;
    tmp_msg_0.lat = 0.806101332595;
    tmp_msg_0.lon = 0.146063782083;
    tmp_msg_0.start_z = 0.705147999229;
    tmp_msg_0.start_z_units = 135U;
    tmp_msg_0.end_z = 0.848948971805;
    tmp_msg_0.end_z_units = 95U;
    tmp_msg_0.radius = 0.893770255913;
    tmp_msg_0.speed = 0.490418089981;
    tmp_msg_0.speed_units = 96U;
    tmp_msg_0.custom.assign("UCGJBOWDKTQOMHEFDIXIHQRYCEYYAFZRAKVSCALWSFYJUILRGNZHGHUUSHFNPCFRVUKVZORCZGEUFTAQPNSXAREKCUMWZXEXVJQPMIPBTYSTQBTVIWFQKBENCLXCOZLEVHEKKJTPTMIBGNDXP");
    msg.data.set(tmp_msg_0);
    IMC::RhodamineDye tmp_msg_1;
    tmp_msg_1.value = 0.0424324335993;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.843146767495);
    msg.setSource(64876U);
    msg.setSourceEntity(229U);
    msg.setDestination(5721U);
    msg.setDestinationEntity(245U);
    msg.maneuver_id.assign("SMOOADBQNBRSPQDWHGXQGTYCGIFMGOWCZGZYSNFENZEJVFAOEIUQAEUBDHQKLEUJBTKCDIJZLPYOQCZUWFUJYJGVLMORTVDPUGOTHVXESWSMGYLPPLKYWVIMARCQJJLPBYZNTHFKCAQEFEIZKSNOQMI");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 55716U;
    tmp_msg_0.lat = 0.760986493741;
    tmp_msg_0.lon = 0.856909407242;
    tmp_msg_0.z = 0.0709473792343;
    tmp_msg_0.z_units = 51U;
    tmp_msg_0.speed = 0.749034503557;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.duration = 48033U;
    tmp_msg_0.radius = 0.708795188781;
    tmp_msg_0.flags = 16U;
    tmp_msg_0.custom.assign("IEHTMEKWURFFJAVCZZCIPCUZRZGKAODQXDHKNUEJSNNCXNNNMISMHMAYZBOLFXQDTYBEUXFUNRFPGZCBJHSBPDIIGIATMHKKZQMOYVGPQNPBXDEIBFVWVVDROEMGJCWXLAMWRYLWLIQNGTQUFOESIGKRFTPCLVXQTGXTECBLBOJEWRBDJYKSVIAAXMSGTSKQZHYJYPVUOKFLAPKAR");
    msg.data.set(tmp_msg_0);
    IMC::Target tmp_msg_1;
    tmp_msg_1.label.assign("CKUBBGKPLFLVRESFCICTOJFGCHKIUXWPXPQRUBLXVJAYUFMIGHZRIWE");
    tmp_msg_1.lat = 0.569723984865;
    tmp_msg_1.lon = 0.378036832067;
    tmp_msg_1.z = 0.0684624319195;
    tmp_msg_1.z_units = 180U;
    tmp_msg_1.cog = 0.26237087442;
    tmp_msg_1.sog = 0.137201927573;
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
    msg.setTimeStamp(0.5383458702);
    msg.setSource(25301U);
    msg.setSourceEntity(113U);
    msg.setDestination(25082U);
    msg.setDestinationEntity(36U);
    msg.maneuver_id.assign("ACGGOGSHLVVOKIKGLPNKERDJEBUFDOYLOBJSWHQMKDUYKRVEQXTIMSLZUOJLVERLOUCHUGDHDRDMZCOLSHVYQJACJTBGTKOZIRUFPMZZIIYBNNFW");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 49630U;
    tmp_msg_0.rpm = 0.65065899443;
    tmp_msg_0.direction = 86U;
    tmp_msg_0.custom.assign("FTZVNAWKXOFKYCNUPFGPIZGVSUGJSCUTKPDIOQXRNITZCJ");
    msg.data.set(tmp_msg_0);
    IMC::FollowReference tmp_msg_1;
    tmp_msg_1.control_src = 64256U;
    tmp_msg_1.control_ent = 42U;
    tmp_msg_1.timeout = 0.383208755389;
    tmp_msg_1.loiter_radius = 0.478611320803;
    tmp_msg_1.altitude_interval = 0.290259579749;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LinkLevel tmp_msg_2;
    tmp_msg_2.value = 0.32404301802;
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
    msg.setTimeStamp(0.779400484223);
    msg.setSource(2889U);
    msg.setSourceEntity(20U);
    msg.setDestination(54963U);
    msg.setDestinationEntity(55U);
    msg.source_man.assign("UUUFKLMMDFRSRJFLSNTDCWTTNFPROFHOJVEGCPCOELCVGBXIKMHISHWAPAGQDVNETPOEXREZFTZCEYUDMTHNDQPGHYEBJYZLNDQJZKPZCKPUIRNAYSYAWSZVDIOLQAJWWQGJVUBVZSHBIHSBWNAPXMKDIJJYKIMSTKXVTEOMHXDVJWPUGYKCTTWFCGAFUOWRSQIJLSUNZQB");
    msg.dest_man.assign("AYFMLUPNYHPQJCOQEDBZFMHOPVAWGYYGDCMBWROGMXVUAXVUSMIYHBGYNETRDQBSHVTGSNQSWXHFXUPGXZPLKQIFDBFWLIAGKMBCNNRJENVAJYQFP");
    msg.conditions.assign("MVTAYQRDLLWGCIKKDZHDMJSXGVFXESWCUCEOKSRXRVXEIGZYFUZTPLGUFQBNATERPTTVFJOXRULTKAKXMICFSNZX");

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
    msg.setTimeStamp(0.591977282614);
    msg.setSource(42833U);
    msg.setSourceEntity(24U);
    msg.setDestination(5492U);
    msg.setDestinationEntity(226U);
    msg.source_man.assign("OYVGJKDBGMGPQGKITWZNZZQDEAXXNDDKOQEESHVSYFEMBDPVELJTMWFDYUCTSBNZN");
    msg.dest_man.assign("PEIGCEWASYSJMHQRMNIKIQSZXCRZJUFNYTWZCRLXNEONSRVETCN");
    msg.conditions.assign("FNWPKFNXNCSQZGUDMDTSKKCYTPUUPGPYRAX");
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.799850977391;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.42533060515);
    msg.setSource(8626U);
    msg.setSourceEntity(211U);
    msg.setDestination(40074U);
    msg.setDestinationEntity(246U);
    msg.source_man.assign("OTRWPIHPKASEWELYYLWJBTBAKFFEYIRUNRBGCUZGICHKAFHJDVMXMGWZVAVDDNHWNCTVFYQ");
    msg.dest_man.assign("AOHUBWSDXYZRQTMMJDKXPKAJGZBFTQUZCGOXXBZVIZQWMWDRREHZAODESXKCEVPNRJMVJDRKLSQQPAATGSQC");
    msg.conditions.assign("AFYYEASKSLCGODJXKQWDZIEKZIBTCXUBAOBPEHLEBROGOGFTHJTJTFMIOGCUNDLPCVHOVPTNKVJRIXMGKUXDZLRGUOOHNVQVBNJNEXVSWTHRROAPWQHAJGDQQFCKIRAEBMS");

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
    msg.setTimeStamp(0.411927576891);
    msg.setSource(45809U);
    msg.setSourceEntity(193U);
    msg.setDestination(9066U);
    msg.setDestinationEntity(233U);
    msg.command = 6U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OAWDTNDWTKEDURXIBKGZZBPHQZUKMIPSVJJGHQSMDKRGTMNHYOYFXVJFVXITAUEXWGFDTCDIVBIIMZJPDCBRZNOBPERXOYXXOBIQFSLAALTYRKZQPCUQVPKLFNPRBKHLNQENRCCZVYAZMTODWAIMYSUFWVZGLSAQJJSUYQOSRPBPGZWLOCMPWLVDAXHUHICGKHJFDVYLKEFFNVYCXUGMURJWGMNHMLHJQGOKRUNWAEQYIS");
    tmp_msg_0.description.assign("NVBOERLYXCQVJIXUVLFSZHQDRCZTCI");
    tmp_msg_0.vnamespace.assign("XWDUUCTAZTEREUJPVNMBRVILAHFCUAATWLVWJNSPDPIDQPPHWIIJOMEHUWYMGNURHZFYRCKZNTKLLBZBZRNRBTOFISOOVYWGKJGYJONFKTDHZVMCGMQHVLQZQKKSDJENJYVBFLKPXCCOQLDJNBOYZBEWSGQXOBKHCPZUXOMGWSEQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MPAKHHGPIPEBYVBMWXXTFMGHZCH");
    tmp_tmp_msg_0_0.value.assign("THILFNRYIMCSCCLGHOCYTETLZCBP");
    tmp_tmp_msg_0_0.type = 29U;
    tmp_tmp_msg_0_0.access = 24U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OOBBAKFTYEIXXLZPSCXWNZZIQQNJAMBLLJKGTOBMMHDMVDKWSYZPJHRWRCGBASYFQRBIEZVVAHWEONGEDJRGKIATUMJUCWTQXGUHCEKRRAEVQEHCBJNOKDPNAZUYTCYDRZDSWEGXXWBPSALPSIKKXDKVQFRRL");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZQORHMFOVSEWUTVETTVKTUIQAZXAGAMNROGCJDBDXIMNZMZSWKIGPERABCYXWSVNPYYLQHAKFWVXQZSULLILGRKUVBWNSDRCSZZIXBBEHRYKXRAZUHDNVQXSFWJPPMBYBEBFHCNDRLNCQJTJNASGUUGYMDEIOPLLQEQCDUHHRTDICJHOMAEWFWPQPCYPADTEPAHPKVJUFKMMELZVZTTX");
    tmp_tmp_msg_0_1.dest_man.assign("BLFJKUHZBWJBOHMNKZFPTPSFZKGRJFYVVSDUJGHAWJXIDYJIVSYZGUBEKZMQZLHCXDFEVPBDOKKGITSWUCEEBAJRQKSDYWWCOVEPDMSZDGMICDNROPRQZIBTXYYXLNSQCQEUTNN");
    tmp_tmp_msg_0_1.conditions.assign("JMSGABQYXCGDZJBZJENJQCKWUZDZBFLKAYXIQILVMXUQDWWDVOMKGKRTOLVVZACOICPDHLDBZZXMXPKDEELKPKHUIOJGGYOIRUKAYFFTNCWNNTFNTLPURRRWJXOVFCVJSBANXETSVIYXPHRSWCTYOFLAMMCASWTCHTPPZJVPJUEQNRONDHSAZHODQYBKSHYBTRHWRCIBSULNUWGPZGIGWLESQYRF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SimAcousticMessage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.566075101279;
    tmp_tmp_msg_0_2.lon = 0.962208715403;
    tmp_tmp_msg_0_2.depth = 0.491359391445;
    tmp_tmp_msg_0_2.sentence.assign("ONSVJXEBALJBJECBCFQFRUTGXTZFZPSLDVORITWAJIBIUGEQVOPHRXCIHRGDWLHZUOJMOPYZYWQUFGISYLLYAGIFZKCTHNIDKELAVJNYXPQRKEGGVAABUFHPHTOYUMHMMFZBGXQYWUBEMADWXQZXFGICITNBDLBTJRVXPSSAYLKASWPWZPVMOVSCC");
    tmp_tmp_msg_0_2.txtime = 0.78581151754;
    tmp_tmp_msg_0_2.modem_type.assign("WYSIPIYPZWVLCRWMLTVOGXBDKJXDMDSQXVRMWNQQTDALEAMFNPRTFUZNXYUEMVNOEKYGYERMLOQIGLUZMEREVVOEAYJSNRNAFNQHUHZWKISJFPDATDCAQNVEJXCUKSGPDMIBHXQPUXSFVJCTABLPATHFHILOJKNMIGBYKVCXTSCDJGAXNQYUOZLWLXHHZKPBTGITBFIRJOBGHZKOHFJQECQEMOZYCBZBWVCUCFWGSJ");
    tmp_tmp_msg_0_2.sys_src.assign("CBNTCAVMOCXQNHPSYJJBQISXIDSKMW");
    tmp_tmp_msg_0_2.seq = 14795U;
    tmp_tmp_msg_0_2.sys_dst.assign("VZEGQBYFFZVJKODBGNGKBGNATOFVHJLSFMEKWDWLUSIBHLIYGFJSTDLNUKDZWYMNRVIIGDTCVZQVXPULCRVPECITRGXTXPGNUCPYEPHI");
    tmp_tmp_msg_0_2.flags = 214U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {94, 88, -73, -118, 48, 98, 98, 83, 61, 60, 103, -7, 42, 5, 88, -16, 50, -10, 117, -11, 68, 30, -100, 83, -37, -68, 67, 114, 35, -83, 14, -47, 65, 65, -103, 66, 92, -125, 17, -82, -111, 91, 22, 90, 32, 11, 19, 122, -49, 105, -28, -13, 3, 83, 105, 120, 82, -68, 56, 105, -109, 21, -81, 60, 120, 60, 121, -24, -64, -98, -60, 46, -10, -93, -69, -58, -81, -100, -30, -62, 70, -83, 89, 64, 4, 32, -76, 22, -109, 72, -14, -106, 11, -92, -29, -54, 82, -108, 83, -29, 87, -31, -83, 21, 120, 27, 74, -52, 63, -73, 0, -32, 87, -54, -56, -102, 118, -89, -109, 87, -64, -74, 59, 1, -109, -100, -81, -43, -110, 0, 98, -33, 75, 25, 100, 122, -113, -76, 88, 121, 87, -29, 2, 15, -9, 75, -27, -94, 21, 2, -25, -73, -67, 76, -114, 18, -67, -109, 74, 69, -18, -22, -66, -16, 5, -56, -99, 14, -3, -112, -94, -100, 18, 41, -54, 94, -123, -106, 107, 49, -120, -23, 40, 95, 80, 22, 79, 101, 11, -35, -77, 100, 46, -107};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.900250159359);
    msg.setSource(57941U);
    msg.setSourceEntity(166U);
    msg.setDestination(30145U);
    msg.setDestinationEntity(72U);
    msg.command = 158U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZYFKRWPFTQDGOICCNCRUPGRYLPJMWUFIPRULUBEMUATXVCYZVNLNWPBVBHIQJNGFRITRBQBJMOGGJHKQQAFJULKSVJAGANSXKLRTDXHPBYWONGYFAF");
    tmp_msg_0.description.assign("UTUFKIXLXRZQJDIQWSFORMNRFSVLVBAOCLEMCFHRIPXCZRZTYHAWPGEIKBUABMCXQWDEDBLIMBHMOEFKRAOCGROQKAVBQLUAPSDSOPZTDYTXAYHOGPXKVHTNAFFMWDBSLPSUZWKVELFCTDZCNQINNGXUAJEDBQQFWTHJIPKHZLVTRJYMJEKHHIYSMUKMVXTGUWIINYNSCVGFLGPNQUOMWYJWXXBUGCZYYSWHPJEZJROTVNEGDBDZQLERKGOJVP");
    tmp_msg_0.vnamespace.assign("DFWCLYEGRVOSKBPNGOYZBONYILWOQANWIFIFTDPMQXSTOFEDEEITZEPJBHXQXHGKICFJKNQEJRCQTGKKHDMROSFSHAEMMNJBROVCIDIQGHZMVHLAZRAXZXAWODLKUBPMABHGYVIRULVVJNJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PWCMTYYAIVSLUVDQORZYPDDQASJLIIZOVYWNVBUNDKVYYCUAONLOYAIKEGKINBFWNAYZATNHXRHBPTNZKQWSPAXIMHEGIPZJKRTOFCTEQIHDVFYMMWWCLBXJISUEGLDZCEFCPKSYVEQHAHTDRHJGGLQUGIOGUFQZRUBNXCTJ");
    tmp_tmp_msg_0_0.value.assign("BYOYHRBXCRTRYTTZFDEZAWSZOBYUNPUGNVAQWDTMRJJJBSQWPRHFNRXEWKOUZVGCQPTOSWEAPDKZKHRKXNGPLJQUALGXPTZUIDFOPMODEIFOXHFMHEAOLWXDDESHMZACMCHDZCGRSVXTAKQIRWIHJFRQGJTCCCQLVTEVVSVDQWKCGIAHJPQNWNHIQXFBNSLPIYSUDMGIMFKLGLUYZNLMFEBXXYBIIYCJEKLJVNOUTAZ");
    tmp_tmp_msg_0_0.type = 89U;
    tmp_tmp_msg_0_0.access = 118U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("NLWLKMVRLRUQCMZKWQNXFIFXKNMLAASCJSRWADBTHRXHMWQQLSYFKCYVGSJRFHJZOLJGUQTTRQBUYBFRPZEVPICOMKDUCEYVPYZBWFZBLUYSYDKKMDZGIEHXGFN");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KUCWKCVDQZJMFWDOGGZNXHQMIMN");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("QDCWUMBFQAZNKVQMMROTSLMSDCVEJVLYVMJKBANFKWHIBJEQDSXPSCHYZBTPJEBTOUFEGKFIGAZZROYVEHMGLKDVOWMTWNHRDWINHVGJDOUDGQOLBZXXAMWCFLGXDZXXNIKYNPQNXSWUUZTGHCJJQIPPXTGUNLXILUAVQAKFPPEEERIVIAWOYBYJEBOTWSHLRCSRFUTGCOMRZBKMTNQCCPYPVREOLZSJKLSHYSWFNJIUHXZIYQRATRCHB");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("JSGWXDMVDSUCSCHUTMEJIPDCZXPITNPVHFHPQBGTXYEJNOJMRIXLRRPMVZCFKBDKKILJYYUQASYTZGHKECLTFAJWVPPGFQEQFLO");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("CKUWDFQQUWXRLZRSKUCNENISTFURBEPBYMPPNXLFXJQJPXLXPIFPFTYFIMSDVIEJTMLFHSIBGNMDNYKTUSCAIEOQIXVMMVDKVRURBPRCUFZOBYJOGZHNIWZSCJZQEUQWIQHCDNHRRNCWOQSFLTDMLBMVAVKJARE");
    tmp_tmp_tmp_msg_0_1_0.description.assign("XKFUXFWIIGPCPLABZVTWSHTMXMQUYIUPCIJKQWXFWLDGAAWDDUCQHFILCVPTUBYVNJHYORSTIBOAEZCMJQSZTZHLYLHJSQSIGNJVBNNBJRBKKVRAXKZPTRIKWUDBRTARFGNZNMNHOXLBGUSFMJFLGDBCETDZVATXOELCQDUPEFECZMAXZMMHEKKQGDPVHWA");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.134615744083;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.89234647286;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.999686289371;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.972562610637;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 9227U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.393727384447;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 11736U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 1624U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.385704362056;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("EAWNGPJPQKQMNGJAGVJYUMLEZRV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PopUp tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeout = 63795U;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.504350812649;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.434860135048;
    tmp_tmp_tmp_msg_0_1_1.z = 0.195796020998;
    tmp_tmp_tmp_msg_0_1_1.z_units = 173U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.17741722127;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 106U;
    tmp_tmp_tmp_msg_0_1_1.duration = 18594U;
    tmp_tmp_tmp_msg_0_1_1.radius = 0.98104747713;
    tmp_tmp_tmp_msg_0_1_1.flags = 93U;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("DSPHUGMFIFZGZLDNRCTYKYHBTINBHXDWKONLNRUQROTVBVQALBMAULYTWHPSDNHOLTJEYJRQAPIEKEFIDHQTCBVIZFMYZDGXNENEAWIVAVVXKYJOFWJGDEFXQTPC");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("RDCUCRTUZQXWWVPIVZYVWYJYGLSYNRDEPZRKOGODRIXBOVDGJJPTQJCMYYGMMKDGCFV");
    tmp_tmp_msg_0_2.dest_man.assign("ISRVASVSXWAUZVTPJEUKWLGPXGITEIKZYFZWHPJLXDAMJKDSZNFTNLZUGXRFDUMTRCLUSIHHAPGVJUDUAGLCEOZZGJOOUBMNCNEAOSMOSYLWFZTILOWSZLMBEHEHGEFMWRUQPYWCJFFEDVVYTMSOKNRKVAYWYCCTXQHXTBMYBIYQXJHIOHRJBER");
    tmp_tmp_msg_0_2.conditions.assign("RVQIEECWLZXJNYFYQRNSMFATGPBHHUUPEGPMFOQBBKHZACUESYMCPRKITURTBECIAKLFMFQOE");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SetEntityParameters tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("OUYCHUQMMODYHZWGPCAHUTYEDLECLHYSEZKVJRNKGSZXKHTYXSDYHQAWPVDPTMUBLBROTYCCPAGAWVTLTPEQQELKMPFRJNJRDFJFFUP");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.9495626697);
    msg.setSource(14917U);
    msg.setSourceEntity(120U);
    msg.setDestination(49470U);
    msg.setDestinationEntity(89U);
    msg.command = 162U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PUFDJNIWFBESLHDTSKNRRCTSAWXTPGKJCUUJBSWAMLHCWLLIZOEYGZHOGHUFCZIEVOJGIMSMSDHLICCRQZNEFWOBTM");
    tmp_msg_0.description.assign("CMDDDSJQQQGRBZHLGWTFXIZGJZTHEWZCUOBOTGUTIPGVPLJWGFAPPLFSSQZAYSNJPWWJPRHEEBBXDXWNMIHBCQEYPNYONBWVUYJOMMARANCLIDGHKLVHTNTPZWJSQLFRBVFKYU");
    tmp_msg_0.vnamespace.assign("QZIKAEOWHRQTOSQFA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DIVUWLMAFFEQSQUZJEZBDQKXIWPTCFHMNSRBTOJNAUXNGVKMTCLOCFZIAAGBVHKDZOOJWVGKKAQXZPTMEJLESLHZQZNEVMKRLNFFJPMBYYISGVQUOZCKQGIGBBPFXYVMQBHUXFOTRFTCCAPQNDWBPXODOCJSILWNJTKIDGIDLQLOUBRLNEYKRX");
    tmp_tmp_msg_0_0.value.assign("UGSTAWXHCURULFOPKSRCKRDLCDKIZNAGTYWJDJEXHZZGFPJIMTYBGXNNSZRUVEMLOZJKEYPLTWVMNJUBCYFGIWEXCHWKGWDSOMRNAWMCYVPTSMEIUDYZXBHJQPTOHYSSMWOUYGKBJKPHQJCQDFBMIGQVJJBXEMTFBSOZNPBCMHVIVQNLAAREWTNYIKQLFKAZLHUBIGDGVLEDR");
    tmp_tmp_msg_0_0.type = 13U;
    tmp_tmp_msg_0_0.access = 196U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OWSHRFWYTAYOQLRRMZXKYOLLOZRKWNLGPWDFSDQHCZAFGRLIWYVAUQVZYJBKLKMKFFPPLOBZLXSJAJTJAGMEAJRQCPIAGNTHRGLEIGNSZITPKIUXMMEWDX");
    IMC::Salinity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.310622623564;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::MapPoint tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.946479459588;
    tmp_tmp_msg_0_2.lon = 0.908017735896;
    tmp_tmp_msg_0_2.alt = 0.320300213564;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.0560966410928);
    msg.setSource(46812U);
    msg.setSourceEntity(93U);
    msg.setDestination(38550U);
    msg.setDestinationEntity(6U);
    msg.state = 20U;
    msg.plan_id.assign("VNYLOOXTBTWSJSSYCMXJQBZCDMMTYJUEFXBESWNSTTLJXCHWZBOPBOQJJGXKKNHHIUKIDYCWJDFLYAPT");
    msg.comm_level = 224U;

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
    msg.setTimeStamp(0.97061732289);
    msg.setSource(16838U);
    msg.setSourceEntity(9U);
    msg.setDestination(64707U);
    msg.setDestinationEntity(162U);
    msg.state = 117U;
    msg.plan_id.assign("MMKUXAPQGNBBBSHVISRZOFXVAZKQJNCTIGUZOWXOSSAPAMMEUJLOSTYPRFNVFHABLFXU");
    msg.comm_level = 245U;

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
    msg.setTimeStamp(0.196267721957);
    msg.setSource(10064U);
    msg.setSourceEntity(242U);
    msg.setDestination(14953U);
    msg.setDestinationEntity(4U);
    msg.state = 88U;
    msg.plan_id.assign("PKKIKDNATDYYRGOVLHEBCILHBJWURJYGHZZYZAIGGHVYDCJZQTBBXITUNCWYGOQLYAJRTFFWMFCNSLKWUUZAFVUWIXXFGOUODDBZUZMMJIMCSWNFUMSJAJHGXPNAQDMTKCUROQVVRTHKPSMQEGDALAEVNQOFDLXRBDBVCQTWPKKLECOEEQITPORIVNTMUZZPCFHYGJAMJHEKCMWBPOXW");
    msg.comm_level = 107U;

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
    msg.setTimeStamp(0.299355734577);
    msg.setSource(22182U);
    msg.setSourceEntity(37U);
    msg.setDestination(9676U);
    msg.setDestinationEntity(168U);
    msg.type = 204U;
    msg.op = 221U;
    msg.request_id = 43939U;
    msg.plan_id.assign("FSROAVVSRHELVQRZUPIQYIYGYCGYKVSMCZGFVQZBL");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 10655U;
    tmp_msg_0.custom.assign("HBOJEWZMMFNVPRONOETYDHEUWTDRMRULUGLNABMHWPAUZKIXTJISIPUWKHNLDIUHPKUBFNLZYPJXZCWFKDAJJSOYFVTKLGUOQMEPQCKLSARDVNWAWZMVBXBTSSNQMIOLCXVYDSRFDVTYDWZQRRFXWBYCGBAJTKJXUVBDKCXZUGDJSEFAESAHTIEMOQQRXSPTNWZLCNONCKSFETIYGHXBIGFVJJXBEGQCZVLZYILROFA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KETVPFUUWUTENSVJADYTRQCOSAPIDBPDQBGWQEDGXVXJEZ");

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
    msg.setTimeStamp(0.0590376112366);
    msg.setSource(48693U);
    msg.setSourceEntity(89U);
    msg.setDestination(32369U);
    msg.setDestinationEntity(135U);
    msg.type = 54U;
    msg.op = 46U;
    msg.request_id = 2152U;
    msg.plan_id.assign("KDUFMCLGQMHYSMVTYKCVSNJUGUENIPAWHKMJHCTYCWRZHEPLSEZONPQDPDBTIBIYOZZYQPEWTSDNXZIKGKMIIECQDJNEKGPSBSQXWNDHAXWXVELXGANLCYOAJFJPMVFIMJBDRJSJJL");
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KYFRMRJMTXKWCSEYSFAIHHQEZVXZGMRTWLLMXMPMCLDFYNXRCSVPUZKYQXOQCKQANGFQVAIBWYIDKTSLPSSVZMUXNDIDBDAI");

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
    msg.setTimeStamp(0.356587016462);
    msg.setSource(32819U);
    msg.setSourceEntity(88U);
    msg.setDestination(43131U);
    msg.setDestinationEntity(95U);
    msg.type = 88U;
    msg.op = 192U;
    msg.request_id = 50177U;
    msg.plan_id.assign("TCVBJLTNKYVKMAPZGQPTKTLUWSSTVJSWONPRDEAJSGZLEXVRNIYAEZFWNKVQQRIPETLIIYNBTPJVJNCBQRWMUHHULXWYCQIDHGSPSXNACCUYFRWCUFWORKDUBIBVDLHEVPETZLMSRBBMOBDFACZWCUERKDKMCLOWEAZHMFHDHYIG");
    IMC::ImageTracking tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CJKQZULUNBRHBHFPZIFDOIUDYAZZZFDYJUOVSARWSTFHYVENZLUGJAJJZBEYHIRSJALGOMEHYTGLQMTTITLASAEHAOETWDNXYKCVXFAWXHNYOPNVTVCFCMSRULDXQMISLPBRGXHTMLRUBPYICIQQNYCPREQRTXHPATFKOGZNYFPUQGJKOGGVDLWWEIKKVEGBOCCWQBSNJSMKPBEJXUVRZAMXKVFGME");

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
    msg.setTimeStamp(0.568400899354);
    msg.setSource(39117U);
    msg.setSourceEntity(2U);
    msg.setDestination(15586U);
    msg.setDestinationEntity(160U);
    msg.plan_count = 4270U;
    msg.plan_size = 4147602949U;
    msg.change_time = 0.767422888245;
    msg.change_sid = 30274U;
    msg.change_sname.assign("HZZBIVYLEQCDWMRGSILFADNKZB");
    const char tmp_msg_0[] = {-42, -106, 10, 17, -96, -90, 29, 59, -100, -74, 105, 103, 82, 40, 67, -15, 94, -2, -117, -20, -63, 51, -110, -63, -93, -86, 61, -45, 42, -126, 113, -29, 81, -66, 83, -36, -10, 111, -87, 104, 52, -120, 123, -52, -94, -55, 8, -15, -1, 66, 80, -97, -49, 10, 90, 32, -94, 58, -9, 96, -78, -119, -65, 1, -69, 4, -79, -29, 53, -60, 108, 15, 79, -18, 6, -77, -55, -107, -107, -8, -119, 55, -78, -1, -108, 30, 85, 27, -44, -110, -119, 4, -75, 91, -112, -6, 6, 76, -16, -80, -16, -21, -38, -56, 108, -83, 47, 30, -67, -50, -128, 82, -103, 44, 40, 123, -25, -11, -115, -86, 96, 116, 62, -106, -47, -127, -53, -115, 73, -112, -90, 41, -116, 5, 89, -83, 75, 49, 1, 81, 33, -29, 119, -72, -91, -66, -68, -40, -71, -94, -103, -84, -50, -40, -117, 37, 100, -20, 0, 6, 96, -100, -77, 8, 62, -12, 119, -85, 79, 53, 1, 125, 48, -9, -116, -100, 91, -44, 103, 89, 3, -43, 126, 72, -127, 116, -111, -54, 11, -94, 8, 6, -55, -10, -66, -120, -119, -27, 71, 52, -95, -80, -27, 76, 61, 55, 28, -31, -123, -85, -78, 46, 120, 100, 86, 86, 6, 52, 13, 54, -29, 108, 32, 39, -122};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DGSEPXVMLUKWTXGMLVXLQSETQWPUOSYSVUGPVZPCNKZIANQSFOXYBHUWFUEDRFHGNHWSIEYBRPTUIRRBXKTSJZGDJHLNXYJOUJVWVJVMESDCKJJDBBYZENOMORPHHQBOYLKNQMWJBDBQNWGKWATKBADPFXAPQFRGMUHIPVAONMIIYMGIFQBLARTLETKCRLIJRALZXWPXTGCUWONR");
    tmp_msg_1.plan_size = 57016U;
    tmp_msg_1.change_time = 0.987869584289;
    tmp_msg_1.change_sid = 8631U;
    tmp_msg_1.change_sname.assign("SXCXRMQVZBAANGDNLGKCBPSLTJRRWXHDTJBENDPNVKLPZOKROPOVWEUJOTOSGNJMQGPRXKBRXKOVIEQUFWNYXTDWNAPWDWBMKPSTHKPHQBAYZRQFMRM");
    const char tmp_tmp_msg_1_0[] = {-105, 44, -83, -117, -61, -21, 83, 7, -115, 122, 85, -23, 60, 116, -57, 107, -92, 109, 86, -38, -108, -103, -89, 114, -95, 63, 104, -66, 123, -95, 69, 66, 102, -54, 89, 101, -30, -8, 54, 119, 9, 126, 50, 52, -98, 30, -100, 19, 92, -107, 54, -44, -9, 53, 63, 46, 107, 123, -6, 32, 101, -78, -44, -20, 47, -112, -84, -17, -58, 31, -84, -33, 42, 23, -109, -71, 101, 13, 111, -75, 49, -106, 35, 110, 26, -44, 34, 83, -89, -44, 69, -21, -113, -98, -96, 36, -48, -25, 81, 120, 112, 54, 68, 63, -70, 53, 2, 47, -11, -118, -13, -1, 37, -13, -49, -125, -69, -52, -68, 70, 81, 59, -25, -49, -18, 7, -4, -22, -2, 76, -100, -58, -30, -85, -44, 13, 76, 100, -89};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.193392433886);
    msg.setSource(51836U);
    msg.setSourceEntity(173U);
    msg.setDestination(30972U);
    msg.setDestinationEntity(106U);
    msg.plan_count = 50472U;
    msg.plan_size = 1867654737U;
    msg.change_time = 0.498369808164;
    msg.change_sid = 5186U;
    msg.change_sname.assign("ERMGZDZTDTVQADFOYEKDANCVLQINDELHCQIUPWVVIRZFJDPMFGHLTGAWCSSAJGKYXSIIEVHEDOIIAQOALFXTP");
    const char tmp_msg_0[] = {66, -1, -91, -1, 114, -74, -105, 31, 39, 10, -49, -17, -77, -126, -59, 103, 118, -122, 83, -54, 60, 16, 52, 109, 66, 64, -128, -124, -10, 94, -69, 90, 58, 50, -72, -40, 113, 12, 107, -16, 16, -104, 80, 37, -59, 83};
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
    msg.setTimeStamp(0.601839843847);
    msg.setSource(28605U);
    msg.setSourceEntity(128U);
    msg.setDestination(11645U);
    msg.setDestinationEntity(106U);
    msg.plan_count = 37225U;
    msg.plan_size = 2099036563U;
    msg.change_time = 0.939286123883;
    msg.change_sid = 5067U;
    msg.change_sname.assign("YMTSOZSKCTLCUZZRLDMIXUXGBANUFKCUZTCNAWRSQNTDEGCQHSJDPFRWPHELGPUXMDYFFTYVWQVRMUJRNAROHIRKCDNZBAJWTPSXZLINGWGTRGZMPVLLXYIDZHNXIBOKGWKJIOBCVBCVYKPIKOFOLAHERYKUXZAEZTNWFBUMBCXBFPVFDMPS");
    const char tmp_msg_0[] = {-9, 77, -106, 101, 54, -32, -51, -119, -35, 4, -86, -41, -112, 114, 90, -10, -93, 88, 115, 7, -15, 98, -66, 27, 2, -51, -16, 83, -6, -3, -64, 72, -78, 22, -104, 47, -94, -111, -117, -86, -124, 23, -90, -93, 42, -68, 49, 80, -40, 111, 54, 113, 5, 54, 100, 56, -127, 106, -88, 14, -62, -81, -63, -28, 68, 87, 119, -127, -32, -115, -122, 96, 79, -14, 9, 24, 27, -74, 112, 14, 86, 97, 123, 75, 52, 105, 53, -45, -43, -106, -34, -29, 11, 100, 41, 96, 13, 73};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QHSPUCQODHHQSXBSXJSZMNWNNVGFGFIRQMJAMMVMKYRGJKLXYRKZBRTSBGNR");
    tmp_msg_1.plan_size = 57632U;
    tmp_msg_1.change_time = 0.106020089107;
    tmp_msg_1.change_sid = 38310U;
    tmp_msg_1.change_sname.assign("QITYUNXSEMNMZWTKFXXHSKJSRHWBOLMWVHQHMXMGZZTRMOCTRDJAIDBKJOFHYLIEHPFRMOCEAFQXIKEUCLABUGUVVDEVBKSTDWQBLGPVHQSXTBYSSFZKVVSJOXWAZNYENPQGF");
    const char tmp_tmp_msg_1_0[] = {97, 56, -89, -111, -8, -108, 95, 82, 46, -109, -83, -49, -78, 114, -62, -6, -20, -87, 57, -111, 90, -52, -51, 33, -36, -73, 5, 10, -89, -75, 63, 100, 49, -18, 41, -94, 91, -80, -111, 2, -68, -48, 60, -122, -8, -1, -53, -51, -46, -62, -122, -49, 89, 33, -5, -92, -15, 13, -37, 103, 83};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.287620767616);
    msg.setSource(11263U);
    msg.setSourceEntity(153U);
    msg.setDestination(24528U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("VBBPNATWCQSDNSDESOBXYQCDNIW");
    msg.plan_size = 46413U;
    msg.change_time = 0.276440108226;
    msg.change_sid = 40966U;
    msg.change_sname.assign("FQVSBENEUEDTGLSIRSLXMFNMWTOTEKHGWEVOSIKVUNJBICNMPUADJODVHXZAVILVCDJALGTUOSXUPKAFLFQLFGWPRXWZMGINYQBEVBYTSBMQ");
    const char tmp_msg_0[] = {-86, 86, -77, -17, 110, 32, 4, 7, -82, 43, -86, -107, -76, 109, 68, -25, 31, 44, -53, -105, -85, 42, 33, 72, -128, 55, 41, -55, 82, 118, -39, -34, -68, -38, -111, 60, 0, 102, 51, 9, 5, 114, 60, -35, -26, -55, -47, 9, 10, 43, -99, 113, 120, 109, 15, 60, -24, -7, 8, -71, 76, 49, 99, 37, 13, 7, -8, 90, -117, 14, 45, 123, 20, 108, -34, 125, 87, -14, -83, 7, -109, -21, -89, 117, 121, 46, -38, 89, -55, -3, -103, 35, 85, -41, 101, -27, 96, 61, 29, 27, -29, 54, 107, 121, 82, 70, 29, -123, -43, 35, -112, -75, 19, 62, -121, -15, -118, -112, 77, -124, -4, -23, -68, 14, 1, 124, 84, -36, -73, 98, -48, 30, 24, -78, 87, -61, -46, 91, 49, -20, -88, 6, -19, -102, -104, -111, 124, 49, 101, -22, 97, 116, 90, 36, -53, 92, 113, -58, 126, -109, 72, 54, -125, 43, 36, -91, -94, -119, 112, 0, -103, -20, 116, 76, 111, 122, 119, -58, -53, 13, 0, 43};
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
    msg.setTimeStamp(0.239849971099);
    msg.setSource(17017U);
    msg.setSourceEntity(210U);
    msg.setDestination(46173U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("UGCBYLJZTITYVJBWQGVSRFPGOPGLQBSJKHPBAIQTARNAWLOXHINMTTIYNBSUKYOOZBOXCIMRQYTARXSMREBDGQFFPDRMMPEAUVPUZVUYCRKFIQKGYWFXKLYCETLALLSAWKEJBSMWDECSDNROGDSXJEECQYOPIRNOQXNZCFFLPCZXIKSDMODMAMEVUGOUHJRNZMWFZBALCHYHEHHXAWNIHXCQDVGPGUVH");
    msg.plan_size = 21512U;
    msg.change_time = 0.507877747408;
    msg.change_sid = 21187U;
    msg.change_sname.assign("VLHOFFIMBADLYKVKCSYENYZWXQFWGAHYNPRLZIOCPVZEWZCPTOAQYLBKSKCVJIISDFEAJTUKHHBLBEUPTNKMHZZEDXWGTSPECIPFFYJXRXBDWHDJNJNHWZOORVODBIOKPFXFRDKCAYEPLGOLTHNVISYKLMRSCALXHTXLEVATVGCJIUDMWVFWSJSMUPUUQUWXRMXQRGOJRFRGGBMDNEBZRDYQIIBQ");
    const char tmp_msg_0[] = {120, -44, -63, -27, 30, -91, 58, -87, -10, -104, -44, -52, -98, -1, 6, 106, 120, 24, 81, 46, -97, 4, -38, -110, -83, 86, 48, 124, -2, -8, 83, -125, -48, -26, -26, 8, -98, 124, 33, -63, -82, -73, -23, -18, -51, 61, -71, -57, 34, 44, 98, -4, 58, -69, 68, 117, 85, -34, -106, -12, 3, -27, 17, 7, -82, 75, 64, -89, 75, -106, -14, 87, 76, 11, -74, -48, 94, -27, -120, 51, 39, -5, 103, -38};
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
    msg.setTimeStamp(0.0465110790288);
    msg.setSource(27147U);
    msg.setSourceEntity(57U);
    msg.setDestination(61630U);
    msg.setDestinationEntity(146U);
    msg.plan_id.assign("BHJIJVVLWGRNXYAKCGCNKXFJIXUQCUPAYNZRQBSAZWELTMQEPAMBZPCEPDJWZZNYIXGMNBKIASXDUPSGWLOHCDKRFMTBOWHZEROYFMKIWTACKVIUMMLIDNOSSDOGXRQNNSPRGCRDHTFTZBRTPRKMQFUVVQFILLWFFPNTSNZZBOJMUJBOKSHVJJDETBUGRGJHUODTEEYHWSHAXLXAFOGOCQAZYLKHHBDQYDPCUPQXIKYFJVV");
    msg.plan_size = 8983U;
    msg.change_time = 0.208954663482;
    msg.change_sid = 48774U;
    msg.change_sname.assign("EOIAQCAKMAPYEZJJNOYGXBZDXEFGIISIZZVHXWNRTDUBPACHDCUFSG");
    const char tmp_msg_0[] = {-110, -60, 119, -21, 106, -38, 31, -29, -6, -117, 27, 126, 77, 28, 97, 61, -72, -119, -6, 79, -122, -44, 17, -62, 72, -80, 94, -109, -33, 25, -46, 50, 10, 8, 125, -11, -18, -119, 120, -2, -73, 87, -2, 62, -100, 69, -25, -126, 98, -59, 110, 66, -52, -43, 117, 75, -65, -9, -30, 103, -30, 39, 25, -56, 117, -113, 77, -101, -29, 4, -64, -115, 14, -84, -11, 96, 42, -92, 24, -127, 34, 109, 99, 13, -111, -51, 80, 93, 65, 41, 11, -73, -23, 106, 62, 11, -117, 16, -103, 9};
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
    msg.setTimeStamp(0.684131058203);
    msg.setSource(16439U);
    msg.setSourceEntity(181U);
    msg.setDestination(10142U);
    msg.setDestinationEntity(131U);
    msg.type = 181U;
    msg.op = 152U;
    msg.request_id = 63741U;
    msg.plan_id.assign("TCMSTRLSWQDYLJNKVGYHOYADWNVXPAQZOBVWKRZJMEFCTYDCRCYPVJOAWUPNHBCOUUJBVIFKWLCHBZSTZQALYPKMOJYMKEYSTFOMRKWPPISGJKTQQEFNCIMQJVOGPVEBIPPTRNYPFHXCXQVRUOYWAZCKGQZRUIBUHZBILRNESSTKBFTSLLDUGHIGDDEWAVJQLDE");
    msg.flags = 52060U;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("MVMLLQIYXMPNVNSVEZIIPKGLFXECXSWOFGBSBUPGTFNXWRFDBEYKCESEHG");
    tmp_msg_0.value = 102U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LNGBWHZAEFEFVINBSHKWVZXUWATMLKGYYKDCNLQFFMVNASLJLXYTQXHGQVYBNOHCZQCENKHWFUQZP");

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
    msg.setTimeStamp(0.36027998117);
    msg.setSource(33676U);
    msg.setSourceEntity(163U);
    msg.setDestination(55614U);
    msg.setDestinationEntity(104U);
    msg.type = 245U;
    msg.op = 125U;
    msg.request_id = 36328U;
    msg.plan_id.assign("ANMQSAYDQVSXIPARKPNQNLLGTTYWFFGOBFNJBLGABORQXOWRGJPBGCKOXXIWNJRYHUDVTBUUQDZTCECRSSKPLUIVWIVSJEIUYIKDMZHHBKAWKHZMDPEPUEURKDOXYZLUVWCTOBZVEHTCDHJIHWZGEJHON");
    msg.flags = 50878U;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.942659378171;
    tmp_msg_0.sys_src = 36920U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WOMRMZFYITMOGEXOGLZKKSHVBYAMXPUVSTMPHEOKVIIW");

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
    msg.setTimeStamp(0.152820036431);
    msg.setSource(15617U);
    msg.setSourceEntity(251U);
    msg.setDestination(27356U);
    msg.setDestinationEntity(141U);
    msg.type = 105U;
    msg.op = 154U;
    msg.request_id = 3258U;
    msg.plan_id.assign("EPTHANHVJCVSJPELAWDOKHRHPWPQZLMBODTLDTQRXJRWZRBCXFBVYOVLRSBEPYSHC");
    msg.flags = 2468U;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 70U;
    tmp_msg_0.flags = 206U;
    tmp_msg_0.description.assign("TXLINEJIJURIQSYVMANGTBAGJZFLAAHUBYKGKAVMILFMTVSHKRYEVZTQQUDPWVKRDFONNPEPBYWDJOYKPKSKOVVATJGVGPCSQZXLIYHUDXZERAEWCOYKIC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XIHESJHWTEKYKBOEX");

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
    msg.setTimeStamp(0.483656067016);
    msg.setSource(46608U);
    msg.setSourceEntity(184U);
    msg.setDestination(6651U);
    msg.setDestinationEntity(112U);
    msg.state = 21U;
    msg.plan_id.assign("LBEVQHRYKYFMSNJTTCMURJNJCILPZGWKYFWOPYABWLJPOXSWEPNNNULZEEWXHOPHVMDOHOFXGAQEGUPCPAIZGHDVQVYKKAYFDWAGSZXSTROVKBL");
    msg.plan_eta = 265474804;
    msg.plan_progress = 0.550432602549;
    msg.man_id.assign("GZXCFCTCSZPPWHDTNPVZLEUNHVLGSYBTZIXDGUBSPXBLDRYWUYWQTZXOKNAJRJCAYSPRQPBCTJYBWNFUFKFROWXHDRVLJXBFPOGYWGEKOOWDSFSNUPIUFIGRNTQCVQFODDSQOINKISIYOIXAYSUJBNAZRTZCEZLPKUKTLEJYMDMFWIHWVK");
    msg.man_type = 22961U;
    msg.man_eta = -869938062;
    msg.last_outcome = 37U;

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
    msg.setTimeStamp(0.720404114717);
    msg.setSource(29745U);
    msg.setSourceEntity(42U);
    msg.setDestination(7105U);
    msg.setDestinationEntity(178U);
    msg.state = 82U;
    msg.plan_id.assign("KNGZTMUNRSCQDUTHLPSICDWZBSMYKDPCPMLJQFXNIXZELQWWHMOJKERHIRYQYWKXWIIOLVTBSDHIRMNKRYRPUTZIBYCPEZHYEOPGNZAMSGOFPENXEBKUBPXMAWLVUWFXEPAZBLJFVHVBXAJRDDWTXUJCKLMIADEQSZ");
    msg.plan_eta = -1268524219;
    msg.plan_progress = 0.0265939225411;
    msg.man_id.assign("CZRYIEZOCVSNLLUXLPTAERLJZURTKOLXOWTRHKARHDVDPGPCKVZISFXRVCEGILDGYZGYHHQHDGKUOEDIIABBQUSBFLSQJFWJBHESWWVPDBBCIWHFJKMYTMAVNPXDNUEPFGPMQ");
    msg.man_type = 23481U;
    msg.man_eta = 201150025;
    msg.last_outcome = 104U;

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
    msg.setTimeStamp(0.982631601857);
    msg.setSource(10603U);
    msg.setSourceEntity(72U);
    msg.setDestination(48982U);
    msg.setDestinationEntity(82U);
    msg.state = 235U;
    msg.plan_id.assign("VICQGENLQCMRAGBATKOKXGHHYBGVRGSZXWIOCHZEVWNGKXWIRLYYDKULLHKZRHDNUWIHVPFOLJIBZIMQUWWOLUPBFFDUXAJLDBSPNKPCYUEAGSENPXVYJFCNTRQPCJEYAWXDPPUXSAIFJDUFOYKRTJXQRQHEWTKSEBTTNAJMUTFSZVLRQTCZVGQI");
    msg.plan_eta = 1117327070;
    msg.plan_progress = 0.0504387433196;
    msg.man_id.assign("VVMEQLQDRWGOCGJMQWUUWLODZKUWPSAHYGLBHRAAXOCKKNOJFZVNEWSRXHZNIBZXHCPOSQFSPMRTBZYYPXYMEELROXNMGQDKAOTKZXDHWGZNVMQRJBX");
    msg.man_type = 59611U;
    msg.man_eta = -318348428;
    msg.last_outcome = 81U;

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
    msg.setTimeStamp(0.77954132237);
    msg.setSource(9951U);
    msg.setSourceEntity(128U);
    msg.setDestination(15416U);
    msg.setDestinationEntity(156U);
    msg.name.assign("RCBQLSXFOCWNKXARPSLSTYGXAXZTAQRHKADLBQYLFJYUBPWTJJXVKMHCPBXOLMYTEPKFEUFZLZETMHFLIRTZDWRNEBWRHGKIYCBFNVXGHVZVZIWEKNSRUQKJJJFGYWRWSIQUBP");
    msg.value.assign("CGKQPXHVNKXVPJKWEUUEBXTMJSYIHHUCU");
    msg.type = 179U;
    msg.access = 243U;

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
    msg.setTimeStamp(0.664052991831);
    msg.setSource(16711U);
    msg.setSourceEntity(131U);
    msg.setDestination(46122U);
    msg.setDestinationEntity(200U);
    msg.name.assign("GYKPKKWECNJBEEZFRGWZICDEZLIFTPILBCRHKOFZGZTAMLLGYHYZWWVIDEIACUYPLCJMYKNGHEJMDCUUHDRUSQWITPHUPIKOKDXRMWHSBQPVSLBYVDSMUOFXIWONFXOSWQLKRIBSRKGAEBVSNTCXJXYFOHNFYMDMABNOEHTQOTPXJDTHXTFHQVBUUNGGLSBRZVEIJVUNGAMDLRCSJPVWACJXLJZNYQRUVAOJQQQXDTYTZONRZBMFKQXAAVPAC");
    msg.value.assign("RMLLKCREBTPBNOVXEMEWPDEAOJQFRZOCSAKCYQZDOMLPJYBXFFQGWPAUWVLYGPGFNMWUUTDZVERPCUBIKIJQQKNSSYTBBBRYLXHRTKTLWVDETJEZZLHHCJOIDAHZSIJASMPYS");
    msg.type = 237U;
    msg.access = 108U;

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
    msg.setTimeStamp(0.887107818641);
    msg.setSource(59404U);
    msg.setSourceEntity(1U);
    msg.setDestination(25802U);
    msg.setDestinationEntity(24U);
    msg.name.assign("VVPQCAYSEVHCMWNGEPXT");
    msg.value.assign("THNRFLPVESFHZISFWDIGSOAIAPNEQQAKRDCHVDKDVNSXIWNIXPTKMNQMMDYHESTZWGWD");
    msg.type = 126U;
    msg.access = 120U;

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
    msg.setTimeStamp(0.525972977232);
    msg.setSource(5768U);
    msg.setSourceEntity(110U);
    msg.setDestination(2691U);
    msg.setDestinationEntity(149U);
    msg.cmd = 199U;
    msg.op = 226U;
    msg.plan_id.assign("YIKKMRJFGYPGFXSBHZBKJQGKYQBWRZHMWRUYOACAUSYKDIUREPFJHBDVDIHRPEASDLWGHNSDBZOAIOVBYVOMXFVYWUOIVIKARYHGH");
    msg.params.assign("OGWOMIXPARZTJULDWDGKPXKGYFLYUGFFHZJYPFHKOBIUCTFUVLWSLIZVRDBGGXIEAANMWGNWDVXFICMVDTAKJLKDLMEZJCVCTTATKTEIZGHRDRBLKMYGEHXPRSOQUIJLPUQNSIVWOVXYXMPXHBEUNJQBZQKYCFEQHSEFNYVITWDEQPUOUDSLVTRWORZBMICCSWBTNQANSBUZXAGRPZYQANZFWXMMSCHOEJB");

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
    msg.setTimeStamp(0.645039495206);
    msg.setSource(29819U);
    msg.setSourceEntity(46U);
    msg.setDestination(56544U);
    msg.setDestinationEntity(20U);
    msg.cmd = 187U;
    msg.op = 72U;
    msg.plan_id.assign("FVIEHUYZMYEYKZFHJLYDFILEMEZGOHJYAUNBZFRPUUSBRLOCPRETXTHASVPDOXVIQPYXAKTXQDDRGZFTLQCKHRTVWVAYTQHAOBUDLISYPBDWJIMHIERCTRWXPVCACSIDOAENRWFGJTUKAOOCUHOMSSBYGDNVBTJWRSMWNZNQBLAWBJQGSZJEKDGXQCGNEX");
    msg.params.assign("BSDRXSINVOIIAJAIGQVMIAEGTEFDXHOFTMMTHEJKAVKQLJSYNBWFTEPTZFLNMPNEIVRBXAATGPVMYAQRLZUJUNSUVQCHPZLSHVYQSLOEOCWHUBNZGQHDGCGKYXFRUPMUHHAXMDJX");

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
    msg.setTimeStamp(0.344595282157);
    msg.setSource(9713U);
    msg.setSourceEntity(220U);
    msg.setDestination(56139U);
    msg.setDestinationEntity(10U);
    msg.cmd = 15U;
    msg.op = 165U;
    msg.plan_id.assign("DYDAHTRXSNZHZRLTOTYOTXBOISEGGYGHWHXBXSYNBSKYBLTWGIQGUFFQEAZHDNWHZBBRTXCNMBCPOHPZNLPEUFQKMTPNDRIWLICQZCKELBTEULRLFCHOVINWJWJJKVCFFIPWACSZBMUMLKVECUCFHIRRUJ");
    msg.params.assign("CNGOMLIQVOHHINGLVGZPSZWQTUKHKJYHRGNYFAEPZROQLVYFVIQWFZLRXQWQTMNMNRBGEXRUXAGBGREUWVACDOKFVBBMHWLEKPQCHZEGSMEOCDXZJVZHVBKASFJFOIODCNDMJDNLWYYGCBOSPYTIMESXNSWYYTTNAKTPPC");

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
    msg.setTimeStamp(0.51819643793);
    msg.setSource(30678U);
    msg.setSourceEntity(105U);
    msg.setDestination(34247U);
    msg.setDestinationEntity(9U);
    msg.group_name.assign("NARGNWVSECHSSZZFWPJGTFYJGFZSXDNWZXANANATWOCEVHFQBNDIYLURIESTDTSSRXQJABKOFXRVGVHUKBQEQMBZRIFVPOLPCGHGKFDGPGODQYZHQME");
    msg.op = 131U;
    msg.lat = 0.923321701548;
    msg.lon = 0.799780487595;
    msg.height = 0.549431749431;
    msg.x = 0.285008030709;
    msg.y = 0.617895069619;
    msg.z = 0.49505131481;
    msg.phi = 0.451307749061;
    msg.theta = 0.325453406703;
    msg.psi = 0.0209681241882;
    msg.vx = 0.735053911531;
    msg.vy = 0.543549278775;
    msg.vz = 0.850976018521;
    msg.p = 0.0166136957369;
    msg.q = 0.341603089116;
    msg.r = 0.480508137528;
    msg.svx = 0.226245050216;
    msg.svy = 0.155338901519;
    msg.svz = 0.133086244939;

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
    msg.setTimeStamp(0.320933244457);
    msg.setSource(35885U);
    msg.setSourceEntity(193U);
    msg.setDestination(18450U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("VSNFALYFSXBFCNZFNZXMZSLNUQTWENXAREIGJOBMNQOIORBWFBWZ");
    msg.op = 48U;
    msg.lat = 0.17799950597;
    msg.lon = 0.259386496347;
    msg.height = 0.354672485985;
    msg.x = 0.500918466287;
    msg.y = 0.911318102721;
    msg.z = 0.920108819053;
    msg.phi = 0.594928656688;
    msg.theta = 0.123257883768;
    msg.psi = 0.158274361797;
    msg.vx = 0.190718282198;
    msg.vy = 0.847632915722;
    msg.vz = 0.692783046967;
    msg.p = 0.864670907036;
    msg.q = 0.449919704446;
    msg.r = 0.991180263691;
    msg.svx = 0.771924832801;
    msg.svy = 0.526548876235;
    msg.svz = 0.443150367625;

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
    msg.setTimeStamp(0.510981472913);
    msg.setSource(54090U);
    msg.setSourceEntity(129U);
    msg.setDestination(44974U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("NOQAKZABWYYWJVEXNARKJJMJFZUGENXXOKMQTBANBSXGETMPYXGEWHMKLTVVFRD");
    msg.op = 117U;
    msg.lat = 0.921229745337;
    msg.lon = 0.776558252702;
    msg.height = 0.525487801952;
    msg.x = 0.16099335964;
    msg.y = 0.669887750215;
    msg.z = 0.185288855007;
    msg.phi = 0.489087032279;
    msg.theta = 0.377721050244;
    msg.psi = 0.84240097972;
    msg.vx = 0.606470896373;
    msg.vy = 0.482364066878;
    msg.vz = 0.992819162039;
    msg.p = 0.0537584099001;
    msg.q = 0.37283545894;
    msg.r = 0.368591432521;
    msg.svx = 0.0611477872425;
    msg.svy = 0.114852597352;
    msg.svz = 0.793928832121;

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
    msg.setTimeStamp(0.078227692514);
    msg.setSource(41660U);
    msg.setSourceEntity(1U);
    msg.setDestination(56311U);
    msg.setDestinationEntity(144U);
    msg.plan_id.assign("CJCIVKVEUADVEGOQCEFCQNRTDIKTLNCIJLWHTWJZWALZSBXQRYGVGMMMZKFKEKDTBTAIWGOGHPZLXQFNSWYRGHKQXTYJJKMSYJKHHXDDDZFJ");
    msg.type = 28U;
    msg.properties = 139U;
    msg.durations.assign("FTXLFBNZIJYZDTQMYCAZNQATKVUNDQPZBKZLFDCRMERBKNPXBIJVYVSRGVJHRHVIPHLEURBFOCSQMAUGIEWJNCKOQFIMJCWWTYGINJEMLCMWKRTMMIELJLKQXZRUUEDGSVFLKYBQNUECQQUATOGOHUYVQUSDUAZCKTJTPPOCCLZSPD");
    msg.distances.assign("URQPNPUNRSYILSMOTIHESZEABVJNHOTBVMWSLGRCWDBPPQURCNGJHRLGBZRJIIDJAGBTUCWAWHMCIKOILZOH");
    msg.actions.assign("WTMGBOLCYPKLWFROQDPUTXHHIGRGKIDTEYRXQOHCGRPNAUMVLAKGHNYRHWAMBSMXFDCNQOULNWFBQRXKJKFAEELJCUOAPZVRNDMJCBYIUZBIDKJBNPITTAQXZGVWZDHJUNNDKQF");
    msg.fuel.assign("EWQCDPYHXDCWRDTYIMLMLHZVCZJJLPDXQRZJLUHEMULMPJLXOCATFTY");

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
    msg.setTimeStamp(0.651394654518);
    msg.setSource(18239U);
    msg.setSourceEntity(146U);
    msg.setDestination(51106U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("GRJHIXPZXLEQVGUYVILPKAPAUDLIZYTYTZNICWSQCJYMCSMLQOHUFENWQDEMAMOJDSVUSVKTXEHBXQCUTNQJXQBXKSIODNFOTGLIKRJZV");
    msg.type = 19U;
    msg.properties = 141U;
    msg.durations.assign("VERIBZIBQNBPNXMDJZDHCGNOHGTUOCGCJLOLXNPAOAQOQFJTQZRTXQUSKDUTUIDOIUZOCSLKJMFFYEBULZOICKKRIFYULIOXAQVGXEHQDSZGWQRFMKMYWZMITGCJLDYWXQJHTDKNTPHTYABNXNPWVDPUJAWFALVBYW");
    msg.distances.assign("YGQLYQJAURBVDNJHMTJLTVTEJYKJKZNPBQIWMZUWFOUVTSKABWKCSEPMEUAMDOVUXPSTHAKWVCFEXVHKPPSJVRYDQZPUSMTBOXOPDXHDGGALZGWKEQIYLSCIDLXJRBGXSCSZOLNOMXICCBRGQYTDSEAFZYNHTYMUFRDINTPWBMHINZCQRBIXUHLZKZVNVGYKMJPNFBQNFGOTIYCQZPLD");
    msg.actions.assign("TKEASJYAOVKLYBKDLKNZRXDWQQBKWPSEUVWQVDHHZJUJJUGVLUPGXNLCVDGEZIHQMSBBCOIDXYTFALPGSBLRAYR");
    msg.fuel.assign("CMDSRKVQXJQZIQLU");

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
    msg.setTimeStamp(0.917926014431);
    msg.setSource(23114U);
    msg.setSourceEntity(172U);
    msg.setDestination(4648U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("ZQWNJGVKZRECTEIGLTKCWWBHDBTRNVFIZQTXRDBDKUUQAQIBAGMEOCEHBFNSHGEUEFSAVJOWFESJWIDZFTLRGYPMJMCSMOAQVDXUVLHGMCMBXADPVDIVLRLIWLWFB");
    msg.type = 139U;
    msg.properties = 11U;
    msg.durations.assign("XQRDHNKNJEUZEIPWUYILZOEPYBGCVSKJDELCMWMPWNONODZGAJGMKBEGNNMBVAVCCFMJHPIZIGXLUKWFKJXCBLXKIHQQCSICYHJOWQVAHQSQZOTUZFQNNSJSBPIXFAJVXUWOFLWDSGMRKBXEVDFUWYEETAMOFMAAETMTVUIPLRRSQFDTYZAIYFTXBRRTCXKYJWURCPGPZLRZNJPLLTTHSVCKPBDDOXBSYAWV");
    msg.distances.assign("ZITKKYWHVCFSIORRSDLRCJOSDOISGQRPKPGYSMJHPEJHGFILVBJXSLWRBVBDZYVODIGRQWXCYWNBNUOJMPBIXCOXFLLQNULMTXKRPDRCMFQVVDQFZCUNMUWNPGFPQCZHAIPPCNTBHLGYZMFBTTAEYIHJAFAUEAWBJVNVBUXHEXLKATQUGXUUIOOYDHZXJDV");
    msg.actions.assign("QFOBPBAZFIFUERIQTNVNHDBAFXGKCWMHGVLPCBFKSUIGLEUUZUHUJKSJDZAEMQZKUZOMCJQHJMSABUOVXQEXNDSTBDVKXCFXGRDQGMLF");
    msg.fuel.assign("DRJXSVQYQIEEOMPLLKIVCHIANRFDZTFRSEHLEFZEXOMVHGAXMDPKBZHPSNYBIOBCDEKHUPT");

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
    msg.setTimeStamp(0.766353203111);
    msg.setSource(772U);
    msg.setSourceEntity(133U);
    msg.setDestination(18027U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.292099841223;
    msg.lon = 0.515218010541;
    msg.depth = 0.857603227571;
    msg.roll = 0.0882995519547;
    msg.pitch = 0.39868369023;
    msg.yaw = 0.195453600256;
    msg.rcp_time = 0.825735959093;
    msg.sid.assign("UNSDEKCFWXAAUSDVOETYPAOZNMTAMFDNWPHQGQLOVESHEIQLFLMSMUWEGKWSYJLODHHRRZCWJHYYWUQALTDZQPOPBHZAFPIGRCXEBRIBTRFYJEX");
    msg.s_type = 206U;

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
    msg.setTimeStamp(0.206826715552);
    msg.setSource(41860U);
    msg.setSourceEntity(126U);
    msg.setDestination(29151U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.502903427192;
    msg.lon = 0.0525177270481;
    msg.depth = 0.86175447567;
    msg.roll = 0.57357935292;
    msg.pitch = 0.0570349811839;
    msg.yaw = 0.211314675663;
    msg.rcp_time = 0.0419698554828;
    msg.sid.assign("MTKLJDZIAPEGXNVDLIGIBOCXMXILTTCRNBOIYFAWLLZVCLPGVTKOEBTSTYSUNKLHRJHVCFJXQHZUJQUOKNYCWGLWSEGTSEHDONFDFIQOBJJNKSMKURSCPNIIZPCRMQBXUZVQRNFMYZNEKP");
    msg.s_type = 70U;

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
    msg.setTimeStamp(0.502203109937);
    msg.setSource(14116U);
    msg.setSourceEntity(32U);
    msg.setDestination(42024U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.369477985731;
    msg.lon = 0.327965690689;
    msg.depth = 0.880734171712;
    msg.roll = 0.468096008526;
    msg.pitch = 0.912381473769;
    msg.yaw = 0.570458574062;
    msg.rcp_time = 0.663495585027;
    msg.sid.assign("LWKPLIHLGWFCIJBYVBGQJUXJPGZFOQAPOUOQMVRQSLYMZGARMMCODWPOWAUFZSDRRTSNYUPJALDPCCYEWZABYGFXMDEDQHTQIPRFSTFTJUMNBEQULCBIGMSVMTCGSIULHBADXYNUFNTKHJEFRXVGYOXWKPLSNYKKNZEDDFEEXIFJNOJIJHXAVCWCWHOLQKKGLTTCPTXSDYREBWVDRTHSVZBQVRHNJIKIZKSKHM");
    msg.s_type = 164U;

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
    msg.setTimeStamp(0.651404782636);
    msg.setSource(24431U);
    msg.setSourceEntity(38U);
    msg.setDestination(10904U);
    msg.setDestinationEntity(38U);
    msg.id.assign("HDUPMXUYXGMUCYYMCAIQOLOPIAHJZBKVEIOAZKLRANTQZSCJRYTSKXKNOJDCSAGQFQFBJOWEYEKBOXROXAKDZSFYJDNWMCOLZVUWLAFS");
    msg.sensor_class.assign("QHGNCXKIOSHRKEFNREXZRFCUNGLMJT");
    msg.lat = 0.60669374891;
    msg.lon = 0.8617351147;
    msg.alt = 0.00779501860242;
    msg.heading = 0.549734011383;
    msg.data.assign("IGSWQELNDOQCIKNQGBYLFCAJXWQJDTKNYJXUVTXSVTJGKHSBHYOWIJWCAUXFCDTOOXYBHSAVMDGRBELRLXUAUQDFXHAJFJPNNBZAIITGHZNIWYZSJMGOMFHTUOPLVLWNXOMEYUSTZQIYJFMFNPRGHKTYBMESFHFLLVMSHEVRQLBPKBCQUROEBZQWOCQSGYUDCJUGIVWCPPPZRACNKOTIDPVZAWIKDNAMXMDKZZK");

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
    msg.setTimeStamp(0.99168237248);
    msg.setSource(9643U);
    msg.setSourceEntity(120U);
    msg.setDestination(20675U);
    msg.setDestinationEntity(50U);
    msg.id.assign("NKWRKOLUXFFIIKFFAMJJDILXVMBJPHQPEIFDLZTJUOVSGUXHEOKKCIDJASPNZDSSGGBWGOVZNRRIQFRLZLTPWWXBCYDURVAYBSRKMWJOPYUFBEJNONVTVHZVPRTUEEZSFPCHLNECVKMQMHEBGSDLQUDHYWNL");
    msg.sensor_class.assign("YASYDGXQHHJKXFBCNYMIFPTEVSDFEZPZECTJBRMYRAVEYQVNBRLJHIJEIDLUPCHNUQXYUQCWOENSMSZSGMJDXAGYMULATFTVKFOFMSEDFVRPQIALYDXCOGQSNCHNTBEOKGOTJZMLUQWWLDWAAJRLUKBKIFZGPWFPB");
    msg.lat = 0.295922615403;
    msg.lon = 0.520644037765;
    msg.alt = 0.479973406032;
    msg.heading = 0.550202705422;
    msg.data.assign("BIMJVVZRRMBLFAIAVIICNYCQUBTTTIAONFUEUAOKMGETTAYPBZ");

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
    msg.setTimeStamp(0.4933068508);
    msg.setSource(56673U);
    msg.setSourceEntity(214U);
    msg.setDestination(35314U);
    msg.setDestinationEntity(59U);
    msg.id.assign("COYFHLIPJCCDYDEKWIRGLBELGAHDAVUXRVLDAUTNGSNFGPCNZOMLYYWBYRWJFHSXRJWZXHQKYUEDOBMHBH");
    msg.sensor_class.assign("DVRIPZUIVAQCSXWPNLEDTZQLUYNYKAOSMVGWPZQOJKIVICBWWJOZKFEALUGTQPZJVLAFESFUUPEUOLHXBKHFIBXVQIXJBFPAGCGZDPGBPQFDTRMIAGCNYJWFLYMZGXNJVEAASXYMZRVENMDCQMLHGEOGXEDFCXYTCWRBHHBUNBRVDHMHOKIYLWWJTO");
    msg.lat = 0.932821455444;
    msg.lon = 0.253225514003;
    msg.alt = 0.242124577052;
    msg.heading = 0.332186937117;
    msg.data.assign("SGDJOYZMWGKUAPHVGIKQKAOSWPKAFVNVTEOHLXMWLPAHXRSNOFIVQPFBVYFABILSHLUKJQHCOGTJHC");

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
    msg.setTimeStamp(0.856776440204);
    msg.setSource(24546U);
    msg.setSourceEntity(129U);
    msg.setDestination(11048U);
    msg.setDestinationEntity(153U);
    msg.id.assign("YITBSKVMQRKRJFRHVJXXUPZWGNQRCZESUJYURWXUPZMHDJAWXJASENXYOOFJBVTOEMZFAZJNKKMAOPXVNESOQLWAKCYCFTHGPQKDLWMMNKBMUCMXONPRIOTCYCGZGCBTWHHPWEILGPRGRNSIFHBVHGXFYKWSDVIQUDIRHAEPWBWOXSIL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HLMLTCHOGYDJXFWXSNVBLUFNIVVHLMOMMCDYTMXRZNAOLPKXOKRPEYNUKCDRJLALUACQOZENQKM");
    tmp_msg_0.feature_type = 117U;
    tmp_msg_0.rgb_red = 99U;
    tmp_msg_0.rgb_green = 105U;
    tmp_msg_0.rgb_blue = 141U;
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
    msg.setTimeStamp(0.795301520741);
    msg.setSource(49800U);
    msg.setSourceEntity(111U);
    msg.setDestination(32485U);
    msg.setDestinationEntity(252U);
    msg.id.assign("CITHYJMNGWSJFWQQQOHPEMPYHOBSAUUKFXQWCVWWCRXWPSKXLGFGCTYNKLMFNEBIPLRSJGBDRAOLIPEEVCFIVUHODDIBGDSYGFNOJBCZB");

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
    msg.setTimeStamp(0.118210454311);
    msg.setSource(27168U);
    msg.setSourceEntity(49U);
    msg.setDestination(64022U);
    msg.setDestinationEntity(117U);
    msg.id.assign("MBUTLULMGJFN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HJFTUURVFQPEZKFWLTPNWUDWBUISKMDNCQMVUXMMAKYMIMENZZOSSPHISXOXYKWSJAQCLBBMZHAAAQOEUWNIOYCJGGBQWVYFZACYMELVELVXZPDUTHXYOEFEYZXDJIVQNUPCMUHRTJSNKAXKJIAHVCDVBPOYRRSTELLODRZFWXKNTLCFZFB");
    tmp_msg_0.feature_type = 32U;
    tmp_msg_0.rgb_red = 193U;
    tmp_msg_0.rgb_green = 25U;
    tmp_msg_0.rgb_blue = 247U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0476356259932;
    tmp_tmp_msg_0_0.lon = 0.745786093599;
    tmp_tmp_msg_0_0.alt = 0.572178392987;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.45385043671);
    msg.setSource(49012U);
    msg.setSourceEntity(161U);
    msg.setDestination(43443U);
    msg.setDestinationEntity(121U);
    msg.id.assign("CAAIGBEKIUZNPUVJWWFFHESHMBVZRQLBMKZXDOBYPUHQUTCJQGDZUSWVZIGKJAXPCOYCXVAOGYVAAPNJGVDSSSXEIGMZRCBGPJBHSFJLZTLLFEWAVGITQHTAEGRRIKKO");
    msg.feature_type = 220U;
    msg.rgb_red = 104U;
    msg.rgb_green = 157U;
    msg.rgb_blue = 117U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.138904869831;
    tmp_msg_0.lon = 0.194359065774;
    tmp_msg_0.alt = 0.234723253985;
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
    msg.setTimeStamp(0.191664351739);
    msg.setSource(46811U);
    msg.setSourceEntity(193U);
    msg.setDestination(33070U);
    msg.setDestinationEntity(194U);
    msg.id.assign("JXWPXWKEIFAGFPPQMJMHQELZXSERZOGITLRAUDBPAQLSIYCAHYHGOFYRTGPADCDFQUJPDTMYYTQZEJVXHLQEINXNEVNYJDFTBMXJTORKCMSHFVZCBSBRGZHJSEVSUCNJGRCIHLSZSMHVWIXBDCYYGWIFWKUGIOXCEKMIWVRVYUZMFMKUWJLKUQARBGADQLBOHKKVBDKSTPYTVSNZWPZCFRBNWOEZFUUCIARGPDKANWOMNNQO");
    msg.feature_type = 253U;
    msg.rgb_red = 70U;
    msg.rgb_green = 146U;
    msg.rgb_blue = 224U;

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
    msg.setTimeStamp(0.370690969732);
    msg.setSource(10077U);
    msg.setSourceEntity(221U);
    msg.setDestination(62308U);
    msg.setDestinationEntity(91U);
    msg.id.assign("CTYZQCVIJROIRQMTRLDRGIBSEASCPYCIGHZWQSYNXIMEOKSPSAPKUQQOKEQPXZABMZHQNHAWGUNGYFXGLKTIAJYBFCDDDZSWWRLTDLWTSSGDC");
    msg.feature_type = 88U;
    msg.rgb_red = 181U;
    msg.rgb_green = 30U;
    msg.rgb_blue = 52U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.546280128109;
    tmp_msg_0.lon = 0.943992751626;
    tmp_msg_0.alt = 0.238690846317;
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
    msg.setTimeStamp(0.216001169681);
    msg.setSource(25235U);
    msg.setSourceEntity(15U);
    msg.setDestination(6677U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.0437529015232;
    msg.lon = 0.146244884084;
    msg.alt = 0.414468308162;

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
    msg.setTimeStamp(0.0840330241315);
    msg.setSource(54740U);
    msg.setSourceEntity(247U);
    msg.setDestination(61878U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.327576663562;
    msg.lon = 0.0922576245546;
    msg.alt = 0.742695575973;

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
    msg.setTimeStamp(0.265682293622);
    msg.setSource(60259U);
    msg.setSourceEntity(143U);
    msg.setDestination(40695U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.460226187937;
    msg.lon = 0.665953984403;
    msg.alt = 0.736958063566;

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
    msg.setTimeStamp(0.116897818786);
    msg.setSource(13063U);
    msg.setSourceEntity(9U);
    msg.setDestination(31019U);
    msg.setDestinationEntity(28U);
    msg.type = 193U;
    msg.id.assign("QEUEDOWJSCKTLNODFRUYRGAHRSXUZFYSMGYUINWLEIPWVOFQHCFARGMCBSHZKEDLAOX");
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.106202943539;
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
    msg.setTimeStamp(0.467575395199);
    msg.setSource(65128U);
    msg.setSourceEntity(97U);
    msg.setDestination(57201U);
    msg.setDestinationEntity(64U);
    msg.type = 234U;
    msg.id.assign("UNTTGVRYKCOYRPXWIEANQJBYTDCMFIOXGFNRESEOSWPPIJOYLXRGYEXIZXCLGHHGIHDSVFUURDZAYNZKYZFXLTWOGFANFMDUMLZSWUCHLZBLJALITQGWGVTFTNQAMTAQDVPHEHUBQIWOKWESJCZCSZPAPCYBDRRYHLDWBNUBBWUPNKGDIKFMUKFOSDAVLCIQXSMMABKJKKVUSXEIQVKSVZPOTHBDJQELHBOQNFEVORVCRTPJMZMG");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 1291692995U;
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
    msg.setTimeStamp(0.934992791269);
    msg.setSource(54021U);
    msg.setSourceEntity(11U);
    msg.setDestination(6134U);
    msg.setDestinationEntity(60U);
    msg.type = 53U;
    msg.id.assign("KQOWDASEIZZPABGUUQUKENEJRZSRAFGFDCMNQJKQKRCOEBRZFUOHHQWCYDMAKBEDXFJE");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.634429057762);
    msg.setSource(55418U);
    msg.setSourceEntity(146U);
    msg.setDestination(57510U);
    msg.setDestinationEntity(83U);
    msg.localname.assign("OZYUAQNFTUPOMVTMBKPMFYZNKJI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DZMEBUSJCHJUCTGNUMHLGFYMKTDKJGLEEVQKBXSVAVLAUJAQUFTMLCIKSDGOEKFLNDLTRUBDZHGJCAVVXAEPRXPCDDH");
    tmp_msg_0.sys_type = 0U;
    tmp_msg_0.owner = 123U;
    tmp_msg_0.lat = 0.780855340965;
    tmp_msg_0.lon = 0.907926466834;
    tmp_msg_0.height = 0.236789388447;
    tmp_msg_0.services.assign("LOFSXVCNQRCSGWAVMJZBNYZQLMHJPHZTUKZYQBLQKNEGEUIKDMYEFXIUJJHVRARFBECIWTTRMRDGFN");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0638757583197);
    msg.setSource(58527U);
    msg.setSourceEntity(141U);
    msg.setDestination(28077U);
    msg.setDestinationEntity(177U);
    msg.localname.assign("LWONRWLNAUERATMGCFNPFKSHMFFYHOTNRLHXORZBGUFTBBZCK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XPVVWTJNYEXKKFOFFUAWRIANHHVULFAZUIPYMUHICGWQDBVCSREMKSTEQDXFJJLCSUSVENBHAKELNBCHDRBHOFUOIFQILSXJWCZVEGUMDOIAJZYFWDYQBDQSIFVOYDWMMXPAYTAPOPWVZZRMBLJZTJFWXLXTZZCYVUWYKZRDGXPLTGPBRMTHALRGKTUNNNPUCTPMKRIGEWZQNQGACTO");
    tmp_msg_0.sys_type = 219U;
    tmp_msg_0.owner = 32923U;
    tmp_msg_0.lat = 0.753471020584;
    tmp_msg_0.lon = 0.556122343463;
    tmp_msg_0.height = 0.312096684705;
    tmp_msg_0.services.assign("IKEHBPIJFRQYDMOPDXFDVTPQCHCBUZWAQLSZVYKVBAUJQCELGLIGNMCBQEDHGBRBDDWSYSGUKCXJYQRKRAJFMQINDPNULYUPTCYAAEINUITMSIWGZFNRXHFNZBQFJOXELWXTRRJAKHSWKJYDXMMGNJMIAFEYIGPSWLTYBITHAHROUAHETXPZLMTXOTNTUOQVONFSCESVZWOWCSPLQGUZKVEZBVGYGXKFXSKEMPDJCVZ");
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
    msg.setTimeStamp(0.836307979713);
    msg.setSource(15644U);
    msg.setSourceEntity(248U);
    msg.setDestination(65335U);
    msg.setDestinationEntity(197U);
    msg.localname.assign("KWIJVZOYRSLIQLNWIEIWFAZCGYMZVDUPHTCZBUGKKGYCTEVPNUJTBAYTXJAFYDIHHOOVFXUNJBLMGBWSPTFKOMKDYIJZUFGESQCRWFBGPDVZCQKJDMKEVZXXURYWRTOAXMCLYNGVNQCXXRDWKCNSEVLRMPXSEDMGOLLRUOEHARIOZHIFAIJQMLZQWBHKOUVQBYJLNUJNNAGTQSPD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NCGCXTXSPLCCAAFUXLUOPAKIPVHFVYNAADETZZKLXPGHEOZQADSHRUZGURXFNIVOBZVSEGQKERFMHFFBWLQSVITGOKDNNPOKJMUGHEYVOJXKICVPJSWVCTKBONDWBQUHOTHGJJLXZWNUEEQDZCSCMUXLMOSWGYJMELAKMCRIMWSRIARQRZIDQTDHQTHGFUQ");
    tmp_msg_0.sys_type = 86U;
    tmp_msg_0.owner = 6390U;
    tmp_msg_0.lat = 0.869964949793;
    tmp_msg_0.lon = 0.980244957745;
    tmp_msg_0.height = 0.81305971421;
    tmp_msg_0.services.assign("ALPVKKDNGZASJUPMAGKFOXURBZSEHQEOXUVHBYUQGVIDWZPTELQIOJWBPCOYODCDGBICLSHFBTFQAGNGSDVHLZMTZCGRFMKXWQWEXBVASFVCXATJIKJYMIHTJBMPOYMUJAMYDZDRZKIUDVBXZPUENROWNSAWCRVRXJRIKLRLENHSGVYTPLVLBNFUJQWTKYLQUFNYLIECGHEQYHPFGIBNXCU");
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
    msg.setTimeStamp(0.271211298734);
    msg.setSource(48544U);
    msg.setSourceEntity(125U);
    msg.setDestination(16976U);
    msg.setDestinationEntity(80U);
    msg.timeline.assign("EZVWEUHOLXCRGKNUKTDZJSPGMOJQBXATXYAMLAMYIYLPYGHZXGJFJMMGZOCYPNQCUVVLFLWDRVBBYVLZHANPDMUAQLMMNKDQQUIUXRXKPGKFWQFISXDYMFTTKTDNPDEFBPXBFUZCVPZIDGVBKJTNQJGEGACOFEQPQYXDNASWCNEHXLOCSHESRZ");
    msg.predicate.assign("GXJCIUDNMF");
    msg.attributes.assign("IFVNREGZJVWEEOTBRQFGHTUAJAVQGABPIOYSNGOHVULKNMXYOFSJYBCDXSEQQMPRCRAFWWLFNCMVXPLBCFCHBMPKZZHWTPCQWACIIVKSTUYXKSQJGJVFFUAMDSIUTZGGTNOIXIZLJQXLMBKNIRUBODZDLXQHPWJJYNPGCLKFCLFPJEEELZQWPDMNSRPDUMMGZVO");

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
    msg.setTimeStamp(0.677249040567);
    msg.setSource(39046U);
    msg.setSourceEntity(153U);
    msg.setDestination(14084U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("ODIVMGUXKYMIGSGJWBYFQJMKEJTCJNRCRELKPQLIYBZPXQRBTIZLZVOYOPUGRKSAPOJADLWCBCHRMNNVMLLOVBATOTTIRCCOEHDTFZDBTZHASUOARQKPFIMAZGNSTQGUXK");
    msg.predicate.assign("MITWCTMLRYVXWROKQKCAEZOMRFOHQZJRUB");
    msg.attributes.assign("SFNDSAJEDETNVLXRTIOVHSYSCBRXUJTXRNPHWHZPBQYPZLEOCAAZBKIMUBDYGFNQMNQIRDSFCHQPDZKAUEHIKHDKSPXQYZOMIWZIIVWV");

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
    msg.setTimeStamp(0.860860582815);
    msg.setSource(30610U);
    msg.setSourceEntity(120U);
    msg.setDestination(4006U);
    msg.setDestinationEntity(14U);
    msg.timeline.assign("NTFOWZTAWIEBGOQUJZVMRVKSTJTDEHIDQDOIXPTCLZUWUBEFCRDGPAZVTVWJFPXLXDJRLAQHULMHBXRZPRGSOABFSVLRSBOJNSMYEHSUJVBUKQWSSWWOMXPVUCNHUGPNIJVZTMIAFNQFYNKIMHYERXAEWQCZHHMAYYCKYQGASMREJPQCMOLZHVNKNRWFQYXIDGFCAFDEOKBLGILZVGHBBTGAYJGNSXKXEILJTKTPDWKPPEFICXUCC");
    msg.predicate.assign("AFNZGIUOEQFMXSIRGRIJEMTEBRHNPUVNEZEPTLNBDCKFASKHXJTFRUBHNWKBFUDTOEOXMMECAJMCNPDCGDJZHHVWPIWXLISINYKUFHENZW");
    msg.attributes.assign("RCPLFCHGXMKZJWYRTKNRVBKPDTKVGRJDBIODGNYQABWBQIIHLZQVKYJYUBIEWGRKFUNMXGSLGWETKNZOMEQOAYXIQFVAJUSFMMUYUDUCJVPXELWLDOHHIUWEHCVERMBDVQMXATPEBFZLHLSGANZSJIWKRBOVIHUIXWHRGDBNJQSVYCURTACXQQOETWXHPNNVTWAAZMGACPKSPYINSCPNXZABSTEOTULZJDZMHDPTJOYSXMFLFOQCZKF");

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
    msg.setTimeStamp(0.915901002758);
    msg.setSource(60567U);
    msg.setSourceEntity(155U);
    msg.setDestination(59368U);
    msg.setDestinationEntity(83U);
    msg.command = 237U;
    msg.goal_id.assign("YPAPPGYRXOTATIORQMNTZMIZIZANAWZCDJFLPKTIGUNVTOAKWMRYKQVBJXDWWIMJHYSXFGCSMUETZQQFJRBWALLOASDEOUQFGLGGAQVHRLCUEPHOOCWYDENVLMZECBULCFNVIDNPSZNMBBECEQDLKUPKNIJTMSMQMBWFZJDIKVFRRNGGYZCFXCYKITOAREKXQWSHDTXSRVUKFPLBGERUZXNABVIVDQYOPSCHSWXBPOUULHJJHHBYGDJHYKSWX");
    msg.goal_xml.assign("TQVEHCDOQYXMMFRAAJVPMENPDYMCFLCAYMODUDFUBKQSRMBGHLBLCFLBUISFHKYYJFOZTYZXSMSEDBIJIWNGNEUYHACRYEMIXQYULHXWILKGJVFRDQDGBEBATUZGTJAEWVNOFHKALWVINDRMWYPFWZWGSVXKPKDNUQBCNXRTXLSZEKQQVGWRPUC");

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
    msg.setTimeStamp(0.3366452141);
    msg.setSource(44183U);
    msg.setSourceEntity(81U);
    msg.setDestination(31873U);
    msg.setDestinationEntity(194U);
    msg.command = 192U;
    msg.goal_id.assign("HUDMMENTGUYSRRCOXCDDMZQDIQJEPQRHIVHEHTDFYHPBJZSHREVZOUAFWXVQYTBBABSOWBXTUCYBGKAWXNEVNGSTCGYXDJKHQYGNHXMDVQBMRKECJSUYUOSTQFIOKZKXVIKENUWYQPOOZJBIMZNFLFPLJVNGZCLJFIRINFJBMWFXUETLRWJLF");
    msg.goal_xml.assign("SNOHHEMMHGSAZCNOCAQNKGMJPYHDQLBCJTAHZXPPOCUKPGISGSMWURCFUJWKNRZCJLPHSSDLXQIQIXITCBKOAZGNRBIUZPBYVRFTODTZFKJFWCRICVASHIIUDAVNKGPETZVVEAGEELZEEVSUWAMABYRGXUTHKQEQEMINBJSMBUDFJQMRDWFYYO");

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
    msg.setTimeStamp(0.711890426128);
    msg.setSource(24208U);
    msg.setSourceEntity(236U);
    msg.setDestination(54059U);
    msg.setDestinationEntity(22U);
    msg.command = 162U;
    msg.goal_id.assign("WHEQDIRHVGSGTPQPGGPCGRJHCEBMKZTJUBVLTASBRYXTZXQWYZVPXNCHCTULYMDLOSOPLSJEEFBRRICIUFQEPMWKELJMWNZOOJOTGGPFEVFXKVWZKZLBRTRYYYIARCFLVAIOSSSUJDDLIRTFKMSXYMVBGILPEFHJOEXPHNEBBSBQCAXUFQTMHQJYXKJG");
    msg.goal_xml.assign("EVVCTCBNKALMNLMIJZCGZWXEOAFOXZZVSIRSYFJLQZUHTQZTMOZHDXQDCUKTLYJXTYBNHSFCDPYUIMTUGUJPTGZWPWPCIWASHEUPPZWUEHILGSSNDVCRFOLSTKIYQBNMGEHKLQHBJMXGNTGVXVQJVBQQGZCRKFRYADQRPBXUWYVHRPAXLBYPWLADNEDOXFWEIMRRHLECMJVAONPADFYMANVTMKBSOFKKXOWODEODIKSAYHKRIEB");

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
    msg.setTimeStamp(0.828239862184);
    msg.setSource(60224U);
    msg.setSourceEntity(221U);
    msg.setDestination(39395U);
    msg.setDestinationEntity(185U);
    msg.op = 252U;
    msg.goal_id.assign("GIRLUYVWKQNGNXTPEEOSIZQEMADFSMYCMUWBJYCFOQIEBPKBQUSPHHYIBIOPRCUFDORFIVWTBKEJDMHFZGRXAZQCDTXIGAUHFWALNKYQCLVJFBYVXNGLLHWLJOZJRPUNGTTRAXXDPMDPJXWLSUXUBQRUGQEVFTRVDODMDYPEIOQPTHCNTIKWYOSXLWJKGNAHLYKVMCRMNBLEVINZGRHSZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RKYVYTVEKGMNFUYAHFJZMOTGQTCKHJKVNZZELAMASEPKFVOPUHHKIUMRNYCBIZRXOOBGNZDUXXPHOCWDXOMYFV");
    tmp_msg_0.predicate.assign("XRSJYCWISXFMMBKTUWKTRSVPWTWVNDQRYNQUMAHGGRLBIADFOKANAVZDFJZLRHTPDUHXBPPGBWTNTQCMJQLBLVJCHXQYJUWXFIBHOADRRRIKJAVLSUDPIKYDAMOSKVJUGZGZGMCLMPCQRWVMISCXAOUXHFNVOPSAAROXVOMTJIYYOSNEKHYTBZJPCEZFNZCNYELVJ");
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
    msg.setTimeStamp(0.216096574016);
    msg.setSource(20785U);
    msg.setSourceEntity(251U);
    msg.setDestination(26098U);
    msg.setDestinationEntity(110U);
    msg.op = 140U;
    msg.goal_id.assign("BSNVWACZBLAUNSYRKOAICIJPXUYVIWCOAXCFLKRZROUBKEDAKAORDGBQVWMHWC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FPTZNXLCBLHOVJSURPXNPDRHKVSNYHHTCNUYOHDYKONSBYORWDQAMJIWGDUXEJIZCNNIYQMIWWTKBXJHGRHCCFQDJFICAQJDOLEZIJIXFGRMMAOLUDVTIVHZHUMLTVRFLDFUAQDKQWXVUFRKLQSESFOZYQAEPEQRA");
    tmp_msg_0.predicate.assign("MFXQRABDKWUFGTRNVSXGCZUDNOCYMJSOFXMWRARLFZOJTNSLELKCYFAIMJQGAQWNRZZIOIHUPKLYCGXGEITSGQCHPMBVZUPTKQZEPFHSWWHWEFBEHMCYTPSMWEQLZCURZIRYDNBVXEGJXBQIIYKEQSKUUXOBMVPIGAHADBTDMKJUXYDHARFKJTOBNBEHIWVPQGFTACPLIUVD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FOQXAWUVKKR");
    tmp_tmp_msg_0_0.attr_type = 225U;
    tmp_tmp_msg_0_0.min.assign("UFVMNBMNQKVGHSFVRXPRQOGLNEBYBIHOFDDPVFWCQAYLXMSRJWFAOOZLGAGWFLJCAZDTPYPUIQNRDDVNXJBZPGGVKNKXSUUTRQBSIJFWTEHXJJWEADQCLOMJMTEJXPHZQCVBZAMSTPWRRMLVCIROUNYEYISWRISDSNCUAKWLEOLYJKMPSQGATVTKPEYZQCCTGHEDCB");
    tmp_tmp_msg_0_0.max.assign("ZHGDWOQRYTVULKALOCZWPDMTUNSSYMHLYVWN");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.838797151834);
    msg.setSource(58103U);
    msg.setSourceEntity(212U);
    msg.setDestination(46959U);
    msg.setDestinationEntity(23U);
    msg.op = 176U;
    msg.goal_id.assign("XWLGUNIAYGTNJCDTPWJPPCYNJUVQBYZJSTVGBVGLRRJUCAHMFRCPWQJGMYKNAAMLCXJJTVBCEDJIHZKYYRDEEZLYWDQMSIKEVSQXZWSYFHCBLVDWUZOIPTHOYDNIHEFQGHOTRMLRXGHHOAPOYKKLXFEQFBLIONNVWDNSPQPZRPXTDMACRFTZGSKUNOTROISUQTLGZAMUIZHFELUGE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VWQEVVJKJYSQRXBRCEUPWLAQBMQOQYNDWRBXTQWGFXYSFCUBZREZZABYMELXJFXNXSESYJMSMPZNRXYCIQEFRPACPNKVGVKTMUJNWKEIPZBVOIDUGMITKHUZTKLVQJOOLURZINWPEANMZHDDFIDGPCVIHZNVNOLOKLRUSRHPXLLPFIAJHGTCOSJUQBSGFCPKATGWMROTJDXYTNY");
    tmp_msg_0.predicate.assign("KMGIFTCWJRNSHBCNXWOTKGSOPKUPKEJJKSPNPUQQOLVGYLOXXVVTEFQDUJHZECLZJOEGIMXTNBVBXZJAGJLDDYTBDYAUGIPWYORGPCHWTOGXRCDZALUTRBUYCWYHROTOAVCAKTDDNCAKWFILVMFHMQTAPQQBYZKXEFGZLGIEDBHQRQNYKVASIJCFBSEMEHFIUASWZEFWZXVU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TEQNPVEJWQRKECZJOMBPOVQCBGDDRIJHWTGEAQRURTHLIOVQDQVJIIHOBLAKFPGKRZPYG");
    tmp_tmp_msg_0_0.attr_type = 2U;
    tmp_tmp_msg_0_0.min.assign("QKCQHTAEVPFEJUSHXWRDYAXVKCLISBTONUDPFJARWDQBLINTDMARPUXXMJAKCHNNBMYGZKHROWISZXEWCCYXUCOAGAETLAIKPGMPSRMSHKLBBCKGZDDOQYENIDCVUYOGPMCOIXKZZXUH");
    tmp_tmp_msg_0_0.max.assign("EBYKEZSUXVXNWRMUQSHHYIKTNFPZSBCDUEFMFLDGETVPWCJHOQIBKWGQUSISSSHQRILXCMRBZTGZWQTUSTKBECJCDNGOPJFKCMBODZFXCXTODCGQYOVPDIVEBKYRLHAXGSUPIJANVAGUXZRXEKZYXYMYAOJNLJFZTKULDHMHOPOIRDTRRPYNFOEJABFPJQQVAHNLLJXRYDWBABQOYGTCQMPWFLPLJHIMDEZAVWHNIARSWLNUUFVTG");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.634733266303);
    msg.setSource(30122U);
    msg.setSourceEntity(148U);
    msg.setDestination(3160U);
    msg.setDestinationEntity(72U);
    msg.name.assign("AFNZVFSFLFXGLNPUUZCLNPITPWJBVKYUQHEKFJAGDJWBMNUUUFEMMAIQSGBSXYCUWSQNJWEQUNQDWOHX");
    msg.attr_type = 70U;
    msg.min.assign("KEWTKCNBROYCVMDVGGKXAGMAGAHUJEMZESYVICTWMJMLYDSGWHJHDRWDECLBCBFPBJXHFBQHKIZXPZPQHYWOISQF");
    msg.max.assign("OJZNOZGQFYFPHRSHWXURBPVYCSEUMONBJCEKYQPJJRYIWHCKSUNMLFBNQUWCCOINCFJNTJSEMGCWRSXPQGQCJOJQMWHETTXSERFOHZKNZQNPCDEBLVXHUUJBJAKFWMTQVNTRGHMIBDIPVDMFNSKAWRLHHKBPGQLWRIVAYKEAXFTFGOO");

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
    msg.setTimeStamp(0.294539988036);
    msg.setSource(26464U);
    msg.setSourceEntity(221U);
    msg.setDestination(34188U);
    msg.setDestinationEntity(62U);
    msg.name.assign("DFBVTXGZXDARYOYYYZRNLKDXIMJSHFXBBABEFUNQPAJWMMMISGCINNCIZCJJDWOSUQWXCSZEQYLLBNPNLOQPHJSKRHEERABBPXTKZLAMVEIFOXVFGPYSQXGDHEVOVTDFETAGV");
    msg.attr_type = 46U;
    msg.min.assign("DMJYARMMCEGFMZZOFDYKIGQXWXCTNLZIUIHQUBGYDZWRMGQZTVCFOVTHTRAPXXDSXALOIFQBLNQHJSFLFDCIJYFPUWGDNWTJOERWCVSQLASOFUCXNHANKHNKZLHTCPEPFWIARPKLXYSPARVBXWBTAZGJEHOIUVKBEBRUGBZOYTQKYSMLGHRAXPRMNEGFIBACHDSPWXLVBEQOPCJBJYGWZQKKJEUUIEHMZVNJNVU");
    msg.max.assign("XHZHHUFLVLXHWXYJZCECJFID");

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
    msg.setTimeStamp(0.558671545135);
    msg.setSource(21674U);
    msg.setSourceEntity(180U);
    msg.setDestination(7660U);
    msg.setDestinationEntity(23U);
    msg.name.assign("UBWPPJVYOWNUDGSDDQUSKMXDCYBLMHWKBIPKQMYWVQJFFOUDBNYZCVUMXLFJZSLRXEUOWTCCZYCODOXZAQSQPJMGYJDOFWFPAXIHKWGASNLXVNHCMHLCIRHRABVTIXPEERGJGWKTR");
    msg.attr_type = 76U;
    msg.min.assign("QUMLLHGGKMZPDDCPECAUGGNZSYCGTWTAFXHQPZPTZRRIROYLDTKVDMUJLSBT");
    msg.max.assign("CDDTXPOXOGRNVAHCMNIFWIGJDMXSULYVHUEHFNMFUZCXQDAAGXNVBFXK");

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
    msg.setTimeStamp(0.135894364118);
    msg.setSource(31708U);
    msg.setSourceEntity(125U);
    msg.setDestination(25784U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("LOUIGNALREOJPBBXPZHHSWJFSTFMYOQXPMJVMGUPWYDZMDDIONRCWEVFSNTRTWLFFTNPEBQANJVXQAXTLGICHDDRYMYGEEQCYWHOQFKDDENCZKGXJLSWIBKHKAWUPKSHUZBZSTZHULQTVHRLQYYNFPORTIIRFEKJUZFPSBGGEIKAFXBMGPBZJL");
    msg.predicate.assign("SUXMVGJBZKXLVAPEKHDYRGYNNORNFTJQHQARBQLOHHVXYGDTVWNFALLQZKESXMRCTMYWIZNYBPAHIQKCEFLFRGMXZLKUXNZJREACCFPTBNMNZSOOZPLFJPWAHFDUNPRBZGJXREUKUSLKAFGGHPJHAYIROYERBKEPVPCVIODOWIQJLTOTXUHWKZVMJFYWICMJTCCDOQCBIAQDNDEYGGZWTIFWUVIIXQMYQWKVSDB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TVUGJRQXLHUUYXINCWJPUMVTMOIQAHCKCEFPTFLYHYPNOQKIGLEZZVZNDTCLVWOGDPMAJFZRCTOVGPHDWXSJRLXQCIGSMATLUMKXAIPBCUXHLKDGWEHQMDGLMDVTFURMLIGXQZHRNOYKXPBBSKXREAEEUANBFCYYVFFAFOPOZNTMCIOFEPJYWKSMWJBRWUXTDSDJZSZABSZRHDNLEJJYFDBGGQSZERVRJIYSQO");
    tmp_msg_0.attr_type = 5U;
    tmp_msg_0.min.assign("YZRRBXQWMFTLROIOPQNVJGYZQWNDHLJUSUKKSGHEZYAYRIOENSLYEKDPJMMWHRCWBGCXXUEBAKMFSZJELTXWJTLDOKMHUVIRABBMWDLKCEESQMGXUNDOZHCRCTUZFMZXWPFGPDOLFPPWLINIYOVFKBMDVVGPAIOGISNYADNKXRJBYKYAUJZAPFBDHMJQSCWVQRUAUCHVUOCAHESFYIOBTFSSHVXWCITDKBXGJTZPTE");
    tmp_msg_0.max.assign("BZWEMYZQXHUJFRU");
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
    msg.setTimeStamp(0.987778483225);
    msg.setSource(59935U);
    msg.setSourceEntity(101U);
    msg.setDestination(43206U);
    msg.setDestinationEntity(228U);
    msg.timeline.assign("QUSFZAHYUIVDCPXOMRHBUBBQEETJSKPLCDCYDNUDPYXCNKOIHHAILTGRBOGULXIKFGSNFLYRFGNMAIWXMVQVGLXEEBRKRSPWYDOSTZEVSTCFZKQUFDKGCQJYLQWXPIEYUJKJFPNZXJODROXGVSZQTETUYHRVPNAFKUBDNHSVLXQQJLDWZCLVPAHOWZSRCBWYORXETJNIIMFASVRLJWMMBWOAVGCCFBYPTAZHZAHGITENJGH");
    msg.predicate.assign("OLRZFIUYPDTLEAJMKWFOYPTDGVQYTRQDKCGMCCWRVKNEJVDKFSGDYTWPOCFMHIWSBOQRYZTXNAKECNZHADQVQHIPSJXAOBVITGYMLLEXEPNHMWUMDFXUAONTIBXPSBAQEQGBJUFUSOXJOAHQZPZSKVSEKIHMTNBWJCQRIAWYBNTZZHYUOCIBMVCLBWPURGUNFHNKDGAIWYZVLWSKMMCRVOFPXFLQYXHKSDFJLECPBJTDRZEJGUEGRAXLG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XMJGHEIYUCMVXZORSEHQJLVFABXXIRKLIQHGEVBSHUBKFEWRTMNIBDAFGSNOVXAWWIOJHWOSFORMBVZKOTLWUNGBSQEWIDPUJEHUZKGTZGLTLMBBJZFPITVTQLHLPARASPMDUCVVPONZNYJCPJWNENRMUCXLWRQYKOKLA");
    tmp_msg_0.attr_type = 163U;
    tmp_msg_0.min.assign("ZAGSVLIBLYFPQGVHFDJHG");
    tmp_msg_0.max.assign("BEDJPXLJUFEWZTWEQOSKDPRRFNAKLBKDMYQDUTVSAGREUAQXQSNCICFRMJUOYZAVXPJBGJTNCSDEXVFDHBKVXIGHATUFQXAGRBYHIAWVGVMOWBGRAOWDTPIVNFIMXWOZMSZSLVXIJHVJZKYOPANMQYLNYJZDYAWPSQKBMHHUCTERWTPRCKPNHYTDXCRGIEMOPL");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.194425065412);
    msg.setSource(1680U);
    msg.setSourceEntity(212U);
    msg.setDestination(41826U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("AFLEUFCCYOPTKBVYWZERGMBTLAPQRCSABMUQKLOWYRWBTKJJRUHWRQHQJVTIVWVGUAOTWFYJOFVKHKUZGMGNLSNUPIIDGZRBNJTJNHCMZFODDUFQWBOIMLXRNGXCYSOSXHCGEKPNGXZNNIVZYQCJWBTAEXQE");
    msg.predicate.assign("MJEUNKODOFGCIFKLKBCARGEOPZEWXZBAJKQAQQGSEWDPZNQYUSXKLBNIVXOMAFYHFVTRMJESWXCDBATGMMSRXNVFEKBZWEJDIYKQBXPSHDDJUXNJBISNOOCFOGVMTEV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OIYJOTEZJUELRDIWQGKIOHOSIVJHCMIGWNWALSMJKAKZQUWRUIGQYWZMLACXTNBGYUXVFRTVCPESEPVADOSWMKPKMWHAZHJHFLEDNJZKYBLUPNBBGTJBIMLLPZOQTEYTLXRFPNCAVDBHDVFFXXWNPBCRZJOQTMYCBTKZOTDZUCYHPNMVDQXJSKWCAHBISDISTCXGLYUIGDXEUYPGAQ");
    tmp_msg_0.attr_type = 217U;
    tmp_msg_0.min.assign("OMONWZTTMLOLYCUNZMPIZOFVYRFYPWPCZHTZCMXBAHEDJRXAYHREVAQEAFLVSMDGYKDXIVB");
    tmp_msg_0.max.assign("YPLWJDANHGFCYIUUIKPRYBPIEGNFFKMTSDNFBXQGDFIFQJGLLADDTXQBRTNROWSCZAWHBUMZYQRHIMCDSVYOAPPRGPPKJKXFSIUNEOZFEBMLCOKNHGULDDLTBEMVRHQEQJAYQUHILRMOEWSLZDXWVGQKTRZOSVKUXBWZTWAXZMZSYULTMOJMBICWZCKPROAKGCWVHLXTJNIXEJGPCEFFSRTZECVHDCKQYAXYXJBVBSQJNOVANYNPVOUMTUHG");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.591915554428);
    msg.setSource(24675U);
    msg.setSourceEntity(39U);
    msg.setDestination(35486U);
    msg.setDestinationEntity(94U);
    msg.reactor.assign("BQZTKIXTAOUFDLKAYVCQCFSGOSGLKTBEUWJRHTMBDIBQHPDRKSTNMHSPQXPGOOXF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YFUAXBKMBXNJTCESHOBJHDLZXTOMBKYJRPNWCCZYAGQJFDTCKHLUMVDXVZJHNLNIRLMVKTFGGZSUBAESXQAELNDKLYUTXHIWFPJEDIFBTQSYAEXQYEIJPFPQ");
    tmp_msg_0.predicate.assign("TRDXVXGGOMHRYHSIMQSLDVKMGWKJWEGCEFCYYTNVNRIIZHVPLEPLKHONFGFULXMFUBHCPETSTPRLEYWUBMFJQXEOCVNDYJZQZMYBKDPJPTZXEXUHGTRIXAWSAYLBAWBQLZZBWSMPOWGLNYTQPECBOZJAFUQRNTSMWVCDRSWUJRVZGZDBHKSEAPDMSKBHXUFZAOQCAVHOKYJVKRFVIIGACKJITARYMUIJUDXQHFGDO");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.185573608482);
    msg.setSource(39441U);
    msg.setSourceEntity(88U);
    msg.setDestination(36048U);
    msg.setDestinationEntity(0U);
    msg.reactor.assign("SXCRZUKVTPHYJAYGZPMEFEAKAATRDQBMLHLCAZQGDNHHBBNUMIHOPZRBKOQCNLFSQXEYYLIIDFWEPDSDBYXCLFUAUKDRVTOQOKXUMCFMZXJCGAEWTRYNJEITJASVZPFOURBSLLXQIVYWFNARPNKWZF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KVSLUZKBCXWRIPMHVAPUOZPUCMONDHPIANHUPENGGVGVZYCADKEMWUBWZMTZACZNIKVYSRTPMSSXYQNBYULCCFKOVKBXQNZPUUZXTMWHPMFHHXJAADGYVOAWEOBULQEMEABLRCGJYIKRIMLQKTNFSBDFODKRWEJEHCXDWRXQXORYYTPN");
    tmp_msg_0.predicate.assign("FNYFTEFSWSOSYONKVPUCSUAMRMGTHBMEFZUBCIGKVUHPXMWFWZVVVEFARYPBFOYFJLWELJXZQBYHACLGKPILNGSEKDJZMEWCZWAIEXJBZFCRSPWZHHCXBKHOCDXGWUDODQYJTFPLASDLUKTSLAXBNUMBJALVYYYPHEMINGUGHHXQQWSAOZGLRCIPMUUITATHQOXKWTXDVDENXZPRDYBQQRTRQNNCIIQDQVITCAJOIPTNGS");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.540880266938);
    msg.setSource(61355U);
    msg.setSourceEntity(101U);
    msg.setDestination(11195U);
    msg.setDestinationEntity(75U);
    msg.reactor.assign("RSIXJDHACNUTVMLELNZYMOUFYPZTUFOECONFGSZQOBNUBVXHOVSIAVKXABKBKVQZFRJJTBTRKIGEWXEHHRJVHFGCJKJDXYWYYDTFGKXTPMUGXWLQULQSAOZMPSFDLPLEBBIVGUERMNWLYOJHMWWXUDESNGAVTPVGPOPAAHZCYGNIDSTKFAWSMIJRYTWBV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RXBAMPAVDHRMNEFDTLMQAWKSVCZVTCSQKIGDMFBZYTTEZUZLDUQJZRNIBPTFIYJBDCTSGQGOXWGHGGFJRRKWGLYZXOUDBCXPEXCIUCXBQJJBKEVIZRIEQKGYONWPDBSZTL");
    tmp_msg_0.predicate.assign("DATLNJVHBGLPKURXMUYTLQUVLPPTNSGNSRXNGCZZWDVWVLKXHWBIWHWVKRNDOIDJPDUESQKUTZOIPOQMSRBHXEJNCKECFNTHSABFICAOIOJYSOKQEERFLTSXPVEGBVWVWVELJGGCAMYHGQSRPTRVPUHSLGQQTMWMAXPBZNBKNDFHJCMS");
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
    msg.setTimeStamp(0.643027551771);
    msg.setSource(30612U);
    msg.setSourceEntity(49U);
    msg.setDestination(53163U);
    msg.setDestinationEntity(168U);
    msg.topic.assign("XCWZNGSUJWKRTGOMVVIHBSDMMZUGZZEFDTRDBYHUBPMWXRRLJIOVGCBDHXTSFFHLNLIYQEPIVAUNUGADJZDYNIFOWWUXCYBOVQVHFULHPOZEKCGMAGYJFIBSLKNKLTJPMHE");
    msg.data.assign("NSXPBDYSZIVIJOXYUTZNPREHSIFNSYSROWWSEYCZPKOVUPAICTEPVLXANYGRKKXLOGYWRNYWQDPJUFKSCKMJSWUQBINMZXMQZOSBBUWFYMERJTMGCJBQMHNHQCEFCLMETBRBQPCBQLDBDGKIVDWDCQLTIQKOAHSAFUIXATMTGLHDF");

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
    msg.setTimeStamp(0.801151815499);
    msg.setSource(40645U);
    msg.setSourceEntity(5U);
    msg.setDestination(20741U);
    msg.setDestinationEntity(105U);
    msg.topic.assign("INVWIFUGAQCVNMCNJTFVTPOTSZHYLLZDUAXMJYNPKITNCUUZPYOOEKJMYLYLRAXAKQSZJBEIUDBSRPHWZSRIQRGGDTCHPXPKHRHVJBMZAYZXUKHGGSWMDNWTJNOTGOZQNERSXGWGAAU");
    msg.data.assign("RWADTVNWDIBLNLMTDYIMZJBFVFKGUXYRNTLIREOJQFSCKZHLBNUKWZWYCMMUQEXZUETXMKKYHATFWFMJQNUAGXPVIUYGPDPFQOS");

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
    msg.setTimeStamp(0.854231790857);
    msg.setSource(48125U);
    msg.setSourceEntity(39U);
    msg.setDestination(48942U);
    msg.setDestinationEntity(235U);
    msg.topic.assign("LPTYNXWMGOFUAKCJGEDXNBDRTCPKDBCUBLPZKXJFWVOTHQENKZNDNRKOMCJEXLPPLGMRXIVFQRXYTQPEVDMPXYHVKJCWYJYS");
    msg.data.assign("MHLDVGPYZMNWCKLNDGUAYQKYIFOZRNVJYTUHRSFIBERFFXVNKTDERJWFCLNOXWFHELOSUKPJDVSXQBRVHKBRPCUAHOYDQZYEICVQTGIQDIXTCMVVVHBMPPENAJODFHAGLQCPDZFXIJBMWIJBSMASXEZXFVOTECGSKZXWPOBZAJBPCQWTXWESUNKENLCGTTUFGYSN");

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
    msg.setTimeStamp(0.567562959823);
    msg.setSource(33899U);
    msg.setSourceEntity(195U);
    msg.setDestination(42867U);
    msg.setDestinationEntity(253U);
    msg.frameid = 76U;
    const char tmp_msg_0[] = {-64, 49, 126, 37, 27, 55, -123, 4, -56, 46, 74, -109, -57, 31, -95, 36, -46, -3, 33, 60, -119, -65, -62, 98, -120, -48, 90, 90, 8, 58, -30, -75, 45, 70, 91, 59, 83, 76, -73, 77, 25, -33, -1, 118, -19, 65, 1, -72, -88, -79, -92, -63, 55, -10, 75, 29, 69, 46, -49, 114, 14, 28, 72, -33, 1, -21, 35, -10, 49, 22, 88, 69, -125, 19, 33, -18, 28, -59, 28, 29, -55, -57, -19, 84, 34, -55, -52, -24, -41, -11, -28, 102, -46, -128, 84};
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
    msg.setTimeStamp(0.607770894669);
    msg.setSource(41582U);
    msg.setSourceEntity(26U);
    msg.setDestination(64717U);
    msg.setDestinationEntity(249U);
    msg.frameid = 241U;
    const char tmp_msg_0[] = {0, -103, 78, 115, -5, -77, 107, 23, 15, 30, 42, -24, -91, -92, 27, 32, -106, 10, 84, -111, 75, -44, 13, -71, -48, 105, 72, -88, -22, -64, -88, 113, 70, -70, -71, 97, -85, -105, -55, -10, -54, -89, 96, 93, 64, -1, 73, 125, -50, -98, 40, -15, -118, 48, 38, 81, 99, -77, 58, -84, -23, -48, 76, -85, 12, 19, -68, -64, 49, -108, -45, 118, 112, -1, 105, -95, -125, 40, 79, -91, 85, -69, -60, 50, 30, -126, 100, -56, 7, 114, -91, 112, 55, 48, 92, -83, -128, 100, 67, -110, 24, -73, -62, 12, -62, 9, -10, 111, 15, 93, -21, -23, 120, 92, 42, 59, 71, 35, -20, -11, 1, -116, -123, 24, 71, -79, -41, -18, 1, 20, 114, 27, -31, 70, -42, -118, -59, -41, -117, 40, 114, -45, 17, 7, -41, -40, -60, 63, 79, -41, 125, -108, 47, -14, -117, 30, 73, 9, -103, 16, 4, -2, -112, -26, 56, 21, 70, -13, -75, 2, 95, -19, 38, 21, -46, 45, -30, -19, -39, 102, -59, 43, 23, 119, 69, -113, 24};
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
    msg.setTimeStamp(0.246124269784);
    msg.setSource(21124U);
    msg.setSourceEntity(127U);
    msg.setDestination(56454U);
    msg.setDestinationEntity(59U);
    msg.frameid = 204U;
    const char tmp_msg_0[] = {-65, 80, -70, -116, 85, -107, -52, 104, -116, 101, 111, 83, 60, -49, -84, -111, -50, 83, 103, -61, -39, 112, -112, -63, 29, -50, -37, 37, 75, 94, -118, 120, 118, -13, 19, -58, -34, 49, 10, -99, 101, 71, 79, -118, 65, -29, 43, -91, 56, 79, -122, 13, -127, -68, 95, 55, -75, -61, 46, -48, 70, -65, 51, 26, 114, 13, 6, 51, -50, 121, -126, -84, 107, 3, 39, -59, 28, 2, 87, 86, -77, 31, 115, 14, -13, -78, 29, 5, 20, 41, 90, 25, 99, -61, -121, 74, -54, 10, 117, -46, 79, 3, -62, 73, -71, -30, 27, -21, 36, 119, 7, 103, -56, 112, 36, 95, 74, -18, -32, 7, 83, 114, 47, 54, -94, 111, -50, 0, -2, 109, 111, -97, 102, 113, -17, -19, -29, 5, -63, -43, -79, 121, 59, 16, -71, -121, 21, 70, 62, 93, -9, -47, -37, -38, -30, 29, -28, 31, -62, 33, 56, -126, -78, 69, 17, -83, 43, -122, 72, -106, 104, -93, -10, -68, -4, -5, 99, 3, 43, 75, -79, -8, -32, 39, 99, -7, -42, -10, -86, 110, 62, -106, 86, 38, -123, 93, -91, -43, 111, -11, -119, -65, 20, 125, 76, 52, -71, 48, -8, 27, -20, -119, -14, 109, 87, -26, -81, -115, 39, 32, -34, 28, -97, -55, -112, -123, -37, -106, -40, -13, -3, -61, -63, 79, 12, 7, -97, 19, 46, 37, 54, -70, -53, -125, -34, -117, -66, 3, -88, -11, -34, -22, -11};
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
    msg.setTimeStamp(0.945674610557);
    msg.setSource(1246U);
    msg.setSourceEntity(179U);
    msg.setDestination(33510U);
    msg.setDestinationEntity(122U);
    msg.fps = 224U;
    msg.quality = 247U;
    msg.reps = 254U;
    msg.tsize = 54U;

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
    msg.setTimeStamp(0.551638243822);
    msg.setSource(27329U);
    msg.setSourceEntity(45U);
    msg.setDestination(11371U);
    msg.setDestinationEntity(153U);
    msg.fps = 113U;
    msg.quality = 222U;
    msg.reps = 114U;
    msg.tsize = 254U;

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
    msg.setTimeStamp(0.71867514777);
    msg.setSource(38644U);
    msg.setSourceEntity(240U);
    msg.setDestination(55345U);
    msg.setDestinationEntity(180U);
    msg.fps = 139U;
    msg.quality = 31U;
    msg.reps = 162U;
    msg.tsize = 119U;

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
    msg.setTimeStamp(0.287316236282);
    msg.setSource(54320U);
    msg.setSourceEntity(250U);
    msg.setDestination(1188U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.758239713836;
    msg.lon = 0.138587038036;
    msg.depth = 214U;
    msg.speed = 0.806496960538;
    msg.psi = 0.524518742835;

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
    msg.setTimeStamp(0.443215958709);
    msg.setSource(49792U);
    msg.setSourceEntity(22U);
    msg.setDestination(19027U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.105067793705;
    msg.lon = 0.417937878667;
    msg.depth = 219U;
    msg.speed = 0.351517460261;
    msg.psi = 0.918547103039;

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
    msg.setTimeStamp(0.298274258553);
    msg.setSource(58001U);
    msg.setSourceEntity(240U);
    msg.setDestination(435U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.937102472811;
    msg.lon = 0.248749992977;
    msg.depth = 193U;
    msg.speed = 0.72857573158;
    msg.psi = 0.523556882971;

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
    msg.setTimeStamp(0.922979451668);
    msg.setSource(28433U);
    msg.setSourceEntity(145U);
    msg.setDestination(53752U);
    msg.setDestinationEntity(70U);
    msg.label.assign("QYVWRAHJCSQFLGPERRGNOUWTWCWAHJNBFPHNWZBMHINOCADIIRXGCSSEAVHQTJYWXBFJTVILTJSZEOXBXUUTJJNZPPLEMARVRSUFKMYXHMVTQLNTYZPNPODIWYAIZXVGDULLSAEETDUIMYGYVKFKCYVKRLRHYBIQWDFFAKHFYSKKKHCXEKSVQDZPOGCGZFZWELVKJUTBJGLLPHMPUEGIADMIQDSNTMNBOBZSOEXNMDOBMGJBQP");
    msg.lat = 0.748109888247;
    msg.lon = 0.797902448998;
    msg.z = 0.589229831777;
    msg.z_units = 238U;
    msg.cog = 0.864934612373;
    msg.sog = 0.119413522731;

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
    msg.setTimeStamp(0.209255913901);
    msg.setSource(30303U);
    msg.setSourceEntity(246U);
    msg.setDestination(58349U);
    msg.setDestinationEntity(78U);
    msg.label.assign("AOMDKVQOZPFAPUUYZQRMDWKSNZBHCKBGLDMTHAGINIPLYJUQDTYUGVDKKKSLZOGFLMMWLUOZELCTVPLZSIHFPJQVRPYNXHAXBQKKSJFRTBRFLDEAPBUMEALTBIAVWUSRWMHZVQHUOMCNCVXDNIEEKPGJSGQPJCYEFVIZMGYYCVJHAYWXCYJ");
    msg.lat = 0.727938048348;
    msg.lon = 0.0703451485949;
    msg.z = 0.448961267343;
    msg.z_units = 32U;
    msg.cog = 0.0632663554506;
    msg.sog = 0.684400332631;

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
    msg.setTimeStamp(0.19501764299);
    msg.setSource(36420U);
    msg.setSourceEntity(158U);
    msg.setDestination(7627U);
    msg.setDestinationEntity(170U);
    msg.label.assign("LXVHEUCMDIZSKUHKITSGJVNZSQQNLJJIUJDUYMZNWADLBMFEAPWPQRGCCOFLAHEKQFCEGEIXXFWRTBRJRTZAOAGYPROUCCIMYGL");
    msg.lat = 0.68914287993;
    msg.lon = 0.352324685231;
    msg.z = 0.247027540176;
    msg.z_units = 213U;
    msg.cog = 0.296531997257;
    msg.sog = 0.591443514804;

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
    msg.setTimeStamp(0.449726631934);
    msg.setSource(16325U);
    msg.setSourceEntity(164U);
    msg.setDestination(11493U);
    msg.setDestinationEntity(37U);
    msg.name.assign("XOIJFCSOMLQOVVURYRYZGUCICWGLHJCMAUMAINCKJGVFQDGVNZVFLZRCPERMJARSNJSBQTDHHSKTKSWLQHUAJVIRTRQCQGPQBBNXWNYDBPEDLBYXTMNTAWEDJGVJFGURJIXIXBALQLZBEBZWWVETFOG");
    msg.value.assign("IJEGICTDSAIICKALZOWQVTXFDUCRFPVHWJGYALKOUBAGIFJQBSBQWSCQXVTRTKQLVBNZLKSZCGCMCDLNHLMHMLZKXSMVBDHYFGYSZKRTJYWNPFJTQOURNXDRTDEAOUPUEUEBQSVWJQCKXNXGTGCHBUFDLHUPZZXD");

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
    msg.setTimeStamp(0.964059315634);
    msg.setSource(33299U);
    msg.setSourceEntity(111U);
    msg.setDestination(65234U);
    msg.setDestinationEntity(153U);
    msg.name.assign("KCPNJCBDGNKJEKCWZOSLBMVPQBSCRAON");
    msg.value.assign("YPKUGIHXSMORINRMWHKJIPWCLQWPGRGFUNQLWQUNOFVVBLTWJCIEXLGSEODIZUHETINJWJJLABTEDPZAFCSDALYMEKVSXXOVVPZVDCZGQJMPZCTZWXYEHABTDUOCBOXVBGQOUTNWKGXOPQUNSEYKLONMJMCFBXHKSDDHNWGIPFZLRJKYRETGALDEYCBBYMZMAQLCKSTGZFVRSIVHCIATVYFRMUUXZFHSAQRYEOQQAPS");

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
    msg.setTimeStamp(0.582366876913);
    msg.setSource(44151U);
    msg.setSourceEntity(152U);
    msg.setDestination(31846U);
    msg.setDestinationEntity(75U);
    msg.name.assign("JRACPWRAIUVEJFZXKKSFPMRRYGAMPUNFAGNDKWSPMSQYQOTDBQIYVOSNGIPKYWMAXNAFXEORXKDGSSVSZZBQUZAKCWSDXXDLEDRXFCLVFRIHBVHJECWCRTBMBVULEGIPDZJGYWLAOHIQEZWCJTJBCSHTETOBQYBQQZYNLLPPUTGMEBWDAWOJXKWHNZSFPLOYFLJOOQNTXKJIKATRVXZHMY");
    msg.value.assign("YCXOJQXUMFRHFLMXSTONBUPYUVARSPEFPWHSSAHFPWZCDNJKWONEJWHFZIZURRQSGHEMGSDEIELXCRDQQOCYITJVZXYGJRAMOFXJVVPRMMBTFDZTXCLOKDQVVOTIYNCMGITWZBJFQNBMWDQXZHLCOCPEYLWNBGYBEKFIVMRSJTKSIRKBCSKLGYTHWTNNZMBPWQQADKAASZEPADAKUBI");

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
    msg.setTimeStamp(0.367258852446);
    msg.setSource(64256U);
    msg.setSourceEntity(131U);
    msg.setDestination(60582U);
    msg.setDestinationEntity(81U);
    msg.name.assign("ODIIKFURYQZKJYBQMTZHRCANEEQVQYJGOXLMJNLYJJMSBTRHVUOAWPUOAKUWAEVHPOKHWN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FPWSIZHDVIADUEQVRABHURZPLZGJFJLNKOTZFQJTVZEIDRDWBYNUZBUCKYGAPYFETRUAVAKFMTCSUQFFPZNNQJIPXTXDFERPDZZLWHHESQQJLIHGLGIHDTXSPOVUJYBHOXVEVRAACNTERFPNLWFYGMXVMVSABXBJSEKJMLOINHCLQMDHTQHWC");
    tmp_msg_0.value.assign("VJHDSHUBMLBXEJJJGNZDCXSLWHMFZNXTBDLATVYYOCTARQBNFVWYKXDBAKTERSRIJUPQZVVDSIFJQFYNQEMYXAXHOUKHZXKUAGLPFNSECKPKUGLRPUCBNMQIDCMIBJQAVOWTIRGDNFWREFZKOYYLGKPSSPLUTPSHPETJGSWGOIMRHWIWBVTONCRYUFKOAQEKMEZDHGBRYLIFVHQCZ");
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
    msg.setTimeStamp(0.226890314125);
    msg.setSource(6807U);
    msg.setSourceEntity(137U);
    msg.setDestination(11433U);
    msg.setDestinationEntity(190U);
    msg.name.assign("DOTZTBBHOGWFAOPRODCVVSHZDFSAJEKNXRRWESUYETISRUYYGBPYO");

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
    msg.setTimeStamp(0.491443957613);
    msg.setSource(35672U);
    msg.setSourceEntity(57U);
    msg.setDestination(47852U);
    msg.setDestinationEntity(188U);
    msg.name.assign("RLDODHLERFUBZSWVJGWDTXUIUKSKKCSLLKQHXPNEPFEBCCOODZYLLGCQRIDJGMLMXAZPUIJMNYTVAHWCBYMVFPGQLBYOPIDLTWWAGSKRNZTQXSQBMZOPJVETEWAMFPEGYMWOV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WLHJDIXZAVORXIESMOZWYYFYGZUETJFJTKETDCQSKRHMVVIFCWIZHRRLBDY");
    tmp_msg_0.value.assign("NQXZUDAVAXCEKKDAYMXFKJCKFRSPWYRZBZOMSIZZXJREGQSETMWCYGFVMTRUYBOYKVCIQELHWCNFWJNACSQKSLUMMCVURJRMGOZIBHVGHHJUEPQTGUNIXPDPPLBLTOZUGSERWWWZKOMSGKBIASDPQUCEJTDPFBSHQVEDBYBALRBCLITVRXDIJJGAGVFONPEGVJOQDKDHRYFSLAYLONPUZM");
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
    msg.setTimeStamp(0.447522535822);
    msg.setSource(55781U);
    msg.setSourceEntity(74U);
    msg.setDestination(14670U);
    msg.setDestinationEntity(78U);
    msg.name.assign("FTGIKUJZLHZKUVRIEHPDBPZUTPHOJXOFAGTFSIGHMCMYVZLCWSFITKGNMZPELDADFCUCXLAGNPLRJXSFLIGPNQESEWGYXFYQDJSMCHDJQNNMWTVDJVEVOUDCMBISYCAMDQNOZWNEOPMZOKWAKLVCAAFXGJWBYMEYBBDYUTXGPQTRRMDOWKPQWBUENJYFHPKSHIIRTYRHBBLZAZVQQSZWXXHCOURRVIJQVJXUNROXHQTGKBTEIEL");
    msg.visibility.assign("DXQVCVMVJJSLSYYIYUMLQXVQTRCTXGJNXTRJKHYVETMDGVBPRJSAQUCLCFYFRECEHHBKBXCNJHALQATPOMBMIHT");
    msg.scope.assign("JHURSTIJMEFSNFNZLZPXOBUPWPQPKBAVDAZTYEHBEICPHUOWMPFHASLDBAXIUDDGNMOZZVUFSHBAPUCMTGYOVRYZZQWLYDOKEGFHOBWHKQPCEYDGQJQKPJYTVKXSYLURDQVXNEIJINEWAUFATRRLEYWZGCCZGVIQQSPBYRTK");

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
    msg.setTimeStamp(0.0695661676729);
    msg.setSource(3161U);
    msg.setSourceEntity(96U);
    msg.setDestination(25485U);
    msg.setDestinationEntity(54U);
    msg.name.assign("REUMBXQMIPWAAOSXLBAOFIRYQHWAQMPIBTFBUEEFTNHCFDUWEUNGUBDCDEILYFOVYMEADSAZEVMSLDWMQFJGEHWRITUGDSNWKIUZJDPTCJRLPFRXWQRGIEKBCOJTQXP");
    msg.visibility.assign("YJNJOTUCIPEBOSRXNBDHTFVDVRHURGBJCWLDGNHXQFZHEROERZPOZBAFRMCKPJERUVUSQQIPVYXKTYGDSPNTPJLUALGKYEEKHXMGYTSZFISWTZRELFVLNJJJOYHWXGKQEU");
    msg.scope.assign("KXYXVQCRLTASKNLTOAGFBSAWEWNSDHRGNNNERPFTQYJOQXDTKJMELBTZALQHPBSRUOEBIZDDUDYRMUXKZZRWMJEKVNMJOCANPCFAYKAVGMIFBJPWTETGOOBCIPPXSIVNTSLFPRHWVEOLKPXBFXRD");

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
    msg.setTimeStamp(0.0405457828739);
    msg.setSource(52667U);
    msg.setSourceEntity(42U);
    msg.setDestination(18007U);
    msg.setDestinationEntity(152U);
    msg.name.assign("VPLUHHVOKXETHPEBWAISWDXKOQFFOSXKHRPCMDWDCFHYGIIFFHPSLGNWBTERENPCNAZJZPGLNRHQDYAQUBBVNLLKELUZSIWOKTYJDVNOGMUJTHQYMDNFHISYTXYCWPWVESYVTZYVOCZOMUIRLQWMJRASMIRSMXXGKMHKAUGZXCJJVJQZNBYBQMCTE");
    msg.visibility.assign("BMXEVKERPZINCXIGGMUGQBDXESYFCKTEHDLSDZIMX");
    msg.scope.assign("LMFPTQLESSLRMCIRPQIFBZLZOKHHNPFRCVFFQNUDNWXZTWQRJKQCKCDXJYMKRPTPVXEPYZTIGJNSCEEUVFJWDSYZMHBCLJGBSFQXMDAGKTAYNVWPOCMEGICPSWSOZHZDPDUXWVMOEJMDBNLMUXFRQRVULUHASXATHWJBDRYEOQYHKGGKOYZDTGFHYSNWJMSAZN");

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
    msg.setTimeStamp(0.623319516362);
    msg.setSource(33311U);
    msg.setSourceEntity(32U);
    msg.setDestination(23420U);
    msg.setDestinationEntity(54U);
    msg.name.assign("KIFDPEEFYXYFYBHHZXYPAPCGOROPOECDLNGHTPRRNHDCSCTYLZLQQFBUXAEWISMGZJCWKDJJRKWZVMQINFNKSCTJSCLBMRWIBPVXVATKADPXPJOZDSBCHKYMUVVDWNLOUTEESKQFZTQGBVGMGIYLEUPRQOBLSJZA");

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
    msg.setTimeStamp(0.558481392287);
    msg.setSource(344U);
    msg.setSourceEntity(152U);
    msg.setDestination(50061U);
    msg.setDestinationEntity(64U);
    msg.name.assign("PPUUASJYIZCDHEERZARVPSNKYIMLTCRDHGAKSFHFWPJTLHFBQGVFCPHMWDBCLESHLJEYXBCMRGALNXMJIISUAEQFSIFHJXVLIYXVZPGROXXGSSVQUDYFHYTAQYYCDVYXXKQSPDLZDZBHVWEUQONDWTUVHMJQWUJGIZIRUPNTJBJFNQMUATKEFTZCOUZRMIRKMJNPBWDANOTRBKOGWKWQTOQCBEIMDVLXZPFGRXCNOKNAEZYKLNAOWLEOSTG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QBEBUUPZMSULKQTNPGBDJXHWLZSJIGAKNIYTRINTQEVNYGILBFPOJJGCXRLFRBCAEDORLMOIRWWCYUARQBGAVQHUZKPXTVMVGDLXQEMMV");
    tmp_msg_0.value.assign("PFXILWAJIQZNASHEUEQCPXRLFUQGGAJLTETCHRVXDGBPICYARSVRTNVZA");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.283321883386);
    msg.setSource(25302U);
    msg.setSourceEntity(54U);
    msg.setDestination(39824U);
    msg.setDestinationEntity(111U);
    msg.name.assign("PEMVYALVTMHQJTMFKPNCGN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CHDOYKVGCRMHDJRYUIQWZMPEQPGVAYYPUGJSXGRSUJOKZRBOGHZQQLVLIKEJIENHPTQLASNEULDYAFMWZBFWKZIXLJCUSCKRTIQWJTYKSLBOMCKPLA");
    tmp_msg_0.value.assign("TLGKWUZWEGKZXVLDFTFHZSBKUBUJFNWNYIIEKGPJOXXLL");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.871795338973);
    msg.setSource(47750U);
    msg.setSourceEntity(29U);
    msg.setDestination(32508U);
    msg.setDestinationEntity(96U);
    msg.name.assign("KEDTKYRSJYMTGIAEPA");

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
    msg.setTimeStamp(0.439421790215);
    msg.setSource(32920U);
    msg.setSourceEntity(35U);
    msg.setDestination(28663U);
    msg.setDestinationEntity(96U);
    msg.name.assign("HIBPTGOSNJXONKWCFALQVNHXSIAHMSFYPXHTDNDMTGVQPRZEQAICZAXCPKLSWPBYBRJPQVZBBYBUEEOCSFYJWDFUANSGGUFXCOJMJOOWDKDLBKXZCRMDXREUOITWNTVCQIWFZNZYLGFKJBMLMFDXIKTGMOQPKWWJKATCHRHQNEERKBDRVFVWOOUTUIARYRQFYSLGZDJEVQTIKUPRMNBEZNCHCSMUHVYVYIGQSLSUMPPEDZTUGIZVAAHGH");

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
    msg.setTimeStamp(0.056448618567);
    msg.setSource(4263U);
    msg.setSourceEntity(250U);
    msg.setDestination(33277U);
    msg.setDestinationEntity(90U);
    msg.name.assign("BLTWUGRPEXLEGYSSWNXOBPVUZZSUGQITJHDJAVYZL");

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
    msg.setTimeStamp(0.770586007341);
    msg.setSource(61077U);
    msg.setSourceEntity(96U);
    msg.setDestination(8802U);
    msg.setDestinationEntity(250U);
    msg.timeout = 2383052827U;

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
    msg.setTimeStamp(0.986235172199);
    msg.setSource(10582U);
    msg.setSourceEntity(87U);
    msg.setDestination(34484U);
    msg.setDestinationEntity(92U);
    msg.timeout = 1924534836U;

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
    msg.setTimeStamp(0.504976493253);
    msg.setSource(49285U);
    msg.setSourceEntity(30U);
    msg.setDestination(15749U);
    msg.setDestinationEntity(53U);
    msg.timeout = 1568471311U;

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
    msg.setTimeStamp(0.0784054985457);
    msg.setSource(54849U);
    msg.setSourceEntity(134U);
    msg.setDestination(8900U);
    msg.setDestinationEntity(160U);
    msg.sessid = 674305220U;

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
    msg.setTimeStamp(0.363367387168);
    msg.setSource(33369U);
    msg.setSourceEntity(177U);
    msg.setDestination(13166U);
    msg.setDestinationEntity(182U);
    msg.sessid = 3215102659U;

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
    msg.setTimeStamp(0.908763308827);
    msg.setSource(496U);
    msg.setSourceEntity(229U);
    msg.setDestination(27627U);
    msg.setDestinationEntity(243U);
    msg.sessid = 58185631U;

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
    msg.setTimeStamp(0.217011520161);
    msg.setSource(63911U);
    msg.setSourceEntity(201U);
    msg.setDestination(16410U);
    msg.setDestinationEntity(120U);
    msg.sessid = 1234503662U;
    msg.messages.assign("XMEPEWCSLLDNTUTWEKFAZOZIGSWGXSXKFWCXCHEQNLTZEPUUUBPATWXEUNZUCVAFZJJIVBUIOQCEDEQACNWOSPFFCSRRBYYHYNBDMSHHNLAWKKNIOYWXSICRDJDIMHMPGLFNZESRHIABXQPPYUFNJWDTKTBQDQMVKZOVXGCRKTKZLAVVMXOFMHSFJRGNJTBWPMQKRDDLYGODBPAGOBVJSHHOUGURYAMVAILGICJQTLPYIFOTRKYREBMVG");

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
    msg.setTimeStamp(0.246416802629);
    msg.setSource(32322U);
    msg.setSourceEntity(201U);
    msg.setDestination(28793U);
    msg.setDestinationEntity(164U);
    msg.sessid = 2175487318U;
    msg.messages.assign("SXEXZDUAFRBQWTFXAIBEGQKIBIUECUXGDUMIOGJGWLKHBHSBMLQPWABPGAJDJLPOZCKHBESSREWUXWVRXNAODIIAIVOWMSNUOVXHQHKORJXXCGLLYUEVVYJIPREZDMLWDMFDTRPHZNTFCSPFQYVLEXYZLOVYDSMSJMNJQMVNSRTOAFUKFZNKZZFKJYHHJNQBFTICDYNCQKOHLFSEWORGYVRYVQCPZDCCPRWNIKBZBGCTEPUGAANUKTQ");

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
    msg.setTimeStamp(0.825079032194);
    msg.setSource(24965U);
    msg.setSourceEntity(153U);
    msg.setDestination(13871U);
    msg.setDestinationEntity(13U);
    msg.sessid = 1267064525U;
    msg.messages.assign("TFDQFTLAXLNCCUPGPHBSSHQJZGDGXIMNZYTBPZCUXWSSGJIVKCLJMLLZDGFFLHTFBWYUBFNAOLAEGOBWRCGEERJHHROKRTEJDWBROXMEVTNWADMTKQGIMSUSWHUICKCFVHWMKPOQXVIBBJXQKMENWQPXQXBQDEOJNYZHVEYZRLCMPXPBEVRAOYRYKUOFAMVZOYLAGZTCKTOIZHSMDRUAAYZVNPVIUDQPJDRSJIGSYNEQYFPLXATFHK");

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
    msg.setTimeStamp(0.141583144612);
    msg.setSource(63844U);
    msg.setSourceEntity(3U);
    msg.setDestination(5660U);
    msg.setDestinationEntity(147U);
    msg.sessid = 646540656U;

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
    msg.setTimeStamp(0.554566933262);
    msg.setSource(31654U);
    msg.setSourceEntity(246U);
    msg.setDestination(4184U);
    msg.setDestinationEntity(182U);
    msg.sessid = 4022317834U;

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
    msg.setTimeStamp(0.277971253468);
    msg.setSource(51662U);
    msg.setSourceEntity(7U);
    msg.setDestination(58281U);
    msg.setDestinationEntity(243U);
    msg.sessid = 684741751U;

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
    msg.setTimeStamp(0.751417436927);
    msg.setSource(11832U);
    msg.setSourceEntity(38U);
    msg.setDestination(12787U);
    msg.setDestinationEntity(225U);
    msg.sessid = 1455724976U;
    msg.status = 117U;

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
    msg.setTimeStamp(0.334496940602);
    msg.setSource(60790U);
    msg.setSourceEntity(14U);
    msg.setDestination(60266U);
    msg.setDestinationEntity(3U);
    msg.sessid = 321705179U;
    msg.status = 1U;

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
    msg.setTimeStamp(0.282773245701);
    msg.setSource(1894U);
    msg.setSourceEntity(203U);
    msg.setDestination(27520U);
    msg.setDestinationEntity(160U);
    msg.sessid = 244541065U;
    msg.status = 110U;

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
    msg.setTimeStamp(0.746056106433);
    msg.setSource(12537U);
    msg.setSourceEntity(157U);
    msg.setDestination(17039U);
    msg.setDestinationEntity(241U);
    msg.name.assign("BHQRHUNDXXCEZSVYRBMBOGNUJVLYMWYEHOWUNBUFUXNEYCSBKDDHUAPEGIKHZEHVGMMLKXZIGAQVEEPPTGWAVOFTQGPWRKFUQXQAGVYWXCVTFLNAIGJBIRLRXOHFDUFAELNEZGQXWTRCPJDUJFAXMETDKSVWOOPDLTPSQYOYMBTLWRLJOBLBRFJPAJQDGQHKD");

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
    msg.setTimeStamp(0.329930498967);
    msg.setSource(32194U);
    msg.setSourceEntity(136U);
    msg.setDestination(15928U);
    msg.setDestinationEntity(47U);
    msg.name.assign("VGFYNHVXPAAMQAUPJZZIKCNZMSLNEUXPMFVYNDZKSCLMEXUXKJNQDGGUWCLHTESDTORLCKPGVBYAKADWPTRBFPQSFIXGSNYW");

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
    msg.setTimeStamp(0.851672585728);
    msg.setSource(9849U);
    msg.setSourceEntity(83U);
    msg.setDestination(2290U);
    msg.setDestinationEntity(3U);
    msg.name.assign("BFLFZGNBQHOSSEQYYCARRDAFKYLBNOHXFXZACDUHUPKSBPIEZIICYIGYGJROHZSPOJXPMEUZPVOYRDRWWYZVRLAOMJKRTTWRLGEQOMBAPASDQKSTKRLXDMWENCXOUTNGNVCIUBNJGJUFMXYVXHPADTOZWJMILVHHHKVCUDWBZACNNWBQQUXJEMMYHPZGKVIFIBKDFDJSKHMQTLWQQZWJECETATSEVKXEAXGPPGMFNWUFVLSBRGSDQLYOJUFIT");

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
    msg.setTimeStamp(0.510483639238);
    msg.setSource(44605U);
    msg.setSourceEntity(164U);
    msg.setDestination(24569U);
    msg.setDestinationEntity(92U);
    msg.name.assign("JOQKWKSZSAQLOAPHGCAKWGTSQVFBMTNEGOQXRIWXTFZLWYUORTHDQZRXOANFEWUVNOTSPYRSTWIKVNCUIOLMSMXQRAYACJJLYHDYLDNHYCIKHBMKKCBFGRJCQXUOKIVBVEJAU");

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
    msg.setTimeStamp(0.606893619833);
    msg.setSource(16946U);
    msg.setSourceEntity(242U);
    msg.setDestination(58801U);
    msg.setDestinationEntity(207U);
    msg.name.assign("TOHSHEFOSIGKHNEJHENGPRUOVOJJPDDNRUTRDQSEGWLBXLWHZEUBQXDABDPWAMEGDHASHKRFKFBMCIRFXXFSCKLMBYVYGWPRIJMVIZTIDFCIYIYTVQWSNWZENAJSNTWPNJOBVCWOU");

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
    msg.setTimeStamp(0.659197245936);
    msg.setSource(34303U);
    msg.setSourceEntity(169U);
    msg.setDestination(28066U);
    msg.setDestinationEntity(117U);
    msg.name.assign("HLIOTPALYPMICVHKPYLYTJVGUJGJXCZUTRGIMAXIHAXSUBEWQBZDBKHDWENEYLXJOANSNKLZKJOUCVISWRMXFBDVFEZFGUHTYSRQPFLWNTWAKKD");

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
    msg.setTimeStamp(0.0499384524552);
    msg.setSource(60171U);
    msg.setSourceEntity(205U);
    msg.setDestination(16476U);
    msg.setDestinationEntity(141U);
    msg.type = 253U;
    msg.error.assign("BPFNJUADQDZZWWYSELRGYJAVTCIOUQZPNCRUOLZMNJHEFZGBLTQOSBZNKOQUQCIUXSSG");

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
    msg.setTimeStamp(0.117552567236);
    msg.setSource(56037U);
    msg.setSourceEntity(21U);
    msg.setDestination(28771U);
    msg.setDestinationEntity(224U);
    msg.type = 2U;
    msg.error.assign("VVXWXEDKJJJGCQHVGAVWPNUBIANNCGWXPULPKZIZAUSKOMZKOQQUTFGB");

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
    msg.setTimeStamp(0.495591977899);
    msg.setSource(25320U);
    msg.setSourceEntity(38U);
    msg.setDestination(43048U);
    msg.setDestinationEntity(138U);
    msg.type = 234U;
    msg.error.assign("SLWDCXYTXUNPSDDWHCLZTHVOCGPTYBZIXVJVTWYZFDTSFBGCBHKRNLKNVZAFJWXIEKBQAMBXOWMPHUUYKZAQWJRDMVVRVQMUIQNYIKFJNCTLJGMKLEVSJPABHEPOSTANZGYKEUITZDEGFIYSCUCN");

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
    msg.setTimeStamp(0.0256187667245);
    msg.setSource(2440U);
    msg.setSourceEntity(11U);
    msg.setDestination(15209U);
    msg.setDestinationEntity(24U);
    msg.seq = 59232U;
    msg.sys_dst.assign("CBJPBRIWUSUFKUZWZRJCOMHWURLBIAECUGVJCLGSWVHPMZYKTOPOPKOFHLMTLLHZAUPEPYOIYSCXYVVKFDGKRDQUITSQJ");
    msg.flags = 222U;
    const char tmp_msg_0[] = {-36, 18, 74, -122, 52, -69, -57, 121, 63, -34, 42, 44, 62, 7, 120, -58, -118, 34, -24, 30, -91, 39, 12, 64, -36, -101, -4, 55, -11, -108, 74, 9, 122, -34, -88, -112, -25, 9, 68, 60, 97, 14, 70, -4, 81, -81, -44, 120, -41, 12, 103, 7, -43, 10, 1, 56, 103, 27, -55, -119, 59, -117, 25, -100, -17, -34, 10, -82, -34, -39, 54, -115, -8, -17, -16, -120, 19, 126, -120, 40, 39, -36, 121, -87, 59, 1, 63, -58, 11, -88, -93, 86, 82, 3, 54, -9, -28, -6, -58, -98, -114, -34, 114, -9, 5, 87, -88, -66, -81, 2, 111, -39, -69, -104, 117, 0, 105, -125, -100, -67, 35, 48, -61, -32, -77, 68, -41, 119, -35, -70, -24, -99, 31, 43, 77, 117, -73, 78, -127, 28, -108, 31, 33, 0, -93, -116, -112, -12, 32, 58, -93, 35, -75, -82, -33, -72, -15, -64, -43, 121, 18, 113, -7, -75, -66, -73, 94, -111, 91, 95, 89, -8, -71, -64, 76, 61, -114, -95, -104, -119, -67, 46, 48, -44, 19, 83, -52, -79, 87, 53, -118, 10, 37, -69, 79, 36, -12, -52, -26, 24, -25, 101, 106, -24, 12, 66, -13, 15, 70, 53, 28, -24, -51, -90, -33, -62, -74, -24, -5, -101, 74, 93};
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
    msg.setTimeStamp(0.538180023394);
    msg.setSource(39644U);
    msg.setSourceEntity(60U);
    msg.setDestination(46516U);
    msg.setDestinationEntity(59U);
    msg.seq = 62037U;
    msg.sys_dst.assign("ZYIGVJLHQDWGYIHKZSUIKZWZDYWVIEYFYVHQBZBWBRMUCAGGEYSKKCATPBAFUAAFXTKLUKLQVMMJRITPBNEZVXNUTZUCRVFMUNOFCBJPZTPQLS");
    msg.flags = 27U;
    const char tmp_msg_0[] = {-70, -40, 42, -128, 18, 82, 32, 124, -67, 38, 11, -25, 123, -27, -10, 33, -52, -6, -87, 104, 62, -122, -111, -68, 93, 6, 39, -119, -63, -44, -102, 116, -111, -107, 18, -117, -33, 87, -97, 69, -29, -66, 91, 18, -26, 37, 91, 33, -78, -50, 108, -67, -58, -11, -75, -16, 75, 14, -111, 121, -30, -118, 126, 106, -85, -105, 36, 56, -11, -47, -87, 105, 115, -31, -20, 113, -25, 56, 30, -50, -84, 107, 113, 61, -21, 76, 37, -29, -89, 106, 14, -115, -31, -17, 109, 90, -58, 0, -104, -55, 119, -3, -81, -88, 103, -118, 97, -22, 109, -76, 33, -32, 68, 109, 58, 60, -116, -98, 12, 16, -65, -82, -72, -104, 54, 126, 88, 33, -95, 104, 88, -83, 102, 16, -76, -35, -68, -59, -50, 121, -33, -108, -44, -13, 107, 42, 122, 49, -37, 25, -1, -58, 107, 101, -69, -94, -113};
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
    msg.setTimeStamp(0.557529254816);
    msg.setSource(7477U);
    msg.setSourceEntity(199U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(172U);
    msg.seq = 51111U;
    msg.sys_dst.assign("NSDJXMWGYLQPURYHHPHYFUVFQBFMUURCAOAWRMALECMRQFNHGCWVVCKOIHSEZRIXWTUXLUBLZOMBTEMIZZMWCTUKKCTBFQGSEJAAXNAVWKOIZEREVWGLZYSUDKGLRAJCZSTGWTHQGBPBLJZJFPBVFIICFN");
    msg.flags = 207U;
    const char tmp_msg_0[] = {52, 8, 11, -6, -106, -3, -4, 115, -63, 78, 45, -56, 95, 8, -47, 14, -106, -2, -1, 90, -118, -70, -29, 37, 110, 114, 79, -106, 25, -1, 110, -107, -101, 69, -80, 15, -109, 126, -126, -69, 79, -34, -56, 64, 60, 18, -22, 1, -70, 40, -65, -66, 113, -88, 50, -14, -96, 33, 67, 36, 119, 104, -83, 114, -1, -85, -26, -14, 16, 38, 102, 31, -60, -54, -124, -103, 63, -116, -111, -9, -72, 117, -6, -123, -18, -50, -112, 124, -59, 25, -93, -108, -70, -96, -34, -57, -41, 21, 23, -113, -17, -22, 34, -95, -124, -37, 78, 125, -22, -23, -36, 52, 60, 34, 68, 86, -20, 38, -114, -51, 92, -27, -51, 123, -4, 45, -32, 73, -101, -20, 124, 97, 79, 29, 75, -17, 99, 51, 25, 33, -15, -108, 89, -44, 17, -83, 23, 117, 104, -83, 46, -20, 35, -84, 48, 113, -116, -6, -1, 40, -96, 46, -53, -27, 51, -26, 53, -117, 60, -128, -110, -36, 10, 40, -60, 65, 16, -66, 32, 74, 6, 91, -32, -13, 25, 20, -23, -128, 68, -85, -116, -16, 110, -69, -113, -39, 106, 18, -20, -117, -128, -27, 20, -31, -84, -36, 98, 75, 112, -7, -63, -77, -108, -86, 98, -34, 25, 9, 35};
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
    msg.setTimeStamp(0.133833387821);
    msg.setSource(39353U);
    msg.setSourceEntity(16U);
    msg.setDestination(52127U);
    msg.setDestinationEntity(156U);
    msg.sys_src.assign("PXRNMTKEMHEKKAZVCPDISNEATAORUQTARFCXUCDKAENPPIFUOEFPZIQOVWUNWBLXIEGEJMRWBXSYKZUUMDVGCVHVLWTOPNL");
    msg.sys_dst.assign("MHQFFPPVNLRORIHCEGFKSTOQAZAFYZEGAIXNMNAKXWHOQJFVNTKUPULVRLQKCOQMBSYLUTTDJPVLZSJWZYNTBXYRCIBUTDBYDWPHKENADOWMUNZUHEWCQKNRXOFGCTPSOWAFXSGEMQPOEQJVAJWISFWRQKWZVCKFMZITJEVSHCRIOYNHVCRZGIQBGRINJXVSBHYJJXEJXEUMBTHEPCTOMAMHDLSLBRIUF");
    msg.flags = 207U;
    const char tmp_msg_0[] = {43, -125, -73, 79, -70, 118, 45, 94, 62, 22, -71, -41, -122, 33, -26, -103, -96, 37, -45, 72, 60, 38, 89, -61, 43, 45, -43, -44, -43, 124, 95};
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
    msg.setTimeStamp(0.586442326299);
    msg.setSource(44916U);
    msg.setSourceEntity(9U);
    msg.setDestination(41071U);
    msg.setDestinationEntity(181U);
    msg.sys_src.assign("NOICXVXIUKLHAHCDECZKOUZNPGMIKFZTENTXWSGQSEXGXVACFGXMKGRJRDWRJNQPLGLUHBBQWDEYFUEXGEVKQNKBLQNHIYJWTUVDTZUPMMAWMVRKIINOLMLYSZQOSAOZIJJOMIBGPYBSAYZOFMKNUTLNYPBNORJEDYKH");
    msg.sys_dst.assign("UMYZRWOJOBDNQQAZSVVGLFIPSZSTFNERKKCLPQIMLGKWPSGFIUQXNGUZPADHRXVUNEXDRPDYEIAGTCQSLSAAGDXWQCFSZCTBXJSTXNYVWKEJYCJDANHVKDNCTERIFCLHBBLBGJJMDEPOUMWBTEPOVWFPOTMWDMLZAYQUQRQLFOMBXZIHKIQPNBYNXHJJEKXTEOGPXAOCKGMHKCYCHRYVSIADUELZFFSMWJLFHORRTBRWNWIH");
    msg.flags = 41U;
    const char tmp_msg_0[] = {-119, -105, -43, -91, -80, 102, 94, 92, 100, -49, 44, -94, 70, -78, -113, 14, 45, 12, 63, -124, -31, 58, 15, -46, 76, -84, -86};
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
    msg.setTimeStamp(0.994866159095);
    msg.setSource(664U);
    msg.setSourceEntity(103U);
    msg.setDestination(11428U);
    msg.setDestinationEntity(89U);
    msg.sys_src.assign("TOYQBTMILLYJMTUGKXKPHJWFXWZXEMMBKSYPVOZAOEAHFOPASTQWRBF");
    msg.sys_dst.assign("LRZAGGSZWFVXEJBWGODISUVJAMQAIDBQJAREEYVKFAVNYQFGHHESSCINNCQKLUBXYPWGLIZJZFMTJDHDWVFRNALJCOXKGYUXTALFRNJRUHXKFDVBGWGEVOUVCKHQPWXJBSMNXRKOKDDZOBEERVIUAPEWLZSAUQZTQEWLFBDINWOTZUJQCIGQYYZIHKORXTPTRJMCDOWMSKYMMPOFYPCXTIYNZBMCP");
    msg.flags = 3U;
    const char tmp_msg_0[] = {69, -53, 108, 44, -70, 42, -87, -79, 91, -16, -40, -109, -61, 57, -89, -3, 69, -46, 117, -64, 12, -105, -27, -89, 11, 27, -119, 8, 49, -104, 120, 97, 3, 43, -35, -107, -18, -116, 64, 65, -48, 36, -7, -33, -69, -35, -62, -46, 84, -25, 72, 102, -35, 95, 91, 113, 67, 46, -18, 85, 46, -1, 15, -37, 16, 1, 116, 42, 113, -106, -46, -78, -108, -22, -116, -4, 4, -114, -35, 55, 6, 55, -82, -66, 13, -46, -102, -53, -20, 55, 102, 57, 92, -23, 91, 16, 108, 117, 68, 38, -125, -81, -37, 57};
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
    msg.setTimeStamp(0.300410934773);
    msg.setSource(62275U);
    msg.setSourceEntity(52U);
    msg.setDestination(32332U);
    msg.setDestinationEntity(66U);
    msg.seq = 45816U;
    msg.value = 66U;
    msg.error.assign("QNCOIELYQCJNUKJUHVIGZDWRHFFXSZWSZWNLAXMYBOGUXCYHDUVTLPAQJPPVZZBYVCAMWIMRNNFQDLOQKOBJXZVJJIJLPKSFTAXTOXPHVZRYEXSJQGRTRUYDHZVIOTJPREOWBKDTXWBMMGNGALANEEHMDVPSCODOLFVHKTASRCXWBGQHFFIKGRMUCULAOCTGRMIQDCIEWAZBDWNEPYKFUCFVNQBEMZKNAKJ");

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
    msg.setTimeStamp(0.958815524112);
    msg.setSource(30437U);
    msg.setSourceEntity(182U);
    msg.setDestination(26601U);
    msg.setDestinationEntity(237U);
    msg.seq = 414U;
    msg.value = 116U;
    msg.error.assign("WFYDFUQJUVINWLBFJQIESFBLMQZPGZYAWHUICYOWGUHLWLVOOGCXOHLOLAYHBPXKASMNXYWWRXVJTZKNLAKGQFDGXNETJKHNZFCRCWGJMFUCRCWRNZVDTSHKPORBJVQQAXPEPUPFZJIHSKGBMFOYAAMPEIZJNZVLTKXPAFSBVACSVEDCLIMMWYNUDDZRYKBYEQILIIBVBSTTMMBOTVJESCGDQS");

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
    msg.setTimeStamp(0.682692008977);
    msg.setSource(21333U);
    msg.setSourceEntity(61U);
    msg.setDestination(42570U);
    msg.setDestinationEntity(189U);
    msg.seq = 921U;
    msg.value = 144U;
    msg.error.assign("FNVBQORGBKAPXTEPDFPMJYNLWUBRWPGVIOQOKYKTZWNCSSOKTIYSAQAWMEEXEXXC");

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
    msg.setTimeStamp(0.81757204902);
    msg.setSource(41249U);
    msg.setSourceEntity(33U);
    msg.setDestination(3065U);
    msg.setDestinationEntity(229U);
    msg.seq = 51839U;
    msg.sys.assign("TJLWKANIXOWWPRXEBPDCZCZUBFPYWZRAGFHTUVGRVLGRKVTBOLAEAYIDJQBDUEMMQFAIIGOTOBPXDNXSVXJGDWOTYVDLSANUBYYZUNWSMJIDSOSQPRESHWDCFVXFLYKHMZQNEPPHQHKXQNKEAPHQNIIEBEJTYGCXEL");
    msg.value = 0.153990848811;

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
    msg.setTimeStamp(0.121092359626);
    msg.setSource(58164U);
    msg.setSourceEntity(34U);
    msg.setDestination(21534U);
    msg.setDestinationEntity(175U);
    msg.seq = 22514U;
    msg.sys.assign("JEGHOOFVSRYNFSHCRWYMXDNYRPDQLEKUTOJABLDPZWRMLTOUKUIBICTDLFFUPNWFWHQACIVFASIAYWGOXJAFMLACSHKFELYAHMOQDNUDEIORMQZNMXWVQIGKTSZBTSBONVCYCGJDMZCKLGRRNJDYOBTHIWZUZKVZFUGVZABPQQPCKQGDVTSCBFBEE");
    msg.value = 0.0710686377659;

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
    msg.setTimeStamp(0.765615712241);
    msg.setSource(63560U);
    msg.setSourceEntity(165U);
    msg.setDestination(9083U);
    msg.setDestinationEntity(19U);
    msg.seq = 33553U;
    msg.sys.assign("LIJRCTQOENGDTGZFYAJIBXWMJNGNRMXSBZSCSAUZCDHMFPKMRCHTFLEMJIYATBTOKWTWWINUNZEXPGSJKZMPRLYPVSCCQKFHWARYJLZYLLDKEUEYOOTIUDUBCAQSQSIEHSZSVLV");
    msg.value = 0.553478931847;

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
    msg.setTimeStamp(0.18776509902);
    msg.setSource(50153U);
    msg.setSourceEntity(154U);
    msg.setDestination(19169U);
    msg.setDestinationEntity(92U);
    msg.seq = 2800U;
    msg.sys_dst.assign("PBTLDBKCYNYKTWZEXKZGNEVHAUIFKDDRDOTLJLIZUXPQHASBMXFNQOJOEYSAIGKCMLQIUSOOIKWVNAWRMQHKVVAEAQNBSDLXJEATUTUJXZSCZRBEWCCDLHBFBGAFTLXBAUQXMVZYHZYDFMPWCRVTCWTHHDMETCIPQRFOULGPYJWKPAZNMBUFVGFZFLEMBNRGPWWXMSSQDUYSHRGNXDQOGFJJGNPLKZJIJQTCWOCNRXJOGEVIMUEO");
    msg.timeout = 0.979072228547;

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
    msg.setTimeStamp(0.648737464662);
    msg.setSource(4441U);
    msg.setSourceEntity(16U);
    msg.setDestination(55025U);
    msg.setDestinationEntity(187U);
    msg.seq = 9200U;
    msg.sys_dst.assign("KSSKVLRZZLDCRFXYHBRIDCRONANRJOVTBAKMAHTNKDATTSTDYHOGZSYJUYZIZHIRHWTKZNGANVXMCQSPLWYFGQXUVQXKMMHAWVXEPOAHLUOWJJBFVJKANHCKBXMPIZBQWPTUOJOAPGVEMYECRYSPEMZFTVDEBEQOSUUPMDCLMLEDQAILIXFYFPBLUQWKOOJFCBNRGNXQUYNDRCFXMIXQNJHRUHDTBVUTLIZLYQEGGWWSWE");
    msg.timeout = 0.424829048264;

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
    msg.setTimeStamp(0.99909600125);
    msg.setSource(2200U);
    msg.setSourceEntity(97U);
    msg.setDestination(1970U);
    msg.setDestinationEntity(64U);
    msg.seq = 25622U;
    msg.sys_dst.assign("QKIYQWPJPMFGIABQWZCRSQJANXSNI");
    msg.timeout = 0.500662957098;

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
    msg.setTimeStamp(0.119157518391);
    msg.setSource(23513U);
    msg.setSourceEntity(18U);
    msg.setDestination(25164U);
    msg.setDestinationEntity(58U);
    msg.action = 56U;
    msg.longain = 0.629100787006;
    msg.latgain = 0.219556885753;
    msg.bondthick = 1356205539U;
    msg.leadgain = 0.621205679553;
    msg.deconflgain = 0.248539068601;

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
    msg.setTimeStamp(0.918438207122);
    msg.setSource(9437U);
    msg.setSourceEntity(17U);
    msg.setDestination(39052U);
    msg.setDestinationEntity(143U);
    msg.action = 177U;
    msg.longain = 0.855128466832;
    msg.latgain = 0.908670221364;
    msg.bondthick = 1460831178U;
    msg.leadgain = 0.6373571784;
    msg.deconflgain = 0.201572068354;

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
    msg.setTimeStamp(0.313021685034);
    msg.setSource(34523U);
    msg.setSourceEntity(143U);
    msg.setDestination(39571U);
    msg.setDestinationEntity(146U);
    msg.action = 66U;
    msg.longain = 0.701080725985;
    msg.latgain = 0.35077570602;
    msg.bondthick = 4275113792U;
    msg.leadgain = 0.974998966121;
    msg.deconflgain = 0.347527105368;

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
    msg.setTimeStamp(0.00267595350196);
    msg.setSource(47335U);
    msg.setSourceEntity(108U);
    msg.setDestination(62061U);
    msg.setDestinationEntity(210U);
    msg.err_mean = 0.731928888097;
    msg.dist_min_abs = 0.062284433066;
    msg.dist_min_mean = 0.951183773762;

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
    msg.setTimeStamp(0.915056382636);
    msg.setSource(26636U);
    msg.setSourceEntity(212U);
    msg.setDestination(37031U);
    msg.setDestinationEntity(138U);
    msg.err_mean = 0.424830261373;
    msg.dist_min_abs = 0.91836221681;
    msg.dist_min_mean = 0.00408602940128;

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
    msg.setTimeStamp(0.0330191268526);
    msg.setSource(49716U);
    msg.setSourceEntity(184U);
    msg.setDestination(48135U);
    msg.setDestinationEntity(158U);
    msg.err_mean = 0.335134978518;
    msg.dist_min_abs = 0.663803137905;
    msg.dist_min_mean = 0.586570564399;

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
    msg.setTimeStamp(0.236051432475);
    msg.setSource(4647U);
    msg.setSourceEntity(170U);
    msg.setDestination(15247U);
    msg.setDestinationEntity(94U);
    msg.action = 9U;
    msg.lon_gain = 0.0411620570703;
    msg.lat_gain = 0.200705134239;
    msg.bond_thick = 0.240420437021;
    msg.lead_gain = 0.183736779594;
    msg.deconfl_gain = 0.432255494729;
    msg.accel_switch_gain = 0.316716150097;
    msg.safe_dist = 0.613021015851;
    msg.deconflict_offset = 0.193540506224;
    msg.accel_safe_margin = 0.16363988219;
    msg.accel_lim_x = 0.873037977151;

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
    msg.setTimeStamp(0.534546033163);
    msg.setSource(14040U);
    msg.setSourceEntity(205U);
    msg.setDestination(23333U);
    msg.setDestinationEntity(107U);
    msg.action = 87U;
    msg.lon_gain = 0.681459214297;
    msg.lat_gain = 0.322473292037;
    msg.bond_thick = 0.213167909389;
    msg.lead_gain = 0.935580671965;
    msg.deconfl_gain = 0.843298429367;
    msg.accel_switch_gain = 0.632390060575;
    msg.safe_dist = 0.591033470473;
    msg.deconflict_offset = 0.0704344034255;
    msg.accel_safe_margin = 0.138197123507;
    msg.accel_lim_x = 0.472813415673;

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
    msg.setTimeStamp(0.0233127560748);
    msg.setSource(58545U);
    msg.setSourceEntity(213U);
    msg.setDestination(62521U);
    msg.setDestinationEntity(78U);
    msg.action = 188U;
    msg.lon_gain = 0.664588636489;
    msg.lat_gain = 0.854423321285;
    msg.bond_thick = 0.593292317854;
    msg.lead_gain = 0.950407504639;
    msg.deconfl_gain = 0.316699513151;
    msg.accel_switch_gain = 0.173663936887;
    msg.safe_dist = 0.872383176626;
    msg.deconflict_offset = 0.67950633176;
    msg.accel_safe_margin = 0.334388499711;
    msg.accel_lim_x = 0.97052017628;

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
    msg.setTimeStamp(0.267244035313);
    msg.setSource(16314U);
    msg.setSourceEntity(55U);
    msg.setDestination(2639U);
    msg.setDestinationEntity(75U);
    msg.type = 104U;
    msg.op = 193U;
    msg.err_mean = 0.0156628577763;
    msg.dist_min_abs = 0.562212684034;
    msg.dist_min_mean = 0.604268622506;
    msg.roll_rate_mean = 0.26912062061;
    msg.time = 0.21640232477;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 18U;
    tmp_msg_0.lon_gain = 0.819722405024;
    tmp_msg_0.lat_gain = 0.331241706242;
    tmp_msg_0.bond_thick = 0.0525081114508;
    tmp_msg_0.lead_gain = 0.430539011463;
    tmp_msg_0.deconfl_gain = 0.632528039485;
    tmp_msg_0.accel_switch_gain = 0.516685661359;
    tmp_msg_0.safe_dist = 0.641631064989;
    tmp_msg_0.deconflict_offset = 0.670821743239;
    tmp_msg_0.accel_safe_margin = 0.340436739163;
    tmp_msg_0.accel_lim_x = 0.719684314543;
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
    msg.setTimeStamp(0.351950634028);
    msg.setSource(18500U);
    msg.setSourceEntity(206U);
    msg.setDestination(257U);
    msg.setDestinationEntity(220U);
    msg.type = 117U;
    msg.op = 65U;
    msg.err_mean = 0.208027155596;
    msg.dist_min_abs = 0.395239444963;
    msg.dist_min_mean = 0.584749433221;
    msg.roll_rate_mean = 0.730676887145;
    msg.time = 0.00147362084049;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 66U;
    tmp_msg_0.lon_gain = 0.801955722721;
    tmp_msg_0.lat_gain = 0.789082986938;
    tmp_msg_0.bond_thick = 0.48049536718;
    tmp_msg_0.lead_gain = 0.824303280328;
    tmp_msg_0.deconfl_gain = 0.744933957858;
    tmp_msg_0.accel_switch_gain = 0.960340080622;
    tmp_msg_0.safe_dist = 0.0378708907667;
    tmp_msg_0.deconflict_offset = 0.680692251986;
    tmp_msg_0.accel_safe_margin = 0.791275751623;
    tmp_msg_0.accel_lim_x = 0.0754549095013;
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
    msg.setTimeStamp(0.28636639574);
    msg.setSource(53337U);
    msg.setSourceEntity(75U);
    msg.setDestination(60873U);
    msg.setDestinationEntity(119U);
    msg.type = 69U;
    msg.op = 2U;
    msg.err_mean = 0.594604686771;
    msg.dist_min_abs = 0.996777022117;
    msg.dist_min_mean = 0.534243865535;
    msg.roll_rate_mean = 0.327239508574;
    msg.time = 0.68971507846;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 215U;
    tmp_msg_0.lon_gain = 0.920098729035;
    tmp_msg_0.lat_gain = 0.295651635639;
    tmp_msg_0.bond_thick = 0.510228053278;
    tmp_msg_0.lead_gain = 0.0857035344624;
    tmp_msg_0.deconfl_gain = 0.00510023358582;
    tmp_msg_0.accel_switch_gain = 0.903423053154;
    tmp_msg_0.safe_dist = 0.710111690599;
    tmp_msg_0.deconflict_offset = 0.475805421011;
    tmp_msg_0.accel_safe_margin = 0.955620670647;
    tmp_msg_0.accel_lim_x = 0.575108612851;
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
    msg.setTimeStamp(0.236700283197);
    msg.setSource(41761U);
    msg.setSourceEntity(175U);
    msg.setDestination(39726U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.555887397257;
    msg.lon = 0.480295996608;
    msg.eta = 4145743531U;
    msg.duration = 37013U;

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
    msg.setTimeStamp(0.609853261365);
    msg.setSource(45530U);
    msg.setSourceEntity(240U);
    msg.setDestination(44387U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.161064559678;
    msg.lon = 0.302312724589;
    msg.eta = 3576932404U;
    msg.duration = 52370U;

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
    msg.setTimeStamp(0.0745832544908);
    msg.setSource(60410U);
    msg.setSourceEntity(166U);
    msg.setDestination(52552U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.135640144347;
    msg.lon = 0.683059256953;
    msg.eta = 3820872267U;
    msg.duration = 14807U;

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
    msg.setTimeStamp(0.151925156347);
    msg.setSource(32527U);
    msg.setSourceEntity(85U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(161U);
    msg.plan_id = 12878U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.173397057526;
    tmp_msg_0.lon = 0.229975977764;
    tmp_msg_0.eta = 3420453425U;
    tmp_msg_0.duration = 15560U;
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
    msg.setTimeStamp(0.70642628481);
    msg.setSource(23734U);
    msg.setSourceEntity(55U);
    msg.setDestination(21125U);
    msg.setDestinationEntity(23U);
    msg.plan_id = 19007U;

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
    msg.setTimeStamp(0.702512560456);
    msg.setSource(54762U);
    msg.setSourceEntity(91U);
    msg.setDestination(9815U);
    msg.setDestinationEntity(128U);
    msg.plan_id = 37444U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0616563973785;
    tmp_msg_0.lon = 0.85665326674;
    tmp_msg_0.eta = 2316603285U;
    tmp_msg_0.duration = 25791U;
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
    msg.setTimeStamp(0.0656628874112);
    msg.setSource(14817U);
    msg.setSourceEntity(2U);
    msg.setDestination(11256U);
    msg.setDestinationEntity(128U);
    msg.type = 165U;
    msg.command = 59U;
    msg.settings.assign("WCVMUSHMPOUAMSTSONJXAWQRGZZWNUEAKVQBNXHFQZWLTTIVPMJWYHVWEJDURJDYPZVPUSZVIFRKQGNMQLFOUICKGRHDFNTJHPKLSKKLZREUZLHGHSGFJSDHLPTABVLOMAOZCXK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 65256U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UUMSQIIMEKCTACNWUIITPHYYOUDZYNOOGMLRUVDCTGVEGJDQZWELZYJIIFRKHNXNMMBXEHODATMPNSASOAYCLJLWPXFAWPLXWUHGRPRCDMDWZSTHORKWJBRFJNEZSZQIDKVEQFXKLBPZJDZJGBXCTTVRRKZVWENXHRWJVSUJEQMZBPDMSFLCOABVANVFFQKHIENKQHGV");

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
    msg.setTimeStamp(0.94256093388);
    msg.setSource(56620U);
    msg.setSourceEntity(240U);
    msg.setDestination(65431U);
    msg.setDestinationEntity(154U);
    msg.type = 82U;
    msg.command = 108U;
    msg.settings.assign("HTYGCSDZGOMMZRGBZVTGIUWLKMNJYXNHSXJUKNKBWFKMQENIOGNHWTT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 62367U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.816095554498;
    tmp_tmp_msg_0_0.lon = 0.500580399088;
    tmp_tmp_msg_0_0.eta = 1365934385U;
    tmp_tmp_msg_0_0.duration = 10324U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TIGZPAIOFAKVUPBJKXJRZHWSANMJOSNBIMBEOGGZTYMYWYDZFIMDKYRZVXWVMDJTWFUVLYKFRLLVEWTPLMQTUKIOUHSKNCJGRUTXQEAGSWNEQTBKJHAMOCEN");

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
    msg.setTimeStamp(0.0846267229317);
    msg.setSource(49880U);
    msg.setSourceEntity(131U);
    msg.setDestination(62617U);
    msg.setDestinationEntity(171U);
    msg.type = 124U;
    msg.command = 100U;
    msg.settings.assign("QTDXREWTDGJFEYIYHNAYSYLKMOHSOLCPDOFTJKSTXPIMKAGDPSRCHCAXRSGWYORGNJQCAGHQNXBPQJTRCZDHERENNCKZAIQLFYSUSZFSGUJMUJWRWKOLIAPDIGOSOVYEFMUXILZVAQBTZLVHVGEQWGCMSNMFDMRBVFWDBDBMXWKOV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 35943U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.447927891637;
    tmp_tmp_msg_0_0.lon = 0.87152244282;
    tmp_tmp_msg_0_0.eta = 3295156259U;
    tmp_tmp_msg_0_0.duration = 44417U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XXWSMVYKTKZZYOKLUURAQFWJZHSKPIYENRKSNQLYDLAIPCFUZEHVFQTOXTRTRZNQXDTJGEEDPBWNDVDXKUCFQLHLYGAEUZOPKMCMMQCVJQOAFVAFIVMRNCNHPAHNEUNAVJTLWZCOHCRTDSMHOGBYVMZIADEPJXWWWIOBGCYGIFTGHDRPWPLBXXIQCSJFYEALSTMQADBBXFBGFEBIUOSWNHSQCHVIUNRZGJUUYDLBJSPEXZSOIG");

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
    msg.setTimeStamp(0.816380527527);
    msg.setSource(51582U);
    msg.setSourceEntity(223U);
    msg.setDestination(36001U);
    msg.setDestinationEntity(99U);
    msg.state = 7U;
    msg.plan_id = 17790U;
    msg.wpt_id = 213U;
    msg.settings_chk = 44081U;

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
    msg.setTimeStamp(0.210969819513);
    msg.setSource(35087U);
    msg.setSourceEntity(177U);
    msg.setDestination(46542U);
    msg.setDestinationEntity(81U);
    msg.state = 155U;
    msg.plan_id = 37489U;
    msg.wpt_id = 172U;
    msg.settings_chk = 35408U;

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
    msg.setTimeStamp(0.789582226659);
    msg.setSource(45167U);
    msg.setSourceEntity(167U);
    msg.setDestination(30779U);
    msg.setDestinationEntity(87U);
    msg.state = 162U;
    msg.plan_id = 30603U;
    msg.wpt_id = 198U;
    msg.settings_chk = 17251U;

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
    msg.setTimeStamp(0.407940012299);
    msg.setSource(56816U);
    msg.setSourceEntity(22U);
    msg.setDestination(48793U);
    msg.setDestinationEntity(37U);
    msg.uid = 119U;
    msg.frag_number = 33U;
    msg.num_frags = 242U;
    const char tmp_msg_0[] = {-113, 82, 52, -43, -13, 54, 81, 116, 78, -60, -90, 29, -85, -103, 2, -4, 18, 11, 49, 29, -110, 37, 60, -88, -9, 82, -75, 70, 125, -117, -39, -24, 71, 5, 66, 117, -26, -80, 102, 41, 26, 64, 22, -77, -16, 4, 81, 99, -121, 104};
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
    msg.setTimeStamp(0.115643743376);
    msg.setSource(47185U);
    msg.setSourceEntity(90U);
    msg.setDestination(7689U);
    msg.setDestinationEntity(143U);
    msg.uid = 152U;
    msg.frag_number = 249U;
    msg.num_frags = 235U;
    const char tmp_msg_0[] = {-87, 50, 118, 0, -113, 23, -26, 40, -28, -78, 3, 24, 35, 23, -100, -66, -96, -56, -34, 21, -8, 124, 6, 64, 66, 94, 54, -54, -49, 68, -55, -105, 29, 56, 79, 21, 56, 86, -49, -31, 32, -44, -35, -8, 70, -12, -81, 45, -29, 121, 49, -102, 60, 74, -79, -114, 73, -70, 106, 69, 9, 92, -124, 99, -33, -12, -60, -21, -31, 61, 36, -33, 49, -35, -11, 14, 108, -102, 32, -103, 83, 53, -27, -77, -33, -35, -122, 80, 9, -24, 125, -78, 69, 89, 50, -64, 89, -33, 84, -99, 66, 125, -3, -14, -64, -108, -96, 120, -63, -38, 22, -33, -67, 117, -112, -106, -15, 68, 14, 32, -64, -82, -108, -87, 31, -9, -85, 62, 59, -28, -102, -34, -104, -47, -119, 62, 88, -68, 87, 89, 108, -90, 57, 70, -33, 21, 111, -71, 104, -2, 95, 11, 48, 69, -46, 30, 51, -85, -8, -90, 126, -122, -105, -102, 0, -26, -109, 84, -83, 61, 110, -29, 14, 21, 12};
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
    msg.setTimeStamp(0.97747695021);
    msg.setSource(36585U);
    msg.setSourceEntity(105U);
    msg.setDestination(10673U);
    msg.setDestinationEntity(15U);
    msg.uid = 227U;
    msg.frag_number = 125U;
    msg.num_frags = 34U;
    const char tmp_msg_0[] = {-7, 86, 55, -122, 8, -6, -69, 21, 115, 109, 117, -103, 0, -72, 98, 1, -46, 43, -11, -99, 67, -61, 94, -82, -66, -92, -94, 8, -33, 73, -77, 49, 13, 109, -46, -18, -117, -88, 65, -124, -119, -15, 54, -102, -64, 14, -97, 81, -70, 7, -111, 25, -103, 86, 40, -113, 71, -32, -126, 92, 99, 119, -17, -27, 50, -42, -121, -25, -87, 123, -4, 47, -118, 55, 83, 99, 108, -55, 21, 65, 118, -38, -4, -127, 110, -128, 88, -56, -38, 95, 33, 59, -51, -18, -95, 97, -46, -121, 92, -73, 0, 90, -81, 34, -122, -7, -63, 76, 10, 122, -55, -81, 107, 105, -36, 64, -119, -70, -22, 79, 65, 30, 87, -108, -95, -88, 54, 47, 95, -73, -97, 84, 57, 1, -46, -80, 94, -43, 55, 65, -39, -2, 13, -49, -26, -61, -102, -73, -40, -37, -88, 58, 30, 120, 34, 22, -110, -29, -61, 117, 109, -2, -106, 30, 45, 21};
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
    msg.setTimeStamp(0.723153652665);
    msg.setSource(28856U);
    msg.setSourceEntity(17U);
    msg.setDestination(20133U);
    msg.setDestinationEntity(230U);
    msg.content_type.assign("FNDJOHUKKRQMQOYICIUYUYRTWJCYHDUWSDQPJXWDEZCRKXEBROMBWPHSIPUMKOFANRQOBSKVHERDXTLPWFPZTEMWTMNGETACMAHQQXKQAXGVAFBMXBCYBKJAENFEFVDDLNMZYCGVZYEGLVQGITJTILBXGPBLSYZLOEXECJZBYLFIRWXFGRNLXKQPSWLVKNPSGFD");
    const char tmp_msg_0[] = {-98, 88, -93, 34, 81, 18, 1, 74, -121, -48, 59, -111, 9, -38, -70, 37, -121, -22, -77, 118, 26, -89, 5, -76, 20, 102, -52, 121, -37, 58, 125, -9, -14, 77, 50, -110, 101, -6, -93, 15, -106, -37, -75, 70, -51, -12, 8, 109, 59, -114, 5, 53, 77, 73, 97, -55, -75, -101, 60, 107, 47, 26, -82, -81, 117, 30};
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
    msg.setTimeStamp(0.802251156715);
    msg.setSource(59623U);
    msg.setSourceEntity(0U);
    msg.setDestination(50346U);
    msg.setDestinationEntity(92U);
    msg.content_type.assign("EKJWNJAVPWVZSLNSLXIKHTRITMBTGSCDKDOUUVEHBNRXADHVSHTIZTFMFWQHWHEVKIGBRWJPRQCMIFPPLDIKFWGZDWTUTKXXLBBYONONZGFEUESFMDQHCUFKJEMYVPGCKRARRJTBDLMSABOCYXIIRHFZDQVAIHCNGKCOCPCTWGSQYABVYZJYMOHRZZLEINMXMKTJUPVWUBYNFRMUQJGSNDGNZJAXVYDEWLFQYYPUOQ");
    const char tmp_msg_0[] = {61, -14, 96, 7, 50, -62, -100, 99, 22, 16, -5, 71, -87, 83, -117, -45, -36, -121, 116, 120, -107, 40, 77, -56, -17, 122, 102, -110, 11, 121, -113, 53, -102, 73, -10, 81, -47, 35, 113, -25, -60, -111, -75, 0, 124, 61, 82, 97, -2, 54, -112, 68, 29, 98, 59, 28, 27, 101, 105, -66, -84, -80, -80, -104, -74, -128, -114, 112, -21, -27, -101, 5, -12, 102, -117, 59, -117, -34};
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
    msg.setTimeStamp(0.643274565381);
    msg.setSource(15367U);
    msg.setSourceEntity(179U);
    msg.setDestination(17219U);
    msg.setDestinationEntity(225U);
    msg.content_type.assign("BSFHQOGKIKMWYAKMKHOKYJMDDSMCTRONPPLEGLFNJBEZFCSWEDSRGRJUADNMCDTGOGPNTUGQWMRDWIQKTVBNCFZ");
    const char tmp_msg_0[] = {-78, -14, -106, 69, 114, -108, -106, 30, -24, 35, 54, -124, -19, 21, 97, -31, 92, -37, 102, -100, 45, -111, -94, -33, 66, 59, -71, 105, 34, 113, 87, -78, -70, 125, -30, -88, 79, 24, -107, 55, 42, -91, -1, 18, 117, 69, 21, -37, 53, -102, -59, 62, -80, 92, 115, 122, 53, 7, 101, -2, 57, 72, 35, 49, -115, 35, 114, 46, -67, 21, -26, 76, 13, -107, -29, -99, 31, -49, -3, -26, -126, 37, -16, -3, 24, -5, -97, 14, -79, 97, 74, 14};
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
    msg.setTimeStamp(0.190384560696);
    msg.setSource(24398U);
    msg.setSourceEntity(154U);
    msg.setDestination(19932U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.699380376718);
    msg.setSource(49767U);
    msg.setSourceEntity(5U);
    msg.setDestination(22099U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.856748461833);
    msg.setSource(15463U);
    msg.setSourceEntity(184U);
    msg.setDestination(47655U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.542723572449);
    msg.setSource(42395U);
    msg.setSourceEntity(146U);
    msg.setDestination(61198U);
    msg.setDestinationEntity(62U);
    msg.target = 37692U;
    msg.bearing = 0.561364628727;
    msg.elevation = 0.508123411125;

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
    msg.setTimeStamp(0.877588587061);
    msg.setSource(17133U);
    msg.setSourceEntity(129U);
    msg.setDestination(5306U);
    msg.setDestinationEntity(191U);
    msg.target = 19936U;
    msg.bearing = 0.531698463513;
    msg.elevation = 0.679781808181;

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
    msg.setTimeStamp(0.691329606);
    msg.setSource(11793U);
    msg.setSourceEntity(203U);
    msg.setDestination(25176U);
    msg.setDestinationEntity(95U);
    msg.target = 25274U;
    msg.bearing = 0.686530666433;
    msg.elevation = 0.60101346803;

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
    msg.setTimeStamp(0.401503735938);
    msg.setSource(49083U);
    msg.setSourceEntity(209U);
    msg.setDestination(46439U);
    msg.setDestinationEntity(38U);
    msg.target = 36774U;
    msg.x = 0.419397110709;
    msg.y = 0.0503135416077;
    msg.z = 0.109223298735;

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
    msg.setTimeStamp(0.433632530886);
    msg.setSource(46542U);
    msg.setSourceEntity(102U);
    msg.setDestination(45865U);
    msg.setDestinationEntity(225U);
    msg.target = 32022U;
    msg.x = 0.306289399543;
    msg.y = 0.355783668483;
    msg.z = 0.127488830306;

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
    msg.setTimeStamp(0.0252611598727);
    msg.setSource(60884U);
    msg.setSourceEntity(152U);
    msg.setDestination(51949U);
    msg.setDestinationEntity(11U);
    msg.target = 33921U;
    msg.x = 0.141480139906;
    msg.y = 0.344742277748;
    msg.z = 0.454279461751;

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
    msg.setTimeStamp(0.152151054765);
    msg.setSource(65514U);
    msg.setSourceEntity(161U);
    msg.setDestination(57752U);
    msg.setDestinationEntity(51U);
    msg.target = 32616U;
    msg.lat = 0.31665755937;
    msg.lon = 0.659372610967;
    msg.z_units = 112U;
    msg.z = 0.00931308544202;

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
    msg.setTimeStamp(0.186273467434);
    msg.setSource(22553U);
    msg.setSourceEntity(23U);
    msg.setDestination(62087U);
    msg.setDestinationEntity(7U);
    msg.target = 31668U;
    msg.lat = 0.684246780018;
    msg.lon = 0.759920542451;
    msg.z_units = 243U;
    msg.z = 0.365975842653;

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
    msg.setTimeStamp(0.331154172468);
    msg.setSource(2320U);
    msg.setSourceEntity(39U);
    msg.setDestination(24169U);
    msg.setDestinationEntity(2U);
    msg.target = 9969U;
    msg.lat = 0.12652466475;
    msg.lon = 0.0206544042015;
    msg.z_units = 110U;
    msg.z = 0.974786991935;

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
    msg.setTimeStamp(0.580607914831);
    msg.setSource(13858U);
    msg.setSourceEntity(250U);
    msg.setDestination(44039U);
    msg.setDestinationEntity(166U);
    msg.locale.assign("NAEABKLCIFO");
    const char tmp_msg_0[] = {-84, -58, -119, -96, 27, 56, -37, 25, 6, -57, -95, -35, 65, 75, -125, 45, -88, 79, 81, -48, 12, -59, 86, 18, 122, -84, -86, 87, -30, 121, 72, 53, 77, 86, 82, 43, 116, -17, 118, 85, -88, 126, 27, -47, 4, 60, -120, 55, -128, 108, 90, -86, -79, 20, 76, 0, -19, 102, -51, 100, -82, 3, -95, 44, -128, -19, -113, 74, -25, -28, 87, 67, -56, 66, -47, 106, 9, -122, 41, -118, 80, 20, 86, 94, 9, 29, -113, 115, -108, -104, 78, -65, 102, -36, -33, 108, 26, -4, 67, 112, -92, 59, -111, -40, -25, 10, -85, 49, -21, -55, -16, 7, 68, -55, 18, -112, -96, 51, -128, 27, 103, -103, -7, -28, 26, 16, -120, -49, 0, 108, -118, 124, 107, 13, 89, -30, 10, -66, -34, -63, -107, 58, -18};
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
    msg.setTimeStamp(0.465753102728);
    msg.setSource(11142U);
    msg.setSourceEntity(118U);
    msg.setDestination(56412U);
    msg.setDestinationEntity(77U);
    msg.locale.assign("FANNDXFGCUHFHHLFHANFXCTQDHZTOSMIEJYDDCOKQWLTLJEXSBIEJMCXVAKRDOAGVSNXNUKNGCYCSAJRQPPUJY");
    const char tmp_msg_0[] = {63, 16, 87, 112, -29, 124, 111, -36, -1, -35, -69, -45, -112, 61, -80, 22, 89, -55, 48, 96, 123, -37, 84, 15, 25, 105, 8, 48, 19, -92, 121, 106, 83, 51, 13, 110, 56, 98, 115, 45, -126, 87, 113, 96, -17, 69, 75, -92, -17, -26, 62, -33, 78, 97, 58, -94, 44, -52, -35, -81, 44, -37, 9, 26, -60, 49, 0, -105, 89, 120, 66, 20, 122, -43, 86, 34, -63, 82, 104, -28, 2, -64, 87, -14, -121, -124, 0, 88, 121, 117, -9, 32, -118, 0, 98, -11, -80, 42, -37, 23, 65, 64, -73, 57, 23, 21, -87, -65, 4, 58, 98, -40, 111, 53, -90, -56, 23, 100, -78, -68, 107, 91, -60, 85, -10, 78, 126, -106, -30, 7, -71, -75, 52, 83, 95, 94, -5, -56, 99, 99, -24, 101, -55, -16, 92, 91, 12, 65, 120, -35, 73, -49, 47, -61, 11, 47, 49, -55, -31, -36, -125, -128, 8, -35, 3, -75, 118, 41, 60, -94, 114, -66, -99, -97, -72, 52, -65, 117, 101, -27, -10, -116, -69, 7, 78, 97, 41, 32, 48, -31, -117, -46, 73, 119, 57, 114, -98, -89, 18, 59, 40, 92, -80, -120, 27, 31, 123, 85, -105, -6, -3, -100, -6, -66, 125, 28, -66, -43, -113, 109, -30, 50, -103, 4, -36, 112, -92, 103, -121, -63, 104, 62, 117};
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
    msg.setTimeStamp(0.844527883837);
    msg.setSource(22100U);
    msg.setSourceEntity(149U);
    msg.setDestination(23049U);
    msg.setDestinationEntity(183U);
    msg.locale.assign("GKLZXFXRIDIUTLLANCRVPPQBVWHYBUOTNOJBSSICIQLPKEAJRNXQOVKFIKIBULFRETMZUDEHCPPBWASBHRBNQATZ");
    const char tmp_msg_0[] = {92, 75, -101, -34, 10, 93, -33, 3, 21, 90, -34, 115, -118, 56, -2, 30, -30, -101, -119, -48, 30, 22, 59, -24, -14, -58, -40, -98, 96, 58, 80, -74, -31, 79, 122, -13, -68, -55, -72, 30, 64, -70, 80, 27, 35, 29, 27, -97, -78, -125, -105, -33, 83, 21, -24, -24, -55, 0, -3, -117, -4, -36, -25, -42, 77, 43, 41, -8, 31, 87, 115, -120, -45, -43, 116, 67, -52, -10, -122, -64, 39, 10, 55, -127, -7, 34, 47, -15, 124, -51, -94, -48, 42, -60, -16, 111, 124, 16, -44, 58, -126, 22, -102, 32, 26, 80, 43, -27, -113, 126, 3, 84, -66, 85, 71, 82, -122, 34, -72, 92, 36, -25, -86, 1, -101, -81, 58, -64, -28, 105, 71, -46, -54, -42, 18, -119, -34, -28, 60, 27, 80, -11, -103, 67, -119, 98, 41, 41, -89, 69, -71, -30, 115, 76, -118, -59, 110, 15};
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
    msg.setTimeStamp(0.133905726387);
    msg.setSource(51742U);
    msg.setSourceEntity(188U);
    msg.setDestination(51743U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.523034150881);
    msg.setSource(15555U);
    msg.setSourceEntity(110U);
    msg.setDestination(26822U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.556670189047);
    msg.setSource(18077U);
    msg.setSourceEntity(226U);
    msg.setDestination(63480U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.678679811407);
    msg.setSource(44314U);
    msg.setSourceEntity(250U);
    msg.setDestination(11890U);
    msg.setDestinationEntity(216U);
    msg.camid = 82U;
    msg.x = 52204U;
    msg.y = 27217U;

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
    msg.setTimeStamp(0.998490075839);
    msg.setSource(54602U);
    msg.setSourceEntity(109U);
    msg.setDestination(59571U);
    msg.setDestinationEntity(202U);
    msg.camid = 156U;
    msg.x = 12295U;
    msg.y = 50041U;

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
    msg.setTimeStamp(0.538940518946);
    msg.setSource(44734U);
    msg.setSourceEntity(223U);
    msg.setDestination(31756U);
    msg.setDestinationEntity(116U);
    msg.camid = 119U;
    msg.x = 4569U;
    msg.y = 495U;

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
    msg.setTimeStamp(0.562676929711);
    msg.setSource(16854U);
    msg.setSourceEntity(109U);
    msg.setDestination(3640U);
    msg.setDestinationEntity(247U);
    msg.camid = 195U;
    msg.x = 18529U;
    msg.y = 56821U;

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
    msg.setTimeStamp(0.799581273246);
    msg.setSource(2283U);
    msg.setSourceEntity(234U);
    msg.setDestination(35434U);
    msg.setDestinationEntity(179U);
    msg.camid = 254U;
    msg.x = 18618U;
    msg.y = 38549U;

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
    msg.setTimeStamp(0.745747029469);
    msg.setSource(19596U);
    msg.setSourceEntity(13U);
    msg.setDestination(2356U);
    msg.setDestinationEntity(225U);
    msg.camid = 121U;
    msg.x = 27967U;
    msg.y = 37181U;

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
    msg.setTimeStamp(0.519771920795);
    msg.setSource(6624U);
    msg.setSourceEntity(18U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(155U);
    msg.tracking = 188U;
    msg.lat = 0.516056669883;
    msg.lon = 0.770981506614;
    msg.x = 0.789388421281;
    msg.y = 0.659152145965;
    msg.z = 0.579140928457;

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
    msg.setTimeStamp(0.592935656555);
    msg.setSource(17635U);
    msg.setSourceEntity(120U);
    msg.setDestination(64319U);
    msg.setDestinationEntity(55U);
    msg.tracking = 164U;
    msg.lat = 0.712219849472;
    msg.lon = 0.924237781826;
    msg.x = 0.722739641131;
    msg.y = 0.808244570293;
    msg.z = 0.160292382102;

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
    msg.setTimeStamp(0.591371305459);
    msg.setSource(38680U);
    msg.setSourceEntity(251U);
    msg.setDestination(44979U);
    msg.setDestinationEntity(128U);
    msg.tracking = 187U;
    msg.lat = 0.276645955763;
    msg.lon = 0.482448569641;
    msg.x = 0.767116199708;
    msg.y = 0.524917716729;
    msg.z = 0.542289959568;

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
    msg.setTimeStamp(0.308305431219);
    msg.setSource(13781U);
    msg.setSourceEntity(165U);
    msg.setDestination(4683U);
    msg.setDestinationEntity(30U);
    msg.target.assign("BJCYIKJSXZGWTYTNBZJTFRGKVACTXSJE");
    msg.lbearing = 0.185031630568;
    msg.lelevation = 0.661710668735;
    msg.bearing = 0.856990049071;
    msg.elevation = 0.0787680797049;
    msg.phi = 0.652610283561;
    msg.theta = 0.600578798836;
    msg.psi = 0.556110711748;
    msg.accuracy = 0.271022370598;

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
    msg.setTimeStamp(0.729358920661);
    msg.setSource(19710U);
    msg.setSourceEntity(254U);
    msg.setDestination(33194U);
    msg.setDestinationEntity(160U);
    msg.target.assign("DRXZQAMRNDUZOHFBUUORSWPTFKYKMOYHCEANVSRUITSDKVWODHTNBZKZLGSROAFZDXAMYXEAJLDCXDNOIGCLXLNYGNHBFJXYSXHHKBXPGYJSWEKVGBAEHZRXEDCIBBKZWE");
    msg.lbearing = 0.0756423716461;
    msg.lelevation = 0.900288555273;
    msg.bearing = 0.620211047851;
    msg.elevation = 0.562059935944;
    msg.phi = 0.132192344637;
    msg.theta = 0.300028439609;
    msg.psi = 0.842563627751;
    msg.accuracy = 0.727294044238;

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
    msg.setTimeStamp(0.964004943116);
    msg.setSource(40U);
    msg.setSourceEntity(180U);
    msg.setDestination(61178U);
    msg.setDestinationEntity(219U);
    msg.target.assign("TEOXZFQUQSCYUEKFUSHCRRMXMEMYTTSDCTNZFETGDZHUJAMCLGOVJBDPXVOJDBXTQMUQWHKCEPEWKOPMPRPKZNNOWKUYIVVTIIONSECXJZGDCRWZK");
    msg.lbearing = 0.301077536753;
    msg.lelevation = 0.689669713652;
    msg.bearing = 0.990232777406;
    msg.elevation = 0.901848811855;
    msg.phi = 0.674259904092;
    msg.theta = 0.108880682697;
    msg.psi = 0.17011732847;
    msg.accuracy = 0.466071022548;

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
    msg.setTimeStamp(0.429425486658);
    msg.setSource(52264U);
    msg.setSourceEntity(224U);
    msg.setDestination(41949U);
    msg.setDestinationEntity(152U);
    msg.target.assign("FNXSWTVINLBMLJXQRPYMWCJIESAFBGHFKACOZKDDSQAJRJHIQIVFMWZQZVMFPEQPJRWJNRXVUIGBMQSAOLPUTDWKKKWDFERUOAGXPEMYXJDVSUHTGUCBYEGHPXWNOEUJTOMUYBMZLBRTGCLGPACKAYNBINQIBYOGTTGWIEWORCLAPDXNZHQXKMCTHHEASFEHVGSZYTCVH");
    msg.x = 0.411897381764;
    msg.y = 0.85920476847;
    msg.z = 0.513849242232;
    msg.n = 0.348458857831;
    msg.e = 0.21269095456;
    msg.d = 0.890527305615;
    msg.phi = 0.855989027468;
    msg.theta = 0.192876204126;
    msg.psi = 0.052186572729;
    msg.accuracy = 0.589122533142;

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
    msg.setTimeStamp(0.774836299072);
    msg.setSource(971U);
    msg.setSourceEntity(118U);
    msg.setDestination(20015U);
    msg.setDestinationEntity(206U);
    msg.target.assign("MIVNFHSLRHBKDRVICYZPOXTEYFXGFARWTLBYKVNFILNGAKIZSXLCIBYETJJFNRVIOFCOPGVAWCTGKYKDBPEDRYVOVSHGFHHZMRINYMKWCRBETMJZTJAUCSLMA");
    msg.x = 0.222911986594;
    msg.y = 0.846449852652;
    msg.z = 0.423794314622;
    msg.n = 0.711591677652;
    msg.e = 0.697675895718;
    msg.d = 0.414852572255;
    msg.phi = 0.442229702917;
    msg.theta = 0.275313716834;
    msg.psi = 0.188382708515;
    msg.accuracy = 0.928218897424;

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
    msg.setTimeStamp(0.0852397509309);
    msg.setSource(23986U);
    msg.setSourceEntity(6U);
    msg.setDestination(37377U);
    msg.setDestinationEntity(18U);
    msg.target.assign("VBNJCVWVOEEIUQFXSKBXLPQLEEPUHOVSMRUCXDDMWLYYKKIFBMTKFUHUIGLWUJBDTBMPAHAACPIENVPEEQKODGKTOFWDGQNAYYGZRLTNIZVGYSTNTRKQYZQVMJXUTZUJCYSWICKCDMOMVVPDRSNAWGHSJSKQHYBHZRPHOPLOZXDUEWQUIGHXGJFCXHJBSTLRINOZBEDQXNYIRALBZL");
    msg.x = 0.518404511274;
    msg.y = 0.87933005331;
    msg.z = 0.304057500796;
    msg.n = 0.97897349513;
    msg.e = 0.50931141971;
    msg.d = 0.933446247607;
    msg.phi = 0.792224926027;
    msg.theta = 0.13779309694;
    msg.psi = 0.932280617989;
    msg.accuracy = 0.741040180913;

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
    msg.setTimeStamp(0.56106976944);
    msg.setSource(53508U);
    msg.setSourceEntity(212U);
    msg.setDestination(30308U);
    msg.setDestinationEntity(212U);
    msg.target.assign("FLQCTCJYNHBQHLZMJUXOARVGWZCDZHUCSGSGCGTMSBGAQEPJVNDXBACEQWVLEXDVVXQCYLAQLXOLDAXTHBKPSGRZDFWYNYHMNGNVDFSONOTKAIHAQXMVOBPPWKFZLJYVGXDFYZMKZPEFLQHIOTHJTHFUPQTMBAEKJWKPRTVHXNWCRIUTAUJORPZWMBO");
    msg.lat = 0.468377376664;
    msg.lon = 0.485717091865;
    msg.z_units = 76U;
    msg.z = 0.828798504724;
    msg.accuracy = 0.823901106157;

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
    msg.setTimeStamp(0.812615433469);
    msg.setSource(31654U);
    msg.setSourceEntity(189U);
    msg.setDestination(52400U);
    msg.setDestinationEntity(14U);
    msg.target.assign("TDPAHLEMERWSRUPUJDNXYDYZYLOQUHAHFJZVBBAUPDGZCZNVCVPBLEKAYNQCLBJJWXWOZIJNW");
    msg.lat = 0.27606478019;
    msg.lon = 0.537393138886;
    msg.z_units = 50U;
    msg.z = 0.435265776667;
    msg.accuracy = 0.421950354547;

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
    msg.setTimeStamp(0.889250069269);
    msg.setSource(9748U);
    msg.setSourceEntity(79U);
    msg.setDestination(23033U);
    msg.setDestinationEntity(11U);
    msg.target.assign("SIWTJXZZNWNZQYIGERPKTQBLUYCKAHZUEYJBZHSKISIBTQIFMABYSPUNUFTUNBWGTFEJZ");
    msg.lat = 0.502780913707;
    msg.lon = 0.669377397481;
    msg.z_units = 131U;
    msg.z = 0.376255658306;
    msg.accuracy = 0.948415294988;

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
    msg.setTimeStamp(0.167318167846);
    msg.setSource(38872U);
    msg.setSourceEntity(183U);
    msg.setDestination(10543U);
    msg.setDestinationEntity(169U);
    msg.name.assign("YVJSAGAKOUTMYKFUBNNHJBTJUDMPQLYOLZTHZJCEWPZIXCGRAGFQKDKCUXDPMLRBVIFAFBOXZWUWRXXGGRENUKGKIKHUNYHSCBZYVPNWOOFQMDKCSNBDHHADXCLVFXANSZHUJMSPDSIXVWIITRMGOHLNEAMXQYLNSQPTWYBJLORTIOJQTB");
    msg.lat = 0.469570427981;
    msg.lon = 0.0391503411464;
    msg.z = 0.769269266455;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.196228686732);
    msg.setSource(39965U);
    msg.setSourceEntity(233U);
    msg.setDestination(46422U);
    msg.setDestinationEntity(56U);
    msg.name.assign("MCEQVOORWPYYEZOUVVZPSDEBYQNVBUBEFEJMKHHGONTNTCGOULPKKUQWFLPXZNDXPLFHTWHWYRSJLLAZXJIDRFUDACEVDEDQWDPONCYDZYUFBQIOIUTSUAFTGJZKYLSEQZGJTSKTXLASQPGUXTISHANAWTU");
    msg.lat = 0.466524521191;
    msg.lon = 0.680573404872;
    msg.z = 0.329014290086;
    msg.z_units = 238U;

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
    msg.setTimeStamp(0.977956082892);
    msg.setSource(18860U);
    msg.setSourceEntity(13U);
    msg.setDestination(21396U);
    msg.setDestinationEntity(181U);
    msg.name.assign("AAPHBYIEQZBFIVKGWNGGGX");
    msg.lat = 0.627394815239;
    msg.lon = 0.376777595809;
    msg.z = 0.142532632681;
    msg.z_units = 174U;

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
    msg.setTimeStamp(0.880938861137);
    msg.setSource(19363U);
    msg.setSourceEntity(229U);
    msg.setDestination(43644U);
    msg.setDestinationEntity(193U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.352891360767);
    msg.setSource(48101U);
    msg.setSourceEntity(83U);
    msg.setDestination(11383U);
    msg.setDestinationEntity(171U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.838934627437);
    msg.setSource(12996U);
    msg.setSourceEntity(115U);
    msg.setDestination(51234U);
    msg.setDestinationEntity(44U);
    msg.op = 92U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TLNZOULNCALDFUNSJEZNDSMMEFAZWQGRDBVSCXOPPXVEKJNYJRTIRQMDHWUPGKTDBYOVFQSSCYFUTVPVMVRCBVFBYW");
    tmp_msg_0.lat = 0.620862951041;
    tmp_msg_0.lon = 0.657918716551;
    tmp_msg_0.z = 0.873427721895;
    tmp_msg_0.z_units = 186U;
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
    msg.setTimeStamp(0.55674884583);
    msg.setSource(51060U);
    msg.setSourceEntity(144U);
    msg.setDestination(63623U);
    msg.setDestinationEntity(148U);
    msg.value = 0.886453516959;
    msg.type = 155U;

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
    msg.setTimeStamp(0.257894201773);
    msg.setSource(43082U);
    msg.setSourceEntity(121U);
    msg.setDestination(63478U);
    msg.setDestinationEntity(69U);
    msg.value = 0.112703301211;
    msg.type = 175U;

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
    msg.setTimeStamp(0.147182795373);
    msg.setSource(46736U);
    msg.setSourceEntity(211U);
    msg.setDestination(22149U);
    msg.setDestinationEntity(244U);
    msg.value = 0.0319224237012;
    msg.type = 183U;

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
    msg.setTimeStamp(0.922328402175);
    msg.setSource(54481U);
    msg.setSourceEntity(92U);
    msg.setDestination(29155U);
    msg.setDestinationEntity(2U);
    msg.value = 0.007999223784;

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
    msg.setTimeStamp(0.427588388478);
    msg.setSource(58567U);
    msg.setSourceEntity(104U);
    msg.setDestination(49342U);
    msg.setDestinationEntity(157U);
    msg.value = 0.7550627171;

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
    msg.setTimeStamp(0.143361482845);
    msg.setSource(49525U);
    msg.setSourceEntity(239U);
    msg.setDestination(32036U);
    msg.setDestinationEntity(31U);
    msg.value = 0.739779499799;

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
    msg.setTimeStamp(0.297708787955);
    msg.setSource(39812U);
    msg.setSourceEntity(132U);
    msg.setDestination(16692U);
    msg.setDestinationEntity(235U);
    msg.timestamp_last_service = 0.590964845048;
    msg.time_next_service = 0.431402751988;
    msg.time_motor_next_service = 0.388962601134;
    msg.time_idle_ground = 0.578495812246;
    msg.time_idle_air = 0.319242575347;
    msg.time_idle_water = 0.832630098562;
    msg.time_idle_underwater = 0.542572896213;
    msg.time_idle_unknown = 0.388447287299;
    msg.time_motor_ground = 0.191465785379;
    msg.time_motor_air = 0.701106816685;
    msg.time_motor_water = 0.169740409273;
    msg.time_motor_underwater = 0.491549878238;
    msg.time_motor_unknown = 0.713253133721;
    msg.rpm_min = 20511;
    msg.rpm_max = 2753;
    msg.depth_max = 0.224649283824;

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
    msg.setTimeStamp(0.961497997736);
    msg.setSource(23900U);
    msg.setSourceEntity(239U);
    msg.setDestination(53398U);
    msg.setDestinationEntity(185U);
    msg.timestamp_last_service = 0.41501440426;
    msg.time_next_service = 0.888840151007;
    msg.time_motor_next_service = 0.825568317169;
    msg.time_idle_ground = 0.0884184609453;
    msg.time_idle_air = 0.0225263968365;
    msg.time_idle_water = 0.891216136819;
    msg.time_idle_underwater = 0.855621930619;
    msg.time_idle_unknown = 0.506673209179;
    msg.time_motor_ground = 0.120444815093;
    msg.time_motor_air = 0.431887833687;
    msg.time_motor_water = 0.394299027711;
    msg.time_motor_underwater = 0.894056456371;
    msg.time_motor_unknown = 0.826335134109;
    msg.rpm_min = -31010;
    msg.rpm_max = 17202;
    msg.depth_max = 0.262309778322;

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
    msg.setTimeStamp(0.882794233197);
    msg.setSource(27490U);
    msg.setSourceEntity(93U);
    msg.setDestination(45951U);
    msg.setDestinationEntity(102U);
    msg.timestamp_last_service = 0.975465499368;
    msg.time_next_service = 0.0277176491794;
    msg.time_motor_next_service = 0.614645860551;
    msg.time_idle_ground = 0.30404141963;
    msg.time_idle_air = 0.129077652288;
    msg.time_idle_water = 0.108484570316;
    msg.time_idle_underwater = 0.454661271121;
    msg.time_idle_unknown = 0.649296852949;
    msg.time_motor_ground = 0.750631094967;
    msg.time_motor_air = 0.359470077364;
    msg.time_motor_water = 0.403445846995;
    msg.time_motor_underwater = 0.766404211293;
    msg.time_motor_unknown = 0.386799525788;
    msg.rpm_min = 3180;
    msg.rpm_max = -19969;
    msg.depth_max = 0.0516748611918;

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
    msg.setTimeStamp(0.713268076205);
    msg.setSource(62763U);
    msg.setSourceEntity(208U);
    msg.setDestination(65263U);
    msg.setDestinationEntity(27U);
    msg.severity = 17U;
    msg.text.assign("IDZLGZMKPBHEDZXUSJFAYFPFTAXQHIEKAYGEQSVFDGBGWZRZMLJRCVHVXKDOBPLOXGYTCGWNYUBANCOKVKGNHVRDDXOKTFSZPAJENVZSMOCOIZTQMGYRFASNGQDELVIKFETJLAWJAXJMINXHZBHBOXUQCOLOYYBMUFERJDMWYAQLKPUTWVASZBXULUQNWCTYPHBSTGQEWHIND");

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
    msg.setTimeStamp(0.209776238224);
    msg.setSource(36383U);
    msg.setSourceEntity(199U);
    msg.setDestination(6556U);
    msg.setDestinationEntity(159U);
    msg.severity = 83U;
    msg.text.assign("RKTIZKLMPFIYRWXSMOYFDAMYERBHOYGBIVZKQTNCDZBOWBYWQFCBKSZSWKWNVEZZKCRFMHPEHVPGSOOILQNAMFIADQFUXIYDBNBGPTVLCIJRELRCQWHNVOVYRMSDVTQASKSRTFUEJFCHRWHJVUVHKUCSALTXAPAUHLJJNKGTHXDNCMFPOZKOGDUTCELNBIGQGISGJZPMEUALDAJLDEZNPOYFPXTOYMPXJZTUXEBUJXDNEYQSGQJLUXWWAQX");

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
    msg.setTimeStamp(0.485716783982);
    msg.setSource(60467U);
    msg.setSourceEntity(164U);
    msg.setDestination(16852U);
    msg.setDestinationEntity(194U);
    msg.severity = 175U;
    msg.text.assign("ZNTBVQWFZBDKJDSFLZBQYKCAOWANOXXRHIYZNLJNMBOEEFZAOYDTLXRCQGVVTPIQYKVZWKPMCENIIPJLFURLRUCLDMGPPCNPGZUXRKLWBEKGNSLARHDMGUSSGYVUYFJLAWKSPHWIHKRCJCOFTBABMOVFPTTWFDHXJOXAWIQEUPRSKEGQVMZMERVCADKJQBRTXAFYYSUITCHIOWHTUYSESWQZQY");

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
    msg.setTimeStamp(0.094556057028);
    msg.setSource(24500U);
    msg.setSourceEntity(243U);
    msg.setDestination(14486U);
    msg.setDestinationEntity(150U);
    msg.channel = 94;
    msg.value = -316508074;
    msg.gain = 226U;

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
    msg.setTimeStamp(0.0188148823559);
    msg.setSource(10711U);
    msg.setSourceEntity(93U);
    msg.setDestination(60631U);
    msg.setDestinationEntity(207U);
    msg.channel = -44;
    msg.value = -2071632663;
    msg.gain = 245U;

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
    msg.setTimeStamp(0.421215743426);
    msg.setSource(49696U);
    msg.setSourceEntity(151U);
    msg.setDestination(42703U);
    msg.setDestinationEntity(189U);
    msg.channel = -6;
    msg.value = 1039522096;
    msg.gain = 221U;

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
    msg.setTimeStamp(0.517435839544);
    msg.setSource(55514U);
    msg.setSourceEntity(231U);
    msg.setDestination(2416U);
    msg.setDestinationEntity(71U);
    msg.ch01 = 0.842305039879;
    msg.ch02 = 0.454080937107;
    msg.ch03 = 0.776742066569;
    msg.ch04 = 0.383224129564;
    msg.ch05 = 0.788248776576;
    msg.ch06 = 0.928167133382;
    msg.ch07 = 0.926062200494;
    msg.ch08 = 0.876947212796;
    msg.ch09 = 0.382739185496;
    msg.ch10 = 0.0767129826918;
    msg.ch11 = 0.32765812749;
    msg.ch12 = 0.425834435776;
    msg.ch13 = 0.310504910898;
    msg.ch14 = 0.810990550261;
    msg.ch15 = 0.756039162607;
    msg.ch16 = 0.409709728966;

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
    msg.setTimeStamp(0.232054473586);
    msg.setSource(8639U);
    msg.setSourceEntity(228U);
    msg.setDestination(12572U);
    msg.setDestinationEntity(170U);
    msg.ch01 = 0.361614947949;
    msg.ch02 = 0.925434859407;
    msg.ch03 = 0.1701652046;
    msg.ch04 = 0.262329986299;
    msg.ch05 = 0.248214289925;
    msg.ch06 = 0.171482677767;
    msg.ch07 = 0.444294273439;
    msg.ch08 = 0.14427184866;
    msg.ch09 = 0.695247924032;
    msg.ch10 = 0.913174160968;
    msg.ch11 = 0.195626749928;
    msg.ch12 = 0.361817073924;
    msg.ch13 = 0.0800604085777;
    msg.ch14 = 0.94071775239;
    msg.ch15 = 0.840358375327;
    msg.ch16 = 0.48117399869;

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
    msg.setTimeStamp(0.551268053492);
    msg.setSource(25U);
    msg.setSourceEntity(115U);
    msg.setDestination(60309U);
    msg.setDestinationEntity(250U);
    msg.ch01 = 0.43877464635;
    msg.ch02 = 0.472617663149;
    msg.ch03 = 0.634031767383;
    msg.ch04 = 0.390482127507;
    msg.ch05 = 0.00548026983567;
    msg.ch06 = 0.129087387106;
    msg.ch07 = 0.299636705952;
    msg.ch08 = 0.786898730514;
    msg.ch09 = 0.928492630467;
    msg.ch10 = 0.2784661888;
    msg.ch11 = 0.938583893107;
    msg.ch12 = 0.0312688073448;
    msg.ch13 = 0.180879011923;
    msg.ch14 = 0.344846297292;
    msg.ch15 = 0.397981557008;
    msg.ch16 = 0.670393600196;

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
    msg.setTimeStamp(0.210225964496);
    msg.setSource(18425U);
    msg.setSourceEntity(97U);
    msg.setDestination(44359U);
    msg.setDestinationEntity(229U);
    msg.value = 0.63739383356;

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
    msg.setTimeStamp(0.914275564879);
    msg.setSource(43016U);
    msg.setSourceEntity(82U);
    msg.setDestination(64333U);
    msg.setDestinationEntity(18U);
    msg.value = 0.877350254838;

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
    msg.setTimeStamp(0.876948124894);
    msg.setSource(39589U);
    msg.setSourceEntity(78U);
    msg.setDestination(56268U);
    msg.setDestinationEntity(79U);
    msg.value = 0.28596554404;

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
    msg.setTimeStamp(0.275771984274);
    msg.setSource(9111U);
    msg.setSourceEntity(75U);
    msg.setDestination(52083U);
    msg.setDestinationEntity(198U);
    msg.op = 1U;
    msg.lat = 0.737253976033;
    msg.lon = 0.661156374206;
    msg.height = 0.652324945506;
    msg.depth = 0.235203646549;
    msg.alt = 0.499015369975;

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
    msg.setTimeStamp(0.220993805601);
    msg.setSource(56398U);
    msg.setSourceEntity(247U);
    msg.setDestination(48517U);
    msg.setDestinationEntity(29U);
    msg.op = 8U;
    msg.lat = 0.63682993266;
    msg.lon = 0.265955165454;
    msg.height = 0.137616272588;
    msg.depth = 0.541779044236;
    msg.alt = 0.630125193416;

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
    msg.setTimeStamp(0.0215456633245);
    msg.setSource(24800U);
    msg.setSourceEntity(52U);
    msg.setDestination(46176U);
    msg.setDestinationEntity(199U);
    msg.op = 179U;
    msg.lat = 0.163225828386;
    msg.lon = 0.490268174752;
    msg.height = 0.438801768947;
    msg.depth = 0.901072145087;
    msg.alt = 0.321883506449;

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
