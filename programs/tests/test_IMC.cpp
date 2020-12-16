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
// IMC XML MD5: 06d0bcdb61bc5c098b62564e5a98a2a0                            *
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
    msg.setTimeStamp(0.181175821927);
    msg.setSource(53496U);
    msg.setSourceEntity(24U);
    msg.setDestination(12900U);
    msg.setDestinationEntity(123U);
    msg.state = 240U;
    msg.flags = 248U;
    msg.description.assign("QNHCYIIABHWUASLURRHNRLJKHALBERQLZRGBDZBWCJZWOEDMPMXWECCLEVXGFNIWVNSOGTCZYTTEIVGYTINDPKJMHOVRVDHJUGSEYPIMIFCUFTKORVAKQOIGQDPJCUSNKURUOQAS");

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
    msg.setTimeStamp(0.251140863673);
    msg.setSource(10928U);
    msg.setSourceEntity(210U);
    msg.setDestination(53429U);
    msg.setDestinationEntity(33U);
    msg.state = 231U;
    msg.flags = 210U;
    msg.description.assign("YEYPROQZMLMVWVEZAATNPHVJUTSHYPVPQZWFBAMOXSQYIQXHFIOJBQTUPNNXVSGROFYUMITBMGWFBJGURPWBJPJOFFRURGTMXKBQ");

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
    msg.setTimeStamp(0.742224973725);
    msg.setSource(19711U);
    msg.setSourceEntity(71U);
    msg.setDestination(43090U);
    msg.setDestinationEntity(136U);
    msg.state = 89U;
    msg.flags = 212U;
    msg.description.assign("CJMPACOVIKZHSFXUWTOFCYDGIEMOOIIPQLGNZOBSFRHYXOPVNEBAXXDUEWEWQZTGKFLJSWQOUEDASXAXVFTNUKNTRQEJCUPVWBDWVJRNRYYTNKWVTQGJPFYUALBJHVCLEAQKDMHTACNRSPGGHSXJMUAEXMBYMSYOOCBPLSXORFHDUBLTH");

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
    msg.setTimeStamp(0.73262754516);
    msg.setSource(15022U);
    msg.setSourceEntity(149U);
    msg.setDestination(30051U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.673918780956);
    msg.setSource(49467U);
    msg.setSourceEntity(100U);
    msg.setDestination(16901U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.498281570959);
    msg.setSource(33322U);
    msg.setSourceEntity(37U);
    msg.setDestination(47798U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.857653176891);
    msg.setSource(19887U);
    msg.setSourceEntity(121U);
    msg.setDestination(6107U);
    msg.setDestinationEntity(143U);
    msg.id = 153U;
    msg.label.assign("KWQRWYEDDOIHBUFBTNPCFCPNRWAJPGCHYNDHSMOQZFEPKQGHXOCWIZFHYKATVHALBJPLYNIHLX");
    msg.component.assign("KRBDFVMRHLSTSNEJCWZHBFEHRSYPCEQYTLDEFPIMSXZWXIGQTRZOTEUVVVABXQIOVO");
    msg.act_time = 46049U;
    msg.deact_time = 61403U;

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
    msg.setTimeStamp(0.356792630045);
    msg.setSource(47638U);
    msg.setSourceEntity(247U);
    msg.setDestination(37817U);
    msg.setDestinationEntity(193U);
    msg.id = 62U;
    msg.label.assign("LBMXQTANUKONNJOBEFXURHTTMWBZNAIUZDGVFRCQFBERIJUHMTRBAZJCODEQPJASSJROGVRTLOQKYGFHPKEWJTVSNCIGPLZZCRVYEUHDKRJXYQSILQXDYHLCUBBIVJYVPEYMALHWTYRDGNAJWANMBZOJKFWIFCYQZTGPFSLSPCHXGIPEEKXMPDZDFA");
    msg.component.assign("GQKTFQANTDCJDAVBLISUVUDPEAXKEPNFMHVJQKZPFTAFOTWRKD");
    msg.act_time = 50719U;
    msg.deact_time = 62501U;

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
    msg.setTimeStamp(0.627977876279);
    msg.setSource(3847U);
    msg.setSourceEntity(74U);
    msg.setDestination(63474U);
    msg.setDestinationEntity(253U);
    msg.id = 45U;
    msg.label.assign("BHABPWSYSWCILPHTNTULCTMORGZGXUVTVLNEKJEJKRQZEXLHQRBTPNUIRBDYQHGKCPQZGYWNQYNLLGOIYFAOMPBAGFOETVZYXDMYVLWSIMYCSGVWGTDMNJCGFZMXIIDQUDUTMFKKOUKQSOJRXSBOIBADUVEKAPCXEASIELUSHRABKEDVUFF");
    msg.component.assign("NGLUKFATHZOIPQDJLIMNSVRWTQSCQRFJFNWOJTOMLY");
    msg.act_time = 59296U;
    msg.deact_time = 60419U;

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
    msg.setTimeStamp(0.300919528385);
    msg.setSource(58405U);
    msg.setSourceEntity(143U);
    msg.setDestination(30419U);
    msg.setDestinationEntity(208U);
    msg.id = 143U;

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
    msg.setTimeStamp(0.459276677976);
    msg.setSource(45686U);
    msg.setSourceEntity(0U);
    msg.setDestination(42714U);
    msg.setDestinationEntity(106U);
    msg.id = 254U;

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
    msg.setTimeStamp(0.0500150427288);
    msg.setSource(16508U);
    msg.setSourceEntity(9U);
    msg.setDestination(33245U);
    msg.setDestinationEntity(222U);
    msg.id = 134U;

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
    msg.setTimeStamp(0.771686909942);
    msg.setSource(35265U);
    msg.setSourceEntity(101U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(122U);
    msg.op = 111U;
    msg.list.assign("LITKJWCBXYNWGUKYMDLHJKTBJZEEISTFBNJLKQYBOVIMDGIPJLZTBNCSSUTNYKGFIMGNCIDLWWOMJGPKLODVHMDQEBDEMSUVOFOBUZIYVZYRQGCBIDYAWCVZZCEAFCEWTXXBKXPKMQYGFCVHMGFOFFDJCOHXPVRXGRRPLENAGTNRRHDXNMOQZNPYQKSUQOXPZUSWHFLARNZEUJVETWSZ");

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
    msg.setTimeStamp(0.276546946508);
    msg.setSource(57917U);
    msg.setSourceEntity(127U);
    msg.setDestination(20172U);
    msg.setDestinationEntity(176U);
    msg.op = 171U;
    msg.list.assign("ATWOCYFSIDAPVLFEZLROWRSARLPLGKENPFVDAERXWJQPUWJYWIZTXIKTVTBSGKQJQ");

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
    msg.setTimeStamp(0.658472479384);
    msg.setSource(27324U);
    msg.setSourceEntity(134U);
    msg.setDestination(26728U);
    msg.setDestinationEntity(180U);
    msg.op = 56U;
    msg.list.assign("JKSSOGTFEWIBVFAPCJKHBNYLFWQDJKZNLGYDBVQMQPZRXOWJOWUFVOFCAPPUNIVZQLNWSPWAFNURZAJCFKOMMNSBPSIGANOGXNMDHVWRXSCYKADYSQAOTDXJXTESPCEIUIHLHJROEGKXXLUWELYGRIRXZGQQUCSDBLFRLMTLUTEOIGBXYJHQZWVNVMHDTBFLEDBTRHZJZIKTKAIYCJAXBSWTVEYEHMMNHMOQUZYD");

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
    msg.setTimeStamp(0.963101646505);
    msg.setSource(3634U);
    msg.setSourceEntity(170U);
    msg.setDestination(40956U);
    msg.setDestinationEntity(126U);
    msg.value = 1U;

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
    msg.setTimeStamp(0.310842611473);
    msg.setSource(4732U);
    msg.setSourceEntity(191U);
    msg.setDestination(5878U);
    msg.setDestinationEntity(65U);
    msg.value = 78U;

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
    msg.setTimeStamp(0.235755175919);
    msg.setSource(53827U);
    msg.setSourceEntity(34U);
    msg.setDestination(60587U);
    msg.setDestinationEntity(136U);
    msg.value = 74U;

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
    msg.setTimeStamp(0.34313685953);
    msg.setSource(7817U);
    msg.setSourceEntity(57U);
    msg.setDestination(30026U);
    msg.setDestinationEntity(116U);
    msg.consumer.assign("HOKINRQNOKTMPHFDDCUEOYZZXYQPSYYOBSLDNSQSLCKLBXABJGGPFFUTNPLYYWZHUTZZRATFFBWKOVGRAYFVUBKCXRMEPXMDHWQCWARTNIMJKGCFWIZHQPVSYQINTWKTJZUROLLHASZADZPQRQXCCPIKNHWMDARSEGBQNWCTDMTUNVQMLGLDGJEWREBICGZXSVAEFISDMKH");
    msg.message_id = 60862U;

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
    msg.setTimeStamp(0.256176848787);
    msg.setSource(35308U);
    msg.setSourceEntity(163U);
    msg.setDestination(34809U);
    msg.setDestinationEntity(175U);
    msg.consumer.assign("QNBXHZAZYKFTBSSHFSXPONCZTVFKRLJZEDAUSGZNLZLKGRYDKQMADTUFRKCYRZPYJQVOVUAWYTZHIEQFPV");
    msg.message_id = 40016U;

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
    msg.setTimeStamp(0.614598422262);
    msg.setSource(40155U);
    msg.setSourceEntity(151U);
    msg.setDestination(44854U);
    msg.setDestinationEntity(169U);
    msg.consumer.assign("YYMOTKCXTNYEIPDBYPCVESLHTPDUNOXHSBHSWZEQZDQFLHXOLCPGNWXHDESEYIAUOKSQMZZPGXCVXSSXIWJJZGAYBINIOPKYFTRCGJWAZDWDDFSYQRTJKCRXXRMCBCIUNFQMUNXZAAEODVYTHHPEONQGMOHSQPKULFSQWF");
    msg.message_id = 17942U;

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
    msg.setTimeStamp(0.569990441542);
    msg.setSource(23554U);
    msg.setSourceEntity(185U);
    msg.setDestination(28350U);
    msg.setDestinationEntity(229U);
    msg.type = 74U;

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
    msg.setTimeStamp(0.410835067089);
    msg.setSource(18983U);
    msg.setSourceEntity(57U);
    msg.setDestination(54651U);
    msg.setDestinationEntity(132U);
    msg.type = 86U;

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
    msg.setTimeStamp(0.272155517503);
    msg.setSource(46762U);
    msg.setSourceEntity(243U);
    msg.setDestination(9840U);
    msg.setDestinationEntity(199U);
    msg.type = 120U;

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
    msg.setTimeStamp(0.0474010866693);
    msg.setSource(25283U);
    msg.setSourceEntity(177U);
    msg.setDestination(26811U);
    msg.setDestinationEntity(200U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.292325935948);
    msg.setSource(31420U);
    msg.setSourceEntity(35U);
    msg.setDestination(25994U);
    msg.setDestinationEntity(181U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.947361673735);
    msg.setSource(60496U);
    msg.setSourceEntity(159U);
    msg.setDestination(60753U);
    msg.setDestinationEntity(112U);
    msg.op = 184U;

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
    msg.setTimeStamp(0.758967545094);
    msg.setSource(31038U);
    msg.setSourceEntity(110U);
    msg.setDestination(28193U);
    msg.setDestinationEntity(69U);
    msg.total_steps = 155U;
    msg.step_number = 60U;
    msg.step.assign("PNVRSRRHSQVSNAHMJACIEFKEOTUYFAPWOHUKXXPUIWYPHFLSXSZYKCTUXCBWMXNNGFLVROT");
    msg.flags = 37U;

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
    msg.setTimeStamp(0.73871384594);
    msg.setSource(22781U);
    msg.setSourceEntity(76U);
    msg.setDestination(61872U);
    msg.setDestinationEntity(114U);
    msg.total_steps = 11U;
    msg.step_number = 217U;
    msg.step.assign("VJDKBDXFAXEJAOIMMEQRGOHFAXJJKPBEBEDCLYTSSBGTIGWJAWDFWUMBCVXLPAQRMXTYPRCZVSLLNQXHFLGOMFGKEIGQVXZZPIOSPYYQNURYNSDYKBIMSEMCYXNUFFRBOSQCLWWHLBZHISZJPJLHYMSUH");
    msg.flags = 33U;

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
    msg.setTimeStamp(0.268554334943);
    msg.setSource(39893U);
    msg.setSourceEntity(153U);
    msg.setDestination(2623U);
    msg.setDestinationEntity(220U);
    msg.total_steps = 188U;
    msg.step_number = 78U;
    msg.step.assign("SPNUEZVUQMPGMWULUKGZHEWZSGXWKDRFQUAVTEEDMHKOLSFCAFAJVNOHQQRVPJSLWTESWXIKWMKHOWWXNTTRGIYZZXFMTJBPPGFDCAJCYOFNJTCJFRKYYZZEFFKNDXZLDIDYBYUGSGDNHLIJXDKRHQEIZRPOVYBBRYDLRNVGEVSLMMGQBCMJNVZOACTNHILAHXAOJOGAYIWQQBLCSTQRVUIWXDBPQIUPBKFYMICBAUCSOPSXUPVMLEKCXAO");
    msg.flags = 71U;

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
    msg.setTimeStamp(0.488297227494);
    msg.setSource(38782U);
    msg.setSourceEntity(146U);
    msg.setDestination(29409U);
    msg.setDestinationEntity(140U);
    msg.state = 145U;
    msg.error.assign("LXWUUCHYZWNBTSIFJUTGWGTMNFKFOPLUZVFZMPNZERLBIFSDUYHAUHZYAETDTLTRCPSOJDNUZGWXQNVKHCKKJNIPSEIPYFBRAGRBNAYNGPIDKHROHSFVNXB");

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
    msg.setTimeStamp(0.503149644626);
    msg.setSource(6014U);
    msg.setSourceEntity(179U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(247U);
    msg.state = 237U;
    msg.error.assign("RDQNHGSOGYDCKUAVWULLNPUJGFLVTEQDWWWQJIMYHAPGZNVORDIYTWCBALLTDOPYNGSJMTWUVQIHXSXJGUAJYFPYQZBLTMBWOBZPVOEBIMEMYJNHJEXPCTZYMXMPNFBFDBUORCCKJCAHZRSZXCUOTGQYAUYLIWKDSCVGZMLKOKFQRNRIFVDKTUOGXVIAABVGUESJNEHQXETXTFNQBADSIHPAPZHRCMFFKRVWSEBXKEWXQJD");

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
    msg.setTimeStamp(0.604744100805);
    msg.setSource(8194U);
    msg.setSourceEntity(218U);
    msg.setDestination(46885U);
    msg.setDestinationEntity(31U);
    msg.state = 246U;
    msg.error.assign("ZGVRZPZXQCBAANDBIUJGNJXYFOUYFLQTMNKSHCMWHKSGGPKGVVXKXTQJCXOVRQFIBEWAQPMJALDUMHVDYREHCGMPPGXAZKLZTECKO");

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
    msg.setTimeStamp(0.0825814973);
    msg.setSource(43765U);
    msg.setSourceEntity(188U);
    msg.setDestination(18700U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.0170395083106);
    msg.setSource(16012U);
    msg.setSourceEntity(82U);
    msg.setDestination(50011U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.924403857186);
    msg.setSource(51081U);
    msg.setSourceEntity(22U);
    msg.setDestination(26057U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.773802124153);
    msg.setSource(46214U);
    msg.setSourceEntity(228U);
    msg.setDestination(27297U);
    msg.setDestinationEntity(163U);
    msg.op = 165U;
    msg.speed_min = 0.949712676792;
    msg.speed_max = 0.552883713598;
    msg.long_accel = 0.280311557557;
    msg.alt_max_msl = 0.576654240195;
    msg.dive_fraction_max = 0.427773064015;
    msg.climb_fraction_max = 0.445492693173;
    msg.bank_max = 0.703896904696;
    msg.p_max = 0.554680572666;
    msg.pitch_min = 0.268250724217;
    msg.pitch_max = 0.208243355363;
    msg.q_max = 0.467137926304;
    msg.g_min = 0.538482859707;
    msg.g_max = 0.65526167101;
    msg.g_lat_max = 0.663672371223;
    msg.rpm_min = 0.146777159824;
    msg.rpm_max = 0.369392121709;
    msg.rpm_rate_max = 0.118981158258;

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
    msg.setTimeStamp(0.247295950865);
    msg.setSource(8469U);
    msg.setSourceEntity(212U);
    msg.setDestination(31259U);
    msg.setDestinationEntity(236U);
    msg.op = 69U;
    msg.speed_min = 0.133032692612;
    msg.speed_max = 0.329248175078;
    msg.long_accel = 0.339539317585;
    msg.alt_max_msl = 0.939243227716;
    msg.dive_fraction_max = 0.147276552013;
    msg.climb_fraction_max = 0.328501143424;
    msg.bank_max = 0.0595972924087;
    msg.p_max = 0.51582092267;
    msg.pitch_min = 0.758554055759;
    msg.pitch_max = 0.307876442085;
    msg.q_max = 0.309054278908;
    msg.g_min = 0.0923446078683;
    msg.g_max = 0.995236268806;
    msg.g_lat_max = 0.0962849441588;
    msg.rpm_min = 0.0829386500677;
    msg.rpm_max = 0.711430563505;
    msg.rpm_rate_max = 0.920741460061;

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
    msg.setTimeStamp(0.763943364007);
    msg.setSource(43736U);
    msg.setSourceEntity(63U);
    msg.setDestination(26438U);
    msg.setDestinationEntity(37U);
    msg.op = 11U;
    msg.speed_min = 0.9663557398;
    msg.speed_max = 0.269862983471;
    msg.long_accel = 0.257391498654;
    msg.alt_max_msl = 0.497873022306;
    msg.dive_fraction_max = 0.182845950997;
    msg.climb_fraction_max = 0.262339774024;
    msg.bank_max = 0.116159818458;
    msg.p_max = 0.460289323618;
    msg.pitch_min = 0.176503722808;
    msg.pitch_max = 0.268516329283;
    msg.q_max = 0.572517906501;
    msg.g_min = 0.528671410871;
    msg.g_max = 0.243328442386;
    msg.g_lat_max = 0.795854540227;
    msg.rpm_min = 0.0798657899512;
    msg.rpm_max = 0.393761222937;
    msg.rpm_rate_max = 0.570554489255;

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
    msg.setTimeStamp(0.845245453255);
    msg.setSource(27094U);
    msg.setSourceEntity(60U);
    msg.setDestination(54451U);
    msg.setDestinationEntity(133U);
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.920378601524;
    tmp_msg_0.y = 0.606323110907;
    tmp_msg_0.z = 0.839417209003;
    tmp_msg_0.vx = 0.821524169587;
    tmp_msg_0.vy = 0.79034387628;
    tmp_msg_0.vz = 0.743293406958;
    tmp_msg_0.ax = 0.0981499235938;
    tmp_msg_0.ay = 0.677682753944;
    tmp_msg_0.az = 0.107930061132;
    tmp_msg_0.flags = 12151U;
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
    msg.setTimeStamp(0.802127175419);
    msg.setSource(52409U);
    msg.setSourceEntity(74U);
    msg.setDestination(16822U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.824104232022);
    msg.setSource(38449U);
    msg.setSourceEntity(106U);
    msg.setDestination(36866U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.0969740302321);
    msg.setSource(64515U);
    msg.setSourceEntity(30U);
    msg.setDestination(2031U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.822599423277;
    msg.lon = 0.834089450437;
    msg.height = 0.250616816141;
    msg.x = 0.384694074219;
    msg.y = 0.805163863699;
    msg.z = 0.148497624621;
    msg.phi = 0.619447001672;
    msg.theta = 0.468790806162;
    msg.psi = 0.917166789548;
    msg.u = 0.526261380299;
    msg.v = 0.478785884897;
    msg.w = 0.146137881725;
    msg.p = 0.549427832938;
    msg.q = 0.421093013728;
    msg.r = 0.379802221413;
    msg.svx = 0.160165487342;
    msg.svy = 0.653486499428;
    msg.svz = 0.429053462056;

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
    msg.setTimeStamp(0.0875348523767);
    msg.setSource(6609U);
    msg.setSourceEntity(168U);
    msg.setDestination(22126U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.648460967261;
    msg.lon = 0.609007926584;
    msg.height = 0.492845771229;
    msg.x = 0.489748592172;
    msg.y = 0.674439511854;
    msg.z = 0.126688654373;
    msg.phi = 0.554585240516;
    msg.theta = 0.870661259951;
    msg.psi = 0.734815235048;
    msg.u = 0.101847443933;
    msg.v = 0.506837307495;
    msg.w = 0.624901406803;
    msg.p = 0.198355714785;
    msg.q = 0.293702258224;
    msg.r = 0.108551038598;
    msg.svx = 0.013829878951;
    msg.svy = 0.507428547315;
    msg.svz = 0.0774308956082;

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
    msg.setTimeStamp(0.741985622609);
    msg.setSource(22330U);
    msg.setSourceEntity(143U);
    msg.setDestination(60707U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.865965725778;
    msg.lon = 0.338212838691;
    msg.height = 0.0601039393962;
    msg.x = 0.267322892306;
    msg.y = 0.111671467543;
    msg.z = 0.98258388627;
    msg.phi = 0.644154186894;
    msg.theta = 0.262772977283;
    msg.psi = 0.33768791936;
    msg.u = 0.89424875334;
    msg.v = 0.429249480857;
    msg.w = 0.429331582271;
    msg.p = 0.256850744244;
    msg.q = 0.617840436373;
    msg.r = 0.0154208252533;
    msg.svx = 0.600568170966;
    msg.svy = 0.274769704366;
    msg.svz = 0.074296266223;

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
    msg.setTimeStamp(0.42621183835);
    msg.setSource(15226U);
    msg.setSourceEntity(104U);
    msg.setDestination(910U);
    msg.setDestinationEntity(240U);
    msg.op = 228U;
    msg.entities.assign("KCZWKQHROIEPAYFFLZDLNEPQJBTKEHPTQEMVUOYYSISWEVMGVRCZYPJUYWHVQXCSTRBFFODUNSMXJ");

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
    msg.setTimeStamp(0.803437901918);
    msg.setSource(44611U);
    msg.setSourceEntity(1U);
    msg.setDestination(62640U);
    msg.setDestinationEntity(3U);
    msg.op = 245U;
    msg.entities.assign("BWFFEYNKQGRJGBGBKZHKXYSRSVTHGSWJYPOXEQYMVBOODVC");

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
    msg.setTimeStamp(0.196837391498);
    msg.setSource(40041U);
    msg.setSourceEntity(62U);
    msg.setDestination(59916U);
    msg.setDestinationEntity(20U);
    msg.op = 58U;
    msg.entities.assign("UESQSEHJJLPCYDSWMXWHGXFRSEANGEGIYNYYIBZSACYJDBKZNPZHSFVGZALZRQQMRKHAZZIXFJHCDZPMKRAIIMSICPRZOPQLRUXVQTNNETVAFXGQKDINWHEKNLUHELJNPTRLJOQGBHVMJJRKFOEHYIBKCOWUTTULIRLMKYPUQVAVSVXGNVPDVU");

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
    msg.setTimeStamp(0.639125173837);
    msg.setSource(7574U);
    msg.setSourceEntity(138U);
    msg.setDestination(65140U);
    msg.setDestinationEntity(88U);
    msg.type = 236U;
    msg.speed = 39730U;
    const char tmp_msg_0[] = {86, 113, -4, 52, 29, -85, -22, -32, -120, 56, -78, -56, -19, 3, -11, 71, -32, 126, -23, -47, 83, 77, 77, -27, -2, 48, -22, -64, -92, -48, -35, -63, 118, 113, 118, -6, 13, 72, 80, -48, -53, 100, -58, 102, 48, 53, 39, -104, -92, 72, 65, -49, 10, -77, -84, 12, -87, 11, 73, 80, 114, -53, 17, -52, 30, -118, 87, -74, 33, -52, 77, -25, 81, -113, -115, -64, -106, 123, -3, 49, 44, 120, 18, -70, 77, 123, -95, 116, -20, -81, 90, 122, 109, 106, -124, 37, 89, 41, -76, 63, -66, 5, 99, -116, -4, 19, 55, 54, -67, 95, 26, 35, -90, -34, -69, -8, 4, -36, -39, -75, -1, -126, -43, -20, 108, -28, 109, 52, 44, 112, 45, 23, 120, 44, -74, -32, 3, -99, 36, 91, -17, -65, -1, -99, -49, -103, 17, 42, -51, -122, -13, 73, -29, 8, -127, -19, -78, -25, -104, -95, -108, 1, 122, -95, -81, -94, -124, -38, 17, 97, 13, -6, 11, -42, -109, 31, 86, 84, 117, -79, -97, -2, -101, -90, 18, -38, 7, -58, 86, 60, -9, 117, 77, 95, 10, 77, 38, -48, 118, 76, 17, -104, -124, -14, -71, -126, -95, 73, -85, -74, -42, -40, 44, 118, 36, 76, -61, 22, 43, -59, 14, 102, 96, 106, -57, -13, -57, 73, 89, -54, 37, -90, 20, -73, 83, 47, 17, -13, -38, 57, -83, 84, -126, -25, -17, -66};
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
    msg.setTimeStamp(0.50877500735);
    msg.setSource(54866U);
    msg.setSourceEntity(147U);
    msg.setDestination(52117U);
    msg.setDestinationEntity(35U);
    msg.type = 164U;
    msg.speed = 46600U;
    const char tmp_msg_0[] = {-36, 20, -34, 85, -45, 28, -11, 121, 79, 30, 69, -16, -77, 23, 46, -78, 122, 45, -36, -39, 44, -24, 78, 126, 87, -93, 16, 2, -16, -29, 93, 40, -6, -106, 36, -88, 110, -121, 116, -83, -7, -37, 51, -81, 74, 75, 100, 22, -122, -46, 76, -64, 28, -121, 96, -84, -126, -23, 92, -105, -31, -104, -111, 94, 29, 7, 76, -72, -31, 41, 112, 60, -80, -75, 0, 42, 45, 100, 36, 123, -40, -88, -90, 2, -104, -36, -119, -50, 104, -10, -110, -56, 28, 67, -55, -1, -71, -126, 27, 118, -46, -34, 31, -28, 33, 16, 43, 28, 49};
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
    msg.setTimeStamp(0.736643606782);
    msg.setSource(63263U);
    msg.setSourceEntity(109U);
    msg.setDestination(24812U);
    msg.setDestinationEntity(193U);
    msg.type = 125U;
    msg.speed = 23351U;
    const char tmp_msg_0[] = {-28, -123, -47, 62, -103, 65, 19, 67, -119, -63, -1, 85, -113, -27, 46, -58, -122, -105, 51, -53, 119, -16, 95, 3, -89, -46, -52, -56, -23, -84, 21, -104, -15, 20, -128, 105, -79, -54, 123, 77, 85, -120, 104, -86, -108, 98, -14, -60, -2, -88, 90, -88, 99, 53, 90, 96, 11, -103, -118, 99, 85, 52, -92, 5, 88, -86, 23, -84, 123, 65, 118, -76, -128, -48, -82, 67, -91, -121, -94, -60, -42, -76, 54, -37, -87, 39, -70, -64, 17, -85, 39, 73, -9, 70, -61, 88, 73, -82, -94, 104, -88, -26, -3, 97, -105, 13, -111, 69, -71, 16, 37, 64, 107, 20, 102, 11, 1, -21, 30, -117, -71, 126, -126, 15, -33, -72, 62, 73, -64, -2, -34, 78, 29, 58, -116, 116, -104, 103, 44, 50, -71, -34, -118, 11, -62, -11, 103, -86, 16, -22, 98, 75, -24, -57, -23, -64, 110, 90, -59, 61, 15, 51, 54, -86, -22, -56, -26, 34, 111, 10, -82, 9, 59, 2, -109, -52, 66};
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
    msg.setTimeStamp(0.466169558796);
    msg.setSource(54121U);
    msg.setSourceEntity(177U);
    msg.setDestination(26020U);
    msg.setDestinationEntity(32U);
    msg.op = 202U;
    msg.tas2acc_pgain = 0.155290174974;
    msg.bank2p_pgain = 0.546245658704;

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
    msg.setTimeStamp(0.974599075196);
    msg.setSource(48367U);
    msg.setSourceEntity(103U);
    msg.setDestination(56446U);
    msg.setDestinationEntity(91U);
    msg.op = 156U;
    msg.tas2acc_pgain = 0.477079769911;
    msg.bank2p_pgain = 0.610854581978;

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
    msg.setTimeStamp(0.370052679989);
    msg.setSource(36165U);
    msg.setSourceEntity(51U);
    msg.setDestination(47562U);
    msg.setDestinationEntity(208U);
    msg.op = 209U;
    msg.tas2acc_pgain = 0.761746740936;
    msg.bank2p_pgain = 0.851857149708;

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
    msg.setTimeStamp(0.37173928851);
    msg.setSource(7289U);
    msg.setSourceEntity(116U);
    msg.setDestination(60327U);
    msg.setDestinationEntity(182U);
    msg.available = 1184231220U;
    msg.value = 17U;

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
    msg.setTimeStamp(0.231975150398);
    msg.setSource(43039U);
    msg.setSourceEntity(50U);
    msg.setDestination(54358U);
    msg.setDestinationEntity(4U);
    msg.available = 1720820648U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.51184473441);
    msg.setSource(4234U);
    msg.setSourceEntity(225U);
    msg.setDestination(17438U);
    msg.setDestinationEntity(214U);
    msg.available = 2573848826U;
    msg.value = 47U;

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
    msg.setTimeStamp(0.892794987181);
    msg.setSource(22140U);
    msg.setSourceEntity(130U);
    msg.setDestination(22026U);
    msg.setDestinationEntity(217U);
    msg.op = 251U;
    msg.snapshot.assign("IAWCWNVPTOQLYGJGPVRXPOSJVXSQHZCNFMBTSAUNBNDDKAXRDXFBOOAPCJQSNGCKBZXCGTLITMBMMUBQYDWFEYZUCGUJSEVYKLEHSTSWPDHIHBLZFFZCPKEOLNHIAJWAKFIFVQIKKELHIYOEWYNVFADQAUZLPDTROTGXGRRUIEURQHAJUGRAFWKCVTHKENNTMDQXLUO");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 251U;
    tmp_msg_0.mask = 851781798U;
    tmp_msg_0.scope_ref = 2679147622U;
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
    msg.setTimeStamp(0.455202702426);
    msg.setSource(17701U);
    msg.setSourceEntity(88U);
    msg.setDestination(49158U);
    msg.setDestinationEntity(165U);
    msg.op = 89U;
    msg.snapshot.assign("QHCEQDBKJWVVAYTJSQKBJHUIVPXLJCRELALZTFPRQGFAAAYMUDYSGAFJOGAIGXPKHMEUOINIOUZDNPRWTKNBQOWSXLJNLNNNMHDZRMZNIODNBVVTGHYXWQHNMHFBDDHZZUUXKRLOCOGRYEMCBTVZUERLCGYIWYMPSPOCEVIDGTBHFSPSSTEACJWOXIUMTBRCDDXCOETIQKZMFUXLUXEPFZFJQVMKVRTLWWHGYFAIZKLQKV");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 62308U;
    tmp_msg_0.lat = 0.764325537171;
    tmp_msg_0.lon = 0.598152621632;
    tmp_msg_0.speed = 0.311446823431;
    tmp_msg_0.speed_units = 151U;
    tmp_msg_0.custom.assign("INQLWCXFVCXZLDEWOBDZFNMZBLYRBAKPLHMUDUWAOEHENARQRXVWETK");
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
    msg.setTimeStamp(0.525426814663);
    msg.setSource(9528U);
    msg.setSourceEntity(3U);
    msg.setDestination(25671U);
    msg.setDestinationEntity(156U);
    msg.op = 20U;
    msg.snapshot.assign("LZGDILVKLSOYCUDBVJZNTQNBVASKOMCRRDVGILGXNDOOAUGRDIXHTWZABOYKUQIRYFPYSCUEJAAMNCSEZXTGSOXZQPPKHMMUJEBFJUPWETOHMVADQRGCTQMSIQLQQJNXTKWBMRYLANTIEQJOVGLONCURADRNBUVJBSNLGFLFJXKHPHDYIBBPTXYPCHYVKIKWVPSCF");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 84U;
    tmp_msg_0.value = 0.960930443371;
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
    msg.setTimeStamp(0.0544733790843);
    msg.setSource(15917U);
    msg.setSourceEntity(74U);
    msg.setDestination(56439U);
    msg.setDestinationEntity(227U);
    msg.op = 254U;
    msg.name.assign("MJQPMZKQUXLRKUOMLXZSKGIDZALWMRPIHUZYXXUTDVDDRNBKISHDNBEOXVZRNECURLBWOHUQVDWUMJLVAOLVEWFNVSQGTJNCIATNGCFTPKOQYEJWVIHTNVHFXKAKUBJDTSAVJCKPIQOJNIRIFKZYAYPPIGTTHWXFZHCTPJFNSSSQCSRQMEJEEOFCRWGAEULDCOFGXJBPWLAYYMDWHAFYRGDCBPOP");

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
    msg.setTimeStamp(0.364619226209);
    msg.setSource(30965U);
    msg.setSourceEntity(57U);
    msg.setDestination(9382U);
    msg.setDestinationEntity(226U);
    msg.op = 203U;
    msg.name.assign("EBDJAUTQHEXAIJBQJSMNNCUKCXROKEURKSENVRHFPZWPRVRDXEKESYEAGXVIEXDCFRSMDDKCXTZLVLLDWBYPWWZUTNTMNZKLGPRIHHLRVIQAJTFBZGEBLNHNCGADUQGOQWBUIUZVWVQDFARWAAPJLGWNUPX");

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
    msg.setTimeStamp(0.744826833331);
    msg.setSource(39795U);
    msg.setSourceEntity(178U);
    msg.setDestination(44911U);
    msg.setDestinationEntity(225U);
    msg.op = 231U;
    msg.name.assign("SUDCXLXBQBLPTVQWWUSHFPRIBHEAZVZMYBEEOVFZFTCHSNTTMFWCCWNZICDSPERWOLKEQJBKIOIDKNQKARUDGVNJJCSGUDZWPKTOVMUGUWGLBUARHPCUXXAEXPAXGNLWUTYQAXYJJQZVZNJQYWLFD");

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
    msg.setTimeStamp(0.159326157022);
    msg.setSource(54767U);
    msg.setSourceEntity(114U);
    msg.setDestination(49974U);
    msg.setDestinationEntity(96U);
    msg.type = 51U;
    msg.htime = 0.230946282405;
    msg.context.assign("BAXYXQQOMYWBVHPQPDDLIHSZKFXHTUMSXGKUUSJJZYZJVIKVEXJABTYPCFPOWCDODFXBUCQSCKBHPNHQVABDPIBNXVDUFGEAGWZTIRGUNCRNKJSEOQDDMZLITZRHELWNVWRERJWRIPSNTOQMGCSMKTTRY");
    msg.text.assign("ZTTERIRYEZXJFME");

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
    msg.setTimeStamp(0.72302353135);
    msg.setSource(28221U);
    msg.setSourceEntity(85U);
    msg.setDestination(10783U);
    msg.setDestinationEntity(48U);
    msg.type = 96U;
    msg.htime = 0.226257610464;
    msg.context.assign("NKCOVKTCBOQDRZYZODKLCAYTLSLX");
    msg.text.assign("COEZAIEIHLNJRNXBUYSKYMVPETHDMILNLCPLOVDWOVXVJRUXPXQHGZWYORRCUXLBQZNWOORR");

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
    msg.setTimeStamp(0.124224712883);
    msg.setSource(42314U);
    msg.setSourceEntity(225U);
    msg.setDestination(22029U);
    msg.setDestinationEntity(106U);
    msg.type = 2U;
    msg.htime = 0.21846061959;
    msg.context.assign("XXXGGATBCVWOTMKIGNSQBPHMDFHQKEYRSUCLQKPLUMZRLOJQPPEJTDUVGWXLKDIS");
    msg.text.assign("CSXZHPOHGXQGAIKPLNZRYGTLLGYERWPIOXDVAVPEAMWNLEWAPBOGTBCQUCSDTUHJCHSUNMJXLJNUQDWMORFDICMYMHIAZVSVCQYBBYOKKDKWDCKVMTJQRPMBBXOFWJYIMAVRZFHINNUFXIVNQMGDUELBNWBVLFSXQFLOSHCQTTS");

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
    msg.setTimeStamp(0.498249998285);
    msg.setSource(30509U);
    msg.setSourceEntity(207U);
    msg.setDestination(6993U);
    msg.setDestinationEntity(16U);
    msg.command = 35U;
    msg.htime = 0.0438695500706;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 133U;
    tmp_msg_0.htime = 0.725757381188;
    tmp_msg_0.context.assign("ARGTQIZUSUVFLGCEEEDCPJNRLMBWTIZZOFQFSOZBUHTICSZXNUESGKTHFVILLNQVRZYCSANXPCMIZVIPYVXKCBJXKWXUMQJDTZEUWMFPKAXTPQHKHDGWPCLGEOQSRTDSODZGSRFQHVHHVLQXMEHHYBAHTROVNATWQFYONOKUPWJYFJJUDGXKMBMGKLFOWRYANICW");
    tmp_msg_0.text.assign("XIGDBOTPAKVVAQPQUFENLWRFYAEQVZVAYXIPMWITQKZSNYFIPUHXBEAVLULIWQCSKRJGYYSASLRZMJTWHGBHUTJUOBTPJEHHPMHOMCLCHXRBIDUVBVQRHUWZN");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.182969746813);
    msg.setSource(43168U);
    msg.setSourceEntity(142U);
    msg.setDestination(2651U);
    msg.setDestinationEntity(201U);
    msg.command = 140U;
    msg.htime = 0.88578993918;

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
    msg.setTimeStamp(0.605152128801);
    msg.setSource(2422U);
    msg.setSourceEntity(153U);
    msg.setDestination(35165U);
    msg.setDestinationEntity(23U);
    msg.command = 183U;
    msg.htime = 0.229666415932;

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
    msg.setTimeStamp(0.65624330304);
    msg.setSource(52396U);
    msg.setSourceEntity(140U);
    msg.setDestination(42461U);
    msg.setDestinationEntity(124U);
    msg.op = 95U;
    msg.file.assign("UQFNRIOJBPMJCTZQWQWFSENOXJUYMAEVQLQLUTKYDWQEDLGCJZDXOFDVJUFJCSNVEDIANOSKIGALQHHNWZGGYZFLHNIKIGPURRSTZTMXSPBEOAYKMJMRDTKAOTCLBHAEOGWF");

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
    msg.setTimeStamp(0.808775723513);
    msg.setSource(44625U);
    msg.setSourceEntity(239U);
    msg.setDestination(32591U);
    msg.setDestinationEntity(160U);
    msg.op = 124U;
    msg.file.assign("PNGDJOUITHIWORYPEWWBVNKHUUHAECQARMPTNDKMCVEAIWNHJ");

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
    msg.setTimeStamp(0.858783376753);
    msg.setSource(64829U);
    msg.setSourceEntity(12U);
    msg.setDestination(232U);
    msg.setDestinationEntity(174U);
    msg.op = 126U;
    msg.file.assign("CDOVPHIOEFNVTSFXIQFHLPDOGMNASBGEMEFTFMNOFQGJDLLYZQQJTKBDVBVZYJPHSTJNGBWCLKNKIAEIIYZLHOETSJQZXZRXYBAEYKXECOXXAMUYRCJAYRRAPJZSBCDWHLXKRXWPFPGXBYFKQGITHGSYZRZIURBEMMMCNRKLGLJSCMSOTQNH");

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
    msg.setTimeStamp(0.945134455918);
    msg.setSource(9809U);
    msg.setSourceEntity(158U);
    msg.setDestination(65338U);
    msg.setDestinationEntity(19U);
    msg.op = 68U;
    msg.clock = 0.797391868173;
    msg.tz = -79;

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
    msg.setTimeStamp(0.335781792209);
    msg.setSource(7938U);
    msg.setSourceEntity(210U);
    msg.setDestination(49601U);
    msg.setDestinationEntity(99U);
    msg.op = 100U;
    msg.clock = 0.575885658899;
    msg.tz = -107;

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
    msg.setTimeStamp(0.924786004761);
    msg.setSource(54179U);
    msg.setSourceEntity(104U);
    msg.setDestination(64627U);
    msg.setDestinationEntity(209U);
    msg.op = 113U;
    msg.clock = 0.842317838671;
    msg.tz = 104;

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
    msg.setTimeStamp(0.0194533575846);
    msg.setSource(16346U);
    msg.setSourceEntity(210U);
    msg.setDestination(64092U);
    msg.setDestinationEntity(227U);
    msg.conductivity = 0.690343459565;
    msg.temperature = 0.0840727129767;
    msg.depth = 0.461951658914;

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
    msg.setTimeStamp(0.724257117375);
    msg.setSource(41868U);
    msg.setSourceEntity(194U);
    msg.setDestination(40518U);
    msg.setDestinationEntity(237U);
    msg.conductivity = 0.152719501191;
    msg.temperature = 0.0276060323026;
    msg.depth = 0.410780475719;

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
    msg.setTimeStamp(0.670860592172);
    msg.setSource(63771U);
    msg.setSourceEntity(225U);
    msg.setDestination(50123U);
    msg.setDestinationEntity(146U);
    msg.conductivity = 0.551361202539;
    msg.temperature = 0.25819052673;
    msg.depth = 0.930317034229;

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
    msg.setTimeStamp(0.638319398955);
    msg.setSource(35545U);
    msg.setSourceEntity(109U);
    msg.setDestination(11733U);
    msg.setDestinationEntity(64U);
    msg.altitude = 0.296199152573;
    msg.roll = 27825U;
    msg.pitch = 2270U;
    msg.yaw = 32112U;
    msg.speed = -9907;

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
    msg.setTimeStamp(0.620526265008);
    msg.setSource(54116U);
    msg.setSourceEntity(212U);
    msg.setDestination(46191U);
    msg.setDestinationEntity(200U);
    msg.altitude = 0.567880850691;
    msg.roll = 18776U;
    msg.pitch = 27130U;
    msg.yaw = 34379U;
    msg.speed = 25733;

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
    msg.setTimeStamp(0.723049185653);
    msg.setSource(30508U);
    msg.setSourceEntity(219U);
    msg.setDestination(46901U);
    msg.setDestinationEntity(156U);
    msg.altitude = 0.00165810382956;
    msg.roll = 6812U;
    msg.pitch = 3342U;
    msg.yaw = 43523U;
    msg.speed = -21355;

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
    msg.setTimeStamp(0.233903477718);
    msg.setSource(8017U);
    msg.setSourceEntity(139U);
    msg.setDestination(1497U);
    msg.setDestinationEntity(252U);
    msg.altitude = 0.862920158439;
    msg.width = 0.87695228324;
    msg.length = 0.829214439009;
    msg.bearing = 0.85807350415;
    msg.pxl = 6627;
    msg.encoding = 73U;
    const char tmp_msg_0[] = {3, -96, -23, 107, -112, 86, -5, -84, 47, -69, 123, -108, 114, -37, -89, -92, -69, -49, -38, 46, 105, -123, 75, 84, 103, 56, -114, 12, -104, 21, -30, -22, -51, 101, 37, 5, 83, -109, -104, -23, 3, -101, -118, -113, -43, -99, -128, -1, 14, -78, -31, 106, -6, 113, -62, -1, 46, -71, 11, 58, -95, -123, -90, 121, -100, 30, 96, -49, 1, -89, -17, -123, 45, 117, -67, 100, -3, 92, -10, -66, -57, 54, 50, 121, 107, -85, -61, -66, -100, -65, -8, 96, -22, 11, -27, 67, -111, 57, -30, -23, -14, 13, -99, -65, -105, 89, 23, 115, 44, 100, 96, 57, 18, -46, -24, -35, -14, -119, -43, -21, 50, 14, 55, -70, 120, 44, -120, -104, 13, -24, 35, 66, -122, -29, -55, -13, 18, 69, 9, -128, -3, -114, -105, 120, 83, 119, 68, -126, 71, -111, -28, 19, 113, -7, 113, 21, -18, -1, 124, 119, 48, -123, -91, 19, -119, 13, -75, 8, -107, -10, -24, -52, -94, -84, -102, 61, 82, 108, 37, -107, 9, -42, -81, -8, -127, 108, 9, -92, -7, -69, -22, -41, 7, 79, 118, 83, 111, -128, -117, 21, 28, 121, -36, 126, 113, 63, -123, -29, 64, -13, -84, 118, 9, -44, -86, 119, -69, 15, -8, -53, -43, 124, 75, -61, -61, 82, -33, -23, -72, -31, 62, -23, -29, 10, -12, 45, 32, 4, 76, -112};
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
    msg.setTimeStamp(0.887425495631);
    msg.setSource(1836U);
    msg.setSourceEntity(2U);
    msg.setDestination(5789U);
    msg.setDestinationEntity(121U);
    msg.altitude = 0.153867900095;
    msg.width = 0.364227116317;
    msg.length = 0.507301553024;
    msg.bearing = 0.647586230928;
    msg.pxl = 6514;
    msg.encoding = 8U;
    const char tmp_msg_0[] = {-92, 26, -24, -103, 52, 114, 85, 7, 102, -7, 67, 47, -41, 28, 23, 6, -13, -110, 108, 123, -95, 55, 18, -2, 70, -74, -91, 94, 95, -25, 83, -91, -83, 35, 14, 71, 11, -114, 43, 61, -52, 18, -86, -16, 70, -68, -33, 97, 44, 91, -74, 53, -25, 122, -2, -91, 56, 84, 20, -128, 9, 76, -52, -47, -6, 58, 108, -33, -99, 34, 70, 81, 111, -81, 24, 101, 33, 77, 35, 40, 1, 14, -75, 42, 93, 38, -96, -15, 106, 37, 88, 123, -94, -109, 16, 17, 26, -73, -64, -10, -41, 14, 33, -46, -18, 28, 18, -75, -43, -35, 85, -90, 93, 116, 76, -78, 29, -22, 38, 85, -67, -17, -102, -110, -99, 4, -1, 122, -111, -49, -34, 25, 1, 106, 28, -44, 32, 100, -123, 85, -44, -61, -63, -17, 11, 125, 19, -48, 66, 88, -88, -83, 96, -77, -82, -41, 72, 88, -9, -102, 87, -52, 88, 0, 42, 113, 17, 114, 118, -39, -42, -59, 98, 77, -76, 52};
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
    msg.setTimeStamp(0.398293555638);
    msg.setSource(56829U);
    msg.setSourceEntity(246U);
    msg.setDestination(63978U);
    msg.setDestinationEntity(171U);
    msg.altitude = 0.429669153117;
    msg.width = 0.161240675313;
    msg.length = 0.104355542692;
    msg.bearing = 0.185497675331;
    msg.pxl = -23895;
    msg.encoding = 179U;
    const char tmp_msg_0[] = {37, -74, -95, 86, 95, 42, -41, -45, 73, -53, -106, -34, 107, -10, 27, -126, -120, 59, 13, 36, -58, -40, 52, -54, 81, 86, -97, 41, -50, 1, 22, -34, 59, -63, 36, 116, -84, 125, -29, -118, -96, 58, -44, -67, -74, 121, 111, -31, -79, -29, 112, -57, -89, 121, 124, -27, 119, -76, -83, 100, 107, 86, 59, 61, -15, 5, -27, 40, 6, -55, 89, -113, -113, -88, 109, 74, -78, -68, 94, 74, -96, -45, -76, -67, -124, 22, -25, 91, 65, 31, 106, -41, -33, 19, 122, 42, 86, 34, -35, -67, -86, 65, 113, 118, -1, -21, 30, 57, -97, -104, -110, 119, 65, 64, -10, -37, 82, -85, 78, -42, 39, 6, 32, -21, -61, -55, -43, -22, -23, -113, -65, 120, 20, -34, 70};
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
    msg.setTimeStamp(0.647164449508);
    msg.setSource(22340U);
    msg.setSourceEntity(107U);
    msg.setDestination(18108U);
    msg.setDestinationEntity(247U);
    msg.text.assign("ZTBJOEKGQQGFHCPRLSVNGLISBTQPBQCHQWYFODFBRMAPGRJJLQNZDPFUOEYFINECLCVBNNLWNRSEUUMVZLYVBSTSPVUBHRTRJWRVGPSKWOALHJXPTIPYN");
    msg.type = 64U;

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
    msg.setTimeStamp(0.438872801092);
    msg.setSource(35084U);
    msg.setSourceEntity(13U);
    msg.setDestination(38536U);
    msg.setDestinationEntity(25U);
    msg.text.assign("GYVVOFYGDPUFAVLNBDOJEDYQASYEFGFXIIQZNTMJNPHFIDOCQAKNNPBOJVSTXUULXSRSIYLOARIPSDTZRENKGDPLRDGHBANMRRFJKJMTSUHLUEOVJEKFXXJOXQLZQEZWWDHJNQRJWBGUYUPMLQWMIYWCIVDTHFSCPTZAHGPQMBYZFNWGSQ");
    msg.type = 149U;

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
    msg.setTimeStamp(0.455822765736);
    msg.setSource(7369U);
    msg.setSourceEntity(230U);
    msg.setDestination(40285U);
    msg.setDestinationEntity(94U);
    msg.text.assign("VRJSHYAHQWTJZUVSVXSOBOUHVFBMMWEQGPQLIMPGNEYHDXYCBDFKCYRXCFQDJXENQFZPKGJHYMNGJHJMASLZZAAGQLARPMTEDWGYNIKNPVUFPXJQZKHWXONCTIYWBCFGEKDNVKZTASLTXOONHIAIIWZTRGKLULAVARCUTPSQJCNFVFDSDPCRVOBRMODELFZGSWQLDMKYPLUBOEUIWYU");
    msg.type = 198U;

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
    msg.setTimeStamp(0.597473714907);
    msg.setSource(37736U);
    msg.setSourceEntity(172U);
    msg.setDestination(12542U);
    msg.setDestinationEntity(80U);
    msg.parameter = 87U;
    msg.numsamples = 223U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 5356U;
    tmp_msg_0.avg = 0.910525813071;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.25083609611;
    msg.lon = 0.0614660658322;

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
    msg.setTimeStamp(0.211062887419);
    msg.setSource(60475U);
    msg.setSourceEntity(32U);
    msg.setDestination(37035U);
    msg.setDestinationEntity(22U);
    msg.parameter = 44U;
    msg.numsamples = 92U;
    msg.lat = 0.217070555803;
    msg.lon = 0.854324896382;

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
    msg.setTimeStamp(0.107466936244);
    msg.setSource(19742U);
    msg.setSourceEntity(73U);
    msg.setDestination(14548U);
    msg.setDestinationEntity(237U);
    msg.parameter = 4U;
    msg.numsamples = 77U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 53446U;
    tmp_msg_0.avg = 0.409051029849;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.349966770218;
    msg.lon = 0.78633041129;

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
    msg.setTimeStamp(0.263701196208);
    msg.setSource(1978U);
    msg.setSourceEntity(93U);
    msg.setDestination(5422U);
    msg.setDestinationEntity(44U);
    msg.depth = 7919U;
    msg.avg = 0.732814638365;

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
    msg.setTimeStamp(0.424776156489);
    msg.setSource(53114U);
    msg.setSourceEntity(234U);
    msg.setDestination(43558U);
    msg.setDestinationEntity(218U);
    msg.depth = 46717U;
    msg.avg = 0.135493980395;

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
    msg.setTimeStamp(0.807728105089);
    msg.setSource(30354U);
    msg.setSourceEntity(11U);
    msg.setDestination(58667U);
    msg.setDestinationEntity(254U);
    msg.depth = 35860U;
    msg.avg = 0.250253403915;

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
    msg.setTimeStamp(0.851231188777);
    msg.setSource(62643U);
    msg.setSourceEntity(240U);
    msg.setDestination(38940U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.842695796328);
    msg.setSource(59828U);
    msg.setSourceEntity(39U);
    msg.setDestination(50214U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.540448302909);
    msg.setSource(57510U);
    msg.setSourceEntity(154U);
    msg.setDestination(45687U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.804632288201);
    msg.setSource(20687U);
    msg.setSourceEntity(231U);
    msg.setDestination(47178U);
    msg.setDestinationEntity(40U);
    msg.sys_name.assign("IPZTOUOFEZTHXTWUPCIOUNHJWXCRUNZZYCZSFZJPUAOHRVCEEZOJKFSOJNJBCZEPKAITMYIRTQTMVKEWNVFCPLRHJKQQMZTWLDBQQWCAB");
    msg.sys_type = 66U;
    msg.owner = 5407U;
    msg.lat = 0.731343553084;
    msg.lon = 0.930082280996;
    msg.height = 0.412002438902;
    msg.services.assign("CEDECKEMBPIJVZVNKAIHUMOAJFUJZGGQOONKAYTVHLXCEQRULDTUQZNYZNDOBBRYHDWWWXDQQLXXPIBLGTUGPSWRANBHUMFGFJQKRNOZQAXDSYYVBASLZXVPCYPAIGETWTYHRJOWCPTOZIGPZJ");

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
    msg.setTimeStamp(0.816993729585);
    msg.setSource(50550U);
    msg.setSourceEntity(64U);
    msg.setDestination(29137U);
    msg.setDestinationEntity(131U);
    msg.sys_name.assign("AWKLUKXOYRIOHXVWLHPPEDMTSDTZQQHLQLVPCIYZRFNTNLKGSTNTINOLTXBAK");
    msg.sys_type = 250U;
    msg.owner = 57519U;
    msg.lat = 0.77782627993;
    msg.lon = 0.306706504704;
    msg.height = 0.204976482711;
    msg.services.assign("XZNGDHVDSWMMFSQJJJGDXYULBONQRYUYQFNYCAPTDGVXAIXRTUH");

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
    msg.setTimeStamp(0.396833698465);
    msg.setSource(56251U);
    msg.setSourceEntity(131U);
    msg.setDestination(3772U);
    msg.setDestinationEntity(6U);
    msg.sys_name.assign("OHLTCWGTBMIVYRNEREVIWMSKBUPHELSNMTVOVDKOTJPGZRFJXYEQFXAMKBDDWFTBPJMTGUNJQIUBJRUAQSJBFGOXOYKRYGWLZQPQERDDEWEEQCHFNHLLYRICRVRNGQZSKXSSZ");
    msg.sys_type = 137U;
    msg.owner = 34704U;
    msg.lat = 0.143641446481;
    msg.lon = 0.38382938147;
    msg.height = 0.510560346224;
    msg.services.assign("TFPSGJSMRUDMNTNTDBPXEISYYXWXCAKPWEOUBLRMZVXYWQUVKWEIBJZKRVOIKJKXNLWOJGTMFZALIMXGRYDRIATGFADOSYBLPDHPZCBGCLBJWQPCQCSDRTRWVQVHGDPRETFAWIZTQHFHJCJVGAUFMRYCJVQ");

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
    msg.setTimeStamp(0.0146041835799);
    msg.setSource(32182U);
    msg.setSourceEntity(191U);
    msg.setDestination(56498U);
    msg.setDestinationEntity(244U);
    msg.service.assign("EORPKSOLGEQULFFYLRZWJYWVKLDJEPQZIFXNEVNNAHXNTZGOUMUIDVIKDJMDYUAQJCGAUAJOMTQVBBSXWAHIHGCJLLZGXXZBHDBKWTJBUPOHWFQEPMFOBDWYIZCXPQRYHSPRNFNOZKWLWMK");
    msg.service_type = 137U;

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
    msg.setTimeStamp(0.85980657677);
    msg.setSource(7059U);
    msg.setSourceEntity(174U);
    msg.setDestination(62986U);
    msg.setDestinationEntity(172U);
    msg.service.assign("UEESCJGPOJWRIAGEZAPUBPVBIWLUOCXSMNDLNYGBDJUXLZMDSZYJAEMFVQOYZYPRXPUNYQGHUNLYITXRLFGZRSSRHNHFQWITQJGXROLRTTWMCIFTXOCUBCQFJEHVLUSHIYXTHSBAFMYGKROVNPVVEICINJCQFIETCMDLEFZRVLPMBKXDKALWAXYUNMCDBOKKQIHMOXMWJQPWCPJPFFHAZDAZJKASDHGWONQH");
    msg.service_type = 172U;

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
    msg.setTimeStamp(0.0563057721239);
    msg.setSource(63746U);
    msg.setSourceEntity(47U);
    msg.setDestination(56290U);
    msg.setDestinationEntity(131U);
    msg.service.assign("VOCFPCHDNYOJBGJPDIXXWTVCRVQPJOBEKKIKUCNBYBAJ");
    msg.service_type = 3U;

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
    msg.setTimeStamp(0.311740353358);
    msg.setSource(52479U);
    msg.setSourceEntity(183U);
    msg.setDestination(53692U);
    msg.setDestinationEntity(128U);
    msg.value = 0.595133377727;

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
    msg.setTimeStamp(0.513989392202);
    msg.setSource(25818U);
    msg.setSourceEntity(101U);
    msg.setDestination(18208U);
    msg.setDestinationEntity(108U);
    msg.value = 0.508370009766;

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
    msg.setTimeStamp(0.243362151327);
    msg.setSource(54493U);
    msg.setSourceEntity(51U);
    msg.setDestination(63317U);
    msg.setDestinationEntity(186U);
    msg.value = 0.000583287662259;

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
    msg.setTimeStamp(0.0201051354715);
    msg.setSource(56440U);
    msg.setSourceEntity(213U);
    msg.setDestination(59610U);
    msg.setDestinationEntity(166U);
    msg.value = 0.930704548744;

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
    msg.setTimeStamp(0.164963062983);
    msg.setSource(64593U);
    msg.setSourceEntity(196U);
    msg.setDestination(39145U);
    msg.setDestinationEntity(26U);
    msg.value = 0.628147830161;

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
    msg.setTimeStamp(0.704459430596);
    msg.setSource(48472U);
    msg.setSourceEntity(190U);
    msg.setDestination(64690U);
    msg.setDestinationEntity(141U);
    msg.value = 0.240831756895;

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
    msg.setTimeStamp(0.895082636031);
    msg.setSource(65462U);
    msg.setSourceEntity(169U);
    msg.setDestination(29592U);
    msg.setDestinationEntity(147U);
    msg.value = 0.0908493003244;

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
    msg.setTimeStamp(0.895423207274);
    msg.setSource(26067U);
    msg.setSourceEntity(230U);
    msg.setDestination(25217U);
    msg.setDestinationEntity(123U);
    msg.value = 0.29877987022;

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
    msg.setTimeStamp(0.943902917216);
    msg.setSource(35718U);
    msg.setSourceEntity(151U);
    msg.setDestination(25218U);
    msg.setDestinationEntity(54U);
    msg.value = 0.11527749016;

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
    msg.setTimeStamp(0.235764578127);
    msg.setSource(50409U);
    msg.setSourceEntity(173U);
    msg.setDestination(60449U);
    msg.setDestinationEntity(248U);
    msg.number.assign("WCEUBAPEBQKVQQSR");
    msg.timeout = 8531U;
    msg.contents.assign("BRIPGNHFTKGADRWYYKJLEPSDLTNTPOSDABMZLRUKXFFVMHYEZNWYLIIIQHNIXOJRJVKLBHCVOGAEHCCFRWFXHZVJQGPJHQCKOGKBYKPXNQQVTOVPWKTPFNZBSHSTNXAQJJCBCUEKQANIGOAJSEHRSCCAXHRSMZOYGPSLDSTXOLCBUILZEVYBQVPDDBFWDPRWGMIGDWMWUZTLEUMMDYECNFWMZJAZUO");

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
    msg.setTimeStamp(0.0767726793362);
    msg.setSource(52566U);
    msg.setSourceEntity(241U);
    msg.setDestination(58207U);
    msg.setDestinationEntity(173U);
    msg.number.assign("SVQGPWJBBLDQMEXKNSBORMHOJWVWZWNXNMBHWKYFJNQDSVPSCPNXLRPDNFIFLENEKXATETLAUUKJOFWRBSEGQCARSOEMXDWLROBGXJYGJZWAPLYKQIAIMEFVJHELAFLGUWKZCLJURQSCNIOHPRETZZAGDJVVSOJYMHFUDCXZHFZIIYVHOYIPYNCIDPGZETHSUXVRDWQBAUYCHQKKRMBTYKFYCOZQBGLIUGGAMIZFOPKUMQHV");
    msg.timeout = 48781U;
    msg.contents.assign("FIHXJUMMRJWDMBHGCZRQIEGTTTPBMOQIBSGDOORHANYFJOEYLASAWVOQJEKQKTEXNVUQYLHHCAELYADDWRIVLPGKLPESHJTZWQSCUPXQKOKGIRZNHSCOVRWSMKMXZBZEPNOUYIDJVCWMFZAYASZPCTXNXRJOWTVDJXIETGTA");

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
    msg.setTimeStamp(0.0369043149017);
    msg.setSource(19223U);
    msg.setSourceEntity(103U);
    msg.setDestination(36244U);
    msg.setDestinationEntity(248U);
    msg.number.assign("KZHHRDVEWFVLETJUVHVETIYMLTWWCJMNMLMYNTIEPRPASOAEPWTJJTYUDUXQUGXKKAZSRIVRGTDPVWVILCKOSBGNQQMRQFE");
    msg.timeout = 10246U;
    msg.contents.assign("ZAKJUQXBFKSLTEXTYRYPRZVJOHKXKJCSHSIBONQLYMNXSRFGMNNTBTGWWUOPTLQTNRHZZFDSYCNJZMPWCXMAFYVLGMDIFVBNMWYLXDHVCXZEXWHMAUUWROSHKPOQDVVBUTGPBRBNJZUJUODBLFYERLCARBKUEVKQGZIHAELODKKCCBSSUIEUEQIHPCJZTFEDXKPVGICSFHOAIGRGDIVJJPNAFNPOESCTA");

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
    msg.setTimeStamp(0.0591682019997);
    msg.setSource(61718U);
    msg.setSourceEntity(221U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(79U);
    msg.seq = 3175904350U;
    msg.destination.assign("IFMYXJCUWAJYQWNSNHQLCFXKOXVKUHPINXLZOQCCAHYVXTWRTUEGSREFGEJLBCVYKIXKNBQPFJFLSTPMTEZKAJRUILXKUBEJNWZYNTDGADFVZBOLUQSHVYVRPJENCDJAHVHIGEZXOLMXNSBETORHPTPGHHWLOZMBDKMBRFQETDZUWFDOAMIVCNQQOTRKMDBYLYSUDSISA");
    msg.timeout = 54506U;
    const char tmp_msg_0[] = {88, -30, -46, 117, 88, -57, -72, -97, 21, -58, 5, 26, 66, 17, 55, 87, 117, 61, -20, 73, -75, -83, 102, -69, -5, 50, 53, 86, 62, 112, 14, -87, -87, 5, 67, -91, 70, 55, 41, -69, 48, -2, -13, -33, 47, 71, 11, -86, -60};
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
    msg.setTimeStamp(0.73224107487);
    msg.setSource(59776U);
    msg.setSourceEntity(213U);
    msg.setDestination(37196U);
    msg.setDestinationEntity(239U);
    msg.seq = 565220101U;
    msg.destination.assign("UWNIJMURZUTVAWYGXGJASSUKEFLKMOIGZKSAXFXDMPVIPZTHTUAZGJHWYVEHQHRFWLEHLWQSCEJMCWLEQDCFNBECXUGIAYGGYOETNUHDRTODWQPDSTVRFCXDQBIWVJBNYXKNLXDZCCDAPJLYDOR");
    msg.timeout = 53734U;
    const char tmp_msg_0[] = {-65, -128, 61, -109, -73, -8, 124, -105, -47, 78, 119, -87, -92, 25, 108, 27, -12, 93, 65, -55, 84, -68, 94, 53, 79, 107, 36, 122, -7, -89, 73, 54, -63, 51, -9, -40, 73, 89, -59, 29, 93, 56, 102, -122, 73, 59, -14, -24, 50, 116, -49, -90, 44, -96, -111, -12, -34, -83, -60, -22, 68, -41, -42, 91, -126, -71, 5, -48, 21, 123, 24, -23, 112, -44, 7, 65, -85, 36, 43, -78, -31, 55, 44, -70, 46, -83, 90, -57, 57, 27, 11, -25, 69, -58, 48, -67, -8, -20, -7, -118, -86, -90, -73};
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
    msg.setTimeStamp(0.46040004023);
    msg.setSource(17278U);
    msg.setSourceEntity(26U);
    msg.setDestination(31093U);
    msg.setDestinationEntity(52U);
    msg.seq = 1234258228U;
    msg.destination.assign("LLBDAMPYUDQPOMQKYXVTOXAJXIQEGGBYNQQACMPGJJAFBHDWPCUSLZFUHYLFNXYXAAEEYOPECVDESSYDAVBNLIFTRSSAYRWLNRINDALTTKZICWMDHWKBKUHNSNTXEMTIDLKTJLQFCAJYLFTE");
    msg.timeout = 4719U;
    const char tmp_msg_0[] = {122, -124, 108, -98, -6, 91, 75, -77, -12, -47, -27, 1, -14, 23, -65, -107, -1, 60, 92, 114, -67, 6, -35, 102, 15, -99, 113, 117, -122, 64, 68, -61, -10, -49, -106, -7, 15, -104, -19, -76, 3, 23, -66, 49};
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
    msg.setTimeStamp(0.439909052973);
    msg.setSource(13845U);
    msg.setSourceEntity(152U);
    msg.setDestination(57997U);
    msg.setDestinationEntity(169U);
    msg.source.assign("DQCXHOPXBPMHSVEGDWWSGGPCDBZLLRAFXMRCPVYNEAYIZXIYRNDSOUFZCCPIFVSSUPMHQJLWADMVKCTHJLKTGGWOLYAVUFOPEZBBKHQKFDJYRCXOAKRNYZRLNEBVGTQDMGQQITSUQXWTIIJFNVZUJIEGKBIWLFGKWSNQOMNNATHZRBPXKTZAHSZWCLVLMXQSTEJRDJZOMEHKXFRONTJUMBIDXCWBTOAPL");
    const char tmp_msg_0[] = {12, 6, -3, 27, 111, 117, 66, -124, 70, -68, -101, -25, -67, 70, 13, 84, -86, -22, -100, -22, -32, -59, 32, 2, -60, 110, 24, 21, -106, -30, 112, -55, 8, 11, -51, -14, 12, 72, -29, 18, -127, -94, -8, 49, -9, 11, -102, -63, -91, 92, -57, 101, 102, 5, -102, -1, 42, 82, 19, 79, -72, 102, 14, 92, 105, 25, -109, 65, 27, 57, 6, -54, 88, 0, -67, 116, -77, 62, 112, -76, -126, -15, -35, -111, -72, -89, 40, -2, 40, -100, 108, -100, -72, -100, 114, 104, 28, 27, -47, 62, -128, -25, -80, -19, 85, -61, -51, -40, -80, 47, 44, 15, -71, -21, -102, -72, -55, -114, -41, -47, 37, -66, -93, 93, -4, -36, -77, 34, 124, -99, 7, 37, -8, -9, 98, -11, -125, 30, 56, -44, 113, -50, -66, -32, -53, 79, -40, 82, 28, 76, 13, 93, 55, 53, -80, -48, 34, 70, 114, -60, -8, -13, -36, -34, -126, 93, -124, 2, 64, -98, 36, -50, -66, -71, -122, 79, 106, 114, -110, -34, 45, -84, 96, -96, 69, 18, -86, 19, -24, 65, -104, 26, 63, -108, -66, 110, -53, -76, 28, 44, 116, 121, 109, 100, 81, -92, 45, -25, -102, -51, -94, -79, -104, 72, 10, -24, 46, -94, 126, -78, -65, -120, 40, -97, 48, 75, -113, -108, 64, -88};
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
    msg.setTimeStamp(0.562761191478);
    msg.setSource(5203U);
    msg.setSourceEntity(86U);
    msg.setDestination(59806U);
    msg.setDestinationEntity(138U);
    msg.source.assign("KZCBYEALHUIUXYUUOZVPJGGYGPZBWFNUSDYIHFQJQSKSZOVYUYKUOWRL");
    const char tmp_msg_0[] = {82, -74, 31, 32, 40, -59, 73, -27, 51, 15, 64, 80, 126, -94, -33, -69, 91, -105, -64, -20, 31, -34, -83, 21, -48, 50, 125, 14, -4, -55, 22, -34, -128, -61, 114, -65, -86, 119, 121, 101, -53, -3, -101, 52, -43, -108, -82, -79, 25, -108, 53, -22, 21, -105, 27, 88, 14, -57, -58, -30, 88, 1, 81, 16, -1, -76, 65, -63, -52, -98, -88, -118, -74, -35, -26, 95, -88, -18, -64, -14, -114, 64, -29, 16, -108, -58, -78, -101, 33, 100, -57, -55, -93, 35, -86, -14, -22, 100, 12, 36, -83, -108, 41, 51, -95, -96, -96, -35, 35, 90, 86, -12, 37, 5, 98, 114, 85, -120, 6, 117, 73, -92, -124, 71, -90, -11, -40, 126, 106, -57, -21, -86, 47, 26, -93, 60, -31, -8, -103, 25, -31, 103, -113, -14, 115, -11, -61, 102, -126, -74, 112, -7, 36, -44, 16, 57, -117, -120, 108, -109, -2, 103, -63, 119, 17, 35, -30, 26, 20, 121, 104, -120, 11, -91, 93, -13, -25, -109, 99, -115, 95, 102, -117, 108, 20, -11, 73, 48, -34, -65, 46, -10, 104, -60, 41, 123, -39, 44, 109, 70, 50, 35, -93, -104, 5, -5, 58, -13, -110, 48, -2, -107, -94, 95, -75, 50, 45, -41, -29, -21, 7, 123, 125, -123, 60, 79, -50, 94, 117, 21, 62, 26, 45, -55, 56, 58, -10, -128, 46, -98, 113, -61, -61, -110, 41, 81, -8, -51, 14};
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
    msg.setTimeStamp(0.557833309946);
    msg.setSource(25200U);
    msg.setSourceEntity(173U);
    msg.setDestination(42588U);
    msg.setDestinationEntity(204U);
    msg.source.assign("OAWCNEQOLQRBUVJKJBELSUVECXLAIHQFCJSFDJJLMYAFIBNHWXGRLNGKRZGTXPFCCYJNKGSZRQQFPHNBADELQHITKLWVGVMWQDGBTRUZZKDHXPAYUQHNATJIMCOAUREYLASUSCCYDZDZYHUMTDORSBWPTFEQPXIVCTTGKPDPFEKIRXHEVB");
    const char tmp_msg_0[] = {-26, 28, 57, 44, 71, -30, 76, -8, 111, 97, -103, 11, -102, -22, 58, 41, 73, 95, -97, -26, -15, -17, -93, 122, -88, -15, -90, -109, -71, -84, 71, 98, -75, -52, -28, -68, -118, 8, 118, 61, 28, -101, -10, 42, -27, -13, 66, -105, -73, -64, 108, -46, 39, -119, 37, 81, 64, -28, 1, -59, -15, -49, 117, -76, -98, -22, -89, -118, 96, -95, 40, 94, 9, -18, 28, -43, -55, -89, -70, -8, 120, 98, 2, -79, 46, -32, 41, -51, 20, -41, -103, 117, -114, -20, 2, 97, -89, -78, 40, 75, -101, -78, 16, 88, 91, 108, -118, -32, -112, -122, -57, -121, 103, -18, -21, -49, -27, 10, -103, 54, 4, -48, 62, 36, 1, 7, -40, 12, -111, 124, 87, -103, -14, -2, -14, 117, 78, -15, -124, 26, 66, 88, 45, 36, -53, 52, 79, 118, -82, 35, -119, -13, -127, 88, 4, 69, 118, 56, -5, 83, -115, -81, -18, -105, 0, -34, 78, 74, 67, -12, -115, 107, 27, -64, 14, 124, 61, 111, -66, 108, 97, 23, -40, 96, 110};
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
    msg.setTimeStamp(0.662140865066);
    msg.setSource(43758U);
    msg.setSourceEntity(40U);
    msg.setDestination(49162U);
    msg.setDestinationEntity(183U);
    msg.seq = 4252035708U;
    msg.state = 228U;
    msg.error.assign("TUKILAMIJASZEQJHLPNIXZMZTHHVRBMUDBETEFDOZFRRXLURAPVKWKSHVJKMWGWRZWCGTJQDLXVCKHSGUSPFFNKJONOZWDIOMEJXFWGAYYBOGGCOVGFWZKVZRBMFEDEYJLPGQMUDODZWVNNDPTQL");

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
    msg.setTimeStamp(0.976670026306);
    msg.setSource(14567U);
    msg.setSourceEntity(12U);
    msg.setDestination(47866U);
    msg.setDestinationEntity(234U);
    msg.seq = 3257732238U;
    msg.state = 3U;
    msg.error.assign("LHUIVYJEWMTXLNGTZD");

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
    msg.setTimeStamp(0.671629672885);
    msg.setSource(15598U);
    msg.setSourceEntity(109U);
    msg.setDestination(43170U);
    msg.setDestinationEntity(35U);
    msg.seq = 887036911U;
    msg.state = 135U;
    msg.error.assign("SSVNVAAGZXOSJSIBJKYCRBDMOOXRPLUOBKBPMGRMCQTTUICODCOFJGBVLRMTIQPBHQBVYWRLJJJDCNBDFSKMRMJAEAWZNKVNNKVBIEHFLTCAXMDBPEQRHIULYAZGIGXZWESRCWEPGNFAOUPPWQQJHQKLWEGFZZNVTUTP");

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
    msg.setTimeStamp(0.902973491464);
    msg.setSource(64995U);
    msg.setSourceEntity(81U);
    msg.setDestination(17796U);
    msg.setDestinationEntity(236U);
    msg.origin.assign("OMYNJRGVXDJWKPHFPZTLBGWWURLFXXASQBMENPYFHNFSKLQIQUKZAKUQLLIFNETYPZYPMCWYJTSGSSFIJJNTDEGRGVUERKJRVEXZMTIABYVNODQYF");
    msg.text.assign("BUALETPQHIEIMKQPCJSOTGLKEKXPWDBUXHNKYVEXJCASMTUKAAOYFKMWKZVUKHEFPRSBEOHHLNCAZIPGNYAEXKADXRLWQQUWJQUOZQCOZMYGWTTDFXRCVZJXGIUCFLNIRFCYNTUXUERDNFSAJZOYDTQXFGPSOIDTFVCBBQICLHDVTWBBRZZIVAGFMFMBWSSPKDJNURYGIPMBJYPOGYHWOJHPVOWJDXQLVILNHMZRBRSGYNZLHLRV");

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
    msg.setTimeStamp(0.49939531072);
    msg.setSource(25504U);
    msg.setSourceEntity(3U);
    msg.setDestination(21481U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("UBYDTJSZRNXZYEYHVWAPSTLUCLKJDAXFCCKPUABPLXEVQOXMKAJLZUNFOPUFPYJTUQBGBEJNRKTKDHQRIGVDZFKWTSHHRWXFIFSBDLORILIZIYJRPRMGYCD");
    msg.text.assign("OCNTVYELISTHFPKXBJVZUMITMTQKPCELYATLOCIFHOHOERXBAJGKBWDGCEKALNXCHLOPBIYUSHVJGQMVUHROWBXZXBZJOZICZRWGNXGTQUMRRQPEQAAERRFLZUQUNHAUTCBHKKAOOFNWFMMNVNDCFFQLXSYAGJJPNBBFDRVSFZWLTURJDOPMEGP");

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
    msg.setTimeStamp(0.0496245707758);
    msg.setSource(19588U);
    msg.setSourceEntity(117U);
    msg.setDestination(58543U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("OAMKPKOXHXNAQXNQGRFBHNIVQGJZXYHBJVLFWVKNSAHIWKASTAXCFVZNCYFAKPTDGTEAHLPJVTISGADOGNVNWVJIUEJRMMVDCGKTPZEROCUDTRHZBARTKBFIFSIHUWTBRZEEEPEGPFWCZKJZBUKMNJZXSPCPYAIYQWSLIDSBLYQDCULLXBRERFGTGYOVLJQDOYELHJUXISUWTPOQYBH");
    msg.text.assign("EWMABISIFOYXQYXTPVHHFRUMVUVQUAZVBDRQPPBVODLRPQEASQJEXNJMTHWHCBWKIDRHACCXGULUGRLYQHQREZRQXOSQTDFZWBKTMNDBKUFJJVYEABSNPLNFSPMUXHMHTIDZANOKZVDZZGWDDYAGZGTCFNEVKASFRGWAFJCOJUKGCOYWMPTYFCHNISDLCAJLMXJKSTHISK");

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
    msg.setTimeStamp(0.181596666471);
    msg.setSource(17573U);
    msg.setSourceEntity(72U);
    msg.setDestination(18136U);
    msg.setDestinationEntity(113U);
    msg.origin.assign("TSBNTRRSZFGXAHQEGMEUQFMHLKZFYPNITPNTGMZWQQLAC");
    msg.htime = 0.101951720476;
    msg.lat = 0.994830016688;
    msg.lon = 0.641127382775;
    const char tmp_msg_0[] = {67, 43, 123, -62, 36, 107, 71, -126, -36, -32, -22, 43, -24, 50, 89, 92, -63, -122, -15, 89, 75, -8, 77, -15, -108, 67, 65, 102, -17, -89, -48, 16, 86, -96, 41, -67, -89, 126, -87, 58, -63, 57, -43, 60, -18, 39, -122, -121, 103, 116, -93, -126, -48, -3, -69, 24, 125, 43, 126, -66, 59, 1, -4, -28, 86, 21, -45, -34, 122, 72, 55, -9, 59, 23};
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
    msg.setTimeStamp(0.641623806993);
    msg.setSource(61733U);
    msg.setSourceEntity(235U);
    msg.setDestination(12100U);
    msg.setDestinationEntity(73U);
    msg.origin.assign("YWXFZQQMGUHALFXAAVKWKQDCCEMPDZGUFIPGKVHRETXUSJBNELHORFCZ");
    msg.htime = 0.833778635186;
    msg.lat = 0.352316651903;
    msg.lon = 0.20375151459;
    const char tmp_msg_0[] = {-18, 32, -111, 61, -3, -30, 92, -4, 34, 6, 122, 67, 38, -98, -105, 73, 111, -121, 86, 124, -123, 35, -117, -60, 105, -101, -38, -32, -103, -98, 77, -118, 25, -119, -1, -91, 106, -89, -83, 18, -87, 2, 55, 75, 58, -24, -12, -102, -70, 103, -6, -19, 39, 13, -44, 28, 44, 112, 91, 56, -7, 0, 56, 39, -42, 59, -108, 78, -18, -121, 50, -53, 65, -43, 50, 30, -88, 93, -3, -100, -78, 49, 46, 125, 88, 2, 13, -3, 121, 54, 91, 34, 72, 40, 19, 24, 51, -112, 37, 80, -55, 26, 91, 65, -50, -22, 60, 80, 30, -92, 123, 57, -41, -3, -3, 107, -71, -117, -55, 86, -28, -74, -64, 64, -77, 85, -79, 49, -25, -10, 104, -19, -15, -22, -42, 69, -76, -78, 110, 57, 123, -86, -121, -110, -62, 97, 88, -87, -103};
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
    msg.setTimeStamp(0.424469604523);
    msg.setSource(55283U);
    msg.setSourceEntity(152U);
    msg.setDestination(6521U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("FQRALABAUQFITGXOCAFWHXMVPNMHUULKVIKTEEVDFJJUJNHWKJGPTC");
    msg.htime = 0.341519811508;
    msg.lat = 0.196233254837;
    msg.lon = 0.0139720189384;
    const char tmp_msg_0[] = {0, -101, 102, -121, 62, -126, 64, 105, -36, -11, -18, -99, 103, -118, 105, 52, -71, -78, 40, 61, -101, 41, -50, 23, 89, 47, 31, 33, -93, 23, -75, 6, 89, -9, 49, 36, 6, 0, -104, -45, 13, -81, 70, 75, -79, -86, 55, -32, -52, 59, -91, -3, -65, 61, 5, -128, -111, -54, 0, -16, 32, 107, -15, -92, 95, 68, -84, -46, 54, 3, -31, -40, 22, -23, -46, -21, 102, -80, 62, 17, 107, -80, -78, -53, 103, -101, -25, 126, -97, -14, -37, 83, 15, -65, 8, 112, 103, -57, -89, 53, 15, -68, 61, -25, -65, -77, 103, -112, -70, 36, -14, 8, 93, -127, 89, 119, 94, -47, 84, -34, -44, 118, 89, 44, -71, -9, -122, 52, -51, 80, -35, -35, -67};
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
    msg.setTimeStamp(0.338127680861);
    msg.setSource(58037U);
    msg.setSourceEntity(124U);
    msg.setDestination(10994U);
    msg.setDestinationEntity(188U);
    msg.req_id = 63451U;
    msg.ttl = 17578U;
    msg.destination.assign("WGSMHLTHDLTZVBTMGCGBZEVJASOYIXXKIDXTRKRDBKCILNZLIJXHQDLYBQOGFMZBJSODKVPSCZQNSGHRXUWYMCGJFUUUVWFARWUPFWNWUFHAOKJUJNLDPQVTXVQOYSAHMXRKPFZDNUNVAEURHUKARAPZEEZHNM");
    const char tmp_msg_0[] = {-61, 21, -81, 72, 126, -119, -26, -48, -24, -100, -93, -120, -23, -48, -27, -112, -104, 23, -118, -29, -110, 13, -126, 86, -33, -55, 3, -5, -74, 116, 78, -16, -70, -18, 102, 3, 33, 70, 126, -104, 38, -110, -91, -72, -106, -9, 74, -71, 124, 53, 23, -13, -64, -26, -2, -108, 116, -22, -2, -61, -107, 64, -81, -103, 95, -38, 8, 20, -79, 28, -87, 51, -64, 119, 68, -7, -126, 16, 121, 43, -3, 109, -103, 59, 89, -100, -121, 10, 52, 68, -83, -90, 26, 2, 81, 88, -19, 6, 11, 37, -17, -56, 89, 82, -108, 102, -101, 8, -24, -23, -110, 96, 71, 110, 72, -48, -97, -127, -8, 125, 24, -13, -31, 15, 52, 41, -53, 46, 77, 64, -46, 105, -53, -20, 69, 90, -109, 72, -109, -58, -126, 6, 118, -67, 90, 4, -24, -8, 31, 113, -113, -33, 23, 114, 121, -127, 72, -70, 84, 118, -58, -17, 38, 120, 38, -14, -105, 72, -5, -88, -71, 75, 118, -11, -13, -90, -49, 98, -8, -100, -60, 15, -52, 15, 119, -18, 66, -72, 109, 66, -59, 25, 30, -77, -48, -103, -80, 86, -9, -89, -8, -45, 68, 15, -3, 72, 67, -111, 60, -38, -43, -79, -15, 74, 35, 71, 123, 116, -114, -107, 80, -47, 27, 75, -74, 38, -79, 75, 124, -106};
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
    msg.setTimeStamp(0.599122514214);
    msg.setSource(7724U);
    msg.setSourceEntity(65U);
    msg.setDestination(4498U);
    msg.setDestinationEntity(187U);
    msg.req_id = 6091U;
    msg.ttl = 64581U;
    msg.destination.assign("ANKRTOBBKBLBGULHAUSNOUETZUVCXYCPSJZHDQZOLUUJTVXSJVMMOCKPGSPQTNKZLWJSCWPVOADEYYEWLRFFCROHFWTPMYYGLLQJQXINJDQTWVFULKGXMYJWHFTRN");
    const char tmp_msg_0[] = {60, -92, -123, 116, 79, 103, -89, -110, -13, 69, 91, 9, -98, 126, -115, -4, -24, -112, 80, -99, -104, -51, 46, 72, 93, 68, 36, -41, -38, -94, 93, 14, -3, 59, -15, 85, 52, -101, -82, 79, 73, 25, -95, -57, 32, -73, 105, 93, 94, -93, 126, -27, 75, -55, 44, -75, 11, -20, -63, -116, -12, -27, 71, 14, 2, 61, 120, 17, 123, 11, 35, 29, 32, 68, 82, 26, -74, 76, -82, 13, -79, 63, 64, -33, 105, -49, 117, -114, -46, 54, 91, -118, -21, -106, 81, 81, -87, -110, -64, 41, 44, 73, 36, -30, -105, -110, 26, -3, 90, 89, -49, 80, -22, -40, 70, 54, -58, 8, -14, 122, -43, 101, -117, -25, 14, -10, 79, 107, -83, -19, 67, 105, -39, 104, 70, -82, 119, 33, 80, -115, 103, -120, -93, 110, -76, 99, 5, -59, -115, -18, -33, 29, 83, 7, 68, -50, -49, 57, -61, -116, 119, -36, 86, -49, -22, -122, 43, -89, -30, 52, 72, 88, 96, -109, -24, 68, -86, 84, 0, 31, 107, 121, 103, -97, -92, -91, 20, 126, 10, -81, -24, -17, 113, 103, 98, 40, -101, -7, 28, -89, -78, 101, 44, 45, -58};
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
    msg.setTimeStamp(0.0811276353295);
    msg.setSource(63852U);
    msg.setSourceEntity(225U);
    msg.setDestination(58038U);
    msg.setDestinationEntity(237U);
    msg.req_id = 23819U;
    msg.ttl = 24895U;
    msg.destination.assign("CZSQHWZHJWZQIQYWBXNTOLHWPMNZPLGDYZCVGPKMGVLNYLCIVIJVXDVSYEUGEYUCYFNXMVUPRNTIDHMYFGAXGXAXRRRFZCDNSEJLSBPRKVPSJYXAOSKOBZHIGUKRRKKBBPEJTQTTHTQWLFLMDCOSXEUDNWVJPYHFWFAGOAUZCOUMJJO");
    const char tmp_msg_0[] = {-125, 54, -64, -79, 74, -55, 117, 5, 82, -104, -34, -18, -54, 104, -17, 88, 30, -23, 114, -122, -46, 4, 65, -83, 57, -10, -42, 124, -6, 5, 49, 51, -79, -21, -75, -69, -81, 76, 26, 86, -106, 4, 13, -80, 50, 30, 13, 39, 102, 78, -26, 24, -84, 118, -122};
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
    msg.setTimeStamp(0.477318177884);
    msg.setSource(59002U);
    msg.setSourceEntity(192U);
    msg.setDestination(54553U);
    msg.setDestinationEntity(188U);
    msg.req_id = 30157U;
    msg.status = 69U;
    msg.text.assign("BAFMUNBISSOBWIZSZFXZUGPALIEDYELYNZTCGONEVAECGCUOSPASDZVCWLQIRTWLMLDRQYHLEGRHXYQGFZYHTXNHUWDJLPXOTDKQAPCEOSJHDFBKJYMTDARRGRBVVKUQI");

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
    msg.setTimeStamp(0.175705781645);
    msg.setSource(31184U);
    msg.setSourceEntity(90U);
    msg.setDestination(8931U);
    msg.setDestinationEntity(98U);
    msg.req_id = 35872U;
    msg.status = 227U;
    msg.text.assign("BWRNNVAYMKCSINJBTWHEGKIEBQQTWEZJOP");

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
    msg.setTimeStamp(0.103331682985);
    msg.setSource(7613U);
    msg.setSourceEntity(108U);
    msg.setDestination(6027U);
    msg.setDestinationEntity(68U);
    msg.req_id = 33436U;
    msg.status = 218U;
    msg.text.assign("FALDAVCARCTNZGNZYHORLWDGMEPXEBUXFMUSEXPMGFEBUCEFYUVTDJNOQAQIEBJP");

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
    msg.setTimeStamp(0.690961304487);
    msg.setSource(6697U);
    msg.setSourceEntity(6U);
    msg.setDestination(36134U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("RHLGQSJDNFDEKSYVFQIXDNQZBRDPT");
    msg.links = 1563299293U;

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
    msg.setTimeStamp(0.165910849423);
    msg.setSource(14418U);
    msg.setSourceEntity(233U);
    msg.setDestination(25361U);
    msg.setDestinationEntity(205U);
    msg.group_name.assign("BZJUEWCZTMHRUYZTSSLKVZGYUTEVVZBIVKLQIBHPQQUNP");
    msg.links = 142684875U;

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
    msg.setTimeStamp(0.299104369253);
    msg.setSource(8445U);
    msg.setSourceEntity(246U);
    msg.setDestination(55403U);
    msg.setDestinationEntity(126U);
    msg.group_name.assign("HPJLPBOYUDHHMCGRGGYKJGWKQSTQJLWDJUZVKAMTTKREQMDDHGDYVXRIJYOTDHUSBOIVHYDBSIBOIWPSBWFSHLQZGCKUQDNAEYFNCCOZAUWRWXAMGGDESJUKSPPUSAPCONLQZ");
    msg.links = 560824458U;

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
    msg.setTimeStamp(0.817626292458);
    msg.setSource(6195U);
    msg.setSourceEntity(229U);
    msg.setDestination(27496U);
    msg.setDestinationEntity(219U);
    msg.groupname.assign("VQBCFFXWBWRVJEUXFORJWDSLDBBICCYTMQNNCAZHYMIUJGKAOTSDOKJNAKPQPEMWWZPUCBDGLHTSALHMEPFJZBIXCKSCMYCGCROSKITPRHEIYVBOQUQTSXZHZRMDMIUYACAXAHJQPSFEZLJBRZJXBHRKHVDLVUOSLVTZZIKQQN");
    msg.action = 47U;
    msg.grouplist.assign("JSCWWZMEUPLXBMRVVYKLAXZHFNYLAQKTABTOKQETBDIICOUPJPYZHAMRRWGKJUYUMKTYCLVLNZWISVNRTRJXQZFQDGVHNREFRFZOUECHMHRGFPVQZPFGSYGEQOWAXNKTBZDBWSIYBGEOGBNOKSVIACJASOJ");

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
    msg.setTimeStamp(0.930301691199);
    msg.setSource(12112U);
    msg.setSourceEntity(227U);
    msg.setDestination(2912U);
    msg.setDestinationEntity(243U);
    msg.groupname.assign("IQDVHSFKBDCWWRTSQKAXNKGXYHXSOQBOIJZAVKFVZQJZTWP");
    msg.action = 160U;
    msg.grouplist.assign("DRTKMLOFQXBEKPAXPPQUAAKETQMJSRCNDYGQVMLTKTXANJGZNYQHYTUDHKLMWWBLKVUSOLXDCYLTYOHKIRMHNVXAASKSJIGVTNQCZXPAWCXYYVUEEGKEUWMHBXUQFMOWIFRNEYPPTZCOUBDTUYQWCMJPNZQRHLEORXZJSWJMHBGLDIODAHJHVIAFNOOMLNPKEZVRCF");

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
    msg.setTimeStamp(0.937360974074);
    msg.setSource(20325U);
    msg.setSourceEntity(189U);
    msg.setDestination(35338U);
    msg.setDestinationEntity(141U);
    msg.groupname.assign("PIWLISUCPZEVYDCDTMJABVCIDMVJYWQXDXITZIUPHWABHQFDXKLACBIFPXTP");
    msg.action = 223U;
    msg.grouplist.assign("OSPWRCRZFGTUSSWALGPLFIVWLAIPNOHLHHFRGPDOKLHUGJMPSAQODDWNPEKXVKRVXKIUQAJXFJXYUVIIVNDXCGEHVUZQBFBUQYWTSVBPYRKJBYTWLTMQAIWNOCMFMDCEMVXUMTK");

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
    msg.setTimeStamp(0.197736389362);
    msg.setSource(45180U);
    msg.setSourceEntity(245U);
    msg.setDestination(20087U);
    msg.setDestinationEntity(10U);
    msg.value = 0.827131674752;
    msg.sys_src = 10818U;

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
    msg.setTimeStamp(0.749393475525);
    msg.setSource(54327U);
    msg.setSourceEntity(24U);
    msg.setDestination(28203U);
    msg.setDestinationEntity(29U);
    msg.value = 0.121576139203;
    msg.sys_src = 47354U;

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
    msg.setTimeStamp(0.712650385577);
    msg.setSource(60957U);
    msg.setSourceEntity(6U);
    msg.setDestination(3494U);
    msg.setDestinationEntity(220U);
    msg.value = 0.257211778124;
    msg.sys_src = 3081U;

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
    msg.setTimeStamp(0.621322650938);
    msg.setSource(40675U);
    msg.setSourceEntity(126U);
    msg.setDestination(21541U);
    msg.setDestinationEntity(182U);
    msg.value = 0.0163917586674;
    msg.units = 249U;

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
    msg.setTimeStamp(0.969465842162);
    msg.setSource(8283U);
    msg.setSourceEntity(243U);
    msg.setDestination(28817U);
    msg.setDestinationEntity(10U);
    msg.value = 0.570051929106;
    msg.units = 237U;

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
    msg.setTimeStamp(0.620390534474);
    msg.setSource(19895U);
    msg.setSourceEntity(113U);
    msg.setDestination(481U);
    msg.setDestinationEntity(158U);
    msg.value = 0.480500969233;
    msg.units = 120U;

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
    msg.setTimeStamp(0.62661862619);
    msg.setSource(38138U);
    msg.setSourceEntity(25U);
    msg.setDestination(25885U);
    msg.setDestinationEntity(233U);
    msg.base_lat = 0.621406322333;
    msg.base_lon = 0.389482308794;
    msg.base_time = 0.845767974057;

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
    msg.setTimeStamp(0.225752466586);
    msg.setSource(4381U);
    msg.setSourceEntity(184U);
    msg.setDestination(55344U);
    msg.setDestinationEntity(77U);
    msg.base_lat = 0.135578794753;
    msg.base_lon = 0.83392748256;
    msg.base_time = 0.257036364254;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 57815U;
    tmp_msg_0.destination = 55633U;
    tmp_msg_0.timeout = 0.316477076895;
    IMC::TextMessage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.origin.assign("VIDDFMDNEJSHMGTADJLELCWYEUQUHCQDWGZY");
    tmp_tmp_msg_0_0.text.assign("WUYVCHUUUIWKUXEEFSSADSLSVFUKAXBXVYKOZLWZ");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.640319560828);
    msg.setSource(33650U);
    msg.setSourceEntity(125U);
    msg.setDestination(51082U);
    msg.setDestinationEntity(189U);
    msg.base_lat = 0.297933140888;
    msg.base_lon = 0.277045923373;
    msg.base_time = 0.0910633402255;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 34821U;
    tmp_msg_0.priority = -62;
    tmp_msg_0.x = 9691;
    tmp_msg_0.y = 31184;
    tmp_msg_0.z = -20424;
    tmp_msg_0.t = 19170;
    IMC::StationKeeping tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.203418899325;
    tmp_tmp_msg_0_0.lon = 0.00319395408392;
    tmp_tmp_msg_0_0.z = 0.0553797793532;
    tmp_tmp_msg_0_0.z_units = 110U;
    tmp_tmp_msg_0_0.radius = 0.723809863276;
    tmp_tmp_msg_0_0.duration = 26056U;
    tmp_tmp_msg_0_0.speed = 0.330279425324;
    tmp_tmp_msg_0_0.speed_units = 64U;
    tmp_tmp_msg_0_0.custom.assign("IIUDYABLWDSHGISCUHWTJKZGYEFEDBZJWLNLLAZPKOHNRCEONKORXNFPUXYNIDP");
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
    msg.setTimeStamp(0.0293229940094);
    msg.setSource(13558U);
    msg.setSourceEntity(80U);
    msg.setDestination(25163U);
    msg.setDestinationEntity(180U);
    msg.base_lat = 0.785690927503;
    msg.base_lon = 0.0841328301081;
    msg.base_time = 0.396048356996;
    const char tmp_msg_0[] = {-80, -46, 62, -96, -3, -35, -23, 109, 54, -2, 86, 90, 20, -75, 55, 89, 14, 101, -100, 112, -30, -56, -90, 47, -72, 56, 24, 110, 87, 71, 26, -17, 7, -59, 38, 2, 122, 28, -59, 118, 14, 51, 47, -121, -20, -37, -127, -45, -63, -92, -72, 86, 19, -94, 59, -77, 118, 34, -77, 19, 95, 25, -113, 87, -40, 50, -97, 5, -34, 45, -59, 18, 116, -96, -90, 17, 42, 110, 109, -85, -65, 0, 19, -45, -75, -54, -10, -7, 96, -30, -24, 68, 74, 83, -6, 52, -14, -31, 32, 53, 22, -62, -122, 51, 33, 121, 47, 27, -31, 39, 122, -13, 97, 39, -31, 33, -102, 28, -46, 58, 62, 67, 95, -8, 82, -24, 64, -116, 3, 95, 27, 73, 77, -36, -46, -5, 96, 21, -109, 99, -100, -5, 85, -108, -73, 93, 44, -71, 19, -52, 119, -32, 42, -4, 85, -57, 14, 82, 74, 10, -32, -100, 42, 1, 51, 126, -91, -48, -57, -68, 42, -58, -46, -43, -28, -10, -59, -42, 36, -57, -85, -117, 102, -118, 26, 18, -86, 9, 95, -2, 124, -43, 50, 11, 85, -97, -115, 74, -110, 11, -92, -110, 99, 85, -25, 109, -67, 0, -118, 45, 113, -60, -109, 68, 30, -23, 100, 0, -123, -127, -80, -87, -111, -89, 40, -35, -88, 84, -2, -20, -71, -23, -95, 104, -121, 12, -51, 109, -47, 113, -83, -84, 74, -39, 96, 3};
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
    msg.setTimeStamp(0.442474105325);
    msg.setSource(55862U);
    msg.setSourceEntity(81U);
    msg.setDestination(21571U);
    msg.setDestinationEntity(196U);
    msg.base_lat = 0.349732640517;
    msg.base_lon = 0.201915447543;
    msg.base_time = 0.44967254674;
    const char tmp_msg_0[] = {-106, -123, -125, 17, 105, -107, 29, 27, -127, 16, 94, 71, -32, -52, 43, 78, 61, 104, -19, 21, -65, -12, -43, 76, 20, -26, -38, -68, -50, 8, 103, -82, -121, 88, -104, 122, 38, -82, 54, 113, 70, -118, -33, 77, -15, 12, -109, -40, -45, -44, -32, -97, -24, -126, -1, -24, 24, -128, 103, -88, -48, 84, 119, -69, 121, -67, 20, -110, 50};
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
    msg.setTimeStamp(0.344149437161);
    msg.setSource(26403U);
    msg.setSourceEntity(32U);
    msg.setDestination(50812U);
    msg.setDestinationEntity(86U);
    msg.base_lat = 0.949757116926;
    msg.base_lon = 0.597156040484;
    msg.base_time = 0.305401763913;
    const char tmp_msg_0[] = {37, -38, -6, 19, -123, 24, 93, -6, -19, -65, -23, 65, 34, -66, -50, 94, -50, -46, 49, 5, 126, -72, -32, 78, 11, -46, 112, 36, 117, -4, 97, -28, 49, 123, 84, 42, -95, -48, -2, -50, 125, -33, -98, -13, -54, -126, -85, 112, -22, -5, -61, 125, 77, 96, -88, -62, 91, -125, 32, 112, 69, 18, -6, -13, 65, -53, -17, -109, -73, -73, 0, -34, 88, -83, 94, -126, -49, 34, 16, -127, 47, -69, 40, -106, -14, -74, -11, 35, 72, -28, 112, -75, -82};
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
    msg.setTimeStamp(0.711575838131);
    msg.setSource(65243U);
    msg.setSourceEntity(174U);
    msg.setDestination(9814U);
    msg.setDestinationEntity(57U);
    msg.sys_id = 64915U;
    msg.priority = 16;
    msg.x = 18083;
    msg.y = -17445;
    msg.z = -32080;
    msg.t = 29722;
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 2773448157U;
    tmp_msg_0.status = 127U;
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
    msg.setTimeStamp(0.6057086102);
    msg.setSource(19691U);
    msg.setSourceEntity(190U);
    msg.setDestination(3081U);
    msg.setDestinationEntity(116U);
    msg.sys_id = 65128U;
    msg.priority = -89;
    msg.x = -30924;
    msg.y = 5139;
    msg.z = -11126;
    msg.t = 27289;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("DTVYFFJSHLFHDFIIBJPUOIOHSWONVXXYACRGBJYGMSPRAMNCZERQVQROCJMGPUVEKNDIKRYOVPQSGNRYMMZTXOTYJOBVGHECKDTGJLWBPUKQKUACMBLOXUWDELZXEHLIZEDTIVIXRZXJWRPAKQSBDYFTNCTQSVSIXEDPPLM");
    const char tmp_tmp_msg_0_0[] = {-3, 21, -46, -65, -84, 35, 4, -24, 77, 16, 3, 46, 40, -38, 82, 115, -73, 19, 33, -53, 112, -86, -108, -22, 38, 103, -98, 49, 73, 27, -91, -98, -103, -81, 54, 64, -111, -126, -54, 49, 14, -20, 45, -33, -96, 80, 15, -15, -30, -71, 79, -102, 5, 108, 45, -75, -101, 29, 108, 94, -87, 8, 31, -104, -122, -3, 122, -42, -112, -74, 107, 3, -68, 14, 100, 20, -85, 82, -105, -41, -8, 67, -103, 119, 102, -37, 45, 22, 61, 36, 38, 64, 88, 50, -120, 7, 43, 84, -8, -31, -34, -1, -89, 38, -9, -59, 16, -44, 99, -26, 9, 38, -2, 66, 48, -16, -22, -16, 55, 0, -11, 63, -99, 97, -17, -80, -63, -66, -58, -114, -108, -59, 111, -36, 41, -72, -35, 46, -65, 11, -42, -44, -24, 55, 107, -86, 2, 48, 49, -36, 27, -73, 89, -4, -97, -128, 85, 86, 99, 54, -24, 31};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.185587517095);
    msg.setSource(36667U);
    msg.setSourceEntity(156U);
    msg.setDestination(61506U);
    msg.setDestinationEntity(38U);
    msg.sys_id = 40083U;
    msg.priority = -68;
    msg.x = 26438;
    msg.y = 7716;
    msg.z = 19092;
    msg.t = 27547;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3930693926U;
    tmp_msg_0.start_lat = 0.512747283764;
    tmp_msg_0.start_lon = 0.725081792335;
    tmp_msg_0.start_z = 0.074976904347;
    tmp_msg_0.start_z_units = 238U;
    tmp_msg_0.end_lat = 0.713546559715;
    tmp_msg_0.end_lon = 0.181372390752;
    tmp_msg_0.end_z = 0.753265146763;
    tmp_msg_0.end_z_units = 86U;
    tmp_msg_0.speed = 0.87503880529;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.lradius = 0.137201530955;
    tmp_msg_0.flags = 81U;
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
    msg.setTimeStamp(0.869519127096);
    msg.setSource(61426U);
    msg.setSourceEntity(192U);
    msg.setDestination(31688U);
    msg.setDestinationEntity(159U);
    msg.req_id = 26881U;
    msg.type = 157U;
    msg.max_size = 37456U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.753084815738;
    tmp_msg_0.base_lon = 0.377201136035;
    tmp_msg_0.base_time = 0.30044270342;
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
    msg.setTimeStamp(0.259847811662);
    msg.setSource(10409U);
    msg.setSourceEntity(91U);
    msg.setDestination(39416U);
    msg.setDestinationEntity(57U);
    msg.req_id = 2227U;
    msg.type = 13U;
    msg.max_size = 61440U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.198244345813;
    tmp_msg_0.base_lon = 0.241592410784;
    tmp_msg_0.base_time = 0.846424909035;
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
    msg.setTimeStamp(0.682157735126);
    msg.setSource(42977U);
    msg.setSourceEntity(115U);
    msg.setDestination(37770U);
    msg.setDestinationEntity(118U);
    msg.req_id = 61483U;
    msg.type = 43U;
    msg.max_size = 25096U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.546987960619;
    tmp_msg_0.base_lon = 0.716137411355;
    tmp_msg_0.base_time = 0.287887984786;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 55682U;
    tmp_tmp_msg_0_0.destination = 4847U;
    tmp_tmp_msg_0_0.timeout = 0.875788903742;
    IMC::BeamConfig tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.beam_width = 0.924162367144;
    tmp_tmp_tmp_msg_0_0_0.beam_height = 0.677195907327;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.440495525155);
    msg.setSource(873U);
    msg.setSourceEntity(195U);
    msg.setDestination(59012U);
    msg.setDestinationEntity(205U);
    msg.original_source = 3385U;
    msg.destination = 45516U;
    msg.timeout = 0.434593921114;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 106U;
    tmp_msg_0.id.assign("MRWYAYOYGOQGKOGSLQEBQCONUPXG");
    IMC::ServoPosition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 81U;
    tmp_tmp_msg_0_0.value = 0.205213162202;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4972662254);
    msg.setSource(33951U);
    msg.setSourceEntity(221U);
    msg.setDestination(14199U);
    msg.setDestinationEntity(92U);
    msg.original_source = 41116U;
    msg.destination = 52899U;
    msg.timeout = 0.0104610941968;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 12U;
    const char tmp_tmp_msg_0_0[] = {-96, -19, -37, -111, -62, -66, 53, -22, -70, -12, 91, -94, -23, 85, -62, -37, 32, -127, 72, -61, -43, -52, 54, 6, 7, 96, -128, -121, 52, 115, 113, 31, -78, 64, 11, -122, -30, 37, 17, 19, -7, -74, 72, 92, 28, 98, -123, -28, -76, -110, -113, 105, -45, 122, 16, -121, -63, 46, 76, -105, -70, -77, 114, 107, 79, -7, -102, 82, -28, 32, -44, 69, -13, -20, 16, 75, 46, -70, 34, 123, -55, -15, 98, -62, 6, -36, 8, 103, 113, -63, 126, 65, -3, 80, -40, -86, 81, -11, 78, 77, 64, -88, 63, 126, -49, -118, -40, 73, -73, -8, -32, -94, -3, -6, 50, 90, -128, 33, 37, -19};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.771203728381);
    msg.setSource(23363U);
    msg.setSourceEntity(39U);
    msg.setDestination(34449U);
    msg.setDestinationEntity(247U);
    msg.original_source = 45745U;
    msg.destination = 61864U;
    msg.timeout = 0.636287344336;
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.291547699089;
    tmp_msg_0.converg = 0.646679909145;
    tmp_msg_0.turbulence = 0.478406309975;
    tmp_msg_0.possimmon = 218U;
    tmp_msg_0.commmon = 97U;
    tmp_msg_0.convergmon = 55U;
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
    msg.setTimeStamp(0.681511398814);
    msg.setSource(22633U);
    msg.setSourceEntity(236U);
    msg.setDestination(28127U);
    msg.setDestinationEntity(105U);
    msg.type = 157U;
    msg.comm_interface = 15040U;
    msg.model = 5327U;
    msg.list.assign("LMMSFBTFFQRRBLAEPZCECKUKSXFGNYZIYIXODTEAVSONXJCNRTRWURILHNWUPMCLNCLAZSHMYJPGEEPSQJXXOMZSJ");

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
    msg.setTimeStamp(0.805885343292);
    msg.setSource(18520U);
    msg.setSourceEntity(56U);
    msg.setDestination(2451U);
    msg.setDestinationEntity(58U);
    msg.type = 123U;
    msg.comm_interface = 58350U;
    msg.model = 12230U;
    msg.list.assign("HHOLMIUIPLSDOOSWALBRZQVYWZDDHDMIEMEFCQENILSAVGHZQETFTPXLKFTTKZHULUERBCFIRXSDQNDISRFZJGCGBKPYVHSTFXAWMGJGRTLJCGEZBVDXZVUBBLO");

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
    msg.setTimeStamp(0.535479307572);
    msg.setSource(25449U);
    msg.setSourceEntity(9U);
    msg.setDestination(53557U);
    msg.setDestinationEntity(186U);
    msg.type = 99U;
    msg.comm_interface = 32908U;
    msg.model = 47506U;
    msg.list.assign("VTHESWRPGLVFFXQWVPPLERYRCNIMULWLTMRKYXRWPBUUGHAOQOMADSANVNZDGYAMUZHFSPTGKBXMJPBBQUPOZTCBTZGFIWEMIYNMYCNFIKCQXIUEH");

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
    msg.setTimeStamp(0.475294541849);
    msg.setSource(21520U);
    msg.setSourceEntity(43U);
    msg.setDestination(48561U);
    msg.setDestinationEntity(14U);
    msg.type = 139U;
    msg.req_id = 2677240758U;
    msg.ttl = 58996U;
    msg.code = 132U;
    msg.destination.assign("ZVEDHFPZCNYXIWXOBCVZFHJOKVSGDQKSIWABFPNTUSANFTSUAJPIBYULCRBWOBZKHKPM");
    msg.source.assign("OXBCWJDXAITJNQNTIEGRJASKRFLWGXMBKKYPSNGZSSGAYNIDCXTZEWAZTXKYFYEGWUDLFJUPRTCMHIDUGOALCEZDFGIFVMMFLBVRNPKAPGQRLNRYETONZCJQDKACWEXWVOUYDBVHWNRHOEUJSIUKFDIFMZPXYBZCEEPQSSHQVJZOOLMLZQXAJJQVBORUWPYODWTCGKSRISKUHHHKSFBNFBZLHXMXMT");
    msg.acknowledge = 154U;
    msg.status = 77U;
    const char tmp_msg_0[] = {93, -20, 34, 23, 48, 59, 36, 40, -82, -55, -1, -114, -93, 78, -13, -47, -28, -17, 6, 110, -78, -41, -53, -41, 63, 91, 26, 76, -23, -61, 16, 86, -66, -76, -75, 24, -119, -96, -6, 66, 40, 39, -5, -105, 63, 14, -87, 0, -2, 105, 42, -17, 21, -10, -21, -104, -1, -76, -118, 96, -110, -46, 95, 57, 2, -89, -68, 6, 93, -45, -44, -57, 53, -82, -34, -19, 119, -33, -16, -100, -83, 100, -125, -116, 107, 67, -46, 121, 84, 10, 35, -31, -15, 31, -50, 113, -43, 108, 52, -114, 26, -126, -103, 99, -55, -102, -122, 110, 81, 38, -38, 108, 94, 43, -11};
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
    msg.setTimeStamp(0.70464347396);
    msg.setSource(4934U);
    msg.setSourceEntity(109U);
    msg.setDestination(23482U);
    msg.setDestinationEntity(14U);
    msg.type = 24U;
    msg.req_id = 1845186494U;
    msg.ttl = 28946U;
    msg.code = 19U;
    msg.destination.assign("FJWVNNYBZMELZNAWQKFSPOOZLHKGWIWVOWKSLAJDKSPJZUFDLOOPPRCEXIRWJKNKVTOOFRCOEIWAGEMBJLKTXSHTQGAYGPCYYXXCGVDAXHDEWCYUBZEUCNEKQDCZJBHGTQHSYSLCZHTVRUKUBXIIOUMHMNDXBCHWQUHTELNAXFFMPOQXAJBHGIJJZENUQSVLMDFDXGRPRTAQFBIAVSANVDKFILRGYURBTM");
    msg.source.assign("SWCYCJGTBYNFJROFJMOIXVBEGRMKEHJGAWLNWFUMIFNEKAZXBPOAILHVRLYPIUBUDVWQXIOZMYAMOIGNSGLTVUUCTTGSUZYNCEMFXQCQFGWDRVRAHAFTYPGVNZOPNJAIFEXQHMZNLCKBBSKKZLEHZPESBDDTPWRGOWDOORDRFXTBXEQHNZWHYPVHMDJTFQKTDHCLZSQQQSPHNYTJUSVZIJJDCWDC");
    msg.acknowledge = 79U;
    msg.status = 44U;
    const char tmp_msg_0[] = {-71, -46, 72, -102, 115, -91, -26, -81, -35, -79, 85, 53, 4, 119, 5, -123, 37, -94, -4, 56, 111, 28, 108, 45, 9, 95, -117, -52, -8, -114, 25, -58, 67, 53, 24, -29, -107, 17, -3, 17, 31, -40, 35, 122, 114, -39, 34, -20, 91, -80, 3, -8, 11, 90, 86, 116, -83, 92, 1, 82, 91, 67, 75, -41, -103, -47, 124, -125, -10, -39, 36, 49, 122, 21, -80, 50, 108, 38, 82, 31, 39, 74, 80, 11, -88, 50, 78, 36, 88, -5, -37, 27, 88, 26, -67, -63, 19, -95, -14, -109};
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
    msg.setTimeStamp(0.0822106780086);
    msg.setSource(54049U);
    msg.setSourceEntity(46U);
    msg.setDestination(43746U);
    msg.setDestinationEntity(89U);
    msg.type = 111U;
    msg.req_id = 2778279376U;
    msg.ttl = 56413U;
    msg.code = 198U;
    msg.destination.assign("EUTCOSHPTH");
    msg.source.assign("FJCAMILRXIHSEMWTFNGXINDYRXQGXVEVMWWZHYNMGQNHOFFHZARWYYQODETOONXHOCCASRUMUYXSPUTQIEJRDEJUDNLZDVQIOUCZKAMXLVHLCTOACIAUAHBBGSGFFLMFEEJKITAUPUQVCDCWXVQBNWLKVKGPKVDPQUOORFPKGNXDSMTJPBIPAIJYIKFTGWBZDJJRHZSYKTHLHAJWPZRSSJTGLBXRNKNYVWRSPZ");
    msg.acknowledge = 22U;
    msg.status = 228U;
    const char tmp_msg_0[] = {-107, -108, -82, -128, -55, 93, -105, 37, 99, 12, 27, 86, -66, 116, -73, 74, 23, 44, 28, 57, 95, -86, 68, 119, 43, 8, -80, 24, 90, 17, 24, 90, 92, -62, -55, 32, 64, 110, 21, -2, -64, 56, -16, 18, 21, -24, 125, 96, -99, -126, -21, 6, 101, -107, 32, -107, -30, -66, -29, 1, 16, -50, 1, 61, -43, -23, 92, 95, -91, -104, -75, 86, 57, 62, -92, -50, 75, -59, -14, -113, 59, -22, -97, 36, 122, -82, -10, 124, -128, -70, 126, -72, 75, -77, -95, 98, 20, -37, -60, 63, -37, -77, 120, -83, -94, 7, -6, -122, 24, -128, 16, -84, -106, -106, -107, 101, 124, -75, 101, 48, 44, -115, 35, -89, 59, 73, -74, -121, -58, 117, 21, -61, -18, -126, -103, 89, -42, -110, 21, -84, -127, -53, -108, 114, 114, 58, 25, -34, -92, 58, 35, 99, 67, 44, 21, -4, 33, 31, 73, -100, -53, -33, 37, -45, -64, -100, -98, 45, 56, -84, 124, -67, -62, -75, 82, 98, 29, -114, 50, -103, -82, 67, -44, 4, -29, 115, 88, 109, -22, 122, 122, 9, 7, -32, -106, -107, -126, 70, 106, 14, 66, 109, 116, -28, -97, -48, -79, 1, -116, 105, 107, 18, 4, 81, -34, 121, 63, -88, 23, -126, -50, -21, 88, 17, -104, 94, -84, -59, 53, -86, 38, 102, 52, 62, 79};
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
    msg.setTimeStamp(0.961060134867);
    msg.setSource(7585U);
    msg.setSourceEntity(113U);
    msg.setDestination(57689U);
    msg.setDestinationEntity(156U);
    msg.id = 198U;
    msg.range = 0.982377315016;

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
    msg.setTimeStamp(0.587492621694);
    msg.setSource(26341U);
    msg.setSourceEntity(136U);
    msg.setDestination(42152U);
    msg.setDestinationEntity(39U);
    msg.id = 159U;
    msg.range = 0.116375925564;

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
    msg.setTimeStamp(0.888923277741);
    msg.setSource(15913U);
    msg.setSourceEntity(243U);
    msg.setDestination(54467U);
    msg.setDestinationEntity(223U);
    msg.id = 209U;
    msg.range = 0.786615834897;

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
    msg.setTimeStamp(0.774031717014);
    msg.setSource(12859U);
    msg.setSourceEntity(205U);
    msg.setDestination(6730U);
    msg.setDestinationEntity(0U);
    msg.beacon.assign("CDTDJFVTNEMAEJDMFCJFGKCXDUIEZWXWCEPSIXTEYUXOHZPAQVQZQQQAOKHEOCYPEWPBRXCKAPNXBNTPZMOWMSCSPLMOISIQEWFLLJNUROVSGRSVUTRUNWHNBVADYEFFMMOWKBTGLNCLKYYKZHCVH");
    msg.lat = 0.67425944418;
    msg.lon = 0.309048722397;
    msg.depth = 0.758701547809;
    msg.query_channel = 94U;
    msg.reply_channel = 220U;
    msg.transponder_delay = 96U;

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
    msg.setTimeStamp(0.116323658531);
    msg.setSource(36275U);
    msg.setSourceEntity(248U);
    msg.setDestination(55845U);
    msg.setDestinationEntity(139U);
    msg.beacon.assign("GIHXORAZBNUQQYQPEZMVDXMFDROQJVNISDHMXD");
    msg.lat = 0.7238875633;
    msg.lon = 0.879868953817;
    msg.depth = 0.285362084054;
    msg.query_channel = 141U;
    msg.reply_channel = 119U;
    msg.transponder_delay = 183U;

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
    msg.setTimeStamp(0.268603713918);
    msg.setSource(41712U);
    msg.setSourceEntity(40U);
    msg.setDestination(45139U);
    msg.setDestinationEntity(234U);
    msg.beacon.assign("KQVVMWFWMHVQPXWECDHNTAEUDPJKEFWZIASKGPSJRFKBQOFACHRNZUHLSVYWUXDZUZNRQQTCITKOHYSNQIVJBGIAGIBEFLVPUOSCLXJWRDJONFDUHNAQROKJZCBXXBHMMBDPKMOYFGNYYMFRYJAVOMLACONV");
    msg.lat = 0.37263414554;
    msg.lon = 0.777004144645;
    msg.depth = 0.670580638305;
    msg.query_channel = 58U;
    msg.reply_channel = 137U;
    msg.transponder_delay = 29U;

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
    msg.setTimeStamp(0.468298405899);
    msg.setSource(8353U);
    msg.setSourceEntity(0U);
    msg.setDestination(35509U);
    msg.setDestinationEntity(22U);
    msg.op = 112U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VGKLRQBVGVBNSSJVISIXCTHVJLRYWOERDXCBDGJNYTTNGUAXRYWXOCIZQOMZWOLPMJFHIHHWPTZRQEOUVIATVBCTGKFPEYWNLMBBOKAMEYQMBJWDDYKJVHZFJPSLBCNYELDJGZSPEQKUDEYZUPUFICLQKJANXNEIPYAZUSXMOLRLQUWXCLVKAGSTHOHOSWHUMWFRRTYCKPPIRXNTTKDSMWQCVQFPAD");
    tmp_msg_0.lat = 0.346898914791;
    tmp_msg_0.lon = 0.312488113206;
    tmp_msg_0.depth = 0.0135926814412;
    tmp_msg_0.query_channel = 33U;
    tmp_msg_0.reply_channel = 62U;
    tmp_msg_0.transponder_delay = 74U;
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
    msg.setTimeStamp(0.477284656124);
    msg.setSource(45026U);
    msg.setSourceEntity(68U);
    msg.setDestination(58498U);
    msg.setDestinationEntity(95U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.485257456771);
    msg.setSource(19451U);
    msg.setSourceEntity(121U);
    msg.setDestination(30735U);
    msg.setDestinationEntity(159U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.607059649043);
    msg.setSource(29468U);
    msg.setSourceEntity(76U);
    msg.setDestination(21982U);
    msg.setDestinationEntity(82U);
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.395235593786;
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
    msg.setTimeStamp(0.781661942749);
    msg.setSource(32921U);
    msg.setSourceEntity(106U);
    msg.setDestination(20162U);
    msg.setDestinationEntity(62U);
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 26709U;
    tmp_msg_0.lat = 0.883526854701;
    tmp_msg_0.lon = 0.991888672989;
    tmp_msg_0.z = 0.468056043658;
    tmp_msg_0.z_units = 205U;
    tmp_msg_0.speed = 0.445902851228;
    tmp_msg_0.speed_units = 226U;
    tmp_msg_0.duration = 57855U;
    tmp_msg_0.radius = 0.918787139133;
    tmp_msg_0.flags = 94U;
    tmp_msg_0.custom.assign("BPIHKJDBZEVRDLTCWSIVBSPZOZIMYVTEVOTPBNNPUIOUONHUFFPKJMSYSOUHRREASQBXWQZNHLGWOCMAWDCNHFOEHTINLMXECWLXQXZRZQEACCBHJBBVMHDYLXMNBHQXGAQRRAEGTKKYTTFDDZEXRSSKAGKEMQILOAFVUDFIMFKCMJ");
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
    msg.setTimeStamp(0.255255934917);
    msg.setSource(13429U);
    msg.setSourceEntity(185U);
    msg.setDestination(14629U);
    msg.setDestinationEntity(136U);
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.226999439258;
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
    msg.setTimeStamp(0.510742341497);
    msg.setSource(15278U);
    msg.setSourceEntity(199U);
    msg.setDestination(46998U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.747664554431;
    msg.lon = 0.421534620187;
    msg.depth = 0.419981621253;
    msg.sentence.assign("FRAOKYJZNOWRDFLCMJZDWXZGWKOTUIXZEDWVXYKJONCUKXAZMEIRRLAGFYLQIWHJPPKWWRCOGPCQ");
    msg.txtime = 0.367344852113;
    msg.modem_type.assign("RKHUKSTOMHSGGIJFNDMUOOUPUBKXLAETX");
    msg.sys_src.assign("UVBGEXKTJCRYKWUCPOSZQJPFYILDYNUJTVKGABJETEZWEBXTVZPCZCGGSIAQDMUKTOVAWBMVIBGNFSDDNCMPMUJVPNRZAYSNFPILDRTTBHEMAKDMAGYSTBDFEPCIKFYWOZFJWJDUNLSLECISGRMUJQZ");
    msg.seq = 19659U;
    msg.sys_dst.assign("NZDAVVZMLTKUYISYAWNTGOHAOXWYGSLWUXVYARSUBMIIPTQHLFLXTAGWVFNEJSJDKCIYINUEMGHCSHZMODQNPXJKQKUXTHDPSXWHRCKZXHEPOLVMBMCAWFMRBPQZBXNCVWCMCPRJCRWIGQVDLGDMGYQSTKBJBUDFKIZTUDJWOSFSTAKOMAOFPFZLWEUENHJPDUZIABFQZYXNLGBUYEEKOJQZXGRQVEACOSYTLBHGDRRNFECTVEIPYOH");
    msg.flags = 43U;
    const char tmp_msg_0[] = {99, 52, 9, 86, 123, -28, -55, 51, -33, 63, 52, -81, 106, 4, 60, 26, 43, -82, 38, -123, 46, 13, 102, -16, 92, 49, -51, -35, -4, -4, 30, -92, -51, 22, 109, 110, 10, 81};
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
    msg.setTimeStamp(0.426779169849);
    msg.setSource(49292U);
    msg.setSourceEntity(237U);
    msg.setDestination(16747U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.963215669936;
    msg.lon = 0.924453082898;
    msg.depth = 0.777228772802;
    msg.sentence.assign("CMGZDJVYJCQAPQLDKFSHTWRHQRXSRVZQBDIHGLBKEAJZUGJTAKFXWJGFUMMVPVEUIQXMTTXCSGYVUSVNYIOEANDEKUWEKIPDNFEOXNPSKZSIBYJWCQMXTWOUIILSBZKTBOYHEAJTIPVZLBFLZARYYOTHPRABCC");
    msg.txtime = 0.370618600362;
    msg.modem_type.assign("VOOEUVQIGFYTSMPYGAYDRGBSLOMHKOWIFBMNVLHEDJRCUCLKLQZJXQISWNIDGUKABEAHFKSPQAHUAJZJFKFHRVFFCUIWDYBJZQWRBPPWASADTNORNNNXUPAGARQTJESAEXVEUBXRLLYMTNTKYPQNVEKZVVZUJUTXKPNSPSJHWPFVGWGBOXMGEOETNWMQHVOTWYLGTZRDCDRIWKSGHLYMYXXEOHDMJMFYZCQKBXDCBZBUZ");
    msg.sys_src.assign("PIKUWLGETYIFALYKTCULMKZNJFPMYFXIESWOEMYXSDHHNXKDZVMUEPJENILUDGAQZQHZBCRNAZCDNDVYPNHTIDQTPROINNFBRWJLTOFUEOZFPKBKFXXCTHCEJMOKOHRSXUBJYQAMVVWBRRRAQGCXVETGTAAPLMBJXWHDFTLKDYOJVEFC");
    msg.seq = 32248U;
    msg.sys_dst.assign("CNJPLLMHUVGBYCXVMJSOQADRSVNNSRHIKGKYAOLPHCPITKECEYRKFFKUQHRHIWFXDKNHEYTLQRTWIUQCUQBPEBTISDJRASGAMZVNBVUDWHEYMKTIKSBSADITUCTQAODCTMTXMUFNMGQFMCWFLOTOOQWSQFOUZJEGZVJYQNZXFOGZXZZDUPRHWEPLNVVDKIABWBFEAYILMOLLYDIMGRRXNFJBXJNGEZLWHZJCAPXUCPRKXDJH");
    msg.flags = 189U;
    const char tmp_msg_0[] = {-110, 80, 125, -73, 102, 35, 27, -13, 2, -86, -104, 50, -41, 123, -98, -26, 42, -18, -72, 26, -119, 89, -82, 123, -43, 2, -10, 75, 118, -115, 87, -128, 34, 119, -59, 109, 28, 92, -46, 13, 64, 59, 125, -27, -69, -11, 27, -104, -117, -60, 90, -113, -34, -38, 37, -111, -88, -66, 62, -86, -86, -74, 51, -55, 77, 109, 51, 81, -28, -77, 63, -114, 77, -119, 12, -90, -79, -54, 5, -70, 60, -88, 45, -116, -56, 68, -68, 88, 48, -61, -55, 111, 52, 57, 109, 104, -82, -72, 70, 7, 83, -97, 21, 6, 14, 81, -78, -98, 31, 5, 54, 39, 22, -35, -126, -62, -114, 40, -87, -25, -29, -63, 79, -101, 94, -4, -62, 74, 13, -54, 6, 71, -6, 110, 25, -108, 57, -30, 26, -40, -19, 17, -99, 45, 47, 43, 48, 19, -4, 122, -15, -122, -82, 60, -113, -81, -63, -39, -119, -116, -103, -119, 82, 16, 81, -10, 26, 20, -3, 5, 69, -72, -43, -30, -6, 87, 112, 23, 46, 73, -114, -4, -25, -124, 61, 45, 53, 16, -124, -76, -36, -114, 66, -104, 59, 107, 7, 95, 72, 112, -73, 66, 67, -120, -39, -50, 28, -9, -30, 94, 37, -86, 41};
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
    msg.setTimeStamp(0.474388699576);
    msg.setSource(62023U);
    msg.setSourceEntity(188U);
    msg.setDestination(9681U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.914942882686;
    msg.lon = 0.960354264562;
    msg.depth = 0.391843821146;
    msg.sentence.assign("TMDJANMIKMWSGOKAMAYASNXQBUDIKTHACWWBLQVGUZLKQOUVCWFFZBFIOIBZRCNHNKLHJZWCWNGNRFNXKRTDOYJTLESXCTVEJQOUMTJGOAVKIDHFECHHYGYIIVUJARXPZIWEDLCPBDKROKUE");
    msg.txtime = 0.246946556908;
    msg.modem_type.assign("IPISNJSISSSFQABFMNQUHEQUHSXEKUXYYGZNQBRQYFPLHBJGJCRGXATZCFLDARNCNAMZWAYKCKJSXXCDEPDFVOFFWWNURGOWJCHJCLLPHEUOWWDTQOFUENRH");
    msg.sys_src.assign("CMOWNRJTLQZOLDAXHNDMORTHDECBKPVLFHRLVPESZXQEQLPJPSECDMFQIKBBYCNQIKNAYVVR");
    msg.seq = 16337U;
    msg.sys_dst.assign("GYZSTYESWOXKICFKRAFQACILIHXFTORMOSPHUVKEADOMFHRBIKLLWGTWDPPOXJZYSTUNXWVUSNWVCTLUAJBYJCMXEWEGGMUHEBRTJZDNVBCZPMUNBQDKZNWGLCDLLBTLJPOBNDTNEBSVUJKRHPRGSAYBQQVRJDCHPIGYXQQRQRYKPUHXKCIGPXJYZZONXQAEIC");
    msg.flags = 147U;
    const char tmp_msg_0[] = {-18, -109, -58, -111, 21, -70, -11, -14, 123, -46, 54, 82, -73, 125, 37, 27};
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
    msg.setTimeStamp(0.755925213562);
    msg.setSource(44876U);
    msg.setSourceEntity(222U);
    msg.setDestination(47258U);
    msg.setDestinationEntity(138U);
    msg.op = 235U;
    msg.system.assign("OLTFZFIIVBLINQZMQVWZBJZQPAFBCCHQIKGZYVRTCWKZPSAYJSGZJIGBDDOHKVHEMLVNJXSMWGXKXXRKJPOARIIAEDQGEBJKENSCBEXUABIKLZQWCMEDJWCFOGJRJTCSLSI");
    msg.range = 0.66041526121;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("ACIYATYRXFZIQBVZLGUMBHJIAODWFXQQUDRPJPVDWEGSZOUYYPNDTXWMMWZML");
    tmp_msg_0.lat = 0.491012361352;
    tmp_msg_0.lon = 0.659255275074;
    tmp_msg_0.z = 0.343073559644;
    tmp_msg_0.z_units = 142U;
    tmp_msg_0.cog = 0.206579679338;
    tmp_msg_0.sog = 0.13905763668;
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
    msg.setTimeStamp(0.222428357126);
    msg.setSource(59688U);
    msg.setSourceEntity(75U);
    msg.setDestination(20514U);
    msg.setDestinationEntity(94U);
    msg.op = 18U;
    msg.system.assign("HNONGAXAVNPRPHSSSYCADZCPUDLZYUDTAWWMDANCOZRBYXJZZWHKTZNTOKXFWRFUHQQRGDXKWLESKLVVATHHWYOTNWSJANVTFGWBDEQDTGWUZSEMSVDXBFHSOLGIXQAVHEGBWKICBIIHBKXCFKJCNIJKVETJUUQBFQSOFLIZRPRKYJOUZEJNOMLXOMYMYGVCICFRESRQGLXMMD");
    msg.range = 0.00287481441535;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.733953110174;
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
    msg.setTimeStamp(0.265959677346);
    msg.setSource(20922U);
    msg.setSourceEntity(179U);
    msg.setDestination(54510U);
    msg.setDestinationEntity(90U);
    msg.op = 133U;
    msg.system.assign("YTVZDCFPIOPPANYVPVEYHNAAJEUOSWGYFBGDURLUEUHGIJXCGXBMAZRVYUENSPOJOHGLFOJESTNRXVSZKKQIFVKGOKOEWZCSJKNPLLNCDZOHSDZXKJFEKZSWIMZAQIWBNEPXQNHKRUFFMJMVRTDFWQCASACTGYDHYTCXUHUTDBUNMIITQTIXOLTIYGPDZMRGAPLGKR");
    msg.range = 0.101726983496;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("DNERHXTAIMBCXEVSSMZIPCOZBUFGVSHVLBHJFGQBRFTKLDPMPDNLEJELHFAKYQFWKRLNJM");
    tmp_msg_0.dest_man.assign("QNOKHISPPTXXAGJTDXKRGMFXKSRV");
    tmp_msg_0.conditions.assign("CKENPQPKWWWMYWLRCTMIFYGNXRZZIJFUVOZVFPIUDGTFHNWLTMFBAEKQNKSZRGXXICACWSUJJDJEHHIXTGRCQHVHACYVQTKMJRMZEFPUGBUVRNQMHMSVMELOCTSXJDABLZEIPEKORYYUFVDBYNGBVDBHCBFPMRWHSAGTFJAIGBEJYKDXIONDOANXUUKSPOZQHZATEVLLJKK");
    IMC::Formation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.formation_name.assign("IFBCEXKNZJRDSKQAHRQNMTUXWBJUXVCPUAHWYGLL");
    tmp_tmp_msg_0_0.type = 28U;
    tmp_tmp_msg_0_0.op = 138U;
    tmp_tmp_msg_0_0.group_name.assign("TANPMXXOYMYSHEKLSVGTIMWPWGRFZPJITLQ");
    tmp_tmp_msg_0_0.plan_id.assign("ZUCXNYNILHOJABTJCCRRMLHIHADTZEGFRLYQDXNIGTJWORIVPKITJUYSDFAUIMBUKUMJYGOEARVCCIOXSFEDAXLTMNWJLZHUIAETQKJGZVYKXMQCWSEBVDISHWVPODXQUNYGJVGYMRPAXVBLPIPTTEX");
    tmp_tmp_msg_0_0.description.assign("VBAKWRVETZDDVYLCONVWFKJSGHWHPFYSJTAJXLBFDYJMCEOIQNMWZWUUIVWMPSTNZKMTYIZPXXKKYXRVSDBEUNACPGQEXOUDSALFJFJYXGPAHOGRBGTKEBQRRDWAVPRZJKXLTCYCZEIMWAFLOMLUHONQURRJNYGCCJHUDMZGMVIIK");
    tmp_tmp_msg_0_0.reference_frame = 247U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vid = 55413U;
    tmp_tmp_tmp_msg_0_0_0.off_x = 0.165535480847;
    tmp_tmp_tmp_msg_0_0_0.off_y = 0.190001946625;
    tmp_tmp_tmp_msg_0_0_0.off_z = 0.613003017726;
    tmp_tmp_msg_0_0.participants.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.leader_bank_lim = 0.418128974087;
    tmp_tmp_msg_0_0.leader_speed_min = 0.410072004148;
    tmp_tmp_msg_0_0.leader_speed_max = 0.391978633801;
    tmp_tmp_msg_0_0.leader_alt_min = 0.898549509672;
    tmp_tmp_msg_0_0.leader_alt_max = 0.0207536371634;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.291245348727;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.0441439454623;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 29127U;
    tmp_tmp_msg_0_0.converg_max = 0.71026350931;
    tmp_tmp_msg_0_0.converg_timeout = 17858U;
    tmp_tmp_msg_0_0.comms_timeout = 35909U;
    tmp_tmp_msg_0_0.turb_lim = 0.652702548125;
    tmp_tmp_msg_0_0.custom.assign("PGPUANNQIEJNTAJMNXKVWVGTUHYPYTSQSQIWDZUXKOCJDBKVJGAWNMEQMLFHYBIVSUKMENSZWGRFDXWZRKHFLJLCOLOWCHBVRHMTGCYYPPFALKXFN");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.759309802098);
    msg.setSource(5631U);
    msg.setSourceEntity(51U);
    msg.setDestination(52767U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.961990627199);
    msg.setSource(33478U);
    msg.setSourceEntity(172U);
    msg.setDestination(49130U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.596227624681);
    msg.setSource(3450U);
    msg.setSourceEntity(119U);
    msg.setDestination(45904U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.0183130066348);
    msg.setSource(10910U);
    msg.setSourceEntity(246U);
    msg.setDestination(15884U);
    msg.setDestinationEntity(172U);
    msg.list.assign("BIGTVYZOMSASHNPIIMOJHCAWZESSGCDMPCUPIWYRKYULRYKYQBAZYKQJTEZTJJTGNRNLUGFPCXOKVHKUNQOVCAOZOCJLMVYWDNACUJDBXAXFMWFWETIEQ");

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
    msg.setTimeStamp(0.170588437537);
    msg.setSource(59897U);
    msg.setSourceEntity(33U);
    msg.setDestination(29197U);
    msg.setDestinationEntity(119U);
    msg.list.assign("NWWUWVEYYSZJKTNBWDGFIAPFFBIOFJATWMWYQXKFWDHOQPKDDTPOMRCXFRZZJHEUPZRXLAQNVUSFMBZRZCPFMKCAEEIAXICSYHLGXQCNKLCTSUJKUNLPCHAZTQJILJGQMSTIYUBTYVKDBDDMLMEMUOSRAYBPBPEVYRVHGXKVVWRNCO");

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
    msg.setTimeStamp(0.785541096653);
    msg.setSource(37067U);
    msg.setSourceEntity(95U);
    msg.setDestination(61372U);
    msg.setDestinationEntity(42U);
    msg.list.assign("KFCGNIKPHDMMWTFJDLYHSBZTCXQSJXXFREUVOAYGUBTVRQEVZKGTNECTSMWPWLLILCJNLYPNJHYQUDNVXQOHVOSLUHGZVUIDBBMSLMIPDZYHRUFJPUNECCGIWMRWIXQOQBTSJRFOBJTXRQJZQVCZBYAGITCGXMAKUUPESHFPILBSNXKOWWOXLDQTKPWYERTAGCMAMRRZKBVGHCIQEKAJLYAPO");

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
    msg.setTimeStamp(0.45827249998);
    msg.setSource(61833U);
    msg.setSourceEntity(211U);
    msg.setDestination(36110U);
    msg.setDestinationEntity(61U);
    msg.peer.assign("UDQETCCVAIENDKCPYNLTFZTDXVPVHDVAHMYCOLRGPRFBOXRWOAMJAGWUIQRHEQQGGRXMXWBCVQZJXHIQFZIUHPOIMYJTDHEJXFENTSJWDRSYHXRYWPGFEEYOTBVIDLRVVPYJBOCLOAZWU");
    msg.rssi = 0.549511576067;
    msg.integrity = 21906U;

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
    msg.setTimeStamp(0.187077302248);
    msg.setSource(28858U);
    msg.setSourceEntity(243U);
    msg.setDestination(9275U);
    msg.setDestinationEntity(100U);
    msg.peer.assign("CVCHTTBPTRDWSLWKLCTRHMLWTFRUUBOPIVLDMMOGICKAFPYPKYQHDWMYPGBPIIZBZWPDCQSSRPGOWIUERZNXWJFCDBANODIGRUMFQEQNNNLMXDKQKDZOUFWGYJEWLJYCBSVPKZRBSSZQGHQNVAUZIYRDKAEXEDLUSFJIXXOATAMOENKKGXFEHSHIYPFVTOMLJVBVBJXCLZGQUZB");
    msg.rssi = 0.73138181946;
    msg.integrity = 14575U;

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
    msg.setTimeStamp(0.503038269859);
    msg.setSource(46417U);
    msg.setSourceEntity(201U);
    msg.setDestination(33719U);
    msg.setDestinationEntity(136U);
    msg.peer.assign("TSOPVUTYPL");
    msg.rssi = 0.440009116166;
    msg.integrity = 13575U;

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
    msg.setTimeStamp(0.291246820948);
    msg.setSource(36090U);
    msg.setSourceEntity(129U);
    msg.setDestination(32409U);
    msg.setDestinationEntity(119U);
    msg.req_id = 9430U;
    msg.destination.assign("PGGDQWVQHAPIBYTDYFOTBFBMRSHUPTZJXGBHGTPNJTWBUKDNIKNHCSKZTFIWWULJULXEVDFBMOWLVVURWCDJBQRPDQYMFCENLTTKOXCEWHEAHFOSRTBLFIHRYZESXJLWKNOSSYKL");
    msg.timeout = 0.280849509696;
    msg.range = 0.548284777392;
    msg.type = 77U;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 4019555714U;
    tmp_msg_0.destination.assign("EEWJVTAOBYRGPGDNFWQEJKIXIDTLPNOSQXCLTRVPYCXHJIGZFETTVZJSFNAPLJMVZQICUXNVEHBAXLDUFVCWMLKQCMZFAHGJDSOJIBBNWMTHSUTPRRHBBFCNJPXBANYCONDOQVUKTSIMQIYKYYPUFFPYLJKTBMGSEYKVEOSGWOCTASQNGJQOBOPPLERDGGIWIAZDWBYHKWHMXVDDYMEERNCUZXZUUXKLZMRKHCXMAUQHOILHDQRGVWRSZKUFA");
    tmp_msg_0.timeout = 55796U;
    const char tmp_tmp_msg_0_0[] = {31, -100, 63, -50, 45, 50, 1, -65, -94, 72, 64, -55, -46, 19, -52, 9, -42, 53, -58, 78, 21, -6, -76, -128, -109, -108, -54, -82, 91, 71, 123, -83, -105, 41, -13, 122, -41, -44, -101, 28, 17, -16, 52, -29, 49, 81, -75, -7, -8, 85, -25, 43, 57, 43, -113, -12, -54, -17, 113, 112, -91, 6, -37, -108, -117, -116, 104, -84, -15, 1, -49, 43, -125, 105, 42, -86, -24, -126, 8, -5, -28, -112, 13, -29, -58, -107, -92, 97, 112, 23, 21, -102, -75, 31, 99, -27, -119, 41, -59, 10, 43, 26, -50, -5, -62, -19, -7, 80, 75, 27, 112, 76, -81, 20, -36, -64, 44, -101, 30, 56, 16, 1, 41, -102, -110, -26, -41, 49, -65, -38, 64, -77, -97, -77, 102, -83, 123, 101, 67, 32, 4, -63, 39, 23, -84, 26, -6, 71, -57, 58, 20, -33, -90, -73, -96, -57, 54, 121, 1, 15, 120, -32, 48, 117, 126, 32, 99, 16, -108, 101, -71, 83, -26, 8, -119, -127, -104, -3, 123, -2, 101, 54, 100, -94, 85, 7, -108, -87, 116, -54, -63, -68, -28, -57, 115, -79, -11, -43, 64, -95, 63, 13, -33, -120, -9, -11, -66, 100, 83, -66, -19, 97, 54, 27, 100, -14, 93};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.0936597522005);
    msg.setSource(17810U);
    msg.setSourceEntity(120U);
    msg.setDestination(43763U);
    msg.setDestinationEntity(0U);
    msg.req_id = 28314U;
    msg.destination.assign("WZGLHZLXLGSKRERMMVAWGHBOFBDGMPEPTGWKMLSILIOZJTPKVOMEZQFUWNAYKGBCFFJMUT");
    msg.timeout = 0.720699040711;
    msg.range = 0.281526570099;
    msg.type = 156U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.361178008187;
    tmp_msg_0.lon = 0.453449220352;
    tmp_msg_0.z = 0.601903082123;
    tmp_msg_0.z_units = 209U;
    tmp_msg_0.radius = 0.88217481623;
    tmp_msg_0.duration = 479U;
    tmp_msg_0.speed = 0.646964990495;
    tmp_msg_0.speed_units = 53U;
    tmp_msg_0.custom.assign("NDUUQKMGTEYRMGIXHJBDQVRZSREITYWCNSDNOSJZIFZOTZVYTANNCITZCKPODCFMDOCYDLUHLPVLKUFKHNVEYWXJADJOVSRJWXBCXLJXAFBMTYVPEIBSJSMCUHMJXISEMNKGLWJFLWYRRLYZGZSBPWRTFVHBCXQULHEGKBNNGPCIFDIXQQUZHXRUHBZGSPDZHAE");
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
    msg.setTimeStamp(0.344394872534);
    msg.setSource(19797U);
    msg.setSourceEntity(10U);
    msg.setDestination(48494U);
    msg.setDestinationEntity(225U);
    msg.req_id = 7001U;
    msg.destination.assign("NJFQJLAJPPYYOCUWNWTSYRLBLKBMFTTKBQZZCAGHNZRSYPNKIESRWBGYPTEPXULPEIDVJVCLLQUQZTEMQEDSQHROOAIRQDWKDQHAVZSUSOOCFCDCNEMRTCUGPFGXLSKSCOZ");
    msg.timeout = 0.0796325471244;
    msg.range = 0.630630066496;
    msg.type = 159U;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 105U;
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NNDGRMRJNTKKOUECZSRCQHZCLNRKHOXAAUNWHMARHQFEETPTMFMVYJBBQGESOQZQWHJDJUFMXDIOUEJBRDKESPDPFEZVLRTYZUFVOYOXUSWSJTHNSZICGJDGKXFPHMNYG");
    tmp_tmp_msg_0_0.lat = 0.972451130699;
    tmp_tmp_msg_0_0.lon = 0.360829988965;
    tmp_tmp_msg_0_0.z = 0.64496536814;
    tmp_tmp_msg_0_0.z_units = 214U;
    tmp_msg_0.modems.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.716829218331);
    msg.setSource(28494U);
    msg.setSourceEntity(152U);
    msg.setDestination(43420U);
    msg.setDestinationEntity(155U);
    msg.req_id = 61831U;
    msg.type = 36U;
    msg.status = 83U;
    msg.info.assign("EGWRPAFTJMUIKZGWZNOJMCBAPUUYSWVDKZUWZBYISEFPHQDGHFBKBXLHWLGJIYDUNBSOPNBJSTPXEFNXVMWOKGTNFVNJLWTBIPLRJAVKAHVAOEPXLSCCSGHUWFIYMSBYKQRAVCIDOKAYZRLQMYRPFBGLDMLGHDEKLMJERDTCHWHTPMYQEDOXXXRJFOVCNJVWTZIQJQXURMRCTCHECEMAYOGDTAIORGXUVTSOZSUNCFZIQQAPIXQ");
    msg.range = 0.0267407523534;

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
    msg.setTimeStamp(0.647679080823);
    msg.setSource(346U);
    msg.setSourceEntity(48U);
    msg.setDestination(19469U);
    msg.setDestinationEntity(130U);
    msg.req_id = 52879U;
    msg.type = 96U;
    msg.status = 22U;
    msg.info.assign("XOGADNZNXYKGMYBMZDCJWLWDHAXEUOEHHFNOQSETPXHKUMRYBGMKOPWTGJZSWFLQSSKNMDPXGGUSQXEVZEVIJWWWNVICFVCJFRUSMAGJSYTNCFLCPBMTDVUPQITJGLOKRMLVWNTHZPHFOBLOFVHZRGCIRDZLQXAYXNBICKENPOIASOMIRUXYDJWVUVKQIABDTVR");
    msg.range = 0.287937705029;

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
    msg.setTimeStamp(0.0369173123102);
    msg.setSource(16941U);
    msg.setSourceEntity(49U);
    msg.setDestination(27794U);
    msg.setDestinationEntity(73U);
    msg.req_id = 4510U;
    msg.type = 195U;
    msg.status = 210U;
    msg.info.assign("QOAJRLYLKITMKIUISBPVYPFIKVZGZAJWVUGKBBQJQCDZUGLUZBHKGDTSNJROMERQEFTPUXTFOEICGBRPXXQCBQRNDZQCYJLADOQSZNWWXGBUZWYSFZFYDNHFMMMOFNHRSTEAUMGDGBVBAZJCFHEVONUBVUGLHCKVWHSKPSIENJMCRZWPJLFLSYPXTWNTRTPVAHFSNWPAHDILYNXRCJVHKMOEWTIXJADWODHCGLRXIUXQOKIXQOKV");
    msg.range = 0.717420657938;

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
    msg.setTimeStamp(0.610334859074);
    msg.setSource(48867U);
    msg.setSourceEntity(41U);
    msg.setDestination(19579U);
    msg.setDestinationEntity(27U);
    msg.value = 11226;

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
    msg.setTimeStamp(0.158802470232);
    msg.setSource(30968U);
    msg.setSourceEntity(65U);
    msg.setDestination(12879U);
    msg.setDestinationEntity(84U);
    msg.value = 330;

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
    msg.setTimeStamp(0.948436288992);
    msg.setSource(52149U);
    msg.setSourceEntity(21U);
    msg.setDestination(47081U);
    msg.setDestinationEntity(51U);
    msg.value = -12079;

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
    msg.setTimeStamp(0.123321060942);
    msg.setSource(58223U);
    msg.setSourceEntity(212U);
    msg.setDestination(17588U);
    msg.setDestinationEntity(96U);
    msg.value = 0.86583270287;

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
    msg.setTimeStamp(0.0860842067107);
    msg.setSource(12816U);
    msg.setSourceEntity(36U);
    msg.setDestination(54693U);
    msg.setDestinationEntity(208U);
    msg.value = 0.0759593139582;

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
    msg.setTimeStamp(0.220365329732);
    msg.setSource(47662U);
    msg.setSourceEntity(241U);
    msg.setDestination(39688U);
    msg.setDestinationEntity(78U);
    msg.value = 0.13377630201;

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
    msg.setTimeStamp(0.965721041824);
    msg.setSource(39666U);
    msg.setSourceEntity(208U);
    msg.setDestination(3554U);
    msg.setDestinationEntity(93U);
    msg.value = 0.786182587578;

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
    msg.setTimeStamp(0.398521022056);
    msg.setSource(28071U);
    msg.setSourceEntity(239U);
    msg.setDestination(27846U);
    msg.setDestinationEntity(47U);
    msg.value = 0.836417398868;

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
    msg.setTimeStamp(0.90997164401);
    msg.setSource(15511U);
    msg.setSourceEntity(165U);
    msg.setDestination(33684U);
    msg.setDestinationEntity(58U);
    msg.value = 0.317529127384;

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
    msg.setTimeStamp(0.293910721518);
    msg.setSource(37629U);
    msg.setSourceEntity(236U);
    msg.setDestination(33593U);
    msg.setDestinationEntity(132U);
    msg.validity = 62982U;
    msg.type = 231U;
    msg.utc_year = 40012U;
    msg.utc_month = 250U;
    msg.utc_day = 56U;
    msg.utc_time = 0.0882763246815;
    msg.lat = 0.680075123305;
    msg.lon = 0.410272042796;
    msg.height = 0.0152080909561;
    msg.satellites = 27U;
    msg.cog = 0.603909692135;
    msg.sog = 0.213641379791;
    msg.hdop = 0.00892894992874;
    msg.vdop = 0.330229498962;
    msg.hacc = 0.691367568808;
    msg.vacc = 0.409992043991;

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
    msg.setTimeStamp(0.174686053182);
    msg.setSource(24840U);
    msg.setSourceEntity(6U);
    msg.setDestination(41552U);
    msg.setDestinationEntity(243U);
    msg.validity = 41479U;
    msg.type = 179U;
    msg.utc_year = 18652U;
    msg.utc_month = 60U;
    msg.utc_day = 5U;
    msg.utc_time = 0.356298881307;
    msg.lat = 0.848196699465;
    msg.lon = 0.892632734635;
    msg.height = 0.861731404843;
    msg.satellites = 55U;
    msg.cog = 0.0339095996622;
    msg.sog = 0.050551734904;
    msg.hdop = 0.972596250116;
    msg.vdop = 0.416469124534;
    msg.hacc = 0.89240018564;
    msg.vacc = 0.908428680691;

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
    msg.setTimeStamp(0.210969258637);
    msg.setSource(60727U);
    msg.setSourceEntity(111U);
    msg.setDestination(52916U);
    msg.setDestinationEntity(21U);
    msg.validity = 56335U;
    msg.type = 147U;
    msg.utc_year = 19634U;
    msg.utc_month = 109U;
    msg.utc_day = 12U;
    msg.utc_time = 0.640632244308;
    msg.lat = 0.383345680336;
    msg.lon = 0.264679321847;
    msg.height = 0.188222690489;
    msg.satellites = 243U;
    msg.cog = 0.590192148594;
    msg.sog = 0.408095554491;
    msg.hdop = 0.346079155164;
    msg.vdop = 0.0311449154355;
    msg.hacc = 0.291321733956;
    msg.vacc = 0.754625065571;

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
    msg.setTimeStamp(0.0234061383848);
    msg.setSource(53658U);
    msg.setSourceEntity(162U);
    msg.setDestination(57885U);
    msg.setDestinationEntity(41U);
    msg.time = 0.239284401806;
    msg.phi = 0.512727085713;
    msg.theta = 0.876964832203;
    msg.psi = 0.698518336637;
    msg.psi_magnetic = 0.0995649994547;

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
    msg.setTimeStamp(0.713585192538);
    msg.setSource(47053U);
    msg.setSourceEntity(201U);
    msg.setDestination(3336U);
    msg.setDestinationEntity(173U);
    msg.time = 0.940104995832;
    msg.phi = 0.611934807889;
    msg.theta = 0.238607899392;
    msg.psi = 0.446026129244;
    msg.psi_magnetic = 0.619178535729;

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
    msg.setTimeStamp(0.842231538671);
    msg.setSource(16620U);
    msg.setSourceEntity(192U);
    msg.setDestination(47884U);
    msg.setDestinationEntity(202U);
    msg.time = 0.117693487915;
    msg.phi = 0.482845483938;
    msg.theta = 0.857446845545;
    msg.psi = 0.398880280533;
    msg.psi_magnetic = 0.456611187298;

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
    msg.setTimeStamp(0.719777372128);
    msg.setSource(32568U);
    msg.setSourceEntity(211U);
    msg.setDestination(43810U);
    msg.setDestinationEntity(134U);
    msg.time = 0.687377401412;
    msg.x = 0.81486818967;
    msg.y = 0.317423497072;
    msg.z = 0.653696215552;
    msg.timestep = 0.855505647525;

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
    msg.setTimeStamp(0.0565474663826);
    msg.setSource(43519U);
    msg.setSourceEntity(201U);
    msg.setDestination(43453U);
    msg.setDestinationEntity(118U);
    msg.time = 0.598685051874;
    msg.x = 0.139438473562;
    msg.y = 0.652292259094;
    msg.z = 0.933005003402;
    msg.timestep = 0.335734316829;

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
    msg.setTimeStamp(0.177244288153);
    msg.setSource(62528U);
    msg.setSourceEntity(77U);
    msg.setDestination(59464U);
    msg.setDestinationEntity(215U);
    msg.time = 0.311500459988;
    msg.x = 0.00878138847047;
    msg.y = 0.0136090649018;
    msg.z = 0.466641926132;
    msg.timestep = 0.248449963187;

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
    msg.setTimeStamp(0.661909652157);
    msg.setSource(1989U);
    msg.setSourceEntity(201U);
    msg.setDestination(15420U);
    msg.setDestinationEntity(138U);
    msg.time = 0.184010616184;
    msg.x = 0.715630239718;
    msg.y = 0.72940856564;
    msg.z = 0.928247801897;

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
    msg.setTimeStamp(0.478038145511);
    msg.setSource(5790U);
    msg.setSourceEntity(187U);
    msg.setDestination(46939U);
    msg.setDestinationEntity(221U);
    msg.time = 0.423054410587;
    msg.x = 0.259138147622;
    msg.y = 0.299546788819;
    msg.z = 0.757992399709;

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
    msg.setTimeStamp(0.219290610339);
    msg.setSource(47024U);
    msg.setSourceEntity(153U);
    msg.setDestination(12494U);
    msg.setDestinationEntity(6U);
    msg.time = 0.207795908219;
    msg.x = 0.0228325265397;
    msg.y = 0.335794157464;
    msg.z = 0.711058596081;

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
    msg.setTimeStamp(0.17124884802);
    msg.setSource(49090U);
    msg.setSourceEntity(137U);
    msg.setDestination(60736U);
    msg.setDestinationEntity(196U);
    msg.time = 0.707592279534;
    msg.x = 0.301730523685;
    msg.y = 0.350108016654;
    msg.z = 0.453229219878;

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
    msg.setTimeStamp(0.191108156007);
    msg.setSource(44406U);
    msg.setSourceEntity(114U);
    msg.setDestination(42893U);
    msg.setDestinationEntity(177U);
    msg.time = 0.947740170943;
    msg.x = 0.776971154467;
    msg.y = 0.63866522928;
    msg.z = 0.664128318013;

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
    msg.setTimeStamp(0.790340343694);
    msg.setSource(24700U);
    msg.setSourceEntity(101U);
    msg.setDestination(9511U);
    msg.setDestinationEntity(176U);
    msg.time = 0.679770681422;
    msg.x = 0.49620809912;
    msg.y = 0.0140064133579;
    msg.z = 0.992271883508;

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
    msg.setTimeStamp(0.652137945443);
    msg.setSource(54117U);
    msg.setSourceEntity(115U);
    msg.setDestination(65037U);
    msg.setDestinationEntity(120U);
    msg.time = 0.883863393245;
    msg.x = 0.078093506816;
    msg.y = 0.938011337512;
    msg.z = 0.252723158063;

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
    msg.setTimeStamp(0.64872157521);
    msg.setSource(37021U);
    msg.setSourceEntity(178U);
    msg.setDestination(1931U);
    msg.setDestinationEntity(220U);
    msg.time = 0.929474420643;
    msg.x = 0.726706021761;
    msg.y = 0.4685748483;
    msg.z = 0.00230295073453;

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
    msg.setTimeStamp(0.6690224247);
    msg.setSource(31524U);
    msg.setSourceEntity(219U);
    msg.setDestination(35697U);
    msg.setDestinationEntity(48U);
    msg.time = 0.757894750954;
    msg.x = 0.129304433444;
    msg.y = 0.953832566596;
    msg.z = 0.994475644266;

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
    msg.setTimeStamp(0.273427720031);
    msg.setSource(41053U);
    msg.setSourceEntity(25U);
    msg.setDestination(23461U);
    msg.setDestinationEntity(95U);
    msg.validity = 65U;
    msg.x = 0.85143716966;
    msg.y = 0.959264411466;
    msg.z = 0.688608081518;

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
    msg.setTimeStamp(0.743901116008);
    msg.setSource(56449U);
    msg.setSourceEntity(82U);
    msg.setDestination(27712U);
    msg.setDestinationEntity(92U);
    msg.validity = 219U;
    msg.x = 0.887394067675;
    msg.y = 0.247058238838;
    msg.z = 0.188361727552;

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
    msg.setTimeStamp(0.552331666571);
    msg.setSource(32083U);
    msg.setSourceEntity(140U);
    msg.setDestination(15785U);
    msg.setDestinationEntity(61U);
    msg.validity = 103U;
    msg.x = 0.655839765687;
    msg.y = 0.568051132342;
    msg.z = 0.199173955357;

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
    msg.setTimeStamp(0.12271672521);
    msg.setSource(29488U);
    msg.setSourceEntity(196U);
    msg.setDestination(17537U);
    msg.setDestinationEntity(186U);
    msg.validity = 108U;
    msg.x = 0.139087762933;
    msg.y = 0.47683352069;
    msg.z = 0.447409388653;

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
    msg.setTimeStamp(0.350328471596);
    msg.setSource(37004U);
    msg.setSourceEntity(168U);
    msg.setDestination(17509U);
    msg.setDestinationEntity(238U);
    msg.validity = 85U;
    msg.x = 0.986439769884;
    msg.y = 0.694831526581;
    msg.z = 0.962569047976;

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
    msg.setTimeStamp(0.727623080503);
    msg.setSource(48040U);
    msg.setSourceEntity(92U);
    msg.setDestination(30740U);
    msg.setDestinationEntity(49U);
    msg.validity = 228U;
    msg.x = 0.752105461198;
    msg.y = 0.649756230384;
    msg.z = 0.00860884446679;

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
    msg.setTimeStamp(0.555812629613);
    msg.setSource(19558U);
    msg.setSourceEntity(188U);
    msg.setDestination(52200U);
    msg.setDestinationEntity(93U);
    msg.time = 0.247672934049;
    msg.x = 0.673827045055;
    msg.y = 0.444227817231;
    msg.z = 0.614985866613;

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
    msg.setTimeStamp(0.0389119546528);
    msg.setSource(16466U);
    msg.setSourceEntity(145U);
    msg.setDestination(1022U);
    msg.setDestinationEntity(228U);
    msg.time = 0.722497122734;
    msg.x = 0.871496317511;
    msg.y = 0.276852010601;
    msg.z = 0.496261886983;

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
    msg.setTimeStamp(0.739873451849);
    msg.setSource(53860U);
    msg.setSourceEntity(88U);
    msg.setDestination(31669U);
    msg.setDestinationEntity(61U);
    msg.time = 0.505561617364;
    msg.x = 0.301274309422;
    msg.y = 0.737345781902;
    msg.z = 0.827103632397;

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
    msg.setTimeStamp(0.214042309099);
    msg.setSource(23240U);
    msg.setSourceEntity(185U);
    msg.setDestination(6273U);
    msg.setDestinationEntity(153U);
    msg.validity = 249U;
    msg.value = 0.151131327986;

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
    msg.setTimeStamp(0.738730792724);
    msg.setSource(43553U);
    msg.setSourceEntity(23U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(23U);
    msg.validity = 74U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.341843891073;
    tmp_msg_0.y = 0.794821971037;
    tmp_msg_0.z = 0.185132803658;
    tmp_msg_0.phi = 0.089824474145;
    tmp_msg_0.theta = 0.519373733619;
    tmp_msg_0.psi = 0.44828493963;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.225873416532;

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
    msg.setTimeStamp(0.950752766547);
    msg.setSource(11284U);
    msg.setSourceEntity(224U);
    msg.setDestination(6298U);
    msg.setDestinationEntity(27U);
    msg.validity = 175U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.285425801718;
    tmp_msg_0.y = 0.932548435439;
    tmp_msg_0.z = 0.909866637359;
    tmp_msg_0.phi = 0.32520573828;
    tmp_msg_0.theta = 0.23914116005;
    tmp_msg_0.psi = 0.915484797506;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.701802862253;
    tmp_msg_1.beam_height = 0.458092635236;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.757517369363;

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
    msg.setTimeStamp(0.455594900546);
    msg.setSource(4195U);
    msg.setSourceEntity(164U);
    msg.setDestination(16513U);
    msg.setDestinationEntity(90U);
    msg.value = 0.930000164864;

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
    msg.setTimeStamp(0.340601111644);
    msg.setSource(28381U);
    msg.setSourceEntity(160U);
    msg.setDestination(24097U);
    msg.setDestinationEntity(140U);
    msg.value = 0.446772483347;

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
    msg.setTimeStamp(0.645590130694);
    msg.setSource(23962U);
    msg.setSourceEntity(172U);
    msg.setDestination(30167U);
    msg.setDestinationEntity(41U);
    msg.value = 0.485942304564;

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
    msg.setTimeStamp(0.807430817025);
    msg.setSource(30198U);
    msg.setSourceEntity(239U);
    msg.setDestination(18635U);
    msg.setDestinationEntity(97U);
    msg.value = 0.41235443126;

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
    msg.setTimeStamp(0.11026493139);
    msg.setSource(23077U);
    msg.setSourceEntity(227U);
    msg.setDestination(54230U);
    msg.setDestinationEntity(161U);
    msg.value = 0.00216053342452;

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
    msg.setTimeStamp(0.117283264991);
    msg.setSource(27989U);
    msg.setSourceEntity(108U);
    msg.setDestination(27423U);
    msg.setDestinationEntity(18U);
    msg.value = 0.863066746282;

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
    msg.setTimeStamp(0.903536795894);
    msg.setSource(31132U);
    msg.setSourceEntity(30U);
    msg.setDestination(21486U);
    msg.setDestinationEntity(102U);
    msg.value = 0.67404915989;

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
    msg.setTimeStamp(0.0330515522494);
    msg.setSource(27504U);
    msg.setSourceEntity(71U);
    msg.setDestination(37104U);
    msg.setDestinationEntity(6U);
    msg.value = 0.27778775189;

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
    msg.setTimeStamp(0.277921084269);
    msg.setSource(46015U);
    msg.setSourceEntity(80U);
    msg.setDestination(29200U);
    msg.setDestinationEntity(128U);
    msg.value = 0.669502961494;

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
    msg.setTimeStamp(0.206898801974);
    msg.setSource(49284U);
    msg.setSourceEntity(203U);
    msg.setDestination(1487U);
    msg.setDestinationEntity(206U);
    msg.value = 0.282129552663;

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
    msg.setTimeStamp(0.649840817523);
    msg.setSource(57491U);
    msg.setSourceEntity(152U);
    msg.setDestination(26880U);
    msg.setDestinationEntity(197U);
    msg.value = 0.155409984597;

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
    msg.setTimeStamp(0.743034375747);
    msg.setSource(24882U);
    msg.setSourceEntity(142U);
    msg.setDestination(11707U);
    msg.setDestinationEntity(135U);
    msg.value = 0.384414762931;

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
    msg.setTimeStamp(0.348224110564);
    msg.setSource(62222U);
    msg.setSourceEntity(245U);
    msg.setDestination(1031U);
    msg.setDestinationEntity(125U);
    msg.value = 0.983960017014;

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
    msg.setTimeStamp(0.891240385057);
    msg.setSource(13722U);
    msg.setSourceEntity(76U);
    msg.setDestination(5132U);
    msg.setDestinationEntity(131U);
    msg.value = 0.692894960663;

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
    msg.setTimeStamp(0.648535324729);
    msg.setSource(59065U);
    msg.setSourceEntity(49U);
    msg.setDestination(13377U);
    msg.setDestinationEntity(22U);
    msg.value = 0.573899230526;

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
    msg.setTimeStamp(0.599192719587);
    msg.setSource(49297U);
    msg.setSourceEntity(97U);
    msg.setDestination(14396U);
    msg.setDestinationEntity(59U);
    msg.value = 0.177708492233;

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
    msg.setTimeStamp(0.664611822488);
    msg.setSource(59370U);
    msg.setSourceEntity(101U);
    msg.setDestination(11327U);
    msg.setDestinationEntity(216U);
    msg.value = 0.0526423132779;

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
    msg.setTimeStamp(0.554709936293);
    msg.setSource(49588U);
    msg.setSourceEntity(175U);
    msg.setDestination(27596U);
    msg.setDestinationEntity(219U);
    msg.value = 0.049889917701;

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
    msg.setTimeStamp(0.140934291343);
    msg.setSource(54861U);
    msg.setSourceEntity(108U);
    msg.setDestination(8832U);
    msg.setDestinationEntity(91U);
    msg.value = 0.896425702985;

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
    msg.setTimeStamp(0.168691506678);
    msg.setSource(9099U);
    msg.setSourceEntity(80U);
    msg.setDestination(49699U);
    msg.setDestinationEntity(106U);
    msg.value = 0.805956312458;

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
    msg.setTimeStamp(0.211868651112);
    msg.setSource(34104U);
    msg.setSourceEntity(8U);
    msg.setDestination(24565U);
    msg.setDestinationEntity(78U);
    msg.value = 0.251960812796;

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
    msg.setTimeStamp(0.50463813855);
    msg.setSource(52447U);
    msg.setSourceEntity(53U);
    msg.setDestination(51390U);
    msg.setDestinationEntity(226U);
    msg.value = 0.499732481107;

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
    msg.setTimeStamp(0.305595509116);
    msg.setSource(8964U);
    msg.setSourceEntity(159U);
    msg.setDestination(30964U);
    msg.setDestinationEntity(139U);
    msg.value = 0.156504486715;

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
    msg.setTimeStamp(0.829783505651);
    msg.setSource(56458U);
    msg.setSourceEntity(169U);
    msg.setDestination(63773U);
    msg.setDestinationEntity(71U);
    msg.value = 0.148376561976;

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
    msg.setTimeStamp(0.589774508173);
    msg.setSource(9109U);
    msg.setSourceEntity(45U);
    msg.setDestination(7435U);
    msg.setDestinationEntity(217U);
    msg.direction = 0.48027225756;
    msg.speed = 0.304309772738;
    msg.turbulence = 0.0695851143046;

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
    msg.setTimeStamp(0.0157288890271);
    msg.setSource(37635U);
    msg.setSourceEntity(48U);
    msg.setDestination(35800U);
    msg.setDestinationEntity(84U);
    msg.direction = 0.661642557508;
    msg.speed = 0.0925415650727;
    msg.turbulence = 0.130464541774;

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
    msg.setTimeStamp(0.579479306526);
    msg.setSource(61663U);
    msg.setSourceEntity(71U);
    msg.setDestination(18152U);
    msg.setDestinationEntity(21U);
    msg.direction = 0.80250518346;
    msg.speed = 0.382942128749;
    msg.turbulence = 0.066836282006;

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
    msg.setTimeStamp(0.012149855027);
    msg.setSource(45682U);
    msg.setSourceEntity(19U);
    msg.setDestination(58600U);
    msg.setDestinationEntity(179U);
    msg.value = 0.936807481703;

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
    msg.setTimeStamp(0.499633938185);
    msg.setSource(9551U);
    msg.setSourceEntity(246U);
    msg.setDestination(50273U);
    msg.setDestinationEntity(65U);
    msg.value = 0.917657957163;

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
    msg.setTimeStamp(0.966510965699);
    msg.setSource(20753U);
    msg.setSourceEntity(143U);
    msg.setDestination(6457U);
    msg.setDestinationEntity(252U);
    msg.value = 0.843839918693;

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
    msg.setTimeStamp(0.750195432274);
    msg.setSource(6098U);
    msg.setSourceEntity(69U);
    msg.setDestination(20993U);
    msg.setDestinationEntity(86U);
    msg.value.assign("VTZVJIKGDIKCGKTLRPIPUEOATRVSVAGQTFFLPOUAWODVITDABPEQOJ");

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
    msg.setTimeStamp(0.875675445981);
    msg.setSource(49037U);
    msg.setSourceEntity(79U);
    msg.setDestination(436U);
    msg.setDestinationEntity(68U);
    msg.value.assign("RRJXWAKVYKWVKIHMXQCEROFBEUZHRJLNRGBYVHTJTFILZLBWYJORGAIQEEIGZOYQMFTYNLLQDVM");

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
    msg.setTimeStamp(0.565687528394);
    msg.setSource(33795U);
    msg.setSourceEntity(132U);
    msg.setDestination(23305U);
    msg.setDestinationEntity(162U);
    msg.value.assign("XPUITEQLUYTPQTCEMCPWWZGSOMNMCNIRQJFWOUFMLBZSXBIUSVVWUFKPFDOAVIRZWYKDYGCUCADSVUQJILHZHZRVSCTLSTPSXQSGFTSLSMTPVTFRPRTVAAHBJHEHUYYKIXPRCCIUZVDBDEQHMKOYLJBAOEEMQHXGCIWALGHXRMZYOKNENMNENGBXBFBYZZIJGN");

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
    msg.setTimeStamp(0.943692973513);
    msg.setSource(56346U);
    msg.setSourceEntity(185U);
    msg.setDestination(22204U);
    msg.setDestinationEntity(221U);
    const char tmp_msg_0[] = {9, 126, -121, 121, 109, -118, -100, -99, 71, 23, -6, -79, -119, -53, 13, 94, 120, 106, 34, -27, -50, 49, 86, 109, -128, 93, -127, 79, -60, -29, 55, -39, 83, -93, 105, -40, 69, -105, 7, 68, 74, -69, -20, 42, 51, 94, -68, 47, 61, 87, 26, -33, 22, 84, -5, 112, 5, 2, -19, -115, 124, 45, 23, -22, 60, -32, -14, 42, 71, -100, -102, 8, 98, -117, 112, -6, 110, 43, 53, -99, 67, -37, 116};
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
    msg.setTimeStamp(0.871113995587);
    msg.setSource(35705U);
    msg.setSourceEntity(52U);
    msg.setDestination(35856U);
    msg.setDestinationEntity(179U);
    const char tmp_msg_0[] = {-111, 19, -94, 48, -24, -10, 12, -79, -12, 8, -75, -75, -65, 112, 62, 60, -128, -31, 87, 24, -28, -94, 34, 9, 35, -28, -23, 33, 85, 81, 80, -74, -101, 95, -40, 75, 28, 34, 75, 46, 118, -15, -27, 41, 33, -122, -40, 60, -9, -86, -82, 33, -20, -124, 69, -73, 13, -10, -115, -18};
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
    msg.setTimeStamp(0.898416812671);
    msg.setSource(35495U);
    msg.setSourceEntity(199U);
    msg.setDestination(24538U);
    msg.setDestinationEntity(137U);
    const char tmp_msg_0[] = {-116, -15, -63, -124, 48, 111, 111, 109, 95, 82, -31, 97, -18, 47, 4, 20, -119, 111, -28, -63, 33, -48, -90, 73, -80, -29, -47, -18, 78, -118, 58, 0, -34, -44, 58, -95, -98, -115, -6, -28, -31, -54, -30, 71, -112, -24, 30, 29, 28, -76, -41, 26, -59, -60, 50, -126, -119, 70, -17, 16, -66, -25, 113, -86, -71, 44, 114, -104, -28, -55, 83, 91, -16, 108, -10, 72, -41, -47, 123, 33, -35, -48, -51, 20, 15, -3, -24, -105, -79, -115, -8, -97, 43, 47, -112, 19, -102, 117, -38, -30, -49, -41, 41, 63, -38, 87, 32, 18, 102, -69, 35, -121, -80, -108, -18, 40, -108, 21, -15, -81, 51, -86, 62, -113, -99, 8, -93, -123, -120, 37, 11, -114, -20, 114, -85, -68, -123, -112, 91, -11, -53, -110, -110, -23, 58, 4, 121, 95, 25, 74, -112, -95, -60, 49, -109, -80, -35, -107, 58, -63, 72, 48, 21, 122, 72, 46, -97, 60, -124, -95, 87, -128, -2, 28, -107, -53, -32, 38, -125, 105, -53, 59, -37, -52, 27, 46, -18, -18, -123, -4, -47, -37, 104, 23, 30, -29, -60, 93, -23, 94, 103, 100, -62, 87, -31, -57, -11, -122, 108, 13, 92, -114, 103, 23, -100, 3, 113, 103, -124, 37, -56, -78, 11, -104, 2, -76, 32, -35, -103, 67, 57, -39, 53, 36, 52, -31, -32, -76, -128, 58, -34, -17, 126, -11};
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
    msg.setTimeStamp(0.116321104516);
    msg.setSource(36921U);
    msg.setSourceEntity(228U);
    msg.setDestination(5391U);
    msg.setDestinationEntity(153U);
    msg.value = 0.271838411678;

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
    msg.setTimeStamp(0.559158912029);
    msg.setSource(15050U);
    msg.setSourceEntity(215U);
    msg.setDestination(63159U);
    msg.setDestinationEntity(200U);
    msg.value = 0.549160155132;

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
    msg.setTimeStamp(0.231337274395);
    msg.setSource(39268U);
    msg.setSourceEntity(152U);
    msg.setDestination(30699U);
    msg.setDestinationEntity(56U);
    msg.value = 0.00802016373654;

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
    msg.setTimeStamp(0.942270311035);
    msg.setSource(5666U);
    msg.setSourceEntity(78U);
    msg.setDestination(41457U);
    msg.setDestinationEntity(224U);
    msg.type = 247U;
    msg.frequency = 3022226453U;
    msg.min_range = 54114U;
    msg.max_range = 3135U;
    msg.bits_per_point = 193U;
    msg.scale_factor = 0.964761201575;
    const char tmp_msg_0[] = {-28, -92, -106, -14, 34, -6, -121, 47, -35, -62, -28, 62, 105, 94, -24, 6, -82, 38, -29, -9, 34, 122, -71, -28, -70, -11, -97, -32, -105, -116, -29, 59, 26, 8, -41, 112, 90, 101, 54, -95, 123, 40, -66, -48, -1, 100, -7, -71, -7, 58, -103, -41, -93, -75, 62, -62, 109, 59, 117, -110, -92, -69, 43, -39, 100, 43, -72, -104, 24, 59, 41, 34, -83, -61, 113, -103, 48, 109, 27, -76, -94, -48, -47, -19, 9, -44, -23, 76, 54, 39, -89, -28, -116, 109, 86, -66, 50, 64, 66, -66, 103, 45, -111, 100, 104, 98, -116, 40, -36, 77, -93, 40, -63, 57, -49, -2, -49, -120, -60, 87, 79, -122, 124, -19, 9, 21, 71, -94, 73, 74, -12};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.914862680811);
    msg.setSource(31603U);
    msg.setSourceEntity(80U);
    msg.setDestination(29747U);
    msg.setDestinationEntity(9U);
    msg.type = 175U;
    msg.frequency = 1541489020U;
    msg.min_range = 16915U;
    msg.max_range = 53746U;
    msg.bits_per_point = 121U;
    msg.scale_factor = 0.399842975345;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.380242956035;
    tmp_msg_0.beam_height = 0.282539172126;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-121, 103, -33, 35, -22, 42, -63, -105, 35, -48, 33, -128, -78, 0, -6, -102, 37, 103, 122, 37, -112, 10, -35, -7, -99, 34, 121, 55, 120, -77, -4, -6, 105, -92, -27, 43, 15, -98, 42, 5, -20, 36, -41, 26, 9, 61, -102, 28, -103, 122, -24, 79, -18, -81, 68, 3, 90, 121, 100, 66, 114, 105, 5, 89, 93, -49, 93, 67, -90, 58, -54, -123, -87, 77, 3, 112, -86, 7, 3, 11, -54, 6, -122, 111, 15, 75, 12, 61, 77, 23, -25, -82, -60, 12, 119, 18, 53, -95, 120, 86, 17, -63, -105, 97, 68, -92, -39, 52, 49, 84, 2, -37, -6, -69, -39, -5, -1, 71, 28, 8, -107, 85, 12, -55, 80, 77, -108, -107, -99, 81, -3, -55, -38, -106, -15, -32, -80, 96, -84, 88, -40, -123, 24, -125, -72, 70, -117, 80, -83, -92, -95, -63, -107, -121, -57, -37, 21, 125, -103, -17, 87, 50, -46, -2, -70, -19, 108, -3, -49, 46, 90, 62, 107, -100, -103, -26, 78, 77, 53, 43, 84, 112, 109, -1, -107, -107, -83, 56, 67, -65, -38, -6, 3, 83, -112, -107, -32, 32, 118, 3, -89, -55, -114, -98, 91, -66, 61, 70, 32, 119, 8, 54, 65, 5, -1, 7, -71, -110, -5, 49, 38, 120, 86, 106, -9, -61, 25, -7, 7, 120, -103, 121, 118, 12, 97, -112, -92, 22, 77, -110, 67};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.343229864883);
    msg.setSource(56050U);
    msg.setSourceEntity(167U);
    msg.setDestination(6729U);
    msg.setDestinationEntity(247U);
    msg.type = 46U;
    msg.frequency = 903110937U;
    msg.min_range = 64393U;
    msg.max_range = 17827U;
    msg.bits_per_point = 182U;
    msg.scale_factor = 0.377344092836;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.907326734306;
    tmp_msg_0.beam_height = 0.543685704968;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {119, -89, -23, 16, 87, 19, 103, -46, -78, 46, 28, -81, 8, -109, -44, -116, 70, 94, -31, -12, -109, -113, 50, -66, 17, -69, -33, -88, 96, 102, -20, -55, -47, 71, 31, -51, 126, 66, -37, -65, 20, 63, 90, 11, 49, -77, -86, 5, -81, 126, 107, 15, 81, 4, -120, -37, 71, -80, 62, -75, -64, 6, -110, -110, -63, 79, -104, 90, 67, 28, -8, 61, -5, -57, 4, 5, 106, 19, -33, -98, 123, -1, 36, -28, 102, -78, -116, 54, 44, 0, 72, 31, 94, 37, 100, -33, -45, 84, 1, 103, 63, -36, -24, -91, -52, -80, -65, 85, -104, 120, 59, 107, 20, -96, 18, -12, -71, -21, 11, 81, -42, -25, -66, 114, 24, 125, 111, 10, 81, 118, -68, 115, 51, -33, -85, 75, -47, -69, -124, -120, -26, -59, -56, -10, -18, -99, -48, -87, -33, 49, -52, -123, -45, 49, -101, -113, 5, -115, -47, -127};
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
    msg.setTimeStamp(0.657353099929);
    msg.setSource(12841U);
    msg.setSourceEntity(233U);
    msg.setDestination(37952U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.477864728982);
    msg.setSource(17550U);
    msg.setSourceEntity(26U);
    msg.setDestination(52773U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.666004377472);
    msg.setSource(59676U);
    msg.setSourceEntity(198U);
    msg.setDestination(55093U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.307115110058);
    msg.setSource(9961U);
    msg.setSourceEntity(124U);
    msg.setDestination(13787U);
    msg.setDestinationEntity(129U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.583052566725);
    msg.setSource(21621U);
    msg.setSourceEntity(188U);
    msg.setDestination(32630U);
    msg.setDestinationEntity(193U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.786937400227);
    msg.setSource(19197U);
    msg.setSourceEntity(30U);
    msg.setDestination(11801U);
    msg.setDestinationEntity(54U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.12225665438);
    msg.setSource(23425U);
    msg.setSourceEntity(236U);
    msg.setDestination(25736U);
    msg.setDestinationEntity(219U);
    msg.value = 0.398505818685;
    msg.confidence = 0.356477828509;
    msg.opmodes.assign("ZTBYSOPKONAQTABLOIHHQZDTRPFNIRZZPCEYXGAFSOQMDOUSOFNXEFZPPJYECAIXESVVRSVIKFSZBUSRWGNQLEUBJLAVRXSJUWTWTCYXGOCZXXMLMHQFKJCIFHTGABUGYNNQTNKPDQYJMKKGMUULNXXEMMOMRIIBFKOPQLEDD");

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
    msg.setTimeStamp(0.550722313646);
    msg.setSource(55321U);
    msg.setSourceEntity(48U);
    msg.setDestination(25969U);
    msg.setDestinationEntity(140U);
    msg.value = 0.540659489432;
    msg.confidence = 0.0845264909995;
    msg.opmodes.assign("VFCCYQSRRRGJWLUASZPXXZQZVHHWEZNQDOPUXSKZIKIZIOJOARQOHZTBSYJDDJZSBLLTIJTEEGVMLMUYXRFPSGEUSHCTWFQEKPMBNMUDFPZITKBFPJENTD");

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
    msg.setTimeStamp(0.929352293043);
    msg.setSource(42621U);
    msg.setSourceEntity(185U);
    msg.setDestination(35922U);
    msg.setDestinationEntity(116U);
    msg.value = 0.907202702937;
    msg.confidence = 0.318387378806;
    msg.opmodes.assign("ENZLGLRPVJMPFLZIYSRBROZXQIDONEPXEINTIYVAXFWHAIZYGOOMVHXVQLLGQCVSNCRRFJFPGRGUSCFQEBSTORQPAESWTGATSMKGYJBXNNZNHZALHXMUGABWPWTFVAWUJXCDDFZLKCOWZJEEFTKDEDCWWLIVUODUUBPORBELQFDMBYYNJMSJCQCRRJHTSHQYUBJPQKIUHMBAXXAOYTKVBKMJ");

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
    msg.setTimeStamp(0.476331848382);
    msg.setSource(19664U);
    msg.setSourceEntity(16U);
    msg.setDestination(48357U);
    msg.setDestinationEntity(189U);
    msg.itow = 3775495837U;
    msg.lat = 0.0417436068232;
    msg.lon = 0.687828254189;
    msg.height_ell = 0.518386656117;
    msg.height_sea = 0.403278260503;
    msg.hacc = 0.904141726273;
    msg.vacc = 0.643603360424;
    msg.vel_n = 0.022504878391;
    msg.vel_e = 0.415778948736;
    msg.vel_d = 0.457932004202;
    msg.speed = 0.697077434797;
    msg.gspeed = 0.123099391042;
    msg.heading = 0.242964937059;
    msg.sacc = 0.0262352844575;
    msg.cacc = 0.336211625066;

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
    msg.setTimeStamp(0.579249098972);
    msg.setSource(8776U);
    msg.setSourceEntity(211U);
    msg.setDestination(10366U);
    msg.setDestinationEntity(141U);
    msg.itow = 674272517U;
    msg.lat = 0.80888854227;
    msg.lon = 0.226148904862;
    msg.height_ell = 0.00195488791575;
    msg.height_sea = 0.357104154334;
    msg.hacc = 0.830692663549;
    msg.vacc = 0.693506176083;
    msg.vel_n = 0.690501473667;
    msg.vel_e = 0.00845271565831;
    msg.vel_d = 0.0559548987259;
    msg.speed = 0.110099978518;
    msg.gspeed = 0.538159880197;
    msg.heading = 0.183496976935;
    msg.sacc = 0.7567412855;
    msg.cacc = 0.987144477474;

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
    msg.setTimeStamp(0.128992815331);
    msg.setSource(33426U);
    msg.setSourceEntity(32U);
    msg.setDestination(54802U);
    msg.setDestinationEntity(37U);
    msg.itow = 1865753730U;
    msg.lat = 0.802867863668;
    msg.lon = 0.484180127942;
    msg.height_ell = 0.501143367997;
    msg.height_sea = 0.95323277055;
    msg.hacc = 0.441861317405;
    msg.vacc = 0.0669928191271;
    msg.vel_n = 0.886159424092;
    msg.vel_e = 0.674277024839;
    msg.vel_d = 0.573636625897;
    msg.speed = 0.159132038751;
    msg.gspeed = 0.788669008929;
    msg.heading = 0.43325661503;
    msg.sacc = 0.934958996379;
    msg.cacc = 0.177637794007;

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
    msg.setTimeStamp(0.837118332433);
    msg.setSource(5209U);
    msg.setSourceEntity(41U);
    msg.setDestination(46458U);
    msg.setDestinationEntity(145U);
    msg.id = 65U;
    msg.value = 0.909939791899;

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
    msg.setTimeStamp(0.25896978625);
    msg.setSource(20149U);
    msg.setSourceEntity(19U);
    msg.setDestination(52760U);
    msg.setDestinationEntity(56U);
    msg.id = 185U;
    msg.value = 0.916037843513;

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
    msg.setTimeStamp(0.311217705446);
    msg.setSource(36124U);
    msg.setSourceEntity(222U);
    msg.setDestination(38755U);
    msg.setDestinationEntity(52U);
    msg.id = 142U;
    msg.value = 0.599356947296;

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
    msg.setTimeStamp(0.592378417055);
    msg.setSource(15096U);
    msg.setSourceEntity(10U);
    msg.setDestination(32940U);
    msg.setDestinationEntity(174U);
    msg.x = 0.963805684443;
    msg.y = 0.80675402649;
    msg.z = 0.543614810209;
    msg.phi = 0.0962692307813;
    msg.theta = 0.512609172172;
    msg.psi = 0.509485495561;

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
    msg.setTimeStamp(0.405538696919);
    msg.setSource(33636U);
    msg.setSourceEntity(16U);
    msg.setDestination(16009U);
    msg.setDestinationEntity(102U);
    msg.x = 0.203591504587;
    msg.y = 0.836238738455;
    msg.z = 0.607517272115;
    msg.phi = 0.0863453158595;
    msg.theta = 0.522931139387;
    msg.psi = 0.521550059069;

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
    msg.setTimeStamp(0.345054804226);
    msg.setSource(39277U);
    msg.setSourceEntity(243U);
    msg.setDestination(34689U);
    msg.setDestinationEntity(110U);
    msg.x = 0.500248392506;
    msg.y = 0.587306278059;
    msg.z = 0.681986554986;
    msg.phi = 0.218291379539;
    msg.theta = 0.359428266029;
    msg.psi = 0.214364529153;

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
    msg.setTimeStamp(0.932703754434);
    msg.setSource(52256U);
    msg.setSourceEntity(98U);
    msg.setDestination(45673U);
    msg.setDestinationEntity(200U);
    msg.beam_width = 0.121439694224;
    msg.beam_height = 0.842311267559;

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
    msg.setTimeStamp(0.435711303141);
    msg.setSource(25974U);
    msg.setSourceEntity(59U);
    msg.setDestination(34720U);
    msg.setDestinationEntity(33U);
    msg.beam_width = 0.651920877907;
    msg.beam_height = 0.36673977278;

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
    msg.setTimeStamp(0.524983669577);
    msg.setSource(51921U);
    msg.setSourceEntity(49U);
    msg.setDestination(52274U);
    msg.setDestinationEntity(223U);
    msg.beam_width = 0.85317868413;
    msg.beam_height = 0.555455076364;

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
    msg.setTimeStamp(0.747198645275);
    msg.setSource(33479U);
    msg.setSourceEntity(133U);
    msg.setDestination(35131U);
    msg.setDestinationEntity(29U);
    msg.sane = 152U;

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
    msg.setTimeStamp(0.870345218177);
    msg.setSource(27557U);
    msg.setSourceEntity(10U);
    msg.setDestination(29776U);
    msg.setDestinationEntity(194U);
    msg.sane = 196U;

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
    msg.setTimeStamp(0.837904113888);
    msg.setSource(20134U);
    msg.setSourceEntity(18U);
    msg.setDestination(58354U);
    msg.setDestinationEntity(247U);
    msg.sane = 146U;

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
    msg.setTimeStamp(0.363410296638);
    msg.setSource(41129U);
    msg.setSourceEntity(42U);
    msg.setDestination(46160U);
    msg.setDestinationEntity(156U);
    msg.value = 0.557315801;

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
    msg.setTimeStamp(0.182836605594);
    msg.setSource(26510U);
    msg.setSourceEntity(227U);
    msg.setDestination(4932U);
    msg.setDestinationEntity(69U);
    msg.value = 0.107482671389;

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
    msg.setTimeStamp(0.638358534214);
    msg.setSource(59583U);
    msg.setSourceEntity(143U);
    msg.setDestination(16514U);
    msg.setDestinationEntity(122U);
    msg.value = 0.732494462925;

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
    msg.setTimeStamp(0.257730906993);
    msg.setSource(37479U);
    msg.setSourceEntity(212U);
    msg.setDestination(49383U);
    msg.setDestinationEntity(135U);
    msg.value = 0.138210816772;

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
    msg.setTimeStamp(0.969801300516);
    msg.setSource(29740U);
    msg.setSourceEntity(170U);
    msg.setDestination(4275U);
    msg.setDestinationEntity(34U);
    msg.value = 0.0271480318237;

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
    msg.setTimeStamp(0.578323578195);
    msg.setSource(11181U);
    msg.setSourceEntity(94U);
    msg.setDestination(23006U);
    msg.setDestinationEntity(145U);
    msg.value = 0.122311412731;

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
    msg.setTimeStamp(0.824413849794);
    msg.setSource(52753U);
    msg.setSourceEntity(82U);
    msg.setDestination(16722U);
    msg.setDestinationEntity(69U);
    msg.value = 0.0950908693413;

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
    msg.setTimeStamp(0.683469745194);
    msg.setSource(24454U);
    msg.setSourceEntity(224U);
    msg.setDestination(57266U);
    msg.setDestinationEntity(250U);
    msg.value = 0.816211004065;

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
    msg.setTimeStamp(0.579921688749);
    msg.setSource(23318U);
    msg.setSourceEntity(20U);
    msg.setDestination(32136U);
    msg.setDestinationEntity(161U);
    msg.value = 0.441589838975;

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
    msg.setTimeStamp(0.379319371552);
    msg.setSource(37584U);
    msg.setSourceEntity(233U);
    msg.setDestination(47080U);
    msg.setDestinationEntity(186U);
    msg.value = 0.892652408399;

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
    msg.setTimeStamp(0.831212113417);
    msg.setSource(58758U);
    msg.setSourceEntity(253U);
    msg.setDestination(14885U);
    msg.setDestinationEntity(22U);
    msg.value = 0.803404238351;

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
    msg.setTimeStamp(0.508821621316);
    msg.setSource(23005U);
    msg.setSourceEntity(91U);
    msg.setDestination(63479U);
    msg.setDestinationEntity(224U);
    msg.value = 0.0711351915808;

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
    msg.setTimeStamp(0.0997097034752);
    msg.setSource(21350U);
    msg.setSourceEntity(254U);
    msg.setDestination(11744U);
    msg.setDestinationEntity(127U);
    msg.value = 0.0653821267722;

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
    msg.setTimeStamp(0.18158217684);
    msg.setSource(31912U);
    msg.setSourceEntity(131U);
    msg.setDestination(27442U);
    msg.setDestinationEntity(30U);
    msg.value = 0.02242701445;

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
    msg.setTimeStamp(0.178762612939);
    msg.setSource(19234U);
    msg.setSourceEntity(209U);
    msg.setDestination(37772U);
    msg.setDestinationEntity(137U);
    msg.value = 0.428893322957;

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
    msg.setTimeStamp(0.125131146095);
    msg.setSource(41849U);
    msg.setSourceEntity(92U);
    msg.setDestination(55288U);
    msg.setDestinationEntity(181U);
    msg.value = 0.358796147159;

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
    msg.setTimeStamp(0.0740798144218);
    msg.setSource(46870U);
    msg.setSourceEntity(82U);
    msg.setDestination(61622U);
    msg.setDestinationEntity(163U);
    msg.value = 0.222623683223;

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
    msg.setTimeStamp(0.802123646702);
    msg.setSource(56811U);
    msg.setSourceEntity(58U);
    msg.setDestination(26558U);
    msg.setDestinationEntity(172U);
    msg.value = 0.687167155095;

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
    msg.setTimeStamp(0.505575988758);
    msg.setSource(50319U);
    msg.setSourceEntity(132U);
    msg.setDestination(13805U);
    msg.setDestinationEntity(167U);
    msg.value = 0.1994847137;

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
    msg.setTimeStamp(0.722043205978);
    msg.setSource(25930U);
    msg.setSourceEntity(31U);
    msg.setDestination(26852U);
    msg.setDestinationEntity(213U);
    msg.value = 0.22886249301;

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
    msg.setTimeStamp(0.455441007048);
    msg.setSource(53074U);
    msg.setSourceEntity(151U);
    msg.setDestination(14066U);
    msg.setDestinationEntity(216U);
    msg.value = 0.79922408332;

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
    msg.setTimeStamp(0.902621799225);
    msg.setSource(1657U);
    msg.setSourceEntity(146U);
    msg.setDestination(47658U);
    msg.setDestinationEntity(209U);
    msg.value = 0.244913186937;

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
    msg.setTimeStamp(0.11555084491);
    msg.setSource(8011U);
    msg.setSourceEntity(94U);
    msg.setDestination(35577U);
    msg.setDestinationEntity(194U);
    msg.value = 0.554061605783;

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
    msg.setTimeStamp(0.0522788128424);
    msg.setSource(29661U);
    msg.setSourceEntity(159U);
    msg.setDestination(61343U);
    msg.setDestinationEntity(218U);
    msg.value = 0.383339675278;

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
    msg.setTimeStamp(0.106681561334);
    msg.setSource(52158U);
    msg.setSourceEntity(44U);
    msg.setDestination(45822U);
    msg.setDestinationEntity(241U);
    msg.validity = 48952U;
    msg.type = 247U;
    msg.tow = 3337114998U;
    msg.base_lat = 0.98832544057;
    msg.base_lon = 0.644019447339;
    msg.base_height = 0.224151614051;
    msg.n = 0.745941651521;
    msg.e = 0.0292184093307;
    msg.d = 0.215299964153;
    msg.v_n = 0.0506658529185;
    msg.v_e = 0.15435237078;
    msg.v_d = 0.198450529176;
    msg.satellites = 43U;
    msg.iar_hyp = 32495U;
    msg.iar_ratio = 0.00323915043392;

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
    msg.setTimeStamp(0.333628387502);
    msg.setSource(3429U);
    msg.setSourceEntity(89U);
    msg.setDestination(20348U);
    msg.setDestinationEntity(26U);
    msg.validity = 57034U;
    msg.type = 36U;
    msg.tow = 2652870872U;
    msg.base_lat = 0.230824983166;
    msg.base_lon = 0.0692296894499;
    msg.base_height = 0.330239199611;
    msg.n = 0.10446460795;
    msg.e = 0.970616072477;
    msg.d = 0.0778429616449;
    msg.v_n = 0.468220294611;
    msg.v_e = 0.204476519106;
    msg.v_d = 0.643242746239;
    msg.satellites = 182U;
    msg.iar_hyp = 7255U;
    msg.iar_ratio = 0.107607054084;

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
    msg.setTimeStamp(0.857869342483);
    msg.setSource(56181U);
    msg.setSourceEntity(117U);
    msg.setDestination(11586U);
    msg.setDestinationEntity(139U);
    msg.validity = 43625U;
    msg.type = 240U;
    msg.tow = 1095968158U;
    msg.base_lat = 0.591795141165;
    msg.base_lon = 0.30236273968;
    msg.base_height = 0.156301288059;
    msg.n = 0.371586316012;
    msg.e = 0.309355321844;
    msg.d = 0.263718040701;
    msg.v_n = 0.394778527924;
    msg.v_e = 0.797096021567;
    msg.v_d = 0.26693981391;
    msg.satellites = 160U;
    msg.iar_hyp = 14533U;
    msg.iar_ratio = 0.0235815983987;

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
    msg.setTimeStamp(0.430209719399);
    msg.setSource(34526U);
    msg.setSourceEntity(142U);
    msg.setDestination(47793U);
    msg.setDestinationEntity(126U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.564523036718;
    tmp_msg_0.lon = 0.738950810187;
    tmp_msg_0.height = 0.488300122864;
    tmp_msg_0.x = 0.887309184387;
    tmp_msg_0.y = 0.63158901744;
    tmp_msg_0.z = 0.315679229901;
    tmp_msg_0.phi = 0.31267190378;
    tmp_msg_0.theta = 0.738262315585;
    tmp_msg_0.psi = 0.11042268855;
    tmp_msg_0.u = 0.576571948637;
    tmp_msg_0.v = 0.187596949135;
    tmp_msg_0.w = 0.948504226398;
    tmp_msg_0.vx = 0.669505534648;
    tmp_msg_0.vy = 0.559190005361;
    tmp_msg_0.vz = 0.786208622046;
    tmp_msg_0.p = 0.663537576028;
    tmp_msg_0.q = 0.106327559373;
    tmp_msg_0.r = 0.489707391054;
    tmp_msg_0.depth = 0.858245152572;
    tmp_msg_0.alt = 0.401612824979;
    msg.state.set(tmp_msg_0);
    msg.type = 67U;

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
    msg.setTimeStamp(0.443488920057);
    msg.setSource(8516U);
    msg.setSourceEntity(17U);
    msg.setDestination(19276U);
    msg.setDestinationEntity(237U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0950165043234;
    tmp_msg_0.lon = 0.719276982681;
    tmp_msg_0.height = 0.322475281052;
    tmp_msg_0.x = 0.325837914485;
    tmp_msg_0.y = 0.269248104822;
    tmp_msg_0.z = 0.16895696232;
    tmp_msg_0.phi = 0.376852948521;
    tmp_msg_0.theta = 0.269617405872;
    tmp_msg_0.psi = 0.425045877393;
    tmp_msg_0.u = 0.874582698465;
    tmp_msg_0.v = 0.968160991521;
    tmp_msg_0.w = 0.175841399203;
    tmp_msg_0.vx = 0.917196087427;
    tmp_msg_0.vy = 0.606554694503;
    tmp_msg_0.vz = 0.849513708428;
    tmp_msg_0.p = 0.472144597809;
    tmp_msg_0.q = 0.286644531269;
    tmp_msg_0.r = 0.36754874481;
    tmp_msg_0.depth = 0.0586183018753;
    tmp_msg_0.alt = 0.680829809923;
    msg.state.set(tmp_msg_0);
    msg.type = 172U;

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
    msg.setTimeStamp(0.160424985076);
    msg.setSource(47186U);
    msg.setSourceEntity(13U);
    msg.setDestination(11743U);
    msg.setDestinationEntity(82U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.775672884795;
    tmp_msg_0.lon = 0.101236595979;
    tmp_msg_0.height = 0.70389145738;
    tmp_msg_0.x = 0.840595749252;
    tmp_msg_0.y = 0.00470026089471;
    tmp_msg_0.z = 0.917468315768;
    tmp_msg_0.phi = 0.732161377802;
    tmp_msg_0.theta = 0.172386697984;
    tmp_msg_0.psi = 0.655109007122;
    tmp_msg_0.u = 0.610619209345;
    tmp_msg_0.v = 0.347707056139;
    tmp_msg_0.w = 0.88154055289;
    tmp_msg_0.vx = 0.409729572743;
    tmp_msg_0.vy = 0.253359966653;
    tmp_msg_0.vz = 0.582684385503;
    tmp_msg_0.p = 0.441553382857;
    tmp_msg_0.q = 0.131322322927;
    tmp_msg_0.r = 0.312120443341;
    tmp_msg_0.depth = 0.169417608079;
    tmp_msg_0.alt = 0.991785457855;
    msg.state.set(tmp_msg_0);
    msg.type = 66U;

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
    msg.setTimeStamp(0.357174069374);
    msg.setSource(41909U);
    msg.setSourceEntity(178U);
    msg.setDestination(38125U);
    msg.setDestinationEntity(203U);
    msg.value = 0.43236738994;

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
    msg.setTimeStamp(0.812498606151);
    msg.setSource(65232U);
    msg.setSourceEntity(39U);
    msg.setDestination(26220U);
    msg.setDestinationEntity(177U);
    msg.value = 0.589402106448;

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
    msg.setTimeStamp(0.730127772153);
    msg.setSource(26929U);
    msg.setSourceEntity(201U);
    msg.setDestination(55013U);
    msg.setDestinationEntity(105U);
    msg.value = 0.295846982164;

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
    msg.setTimeStamp(0.216553712932);
    msg.setSource(37024U);
    msg.setSourceEntity(120U);
    msg.setDestination(33623U);
    msg.setDestinationEntity(223U);
    msg.value = 0.973173233094;

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
    msg.setTimeStamp(0.705460745608);
    msg.setSource(21131U);
    msg.setSourceEntity(176U);
    msg.setDestination(22368U);
    msg.setDestinationEntity(84U);
    msg.value = 0.890395830237;

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
    msg.setTimeStamp(0.181942456627);
    msg.setSource(41579U);
    msg.setSourceEntity(158U);
    msg.setDestination(55730U);
    msg.setDestinationEntity(148U);
    msg.value = 0.752671966865;

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
    msg.setTimeStamp(0.740497300557);
    msg.setSource(43199U);
    msg.setSourceEntity(128U);
    msg.setDestination(21523U);
    msg.setDestinationEntity(70U);
    msg.value = 0.191979466528;

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
    msg.setTimeStamp(0.130766849015);
    msg.setSource(32150U);
    msg.setSourceEntity(214U);
    msg.setDestination(14491U);
    msg.setDestinationEntity(213U);
    msg.value = 0.408722726493;

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
    msg.setTimeStamp(0.244434766563);
    msg.setSource(33513U);
    msg.setSourceEntity(107U);
    msg.setDestination(40661U);
    msg.setDestinationEntity(7U);
    msg.value = 0.849548919934;

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
    msg.setTimeStamp(0.0449231644011);
    msg.setSource(23061U);
    msg.setSourceEntity(250U);
    msg.setDestination(55207U);
    msg.setDestinationEntity(34U);
    msg.value = 0.497791494199;

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
    msg.setTimeStamp(0.737410850247);
    msg.setSource(44107U);
    msg.setSourceEntity(17U);
    msg.setDestination(27012U);
    msg.setDestinationEntity(218U);
    msg.value = 0.69984178255;

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
    msg.setTimeStamp(0.653162136769);
    msg.setSource(11759U);
    msg.setSourceEntity(37U);
    msg.setDestination(55437U);
    msg.setDestinationEntity(196U);
    msg.value = 0.97618475238;

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
    msg.setTimeStamp(0.948830427443);
    msg.setSource(54859U);
    msg.setSourceEntity(227U);
    msg.setDestination(44932U);
    msg.setDestinationEntity(19U);
    msg.value = 0.0431636517536;

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
    msg.setTimeStamp(0.869325411035);
    msg.setSource(18566U);
    msg.setSourceEntity(166U);
    msg.setDestination(53562U);
    msg.setDestinationEntity(98U);
    msg.value = 0.519137900354;

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
    msg.setTimeStamp(0.195597024502);
    msg.setSource(26422U);
    msg.setSourceEntity(183U);
    msg.setDestination(53229U);
    msg.setDestinationEntity(204U);
    msg.value = 0.762739085783;

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
    msg.setTimeStamp(0.816994424436);
    msg.setSource(15552U);
    msg.setSourceEntity(13U);
    msg.setDestination(20122U);
    msg.setDestinationEntity(184U);
    msg.id = 215U;
    msg.zoom = 25U;
    msg.action = 41U;

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
    msg.setTimeStamp(0.794920484581);
    msg.setSource(9337U);
    msg.setSourceEntity(248U);
    msg.setDestination(37228U);
    msg.setDestinationEntity(186U);
    msg.id = 7U;
    msg.zoom = 188U;
    msg.action = 151U;

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
    msg.setTimeStamp(0.917155523169);
    msg.setSource(50081U);
    msg.setSourceEntity(171U);
    msg.setDestination(28589U);
    msg.setDestinationEntity(176U);
    msg.id = 86U;
    msg.zoom = 131U;
    msg.action = 203U;

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
    msg.setTimeStamp(0.928427939075);
    msg.setSource(62752U);
    msg.setSourceEntity(13U);
    msg.setDestination(13704U);
    msg.setDestinationEntity(254U);
    msg.id = 164U;
    msg.value = 0.808828606007;

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
    msg.setTimeStamp(0.50302703088);
    msg.setSource(21028U);
    msg.setSourceEntity(177U);
    msg.setDestination(3396U);
    msg.setDestinationEntity(34U);
    msg.id = 17U;
    msg.value = 0.554686927393;

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
    msg.setTimeStamp(0.57521031368);
    msg.setSource(42952U);
    msg.setSourceEntity(199U);
    msg.setDestination(62342U);
    msg.setDestinationEntity(114U);
    msg.id = 201U;
    msg.value = 0.0258587413442;

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
    msg.setTimeStamp(0.51540045839);
    msg.setSource(50038U);
    msg.setSourceEntity(116U);
    msg.setDestination(40295U);
    msg.setDestinationEntity(47U);
    msg.id = 2U;
    msg.value = 0.869570490033;

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
    msg.setTimeStamp(0.520548011645);
    msg.setSource(61823U);
    msg.setSourceEntity(230U);
    msg.setDestination(49291U);
    msg.setDestinationEntity(145U);
    msg.id = 148U;
    msg.value = 0.812730416208;

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
    msg.setTimeStamp(0.774089032059);
    msg.setSource(43880U);
    msg.setSourceEntity(15U);
    msg.setDestination(11320U);
    msg.setDestinationEntity(123U);
    msg.id = 247U;
    msg.value = 0.553723952444;

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
    msg.setTimeStamp(0.110237891113);
    msg.setSource(61672U);
    msg.setSourceEntity(74U);
    msg.setDestination(60005U);
    msg.setDestinationEntity(78U);
    msg.id = 251U;
    msg.angle = 0.401885577784;

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
    msg.setTimeStamp(0.71650292064);
    msg.setSource(33364U);
    msg.setSourceEntity(41U);
    msg.setDestination(1068U);
    msg.setDestinationEntity(162U);
    msg.id = 26U;
    msg.angle = 0.119536157241;

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
    msg.setTimeStamp(0.699480496438);
    msg.setSource(25311U);
    msg.setSourceEntity(184U);
    msg.setDestination(12676U);
    msg.setDestinationEntity(156U);
    msg.id = 41U;
    msg.angle = 0.547573991399;

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
    msg.setTimeStamp(0.000884672021178);
    msg.setSource(4419U);
    msg.setSourceEntity(241U);
    msg.setDestination(43511U);
    msg.setDestinationEntity(1U);
    msg.op = 241U;
    msg.actions.assign("SKKAUAYUMDZLGCDSVPODDOEJNLBKDPWGCPLRICIRMIWVQHZNSQQAMFWWDZTGXNCUOTUWHLEZRUUHAKCETDAORETXJHXBBCIYNMKDEYAYTLGOHNUJTYRSZHSKBQPCDTLWREPAWXYVGEITCWVZFOERTJWVJNFGIPWNIXGMUAEMBYOHYJHMFHCFKERGXQPLAJZVOAXVFFOVRJSKQI");

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
    msg.setTimeStamp(0.964726963496);
    msg.setSource(32962U);
    msg.setSourceEntity(151U);
    msg.setDestination(18622U);
    msg.setDestinationEntity(217U);
    msg.op = 17U;
    msg.actions.assign("LQNUHKOGRJQHVDPGAVLMEFLICPSFOUJFWZRHNXQCHXAWRIDPKPYEXUXKYCTWIAVDDRAYCBDHYPIXNBDQNTBCVYOPZVBMXRTKPLYGTELASJJIFHGRBDSROH");

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
    msg.setTimeStamp(0.28390750241);
    msg.setSource(34593U);
    msg.setSourceEntity(95U);
    msg.setDestination(25667U);
    msg.setDestinationEntity(97U);
    msg.op = 28U;
    msg.actions.assign("KVVRAKSBDRXFSXNLBJPVCOENLKFEYQJWXZGPHNUPWFJFUIBNTPUUGMLXAASQVDHAMQTLO");

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
    msg.setTimeStamp(0.98761651644);
    msg.setSource(64231U);
    msg.setSourceEntity(163U);
    msg.setDestination(56509U);
    msg.setDestinationEntity(203U);
    msg.actions.assign("BLBRILTPABBSADHJZNJOBIDRHREJMRLDTVPPYFUKFYCMHJWDPUAQGPLFTAILZFVNKRLWNPDFFZEILBWQXUQMVSHDSUIWPHUZCHJYSVRNWSYORRNJKASXOKCEEZSWEYKVTCBCMHTKDMXJSRQDFXTNGGGIVLOYWPNXHUQMCZYRKQOWXGCUDIOTJVKJACEUBNIQGZLBKHQPMKVAEVSXQVGCEUAXSHOFTFPXNCMQGETO");

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
    msg.setTimeStamp(0.0533864232522);
    msg.setSource(29893U);
    msg.setSourceEntity(239U);
    msg.setDestination(50788U);
    msg.setDestinationEntity(174U);
    msg.actions.assign("ZSMRKYXDFBRFTELJPXNOEZGPAGUCHUHMNKPXGLWNVOUZRSKUVCFTDJJIULOZYRUIXGEOOUCVQBHHQTGAHVRFGFMGIKBNIIGNLESUNXSQTFRPKVYEFBYELAWDBDOOLRGTQCATYXPETDDJBILHOWSNAMTWQJZNFPIYCMSD");

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
    msg.setTimeStamp(0.84307215358);
    msg.setSource(38125U);
    msg.setSourceEntity(170U);
    msg.setDestination(26906U);
    msg.setDestinationEntity(18U);
    msg.actions.assign("PFSPXZHNCRNUBFYQDZQBFJXWSPERSWAYFDTTYVKKDEPFTLLCCQNZGAGDIZIRUEBHENQUKMKLHJYTQLEIRXZETYSVXSBGTUGFAPIJUUAQPQAYQVJIO");

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
    msg.setTimeStamp(0.100901971832);
    msg.setSource(59466U);
    msg.setSourceEntity(2U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(27U);
    msg.button = 133U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.854579098646);
    msg.setSource(2760U);
    msg.setSourceEntity(173U);
    msg.setDestination(36901U);
    msg.setDestinationEntity(66U);
    msg.button = 113U;
    msg.value = 79U;

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
    msg.setTimeStamp(0.324808998849);
    msg.setSource(39283U);
    msg.setSourceEntity(238U);
    msg.setDestination(279U);
    msg.setDestinationEntity(142U);
    msg.button = 110U;
    msg.value = 84U;

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
    msg.setTimeStamp(0.488089808306);
    msg.setSource(6945U);
    msg.setSourceEntity(239U);
    msg.setDestination(53917U);
    msg.setDestinationEntity(198U);
    msg.op = 10U;
    msg.text.assign("BVEHGTAAMWSCBQNJAQAOTZTMVDQRGHOCPAIGVCXEDBFIFLZRIRGAYWYEXCRCUCYIHFDLROJWDPQXCBKIZIJTEFGQWJFRWYNYZLJSMUPIOGJRLDVQZSEEQPXIZKOTSLKZXMSOIOENAPAKHSNMXWSCSXWGLRULOMGPPYZADBCNZRZTK");

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
    msg.setTimeStamp(0.130759796233);
    msg.setSource(38476U);
    msg.setSourceEntity(202U);
    msg.setDestination(49506U);
    msg.setDestinationEntity(36U);
    msg.op = 113U;
    msg.text.assign("WMCIXMQFKQMSSAINICSTKXYZBSPUFBHZRKNANDEJQFCLUGCMAQFDJHZMSJPBAEGFIHKPDRTCLTCLZXNPYZKEPKRBADTHWSWZZOSHVQLGDUYRJKJVBFHYNIEJEBUQEYHLSWVLVOWKSLJTXXPNNOPVPHLROTKTYCEAOTIUIVUGOFXNYNBIWVMZJDCC");

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
    msg.setTimeStamp(0.402601012637);
    msg.setSource(33844U);
    msg.setSourceEntity(3U);
    msg.setDestination(35531U);
    msg.setDestinationEntity(55U);
    msg.op = 217U;
    msg.text.assign("RSPLLMJLXYIYGTJYNQEOGAUNGAUJNQOENUSLQMIKMBFHAXVHDWKOLHXPDKKDASYWWWGEDXGOCLHAUCVINFJVIPYEVPZZTTH");

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
    msg.setTimeStamp(0.3597764192);
    msg.setSource(41984U);
    msg.setSourceEntity(196U);
    msg.setDestination(10580U);
    msg.setDestinationEntity(37U);
    msg.op = 184U;
    msg.time_remain = 0.047036763525;
    msg.sched_time = 0.760399177749;

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
    msg.setTimeStamp(0.992986331776);
    msg.setSource(42154U);
    msg.setSourceEntity(4U);
    msg.setDestination(43705U);
    msg.setDestinationEntity(126U);
    msg.op = 169U;
    msg.time_remain = 0.698764951981;
    msg.sched_time = 0.37674959555;

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
    msg.setTimeStamp(0.829305054308);
    msg.setSource(8001U);
    msg.setSourceEntity(37U);
    msg.setDestination(52159U);
    msg.setDestinationEntity(167U);
    msg.op = 133U;
    msg.time_remain = 0.163476101426;
    msg.sched_time = 0.193227420345;

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
    msg.setTimeStamp(0.0277471298459);
    msg.setSource(55181U);
    msg.setSourceEntity(30U);
    msg.setDestination(58440U);
    msg.setDestinationEntity(172U);
    msg.name.assign("PNJHCTCMNMLRSAUMOSIKPEDMOTIWLCDFZQVJEZMABFVUYHTWGICGSOWSPYSTUKJQZGRFFCAIHYUXVAPQEZWOSKEASDIERFENXVKFRMQOCRDHJASDICYGSXDKBZTLTDKLBHXQXRKGAWQFEQTBXNMCICHJYJANBKYIJWTHZRWWWRVNXTGOKZYOVHBZ");
    msg.op = 70U;
    msg.sched_time = 0.59728913333;

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
    msg.setTimeStamp(0.956308191981);
    msg.setSource(53782U);
    msg.setSourceEntity(56U);
    msg.setDestination(46424U);
    msg.setDestinationEntity(198U);
    msg.name.assign("PYXLZPCFGARBTSEDXAETJNMDVBQRDNCMWREBUUWXIMWTGJKFPTUHJSQTMHMZHGCINISHBTZCNRWOAQBHVGVCJRCBBZFWSVGDHAQBZIWKHBSEFNYZIYQDFOYCRVZQOJ");
    msg.op = 38U;
    msg.sched_time = 0.308109229224;

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
    msg.setTimeStamp(0.408708326254);
    msg.setSource(57138U);
    msg.setSourceEntity(23U);
    msg.setDestination(22905U);
    msg.setDestinationEntity(60U);
    msg.name.assign("LLAQZLQLLCVGBFOTSKTCPBWJUNRVZVKVRZSKOMAHWWNPVAKDEHIRCZVLYUIJJBUMSNXQPBKICPRGDFBFXJQGMIQCRISMDMSFVEJATHUPEHEDGLDBQINYNHTDLFZVALQPDSUWRAYGJXWJNGGGEKWXTXUFOWHNKDVOJBMWWXUPZAOGEIHNTMKTFQBIMPMYNRRCYAXKEYXFQOZNCYOYZBXQCHEXRWFYHORAOUTDIOAYSHGZCTVPJ");
    msg.op = 149U;
    msg.sched_time = 0.323931447844;

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
    msg.setTimeStamp(0.113598698355);
    msg.setSource(27216U);
    msg.setSourceEntity(181U);
    msg.setDestination(2888U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.728826625494);
    msg.setSource(56398U);
    msg.setSourceEntity(186U);
    msg.setDestination(22006U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.914321703587);
    msg.setSource(19267U);
    msg.setSourceEntity(74U);
    msg.setDestination(39293U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.224504047116);
    msg.setSource(30904U);
    msg.setSourceEntity(101U);
    msg.setDestination(26621U);
    msg.setDestinationEntity(68U);
    msg.name.assign("JQJWFNOHWMUPGJCMZZBUDDMVPYFNKIXAYIVPZFBCJIIXBKCWOSFYLZZAPDMIFLMSQAJVRLCUVKHTVZXGZQIPTRSNVTJDUTBHMXFUKGKLDXXBVYSLTQUNNIAOMOFQAAFPFDTEYHYSAIQQZFWTNGIBGNNRQSOZLSDYEDCBUBLTBWCRHOXJLHRKMRRRGQBYHPCGYNJYEV");
    msg.state = 150U;

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
    msg.setTimeStamp(0.765785846497);
    msg.setSource(20206U);
    msg.setSourceEntity(227U);
    msg.setDestination(25274U);
    msg.setDestinationEntity(52U);
    msg.name.assign("GRXXETNVWRSWHSITXBPMBEZCFNFJKLJNBYYIVUURDYMWDBBCIGXCWISSLLATQTZYMQBNTBZGPXTUKFLEEDOAJEQFILEEHYOGIVVUOGPPHKSOEGZVHSGUCHGUOVDPUZVAHCDCAISUMMWFTXGBQMPKQMRGAYDYXHWJZADMJJUQDYNLXWTACYLRTIOEOKN");
    msg.state = 52U;

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
    msg.setTimeStamp(0.40220516308);
    msg.setSource(22169U);
    msg.setSourceEntity(198U);
    msg.setDestination(51207U);
    msg.setDestinationEntity(86U);
    msg.name.assign("PRILOOJICQGVSQHWAYQJSWHTBXLXSHZAQXPSECOEQYHBLVJZIFPIOMNORUDFTJRAVMPURWHGNCAIZSVGXGMRXWQTTYROHHXKGMGULTXPOUTRUKLUDJIUYEEBWKFSUYRIOTDKPXAMVSOKGMWGKEOJBCEWSKYHFFBRVDCZENKNDMNJYBLFYNDZCXJAPKPMNKAUDWTCFJSG");
    msg.state = 254U;

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
    msg.setTimeStamp(0.066924820517);
    msg.setSource(38394U);
    msg.setSourceEntity(173U);
    msg.setDestination(63159U);
    msg.setDestinationEntity(57U);
    msg.name.assign("XOGAEOUIWCWWADRLHNRW");
    msg.value = 16U;

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
    msg.setTimeStamp(0.604050732724);
    msg.setSource(64792U);
    msg.setSourceEntity(212U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(10U);
    msg.name.assign("NPXOKUCQOZMPDIYBVFLBKAHNRSZCUYKXJNNFMWVNMQQZMNSULGEJIHWILACPOEZLTMLBDLOZBDYCXJCHVIRPAGITRMPOYPGEYAJNBCPUMBWWLDGVWSZWVJCGTADPVNYLPVFZXSAHTKXZDWRCRORQETUQOTKSAHIDKUBXLYTPEBDVFORUX");
    msg.value = 120U;

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
    msg.setTimeStamp(0.576492393966);
    msg.setSource(9426U);
    msg.setSourceEntity(90U);
    msg.setDestination(40439U);
    msg.setDestinationEntity(45U);
    msg.name.assign("VLFVYDMKAMWPYW");
    msg.value = 254U;

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
    msg.setTimeStamp(0.576743472937);
    msg.setSource(16649U);
    msg.setSourceEntity(203U);
    msg.setDestination(18451U);
    msg.setDestinationEntity(190U);
    msg.name.assign("LFRPEDRHHTGEWLXGZYLSHDVVNKADWDFSHJVJOPSGRPTTARDXAHMRFMKQLVXELOMBJIMYPZUNHACOBRNIUSPGOYQTCENZXIZZKQMMPTOWOTNGUCWREZABYJYT");

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
    msg.setTimeStamp(0.878046724305);
    msg.setSource(25200U);
    msg.setSourceEntity(64U);
    msg.setDestination(1975U);
    msg.setDestinationEntity(143U);
    msg.name.assign("RCOGQLHOBJAKBERYPGAZKVUSPJEWPOPTNIKTGVJAWWQAHVWDDUJWASGZTIDCQKXTXUNNPXHHFXWFPXDIROTFVNXGYHBSYLCLSOSQIUCJXFLMRNMUFOHGHXAGZBBEREMSIKKHUYEATANNDKLQEVLKDUGEYDFCVNCQPYKPMXHSYHROMMKSGCFTMRVDDVDQZBWXIJALQBCOLLTETJIJNJLGWVRMENYRM");

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
    msg.setTimeStamp(0.100788964274);
    msg.setSource(32666U);
    msg.setSourceEntity(170U);
    msg.setDestination(37111U);
    msg.setDestinationEntity(90U);
    msg.name.assign("NWAQKMCIVRIIFCLECJVWXDMLFJZNFKVIUAWKNRYTKUIGJGSDUWFYTQHTIOLWWYCCVJZUQYOXAOLJZGUEDFXCTGZBDBAEJHOKPGPSILNKFVEYBHEXQSHSZYTJGPWJAZGPBMLPQPBSRCAMUUXMYZLKZCFBOMWHROFKROBSPVWKZNVIPETYNAJALXTD");

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
    msg.setTimeStamp(0.505953459953);
    msg.setSource(47461U);
    msg.setSourceEntity(76U);
    msg.setDestination(28413U);
    msg.setDestinationEntity(247U);
    msg.name.assign("RKWQFPDSEBOEQODFLNAVTPBJLXUTBYLZGSKFFWHDYRHTSVXXPFJYHVQOMQYCSGCEXUIZRVVU");
    msg.value = 35U;

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
    msg.setTimeStamp(0.691442812862);
    msg.setSource(29871U);
    msg.setSourceEntity(119U);
    msg.setDestination(49957U);
    msg.setDestinationEntity(212U);
    msg.name.assign("DDXMYTTHEZWCYLBQNUOBGOUTFPAGJZFZSJSIVKITQSNQFYXYRGFLOPXDIVCYMJDELAUJHBZDNPAZEJEFXLKVUCMPDOGRWOBBLYIQUPURCLWOVXLXGBZMMOATRNSANVIHDDVRGJILJWNPOWKNUSYHVPIKCZHSIWRKNHWEXV");
    msg.value = 53U;

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
    msg.setTimeStamp(0.433753995074);
    msg.setSource(64961U);
    msg.setSourceEntity(233U);
    msg.setDestination(53146U);
    msg.setDestinationEntity(13U);
    msg.name.assign("ZRWNIJVCZTFBCKVZYKVRULXSLICGOBIBXTYEOKPNRJQQSUUSXKXEIZKJVNYBHWYPZQCGVDWHQPBZFIVWFGQNJZLXAALSOKHCUMKT");
    msg.value = 254U;

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
    msg.setTimeStamp(0.198629480222);
    msg.setSource(49924U);
    msg.setSourceEntity(65U);
    msg.setDestination(42316U);
    msg.setDestinationEntity(162U);
    msg.id = 216U;
    msg.period = 2743459922U;
    msg.duty_cycle = 2894372817U;

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
    msg.setTimeStamp(0.0375449113902);
    msg.setSource(28248U);
    msg.setSourceEntity(132U);
    msg.setDestination(54876U);
    msg.setDestinationEntity(211U);
    msg.id = 207U;
    msg.period = 994470038U;
    msg.duty_cycle = 3063619676U;

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
    msg.setTimeStamp(0.352266665149);
    msg.setSource(41609U);
    msg.setSourceEntity(47U);
    msg.setDestination(43929U);
    msg.setDestinationEntity(141U);
    msg.id = 76U;
    msg.period = 2212409704U;
    msg.duty_cycle = 3954509698U;

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
    msg.setTimeStamp(0.0774670130796);
    msg.setSource(30992U);
    msg.setSourceEntity(61U);
    msg.setDestination(19716U);
    msg.setDestinationEntity(219U);
    msg.id = 21U;
    msg.period = 4156949621U;
    msg.duty_cycle = 3902095680U;

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
    msg.setTimeStamp(0.115834310542);
    msg.setSource(7672U);
    msg.setSourceEntity(198U);
    msg.setDestination(40890U);
    msg.setDestinationEntity(177U);
    msg.id = 84U;
    msg.period = 2603878205U;
    msg.duty_cycle = 1667909094U;

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
    msg.setTimeStamp(0.21668181519);
    msg.setSource(33434U);
    msg.setSourceEntity(98U);
    msg.setDestination(55366U);
    msg.setDestinationEntity(107U);
    msg.id = 159U;
    msg.period = 37793226U;
    msg.duty_cycle = 598325180U;

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
    msg.setTimeStamp(0.0235796434028);
    msg.setSource(62832U);
    msg.setSourceEntity(210U);
    msg.setDestination(30986U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.870582134354;
    msg.lon = 0.360267377345;
    msg.height = 0.17500007467;
    msg.x = 0.939665203183;
    msg.y = 0.616774343394;
    msg.z = 0.504630594711;
    msg.phi = 0.688888124056;
    msg.theta = 0.839556646059;
    msg.psi = 0.459586254945;
    msg.u = 0.939350296226;
    msg.v = 0.776923888538;
    msg.w = 0.775314074279;
    msg.vx = 0.496820134353;
    msg.vy = 0.327220398038;
    msg.vz = 0.534268315669;
    msg.p = 0.596564353584;
    msg.q = 0.791701077655;
    msg.r = 0.0917489701401;
    msg.depth = 0.286579356713;
    msg.alt = 0.104608207784;

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
    msg.setTimeStamp(0.796441659907);
    msg.setSource(50897U);
    msg.setSourceEntity(253U);
    msg.setDestination(20459U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.746830254244;
    msg.lon = 0.534648874964;
    msg.height = 0.636065374683;
    msg.x = 0.300882245332;
    msg.y = 0.287903503074;
    msg.z = 0.579167697457;
    msg.phi = 0.267319127012;
    msg.theta = 0.683159986552;
    msg.psi = 0.465716880406;
    msg.u = 0.2097464011;
    msg.v = 0.342112395673;
    msg.w = 0.313630077209;
    msg.vx = 0.698945265996;
    msg.vy = 0.816571337892;
    msg.vz = 0.846870937412;
    msg.p = 0.222637941005;
    msg.q = 0.429075698433;
    msg.r = 0.393874352842;
    msg.depth = 0.304364631018;
    msg.alt = 0.634712372024;

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
    msg.setTimeStamp(0.2939306619);
    msg.setSource(63329U);
    msg.setSourceEntity(170U);
    msg.setDestination(32604U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.686924008575;
    msg.lon = 0.798808196265;
    msg.height = 0.431022669395;
    msg.x = 0.22852859061;
    msg.y = 0.469646856503;
    msg.z = 0.451094571517;
    msg.phi = 0.700903210334;
    msg.theta = 0.89168087203;
    msg.psi = 0.739098042506;
    msg.u = 0.416197723559;
    msg.v = 0.785272798567;
    msg.w = 0.861354955839;
    msg.vx = 0.217830850281;
    msg.vy = 0.759393782942;
    msg.vz = 0.141405188927;
    msg.p = 0.855979437202;
    msg.q = 0.525600094255;
    msg.r = 0.718356944801;
    msg.depth = 0.281952874433;
    msg.alt = 0.664020513473;

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
    msg.setTimeStamp(0.954038257524);
    msg.setSource(36024U);
    msg.setSourceEntity(65U);
    msg.setDestination(9172U);
    msg.setDestinationEntity(166U);
    msg.x = 0.966855649443;
    msg.y = 0.294839079291;
    msg.z = 0.661353171832;

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
    msg.setTimeStamp(0.502501855405);
    msg.setSource(36603U);
    msg.setSourceEntity(225U);
    msg.setDestination(40130U);
    msg.setDestinationEntity(38U);
    msg.x = 0.550223526629;
    msg.y = 0.524875342852;
    msg.z = 0.480122390395;

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
    msg.setTimeStamp(0.959805460086);
    msg.setSource(8478U);
    msg.setSourceEntity(146U);
    msg.setDestination(59839U);
    msg.setDestinationEntity(35U);
    msg.x = 0.560317028314;
    msg.y = 0.611543405423;
    msg.z = 0.648379384598;

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
    msg.setTimeStamp(0.740937350582);
    msg.setSource(38231U);
    msg.setSourceEntity(147U);
    msg.setDestination(55884U);
    msg.setDestinationEntity(192U);
    msg.value = 0.789917862405;

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
    msg.setTimeStamp(0.429828551625);
    msg.setSource(52657U);
    msg.setSourceEntity(23U);
    msg.setDestination(58781U);
    msg.setDestinationEntity(118U);
    msg.value = 0.380956403003;

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
    msg.setTimeStamp(0.18076591713);
    msg.setSource(20941U);
    msg.setSourceEntity(44U);
    msg.setDestination(17859U);
    msg.setDestinationEntity(5U);
    msg.value = 0.70652735532;

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
    msg.setTimeStamp(0.514929335752);
    msg.setSource(56219U);
    msg.setSourceEntity(71U);
    msg.setDestination(25512U);
    msg.setDestinationEntity(42U);
    msg.value = 0.247277849732;

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
    msg.setTimeStamp(0.0896983427825);
    msg.setSource(27495U);
    msg.setSourceEntity(253U);
    msg.setDestination(41617U);
    msg.setDestinationEntity(134U);
    msg.value = 0.578161790249;

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
    msg.setTimeStamp(0.0669641952382);
    msg.setSource(11429U);
    msg.setSourceEntity(50U);
    msg.setDestination(33618U);
    msg.setDestinationEntity(235U);
    msg.value = 0.401639180119;

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
    msg.setTimeStamp(0.476916958932);
    msg.setSource(37936U);
    msg.setSourceEntity(234U);
    msg.setDestination(38969U);
    msg.setDestinationEntity(97U);
    msg.x = 0.148862056936;
    msg.y = 0.684267201495;
    msg.z = 0.0571718424933;
    msg.phi = 0.606124114018;
    msg.theta = 0.994313191774;
    msg.psi = 0.315154310352;
    msg.p = 0.221031958008;
    msg.q = 0.646149733405;
    msg.r = 0.646558296274;
    msg.u = 0.714904884083;
    msg.v = 0.797740224396;
    msg.w = 0.877889942732;
    msg.bias_psi = 0.655518690078;
    msg.bias_r = 0.470887146989;

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
    msg.setTimeStamp(0.732650796442);
    msg.setSource(57381U);
    msg.setSourceEntity(157U);
    msg.setDestination(229U);
    msg.setDestinationEntity(191U);
    msg.x = 0.424042750325;
    msg.y = 0.60285982696;
    msg.z = 0.382426438663;
    msg.phi = 0.456238257514;
    msg.theta = 0.200944459554;
    msg.psi = 0.0937347049271;
    msg.p = 0.020236132607;
    msg.q = 0.21796942029;
    msg.r = 0.101504176296;
    msg.u = 0.218745943774;
    msg.v = 0.175922223696;
    msg.w = 0.755138797413;
    msg.bias_psi = 0.03463638766;
    msg.bias_r = 0.0902894096982;

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
    msg.setTimeStamp(0.449141365712);
    msg.setSource(36643U);
    msg.setSourceEntity(1U);
    msg.setDestination(29146U);
    msg.setDestinationEntity(183U);
    msg.x = 0.187060270613;
    msg.y = 0.0440902059721;
    msg.z = 0.574670227072;
    msg.phi = 0.633651685552;
    msg.theta = 0.769917898149;
    msg.psi = 0.114498650981;
    msg.p = 0.207521242479;
    msg.q = 0.0205860411568;
    msg.r = 0.292806626238;
    msg.u = 0.72359236027;
    msg.v = 0.302825684948;
    msg.w = 0.189943617839;
    msg.bias_psi = 0.877454747649;
    msg.bias_r = 0.186219055285;

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
    msg.setTimeStamp(0.706899049862);
    msg.setSource(11513U);
    msg.setSourceEntity(222U);
    msg.setDestination(16252U);
    msg.setDestinationEntity(135U);
    msg.bias_psi = 0.773019237494;
    msg.bias_r = 0.95126646026;
    msg.cog = 0.1622228217;
    msg.cyaw = 0.196539694525;
    msg.lbl_rej_level = 0.728138614846;
    msg.gps_rej_level = 0.390778426606;
    msg.custom_x = 0.983303251885;
    msg.custom_y = 0.87893866254;
    msg.custom_z = 0.138860053796;

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
    msg.setTimeStamp(0.465488521463);
    msg.setSource(28714U);
    msg.setSourceEntity(190U);
    msg.setDestination(41229U);
    msg.setDestinationEntity(30U);
    msg.bias_psi = 0.675367376773;
    msg.bias_r = 0.719339389428;
    msg.cog = 0.727206824295;
    msg.cyaw = 0.437839545985;
    msg.lbl_rej_level = 0.885668009612;
    msg.gps_rej_level = 0.625631479651;
    msg.custom_x = 0.345896763842;
    msg.custom_y = 0.382466240725;
    msg.custom_z = 0.00505837978962;

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
    msg.setTimeStamp(0.461121400199);
    msg.setSource(7423U);
    msg.setSourceEntity(254U);
    msg.setDestination(18960U);
    msg.setDestinationEntity(110U);
    msg.bias_psi = 0.531783158318;
    msg.bias_r = 0.911168739713;
    msg.cog = 0.461968372401;
    msg.cyaw = 0.980272531223;
    msg.lbl_rej_level = 0.183603296844;
    msg.gps_rej_level = 0.603048674587;
    msg.custom_x = 0.224258457566;
    msg.custom_y = 0.659700792564;
    msg.custom_z = 0.155770469329;

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
    msg.setTimeStamp(0.394421798471);
    msg.setSource(39459U);
    msg.setSourceEntity(170U);
    msg.setDestination(50346U);
    msg.setDestinationEntity(14U);
    msg.utc_time = 0.722833731412;
    msg.reason = 130U;

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
    msg.setTimeStamp(0.134376899276);
    msg.setSource(18418U);
    msg.setSourceEntity(10U);
    msg.setDestination(37668U);
    msg.setDestinationEntity(43U);
    msg.utc_time = 0.52749188853;
    msg.reason = 166U;

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
    msg.setTimeStamp(0.497746991009);
    msg.setSource(9308U);
    msg.setSourceEntity(109U);
    msg.setDestination(43034U);
    msg.setDestinationEntity(172U);
    msg.utc_time = 0.845540495567;
    msg.reason = 149U;

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
    msg.setTimeStamp(0.0452068906239);
    msg.setSource(52150U);
    msg.setSourceEntity(7U);
    msg.setDestination(1130U);
    msg.setDestinationEntity(116U);
    msg.id = 75U;
    msg.range = 0.444390579079;
    msg.acceptance = 225U;

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
    msg.setTimeStamp(0.343341832996);
    msg.setSource(44108U);
    msg.setSourceEntity(114U);
    msg.setDestination(56803U);
    msg.setDestinationEntity(132U);
    msg.id = 41U;
    msg.range = 0.714308239179;
    msg.acceptance = 132U;

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
    msg.setTimeStamp(0.833405930013);
    msg.setSource(24403U);
    msg.setSourceEntity(24U);
    msg.setDestination(8961U);
    msg.setDestinationEntity(181U);
    msg.id = 201U;
    msg.range = 0.822366235403;
    msg.acceptance = 63U;

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
    msg.setTimeStamp(0.187880642605);
    msg.setSource(22230U);
    msg.setSourceEntity(154U);
    msg.setDestination(32430U);
    msg.setDestinationEntity(60U);
    msg.type = 90U;
    msg.reason = 26U;
    msg.value = 0.0964927627135;
    msg.timestep = 0.692284949441;

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
    msg.setTimeStamp(0.167528193135);
    msg.setSource(10433U);
    msg.setSourceEntity(46U);
    msg.setDestination(45837U);
    msg.setDestinationEntity(45U);
    msg.type = 246U;
    msg.reason = 11U;
    msg.value = 0.394898200971;
    msg.timestep = 0.164361914761;

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
    msg.setTimeStamp(0.887286539778);
    msg.setSource(10589U);
    msg.setSourceEntity(163U);
    msg.setDestination(18673U);
    msg.setDestinationEntity(248U);
    msg.type = 134U;
    msg.reason = 189U;
    msg.value = 0.856242368323;
    msg.timestep = 0.0308186909188;

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
    msg.setTimeStamp(0.657866125326);
    msg.setSource(28841U);
    msg.setSourceEntity(10U);
    msg.setDestination(13860U);
    msg.setDestinationEntity(99U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CFQHDBTOVYZPFEZMGISOMRPQFSRTMNOZXFCYGMHUCCQUFAZFVAVHUTPVIFLLWQGBBRJGHCYEUSCGNLKISXQTWKIJOLDQP");
    tmp_msg_0.lat = 0.365051243231;
    tmp_msg_0.lon = 0.0290679320768;
    tmp_msg_0.depth = 0.744075596519;
    tmp_msg_0.query_channel = 131U;
    tmp_msg_0.reply_channel = 88U;
    tmp_msg_0.transponder_delay = 224U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.386762799292;
    msg.y = 0.107418464932;
    msg.var_x = 0.732924431566;
    msg.var_y = 0.683654797624;
    msg.distance = 0.988966196977;

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
    msg.setTimeStamp(0.959452392337);
    msg.setSource(40051U);
    msg.setSourceEntity(19U);
    msg.setDestination(53927U);
    msg.setDestinationEntity(230U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WBSMWGHYFDMMLFSPEVPUAIPCZBZZVASUDVKNEPEVIFPSOMPJBMSHOMFIDYRZTQWWHYGWNARJHJRSTZKVTQKGNKNMXQUECGVOKDRBPRMOMQCSATOEWNRFUDIPVZXBIKOCOCCTENXCELDTXQGSHFOAVLBGNVDCYIQDCDCTURBLAJBBSIUNWKNXPLUJGHHQQARMFRUBZYQJQZXYLTIXWTXLWKHUGEGJLFAKO");
    tmp_msg_0.lat = 0.894189000438;
    tmp_msg_0.lon = 0.797310623538;
    tmp_msg_0.depth = 0.211340959784;
    tmp_msg_0.query_channel = 236U;
    tmp_msg_0.reply_channel = 109U;
    tmp_msg_0.transponder_delay = 145U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.122400373173;
    msg.y = 0.225261155274;
    msg.var_x = 0.56214733421;
    msg.var_y = 0.694148430683;
    msg.distance = 0.38835964704;

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
    msg.setTimeStamp(0.792757552098);
    msg.setSource(11133U);
    msg.setSourceEntity(30U);
    msg.setDestination(936U);
    msg.setDestinationEntity(214U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JXXYHEKFCFJNYHRNBTPBCKTFCQOCLPIBAHYMSDP");
    tmp_msg_0.lat = 0.561986088517;
    tmp_msg_0.lon = 0.721472444293;
    tmp_msg_0.depth = 0.809355119967;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 38U;
    tmp_msg_0.transponder_delay = 31U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.236977893015;
    msg.y = 0.144736423977;
    msg.var_x = 0.243066613805;
    msg.var_y = 0.130484375154;
    msg.distance = 0.868495776553;

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
    msg.setTimeStamp(0.650846984239);
    msg.setSource(61623U);
    msg.setSourceEntity(254U);
    msg.setDestination(64118U);
    msg.setDestinationEntity(13U);
    msg.state = 213U;

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
    msg.setTimeStamp(0.510879000983);
    msg.setSource(21623U);
    msg.setSourceEntity(178U);
    msg.setDestination(60040U);
    msg.setDestinationEntity(159U);
    msg.state = 132U;

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
    msg.setTimeStamp(0.487966017011);
    msg.setSource(56489U);
    msg.setSourceEntity(128U);
    msg.setDestination(62725U);
    msg.setDestinationEntity(253U);
    msg.state = 179U;

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
    msg.setTimeStamp(0.654943066477);
    msg.setSource(1637U);
    msg.setSourceEntity(88U);
    msg.setDestination(24687U);
    msg.setDestinationEntity(124U);
    msg.x = 0.649792933993;
    msg.y = 0.719299004518;
    msg.z = 0.641756414002;

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
    msg.setTimeStamp(0.474904407363);
    msg.setSource(56528U);
    msg.setSourceEntity(105U);
    msg.setDestination(17607U);
    msg.setDestinationEntity(39U);
    msg.x = 0.0557459297343;
    msg.y = 0.979936399674;
    msg.z = 0.178708465102;

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
    msg.setTimeStamp(0.678008407451);
    msg.setSource(872U);
    msg.setSourceEntity(150U);
    msg.setDestination(33520U);
    msg.setDestinationEntity(52U);
    msg.x = 0.969835221282;
    msg.y = 0.870909589738;
    msg.z = 0.511431042281;

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
    msg.setTimeStamp(0.188677253179);
    msg.setSource(25858U);
    msg.setSourceEntity(121U);
    msg.setDestination(53758U);
    msg.setDestinationEntity(199U);
    msg.va = 0.936263609792;
    msg.aoa = 0.353474121466;
    msg.ssa = 0.883970786852;

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
    msg.setTimeStamp(0.251977768296);
    msg.setSource(43440U);
    msg.setSourceEntity(25U);
    msg.setDestination(48809U);
    msg.setDestinationEntity(153U);
    msg.va = 0.189093463266;
    msg.aoa = 0.515596301307;
    msg.ssa = 0.281240673031;

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
    msg.setTimeStamp(0.958393457979);
    msg.setSource(47735U);
    msg.setSourceEntity(86U);
    msg.setDestination(58604U);
    msg.setDestinationEntity(16U);
    msg.va = 0.349571976615;
    msg.aoa = 0.844178748439;
    msg.ssa = 0.926254104748;

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
    msg.setTimeStamp(0.154567327822);
    msg.setSource(55577U);
    msg.setSourceEntity(220U);
    msg.setDestination(13073U);
    msg.setDestinationEntity(19U);
    msg.value = 0.161518412391;

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
    msg.setTimeStamp(0.841438821856);
    msg.setSource(6169U);
    msg.setSourceEntity(147U);
    msg.setDestination(15974U);
    msg.setDestinationEntity(40U);
    msg.value = 0.642451771121;

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
    msg.setTimeStamp(0.828315632323);
    msg.setSource(47311U);
    msg.setSourceEntity(12U);
    msg.setDestination(38453U);
    msg.setDestinationEntity(241U);
    msg.value = 0.707023274585;

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
    msg.setTimeStamp(0.859440348774);
    msg.setSource(47947U);
    msg.setSourceEntity(29U);
    msg.setDestination(3879U);
    msg.setDestinationEntity(182U);
    msg.value = 0.297202519932;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.359676163177);
    msg.setSource(20080U);
    msg.setSourceEntity(1U);
    msg.setDestination(31108U);
    msg.setDestinationEntity(91U);
    msg.value = 0.788749642526;
    msg.z_units = 42U;

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
    msg.setTimeStamp(0.911563695178);
    msg.setSource(65404U);
    msg.setSourceEntity(53U);
    msg.setDestination(20419U);
    msg.setDestinationEntity(74U);
    msg.value = 0.339781414782;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.751900856175);
    msg.setSource(14381U);
    msg.setSourceEntity(190U);
    msg.setDestination(47108U);
    msg.setDestinationEntity(247U);
    msg.value = 0.262514448612;
    msg.speed_units = 30U;

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
    msg.setTimeStamp(0.303560722392);
    msg.setSource(53213U);
    msg.setSourceEntity(137U);
    msg.setDestination(42162U);
    msg.setDestinationEntity(66U);
    msg.value = 0.833258588393;
    msg.speed_units = 222U;

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
    msg.setTimeStamp(0.0341313322216);
    msg.setSource(34900U);
    msg.setSourceEntity(79U);
    msg.setDestination(6867U);
    msg.setDestinationEntity(101U);
    msg.value = 0.137954243382;
    msg.speed_units = 195U;

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
    msg.setTimeStamp(0.92183698443);
    msg.setSource(44196U);
    msg.setSourceEntity(136U);
    msg.setDestination(29059U);
    msg.setDestinationEntity(38U);
    msg.value = 0.852038549854;

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
    msg.setTimeStamp(0.146352309464);
    msg.setSource(11924U);
    msg.setSourceEntity(187U);
    msg.setDestination(13390U);
    msg.setDestinationEntity(250U);
    msg.value = 0.926133534505;

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
    msg.setTimeStamp(0.714277697138);
    msg.setSource(23203U);
    msg.setSourceEntity(62U);
    msg.setDestination(52623U);
    msg.setDestinationEntity(229U);
    msg.value = 0.20383626749;

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
    msg.setTimeStamp(0.711122926971);
    msg.setSource(59101U);
    msg.setSourceEntity(98U);
    msg.setDestination(41201U);
    msg.setDestinationEntity(192U);
    msg.value = 0.697425005159;

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
    msg.setTimeStamp(0.307216517343);
    msg.setSource(35030U);
    msg.setSourceEntity(148U);
    msg.setDestination(27669U);
    msg.setDestinationEntity(202U);
    msg.value = 0.483406731474;

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
    msg.setTimeStamp(0.32093411945);
    msg.setSource(2307U);
    msg.setSourceEntity(55U);
    msg.setDestination(24716U);
    msg.setDestinationEntity(127U);
    msg.value = 0.234593204506;

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
    msg.setTimeStamp(0.719544361825);
    msg.setSource(47430U);
    msg.setSourceEntity(222U);
    msg.setDestination(48042U);
    msg.setDestinationEntity(124U);
    msg.value = 0.0487207479632;

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
    msg.setTimeStamp(0.512730644322);
    msg.setSource(44152U);
    msg.setSourceEntity(87U);
    msg.setDestination(34397U);
    msg.setDestinationEntity(225U);
    msg.value = 0.677039954375;

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
    msg.setTimeStamp(0.535473201642);
    msg.setSource(28361U);
    msg.setSourceEntity(105U);
    msg.setDestination(63108U);
    msg.setDestinationEntity(18U);
    msg.value = 0.519167456119;

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
    msg.setTimeStamp(0.743887427128);
    msg.setSource(41157U);
    msg.setSourceEntity(229U);
    msg.setDestination(60563U);
    msg.setDestinationEntity(171U);
    msg.path_ref = 2526029261U;
    msg.start_lat = 0.992735454929;
    msg.start_lon = 0.252866254522;
    msg.start_z = 0.897480563142;
    msg.start_z_units = 224U;
    msg.end_lat = 0.721507827559;
    msg.end_lon = 0.673072533548;
    msg.end_z = 0.197613270748;
    msg.end_z_units = 228U;
    msg.speed = 0.816510134724;
    msg.speed_units = 121U;
    msg.lradius = 0.359725887956;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.969951321274);
    msg.setSource(55797U);
    msg.setSourceEntity(38U);
    msg.setDestination(63397U);
    msg.setDestinationEntity(174U);
    msg.path_ref = 80417359U;
    msg.start_lat = 0.206871976335;
    msg.start_lon = 0.373071498045;
    msg.start_z = 0.976387239893;
    msg.start_z_units = 201U;
    msg.end_lat = 0.826946586553;
    msg.end_lon = 0.76833907681;
    msg.end_z = 0.932603637357;
    msg.end_z_units = 221U;
    msg.speed = 0.232817546588;
    msg.speed_units = 113U;
    msg.lradius = 0.38794235052;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.648361645123);
    msg.setSource(36564U);
    msg.setSourceEntity(252U);
    msg.setDestination(57258U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 1569076984U;
    msg.start_lat = 0.995826136214;
    msg.start_lon = 0.0624033634049;
    msg.start_z = 0.843417091252;
    msg.start_z_units = 133U;
    msg.end_lat = 0.573869263251;
    msg.end_lon = 0.422939011936;
    msg.end_z = 0.0312708703106;
    msg.end_z_units = 111U;
    msg.speed = 0.637916403605;
    msg.speed_units = 129U;
    msg.lradius = 0.989584628758;
    msg.flags = 213U;

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
    msg.setTimeStamp(0.917170482794);
    msg.setSource(45086U);
    msg.setSourceEntity(105U);
    msg.setDestination(6071U);
    msg.setDestinationEntity(166U);
    msg.x = 0.375492147877;
    msg.y = 0.395386916598;
    msg.z = 0.132798857386;
    msg.k = 0.862627142474;
    msg.m = 0.16161370511;
    msg.n = 0.798347393015;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.6473575185);
    msg.setSource(17522U);
    msg.setSourceEntity(58U);
    msg.setDestination(37980U);
    msg.setDestinationEntity(195U);
    msg.x = 0.709019418264;
    msg.y = 0.392540822235;
    msg.z = 0.15500246204;
    msg.k = 0.247950855866;
    msg.m = 0.346065846639;
    msg.n = 0.4946564213;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.284310335336);
    msg.setSource(42920U);
    msg.setSourceEntity(244U);
    msg.setDestination(19706U);
    msg.setDestinationEntity(134U);
    msg.x = 0.628387779573;
    msg.y = 0.975143833178;
    msg.z = 0.759559481502;
    msg.k = 0.927066185954;
    msg.m = 0.225160218808;
    msg.n = 0.270893970518;
    msg.flags = 221U;

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
    msg.setTimeStamp(0.211219985468);
    msg.setSource(63388U);
    msg.setSourceEntity(94U);
    msg.setDestination(48922U);
    msg.setDestinationEntity(237U);
    msg.value = 0.971350270445;

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
    msg.setTimeStamp(0.794638786365);
    msg.setSource(46142U);
    msg.setSourceEntity(101U);
    msg.setDestination(59522U);
    msg.setDestinationEntity(7U);
    msg.value = 0.296249122732;

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
    msg.setTimeStamp(0.257071199746);
    msg.setSource(31751U);
    msg.setSourceEntity(65U);
    msg.setDestination(19782U);
    msg.setDestinationEntity(122U);
    msg.value = 0.478425099407;

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
    msg.setTimeStamp(0.954671221452);
    msg.setSource(35047U);
    msg.setSourceEntity(34U);
    msg.setDestination(22569U);
    msg.setDestinationEntity(47U);
    msg.u = 0.719255325995;
    msg.v = 0.649360015666;
    msg.w = 0.938605558329;
    msg.p = 0.293022140154;
    msg.q = 0.458371967509;
    msg.r = 0.297661530469;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.860730842034);
    msg.setSource(31121U);
    msg.setSourceEntity(91U);
    msg.setDestination(43705U);
    msg.setDestinationEntity(138U);
    msg.u = 0.244745260099;
    msg.v = 0.249034979876;
    msg.w = 0.113009970243;
    msg.p = 0.765375004636;
    msg.q = 0.460214066233;
    msg.r = 0.0730512061521;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.607506715193);
    msg.setSource(19868U);
    msg.setSourceEntity(19U);
    msg.setDestination(1990U);
    msg.setDestinationEntity(27U);
    msg.u = 0.798505687826;
    msg.v = 0.195737199012;
    msg.w = 0.551243950175;
    msg.p = 0.0163195026188;
    msg.q = 0.190507121134;
    msg.r = 0.524559315493;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.0219610883407);
    msg.setSource(24113U);
    msg.setSourceEntity(12U);
    msg.setDestination(1844U);
    msg.setDestinationEntity(113U);
    msg.path_ref = 598949007U;
    msg.start_lat = 0.980350948457;
    msg.start_lon = 0.813290380312;
    msg.start_z = 0.918095633061;
    msg.start_z_units = 225U;
    msg.end_lat = 0.543548330823;
    msg.end_lon = 0.474395190777;
    msg.end_z = 0.486876043155;
    msg.end_z_units = 114U;
    msg.lradius = 0.718450583329;
    msg.flags = 44U;
    msg.x = 0.0653348987178;
    msg.y = 0.0471796679375;
    msg.z = 0.308339565342;
    msg.vx = 0.777577262342;
    msg.vy = 0.497603690111;
    msg.vz = 0.258779586158;
    msg.course_error = 0.539948723201;
    msg.eta = 26488U;

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
    msg.setTimeStamp(0.528615430827);
    msg.setSource(21713U);
    msg.setSourceEntity(74U);
    msg.setDestination(35049U);
    msg.setDestinationEntity(211U);
    msg.path_ref = 4629319U;
    msg.start_lat = 0.830119829996;
    msg.start_lon = 0.811640791033;
    msg.start_z = 0.152328301235;
    msg.start_z_units = 126U;
    msg.end_lat = 0.639786161753;
    msg.end_lon = 0.997168250848;
    msg.end_z = 0.613007169288;
    msg.end_z_units = 166U;
    msg.lradius = 0.938977650616;
    msg.flags = 171U;
    msg.x = 0.0518364567096;
    msg.y = 0.0249643600931;
    msg.z = 0.451527996279;
    msg.vx = 0.738033992567;
    msg.vy = 0.261438460988;
    msg.vz = 0.151556332562;
    msg.course_error = 0.665645676671;
    msg.eta = 44049U;

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
    msg.setTimeStamp(0.828092165599);
    msg.setSource(5513U);
    msg.setSourceEntity(92U);
    msg.setDestination(55622U);
    msg.setDestinationEntity(182U);
    msg.path_ref = 2430903862U;
    msg.start_lat = 0.948104625588;
    msg.start_lon = 0.210829545141;
    msg.start_z = 0.203024830528;
    msg.start_z_units = 161U;
    msg.end_lat = 0.65827142938;
    msg.end_lon = 0.344922845144;
    msg.end_z = 0.541563489172;
    msg.end_z_units = 247U;
    msg.lradius = 0.202812249848;
    msg.flags = 26U;
    msg.x = 0.932369314874;
    msg.y = 0.386476537916;
    msg.z = 0.243482192079;
    msg.vx = 0.352536401813;
    msg.vy = 0.488612134056;
    msg.vz = 0.813490889104;
    msg.course_error = 0.277915722135;
    msg.eta = 133U;

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
    msg.setTimeStamp(0.542864992977);
    msg.setSource(50003U);
    msg.setSourceEntity(220U);
    msg.setDestination(42831U);
    msg.setDestinationEntity(228U);
    msg.k = 0.804035155068;
    msg.m = 0.823561050769;
    msg.n = 0.817311646741;

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
    msg.setTimeStamp(0.177031550587);
    msg.setSource(4988U);
    msg.setSourceEntity(25U);
    msg.setDestination(2151U);
    msg.setDestinationEntity(114U);
    msg.k = 0.737888202157;
    msg.m = 0.00688060019114;
    msg.n = 0.689926566977;

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
    msg.setTimeStamp(0.792835947407);
    msg.setSource(1830U);
    msg.setSourceEntity(156U);
    msg.setDestination(51893U);
    msg.setDestinationEntity(248U);
    msg.k = 0.311525448564;
    msg.m = 0.515845730449;
    msg.n = 0.675527747145;

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
    msg.setTimeStamp(0.976430455364);
    msg.setSource(39259U);
    msg.setSourceEntity(103U);
    msg.setDestination(31510U);
    msg.setDestinationEntity(208U);
    msg.p = 0.616332699712;
    msg.i = 0.990466658326;
    msg.d = 0.00679288579579;
    msg.a = 0.986090773031;

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
    msg.setTimeStamp(0.588370544154);
    msg.setSource(17246U);
    msg.setSourceEntity(150U);
    msg.setDestination(44348U);
    msg.setDestinationEntity(14U);
    msg.p = 0.195141816858;
    msg.i = 0.7905060221;
    msg.d = 0.160673362003;
    msg.a = 0.885417364796;

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
    msg.setTimeStamp(0.41156713394);
    msg.setSource(62936U);
    msg.setSourceEntity(213U);
    msg.setDestination(53923U);
    msg.setDestinationEntity(111U);
    msg.p = 0.452745795645;
    msg.i = 0.168430843175;
    msg.d = 0.69023879094;
    msg.a = 0.191120611393;

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
    msg.setTimeStamp(0.672635467531);
    msg.setSource(5858U);
    msg.setSourceEntity(31U);
    msg.setDestination(35206U);
    msg.setDestinationEntity(16U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.774601635446);
    msg.setSource(25509U);
    msg.setSourceEntity(204U);
    msg.setDestination(17153U);
    msg.setDestinationEntity(115U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.387738262127);
    msg.setSource(38745U);
    msg.setSourceEntity(152U);
    msg.setDestination(20381U);
    msg.setDestinationEntity(83U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.400972639667);
    msg.setSource(22427U);
    msg.setSourceEntity(47U);
    msg.setDestination(34144U);
    msg.setDestinationEntity(21U);
    msg.x = 0.652145677976;
    msg.y = 0.0963971448426;
    msg.z = 0.910402639237;
    msg.vx = 0.257697522138;
    msg.vy = 0.678236031473;
    msg.vz = 0.699122043647;
    msg.ax = 0.011682934047;
    msg.ay = 0.506468956637;
    msg.az = 0.666642654908;
    msg.flags = 8260U;

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
    msg.setTimeStamp(0.415060350055);
    msg.setSource(18928U);
    msg.setSourceEntity(25U);
    msg.setDestination(65042U);
    msg.setDestinationEntity(254U);
    msg.x = 0.39358098395;
    msg.y = 0.226026002263;
    msg.z = 0.587555146913;
    msg.vx = 0.988328581003;
    msg.vy = 0.832550563018;
    msg.vz = 0.279749245986;
    msg.ax = 0.411379591544;
    msg.ay = 0.74947351055;
    msg.az = 0.379666196723;
    msg.flags = 50654U;

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
    msg.setTimeStamp(0.258750490859);
    msg.setSource(1331U);
    msg.setSourceEntity(135U);
    msg.setDestination(38168U);
    msg.setDestinationEntity(160U);
    msg.x = 0.20988064188;
    msg.y = 0.133424133891;
    msg.z = 0.722496889418;
    msg.vx = 0.808719042991;
    msg.vy = 0.456132256025;
    msg.vz = 0.496693980831;
    msg.ax = 0.978336672315;
    msg.ay = 0.959805226271;
    msg.az = 0.484579219405;
    msg.flags = 18490U;

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
    msg.setTimeStamp(0.176294674217);
    msg.setSource(26092U);
    msg.setSourceEntity(5U);
    msg.setDestination(64123U);
    msg.setDestinationEntity(89U);
    msg.value = 0.809263946663;

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
    msg.setTimeStamp(0.779311659853);
    msg.setSource(8709U);
    msg.setSourceEntity(66U);
    msg.setDestination(51495U);
    msg.setDestinationEntity(214U);
    msg.value = 0.650697810002;

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
    msg.setTimeStamp(0.798930731185);
    msg.setSource(48767U);
    msg.setSourceEntity(60U);
    msg.setDestination(2357U);
    msg.setDestinationEntity(96U);
    msg.value = 0.194275171152;

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
    msg.setTimeStamp(0.525606416491);
    msg.setSource(29044U);
    msg.setSourceEntity(66U);
    msg.setDestination(22438U);
    msg.setDestinationEntity(213U);
    msg.timeout = 37732U;
    msg.lat = 0.291964375102;
    msg.lon = 0.915106541993;
    msg.z = 0.902523028856;
    msg.z_units = 176U;
    msg.speed = 0.925624498656;
    msg.speed_units = 225U;
    msg.roll = 0.802378272892;
    msg.pitch = 0.236692205922;
    msg.yaw = 0.473134358799;
    msg.custom.assign("JKRINSKEBPLZDATVYGUKNQPAIJMXQGEHQAHZNIDLEWMSKIOGCWHJTBSHTQBUMXVQURIDHUOQBPKBCVFRZRHULTVMRSXOFPNWZUQAIBXVTQAOJFLCLLBKTGDMNCEJAVZVNPRGFWAKYQDESQCNMLPFZXURDVTJODJGEILDMRYJ");

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
    msg.setTimeStamp(0.695461428682);
    msg.setSource(29196U);
    msg.setSourceEntity(110U);
    msg.setDestination(47359U);
    msg.setDestinationEntity(37U);
    msg.timeout = 43293U;
    msg.lat = 0.137379167053;
    msg.lon = 0.122002651543;
    msg.z = 0.945976355828;
    msg.z_units = 224U;
    msg.speed = 0.100946537371;
    msg.speed_units = 124U;
    msg.roll = 0.819020264997;
    msg.pitch = 0.762517516778;
    msg.yaw = 0.485723963083;
    msg.custom.assign("CFXIORPVAMYFETJDJEBAGJXSAXKVMSUOTZWQEWICPQZVSRGECDJXIQLKKNLYDASIXQVAEELNRIHAKQZOFREBSJGBZFJEDBBVVBHWAPOGUBHNWQOSWYZM");

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
    msg.setTimeStamp(0.439544350646);
    msg.setSource(5423U);
    msg.setSourceEntity(6U);
    msg.setDestination(47462U);
    msg.setDestinationEntity(32U);
    msg.timeout = 33614U;
    msg.lat = 0.271489502071;
    msg.lon = 0.545778131736;
    msg.z = 0.0449953519446;
    msg.z_units = 199U;
    msg.speed = 0.564362115503;
    msg.speed_units = 229U;
    msg.roll = 0.783409862201;
    msg.pitch = 0.255547176622;
    msg.yaw = 0.93352127275;
    msg.custom.assign("PNEWBUWYFYQUBZSVYDCQIYCQNAATMOWHCKITGAJVPGNS");

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
    msg.setTimeStamp(0.794122577003);
    msg.setSource(52101U);
    msg.setSourceEntity(121U);
    msg.setDestination(491U);
    msg.setDestinationEntity(133U);
    msg.timeout = 15174U;
    msg.lat = 0.145011472738;
    msg.lon = 0.625484229293;
    msg.z = 0.284313332075;
    msg.z_units = 161U;
    msg.speed = 0.241331117041;
    msg.speed_units = 161U;
    msg.duration = 41352U;
    msg.radius = 0.672511717246;
    msg.flags = 110U;
    msg.custom.assign("XZPRPOZXAWARASIPKKPXZLNWNLUIHXGCVTODJZYIEFSMHGBNKSEYKLPDABBQYKCXWKCHGCSPSQBSVJGONCUZXWQAIBIBTFOJMPJDJAWYNRZEWQEKLODXPTQIHSVAAAKRFVGNEFWVGQSHECDURFOTYCCQGCNKVWFMUYHILHTODMSSWFMWZYUZRDRGTPBCLBUNJONDNEHZEZJBUGALFVEYVRJKFLTQLOBOUQJTMYEDTIPY");

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
    msg.setTimeStamp(0.447171966949);
    msg.setSource(59162U);
    msg.setSourceEntity(118U);
    msg.setDestination(60341U);
    msg.setDestinationEntity(16U);
    msg.timeout = 32605U;
    msg.lat = 0.750606851141;
    msg.lon = 0.859974652735;
    msg.z = 0.507678174619;
    msg.z_units = 210U;
    msg.speed = 0.847745778752;
    msg.speed_units = 140U;
    msg.duration = 15709U;
    msg.radius = 0.0593440213937;
    msg.flags = 134U;
    msg.custom.assign("XJBWKLGBNQWQAUEEJSRNTSZNIPTQSGUKGCOTAYMILXIOSOWQCUBITPXPHPRUQDYAZZFNJZGTIUOSNLAZBRRVULWAYITBDMYQCNDFKZMVRPHEPFHGFMNPKJSFCXCONPYGZPZWHSSOKTQTLCBBZBUSWJM");

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
    msg.setTimeStamp(0.10880095328);
    msg.setSource(27023U);
    msg.setSourceEntity(107U);
    msg.setDestination(23574U);
    msg.setDestinationEntity(127U);
    msg.timeout = 26393U;
    msg.lat = 0.360355180374;
    msg.lon = 0.552341174178;
    msg.z = 0.843929274328;
    msg.z_units = 0U;
    msg.speed = 0.806808957314;
    msg.speed_units = 22U;
    msg.duration = 15214U;
    msg.radius = 0.308406786371;
    msg.flags = 86U;
    msg.custom.assign("LMXAQPBCNJLMHYZMIZRJVFKWLLSIZLHVYRWUCKFRXIOCSXWWHGQTVXWVMCVLESEOBEFPIDKMNRYVAPFYBJHZPKSWOOTZIKAFOJGUQAJDOGDQRFYAMGLPUYOWHDGNINOWISDMCSYOXNDNGDBSPHTZPUEQHCKYXRAUGASLQBZCJQUGQGFZAKVBTPEQFJ");

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
    msg.setTimeStamp(0.232774171396);
    msg.setSource(56343U);
    msg.setSourceEntity(67U);
    msg.setDestination(6198U);
    msg.setDestinationEntity(4U);
    msg.custom.assign("KDRIMREJLFMJCWUMUDVTCXLEAFLAESKUCIZEVPYKUKKCYVAOCHEBRHSAEJBNLHCZQOVKVOQORWEHKTSISIIYGYFFQDIEXZIBBFWVDJMQLQSNZBMUCPMBAZUOVQFTOKGLGSREHTSPRRPCQOSOUVDITTFLCYATIOJZNTZSNWKXFGJARHYYXWLNZXPOWCVPTUQDALWGRQLJXMIMGQBNXJWADDKGHHNDGUVFUJZGMNT");

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
    msg.setTimeStamp(0.867552295027);
    msg.setSource(60399U);
    msg.setSourceEntity(4U);
    msg.setDestination(61422U);
    msg.setDestinationEntity(226U);
    msg.custom.assign("KPZUGCRADIDKSNRGIVBHFCCUPGXVMUBCBWVDJJFRSZIEPSQLKTJSKQFCXMVBSTZLHADPUANNZUJMXHEQUHKTQRNFZOWGFLBCGIXUTPEJLEYFWHWBQIQTJLHENFWIHAQMFAGXLIBKMWDNJFYSVRMZXPXRESGVEOFAUADCYLWGYZKYHRDOTREOKQOLMRDBXDVVIVWMUQNUAIJYSOTBHSMAGEONPHIVJCZL");

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
    msg.setTimeStamp(0.0207665126239);
    msg.setSource(15098U);
    msg.setSourceEntity(132U);
    msg.setDestination(49294U);
    msg.setDestinationEntity(11U);
    msg.custom.assign("MVUCVBLEWRAIDZEOXNDKHJFWLDNNKXKJDFTBBMH");

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
    msg.setTimeStamp(0.325579912104);
    msg.setSource(45052U);
    msg.setSourceEntity(9U);
    msg.setDestination(7594U);
    msg.setDestinationEntity(81U);
    msg.timeout = 50010U;
    msg.lat = 0.384308618217;
    msg.lon = 0.00911269358786;
    msg.z = 0.519668650139;
    msg.z_units = 220U;
    msg.duration = 40947U;
    msg.speed = 0.676270348461;
    msg.speed_units = 211U;
    msg.type = 215U;
    msg.radius = 0.780757515841;
    msg.length = 0.875340356412;
    msg.bearing = 0.295034338955;
    msg.direction = 98U;
    msg.custom.assign("URXENWKDWFYCMKULPVHZVJWZEDEGYAKVZAFWMQDUMTUPOLVFJKWCGEFQPBXHILNRWNMUQYBNPWPDIIQSDLXCFCXMZZSZGABWILRASMNEADSYQLDXTKFLTBATAQIOHRKHCZHGXPNQOSOLVNVIYEBCMNKTTRJSJVTCFQFQSTWJIUYXAOOUOPRVPCGDBCKSHZGHSDECPGMOJBNOUGXJUPYMHJYMHZXYIBHNEGVRRZFDBASRTULKIQFTY");

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
    msg.setTimeStamp(0.75443894863);
    msg.setSource(10696U);
    msg.setSourceEntity(49U);
    msg.setDestination(7149U);
    msg.setDestinationEntity(157U);
    msg.timeout = 19804U;
    msg.lat = 0.634025303278;
    msg.lon = 0.482334505622;
    msg.z = 0.439305303467;
    msg.z_units = 209U;
    msg.duration = 54213U;
    msg.speed = 0.782069123647;
    msg.speed_units = 113U;
    msg.type = 44U;
    msg.radius = 0.752651234016;
    msg.length = 0.499801420805;
    msg.bearing = 0.936689973842;
    msg.direction = 243U;
    msg.custom.assign("TQPREFMQXJDHAFNAKBPATQTCRXRBFCZSIUYVOUWCWSEDPOVFCZWOQIKNAUPPOOTEGHZYKHJTINJGCYKLHIBNSHQMKQSIBZDDJZIMIYLFJWBRCGEDXNFWIRGVUBZOEVFMHEUUMXYSKIZSCLRLNBYLPRBAOJNQQXXZCVATDNNWWGPEELUHGMVEXUOGSXYLRHOJMDDXWCJWZNTRVRPFXKSMVFTDPYUIMUKZYT");

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
    msg.setTimeStamp(0.70189938837);
    msg.setSource(31920U);
    msg.setSourceEntity(175U);
    msg.setDestination(8780U);
    msg.setDestinationEntity(126U);
    msg.timeout = 54052U;
    msg.lat = 0.360129939536;
    msg.lon = 0.107007277339;
    msg.z = 0.238878814617;
    msg.z_units = 131U;
    msg.duration = 3153U;
    msg.speed = 0.760199443432;
    msg.speed_units = 89U;
    msg.type = 65U;
    msg.radius = 0.48507469274;
    msg.length = 0.648865860973;
    msg.bearing = 0.183333646747;
    msg.direction = 109U;
    msg.custom.assign("DQLPNGNWNTYAPZIVISVWNMZQOZLCOCAWRXCRYRGRSKAPIQKHBGMOYLWVMXVUKTHRPMGQNNWWNUSMIDJUHSXZAWHRDFHYFQUEIWLEJOASLBBPSRZUIGBUXGWRJVIRUYYYTNZHGKQFOLMUBRINEUQISMS");

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
    msg.setTimeStamp(0.278574038427);
    msg.setSource(42067U);
    msg.setSourceEntity(191U);
    msg.setDestination(55928U);
    msg.setDestinationEntity(97U);
    msg.duration = 47306U;
    msg.custom.assign("QBGLVLMGAK");

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
    msg.setTimeStamp(0.858452814489);
    msg.setSource(37400U);
    msg.setSourceEntity(149U);
    msg.setDestination(52147U);
    msg.setDestinationEntity(133U);
    msg.duration = 895U;
    msg.custom.assign("CBYLVZPKRWICCYOIJJLEGZBQMJGEOWPQGDDXTPBNMYIILCRILBRFEXJCSZAKQQFSYNEFSXGZDAXVWGIUGAJDUSSKAZHAPCIPNOQSRPFDVYSWCJHTQQZZ");

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
    msg.setTimeStamp(0.257068826093);
    msg.setSource(60598U);
    msg.setSourceEntity(65U);
    msg.setDestination(55599U);
    msg.setDestinationEntity(242U);
    msg.duration = 6183U;
    msg.custom.assign("IOKOMIZOJWNOMXVJFVSBXGUUBZEDIGUGLSRLGHFCVKPALWLCUCSIJNXSYXWNGHQUDDHITCDAQSXNPWEKJKJOKMTXAF");

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
    msg.setTimeStamp(0.0791620839357);
    msg.setSource(715U);
    msg.setSourceEntity(133U);
    msg.setDestination(10038U);
    msg.setDestinationEntity(37U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0318503549544;
    tmp_msg_0.speed_units = 15U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11065U;
    msg.custom.assign("CQDAACXMVIIFFHMIPETZRBURHARHSDDJ");

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
    msg.setTimeStamp(0.0309671741815);
    msg.setSource(19560U);
    msg.setSourceEntity(150U);
    msg.setDestination(59602U);
    msg.setDestinationEntity(147U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.0717920708147;
    msg.control.set(tmp_msg_0);
    msg.duration = 62262U;
    msg.custom.assign("OQCVUURWLZBCRDLXESDEILQNMJQUNMYNEDGRBQNGNANSZWZSKIWKLVMFLKONPDFFOAWZOJZAHFPSKWOYEBJC");

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
    msg.setTimeStamp(0.845667929261);
    msg.setSource(7315U);
    msg.setSourceEntity(205U);
    msg.setDestination(10797U);
    msg.setDestinationEntity(210U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1927642582U;
    tmp_msg_0.start_lat = 0.638919111281;
    tmp_msg_0.start_lon = 0.746904914793;
    tmp_msg_0.start_z = 0.375632932223;
    tmp_msg_0.start_z_units = 11U;
    tmp_msg_0.end_lat = 0.508204731499;
    tmp_msg_0.end_lon = 0.394390602638;
    tmp_msg_0.end_z = 0.923494491485;
    tmp_msg_0.end_z_units = 197U;
    tmp_msg_0.speed = 0.00418213991853;
    tmp_msg_0.speed_units = 60U;
    tmp_msg_0.lradius = 0.44610225427;
    tmp_msg_0.flags = 51U;
    msg.control.set(tmp_msg_0);
    msg.duration = 31220U;
    msg.custom.assign("AEVSJGXYEAAOTMWDQLRJZGBOOGMELQOEPIVMTYLTUWKJCSSPGAERCJDSFBCNKCQPLFYNZSIELZUAOXDUXBQKFGVOBWKEYGARLJWVZMFXLUDZLYFJMZNRQMFTYPDJLHHBNVG");

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
    msg.setTimeStamp(0.968766079442);
    msg.setSource(46880U);
    msg.setSourceEntity(87U);
    msg.setDestination(50525U);
    msg.setDestinationEntity(133U);
    msg.timeout = 7460U;
    msg.lat = 0.0709690987745;
    msg.lon = 0.813658242107;
    msg.z = 0.638068251473;
    msg.z_units = 1U;
    msg.speed = 0.954214107431;
    msg.speed_units = 50U;
    msg.bearing = 0.912723985066;
    msg.cross_angle = 0.171202634588;
    msg.width = 0.581496658641;
    msg.length = 0.927002162781;
    msg.hstep = 0.278722951529;
    msg.coff = 199U;
    msg.alternation = 139U;
    msg.flags = 39U;
    msg.custom.assign("PXWBDQSEWVKUCHKFZQZVZMIGVRYUDWCHVEKMOJGTFVTPLBULITCTFEMTQCWBFCYJAWIUBEPZZCQTBAINUUSXNZFQPMUKWHGAIDAPHOUVSJNWTCEAHKYRJSIGUDYTNEDTLDOCZNDMKCLRXEDFHLSNJXNMJXJOIEYLRBTDZCVRLGAKZJJFYVBE");

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
    msg.setTimeStamp(0.512591958345);
    msg.setSource(31110U);
    msg.setSourceEntity(50U);
    msg.setDestination(61574U);
    msg.setDestinationEntity(154U);
    msg.timeout = 14480U;
    msg.lat = 0.0666703042124;
    msg.lon = 0.193277179819;
    msg.z = 0.738524255791;
    msg.z_units = 69U;
    msg.speed = 0.524688647382;
    msg.speed_units = 78U;
    msg.bearing = 0.0628618081412;
    msg.cross_angle = 0.225463583987;
    msg.width = 0.90827345466;
    msg.length = 0.834799187849;
    msg.hstep = 0.552213905784;
    msg.coff = 85U;
    msg.alternation = 180U;
    msg.flags = 100U;
    msg.custom.assign("OJTJYRTLMRVDXHBHZZULSVRAYQGAIBNGVUGANHKAHPZPNSESFKOXDKXIOQJLKCQMWJDDEVDBUGRRNREX");

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
    msg.setTimeStamp(0.610369279234);
    msg.setSource(8033U);
    msg.setSourceEntity(222U);
    msg.setDestination(43992U);
    msg.setDestinationEntity(60U);
    msg.timeout = 59736U;
    msg.lat = 0.522167990653;
    msg.lon = 0.172874729994;
    msg.z = 0.0870319578835;
    msg.z_units = 208U;
    msg.speed = 0.174323034511;
    msg.speed_units = 29U;
    msg.bearing = 0.876225845923;
    msg.cross_angle = 0.052362874959;
    msg.width = 0.21106397237;
    msg.length = 0.1685735756;
    msg.hstep = 0.637152749691;
    msg.coff = 64U;
    msg.alternation = 140U;
    msg.flags = 51U;
    msg.custom.assign("AQFEGJLLQWJLKAZHCNBHWSVJDAYNCEPVNMXYGJFAMDYOOCUXIGOXGDUXGCGQUUMFKRMVEHESLYAMISTHADVIYHNYWZCBEJWMPCNSYRBRSIBXTWOAEBOFDVVPZCWIPNRXQBWFHJWRDJSCOQQLLSPHUOLKTTNWPXNKZVUMWUZOGCZBNAMHTQSPVUES");

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
    msg.setTimeStamp(0.0781403181319);
    msg.setSource(29522U);
    msg.setSourceEntity(152U);
    msg.setDestination(44608U);
    msg.setDestinationEntity(197U);
    msg.timeout = 54643U;
    msg.lat = 0.186153874681;
    msg.lon = 0.928504727947;
    msg.z = 0.955851741159;
    msg.z_units = 108U;
    msg.speed = 0.353400913238;
    msg.speed_units = 77U;
    msg.custom.assign("KCOXBUGLAPHGPRDMQJYDWITHJALCOFSPRPGAQVADJIFMETHXKMLBEQEJCIPLPYCKCVE");

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
    msg.setTimeStamp(0.500016444493);
    msg.setSource(46126U);
    msg.setSourceEntity(247U);
    msg.setDestination(28737U);
    msg.setDestinationEntity(23U);
    msg.timeout = 46373U;
    msg.lat = 0.955438512762;
    msg.lon = 0.351748271905;
    msg.z = 0.220406907065;
    msg.z_units = 134U;
    msg.speed = 0.191265628832;
    msg.speed_units = 158U;
    msg.custom.assign("VYXEDUSSAFUWTXGXZIVBLYNVFEHOHSXLRSGKZQGBDUFATGBVMPFVYHFPVGWCWTMBUHULRQMRGPAYYNDQJINTWAGUWOKXHDJNKCUOUXQRWCLEUUIZQRRYJKWTESMDMIXJFKXPQWLPESDPSZXIDAEDKCSPOKXR");

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
    msg.setTimeStamp(0.223251517865);
    msg.setSource(46224U);
    msg.setSourceEntity(102U);
    msg.setDestination(3888U);
    msg.setDestinationEntity(110U);
    msg.timeout = 21321U;
    msg.lat = 0.424758170998;
    msg.lon = 0.764415043188;
    msg.z = 0.0694055825533;
    msg.z_units = 194U;
    msg.speed = 0.0132995957446;
    msg.speed_units = 109U;
    msg.custom.assign("VVEQXNNXIMOPUEWUYNPADHEZJPLSYKCAKHFJDSIKXPYGSEYHDSKGCDXDOAQYDRNNYLFTJRRXELGEXFQLMZZGJMKEQWUVDEATFBFVAYEKLSIYIQQSLMCNRTWTCCHHPMFCBKBESZBUJROBPARUZIOKIMNHAWHHTWUCNWLOPCQPWPOXIAQADGHXYZUTIIBFXUNPRVZGILVOMUBKVJDZMOZADGGGFTBQJTVBSWGWVJKTRYNJH");

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
    msg.setTimeStamp(0.642309766134);
    msg.setSource(35115U);
    msg.setSourceEntity(119U);
    msg.setDestination(25366U);
    msg.setDestinationEntity(136U);
    msg.x = 0.231152017619;
    msg.y = 0.439191242566;
    msg.z = 0.825557601839;

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
    msg.setTimeStamp(0.5514056138);
    msg.setSource(39933U);
    msg.setSourceEntity(68U);
    msg.setDestination(31909U);
    msg.setDestinationEntity(66U);
    msg.x = 0.394267239608;
    msg.y = 0.812709465029;
    msg.z = 0.13636575419;

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
    msg.setTimeStamp(0.647423474632);
    msg.setSource(61516U);
    msg.setSourceEntity(197U);
    msg.setDestination(31786U);
    msg.setDestinationEntity(147U);
    msg.x = 0.461607702467;
    msg.y = 0.949822008591;
    msg.z = 0.0636530425433;

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
    msg.setTimeStamp(0.894133272292);
    msg.setSource(16082U);
    msg.setSourceEntity(29U);
    msg.setDestination(19747U);
    msg.setDestinationEntity(120U);
    msg.timeout = 54520U;
    msg.lat = 0.441922076125;
    msg.lon = 0.590761011473;
    msg.z = 0.194546949501;
    msg.z_units = 5U;
    msg.amplitude = 0.472140320611;
    msg.pitch = 0.127402385592;
    msg.speed = 0.242130318845;
    msg.speed_units = 149U;
    msg.custom.assign("XNBUUPVRCITKAGSIRKZHMJLJPOFYGOHAJTFTWDCGFTXPVBVQOBOXXOKTVDMXAOLIWMBAEFSZWVELHNGQUBABGSZNNTVTEWIRDZNDMLVDJXLUBMZXPRHGARYKEZHCTSQJEPNMHZXCKACYQFWBUWNTESCGYRPWIZDOWCQKYRULJFHMZVALXOAHEJMJDSOSQDPMWPHT");

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
    msg.setTimeStamp(0.712841150572);
    msg.setSource(61856U);
    msg.setSourceEntity(19U);
    msg.setDestination(19241U);
    msg.setDestinationEntity(40U);
    msg.timeout = 34102U;
    msg.lat = 0.464102519205;
    msg.lon = 0.0730376913115;
    msg.z = 0.684643769988;
    msg.z_units = 7U;
    msg.amplitude = 0.737795350811;
    msg.pitch = 0.249438297757;
    msg.speed = 0.741591562894;
    msg.speed_units = 0U;
    msg.custom.assign("QRFZPAWLCPYJOUOQEFVEJAGCIKJKNIQXWTIANPVGGJLBUDDFBNVYTTKSULXNMHJCZKCSHYEAIYLLXRPESXPKRHUNEBMMQNKMAXUNFTEKEPIUJXMDDURMGFVCZAJXBFLZJFWQLURBVIEBABHGEISCZUQZDFYWMAWGPTWRNILHOVCMAGTCSVSJQSLCYSTUDTBNFQTXOVKAKQSIO");

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
    msg.setTimeStamp(0.445440598688);
    msg.setSource(32746U);
    msg.setSourceEntity(64U);
    msg.setDestination(55555U);
    msg.setDestinationEntity(183U);
    msg.timeout = 22937U;
    msg.lat = 0.983337913537;
    msg.lon = 0.0276210752612;
    msg.z = 0.260397946516;
    msg.z_units = 111U;
    msg.amplitude = 0.638342357311;
    msg.pitch = 0.0239349022079;
    msg.speed = 0.868035813343;
    msg.speed_units = 192U;
    msg.custom.assign("JAXCODMJSHWAJXXQCYEFIRMYZEHHQBYQTJHDAESTUNJOXLPEFNRUQNQHCUNOGKROPWZBAWOSWZWQWHGQYSULBWVIEVNUESGYFPASXPHWBGBVFTZFZNKECYDRLVTCXLHFXIZ");

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
    msg.setTimeStamp(0.338992718335);
    msg.setSource(25304U);
    msg.setSourceEntity(108U);
    msg.setDestination(20691U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.441628773745);
    msg.setSource(18547U);
    msg.setSourceEntity(20U);
    msg.setDestination(28949U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.697890252627);
    msg.setSource(10758U);
    msg.setSourceEntity(85U);
    msg.setDestination(30970U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.688293532272);
    msg.setSource(15914U);
    msg.setSourceEntity(200U);
    msg.setDestination(13836U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.053925002119;
    msg.lon = 0.114679683201;
    msg.z = 0.192711438353;
    msg.z_units = 156U;
    msg.radius = 0.188984395334;
    msg.duration = 53846U;
    msg.speed = 0.241091103402;
    msg.speed_units = 156U;
    msg.custom.assign("FJNRYBGSCTBITSTSZNSCUZRHGPOQRVAFJIPHAREZPNSKXJNXUWMLQDGMXWLYVHJPDTKJFENIBYUAUKDIMPJWVHYCBQEZIWAMCJVUFLARZQYHXSPNIZTWFYLKHXDLGNTHBWLVOMZMFDOUMYQUGGKEPFDTEIKPGCQEWQOASIW");

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
    msg.setTimeStamp(0.880747746483);
    msg.setSource(36583U);
    msg.setSourceEntity(96U);
    msg.setDestination(14178U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.0819747398454;
    msg.lon = 0.38135977968;
    msg.z = 0.79170619505;
    msg.z_units = 174U;
    msg.radius = 0.562648758774;
    msg.duration = 37589U;
    msg.speed = 0.575792302382;
    msg.speed_units = 252U;
    msg.custom.assign("AREKSQDFCVKVIBFCXCAVJEWRDXPXQ");

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
    msg.setTimeStamp(0.838989348857);
    msg.setSource(14926U);
    msg.setSourceEntity(190U);
    msg.setDestination(30473U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.53278687108;
    msg.lon = 0.297112138791;
    msg.z = 0.139117638913;
    msg.z_units = 0U;
    msg.radius = 0.782335130924;
    msg.duration = 5662U;
    msg.speed = 0.430946191404;
    msg.speed_units = 12U;
    msg.custom.assign("EKWOKBIHZYECLRYXBGFPVPQOSVERQRTSICNFJRYL");

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
    msg.setTimeStamp(0.656197413651);
    msg.setSource(39465U);
    msg.setSourceEntity(222U);
    msg.setDestination(47036U);
    msg.setDestinationEntity(129U);
    msg.timeout = 29917U;
    msg.flags = 169U;
    msg.lat = 0.879553281994;
    msg.lon = 0.889481021633;
    msg.start_z = 0.32111474176;
    msg.start_z_units = 107U;
    msg.end_z = 0.578846324274;
    msg.end_z_units = 169U;
    msg.radius = 0.328143533968;
    msg.speed = 0.685363351382;
    msg.speed_units = 19U;
    msg.custom.assign("JDUZBKKEELYVMRUFSPYIXWXUBFTRHRNMGKYVQQNPKINVPN");

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
    msg.setTimeStamp(0.988851891107);
    msg.setSource(40924U);
    msg.setSourceEntity(164U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(12U);
    msg.timeout = 50667U;
    msg.flags = 49U;
    msg.lat = 0.975545327321;
    msg.lon = 0.463935245304;
    msg.start_z = 0.8443445962;
    msg.start_z_units = 50U;
    msg.end_z = 0.391323897758;
    msg.end_z_units = 116U;
    msg.radius = 0.426019899856;
    msg.speed = 0.0139456442172;
    msg.speed_units = 93U;
    msg.custom.assign("WXUDGMIBERSUHJCEXGLOWVNSHYNUXSAFURONFMAKFIZNTEZBGFHVAKGQYJXJJDWFLSQHZUIQNIGMSDHOGTIKWRLWQTIMYCVPCLPECBYIPOHRUWJBQHSDXKFYPULZQMGLMREULEIBMSZLFTEOCODNAZNDTBWVJGFMMXCBWKUADYDTQHBOVKNPVCATJPPPHJRCXGJVZLTQYZXYKKATOBPRPVQQNSISGWRFWAAZXESFCRDEVDZYAHKYNOBEXT");

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
    msg.setTimeStamp(0.618860823893);
    msg.setSource(57291U);
    msg.setSourceEntity(26U);
    msg.setDestination(30955U);
    msg.setDestinationEntity(80U);
    msg.timeout = 15330U;
    msg.flags = 52U;
    msg.lat = 0.581135698601;
    msg.lon = 0.918883508536;
    msg.start_z = 0.490693112081;
    msg.start_z_units = 48U;
    msg.end_z = 0.234639253669;
    msg.end_z_units = 10U;
    msg.radius = 0.48712081583;
    msg.speed = 0.527314891873;
    msg.speed_units = 52U;
    msg.custom.assign("RQLHDAADIXIJUWDWUGYGIIAFTTBQAEFKJGFOXLCRSFZGTPLZRLFYCOBRJSEBMWBBFZTMXPVAYHOTCGMEPPREHMMCSPAVIMGYGVXKYCQJLBVKURNFGUZXYLFYIEUQQBTHPFJBISAGL");

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
    msg.setTimeStamp(0.520619135292);
    msg.setSource(63283U);
    msg.setSourceEntity(76U);
    msg.setDestination(7852U);
    msg.setDestinationEntity(131U);
    msg.timeout = 30347U;
    msg.lat = 0.727609644387;
    msg.lon = 0.0929031536156;
    msg.z = 0.935223690934;
    msg.z_units = 16U;
    msg.speed = 0.177161699041;
    msg.speed_units = 11U;
    msg.custom.assign("UGEAXUQPQEVPYAMKOPENMRCUESXLJJLBBZDWDH");

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
    msg.setTimeStamp(0.130734467496);
    msg.setSource(23160U);
    msg.setSourceEntity(83U);
    msg.setDestination(59776U);
    msg.setDestinationEntity(243U);
    msg.timeout = 19522U;
    msg.lat = 0.292435378618;
    msg.lon = 0.244890772546;
    msg.z = 0.321593498542;
    msg.z_units = 99U;
    msg.speed = 0.823234687853;
    msg.speed_units = 169U;
    msg.custom.assign("HRVNNUGIAHPHZJVMSWPKIGEKFOUWPCKVESWEQWPIXBFDCVWDQSKFHDLRUXGCZ");

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
    msg.setTimeStamp(0.504145799135);
    msg.setSource(25972U);
    msg.setSourceEntity(206U);
    msg.setDestination(45117U);
    msg.setDestinationEntity(219U);
    msg.timeout = 55756U;
    msg.lat = 0.671945551415;
    msg.lon = 0.512428444332;
    msg.z = 0.481516037731;
    msg.z_units = 28U;
    msg.speed = 0.453542728268;
    msg.speed_units = 182U;
    msg.custom.assign("ROAAGWLPOJFDHCDNMRJUZWMROYCUJXXQTTDUOCHPPSVTLVXXCVZJWEOMRPWCOPXKPMFTFBQIEZCXJVKTZIEZSYWLMGXXJDKQEOAUESSQBGHCQGRHIYINCTYNKGDVGIALFEDQFDUWHMIVTXSVKFPAQBYBBUDKHUDMCNODKJNKFZN");

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
    msg.setTimeStamp(0.955174285966);
    msg.setSource(42418U);
    msg.setSourceEntity(243U);
    msg.setDestination(16491U);
    msg.setDestinationEntity(71U);
    msg.x = 0.484961835232;
    msg.y = 0.35211303569;
    msg.z = 0.643989961289;
    msg.t = 0.0674984805949;

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
    msg.setTimeStamp(0.686308158932);
    msg.setSource(55003U);
    msg.setSourceEntity(100U);
    msg.setDestination(59749U);
    msg.setDestinationEntity(7U);
    msg.x = 0.546623101039;
    msg.y = 0.4836166298;
    msg.z = 0.722357559328;
    msg.t = 0.129411908444;

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
    msg.setTimeStamp(0.104627104453);
    msg.setSource(22314U);
    msg.setSourceEntity(92U);
    msg.setDestination(28509U);
    msg.setDestinationEntity(123U);
    msg.x = 0.567211431799;
    msg.y = 0.312455913016;
    msg.z = 0.750355038177;
    msg.t = 0.39517407722;

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
    msg.setTimeStamp(0.517234677621);
    msg.setSource(28445U);
    msg.setSourceEntity(140U);
    msg.setDestination(65415U);
    msg.setDestinationEntity(184U);
    msg.timeout = 41367U;
    msg.name.assign("PDFFKXZRYSWWBNGDYCGUVRDTNJMGVQXSQJVKJCWQVMKOKCMEWPYADSLXXEJSBATTDWEVRLBQQQYIHPJBRHZMUSICAVEHJHUNEKCLSQKPLOSAYZAOHTUGGYOQKCLWXSWXGCNXNALFITPIEPIIPXBMDFZZPJHRKVNUGFNYOCSOSEMPCRIMLYACMDRGTNUHHKBEAFGTTKF");
    msg.custom.assign("RAXJGOHRUMOXAIVUXRRQINFCETBWUAKIALZUZZRISBQYERUGBZKHDZZYFIBSYVFQJGYBMNPWEBXNAYMMCSDIGLGVOKKFCLQQSBPBSHVMXUKISDAUOVFJCHXNHLTODENRKCLYLWOPCDIHQDLCTTWOCTPZYMFZZJWVADJTTMWKUGFKEGDDPXJYTKNLSH");

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
    msg.setTimeStamp(0.576093922324);
    msg.setSource(23010U);
    msg.setSourceEntity(18U);
    msg.setDestination(4032U);
    msg.setDestinationEntity(217U);
    msg.timeout = 50473U;
    msg.name.assign("BIHIDJNVBCRPJJVKOLRIMRYXHHFODJAMROKGGUISGCUTXRQQNOZMBMXPJEQPQACITVNQXXUIEZRFIDMGZHBHTTFVAMKGJGMWNA");
    msg.custom.assign("KZVMWFFGVQYOJDDQCDZIHDYTMEFYMZSZNPRGWARWRVALHITPPCQGEGHTRMVPFUMOGMZNJEHRXGOORSBKAJEXDDFSVFGEHNCUDYKAYWPHBWXILNBLAYTAQCZUULVFETCFIHPPBUFGTMWGMEJAYILQNILUWCKSCBXFJOEUKPXOEEBHR");

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
    msg.setTimeStamp(0.215047482246);
    msg.setSource(61812U);
    msg.setSourceEntity(92U);
    msg.setDestination(42167U);
    msg.setDestinationEntity(230U);
    msg.timeout = 34332U;
    msg.name.assign("ETLWNCUTIABKUTPGZMQEORWPDMDUXJBUSZGWHYVFMIIJQIPLSUYLVSRKXFNEPXIUHSVMCPXWRKWAEQRMBOGPBGJTRODCGILRDONQRJAOJKZDTLLQVWHTBVZOFGHCABHAMIADYBLIXSIMEUORJQAFUZNEHTMAJBWDMHFJZKUSVWQPYKCVLYCCFFYXWYSVISFFGG");
    msg.custom.assign("MDPUNOPBIYHFPUAGTTKONAFKJRHLPVMQOESCJHGNUYT");

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
    msg.setTimeStamp(0.775844825391);
    msg.setSource(29207U);
    msg.setSourceEntity(45U);
    msg.setDestination(33634U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.724912857531;
    msg.lon = 0.23057568063;
    msg.z = 0.755687265827;
    msg.z_units = 159U;
    msg.speed = 0.128995921039;
    msg.speed_units = 94U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.123294074849;
    tmp_msg_0.y = 0.645540393814;
    tmp_msg_0.z = 0.321843783116;
    tmp_msg_0.t = 0.325699145067;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 23560U;
    tmp_msg_1.off_x = 0.755047006689;
    tmp_msg_1.off_y = 0.37858835326;
    tmp_msg_1.off_z = 0.381692550861;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.797149809686;
    msg.custom.assign("JUBFJJCPOSWPBAWTKZHGMFBXKQETJCMRHYBWCPCKNYJTYSKZCGEWZJCCXOQSANXDAVEXBZHQLRGDNISVOZQZVHAUIYYOXMUYLQVDCFJFXZNEOGNFPQIKGDIBGSHELPWDJFHBOFOOTDRQUXBHDLURXQCCPYKMXWUIYZLSVHRHTLGTLKAUHDTJZPRIGNZVVRXAYRKINWLSDTPFNAVFNIMOURUOESWAPEVQMMEBITRBLJQV");

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
    msg.setTimeStamp(0.15414236493);
    msg.setSource(12126U);
    msg.setSourceEntity(119U);
    msg.setDestination(41870U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.405035291027;
    msg.lon = 0.79115774364;
    msg.z = 0.0292826331674;
    msg.z_units = 99U;
    msg.speed = 0.0708712177283;
    msg.speed_units = 157U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62309U;
    tmp_msg_0.off_x = 0.0372608596979;
    tmp_msg_0.off_y = 0.830313718133;
    tmp_msg_0.off_z = 0.105390865022;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.217156878;
    msg.custom.assign("IFBZFZSYLMQGOGJBZPATLIESODBWFLKXSZVUMIHNGAIXWTZDIEVHVGZSBSWFRRHAFNHABTXXIKHCTEIPSYOCEDJCAUYNK");

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
    msg.setTimeStamp(0.240599276063);
    msg.setSource(49112U);
    msg.setSourceEntity(174U);
    msg.setDestination(23247U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.219089664074;
    msg.lon = 0.930968787139;
    msg.z = 0.554655118559;
    msg.z_units = 178U;
    msg.speed = 0.608945847865;
    msg.speed_units = 241U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.987805765972;
    tmp_msg_0.y = 0.833039183252;
    tmp_msg_0.z = 0.961378264595;
    tmp_msg_0.t = 0.161673081142;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.165994659547;
    msg.custom.assign("TXDQJAOQENTVYGIXEUPKVZZOPFNBYAMLWCWULBCIHMORHGDPPVKESZTNSKWISEQACLTNXIHQGDFZHIOJOZEJWIUMLFADPESEWCTQMJLJCLCPYKRUWDVUHLFKTZYHRLADBHGGZWERKSSHPJFTOYVGDMXRYXZBNEVFUTZAUYDPQAIMRXVFWCBOMDAAX");

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
    msg.setTimeStamp(0.978548367601);
    msg.setSource(27165U);
    msg.setSourceEntity(131U);
    msg.setDestination(12046U);
    msg.setDestinationEntity(1U);
    msg.vid = 7294U;
    msg.off_x = 0.505002423399;
    msg.off_y = 0.918022069043;
    msg.off_z = 0.38595541756;

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
    msg.setTimeStamp(0.416850946239);
    msg.setSource(16608U);
    msg.setSourceEntity(104U);
    msg.setDestination(50146U);
    msg.setDestinationEntity(185U);
    msg.vid = 36094U;
    msg.off_x = 0.725385499807;
    msg.off_y = 0.684593445563;
    msg.off_z = 0.0886019039359;

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
    msg.setTimeStamp(0.951521747873);
    msg.setSource(37809U);
    msg.setSourceEntity(97U);
    msg.setDestination(4730U);
    msg.setDestinationEntity(170U);
    msg.vid = 41802U;
    msg.off_x = 0.32302016013;
    msg.off_y = 0.525057094218;
    msg.off_z = 0.485362741301;

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
    msg.setTimeStamp(0.842365784741);
    msg.setSource(22906U);
    msg.setSourceEntity(203U);
    msg.setDestination(29650U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.986447437472);
    msg.setSource(56632U);
    msg.setSourceEntity(185U);
    msg.setDestination(6477U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.52676003016);
    msg.setSource(17752U);
    msg.setSourceEntity(46U);
    msg.setDestination(37695U);
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
    msg.setTimeStamp(0.669584775652);
    msg.setSource(25167U);
    msg.setSourceEntity(135U);
    msg.setDestination(42291U);
    msg.setDestinationEntity(205U);
    msg.mid = 62514U;

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
    msg.setTimeStamp(0.15306749033);
    msg.setSource(28741U);
    msg.setSourceEntity(3U);
    msg.setDestination(2508U);
    msg.setDestinationEntity(223U);
    msg.mid = 50470U;

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
    msg.setTimeStamp(0.499589376165);
    msg.setSource(31977U);
    msg.setSourceEntity(54U);
    msg.setDestination(14205U);
    msg.setDestinationEntity(199U);
    msg.mid = 20558U;

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
    msg.setTimeStamp(0.97797188536);
    msg.setSource(2225U);
    msg.setSourceEntity(121U);
    msg.setDestination(41281U);
    msg.setDestinationEntity(134U);
    msg.state = 23U;
    msg.eta = 19360U;
    msg.info.assign("CNXVZTXOTSLNNOMGZFUWLKUPBVQKJACYEIKJTCAGGWJWSMRMXZXSONAVMYMEQYREUYBRKMIQSHOIHEVEWTZCXNDLWFAEAMJFBYNZNHILARFVOPROWLCMQDFCBWFQXZIIIKUNDHJEJUYIWQDB");

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
    msg.setTimeStamp(0.950880613888);
    msg.setSource(50204U);
    msg.setSourceEntity(93U);
    msg.setDestination(14824U);
    msg.setDestinationEntity(180U);
    msg.state = 92U;
    msg.eta = 122U;
    msg.info.assign("XQPIESKFQTCIMWJGDIPDUKHCNGROBUDQQHBWLTERVFCQJUYNOBWTVEZWOATSXMJQYOXHZENKEWMKJWSLMLHBKRLAVIAANUFQDBLWZYJGKBQMZUJMGAVEFCOLSLQPRHDKSOTNMHZXUOMUPCASKZZNSCJGRMVFDJNDHTXTUEDXSUZN");

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
    msg.setTimeStamp(0.430771572547);
    msg.setSource(65117U);
    msg.setSourceEntity(35U);
    msg.setDestination(34270U);
    msg.setDestinationEntity(221U);
    msg.state = 164U;
    msg.eta = 12644U;
    msg.info.assign("ZUFEHFDRMCKCLNRVYWIPIGVUHTFYKNRTPJXHTEQVSWNQUESVBJKLYXQDIHYRPZDGLOEPFBQSWATIBQOVBTEAUQDZSKMLBLUOSRRXNXMWCMCGVAZMYSSFRRLKJGABABIHJVQCGBWMFJTHYALGXAUPPHYSFVSPULJPAVJDWIUHZZLMTKBFDHEPXFDM");

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
    msg.setTimeStamp(0.448161006647);
    msg.setSource(40887U);
    msg.setSourceEntity(171U);
    msg.setDestination(11695U);
    msg.setDestinationEntity(179U);
    msg.system = 30757U;
    msg.duration = 633U;
    msg.speed = 0.839147097904;
    msg.speed_units = 96U;
    msg.x = 0.687242054879;
    msg.y = 0.118786171356;
    msg.z = 0.646550847319;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.424991909781);
    msg.setSource(18795U);
    msg.setSourceEntity(100U);
    msg.setDestination(55294U);
    msg.setDestinationEntity(54U);
    msg.system = 49946U;
    msg.duration = 43811U;
    msg.speed = 0.930264020701;
    msg.speed_units = 227U;
    msg.x = 0.940854081329;
    msg.y = 0.426498433398;
    msg.z = 0.521664570021;
    msg.z_units = 120U;

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
    msg.setTimeStamp(0.382286649771);
    msg.setSource(7462U);
    msg.setSourceEntity(26U);
    msg.setDestination(41810U);
    msg.setDestinationEntity(116U);
    msg.system = 30107U;
    msg.duration = 26609U;
    msg.speed = 0.578470614961;
    msg.speed_units = 242U;
    msg.x = 0.773707966971;
    msg.y = 0.884213023011;
    msg.z = 0.784937252095;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.0322233031318);
    msg.setSource(7403U);
    msg.setSourceEntity(222U);
    msg.setDestination(38781U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.499489658321;
    msg.lon = 0.151427636352;
    msg.speed = 0.35352760425;
    msg.speed_units = 158U;
    msg.duration = 27800U;
    msg.sys_a = 62894U;
    msg.sys_b = 30280U;
    msg.move_threshold = 0.818554012938;

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
    msg.setTimeStamp(0.818447876879);
    msg.setSource(58606U);
    msg.setSourceEntity(26U);
    msg.setDestination(6585U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.32311736798;
    msg.lon = 0.321624533083;
    msg.speed = 0.319438220928;
    msg.speed_units = 173U;
    msg.duration = 25654U;
    msg.sys_a = 56997U;
    msg.sys_b = 52182U;
    msg.move_threshold = 0.954668700288;

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
    msg.setTimeStamp(0.00804366082252);
    msg.setSource(31249U);
    msg.setSourceEntity(214U);
    msg.setDestination(54724U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.208097936842;
    msg.lon = 0.605296412563;
    msg.speed = 0.885985763288;
    msg.speed_units = 17U;
    msg.duration = 58103U;
    msg.sys_a = 54508U;
    msg.sys_b = 8166U;
    msg.move_threshold = 0.867644413319;

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
    msg.setTimeStamp(0.622274321783);
    msg.setSource(25136U);
    msg.setSourceEntity(38U);
    msg.setDestination(46314U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.370631913903;
    msg.lon = 0.584985663748;
    msg.z = 0.404527396084;
    msg.z_units = 230U;
    msg.speed = 0.955715303597;
    msg.speed_units = 78U;
    msg.custom.assign("ZZXPZRTRJDRBOLNGYOAFXLSWPHLBJVZQHRGVQIDHVCBIFHWGZLLWAHMYMETUDXHRLWNOMGBQKHICPUKXOMNYTTMSSDQUFWSQRENNTKMBKLNAXOPGX");

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
    msg.setTimeStamp(0.107460015171);
    msg.setSource(18501U);
    msg.setSourceEntity(230U);
    msg.setDestination(45724U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.875524180033;
    msg.lon = 0.630950532229;
    msg.z = 0.415934045511;
    msg.z_units = 134U;
    msg.speed = 0.650447621045;
    msg.speed_units = 111U;
    msg.custom.assign("EINWZKJPNHCUASGMTPORZSKIEP");

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
    msg.setTimeStamp(0.556280438139);
    msg.setSource(33088U);
    msg.setSourceEntity(35U);
    msg.setDestination(46239U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.520431405249;
    msg.lon = 0.258000290083;
    msg.z = 0.414806663209;
    msg.z_units = 134U;
    msg.speed = 0.384935581008;
    msg.speed_units = 70U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.794577674554;
    tmp_msg_0.lon = 0.0330845229604;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IHGUHAERBVKRIFKAXTBYUZFXBNOWRJXSVADAVPBWCJEMONCGAMDWJBMFUZPDZWHNKLSYBSYEUNTORQOHHFXSJDKCHFBTADYJFZCXOZTHQMQAQTDNWRNNUDXLLZVCJGKVWSUQYUFIJQILUPDTMAVRMICNNLZIGIRXSKGKQXIZGABSSLVMVPNHHOPMKPYYOOZCCTWJUAKRETRJCFSDUGLIPVVLSGQBRFMELTWPKZPCDWLEPGXYEWQH");

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
    msg.setTimeStamp(0.806655867932);
    msg.setSource(15389U);
    msg.setSourceEntity(79U);
    msg.setDestination(42209U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.595802244287;
    msg.lon = 0.488091870272;

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
    msg.setTimeStamp(0.411117672123);
    msg.setSource(43074U);
    msg.setSourceEntity(65U);
    msg.setDestination(54193U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.981955162221;
    msg.lon = 0.331650999126;

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
    msg.setTimeStamp(0.420324442592);
    msg.setSource(55052U);
    msg.setSourceEntity(219U);
    msg.setDestination(58922U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.54751932311;
    msg.lon = 0.252175944776;

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
    msg.setTimeStamp(0.958908724589);
    msg.setSource(29817U);
    msg.setSourceEntity(63U);
    msg.setDestination(23919U);
    msg.setDestinationEntity(108U);
    msg.timeout = 64894U;
    msg.lat = 0.0803728661958;
    msg.lon = 0.908136148548;
    msg.z = 0.657291467869;
    msg.z_units = 32U;
    msg.pitch = 0.478768535711;
    msg.amplitude = 0.446622864951;
    msg.duration = 23747U;
    msg.speed = 0.0200944107108;
    msg.speed_units = 116U;
    msg.radius = 0.459126602515;
    msg.direction = 222U;
    msg.custom.assign("BFNMAYEYUNJFRVMOZUJYTCJMKYXGPONWBUFGCZLXEM");

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
    msg.setTimeStamp(0.818712437691);
    msg.setSource(35157U);
    msg.setSourceEntity(180U);
    msg.setDestination(53630U);
    msg.setDestinationEntity(154U);
    msg.timeout = 39194U;
    msg.lat = 0.202561648365;
    msg.lon = 0.248553030392;
    msg.z = 0.828828860495;
    msg.z_units = 32U;
    msg.pitch = 0.734238026237;
    msg.amplitude = 0.284306630156;
    msg.duration = 57954U;
    msg.speed = 0.595652146615;
    msg.speed_units = 176U;
    msg.radius = 0.520254447398;
    msg.direction = 252U;
    msg.custom.assign("CUIPPHHQYHZXONOFGODBYLOBSFPSWFKFPGPYAVECGHOVZJDZQPNGSQUDLKWETDPCOJTHCVTB");

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
    msg.setTimeStamp(0.899509934609);
    msg.setSource(59869U);
    msg.setSourceEntity(227U);
    msg.setDestination(39762U);
    msg.setDestinationEntity(183U);
    msg.timeout = 58721U;
    msg.lat = 0.158805046763;
    msg.lon = 0.0908890805345;
    msg.z = 0.0883848415382;
    msg.z_units = 254U;
    msg.pitch = 0.257719613049;
    msg.amplitude = 0.0103317858705;
    msg.duration = 61732U;
    msg.speed = 0.552558991981;
    msg.speed_units = 156U;
    msg.radius = 0.387753014332;
    msg.direction = 120U;
    msg.custom.assign("UOBPIJHLJYEDCNQWCSKUVFARBVTOZVTWLKOHWRPCMYRNZAQFLLXGGFUIVYGSBJVJKP");

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
    msg.setTimeStamp(0.246667989032);
    msg.setSource(27129U);
    msg.setSourceEntity(206U);
    msg.setDestination(6390U);
    msg.setDestinationEntity(165U);
    msg.formation_name.assign("BKRWLJYISFBJFLQMOMMAECNGRRCZCVWOGHPWDPFXGSCWFTAPWTAQCMFNCKYZNVGYODQSTUHXZGPREKAOULHBEJOGWDNEIDOXBGCJZCXAYLVHDGQMFZLUURDYXATE");
    msg.reference_frame = 214U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60389U;
    tmp_msg_0.off_x = 0.491478222881;
    tmp_msg_0.off_y = 0.471384792133;
    tmp_msg_0.off_z = 0.95079052264;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OFXZGYGVUQQLKZOEDWAYMZOXBNYBSRHEKAIFTMSBTFDFOEPTCAAUGIJPBUECHSOHSHVENIKGMLNJICLWJICJCALKEKTHGXAPFURWRZFGHDYFVYDLIZPYQDUEXXBGQJIOMCNWKRSQBYSXFRORXQZNGOQRJQJCPIPBSMVQEQLVGOTUWMAHCVXVDRLBKXAYDRCHDKSMXIRT");

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
    msg.setTimeStamp(0.762285139192);
    msg.setSource(36704U);
    msg.setSourceEntity(232U);
    msg.setDestination(51275U);
    msg.setDestinationEntity(74U);
    msg.formation_name.assign("UGDGHXVTJEDMKTQOCQWOGQACXBZTNLLAKOOOJDCIGEAJBRUGBHLQYJLDJQLERZXMTQXNROUJCKYPDMUSVZPYYGPLSEHLWIM");
    msg.reference_frame = 187U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20227U;
    tmp_msg_0.off_x = 0.949996043264;
    tmp_msg_0.off_y = 0.59246008899;
    tmp_msg_0.off_z = 0.418455296029;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YCUPNJHIXHOCRQTVGQDMYYWEAUFTNQMJIIJGMSASFD");

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
    msg.setTimeStamp(0.404592182512);
    msg.setSource(20246U);
    msg.setSourceEntity(151U);
    msg.setDestination(13074U);
    msg.setDestinationEntity(111U);
    msg.formation_name.assign("LADBNXLZCHLUXUPVQPWKHBKBWHMNIRNAKAFOIPIBFTJUDOUZJEPUXNJROCNFMTBJWYTZCFFMHSFVGRNIOWMSTAVNFJICUKMQHORPZEMQQKIHBFVKJGPBMVEZGTFUZBCEDREEVSVKLCWZOVSZLTSYYFWJVXJCTMWQLWAJCRXGYQIZLJHZXGCHPGGQTNYLRBNDAYUIRAPYQAMEKTNRDDSOXHYESGGXQRSPSLSIWDTEIYDGLCKKAAXYEOPBHDUOXV");
    msg.reference_frame = 2U;
    msg.custom.assign("CYMBCYCOOKGDYMMFIUADVWLGPEGSJCYWVZQPQHCXKEIWEMDZMKMQQBRHDMRTNSZNXOFFSREWPEZARXZDBUBUUQTDAHIQSIKAKDFRKJTPGOZCUNFUVPHHRVLBAOWTAIXOOPIUMYSFQDFYWVNPVCTXSJCXXTSRXEWYFTUHJLBOVDMILQZSCKAY");

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
    msg.setTimeStamp(0.475914764847);
    msg.setSource(35131U);
    msg.setSourceEntity(240U);
    msg.setDestination(53758U);
    msg.setDestinationEntity(104U);
    msg.group_name.assign("BFTKZZRPPFWLNTQOUNBOEXWJLXGNTCGGYELAOHIDWYQJPUZXBZAMXHSOXAHZKGAMUBFDZOZHMGFDRFMWYPNMVLERHZGSSVJDDJYXPINQBEJMTYRKLADQYQHIRXTQCKCTAPTWECGCEGGAVQXBIBJISZHKCWRUSPJUJKRGTMFOCWMNLSYYEQLISBYDPUAMCVO");
    msg.formation_name.assign("LXIDEPJTGICNRAWCQSBWEDRGKVH");
    msg.plan_id.assign("ZOTSSYJFCQMVADAMQVFJICITENZTXBNFJ");
    msg.description.assign("DYTNGNJPJKENCYZEMSVKZHDZVAQWCOZQOAVHNBURTDZMJFINRRFKLGCXYSPXXAUTMWRKQVKWDAEABZIUFKRBAVYPYFQGUSTFAROGVWIBPXWERUNXRIWCLMGOCUPMHLYJJFRLIPSGOSLDHQGDHDGZYI");
    msg.leader_speed = 0.576909201773;
    msg.leader_bank_lim = 0.00734412007143;
    msg.pos_sim_err_lim = 0.0647964555829;
    msg.pos_sim_err_wrn = 0.00701272508819;
    msg.pos_sim_err_timeout = 7413U;
    msg.converg_max = 0.848025139896;
    msg.converg_timeout = 608U;
    msg.comms_timeout = 55954U;
    msg.turb_lim = 0.139971513775;
    msg.custom.assign("UPVRDNEHLRYJNVNMAQORKQLTOEYKDHTGKJYGFZBRCAKSUWFHIYQXUAUYTEQIVKICEWBTPOJUFUGKTABCPDXVVJRJMMVIPSPOSGVEXYSCHRDMVMXDGRZNGYPD");

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
    msg.setTimeStamp(0.913204130276);
    msg.setSource(12372U);
    msg.setSourceEntity(39U);
    msg.setDestination(17706U);
    msg.setDestinationEntity(146U);
    msg.group_name.assign("YHFJGVNEAGKSPMJOWNCWVRFWIUIFUOOKVRUMNZUYFNNNQXIRSEHHRWVDJBBQXTXMOAYTMKZFSDLHVAQJICDRLKLWJXGZFNFCBWMXQDHODHZBOPJITNKLKWYJAQWCKLZQEQTIKLYNIWZUDOBBOTQOSRZPKUCACMMGHYMPJEBZUDCVSAGDYPULPGXOLHSEXTCB");
    msg.formation_name.assign("KVRCUQRZUCEGLTKZVFFFBFEOWWXKILDOJEHSZJLWUGBMBJEBZXDZAC");
    msg.plan_id.assign("JDMKALMOXIFGTSJJCUOMAPMJXC");
    msg.description.assign("ZKXXFSMDTRDLWGNAILLMOXKIUNNZGHKGNERVCGEXQRPAJPHZOISNFMYLRNTQSTGPZHFPNBQUIYOLBLRAYKPKIEAEYYFIUWWPAWSCVSRFUOJVVOTEBHJWSTQVJOQVHWHCBTCQLGEPUJWYGCZCZYEPMOUCHVYAEZOKXJATTYNZITFDQGMJFYFVAWSCKQXMRBRXLIXSOJMTOGRBFUXIBFJUDN");
    msg.leader_speed = 0.56329321277;
    msg.leader_bank_lim = 0.768178285741;
    msg.pos_sim_err_lim = 0.191511370099;
    msg.pos_sim_err_wrn = 0.833552384161;
    msg.pos_sim_err_timeout = 45267U;
    msg.converg_max = 0.947396356735;
    msg.converg_timeout = 57740U;
    msg.comms_timeout = 51833U;
    msg.turb_lim = 0.699490271345;
    msg.custom.assign("MRLUVZLOGLGJMABBIOVMYNYBCVBDRBWUFCLHDPIYEXCPETIDZKJXUKSWMYPRFYWMAXVSAUKFQEZBPISWKFRHJTHXWQMVFHAJGIYFTDNHTBJHQXIGPRRNWGQQXACGWKXBNYNSYEXJMGSTLSCOMSTOSLVZHPUIJZPLQDIVQYEEXVAZAIKAODOFDKQVPCEWOPANUQHRMBFJRFTTKUUWRDURJDKNWT");

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
    msg.setTimeStamp(0.950862014508);
    msg.setSource(42179U);
    msg.setSourceEntity(147U);
    msg.setDestination(38393U);
    msg.setDestinationEntity(70U);
    msg.group_name.assign("JOQCERSVLQQTIVGCSFAGYWRHNJLVTMNPQJYUFSZGQUWULKMOJNFMTBUABFVLKHXELFRPKWAMQKCNSYVQSYPIXVMPNTGPLDZZJWQOSYRNIECRKOQSMWLRBHEXALPFPCTCIHDIZWYTXSBEXBYIOPTSZJGVDBSXRFTEH");
    msg.formation_name.assign("UZFYYVHCERYXIYFKWVCZQKBTMUCCZMBSSUUHUSFOCFPMEIMJA");
    msg.plan_id.assign("MSLRXIFKBAULPKOQMTHGOLYYCWMEHHJYZQGPIDIPCBLXNGDCFNIJWDWWTRCHRNAOVVXKFWABOSXQXAZOBXDERVQPURUWNJWUVIDQKNFNEGUFMPUOZAGFQSRTQIDAXCBWCNIJIDVOHMPAPDYVWQHLSYVJWJHTINMACBLAD");
    msg.description.assign("NQDTMGVAFOTHICXJUB");
    msg.leader_speed = 0.406716742691;
    msg.leader_bank_lim = 0.494744866235;
    msg.pos_sim_err_lim = 0.36749026795;
    msg.pos_sim_err_wrn = 0.590106442156;
    msg.pos_sim_err_timeout = 43013U;
    msg.converg_max = 0.936324348542;
    msg.converg_timeout = 20880U;
    msg.comms_timeout = 41444U;
    msg.turb_lim = 0.806001373336;
    msg.custom.assign("ZTUICVDQFWQFXKFUXNCJWDTSOGUWSWEQBVAMLHBQITWINJISEXJUGKQFV");

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
    msg.setTimeStamp(0.401202802367);
    msg.setSource(36872U);
    msg.setSourceEntity(90U);
    msg.setDestination(41037U);
    msg.setDestinationEntity(54U);
    msg.control_src = 4752U;
    msg.control_ent = 244U;
    msg.timeout = 0.803648595723;
    msg.loiter_radius = 0.0291746089825;
    msg.altitude_interval = 0.55167012842;

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
    msg.setTimeStamp(0.979311205515);
    msg.setSource(26567U);
    msg.setSourceEntity(102U);
    msg.setDestination(10809U);
    msg.setDestinationEntity(94U);
    msg.control_src = 1406U;
    msg.control_ent = 218U;
    msg.timeout = 0.915627959342;
    msg.loiter_radius = 0.972599758028;
    msg.altitude_interval = 0.575391852747;

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
    msg.setTimeStamp(0.16898495921);
    msg.setSource(26742U);
    msg.setSourceEntity(189U);
    msg.setDestination(1799U);
    msg.setDestinationEntity(129U);
    msg.control_src = 53197U;
    msg.control_ent = 9U;
    msg.timeout = 0.418555033743;
    msg.loiter_radius = 0.794405276039;
    msg.altitude_interval = 0.0994362438042;

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
    msg.setTimeStamp(0.182052891922);
    msg.setSource(32846U);
    msg.setSourceEntity(124U);
    msg.setDestination(45081U);
    msg.setDestinationEntity(214U);
    msg.flags = 234U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.081719058512;
    tmp_msg_0.speed_units = 235U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.19591055939;
    tmp_msg_1.z_units = 14U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.503056024717;
    msg.lon = 0.186834831022;
    msg.radius = 0.434113624123;

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
    msg.setTimeStamp(0.279548053621);
    msg.setSource(21568U);
    msg.setSourceEntity(199U);
    msg.setDestination(19699U);
    msg.setDestinationEntity(119U);
    msg.flags = 1U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.298825326169;
    tmp_msg_0.speed_units = 9U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.261343600225;
    tmp_msg_1.z_units = 9U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.382238228869;
    msg.lon = 0.822778990894;
    msg.radius = 0.259420883038;

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
    msg.setTimeStamp(0.618277467732);
    msg.setSource(3944U);
    msg.setSourceEntity(19U);
    msg.setDestination(40058U);
    msg.setDestinationEntity(15U);
    msg.flags = 135U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.375801314298;
    tmp_msg_0.speed_units = 93U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.561822773428;
    tmp_msg_1.z_units = 189U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.433463405478;
    msg.lon = 0.888780374468;
    msg.radius = 0.0323364764643;

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
    msg.setTimeStamp(0.215123830416);
    msg.setSource(15748U);
    msg.setSourceEntity(66U);
    msg.setDestination(41731U);
    msg.setDestinationEntity(65U);
    msg.control_src = 53204U;
    msg.control_ent = 52U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.380780666519;
    tmp_tmp_msg_0_0.speed_units = 113U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.194907834218;
    tmp_tmp_msg_0_1.z_units = 161U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.225839835573;
    tmp_msg_0.lon = 0.500383709401;
    tmp_msg_0.radius = 0.193513615792;
    msg.reference.set(tmp_msg_0);
    msg.state = 247U;
    msg.proximity = 28U;

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
    msg.setTimeStamp(0.664120898125);
    msg.setSource(22811U);
    msg.setSourceEntity(45U);
    msg.setDestination(65292U);
    msg.setDestinationEntity(190U);
    msg.control_src = 32320U;
    msg.control_ent = 84U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.442059228157;
    tmp_tmp_msg_0_0.speed_units = 15U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.142108884239;
    tmp_tmp_msg_0_1.z_units = 7U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.808227680258;
    tmp_msg_0.lon = 0.896438711585;
    tmp_msg_0.radius = 0.833813889973;
    msg.reference.set(tmp_msg_0);
    msg.state = 54U;
    msg.proximity = 73U;

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
    msg.setTimeStamp(0.82837394434);
    msg.setSource(32968U);
    msg.setSourceEntity(120U);
    msg.setDestination(14546U);
    msg.setDestinationEntity(127U);
    msg.control_src = 51782U;
    msg.control_ent = 36U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 243U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.987944717469;
    tmp_tmp_msg_0_0.speed_units = 55U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.00644240030223;
    tmp_tmp_msg_0_1.z_units = 185U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.309043932407;
    tmp_msg_0.lon = 0.671342696485;
    tmp_msg_0.radius = 0.331630956494;
    msg.reference.set(tmp_msg_0);
    msg.state = 6U;
    msg.proximity = 143U;

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
    msg.setTimeStamp(0.130736345039);
    msg.setSource(238U);
    msg.setSourceEntity(33U);
    msg.setDestination(6690U);
    msg.setDestinationEntity(162U);
    msg.ax_cmd = 0.602989770209;
    msg.ay_cmd = 0.926336717185;
    msg.az_cmd = 0.957514250008;
    msg.ax_des = 0.59058177486;
    msg.ay_des = 0.0440850028142;
    msg.az_des = 0.223045961486;
    msg.virt_err_x = 0.537120214334;
    msg.virt_err_y = 0.597732479259;
    msg.virt_err_z = 0.121009670627;
    msg.surf_fdbk_x = 0.169117641622;
    msg.surf_fdbk_y = 0.946552054816;
    msg.surf_fdbk_z = 0.799870926011;
    msg.surf_unkn_x = 0.209144706196;
    msg.surf_unkn_y = 0.116363878897;
    msg.surf_unkn_z = 0.121379136769;
    msg.ss_x = 0.645775859127;
    msg.ss_y = 0.0205422124832;
    msg.ss_z = 0.249832961909;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CEJIODHNFROIUASPQEDRHJKYSQWGMZTQJQQBQCYARRWPTLXKBLNWULRVMSOMTNXSOLZJGHPEFPRABSCEKXZGNMNWFDTCTXOSJIDMUCJVOJQURWUYUIIAGNYPSHMPVMKSTXNYYSMFEMZKJFOREYROMVZLCCTJDPGLTIERKBFAVKVYNQDEBHIWKCWGTEUGXBIWGZWDPIAOYVAVLGANONBLLHTBSGDZIZUKFKBDXUZLCAFPCEHAVHQXWFJ");
    tmp_msg_0.dist = 0.557036655281;
    tmp_msg_0.err = 0.301629447407;
    tmp_msg_0.ctrl_imp = 0.560542331893;
    tmp_msg_0.rel_dir_x = 0.436085362906;
    tmp_msg_0.rel_dir_y = 0.381218508685;
    tmp_msg_0.rel_dir_z = 0.96889773339;
    tmp_msg_0.err_x = 0.1271162968;
    tmp_msg_0.err_y = 0.941054167957;
    tmp_msg_0.err_z = 0.602282126612;
    tmp_msg_0.rf_err_x = 0.00815764579247;
    tmp_msg_0.rf_err_y = 0.933719305463;
    tmp_msg_0.rf_err_z = 0.146482141233;
    tmp_msg_0.rf_err_vx = 0.939009177466;
    tmp_msg_0.rf_err_vy = 0.101100408849;
    tmp_msg_0.rf_err_vz = 0.141092079648;
    tmp_msg_0.ss_x = 0.527977694434;
    tmp_msg_0.ss_y = 0.904839455909;
    tmp_msg_0.ss_z = 0.812013080097;
    tmp_msg_0.virt_err_x = 0.714521067159;
    tmp_msg_0.virt_err_y = 0.487901192654;
    tmp_msg_0.virt_err_z = 0.472458910071;
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
    msg.setTimeStamp(0.618106752996);
    msg.setSource(14648U);
    msg.setSourceEntity(213U);
    msg.setDestination(44988U);
    msg.setDestinationEntity(53U);
    msg.ax_cmd = 0.167113070294;
    msg.ay_cmd = 0.800804958121;
    msg.az_cmd = 0.625764637222;
    msg.ax_des = 0.0685346763328;
    msg.ay_des = 0.439068080274;
    msg.az_des = 0.410210168861;
    msg.virt_err_x = 0.906259353026;
    msg.virt_err_y = 0.00654121268185;
    msg.virt_err_z = 0.625801480242;
    msg.surf_fdbk_x = 0.849337927137;
    msg.surf_fdbk_y = 0.0495938145455;
    msg.surf_fdbk_z = 0.956639800685;
    msg.surf_unkn_x = 0.0179204753543;
    msg.surf_unkn_y = 0.0562461412233;
    msg.surf_unkn_z = 0.409591335625;
    msg.ss_x = 0.491023030388;
    msg.ss_y = 0.614681907347;
    msg.ss_z = 0.736110529267;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YXDGDNSEMXJRTLILBTBPEUSKJRUPAGTUZLRZHSONFYWGXZRJQCPDUVUGQCFDXLLCXHBDBWJVSFVTDZPOZMHTVNQNWBRFMPCITPDAICXXVAQSGZWOELAZOFYGWKVYNDSZOQOMXHYNSALAHICZFDNCFHDAKGRWACBRAYFZJVJBUOMQATJBIGYEUXJKLOSNFWLQKTKBIQNIYEKMVFEMMHUREYQTREU");
    tmp_msg_0.dist = 0.775221330543;
    tmp_msg_0.err = 0.768301241851;
    tmp_msg_0.ctrl_imp = 0.51147244156;
    tmp_msg_0.rel_dir_x = 0.360590388968;
    tmp_msg_0.rel_dir_y = 0.135853406115;
    tmp_msg_0.rel_dir_z = 0.0550178728119;
    tmp_msg_0.err_x = 0.636108994149;
    tmp_msg_0.err_y = 0.166116900018;
    tmp_msg_0.err_z = 0.671279603258;
    tmp_msg_0.rf_err_x = 0.981623888048;
    tmp_msg_0.rf_err_y = 0.418093850874;
    tmp_msg_0.rf_err_z = 0.212700109359;
    tmp_msg_0.rf_err_vx = 0.604443872984;
    tmp_msg_0.rf_err_vy = 0.424965110779;
    tmp_msg_0.rf_err_vz = 0.706698889735;
    tmp_msg_0.ss_x = 0.770515592912;
    tmp_msg_0.ss_y = 0.967719852244;
    tmp_msg_0.ss_z = 0.845517770237;
    tmp_msg_0.virt_err_x = 0.465755970316;
    tmp_msg_0.virt_err_y = 0.61707446531;
    tmp_msg_0.virt_err_z = 0.935545726961;
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
    msg.setTimeStamp(0.919223901101);
    msg.setSource(18648U);
    msg.setSourceEntity(25U);
    msg.setDestination(32913U);
    msg.setDestinationEntity(8U);
    msg.ax_cmd = 0.36678771756;
    msg.ay_cmd = 0.282736322426;
    msg.az_cmd = 0.558530263981;
    msg.ax_des = 0.500321191773;
    msg.ay_des = 0.664604484578;
    msg.az_des = 0.385305320038;
    msg.virt_err_x = 0.216750622934;
    msg.virt_err_y = 0.535299318074;
    msg.virt_err_z = 0.743565346586;
    msg.surf_fdbk_x = 0.30464250861;
    msg.surf_fdbk_y = 0.637702706014;
    msg.surf_fdbk_z = 0.129170289502;
    msg.surf_unkn_x = 0.413752633025;
    msg.surf_unkn_y = 0.33700547809;
    msg.surf_unkn_z = 0.0121651290306;
    msg.ss_x = 0.986492543161;
    msg.ss_y = 0.153846540127;
    msg.ss_z = 0.611930361565;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CNRUAMOZREAWKDWWRMTTICAMYXLYQBDGPEFFXVTZQRLJQUYHZYWHOKZN");
    tmp_msg_0.dist = 0.29351885264;
    tmp_msg_0.err = 0.843638491439;
    tmp_msg_0.ctrl_imp = 0.159753833174;
    tmp_msg_0.rel_dir_x = 0.196953779903;
    tmp_msg_0.rel_dir_y = 0.690039508581;
    tmp_msg_0.rel_dir_z = 0.0586743855064;
    tmp_msg_0.err_x = 0.495625985241;
    tmp_msg_0.err_y = 0.420998677043;
    tmp_msg_0.err_z = 0.182965710289;
    tmp_msg_0.rf_err_x = 0.987450373778;
    tmp_msg_0.rf_err_y = 0.9379021664;
    tmp_msg_0.rf_err_z = 0.409532147389;
    tmp_msg_0.rf_err_vx = 0.16083455986;
    tmp_msg_0.rf_err_vy = 0.826390472157;
    tmp_msg_0.rf_err_vz = 0.560934573373;
    tmp_msg_0.ss_x = 0.410611557056;
    tmp_msg_0.ss_y = 0.852411104224;
    tmp_msg_0.ss_z = 0.637081740309;
    tmp_msg_0.virt_err_x = 0.367752454714;
    tmp_msg_0.virt_err_y = 0.291293080022;
    tmp_msg_0.virt_err_z = 0.219960678603;
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
    msg.setTimeStamp(0.874320855108);
    msg.setSource(22512U);
    msg.setSourceEntity(10U);
    msg.setDestination(36951U);
    msg.setDestinationEntity(63U);
    msg.s_id.assign("HMEOCROUCTVNOYKPEUMPRECKRPFYDGSUQPIYAILNGCGLWSZYNZCWXVQLUTPVFU");
    msg.dist = 0.689200420478;
    msg.err = 0.599350530328;
    msg.ctrl_imp = 0.206230158738;
    msg.rel_dir_x = 0.434005268493;
    msg.rel_dir_y = 0.219961424265;
    msg.rel_dir_z = 0.750304779035;
    msg.err_x = 0.43312591244;
    msg.err_y = 0.172225111239;
    msg.err_z = 0.310487269384;
    msg.rf_err_x = 0.303708016522;
    msg.rf_err_y = 0.329055121284;
    msg.rf_err_z = 0.760918664518;
    msg.rf_err_vx = 0.282086765614;
    msg.rf_err_vy = 0.307408649171;
    msg.rf_err_vz = 0.907162444924;
    msg.ss_x = 0.185117762239;
    msg.ss_y = 0.52678170482;
    msg.ss_z = 0.308013382231;
    msg.virt_err_x = 0.276009085238;
    msg.virt_err_y = 0.885189926666;
    msg.virt_err_z = 0.707272191311;

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
    msg.setTimeStamp(0.350798095847);
    msg.setSource(22999U);
    msg.setSourceEntity(118U);
    msg.setDestination(12601U);
    msg.setDestinationEntity(239U);
    msg.s_id.assign("RBIQDZERAIKFFSEEXJZF");
    msg.dist = 0.314231166539;
    msg.err = 0.295012825994;
    msg.ctrl_imp = 0.566727522569;
    msg.rel_dir_x = 0.463412160291;
    msg.rel_dir_y = 0.506038474259;
    msg.rel_dir_z = 0.0363715805039;
    msg.err_x = 0.808328288603;
    msg.err_y = 0.280903433621;
    msg.err_z = 0.801707867232;
    msg.rf_err_x = 0.0367220760768;
    msg.rf_err_y = 0.0786319839318;
    msg.rf_err_z = 0.733034097162;
    msg.rf_err_vx = 0.426893562132;
    msg.rf_err_vy = 0.327346314003;
    msg.rf_err_vz = 0.883164865779;
    msg.ss_x = 0.304763801487;
    msg.ss_y = 0.420603409748;
    msg.ss_z = 0.832290375232;
    msg.virt_err_x = 0.528137445872;
    msg.virt_err_y = 0.685608278932;
    msg.virt_err_z = 0.0914555339972;

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
    msg.setTimeStamp(0.884324587744);
    msg.setSource(54016U);
    msg.setSourceEntity(155U);
    msg.setDestination(46006U);
    msg.setDestinationEntity(173U);
    msg.s_id.assign("VOORTAMXZSLBNPPUYRPFJCGMIOBSRANGMZQFASZGJZTNOJBSZVASGVEYXUFAQONIPDCEVR");
    msg.dist = 0.839917440921;
    msg.err = 0.336669684653;
    msg.ctrl_imp = 0.881329532727;
    msg.rel_dir_x = 0.797025121402;
    msg.rel_dir_y = 0.0773521988773;
    msg.rel_dir_z = 0.950268307783;
    msg.err_x = 0.0775229015189;
    msg.err_y = 0.96743301291;
    msg.err_z = 0.411446413618;
    msg.rf_err_x = 0.586605284212;
    msg.rf_err_y = 0.358535757943;
    msg.rf_err_z = 0.71016886496;
    msg.rf_err_vx = 0.564818400882;
    msg.rf_err_vy = 0.198883009904;
    msg.rf_err_vz = 0.758460715566;
    msg.ss_x = 0.571062313894;
    msg.ss_y = 0.906575805467;
    msg.ss_z = 0.237664336273;
    msg.virt_err_x = 0.164134848178;
    msg.virt_err_y = 0.604567864678;
    msg.virt_err_z = 0.348378392556;

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
    msg.setTimeStamp(0.400515224199);
    msg.setSource(43283U);
    msg.setSourceEntity(133U);
    msg.setDestination(22934U);
    msg.setDestinationEntity(114U);
    msg.timeout = 17869U;
    msg.rpm = 0.163409135844;
    msg.direction = 67U;
    msg.custom.assign("ELFBPWCWIYCVOTVMNVWRNDOQRVLTZBODHNEQXMHSZGDJPWXYGKVEHFFEUKPKENUZJOYHGVQDUGCCJMVMAFEFIGTYJRYMEDSBZXZCDSNXGLJHWYXCXQISZABTUOCMLWDRQYTZCTTXIEBXQJSNJGWFNLISJGUHRHESTUMQLDQPORJUFKKAZXVSCBAXCDPBPNI");

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
    msg.setTimeStamp(0.590159243678);
    msg.setSource(18188U);
    msg.setSourceEntity(16U);
    msg.setDestination(51396U);
    msg.setDestinationEntity(244U);
    msg.timeout = 4439U;
    msg.rpm = 0.913168321636;
    msg.direction = 81U;
    msg.custom.assign("MBHEZTXYDQDCQSWVWVEZSEDVRRSHIPSVBHBLPLTFFGQFHWONQMFLJFGWTRZPP");

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
    msg.setTimeStamp(0.93889821606);
    msg.setSource(41315U);
    msg.setSourceEntity(204U);
    msg.setDestination(2483U);
    msg.setDestinationEntity(91U);
    msg.timeout = 31088U;
    msg.rpm = 0.583157435551;
    msg.direction = 150U;
    msg.custom.assign("FTVKUIZRDUDHI");

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
    msg.setTimeStamp(0.919811385811);
    msg.setSource(15348U);
    msg.setSourceEntity(249U);
    msg.setDestination(22302U);
    msg.setDestinationEntity(125U);
    msg.formation_name.assign("SRWMKHSISFTLLNBRTCWWSBYARDLOEEQIVRULNVUAYGPUXGWZFFNHUYQYERGNTSFEDOLKXHEKIJYVOUCJNXTZCDMKRIUJXJEDMJCNITHFZGDYWLAUJNTQVSNDKZWEZCAEIQAPHKMMVVZQEXVTKMWFWOGBPYDYXSHJOBOQOGMHPLXIQMRFFXBJQKPQCLBUXGHXYLZYCFBPTKARSNUIAONSV");
    msg.type = 122U;
    msg.op = 166U;
    msg.group_name.assign("KJQAUTCJDAFNZOMQKSBLHFZAOKERBVNJZ");
    msg.plan_id.assign("SZTQOELYCSGCJZELYNHEVXTOWVRXPZSIXSNGRDJSPAHNWOUQCWQBTOBFWDAHMBXMKTKDBYJWMWPXTBKQBELCRZVIUMSPHROKZSIQIDBMRELQSGNMNYJFWGICIFNDKCKYMFFPVFNXJMGLWHJWQULZTLOXSTVXUDA");
    msg.description.assign("FENGITWYBNAWSRYZDVCGLEPWMEJBMHRRHXSOEQAQMNWPXUGNRATWOHFJYORAXDDHCJAGZAUMOUHAY");
    msg.reference_frame = 54U;
    msg.leader_bank_lim = 0.060389007087;
    msg.leader_speed_min = 0.739143252652;
    msg.leader_speed_max = 0.256239688762;
    msg.leader_alt_min = 0.0488049074814;
    msg.leader_alt_max = 0.368553551706;
    msg.pos_sim_err_lim = 0.626533986221;
    msg.pos_sim_err_wrn = 0.030142824478;
    msg.pos_sim_err_timeout = 37373U;
    msg.converg_max = 0.0032181685576;
    msg.converg_timeout = 18256U;
    msg.comms_timeout = 10235U;
    msg.turb_lim = 0.624433763622;
    msg.custom.assign("VJYOHCJBTIGCWIVQEEZGBXTZEJFZCJWVECALJADVKSTPMTMZVBIURCUXTNKUWIWJHXQIUGDGOROMGXIBNCKUOTADDGRPZMYMFEYHGOMBTAAFPAWLIVWMSHYXBZLHXQRZOZLRFWHSIEYQUSFKNXXEOKMDBZYNSBQXDPORNPFVSLFCSDNQNYLQRFTBUAKMBGE");

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
    msg.setTimeStamp(0.590009914009);
    msg.setSource(61900U);
    msg.setSourceEntity(185U);
    msg.setDestination(50891U);
    msg.setDestinationEntity(148U);
    msg.formation_name.assign("ZLMMMGCVLHETUMWRUJVHIIISNGCJKVRLEYOYWJXFXXVLDHZLKJMTHOSJIBGJSISUFABRAZDNYRKNQMETACDKOPEAFFPBAROGFUPOEQLQUZNFFFBHQMHSEWX");
    msg.type = 175U;
    msg.op = 128U;
    msg.group_name.assign("WPHJDFRBXJWGNIBTHNGGCXALEYEQMSGEONZPADHFTWNOLERDXSSSJKRSWNAIUAHKQYLKPFQYYVDVXVLAQBKCKTOLCZBKUDBTCAUHJJPMJEGFRWX");
    msg.plan_id.assign("ATYKIXYFFYRJLUJFWKYPZZMEGWQHARXQSTBTJMCBXNTEYDHPAQEWTGRDPIFIBRCNVKIBACZMQNFFWBIWTEOMRPHMHRGGVCZNYWOIOUXZOGCDBSYMHEJMRUSYKTPARJCIKXXZOKQFALXTWXVZUBBIUBJODRZTNLGNOEKVFAVNWOSODDJUQSHMGUNPEEUGZSIVQFQLGYHJ");
    msg.description.assign("RCHXWQXYFYOYBWGFHGC");
    msg.reference_frame = 84U;
    msg.leader_bank_lim = 0.146701259287;
    msg.leader_speed_min = 0.462041411305;
    msg.leader_speed_max = 0.268224211936;
    msg.leader_alt_min = 0.849567736287;
    msg.leader_alt_max = 0.293079458105;
    msg.pos_sim_err_lim = 0.196794904184;
    msg.pos_sim_err_wrn = 0.375100041479;
    msg.pos_sim_err_timeout = 3740U;
    msg.converg_max = 0.232519277237;
    msg.converg_timeout = 24774U;
    msg.comms_timeout = 5885U;
    msg.turb_lim = 0.382200690692;
    msg.custom.assign("GUEGFYIFLQFBNDNLMSVFYHVZHAXAOAHTGIDKZDKSKXQUCSIORKLRAAEBQCKESJTXPXTVPRVAVZNBAVWGCZRRYTENMMUCPEOGRQPHHKXOCLVMVYDRBJMPXSPSZOLFMIIGNMTZXWYYEKJULCILAAWZFLFDMJJDNNDEKGVXPNIRKFZOTD");

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
    msg.setTimeStamp(0.408194728158);
    msg.setSource(52807U);
    msg.setSourceEntity(213U);
    msg.setDestination(25693U);
    msg.setDestinationEntity(18U);
    msg.formation_name.assign("ZDZFXGGLOSMTPPIXMTFWVGZJKIUBKEBCWZOFKJUJFDCAQBLRSHBOWVANETQHENEROMHIFNCWATVVLXYTSBNCDYGDCPIOKADCXZIBEZACRLKQZIPWWZBCXXNJTLDVMNVFNQOMTEHKYPYKDYCPLIJQNGUFDYQGATQOOMMYWPISUQDJRUYUFXRHFVHOMEJQJBZKSLLWNHUUHIGXVESOTXPBUSXYHKJWVLSLSISMAAYACHDMRGFBUGRKPVNEQZG");
    msg.type = 28U;
    msg.op = 154U;
    msg.group_name.assign("IOZUYWOSAAUEGOBUOVGRPBSYMPPAYKMBRXMBMBXTCXECYIILGTJSQKJOIPJSEEPZILHHQKYTFFDZSHFSJFZFAMUPDEVJHFMWQNBCIALKDNGFBSZQURDRGBPOKPVKTGSBWRYCKQWRNCOHYTTDJXGLDQUZJWWWAHAGPIHONLJXGJXFWDUMQRVVPMXECCQVNXYTQTINVOCYMGHAEKZXNLVSSBIVLEEWZFRMCRDAUDCETQNJAYDLZ");
    msg.plan_id.assign("ISNERPEXIYYPBPKNGLFYUPTHKILVCTQFLCLGPAPVCYWLZJUJMCHKISVHYUJFKVXNXLIXEGRCJZGOSJQAYATWOZREVNRDMCBIBZGHTUTPUFYEXBWUMZDJCKZINLANEWHDKAEHCPTSCKRJVMVXDIJSMSRTZRJENGDVGHSBBROFWYUCORDNKAEOLQZXNSOBPMXFMIWJ");
    msg.description.assign("JSZOCAMOZKNVOLYOHMZGAJQTNVLWDPJVUKCSOBECUELIMPJUSYYHTGVZVTNFQAIPNKKMZJKFDOQHILAMTRWHHCQVILWXUZCFVSWWHFMVIVDFCRUSEKXSYSJNQIZGSJEKABWLQPOFBJDFOECZCBGRURNUJCYYLZCTQRMHPXGBUDPQWNSSPYFAMDYQRHYJADKRPBAEDAEWUNROAYHGBQPNWTTDXBLXTFHEBLKRXITVMXGWR");
    msg.reference_frame = 2U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 651U;
    tmp_msg_0.off_x = 0.138240393609;
    tmp_msg_0.off_y = 0.917147574498;
    tmp_msg_0.off_z = 0.846990516454;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.125333865952;
    msg.leader_speed_min = 0.749476225201;
    msg.leader_speed_max = 0.770954584094;
    msg.leader_alt_min = 0.949999035422;
    msg.leader_alt_max = 0.968203608104;
    msg.pos_sim_err_lim = 0.970790388089;
    msg.pos_sim_err_wrn = 0.998065058593;
    msg.pos_sim_err_timeout = 9024U;
    msg.converg_max = 0.870171753892;
    msg.converg_timeout = 20636U;
    msg.comms_timeout = 60339U;
    msg.turb_lim = 0.0031933172389;
    msg.custom.assign("RJIAQLVWMRSOVXWBDXMCOZKJJQAQALSMKOURUTJYPDNSJOMDKSYXTFLFIGQNIFCXJKCBKYDXHEIPYGFVZJMDRNUXLZWVGZZQQPETQJTDFTUYITDELAHWPOIMGSWHICHCHARXK");

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
    msg.setTimeStamp(0.0619628199445);
    msg.setSource(9722U);
    msg.setSourceEntity(49U);
    msg.setDestination(36455U);
    msg.setDestinationEntity(164U);
    msg.timeout = 61880U;
    msg.lat = 0.860637786936;
    msg.lon = 0.681147799973;
    msg.z = 0.729300673632;
    msg.z_units = 166U;
    msg.speed = 0.385821178684;
    msg.speed_units = 8U;
    msg.custom.assign("WKHHSWHTDESHFCYVKIPDJAPPHREEAUNVYWXVNPTTQQZAFWRAVWLYMEMYCUGPXIMOABLIPJEIZWSCDIDBRQOBVZHKVIKCSZEFAOXZQFYXJDPUGUIRQGXJZZHVKQEASONSZFKSTBZVDYOCQNUUVGSTRMULOICMQJBEFRPDRTLBHUXHNGLCFJFOSXCNHUMKLBDGMKNMEVRUW");

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
    msg.setTimeStamp(0.896646555319);
    msg.setSource(46060U);
    msg.setSourceEntity(32U);
    msg.setDestination(40496U);
    msg.setDestinationEntity(206U);
    msg.timeout = 39978U;
    msg.lat = 0.973135961181;
    msg.lon = 0.487227373409;
    msg.z = 0.824745527397;
    msg.z_units = 254U;
    msg.speed = 0.619421549046;
    msg.speed_units = 28U;
    msg.custom.assign("HYKXSJAJJOECOSBDDAJUFIQZLKOHWXGYYQUOTPLZAMHILKGEKNBBJNXENRZWDAMZRJMRBTIPMDMFKRVMAPSXARUAWKITLHGEUOZNSDYZHVEIVDGWGQRMIQTTBQBGCZJOWTKFCKTXLFCVMFUFSUDABDNWFDIJNGPJYHCQFZOELAZQRPFRSXYIUYUQCGBEJHINOVVZXNFCGGQXITPUORKMRLQWVHSEPKNWOYCTV");

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
    msg.setTimeStamp(0.181399411675);
    msg.setSource(11491U);
    msg.setSourceEntity(122U);
    msg.setDestination(62804U);
    msg.setDestinationEntity(62U);
    msg.timeout = 5564U;
    msg.lat = 0.0901059173947;
    msg.lon = 0.416338728452;
    msg.z = 0.641170501317;
    msg.z_units = 125U;
    msg.speed = 0.740945967757;
    msg.speed_units = 238U;
    msg.custom.assign("JTNCUNUVWCEXASZKFEHXZSKAHMMGMWMNPHRNADZPQNOLBERJRXIDWHREOVQFGGUDUPHVQUDJPSDZXLLMAORKXYBKAKIXTBCOEJOYMEWCVLFDLZOWJUZJLIAWTFIWDOSSDJZCHGFNQYPFPTOEMJGNXFCTE");

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
    msg.setTimeStamp(0.648078160569);
    msg.setSource(21135U);
    msg.setSourceEntity(212U);
    msg.setDestination(31499U);
    msg.setDestinationEntity(205U);
    msg.timeout = 23237U;
    msg.lat = 0.24387740706;
    msg.lon = 0.666649363252;
    msg.z = 0.424840537345;
    msg.z_units = 77U;
    msg.speed = 0.477384822973;
    msg.speed_units = 193U;
    msg.custom.assign("JLBFPCXRQDANMYLHXSRTAGZLEMRMZBVQOXNCIWUKRAUZRYHITHBPGNCBKBWUOPPJSKTAYBZUZSDGLNTITIIUQAODJAIHYGTDFDIKXXKIFHXHEELFOOXYPSHKVJJAGUJSYMKMFUQVWHMHFRMFELPNYDVHXONOIZQEEWTEYXCCKWZBMNBCTJMLOKWTSXNRJZZADIZPQLGO");

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
    msg.setTimeStamp(0.756510176721);
    msg.setSource(7919U);
    msg.setSourceEntity(112U);
    msg.setDestination(53487U);
    msg.setDestinationEntity(101U);
    msg.timeout = 47035U;
    msg.lat = 0.0328540131881;
    msg.lon = 0.352272819289;
    msg.z = 0.91048710048;
    msg.z_units = 47U;
    msg.speed = 0.658838210799;
    msg.speed_units = 169U;
    msg.custom.assign("IRSWSKTRIXJXAVTLLXTHOGAIJTKRGNHBJZNAPQFAWZUKGYKPDMXOYSKEUFACCVTEFRJVHZJRAYEORMDPEQZBPWLXJPIGKYVJZIDZLSCHDFQLVIYDSSLRVOGCYSQVOCXLGCWNFUKBIHUBQADATRWEWOTBGNKUABZVOXQSBHYUPPEUDQNHGYDWYPVZTJOMRWMMJFDELFHNFYUTNPWNEDZMNHQSCFLFBIBBOPHCUCMEEMRGWTMVUQJQXZMXGAKOLI");

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
    msg.setTimeStamp(0.126095712007);
    msg.setSource(40549U);
    msg.setSourceEntity(230U);
    msg.setDestination(15596U);
    msg.setDestinationEntity(150U);
    msg.timeout = 12767U;
    msg.lat = 0.772716036022;
    msg.lon = 0.0837570730121;
    msg.z = 0.0974392715211;
    msg.z_units = 209U;
    msg.speed = 0.0878207337952;
    msg.speed_units = 24U;
    msg.custom.assign("GVNFKMTYVOEJFTSULJOHQURGQIZDVNREZVYSPYHQBSFXTZCRKESPDXNKJXYLIUJFUNGMIFRBPSOWJWAOQGIKUWTAZRWLXAXGPBKLKSCJFWMAWUKHKLDFYCFUXRLAHKNNMBIPRFDQDQBGCGIYWSEQZLZVCOEPEOXCHGUMMCJVCWCJUPTDABXEBPOTHVXRTEHJDDBZOHMSYVME");

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
    msg.setTimeStamp(0.163452119214);
    msg.setSource(28839U);
    msg.setSourceEntity(94U);
    msg.setDestination(2918U);
    msg.setDestinationEntity(66U);
    msg.arrival_time = 0.491360305787;
    msg.lat = 0.070174509037;
    msg.lon = 0.244797020757;
    msg.z = 0.662264468833;
    msg.z_units = 171U;
    msg.travel_z = 0.367071226389;
    msg.travel_z_units = 252U;
    msg.delayed = 203U;

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
    msg.setTimeStamp(0.524113136436);
    msg.setSource(11768U);
    msg.setSourceEntity(167U);
    msg.setDestination(27716U);
    msg.setDestinationEntity(26U);
    msg.arrival_time = 0.592876252394;
    msg.lat = 0.0231122840866;
    msg.lon = 0.870094587225;
    msg.z = 0.245058513347;
    msg.z_units = 31U;
    msg.travel_z = 0.648845052181;
    msg.travel_z_units = 207U;
    msg.delayed = 105U;

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
    msg.setTimeStamp(0.340623338672);
    msg.setSource(13953U);
    msg.setSourceEntity(62U);
    msg.setDestination(520U);
    msg.setDestinationEntity(14U);
    msg.arrival_time = 0.948599033808;
    msg.lat = 0.188868410339;
    msg.lon = 0.136823872499;
    msg.z = 0.374515256774;
    msg.z_units = 94U;
    msg.travel_z = 0.983660133513;
    msg.travel_z_units = 183U;
    msg.delayed = 222U;

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
    msg.setTimeStamp(0.57431841607);
    msg.setSource(35813U);
    msg.setSourceEntity(229U);
    msg.setDestination(21249U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.557497763922;
    msg.lon = 0.128825763277;
    msg.z = 0.769388814568;
    msg.z_units = 160U;
    msg.speed = 0.369098491521;
    msg.speed_units = 130U;
    msg.bearing = 0.832824318188;
    msg.cross_angle = 0.899041131411;
    msg.width = 0.959837207689;
    msg.length = 0.812802636982;
    msg.coff = 156U;
    msg.angaperture = 0.474178163476;
    msg.range = 64496U;
    msg.overlap = 39U;
    msg.flags = 114U;
    msg.custom.assign("ROJMUVSOTBACZHFOCCHDGVROSTCORULXXICRUBGMAXUMRDTIVJZGCUQVGHSLBYFVSXVBCXTLEIHSQPYANYQOHSUWGNEJWIBFCBKNNRWNZDINSRBWQMLLEDBXWGFEIZDKJESKFNXAXUTOWHARYAZQTEAYTJKJDZIMKXTPFOPIWMURCYQYNGJWQKILFPWZCJGMFFODAY");

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
    msg.setTimeStamp(0.602415939516);
    msg.setSource(53987U);
    msg.setSourceEntity(211U);
    msg.setDestination(30570U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.422956204204;
    msg.lon = 0.72418157396;
    msg.z = 0.129576971686;
    msg.z_units = 127U;
    msg.speed = 0.76041250153;
    msg.speed_units = 62U;
    msg.bearing = 0.807468310134;
    msg.cross_angle = 0.577506142663;
    msg.width = 0.964457698249;
    msg.length = 0.972723180287;
    msg.coff = 195U;
    msg.angaperture = 0.208022713556;
    msg.range = 52191U;
    msg.overlap = 196U;
    msg.flags = 243U;
    msg.custom.assign("UTLXNJLPBMJDXNUAVKYHAVCGDAOLQWKTDBYMALUGEFVRWBWESNUMEOVSRUXFHEJIFCQCFAMVSIGKYPZOUTKTJITXGKZXIVJOBRLCGTZNHROSWRHNBHYPCQZDPLIJERPWFVMLYHDAFUDWYMTRKJKAWSBITXCEPJHORKBPNX");

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
    msg.setTimeStamp(0.994236503091);
    msg.setSource(55177U);
    msg.setSourceEntity(198U);
    msg.setDestination(13213U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.243360477674;
    msg.lon = 0.416938557303;
    msg.z = 0.808566762649;
    msg.z_units = 80U;
    msg.speed = 0.177493059114;
    msg.speed_units = 246U;
    msg.bearing = 0.557811383476;
    msg.cross_angle = 0.73883143005;
    msg.width = 0.00902737793396;
    msg.length = 0.769544557038;
    msg.coff = 123U;
    msg.angaperture = 0.167356787769;
    msg.range = 56902U;
    msg.overlap = 67U;
    msg.flags = 165U;
    msg.custom.assign("GSYFNJONYBDZBUPGGXWSOZITFCILXKMSFLCCKAZEZVNGARUEUFCKZSVRBEHEJERXPODEYFZMOCAQSHTMQIYWIKUXTZGPUNEPGIPZKQWJYABBUHIVVWWXMNQRAQTYTSUQMLDHLBVOVTJRYDJOEKP");

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
    msg.setTimeStamp(0.539927440325);
    msg.setSource(22144U);
    msg.setSourceEntity(92U);
    msg.setDestination(2226U);
    msg.setDestinationEntity(65U);
    msg.timeout = 12290U;
    msg.lat = 0.442546333246;
    msg.lon = 0.965899435166;
    msg.z = 0.0961614333638;
    msg.z_units = 196U;
    msg.speed = 0.197604263424;
    msg.speed_units = 156U;
    msg.syringe0 = 128U;
    msg.syringe1 = 128U;
    msg.syringe2 = 126U;
    msg.custom.assign("VFHKRWOIJJXFRNGUNSCDMRZBNILVCOCTLGIJFLGAOXFCSTJEWFZCRCUXDYOMKPZFAYXBQEVMQTYZPPYWZSPOMSRSNSAKAWRXRQALBTKMFXIQQHKGVACDWHWBJHYNALJPUFBBCGHGXNDUAOXVDYELYDMVLSMUPYVEEHWDZCTZTVJLLKQGNBWIQIDNEWQJPUTXGSOMZHSPOFFBCPBKRHVTUYVEUJSEJKQXGNED");

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
    msg.setTimeStamp(0.407698260912);
    msg.setSource(31454U);
    msg.setSourceEntity(174U);
    msg.setDestination(3654U);
    msg.setDestinationEntity(147U);
    msg.timeout = 44425U;
    msg.lat = 0.0659007304728;
    msg.lon = 0.487978104618;
    msg.z = 0.682487600783;
    msg.z_units = 108U;
    msg.speed = 0.759111236113;
    msg.speed_units = 26U;
    msg.syringe0 = 141U;
    msg.syringe1 = 106U;
    msg.syringe2 = 143U;
    msg.custom.assign("NFRCBAWUXFYKMJRAJPDZDWTMOQSOLFVQLYYMTVWUFZPTYHXRWTIKYKDHFGNVHLBPWJCGUDDTZOOPCJBUUQHEEASOMGIZEWIDLUSMIFFRXKNPZNQXYVVHEGQBAEQOHCGKPLGAYDCCZKOWSNNNVPXMSCJVBJRPBLVZUTYUTJRDIZDWTZLKGGXQIHOCKJXBAJRDEHYGNMFEIMASOMFFAXEQHTHNUBYAX");

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
    msg.setTimeStamp(0.929919244965);
    msg.setSource(57777U);
    msg.setSourceEntity(15U);
    msg.setDestination(23414U);
    msg.setDestinationEntity(63U);
    msg.timeout = 35081U;
    msg.lat = 0.468743146912;
    msg.lon = 0.0538758694623;
    msg.z = 0.186592011264;
    msg.z_units = 103U;
    msg.speed = 0.252637746226;
    msg.speed_units = 70U;
    msg.syringe0 = 199U;
    msg.syringe1 = 124U;
    msg.syringe2 = 38U;
    msg.custom.assign("YOTTKFOIYYOZEHEPGJFPEJRLGPXLCJSHGABUQQPFQXHLLTRSDXLJNKJQBGQZWVTQWCSULURUHAGIBM");

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
    msg.setTimeStamp(0.691041363652);
    msg.setSource(20229U);
    msg.setSourceEntity(124U);
    msg.setDestination(47873U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.944241906599);
    msg.setSource(55697U);
    msg.setSourceEntity(166U);
    msg.setDestination(685U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.993151323739);
    msg.setSource(24365U);
    msg.setSourceEntity(195U);
    msg.setDestination(39306U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.14649731676);
    msg.setSource(19959U);
    msg.setSourceEntity(11U);
    msg.setDestination(53703U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.422874033447;
    msg.lon = 0.676897968763;
    msg.z = 0.732223044844;
    msg.z_units = 73U;
    msg.speed = 0.535651291563;
    msg.speed_units = 165U;
    msg.takeoff_pitch = 0.551014355819;
    msg.custom.assign("CUUAUMCOOUNRISYZVCYDIJOWCPYIAGUKQRNRYBXHGXFJUZNSVEQHFKASQAZXGOUGEFFOLSWVDZVHPWQLLZTHBJFPFWOPQRREONXGBHVIJGABXKLBRSFBMVMCCNLUYINGQGZAPGRDXHPQXSVMHTMLSKEKSNGTAUBIZKFEZYIJFXMZNYCKTQJWNVUAEMMRODVBMWJYZEL");

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
    msg.setTimeStamp(0.839039104656);
    msg.setSource(38046U);
    msg.setSourceEntity(194U);
    msg.setDestination(63323U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.768262398978;
    msg.lon = 0.799323687729;
    msg.z = 0.611856299785;
    msg.z_units = 234U;
    msg.speed = 0.118461030616;
    msg.speed_units = 170U;
    msg.takeoff_pitch = 0.683893342875;
    msg.custom.assign("BMUDBLLYJXSBHKYZJNKJYTALCREGLMPOQPOUIGLVMAQGOGPNEDGPENLWMTXSHNKXCHHGGEUDJZOZOVUAHGXTOWADRVKFCEQAISWIUXFZDGTZBHHVCXBSKCHTNYXTXAZPEVTTSJBDEVAYZWRYUBHOJSFZLIISICMBYFRNNYRORLQXFKWDEJQMNSPIMARBWQPMCFPKICQMIROYAEKANQJPVLRFXQ");

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
    msg.setTimeStamp(0.500646777795);
    msg.setSource(58912U);
    msg.setSourceEntity(53U);
    msg.setDestination(19854U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.6773829929;
    msg.lon = 0.976634905997;
    msg.z = 0.325214606169;
    msg.z_units = 43U;
    msg.speed = 0.474927922752;
    msg.speed_units = 150U;
    msg.takeoff_pitch = 0.886918376546;
    msg.custom.assign("TUJUWYHNXZBXDBQBZOUMDOMECIMQAPSDKIWKSTZVAKNKUANWPRGZTEGGDSIIZGCOITFAVVXXOLGFRYZXQVGHMQXFWQBFMORMQAJVGXKKHYFAVZFKNOOJY");

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
    msg.setTimeStamp(0.0862581100431);
    msg.setSource(25343U);
    msg.setSourceEntity(88U);
    msg.setDestination(45728U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.102168844823;
    msg.lon = 0.67582259906;
    msg.z = 0.941782547751;
    msg.z_units = 173U;
    msg.speed = 0.485467477187;
    msg.speed_units = 51U;
    msg.abort_z = 0.58180315314;
    msg.bearing = 0.060995714226;
    msg.glide_slope = 145U;
    msg.glide_slope_alt = 0.237049375754;
    msg.custom.assign("WHWEITAAJLOJPVKVCNKROHQIASOIRGNFRLAIUTKBUVNYVDZENITM");

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
    msg.setTimeStamp(0.930944613545);
    msg.setSource(56232U);
    msg.setSourceEntity(196U);
    msg.setDestination(51499U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.0753562830053;
    msg.lon = 0.0808380126972;
    msg.z = 0.804829376226;
    msg.z_units = 38U;
    msg.speed = 0.622108475076;
    msg.speed_units = 152U;
    msg.abort_z = 0.840063249473;
    msg.bearing = 0.33754951313;
    msg.glide_slope = 8U;
    msg.glide_slope_alt = 0.403024996064;
    msg.custom.assign("AXCPXZZOMEVJSBLXFTUKVLZPJEWXGCRUHUYLYBUIRZEHSPCBIDJONGOVNINILHPOYHMHWIWNDDYFCJQSWUKMDFKTBDODGEEUBAPOXYEBLFIQCWQPVZUBHHWJQPTGNYWR");

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
    msg.setTimeStamp(0.935925173492);
    msg.setSource(43806U);
    msg.setSourceEntity(185U);
    msg.setDestination(6332U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.402411621265;
    msg.lon = 0.354816259746;
    msg.z = 0.489646725402;
    msg.z_units = 228U;
    msg.speed = 0.405142007077;
    msg.speed_units = 119U;
    msg.abort_z = 0.833148860687;
    msg.bearing = 0.893014514532;
    msg.glide_slope = 162U;
    msg.glide_slope_alt = 0.892768322104;
    msg.custom.assign("UKTMLLEEATYDBLDIVMMKTJQAYANSGZWYNLPVAOGOUKINFCXACTVMVWBNJHCMYYXJYSGIAQNOGZBSHVPFZJXTQSKYEUCXBGQLPBFGUWSNJXELGNORRGOIOAHSMQRIDWMGPVWMVCFRULLFFJURYCVQAFXAHOFE");

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
    msg.setTimeStamp(0.994428731657);
    msg.setSource(47405U);
    msg.setSourceEntity(93U);
    msg.setDestination(49584U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.466481221841;
    msg.lon = 0.309655938618;
    msg.speed = 0.220109583821;
    msg.speed_units = 58U;
    msg.limits = 92U;
    msg.max_depth = 0.281085177955;
    msg.min_alt = 0.697641071288;
    msg.time_limit = 0.111982218276;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.924380523536;
    tmp_msg_0.lon = 0.87124884632;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GNDBBUSPQLAAIQQFALTJAQIFLITCDPMENBVBGRTDTHSZWCIIHTHCMOKTYIJSHHLNSQSPWKPFDKOMXFGVZOGBKXLWJXVZKMGA");
    msg.custom.assign("TPYTVQNOMUETKHMWUUGKHOAASQTXXLIYILOVJRREZCLTHTJXOQCGFXNFPHHRPYYTHOANXDQCIMGCUBAERMPEYASNYGDFJVOLNNDTPGGIIINKJBUEFDVZBQDHMILDGXVABPBJZUEBOIEYRCRBCFFSZVLGRMMZSJVFNPTZSFGFKPUESTKQVNOXPKRRCHGKIWUXBXQSCODQWDRAOESJHLZWDQMWLWM");

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
    msg.setTimeStamp(0.490939583978);
    msg.setSource(36010U);
    msg.setSourceEntity(252U);
    msg.setDestination(33794U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.992903929857;
    msg.lon = 0.417113797725;
    msg.speed = 0.420032602319;
    msg.speed_units = 102U;
    msg.limits = 164U;
    msg.max_depth = 0.733173255537;
    msg.min_alt = 0.834875080861;
    msg.time_limit = 0.935536785489;
    msg.controller.assign("QGGRNDYADBVQPTBHVVMKADRSCQSUIQMVLRMEOEWZNHLLVZRGFOHPSBQOQTYZGYSVPZGCUWOSGTCYKBJPMKFLFHWDAOXWGDBFPMDGFNYCPKABICQOSJTMNMALRNEQCOKIPNBYZDEGAXLVGXNQEPFEYFZXZVLIROBJZUKSKAHJFU");
    msg.custom.assign("HJIEMJBIYWRQNJAGFNNPDCZGFWZAXHYXBOEMKKDKFMXUXGXNMUDJLHITZRJHPHTIYLDVGAWASVZFUQUALVGRMJRZDNIDMNIFGKBPVJYKBTTEKB");

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
    msg.setTimeStamp(0.541460881156);
    msg.setSource(29944U);
    msg.setSourceEntity(214U);
    msg.setDestination(15919U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.833574062457;
    msg.lon = 0.0523732891579;
    msg.speed = 0.858892382827;
    msg.speed_units = 3U;
    msg.limits = 234U;
    msg.max_depth = 0.522534104181;
    msg.min_alt = 0.891076955471;
    msg.time_limit = 0.981706343155;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.709540036937;
    tmp_msg_0.lon = 0.347710294912;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HHDXNBMKAXYINIFNCWVYDGBECONQEUARWLMSIGRTMCGWKCHADYVSGESDKCTZSBQIILHHPWUMUPXILLYDIRUZKXZXFOWSBLMZVPFBOEKKPOJFDSIYPIBMDBHCQTPDRTETGSOFNVUWYUQGCAQIJYKZHGZULAEJGJFLRRLTYLJQXAVAXTEECBRJUMPQOSZHSGOFTQHPOYZTFZJWHANUMXYNKKUFQWRMPERFZNWVTOGVVNKBPRAXDJVDAWSNX");
    msg.custom.assign("UYDECHSVIWOXJZVPXLKFEIFKTALBRTUWPBSLQEANGJPUMIXDCSWGZKCDRVHQVZHYLNRDSRLMIYYFOACMOFTKBZOXJYVBTDAJYTCWCWDWMWYKHNBFGMJJKZOTXBBLBADNFOSPUGQRSJIRHPKPQACTOFSVMJCLFEQIMUGBRPXPXLNHSMTXNUTPHESMWRINXUZBDVCEUZFELWVQJANOKAYYQDGVIRVQRQPYKMLAGOIEGUT");

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
    msg.setTimeStamp(0.140047030253);
    msg.setSource(1128U);
    msg.setSourceEntity(182U);
    msg.setDestination(56719U);
    msg.setDestinationEntity(167U);
    msg.target.assign("XFHUKKTBGEUJEAOOSDCOVCIHDYDFQEZAOSXIWTCBFLRYQKVLHMJGXQXTRKQ");
    msg.max_speed = 0.365326532721;
    msg.speed_units = 84U;
    msg.lat = 0.516553664192;
    msg.lon = 0.0202693371551;
    msg.z = 0.130695227531;
    msg.z_units = 124U;
    msg.custom.assign("MHBLSOUQLNGAENKVYSYXIXOAPZDZFGWMYJCAONIUTWQOENIIYWYPTGTKBVQJQUJCVPZQBMLJLSHRSNHZNNKNFJVWRFDTPAZYWIARSRVOAKOOVFJNPEBOGVCSAVXMJMNTPXKBLMOHUHXGBTGYISMIHEPYTBBIZDXDDKIIQRQQDQLDHZPZAUVUKGAJCXXTXHDCWEHCQHELRFCSDMJGFGTYFGFUDJZEWSBUKWAKLURKCZSLRYEBM");

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
    msg.setTimeStamp(0.874975440534);
    msg.setSource(40328U);
    msg.setSourceEntity(226U);
    msg.setDestination(29306U);
    msg.setDestinationEntity(81U);
    msg.target.assign("JFHCHSQDPXOFZHUNQLITBKRNBGWUEWZKOTJG");
    msg.max_speed = 0.187984089883;
    msg.speed_units = 18U;
    msg.lat = 0.370375035516;
    msg.lon = 0.319009382703;
    msg.z = 0.583676490261;
    msg.z_units = 2U;
    msg.custom.assign("JJQSDRHUWNVJVGLRXSACPMSKVOWPOVWTEDNGBTOIKYEWBAEQFYDDOPWCBMWHKXFDXWYBIHNBUIDYN");

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
    msg.setTimeStamp(0.281055896336);
    msg.setSource(15532U);
    msg.setSourceEntity(156U);
    msg.setDestination(4679U);
    msg.setDestinationEntity(29U);
    msg.target.assign("INWGVALAJXAXWVGGIXWZPELHSLOTHAPDKCJLZLGQXRUMNSWOIMNBZ");
    msg.max_speed = 0.124709254534;
    msg.speed_units = 223U;
    msg.lat = 0.939769174041;
    msg.lon = 0.584256305555;
    msg.z = 0.712752346792;
    msg.z_units = 23U;
    msg.custom.assign("AJGNBHDICELSEBPFYIBYWDVIMIWONQTUJIEAKVVYSPAUQWDQGRBBTHSPPULHEVGHWYJGRAKTQSCWXMZJAWYINSCCEXMFJXNUHIFQLJZBTNPLZEYYZVEZWWXMYIJQTPXAOTKDKRKLOCQUPNUCUDMQNHPXVAROEKNOGDVMSZZXR");

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
    msg.setTimeStamp(0.409553603948);
    msg.setSource(33910U);
    msg.setSourceEntity(90U);
    msg.setDestination(48876U);
    msg.setDestinationEntity(114U);
    msg.timeout = 33658U;
    msg.lat = 0.232210466456;
    msg.lon = 0.63992439373;
    msg.speed = 0.204428631803;
    msg.speed_units = 191U;
    msg.custom.assign("EJDWOTXZDVQSNJWNVKYTTMWPTQUJPOURIGFCMTGNFLMETTGKCORQNZHXRIJCMUBESJYVZYYIZKFYGQNPEBAXQFFLXVIOBECHWVBUUWSWBUVJBYSZILGOPLXRXVZDAELPRHDMDTRROSSAMMPWVAHKZEOFLGK");

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
    msg.setTimeStamp(0.0216926702358);
    msg.setSource(14568U);
    msg.setSourceEntity(179U);
    msg.setDestination(38516U);
    msg.setDestinationEntity(120U);
    msg.timeout = 50058U;
    msg.lat = 0.662627820612;
    msg.lon = 0.0382928303083;
    msg.speed = 0.503150698071;
    msg.speed_units = 140U;
    msg.custom.assign("IJFZCVAMAPSXKHFABYORMZTDWACMANBZNCLITJUJPHRQDBWMPNJSISVBUNYQQIGNTMSLXGWYQAIFMPHFVWPVCZEBKLWMDSPEKIGLVGFUEUGVHFEZKRQGHKRVEJHXDNENSLQRGIQPFFYCVWTUECMMTNKLOWNDUTHZZJB");

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
    msg.setTimeStamp(0.871934045008);
    msg.setSource(27983U);
    msg.setSourceEntity(25U);
    msg.setDestination(37298U);
    msg.setDestinationEntity(61U);
    msg.timeout = 58599U;
    msg.lat = 0.289062624969;
    msg.lon = 0.440384117403;
    msg.speed = 0.7693599316;
    msg.speed_units = 90U;
    msg.custom.assign("PMIPZYRJHUAQUUJQZSKBANJWUSOBIJHTVYGTLNHRFNSMEBNGOQKMZXSNPFTUEYQSWQFYJYPMGPKVLEUHGXSAOWABDZJISWWQLHEBRBQBXWURSIETIQMAJOFEYWHMZAAFGLOXJFPPULEVXDPVXBRKDMCWLODVYDRDCTNBIOTKCAZRPLVWKGFDHLIYGGK");

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
    msg.setTimeStamp(0.747552584393);
    msg.setSource(7067U);
    msg.setSourceEntity(35U);
    msg.setDestination(16588U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.505364985889;
    msg.lon = 0.838363198942;
    msg.z = 0.570149083276;
    msg.z_units = 216U;
    msg.radius = 0.3349575593;
    msg.duration = 3280U;
    msg.speed = 0.139679129498;
    msg.speed_units = 166U;
    msg.popup_period = 47424U;
    msg.popup_duration = 34399U;
    msg.flags = 92U;
    msg.custom.assign("YNGURAFHLLXABLUYIKOWRCIK");

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
    msg.setTimeStamp(0.855303457611);
    msg.setSource(63900U);
    msg.setSourceEntity(200U);
    msg.setDestination(6918U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.651145948997;
    msg.lon = 0.885932931029;
    msg.z = 0.305930412012;
    msg.z_units = 137U;
    msg.radius = 0.274988826238;
    msg.duration = 22342U;
    msg.speed = 0.412204030962;
    msg.speed_units = 63U;
    msg.popup_period = 17532U;
    msg.popup_duration = 44404U;
    msg.flags = 174U;
    msg.custom.assign("EKSOFBDYUDGTNFAELZBKXXCLJRHXLWRJHRRNTNGHAWSTMRSUSXHGFHOMRBZHJDIMOKICOEMKUBKMKTXBRODILYWCVG");

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
    msg.setTimeStamp(0.369184988375);
    msg.setSource(1551U);
    msg.setSourceEntity(8U);
    msg.setDestination(15257U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.696094332711;
    msg.lon = 0.466254815054;
    msg.z = 0.967240895612;
    msg.z_units = 212U;
    msg.radius = 0.731104320671;
    msg.duration = 13858U;
    msg.speed = 0.357502386289;
    msg.speed_units = 192U;
    msg.popup_period = 28510U;
    msg.popup_duration = 47985U;
    msg.flags = 115U;
    msg.custom.assign("LUWIYDSQVDXHOLZSQOZUZYEULOCXJFIWWRHWDGIJFGYYETIMMPXRTHSZZCQDETCTQJGBFXTYJCZBNQKEUGHAFEMKPKXTRQGQLBDFMXSPJNNHKNFUDWQWKQYEHFVCXHCOUOSXWASPWKBASBEPYRMVGOZWVWUPOZMIDABAVG");

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
    msg.setTimeStamp(0.372326503508);
    msg.setSource(131U);
    msg.setSourceEntity(197U);
    msg.setDestination(17663U);
    msg.setDestinationEntity(87U);
    msg.timeout = 28109U;
    msg.lat = 0.237828588939;
    msg.lon = 0.877145792344;
    msg.z = 0.841786517466;
    msg.z_units = 222U;
    msg.speed = 0.992824435706;
    msg.speed_units = 181U;
    msg.roll = 0.909622609278;
    msg.pitch = 0.246466829867;
    msg.yaw = 0.959297072515;
    msg.desired_pitch = 0.906964506295;
    msg.surface_threshold = 0.684702134288;
    msg.thrust_duration = 40721U;
    msg.pitch_threshold = 0.348674772739;
    msg.burst_rpm = 0.832495378149;
    msg.custom.assign("AHBVGYVLIEZAQXUNDVBCJTWHPCLSQGRQFVTCAAMYBUGNQULYIPNWZVCECBEWPNUFBVUQSQUOYNJTMXRWPSMHHZVYPAXZWKMPVSMOQOJXGKHHLIRSDJKESGRXJKUDPGUFIZXLDZPUHLJIOOOCTFBJJLFECEEKVQMMMOBHZKFTJFTXUDYGEWIWAWFDQIKH");

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
    msg.setTimeStamp(0.658826054895);
    msg.setSource(43353U);
    msg.setSourceEntity(51U);
    msg.setDestination(11111U);
    msg.setDestinationEntity(131U);
    msg.timeout = 17441U;
    msg.lat = 0.0203057943049;
    msg.lon = 0.067072305107;
    msg.z = 0.71629957223;
    msg.z_units = 137U;
    msg.speed = 0.23212044831;
    msg.speed_units = 230U;
    msg.roll = 0.33000462706;
    msg.pitch = 0.674770241214;
    msg.yaw = 0.863755163801;
    msg.desired_pitch = 0.727069860197;
    msg.surface_threshold = 0.242240491483;
    msg.thrust_duration = 4362U;
    msg.pitch_threshold = 0.631713567157;
    msg.burst_rpm = 0.55875378442;
    msg.custom.assign("YEADRYDOXZIYHTYOVNSBTVDZMSIYKDYPKLJZXQOBKFLXCCQDTAOHGFWVDINIZHCIJITGVZRJAONNJWMQVSHFEKPVFPXSEKXWPSNCYPEIROLLNUJSGWXGFSUMZFMJADTAHVYEDKZQCPBQCVKEQAJHRME");

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
    msg.setTimeStamp(0.400813631244);
    msg.setSource(44654U);
    msg.setSourceEntity(62U);
    msg.setDestination(63503U);
    msg.setDestinationEntity(0U);
    msg.timeout = 7101U;
    msg.lat = 0.296752270506;
    msg.lon = 0.719878743916;
    msg.z = 0.483898408774;
    msg.z_units = 253U;
    msg.speed = 0.60082365407;
    msg.speed_units = 33U;
    msg.roll = 0.326118598222;
    msg.pitch = 0.543175073813;
    msg.yaw = 0.643756848239;
    msg.desired_pitch = 0.286961019757;
    msg.surface_threshold = 0.632573770773;
    msg.thrust_duration = 21294U;
    msg.pitch_threshold = 0.817522627368;
    msg.burst_rpm = 0.812897797601;
    msg.custom.assign("QMTMALZVEWZQXCMNSYSURRNIJGRZPMYAVUEKLIAXRLLJVFSVOVQGFWPQELRJNJYKWSBAMHWBDMEOZVIXNFUTWQVDKJJPXKMEUBAJMNYKSCIAOGEUYBVIRUCYHCOAFGQGQTJRACHBSZODGGAWXZXOPDBOZDEDRLFOKTYYYSTGZCCNUFWPOXXIPLTUKBJEGKHUIVHPMSAYWBHQLOIDHTSPJHRFSBFPCWHTDXRCQNNUFQTCWM");

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
    msg.setTimeStamp(0.198487994246);
    msg.setSource(50841U);
    msg.setSourceEntity(102U);
    msg.setDestination(62082U);
    msg.setDestinationEntity(200U);
    msg.timeout = 13720U;
    msg.lat = 0.276050870339;
    msg.lon = 0.467966733137;
    msg.z = 0.620049992718;
    msg.z_units = 196U;
    msg.speed = 0.747492446362;
    msg.speed_units = 132U;
    msg.bearing = 0.124218434684;
    msg.width = 0.445263616973;
    msg.direction = 208U;
    msg.custom.assign("DCOWYXAUNCCLEBPZXSKAFGLHYBZBHUHIPSYZDNRVMYQMHDGZNCGMXVYEWULEVJPQARTFZIKNCOEQUMKJLSKFNDRHS");

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
    msg.setTimeStamp(0.772943363343);
    msg.setSource(50172U);
    msg.setSourceEntity(54U);
    msg.setDestination(50690U);
    msg.setDestinationEntity(250U);
    msg.timeout = 33125U;
    msg.lat = 0.71690093082;
    msg.lon = 0.91785233034;
    msg.z = 0.384669968477;
    msg.z_units = 4U;
    msg.speed = 0.90869520872;
    msg.speed_units = 152U;
    msg.bearing = 0.0314414111581;
    msg.width = 0.578325728414;
    msg.direction = 247U;
    msg.custom.assign("AHVVXUWAWQYNSAZDCEWFMSRRTGETBHANQMRXMRKTFRKXIRLGYLVKQBHJLSEIJIGXWU");

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
    msg.setTimeStamp(0.931566778629);
    msg.setSource(6658U);
    msg.setSourceEntity(89U);
    msg.setDestination(50498U);
    msg.setDestinationEntity(160U);
    msg.timeout = 30193U;
    msg.lat = 0.653728021644;
    msg.lon = 0.309752589008;
    msg.z = 0.721513959054;
    msg.z_units = 49U;
    msg.speed = 0.17936604106;
    msg.speed_units = 189U;
    msg.bearing = 0.986380443185;
    msg.width = 0.542759982707;
    msg.direction = 7U;
    msg.custom.assign("CJSHUDFEYEUDKWDBZNOWYKX");

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
    msg.setTimeStamp(0.947789815482);
    msg.setSource(12426U);
    msg.setSourceEntity(10U);
    msg.setDestination(17914U);
    msg.setDestinationEntity(164U);
    msg.op_mode = 184U;
    msg.error_count = 185U;
    msg.error_ents.assign("WCCLZYIWLXMXPBJGMAOXGCOFZAWTLMUMFBDBGJPCGSOMMRBWTPYWSCZBIL");
    msg.maneuver_type = 38258U;
    msg.maneuver_stime = 0.362966592261;
    msg.maneuver_eta = 36445U;
    msg.control_loops = 3174413079U;
    msg.flags = 206U;
    msg.last_error.assign("RIBAGJWCSCKQULKJHGEJVGJMPNMHWMYTCXSSSHTXDXYHZQNYRKUVBDIVBDUAGLWSZPOHESTWNEEEOCABZZGDCEQZHILJMOKPXAZOCYQTWPSORFFUEMDNKNLKDWGBYVRFIMAALNXHBAWKALCVGAQNVZAQPQSIGXMU");
    msg.last_error_time = 0.941911995874;

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
    msg.setTimeStamp(0.247979679199);
    msg.setSource(52305U);
    msg.setSourceEntity(69U);
    msg.setDestination(31970U);
    msg.setDestinationEntity(244U);
    msg.op_mode = 170U;
    msg.error_count = 154U;
    msg.error_ents.assign("ZCASGJQKWPTTJZFQYYKDI");
    msg.maneuver_type = 9068U;
    msg.maneuver_stime = 0.871850182741;
    msg.maneuver_eta = 38911U;
    msg.control_loops = 3154569766U;
    msg.flags = 95U;
    msg.last_error.assign("GICOQWNPFYWOXFDPRQOEOVDGCIMAZWULCMNAKYRBBVMREPXZXTTSSSLNWDZKREHWGCTMYXAIDHQHYPHMISLIPGQHHEGOEYOZDNFOJQVJUCCZH");
    msg.last_error_time = 0.514589031958;

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
    msg.setTimeStamp(0.150786866162);
    msg.setSource(42387U);
    msg.setSourceEntity(178U);
    msg.setDestination(1171U);
    msg.setDestinationEntity(78U);
    msg.op_mode = 153U;
    msg.error_count = 221U;
    msg.error_ents.assign("EZPSVALTNNJSWHHOFTZIC");
    msg.maneuver_type = 64532U;
    msg.maneuver_stime = 0.447390601232;
    msg.maneuver_eta = 60659U;
    msg.control_loops = 2064032668U;
    msg.flags = 129U;
    msg.last_error.assign("UNMYUZDVSDJWRNPHQVJSLTLMMYHVLDHETETMHYGFHKONXFGRSPRAUCDCLASJAWKDYLJVCNXEPYKPBOBOTYJTRCYWHOQWSXXMQTJYUHXOPZYCZUIHIIYGMQWWWBFFZIRJHCDIQVCRQBQMGCZEGCSOXUETQEEAAELNIKAJXOTDBLLKISDEOFAXZVNVFWUK");
    msg.last_error_time = 0.780342280142;

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
    msg.setTimeStamp(0.65665841766);
    msg.setSource(18525U);
    msg.setSourceEntity(48U);
    msg.setDestination(13191U);
    msg.setDestinationEntity(185U);
    msg.type = 165U;
    msg.request_id = 27585U;
    msg.command = 48U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("ZCCVKPLRAFRUVAXALGGUQBQIWQDNLHIIZBEGNVWJBLYQPCBETKZMWCPYSWMKPDOTCSJEQGTUVZTAHMOVXDFWHKXPKSYOYTUJQBOSGPLXMNZCJGMSS");
    tmp_msg_0.max_speed = 0.446156522983;
    tmp_msg_0.speed_units = 125U;
    tmp_msg_0.lat = 0.129776514956;
    tmp_msg_0.lon = 0.106176877006;
    tmp_msg_0.z = 0.455353922287;
    tmp_msg_0.z_units = 193U;
    tmp_msg_0.custom.assign("DVRRDCYGIGHQXMDMQLPQKMSHXFMACLFPZJIKHTYKIYPPWNZVLZQVOXKHXMTUPSXDMOLCDEENUAUJQONJXPJGLDIOHBRVKTNJTGEKEFPXBHUEFCSCECTMCWNIQGJZWFDTAKAUDHMZKJGESVXRZIIGYLQQSARWJBWSNOBVFFZRZYKBJEVUGCFBHTVOPEYHTUSCUMDRBLAIRTFDOYMFVHCBQZGWQVLPAWPXEOGKNRYBSNSXTWAORJUYYUZSAOLIWA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14789U;
    msg.info.assign("ZASGCTYTWXURXITWZSSNHEUYEEQOZBHXRINFQXPIRKXPHCHDVGISNQKMFREWTQWMCSEADYONPFMUANBVXHFYFEXRM");

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
    msg.setTimeStamp(0.744063168695);
    msg.setSource(34113U);
    msg.setSourceEntity(243U);
    msg.setDestination(40128U);
    msg.setDestinationEntity(238U);
    msg.type = 144U;
    msg.request_id = 41560U;
    msg.command = 240U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 55387U;
    tmp_msg_0.lat = 0.861714397603;
    tmp_msg_0.lon = 0.55692533149;
    tmp_msg_0.z = 0.323542067568;
    tmp_msg_0.z_units = 206U;
    tmp_msg_0.speed = 0.326200427416;
    tmp_msg_0.speed_units = 49U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.191076598458;
    tmp_tmp_msg_0_0.y = 0.463472758761;
    tmp_tmp_msg_0_0.z = 0.949919401092;
    tmp_tmp_msg_0_0.t = 0.624426190901;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MMCHCFAFOXOKFJHZVPJAVTQZLDBJNWUJLYLMSIYSYUTJLFNSTQEBKUMXFECRBTPXCSTOMVHIFXMQZLZANDZXRWJSDXTYQRQEDPZKVXIBBWKTRIVMQHIIVGXGGYRR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1200U;
    msg.info.assign("WEWAQXCKMWQUUTPGLIXLIJXNGRQLGDKURSVKMSPMH");

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
    msg.setTimeStamp(0.0489765300766);
    msg.setSource(36011U);
    msg.setSourceEntity(210U);
    msg.setDestination(61783U);
    msg.setDestinationEntity(152U);
    msg.type = 119U;
    msg.request_id = 42484U;
    msg.command = 224U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33335U;
    msg.info.assign("RYEWOWPPSPVXGVKHPZETBHZKKMBCLSAKPKHYDAQIEOQHXZUHJAWNICTGXRZSGSMVDOYYAOCRYBDXLFYRJMPRVFMVXZUJTVLGHNNNIWDXOLNRLDVMYGSBUVIBMEOFHJFRLVBACQORCOIEISBJZEPCXHGKWJCEGILZYQTUPHFSOCXOTNJZZFKDRJGWDNQQQMMNYAEELPSFXQDKQMMTJCAPTTDAFV");

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
    msg.setTimeStamp(0.735312138688);
    msg.setSource(27858U);
    msg.setSourceEntity(207U);
    msg.setDestination(43356U);
    msg.setDestinationEntity(24U);
    msg.command = 12U;
    msg.entities.assign("KEOIELFZQASLBDNRFJVSCGVPRMJUOLUCCASBFBYMJEFIXADTWPCAENMKZHYMPCHLTURTXQCLBLVMOTPDDKAZAPEZHCPMPGUXSSVDQYUMXCQXOJIPLQIVAKBMFUVSTWTRJGER");

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
    msg.setTimeStamp(0.300771680091);
    msg.setSource(43866U);
    msg.setSourceEntity(75U);
    msg.setDestination(50795U);
    msg.setDestinationEntity(221U);
    msg.command = 105U;
    msg.entities.assign("HJBXOZYQJYWZPAKMPIKCFUKGWEHYUQDATLMRSGBNBDVKRODZHQJFSYMWKXLBEBEZUIUAWLJOMFPMOSSMYUTTOIHGXXJTJBCCQHWYDUTBVAQSVBXEEIMMHDMVIUKZORAZALDSPQGNNREDGLFPVKCMNQODJEPKGIYRWVZEWRKNQHAOFI");

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
    msg.setTimeStamp(0.0607761038946);
    msg.setSource(16573U);
    msg.setSourceEntity(25U);
    msg.setDestination(25901U);
    msg.setDestinationEntity(99U);
    msg.command = 53U;
    msg.entities.assign("WTOSNLSTTILUKDUGAYMHRDGQPXUHCDMJQXUOXWZMATQXERHPEAFNPTFBOYVGMRAEVGQVCYKCNYVTALUEEJWZJ");

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
    msg.setTimeStamp(0.553337637499);
    msg.setSource(10014U);
    msg.setSourceEntity(100U);
    msg.setDestination(20849U);
    msg.setDestinationEntity(28U);
    msg.mcount = 43U;
    msg.mnames.assign("UGSWCTOPADBNHUOMSXLVQDQQWYXTDKVNCIOMQLYFVHEDOOKPSGVHCPDHDUANCJURMNSVPQXODJFVLLUYGWRRJQGMEKEBIZCCAIHUXEWEIJOFZONDVNJFJZBFTUARLBYIZYNSUQKJEIMIFTHYLGGPZRQCAWZVUWARSWJNYXXSAVCLBQMXHVXPIGGNMWKTKJZSPTKJDEBWFCNDZLKYRAISGKPZTSBHMHOOITKUAFFXBBMHCTETBQRAYRLPGEMFW");
    msg.ecount = 110U;
    msg.enames.assign("AYBHBHXHNYMXLBBRLYJLSKUPAXAGPCSWTPEYPSAHREPUZMWYFTURPRAORQYFLJTVOKLCDJMCOUVDTBAQZDKAMJOLSWQBEGCMMKDGPNJCQSNVECNLREPMYYYRQHVRZKVKXHZFAGSZQKJIHZCFLVWQQQVMNFINAJWXMBXUWGZEIESF");
    msg.ccount = 115U;
    msg.cnames.assign("XRRXYGSIBTJZIZZJVTCFNNBXEAUCTWQCOSJFEIRZVYSWDTKREDVVCESAAWQKHMUJSMWLYHJKQBMUITNHXV");
    msg.last_error.assign("MOCQIFGRBVBETMRYLPCWUGOZRCCIADKWGOEFUYDVRGCSDDAVNJNRWMXUQDOXBPFGNGDMYXFGJVFEQOCSBULRYKMWNRZUJUZIKMSJIXAPBKXZRETKHEUHVSPVEPMSNWTYDZAPCAVFLHVGOLYTMYHTNLDHGXQWIIHHSQDXSKTBVFOIPNNAIBJYZNTLNETUVXQYAXCRATIRJDUB");
    msg.last_error_time = 0.596875048428;

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
    msg.setTimeStamp(0.799134469692);
    msg.setSource(26474U);
    msg.setSourceEntity(2U);
    msg.setDestination(45638U);
    msg.setDestinationEntity(33U);
    msg.mcount = 154U;
    msg.mnames.assign("OPSZCEWQYPDHWPQBBCGHJEJAIIYTZZGNSZBYPGNJUZAZQQCJFXLHWAXTCWUBIYTIFKNQLORMXQDWBYFQYGOSGMEENVTBHXXRNPRADRWZDONAMXKMSWWJUALVEXVINFUJCMVKLCDQGPXBCKVUVITCAUBEFYISTNIOHUQXSRYORMJAEDFCSTPPWFDLFLNWMTPANVYILZDKRSKT");
    msg.ecount = 141U;
    msg.enames.assign("PJXKRIGEELFMBIYJF");
    msg.ccount = 4U;
    msg.cnames.assign("JSUILREUDXNCVW");
    msg.last_error.assign("TERXEDAGISYZBSRAJHFBQITCNROXXWUNCLNGFTRBULINGWQWZDXYUKSHEVJHNNHKZPBVNBNLOMWJQRWSTECXIDUHOUZDSDFCZGVWDOEPGTVJSPOQXQTUHTFJIAJEWQRCKTOXWWFQJSCVABBUCMKGMLOHPGQEVNCDEFUDMYPHLJLBBMHIAOKHZUZSCLAMKFXPIUMYITKYVBKQNYAKTVDOLPYYVQVEARJDIXRFZKRLFSACGYLYZMZOPMM");
    msg.last_error_time = 0.236122681027;

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
    msg.setTimeStamp(0.683153748467);
    msg.setSource(27458U);
    msg.setSourceEntity(192U);
    msg.setDestination(46924U);
    msg.setDestinationEntity(215U);
    msg.mcount = 56U;
    msg.mnames.assign("XRJHJZEMGDHHZAQBRTDXMZYLFXBMFCWDZOGLFQPVVIBOQQXSCBPEZICKPWCOXJJWOGHFANKONHOMDYSFXCTBDIJDUDOFLMGQKEAGRWGWFMKUZWJEEVPGTTAQMSZAYVOIYJHWAKUSNLETIOZLBCNNSNJGHPTQYGZNCMSJIIARDQBV");
    msg.ecount = 246U;
    msg.enames.assign("WCJAROOSLIODGXETQWEPKCMKKUPHKVKVGZEJGTRSBMORPXLLADHCVMFGQRTIBTFJMYKAVFYHMYSTLTIZNANRZEDQVFDBOAMDMWXAKCCFH");
    msg.ccount = 217U;
    msg.cnames.assign("FYNRMZIUGZPMXRMAESVLFDFNOMKICQBEDHHXYXPKAKJAZYWOKFJBDWVBRIOBBLHUGMBBEWAGTXKZGCCKIEZNRISIVKQDUIQPVUMCAGDXUPWFVRTZLHLAUOJSWDCZPONSYFAHRP");
    msg.last_error.assign("OUHEXTCNGOMMQETYRREJFFDEGFLZACPACYDKHXCIQDWZCVGIBGDGTOALRKUPEWMTI");
    msg.last_error_time = 0.795055511658;

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
    msg.setTimeStamp(0.17351100067);
    msg.setSource(17850U);
    msg.setSourceEntity(24U);
    msg.setDestination(18119U);
    msg.setDestinationEntity(26U);
    msg.mask = 118U;
    msg.max_depth = 0.926457189921;
    msg.min_altitude = 0.260428095762;
    msg.max_altitude = 0.63194701596;
    msg.min_speed = 0.684119651763;
    msg.max_speed = 0.30461818664;
    msg.max_vrate = 0.13625146459;
    msg.lat = 0.766201163913;
    msg.lon = 0.650677636532;
    msg.orientation = 0.198646118559;
    msg.width = 0.450238906322;
    msg.length = 0.120151502509;

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
    msg.setTimeStamp(0.0616349052799);
    msg.setSource(20190U);
    msg.setSourceEntity(245U);
    msg.setDestination(47727U);
    msg.setDestinationEntity(43U);
    msg.mask = 26U;
    msg.max_depth = 0.667022805387;
    msg.min_altitude = 0.40900420853;
    msg.max_altitude = 0.568665350594;
    msg.min_speed = 0.0307870798981;
    msg.max_speed = 0.862807107069;
    msg.max_vrate = 0.106630386446;
    msg.lat = 0.962585726616;
    msg.lon = 0.00984666214445;
    msg.orientation = 0.109522458335;
    msg.width = 0.697524929795;
    msg.length = 0.783477507721;

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
    msg.setTimeStamp(0.856044267625);
    msg.setSource(40818U);
    msg.setSourceEntity(240U);
    msg.setDestination(49837U);
    msg.setDestinationEntity(161U);
    msg.mask = 222U;
    msg.max_depth = 0.430645863504;
    msg.min_altitude = 0.14647805806;
    msg.max_altitude = 0.392555168998;
    msg.min_speed = 0.868091553178;
    msg.max_speed = 0.545857126143;
    msg.max_vrate = 0.420756135501;
    msg.lat = 0.629209816188;
    msg.lon = 0.461065146758;
    msg.orientation = 0.774723609928;
    msg.width = 0.542579145363;
    msg.length = 0.343534898385;

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
    msg.setTimeStamp(0.551644112251);
    msg.setSource(17268U);
    msg.setSourceEntity(169U);
    msg.setDestination(51340U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.0667631678239);
    msg.setSource(46205U);
    msg.setSourceEntity(55U);
    msg.setDestination(47243U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.309234512571);
    msg.setSource(36154U);
    msg.setSourceEntity(177U);
    msg.setDestination(18623U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.182092206222);
    msg.setSource(45213U);
    msg.setSourceEntity(63U);
    msg.setDestination(7369U);
    msg.setDestinationEntity(72U);
    msg.duration = 41U;

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
    msg.setTimeStamp(0.268859972647);
    msg.setSource(29568U);
    msg.setSourceEntity(57U);
    msg.setDestination(65317U);
    msg.setDestinationEntity(57U);
    msg.duration = 63566U;

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
    msg.setTimeStamp(0.457314591289);
    msg.setSource(7767U);
    msg.setSourceEntity(251U);
    msg.setDestination(28417U);
    msg.setDestinationEntity(99U);
    msg.duration = 39820U;

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
    msg.setTimeStamp(0.746900073392);
    msg.setSource(848U);
    msg.setSourceEntity(202U);
    msg.setDestination(27059U);
    msg.setDestinationEntity(140U);
    msg.enable = 227U;
    msg.mask = 3922617834U;
    msg.scope_ref = 2305006148U;

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
    msg.setTimeStamp(0.0288984281691);
    msg.setSource(12061U);
    msg.setSourceEntity(160U);
    msg.setDestination(839U);
    msg.setDestinationEntity(193U);
    msg.enable = 247U;
    msg.mask = 3213354435U;
    msg.scope_ref = 2157190591U;

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
    msg.setTimeStamp(0.108742758176);
    msg.setSource(65338U);
    msg.setSourceEntity(48U);
    msg.setDestination(40742U);
    msg.setDestinationEntity(2U);
    msg.enable = 69U;
    msg.mask = 975045157U;
    msg.scope_ref = 4156804130U;

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
    msg.setTimeStamp(0.307226355075);
    msg.setSource(38042U);
    msg.setSourceEntity(7U);
    msg.setDestination(55317U);
    msg.setDestinationEntity(5U);
    msg.medium = 195U;

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
    msg.setTimeStamp(0.637230908652);
    msg.setSource(38444U);
    msg.setSourceEntity(103U);
    msg.setDestination(6736U);
    msg.setDestinationEntity(116U);
    msg.medium = 140U;

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
    msg.setTimeStamp(0.381815445863);
    msg.setSource(11711U);
    msg.setSourceEntity(237U);
    msg.setDestination(19431U);
    msg.setDestinationEntity(116U);
    msg.medium = 146U;

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
    msg.setTimeStamp(0.265184594702);
    msg.setSource(18490U);
    msg.setSourceEntity(144U);
    msg.setDestination(14850U);
    msg.setDestinationEntity(237U);
    msg.value = 0.783427664323;
    msg.type = 4U;

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
    msg.setTimeStamp(0.535370175533);
    msg.setSource(13604U);
    msg.setSourceEntity(49U);
    msg.setDestination(40071U);
    msg.setDestinationEntity(68U);
    msg.value = 0.588063613822;
    msg.type = 138U;

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
    msg.setTimeStamp(0.663578873896);
    msg.setSource(18481U);
    msg.setSourceEntity(32U);
    msg.setDestination(19041U);
    msg.setDestinationEntity(2U);
    msg.value = 0.934684863218;
    msg.type = 34U;

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
    msg.setTimeStamp(0.450189611264);
    msg.setSource(14278U);
    msg.setSourceEntity(199U);
    msg.setDestination(23567U);
    msg.setDestinationEntity(141U);
    msg.possimerr = 0.369671983712;
    msg.converg = 0.470219543842;
    msg.turbulence = 0.0991696748742;
    msg.possimmon = 57U;
    msg.commmon = 217U;
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
    msg.setTimeStamp(0.333498806579);
    msg.setSource(35581U);
    msg.setSourceEntity(186U);
    msg.setDestination(54624U);
    msg.setDestinationEntity(48U);
    msg.possimerr = 0.922329902672;
    msg.converg = 0.790073929751;
    msg.turbulence = 0.228209308843;
    msg.possimmon = 103U;
    msg.commmon = 131U;
    msg.convergmon = 198U;

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
    msg.setTimeStamp(0.257029306948);
    msg.setSource(47727U);
    msg.setSourceEntity(8U);
    msg.setDestination(13137U);
    msg.setDestinationEntity(40U);
    msg.possimerr = 0.309883901125;
    msg.converg = 0.329196432859;
    msg.turbulence = 0.492973757911;
    msg.possimmon = 11U;
    msg.commmon = 118U;
    msg.convergmon = 194U;

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
    msg.setTimeStamp(0.335130393523);
    msg.setSource(63534U);
    msg.setSourceEntity(109U);
    msg.setDestination(60304U);
    msg.setDestinationEntity(69U);
    msg.autonomy = 0U;
    msg.mode.assign("OFWMLOTYEFUYJSDKFWABRQPPCKUXDXGZPVMULHADCUWUSYRISVGSNWMQBAXVSQKBMENUXALZJNUZMYEAWIWYNXJHINDLQOVTIIMQWIDEONFLBCHYDVZXCKRJLXZYTJVPMOBSHWTRVRFDJPENUGSISGXK");

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
    msg.setTimeStamp(0.48578658185);
    msg.setSource(63036U);
    msg.setSourceEntity(229U);
    msg.setDestination(4649U);
    msg.setDestinationEntity(36U);
    msg.autonomy = 158U;
    msg.mode.assign("KPLVRKRUQUQQCTVLQNYDWIPZKQKHCZRNHBJXYQUVCFDOKWIC");

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
    msg.setTimeStamp(0.0527891923173);
    msg.setSource(29946U);
    msg.setSourceEntity(221U);
    msg.setDestination(34609U);
    msg.setDestinationEntity(208U);
    msg.autonomy = 133U;
    msg.mode.assign("OWNFJLMAUFHLGWKBWHTDPAJWZ");

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
    msg.setTimeStamp(0.517484129801);
    msg.setSource(29641U);
    msg.setSourceEntity(205U);
    msg.setDestination(13578U);
    msg.setDestinationEntity(61U);
    msg.type = 238U;
    msg.op = 130U;
    msg.possimerr = 0.588055792894;
    msg.converg = 0.616854468383;
    msg.turbulence = 0.104771825857;
    msg.possimmon = 38U;
    msg.commmon = 29U;
    msg.convergmon = 159U;

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
    msg.setTimeStamp(0.887872000877);
    msg.setSource(5309U);
    msg.setSourceEntity(138U);
    msg.setDestination(2943U);
    msg.setDestinationEntity(89U);
    msg.type = 105U;
    msg.op = 146U;
    msg.possimerr = 0.595843809464;
    msg.converg = 0.0431314308727;
    msg.turbulence = 0.650749252105;
    msg.possimmon = 216U;
    msg.commmon = 207U;
    msg.convergmon = 44U;

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
    msg.setTimeStamp(0.491408998782);
    msg.setSource(20762U);
    msg.setSourceEntity(34U);
    msg.setDestination(51506U);
    msg.setDestinationEntity(132U);
    msg.type = 58U;
    msg.op = 72U;
    msg.possimerr = 0.13981032508;
    msg.converg = 0.708976955031;
    msg.turbulence = 0.787048412476;
    msg.possimmon = 127U;
    msg.commmon = 97U;
    msg.convergmon = 223U;

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
    msg.setTimeStamp(0.448879268557);
    msg.setSource(20862U);
    msg.setSourceEntity(134U);
    msg.setDestination(63939U);
    msg.setDestinationEntity(157U);
    msg.op = 203U;
    msg.comm_interface = 146U;
    msg.period = 8184U;
    msg.sys_dst.assign("UWIBKXZETBWERILAEQIROQAFFATDHQPJDEN");

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
    msg.setTimeStamp(0.0860221302278);
    msg.setSource(20680U);
    msg.setSourceEntity(164U);
    msg.setDestination(1660U);
    msg.setDestinationEntity(220U);
    msg.op = 144U;
    msg.comm_interface = 85U;
    msg.period = 15042U;
    msg.sys_dst.assign("GTKFWGFWRKNPFGBENFVFPKOEMKDFKGWKJRWXAGVYZUYLJORCMAGMEQTZLYLMPITBURIFNDYRRMQQDJVUWVIIDXMOVIEAUWHBTHVDFUPJJZBOIEYZQHQYQFPUSNLS");

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
    msg.setTimeStamp(0.277361566236);
    msg.setSource(41146U);
    msg.setSourceEntity(185U);
    msg.setDestination(46172U);
    msg.setDestinationEntity(1U);
    msg.op = 175U;
    msg.comm_interface = 59U;
    msg.period = 32259U;
    msg.sys_dst.assign("DPHKXOXIZAIVZNNINJPZFVWFAFTLTOOCHCNDDJPBLURADBASUABZROKZOSJDLBPSXEGBGBQXASLDVSKHQ");

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
    msg.setTimeStamp(0.236894654782);
    msg.setSource(13756U);
    msg.setSourceEntity(15U);
    msg.setDestination(51871U);
    msg.setDestinationEntity(141U);
    msg.stime = 2522719052U;
    msg.latitude = 0.942812323227;
    msg.longitude = 0.825302446418;
    msg.altitude = 31835U;
    msg.depth = 14590U;
    msg.heading = 45126U;
    msg.speed = 24566;
    msg.fuel = -95;
    msg.exec_state = -55;
    msg.plan_checksum = 5062U;

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
    msg.setTimeStamp(0.395167864002);
    msg.setSource(59563U);
    msg.setSourceEntity(126U);
    msg.setDestination(1189U);
    msg.setDestinationEntity(139U);
    msg.stime = 1281575867U;
    msg.latitude = 0.0433213365433;
    msg.longitude = 0.489960796513;
    msg.altitude = 41756U;
    msg.depth = 2475U;
    msg.heading = 60075U;
    msg.speed = -14827;
    msg.fuel = 85;
    msg.exec_state = 78;
    msg.plan_checksum = 11480U;

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
    msg.setTimeStamp(0.038772331466);
    msg.setSource(27782U);
    msg.setSourceEntity(169U);
    msg.setDestination(18394U);
    msg.setDestinationEntity(45U);
    msg.stime = 2696321099U;
    msg.latitude = 0.149257870086;
    msg.longitude = 0.547355810682;
    msg.altitude = 11656U;
    msg.depth = 2598U;
    msg.heading = 19742U;
    msg.speed = 17067;
    msg.fuel = 115;
    msg.exec_state = -2;
    msg.plan_checksum = 44037U;

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
    msg.setTimeStamp(0.0126080991466);
    msg.setSource(57635U);
    msg.setSourceEntity(155U);
    msg.setDestination(3020U);
    msg.setDestinationEntity(53U);
    msg.req_id = 60796U;
    msg.comm_mean = 183U;
    msg.destination.assign("PWULHINAXUPJHDFWFBHOEXNMDCRSNKDHJUNSLCRQLOSGRYGUYMYYUGNOZSOSKURGLTCF");
    msg.deadline = 0.858293562252;
    msg.range = 0.112891892272;
    msg.data_mode = 41U;
    IMC::StopManeuver tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QFEREDBXGCGIZOLRPOMJAUDPFFYWXDNBDFWITPFQUFTRXCTDIVWWRVGNAJSIGRNVSOCUUIGQLTITCBVKVHVSRINET");
    const char tmp_msg_1[] = {56, -3, 100, -11, -122, 101, 13, 121, 39, 55, 118, -102, -40, -113, 61, -58, -83, 115, -41, -63, 13, 54, -51, -80, 53, 101, 121, 42, -112, -13, 82, 29, -59, 62, -69, -72, 13, -21, -85, 2, 97, -52, 58, -98, -72, -79, 6, -82, 84, -97, -34, 126, 116, -17, -86, -25, -53, -116, -84, -38, 6, -119, 74, -35, 73, -21, -92, 107, 16, -75, 71, 66, 55, -11, -70, 26, 107, -121, 124, 77, 98, 60, 92, -41, -106, 26, -64, 90, 41, -88, 78, 29, -40, -44, -79, 86, -126, 50, -33, -51, -84, -98, -114, 88, 35, 64, 78, 16, 122, -44, 49, 71, 103, -61, -83, 20, -16, -19, 121, -100, -38, -75, -40, 2, -76, 62, -102, 40, -123, 117, 0, -123, 39, -127, -66, 85, 61, 82, 115, 71, -66, 9, -10, -91, -107, 57, -112, -120, 113, 26, -77, 85, -126, -22, -7, -102, 69, -51, -126, 98, 87, 55, -74, -36, 96, 3, -39, -7, -9, 4, -46, -49, 115, 72, -90, -86, 61, -125, -124, 14, 2, -19, 55, -85, -55, 9, -125, -105, -59, -38, 25, -64, -32, 57, -52, -59, 83, 12, -94, 4, 77, 5, -48, 99, -20, -70, -95, -2, -51, -61, -111, -84, -117, 57, 111, -63, -108, -1, -18, 82, -123, 61, -95, 63, 28, -34, 116, -1, -112, -91, 65, -68, 100, 58, -76, 5, 98, -51, -31, 8, -11, 108, 31, 111, 25, 39};
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
    msg.setTimeStamp(0.681500499575);
    msg.setSource(38762U);
    msg.setSourceEntity(167U);
    msg.setDestination(2877U);
    msg.setDestinationEntity(182U);
    msg.req_id = 13592U;
    msg.comm_mean = 100U;
    msg.destination.assign("SQFPBMNJPLSCGFOVBCCIITIXHIBZUTHMWZCIJLYJFJTIYVDBJGLXFZJZHENNPZQQRSHRCKZBFQI");
    msg.deadline = 0.263680744134;
    msg.range = 0.542566435535;
    msg.data_mode = 54U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 53784U;
    tmp_msg_0.lat = 0.0320313830573;
    tmp_msg_0.lon = 0.977705703672;
    tmp_msg_0.z = 0.606537244543;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.pitch = 0.671601085133;
    tmp_msg_0.amplitude = 0.152234074321;
    tmp_msg_0.duration = 62254U;
    tmp_msg_0.speed = 0.797189300233;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.radius = 0.85339349196;
    tmp_msg_0.direction = 45U;
    tmp_msg_0.custom.assign("DYWGFWIIGFOUHAEDRTHIIWZDTLMTEDVLOUELAKCRQFJVNFRLEEPPDNCSUGAARVRNSCYQZTMMUKDAYMEGQRBJBHQZIPGSKBSZUGFWUMJCZBLBWNHYBOHJNYSMDLXXKSJWHDXAVITOSFNKJFHERJIORYGAKZUFJCPVJVTKXEXPXGKLADYGMWLXAWULNGNRPOZSOJUOIWBXYQEMWCTAO");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EBPDRAFUZWCDXWHNTLRJWZYNAFJTHXHAVABYPCIIBCUGKZMLXHWPSDYVQOOLIHRJTRUZFKBPCQQARDUWEGYRXOTOMSONXNHPVTDEZTOBLVVTFDNCMNAPUISGODSGXBVXEAKOFDMIJIRWNGZEYGUKKSTBLYVNKHFWDXQOQUAEWSGBLKPSIFTSEGVJQ");
    const char tmp_msg_1[] = {91, 76, -55, -68, -16, -79, 123, -17, 123, -102, -89, -25, 98, 0, 43, -65, -104, 3, -65, -41, -119, -6, -9, -34, 0, 116, -65, -90, -28, 3, -7, 124, 99, 36, 80, 32, -26, 14, 85, -38, -15, 30, -107, -70, -100, -6, 105, 105, -94, 94, -90, -92, 19, -87, 84, 87, -110, 82, -110};
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
    msg.setTimeStamp(0.734576327056);
    msg.setSource(10941U);
    msg.setSourceEntity(123U);
    msg.setDestination(62102U);
    msg.setDestinationEntity(39U);
    msg.req_id = 63708U;
    msg.comm_mean = 123U;
    msg.destination.assign("BMFJQJYKVKTIASOVRWFZWCPVNUYXZZLHUAQEGJPGHBBIRXF");
    msg.deadline = 0.0400041295494;
    msg.range = 0.409683162178;
    msg.data_mode = 246U;
    IMC::Heartbeat tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ASNKQWVEQVOMMXVWAMHJYAHQJXFRHAVGIWITRNBQYBDFZHKUNLGBKGHXJAPHKBIJPFENYLSSDERNASXOZCNYUNCTKSJFNBZTGMHQTDPRUEUBAWOFPVIPAKMJZWTLMQCVKSUAYDIHXPKGVVHOYGTBXRKEVPLSDUBLZJCLQFZDPYTZBLNISFRFQFZCDBXLDYCUGNEIWDOQZGUWOUMSMDLCOTTCGTVGWZJOFKJOXIORQ");
    const char tmp_msg_1[] = {75, -109, -58, -1, 49, 71, 24, 40, -22, -19, -49, 5, -81, -10, -109, -92, -55, -55, -54, 45, 57, -99, 92, -3, 46, 29, -3, 91, -70, 77, -68, 79, 4, -3, 1, 67, 126, 114, -57, 82, 115, -54, 112, -86, 123, -63, -58, -48, -83, 15, 46, -102, -70, 27, -30, -37, 48, 61, -22, 37, -123, 106, -82, -17, -18, 102, -77, -70, 109, 109, -42, -107, -69, -127, 60, 110, 24, 117, 20, -121, -27, 122, 8, -61, 28, 81, -96, -45, 25, -38, -125, 54, 61, 88, 39, 23, -43, 7, 69, -1, -81, -105, 85, 45, 23, 67, 105, 20, -8, 112, -46, -9, 118, 28, -120, 71, 31, -112, -27, -106, -124, 87, 81, 71, 124, 62, -87, -49, 44, 54, 90, 100, -76, 36, -128, -40, -45, 119, -8, -11, -40, -12, 114, -120, 40, -84, 2, -119, 97, -69, 53, -112, -45, -59, -16, 88, -22, -29, 119, 117, -32, 106, -40, 61, -6, 86, 22, -67, 60, 32, 55, 26, -109, 49, 68, -7, 80, 29, 8, -6, -65, -110, -83, 54, -10, 47, -123, -60, -66, 1, -25, 102, -36, 47};
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
    msg.setTimeStamp(0.870360567809);
    msg.setSource(2960U);
    msg.setSourceEntity(149U);
    msg.setDestination(30207U);
    msg.setDestinationEntity(236U);
    msg.req_id = 8586U;
    msg.status = 220U;
    msg.range = 0.0684962542931;
    msg.info.assign("CNVGWJEVSQTYSRHPMYKZVZRKJKRCCWZXFLDIKZSOPXKOYDWXILMBTNYLUIZCKHHJPMEMTIEUFDSOPERGVQPBCXWZYDDFJMZIUMCQZQNRLXERVHSCIFBTYFTIBUGXHTHUZXAOQPDQWRQTQEBYDAKBJPYCXRGUYDCKHTOYIRBMEEGXFGWUJNFGAPINJVGADIDSEOJTBOUL");

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
    msg.setTimeStamp(0.196327376355);
    msg.setSource(6155U);
    msg.setSourceEntity(59U);
    msg.setDestination(60001U);
    msg.setDestinationEntity(251U);
    msg.req_id = 56230U;
    msg.status = 56U;
    msg.range = 0.298264285583;
    msg.info.assign("XHHRJKDGABXAOUARAOH");

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
    msg.setTimeStamp(0.979764529319);
    msg.setSource(50936U);
    msg.setSourceEntity(149U);
    msg.setDestination(9407U);
    msg.setDestinationEntity(71U);
    msg.req_id = 25747U;
    msg.status = 36U;
    msg.range = 0.528380520549;
    msg.info.assign("OGDOKJGPYPXQQTDUHMQXOQITDEKMLPABHQUUMOCKLZDAVCOVHZBWNLOASGYHBBFCQLFCXGPENTNTRVJNESDINFYUVEXFVLEAKCJNRMCJFJJQFOWSQIXDUAEIYZPRMLBHKDYVEYZTRMHIZHEBAWSOTFMGBYVHZLRWVS");

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
    msg.setTimeStamp(0.243109516849);
    msg.setSource(9625U);
    msg.setSourceEntity(168U);
    msg.setDestination(42709U);
    msg.setDestinationEntity(202U);
    msg.req_id = 10790U;
    msg.destination.assign("ZHAAKLTANCGZEKOBNUFFSITNJCMNYKYCCQVUVYSOZCHUUHDRSPSYWOGMTQWEBFLLMLNQREFAEHRIRKQBEZERPLMWWJAHZSIMYKRYDFX");
    msg.timeout = 0.43138178486;
    msg.sms_text.assign("GDPUWGJATKIJBFKZQTDGJAHDZMICSPGANMFRVTGJGLXNJYJAT");

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
    msg.setTimeStamp(0.541598627086);
    msg.setSource(33376U);
    msg.setSourceEntity(123U);
    msg.setDestination(54608U);
    msg.setDestinationEntity(187U);
    msg.req_id = 2246U;
    msg.destination.assign("WCISPOZMUDSEFISCKQZVDDMLCKCXIYBLTXRWRHOWZVJG");
    msg.timeout = 0.11020583543;
    msg.sms_text.assign("NMGDNGHEBXXKRGGTBSCPADXQWQMWZDKETHSWWTKSUTCRHKTNIBJGFOIZLJKGKNVKYOPTHCVUAOAIOPFNMDZSCJFPWUIAAGROSJWBSEEYCAWUVCZUWDNMGSMMVAFDRZPRXBBVJTYRBLKFQTKEJFIQBZLVXXYLSRIEYCZLNLDCWWHPGJPBQDXPPAUBLRZXUHEAYJ");

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
    msg.setTimeStamp(0.166871723713);
    msg.setSource(34073U);
    msg.setSourceEntity(154U);
    msg.setDestination(54046U);
    msg.setDestinationEntity(177U);
    msg.req_id = 9512U;
    msg.destination.assign("XPYBCXRTAYECWIBPKOXRGTFTTASKAMZJZBQHTQUJCMZJPVEESRUUPIJA");
    msg.timeout = 0.671746128084;
    msg.sms_text.assign("XEVWIJCDFBCVZMSUQPOTCVRUTZYKCHPOFPSDJAVUGKABNGXMQNALWIDECCUFGOLBTPPQDBIXKNGEIYFVQSOSFLMPMXKYWEEEMRRNYVQPJFSENLNKFILGPJHKGQJNZCNBZAAHRERDHCEHVTTTABEATGTSRMCRPIOWNABBHWVZUJIMSDTSLQGPJQJOFUQLKXILSXZXDDWCROGXAMRHNIT");

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
    msg.setTimeStamp(0.43265300156);
    msg.setSource(35710U);
    msg.setSourceEntity(105U);
    msg.setDestination(44123U);
    msg.setDestinationEntity(183U);
    msg.req_id = 53260U;
    msg.status = 118U;
    msg.info.assign("NFGVCQSSIZPENMNOGMQVDQTVVYWMCECTRUXZYPFOIOGJZJIFJWQPDRHBCKUXZXTWVSWXBRCEPTRWTHIHFTHEKBPNFBSXBYDSFSGKAJVUGZMZKCPNWOLWHAPRJEQCVENGDIQMTDFANBUJUDIUZKRLNDKHZLGHLLQFXMIMCG");

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
    msg.setTimeStamp(0.54221028137);
    msg.setSource(42883U);
    msg.setSourceEntity(21U);
    msg.setDestination(14287U);
    msg.setDestinationEntity(38U);
    msg.req_id = 56977U;
    msg.status = 41U;
    msg.info.assign("NFUFNAQMLDMQGWFDMTTYNDWSZKKEQCWOVPTIHXBNTRHQEVBNZXYLPPCDYKWZGRJUXUSFEGGRSOOEJAZVVZITBJDLFNIKZGOFTHL");

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
    msg.setTimeStamp(0.474900281826);
    msg.setSource(31936U);
    msg.setSourceEntity(91U);
    msg.setDestination(53591U);
    msg.setDestinationEntity(61U);
    msg.req_id = 1560U;
    msg.status = 20U;
    msg.info.assign("TXTRADWYBMSZJBRVJAGOKQSXWFXTGZPKFYIEHKGCQSAWYWNYQHRACNRTJVLTQCBULSXNUSXYOVHJLACLKKEXHGUHISPFNXDNIDIZPCDKPGZMFLDWVSRSIVIHBGCLEGQMMXZJYTNRMUCMDOBKLJYRBUNMPPYQNFEPVEH");

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
    msg.setTimeStamp(0.612476334526);
    msg.setSource(15904U);
    msg.setSourceEntity(53U);
    msg.setDestination(60989U);
    msg.setDestinationEntity(186U);
    msg.state = 0U;

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
    msg.setTimeStamp(0.511763548217);
    msg.setSource(29591U);
    msg.setSourceEntity(121U);
    msg.setDestination(4168U);
    msg.setDestinationEntity(95U);
    msg.state = 146U;

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
    msg.setTimeStamp(0.753727379112);
    msg.setSource(26110U);
    msg.setSourceEntity(90U);
    msg.setDestination(5978U);
    msg.setDestinationEntity(218U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.124012464229);
    msg.setSource(47732U);
    msg.setSourceEntity(24U);
    msg.setDestination(58215U);
    msg.setDestinationEntity(211U);
    msg.state = 205U;

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
    msg.setTimeStamp(0.361267105929);
    msg.setSource(10866U);
    msg.setSourceEntity(56U);
    msg.setDestination(7093U);
    msg.setDestinationEntity(32U);
    msg.state = 104U;

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
    msg.setTimeStamp(0.623239080659);
    msg.setSource(54986U);
    msg.setSourceEntity(127U);
    msg.setDestination(24633U);
    msg.setDestinationEntity(106U);
    msg.state = 252U;

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
    msg.setTimeStamp(0.0481447796441);
    msg.setSource(4638U);
    msg.setSourceEntity(147U);
    msg.setDestination(36019U);
    msg.setDestinationEntity(167U);
    msg.req_id = 42033U;
    msg.destination.assign("ZNMHRVFUMACUT");
    msg.timeout = 0.256276221334;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.101659848546;
    tmp_msg_0.lon = 0.791729561907;
    tmp_msg_0.z = 0.94880243713;
    tmp_msg_0.z_units = 153U;
    tmp_msg_0.speed = 0.443022423326;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.bearing = 0.815749203151;
    tmp_msg_0.cross_angle = 0.230583179854;
    tmp_msg_0.width = 0.371413462432;
    tmp_msg_0.length = 0.210521355691;
    tmp_msg_0.coff = 144U;
    tmp_msg_0.angaperture = 0.472959825575;
    tmp_msg_0.range = 32966U;
    tmp_msg_0.overlap = 178U;
    tmp_msg_0.flags = 53U;
    tmp_msg_0.custom.assign("EPDBPKZUVDSQVCUTYBENOBOYKAVLYJURFEHHMRDUDKYHPFYNIUEQXXRKBKNUMEWSSMRTFWKAHAOCLYNWIOQFSQXZUVECBXSXHKHZJFDQHLIIPDZOYWZIUCSJKOJFXBERSGHQOJBFQZWLPMCEXILXESVPCDGDZTCIJBNUVFGFWEMGJDTGMGYAVBCZNPVKMAMZILZATAYRWKIQA");
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
    msg.setTimeStamp(0.41661215433);
    msg.setSource(32531U);
    msg.setSourceEntity(187U);
    msg.setDestination(58743U);
    msg.setDestinationEntity(31U);
    msg.req_id = 4894U;
    msg.destination.assign("SYELMIHDBSZHAPTSVTMRBCLNCCYPCYESTBIQLZFXUSFHPHDQBMDGEDRUJLBLNAKAYZWTIKVNFZLHYRCLFQFKGTGNQJXVIJVRCNWTCIQABBGYSLMSMVEWGGZODAPZKLJXXIOROVKXWAKNJAWZEOUAOGTCRRTBJIUDNQDZCXFQVUEDHPZXVIRHUNKVYUBPMOTYLWXUCJODKPEADGVFJQMERJPFFEMOMGTPIEWGOWYWZXMWN");
    msg.timeout = 0.680188717551;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("UQIBGTPXZPWKBMELWMRKCKUBWZUISCGLFH");
    tmp_msg_0.lat = 0.661151365543;
    tmp_msg_0.lon = 0.25812783647;
    tmp_msg_0.z_units = 130U;
    tmp_msg_0.z = 0.628689097851;
    tmp_msg_0.accuracy = 0.231260784365;
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
    msg.setTimeStamp(0.629653009304);
    msg.setSource(49156U);
    msg.setSourceEntity(163U);
    msg.setDestination(5856U);
    msg.setDestinationEntity(36U);
    msg.req_id = 22060U;
    msg.destination.assign("VKABBCAAMXIGOWETGMUNDYMSEFBHWEOHIQJFMOSLUGYZHCNYXRCPBQLDHJXSOXNUWYTPBYXLJOELTWUNZOVFFJUNXRKJPRBDVIKZXYCMYKIEERIFUWVGKP");
    msg.timeout = 0.856575861166;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.14775797411;
    tmp_msg_0.z_units = 31U;
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
    msg.setTimeStamp(0.482574256952);
    msg.setSource(58024U);
    msg.setSourceEntity(243U);
    msg.setDestination(62851U);
    msg.setDestinationEntity(168U);
    msg.req_id = 36307U;
    msg.status = 26U;
    msg.info.assign("MAFOVPFBSHHNNRQOKXZTIADQJIULDUYMJQONDSNLVGWRGRLMLNLUNHYEZCJSATYEPONCZKPTWEBXDFPEKHNPEJZBLFPRSALVZVHCEZWJBDVBTGFTYAMAFSUKKZ");

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
    msg.setTimeStamp(0.426911795214);
    msg.setSource(64660U);
    msg.setSourceEntity(47U);
    msg.setDestination(59845U);
    msg.setDestinationEntity(247U);
    msg.req_id = 54147U;
    msg.status = 14U;
    msg.info.assign("GVHWPRGLKTEXISHFJCYJQKUCUPVGYLZYDKRMAHDSYX");

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
    msg.setTimeStamp(0.0681106281447);
    msg.setSource(60812U);
    msg.setSourceEntity(196U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(201U);
    msg.req_id = 60760U;
    msg.status = 61U;
    msg.info.assign("LPCDKCLTBLMWICBGJIGPFIGEAGWUIVXQXFMTEEXCCYZERHQDDEDHUZHDFGRKPXINOTLLXKPAUFEUVCVFSUBGWQTJHQFOVMIUBPUXCFKQDKYESNPEWCXMQCWGRNIZPPNAYGXOHONIJSHTDA");

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
    msg.setTimeStamp(0.760782651809);
    msg.setSource(26289U);
    msg.setSourceEntity(40U);
    msg.setDestination(8678U);
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
    msg.setTimeStamp(0.215752806356);
    msg.setSource(9112U);
    msg.setSourceEntity(134U);
    msg.setDestination(24455U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.678214994809);
    msg.setSource(33093U);
    msg.setSourceEntity(53U);
    msg.setDestination(33009U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.757466702747);
    msg.setSource(8953U);
    msg.setSourceEntity(107U);
    msg.setDestination(38670U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("EFDUIXBCRYSFKOKCSQAYCXYZOTIHJLNVQYYATKHWAEQVFDMSHPJJXTNWALWTFBNTNHAULVQNDZUQYH");
    msg.description.assign("HWKZVDRZBHCFKKIMKITIAINUCNVGZJHNUUFKPETGYBZZXSAOEAOQAYVUDSCQRRUMXLCYEBMBPNQEXAHLFREUBOPSJPWDSTAFZOHJANJEJNPFZTPDQ");
    msg.vnamespace.assign("ZUBBFWLMJCPAMUTPMOHHPFPCSEEDKUTEYPCYNWTDTDKRMFSYITPZISLFSKVUWZUSQVPBYKISHGXOHIASXAXGQMVVMJLGGMQRIYADRUKQXZOAZVFCVIGSXCURHLBJJJRFNEOCFAKLWRLHWJXHIKF");
    msg.start_man_id.assign("UOJJCDOVTGECVVWCHHJALDQQMRQNBOSHDLLINWZTUUQTDHGVBDKXLZWAPMWTOOCHXURTULFNWYICRSVPA");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WQXTTXTBPRBWMNWHSQTCUXGNFYCVMJUHPXSCNFZSVINEIOKOQQTWGKYYQRUAYADVUELNIHDTEPPBVZEOUMFUYLXQCLHKSJOODDFCRH");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 65398U;
    tmp_tmp_msg_0_0.lat = 0.054088317868;
    tmp_tmp_msg_0_0.lon = 0.686495255739;
    tmp_tmp_msg_0_0.z = 0.0172412103167;
    tmp_tmp_msg_0_0.z_units = 162U;
    tmp_tmp_msg_0_0.speed = 0.0867342837189;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_tmp_msg_0_0.custom.assign("TQQLPLZJBTITDJRWMQKAZCZBHA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BPJFGIHPNNAVFWXXDUJQSAOMOQJNKSQSZOGRCLYMM");
    tmp_msg_1.dest_man.assign("FMQLCAUXHOTXCVCFSVBYUNXBJIZKGPFPHJUONEHFGTREOWVNLGYMVYTZQUIPCKPLWEALBBLCWABORUZIAXFIYCQNRQVNERYQDGMWXYZAAD");
    tmp_msg_1.conditions.assign("UVASRZCGSTYLHICQBHEKULRPTLNJKRKJRBPDAADIUQGNWMFFQZEOXGKAMZIEEJMCMHRYNKNNIQSQTHKCVJZJQYVFMOPHUGGBZOTWZYFOVFVOGBUCXVSDCDLPVXLAOXQYZAODEMRFRYSTKDJIIPMQGHBDIBYPMREIEHBONOWJYFXFLXUUNAWHHGWPKACCIVNWHLPKNEUQVFZDXTSDFAMJTENBXSSWJASWUWGVLPTBPRWZRYOXGYZBE");
    IMC::TrexPlan tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.reactor.assign("YFTIZFZCEANIQAKRHYJIEBCLKIHZOEFBJTOFOGCMCRTRMWCDKWNFJNSCUYXHOUCFZDLHBEPVOWMJNVABBTSQPGOTTQOCAZMEPEJUDTYRNXUHQRPQOKUQSWAUYMQOKZLNB");
    IMC::TrexToken tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.timeline.assign("EJDTRCHEJNOCATXIXMKYRJZMPDGQMQABDEGGYZVZOZFJJPBKHWWXGJFAWNDVRTYGXEFLDKWZZAACSNIPNZOEOKGICIPDXLVILODLCBCSLOBRHLDWCVMVXF");
    tmp_tmp_tmp_msg_1_0_0.predicate.assign("ESGRMROZJOHDTVDYZBLCIJMEDEFMRGXLIUSOTNYGQENWBTLPUKVGEVACXZZWRVWO");
    tmp_tmp_msg_1_0.tokens.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.0855396793461);
    msg.setSource(7662U);
    msg.setSourceEntity(189U);
    msg.setDestination(53081U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("SZITACPSSFIIJLXSSYEZEUCULCLCELYFNSRJJZTZACJWUAHVNHFQOEHPBHYIZXPGTYKWZGDUBCSSYBTJTQNBRXTMGBVVAIRBNIYVZXUDEIVDABDLGUSNBDXDVRMNQKLNPCSHOEZGMKGGKUKBAIEHVTPOAWLMUVWOHWRECYZFFXARTX");
    msg.description.assign("GLBORZRWZNAOGXIJLJQIXJBYPSPSHIWCDWFQRTVOFZWKZUWKBMPSVQEJCS");
    msg.vnamespace.assign("SKVXLUTLSKJOQAKZJD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AUBGOGOZGZYSNNPFTGICPOJWTQLNAPIWENYELIEWSYUHXMBWJLRORLZIMZAWCIQDN");
    tmp_msg_0.value.assign("UVZAPEXQHYSQTDWDDLYRDGMKMTCFSUUKWSMPDVNTMVTKPYZBCQCXYHCUMQOQKRMJMEXEAOTQFENHJRWQYTGUVZICHZVDHSIVSKIFAGNOLXNNCXIDVJPUBGGPWZJWSQJZNXLTLOHMGLEBTPGKOZURNADBRHWFRSZBBBVNRRRIFWDP");
    tmp_msg_0.type = 81U;
    tmp_msg_0.access = 168U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NYMGCINJRGTDCADBIWUTOBNFMDVQJKSAZPSEYMRHEWPAUIGWFRJVEQRGZSQHOFPVBSZUMEHMLHVTCKHWHVURKRBSOHFZLDJNYHHEBAGMSMRRQAXTPQXJYZLPTPYZLQKFSTOS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("XQVTNIFJYSTPZXXMMUWRJZIGMGQQAARUISKHELAWENOGATAINGBQDNCMRXIQHHBFUPNASOXMOLVSLPGWGNUTIDVYKLKHVT");
    IMC::ScheduledGoto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.arrival_time = 0.58051850194;
    tmp_tmp_msg_1_0.lat = 0.791504220448;
    tmp_tmp_msg_1_0.lon = 0.468654214371;
    tmp_tmp_msg_1_0.z = 0.6839016628;
    tmp_tmp_msg_1_0.z_units = 241U;
    tmp_tmp_msg_1_0.travel_z = 0.992741171732;
    tmp_tmp_msg_1_0.travel_z_units = 192U;
    tmp_tmp_msg_1_0.delayed = 166U;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Event tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.topic.assign("MKELTBCXRTDIXUAVDXRQSDCPZJULSWQAGLNVRGPBUSGSQQZYSDAYKKTZMUELYEBIMVXGWBAADBHPYSAFWJAVDHPOVHLFUPHZVQIQXWCTXLAGIMINRAYWSXCZZOWJHNOWLFPPCDCYIBJPNJEVKGMBZRRQOTCREPJZVKTFMWN");
    tmp_tmp_msg_1_1.data.assign("NIHLOXWZNIZXJWZGTEUCEKKVNXOWJASRBCNEPYSIPCBCBYANDZBWOQEUCDDTSQAFIXAHLPR");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::UsblFixExtended tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.target.assign("QHSIPLMIOYMVNNQDFVTGCMLIMMTCEBXAQVVHCHOTFWYVUARWEQSHKFGSFUZRCIBWPXBRTJJZAIZHKYRAROWBMNLUFJYNSGVVPTDJWRNECNLYQQEDZJVIUXOIGILSPETODUXBPBDFATDTZABXUNNXZFDOCCCSRKJWEQCXGBDRLYKGUQULVOPHLAGKEQQJBZMOPFGYIRKOVJTBKMKYZAWESYKAEUSKPSWHF");
    tmp_tmp_msg_1_2.lat = 0.072923898186;
    tmp_tmp_msg_1_2.lon = 0.0954754678311;
    tmp_tmp_msg_1_2.z_units = 251U;
    tmp_tmp_msg_1_2.z = 0.920568639761;
    tmp_tmp_msg_1_2.accuracy = 0.0987191360325;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("MJYFLWKTIIRVZYDN");
    tmp_msg_2.dest_man.assign("XALMHEPSDBRCWSHUPFYDNACMDWLPKREWALSMJODIEKXUTVKJTXFUJCQQYSTYWJT");
    tmp_msg_2.conditions.assign("NDGDLFDOPWJNEAUMADTNTQFNGJHTOSEYZVXQDJLLIPIEOVMIAUJDPCYMWUIGRGACIEXHIIYUYGSPCZHZLOBJFLCOGEORPWFBQZKTTAMLSHVPKVQMYZYMAUDOTGKAVPBWPBOZWCGMFTJBLKSCQOMJANCLBWTIZCQYELXRYMQSKDDRZSHXDPJSFXRJK");
    IMC::IoEvent tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.type = 170U;
    tmp_tmp_msg_2_0.error.assign("GQSUXXESQLYIGOFRJSKLIMDUUDNJBYGHRPIRGNTWKGCAIJPVXAWOHZNTQNKVBOQCCCRSYFYKITWQDVABPXCKEWIMSBAGALRXCLDPNOBGFEPMTSPUOMZM");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::GroundVelocity tmp_msg_3;
    tmp_msg_3.validity = 141U;
    tmp_msg_3.x = 0.0217776771011;
    tmp_msg_3.y = 0.448324176359;
    tmp_msg_3.z = 0.104179155198;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::Current tmp_msg_4;
    tmp_msg_4.value = 0.859813337993;
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.0313690669218);
    msg.setSource(6852U);
    msg.setSourceEntity(163U);
    msg.setDestination(2091U);
    msg.setDestinationEntity(195U);
    msg.plan_id.assign("WJAZASNKAFLZUYJX");
    msg.description.assign("PYIKJBVYIVIAXAVJDFYITMCJYKJKBBCTQQEOBJWHLDZXNEKSXROISMHYNDDOGQUZKTDFACKVIEKHBFQSWDSYUDXIVRVLHGPKXVLPZQRMOVOSTEBUSLWTNJFBCJULHZQFDOMTVZETEYSHJYKXLNPMMNSUNQGPYWOGWGCGJXVMAACINHAHPPLKFAEUSBRXUC");
    msg.vnamespace.assign("UQUHUEBDYZDCASHFNSXSLGNEIGHLWARVCICFFTDBJIYTFZCBIHQDJVNIWFTYJRYNUIAVIDWEJVAZJHDTMZKFDNKBZRWGLKJFLENYXDPWHFLUSLSXVIXKVVJBXHSSTOJTLRSYPMEAKMCMJQATWCULSRQPZKWWWBHVEGMKGOZMNCROOLGUMGIGPBIAJQOMXP");
    msg.start_man_id.assign("WOWXXLFTMBLSZNMHEHCPJNSC");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QBFNKYICRWVUVOFVQLXMDLQVUNKTDKOFEZKGEHIOPRULJZYPLRYCJVNSQUENREWSSGECRBXCVFHVYCTDLOKKUNSGIAGPMNMZBRZTRCRISFQTADMJNOCEDCAFDTGNQYOWRQXOBQCODQHBUMDHBLHSVTUZDEYSFPJPJPJ");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 38115U;
    tmp_tmp_msg_0_0.lat = 0.800807456514;
    tmp_tmp_msg_0_0.lon = 0.368621499624;
    tmp_tmp_msg_0_0.z = 0.749073358651;
    tmp_tmp_msg_0_0.z_units = 5U;
    tmp_tmp_msg_0_0.pitch = 0.499649528985;
    tmp_tmp_msg_0_0.amplitude = 0.00769115245078;
    tmp_tmp_msg_0_0.duration = 24786U;
    tmp_tmp_msg_0_0.speed = 0.601459269942;
    tmp_tmp_msg_0_0.speed_units = 215U;
    tmp_tmp_msg_0_0.radius = 0.555947340502;
    tmp_tmp_msg_0_0.direction = 72U;
    tmp_tmp_msg_0_0.custom.assign("UNJCABXGNSPXUBZTEVXNJBZJMMPOHGM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PlanControlState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 39U;
    tmp_tmp_msg_0_1.plan_id.assign("XVBMSSSZJWMLAHFYWLEVUAXYGKBGJGIEFWCOPXZINRIFXDYDLCTWDIFNBTMYCMJUZUT");
    tmp_tmp_msg_0_1.plan_eta = 1138037981;
    tmp_tmp_msg_0_1.plan_progress = 0.870456753866;
    tmp_tmp_msg_0_1.man_id.assign("ZXJQEGNITVMWWTQLIQTABVRSCKLXQWSRFHALZTZAYXXPNWDXODNAZPYAQZJSRQLHWATSXILCJWRVOGISAVXUDKFKKNDAKXRTXMLHPYJEPGBRYPHYYSQCOKYUFHIJTAZXDNBWPVNESNFOGBJVMUZORLBCWOJBDCSHUJ");
    tmp_tmp_msg_0_1.man_type = 58207U;
    tmp_tmp_msg_0_1.man_eta = 1819297131;
    tmp_tmp_msg_0_1.last_outcome = 179U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("NJJPXWJEJYMFGYEXMNPGZYVVXKVWOHWOQADUVWRNXUYUYKLWKUOLWCPKBLISRXDZKEOOZSZOVCDFTOBBUDMLRENIMVSTIJGJNHWFCTSGHYPETHSKTIELQPKFQCTLJEFHFANBAHUMRTUYQYQPJNGFMRHGREXBAHUZUJCFQCZSSHFZZNTCHUDLYBLQDSAQFGDDNQEGSGVPMIWJIAKBZKIRZSAPGAVMCWYLXOPEXKBMIOATIPACRTVCRMBLDWDNOV");
    tmp_msg_1.dest_man.assign("MBMQKGAFFYAILUAFEAAIJWABIKFLFZZRBNWBLZIZDEXKOQJUIPJUJBKAYPBHGKXSWXAAUMZJSSLRDGJHQIEVSETCFMLHRULIGKLMMBXTEDYVGNIITYSHTPOCWGJGCCTZDOHRW");
    tmp_msg_1.conditions.assign("RPZDYUNNDDKLVWIEMPWEMEGVSXSLBLWUMECNVTMTJC");
    msg.transitions.push_back(tmp_msg_1);
    IMC::ReportedState tmp_msg_2;
    tmp_msg_2.lat = 0.218287464969;
    tmp_msg_2.lon = 0.970127046935;
    tmp_msg_2.depth = 0.200171852001;
    tmp_msg_2.roll = 0.968778224278;
    tmp_msg_2.pitch = 0.698911579314;
    tmp_msg_2.yaw = 0.818506640691;
    tmp_msg_2.rcp_time = 0.217041656502;
    tmp_msg_2.sid.assign("RLOORVSZAMSMFDTBKGFYGJMLNAIZQESZWVYUNGTXCBSYQPRWCAUQFFYPKBRZTDKNWFWHRQSUYTHTEVNIALWVUCULEBAJCTDLCQHOUUHVRDPXRZKKXECLOTYOCWRIVPKTUHDDOVMPZXEOMDXXABGQYYUDJMKCBRJYNVSHZFGMKZWJFXKDJVHMIXABFELWBQALJEENZNTKWUFQMBYGQSOXOSPGAOWQLECTXIGJGVNEIIHPINFPPSHLDAIRS");
    tmp_msg_2.s_type = 183U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::QueryEntityParameters tmp_msg_3;
    tmp_msg_3.name.assign("EAKDLKWBUNWCVQBMZUFOVXFILSRNWOSLQOKPJGMMOJZZVZSJHMITJCAAWURAGREDIOCSGYWYAMBHERZDELBQGGNSKVRUTCDCPBYVQHILIHNPFBYVDQFGHSWEPGPPLHVHKIQRDEYXCVUFWDMJPTTQKAQSRMQCTFZUNPRKFIMHLSNKYAXBRJFUZCBNQVJCNLXZHOXBIKJYKFLBMXOISLAPEXMSXAZ");
    tmp_msg_3.visibility.assign("AMKZNKWANUWRRBUNHOGDULUCGUIDGKFCMAFXJRLMTQQPCCNRZUWYTGTZANIVLYOBAPMFXVSQKYSL");
    tmp_msg_3.scope.assign("ENXYDGFPZXOUIMTUDEIKXQGHZSDEPDUBPFFGUOVKZWMHFZVUEVBMJURWTAPNNXOKCGNWNORXZYJSAMMHQFOXRGXJLFAGIACKHBHPHSCMIWELYETRCONXAVQMZQGMBJWCNVLUZYJTIEWDTQLRSZHWDZLKSXDQNYLBELWJPABFTMVIQRYBQTQBTACOCKLPAEJIPRAGAZKLIGSJWT");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.399462296514);
    msg.setSource(2326U);
    msg.setSourceEntity(75U);
    msg.setDestination(7980U);
    msg.setDestinationEntity(39U);
    msg.maneuver_id.assign("YSNBBGJYOORNRAPWYSFIICJEWWUKESOOPALBQDUAGTCUXNPLKSCSRBWDZLAMTPVVCXAKEFPBMXQHDJFFUVVTXEVYBGDAIVCTQONPHBFIEGGJONIANEXQWPEAGYYOFKMNNDAWGHMSSTCDIGIRHWKVLDYRUR");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.289787672316;
    tmp_msg_0.lon = 0.738908576855;
    tmp_msg_0.z = 0.620295831488;
    tmp_msg_0.z_units = 155U;
    tmp_msg_0.speed = 0.271386045998;
    tmp_msg_0.speed_units = 123U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.435505174706;
    tmp_tmp_msg_0_0.lon = 0.558034499953;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("LNSDHUUAKSMWJVZPGCUEKRBROWWHAUWLUMRHNEJEDEMV");
    msg.data.set(tmp_msg_0);
    IMC::CommSystemsQuery tmp_msg_1;
    tmp_msg_1.type = 220U;
    tmp_msg_1.comm_interface = 22994U;
    tmp_msg_1.model = 58712U;
    tmp_msg_1.list.assign("DQESBHRYLMZNJCCJSBTXGOMDQNUSOCOFOEUKMTSZAUEZHCFGECEJXDXADZRSNUTKZXBSDBKPFOVVHKIVWYKTMRIGJMNBRLWATTFLGJXEYYJVUXTEHHYGKVUWBQVWCHPCOMFXIDLZJQHYSQBZXYMOUOCMTAEPAQIGLXGARQBWAPFGDNJZPFLNAOIEGRNIWMBJELWRQSIHSKVLLOYMPVTPUVDGIADVBQKXNFRWZIPQLWNIWF");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PopEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("VWSYJZEPCZDOJNWHEFSBLWCGYZEHYYIKVGZGWUZIVNKSMAJBORHLZQFOKTIVBAIPBSMJLWNURJCL");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.435734843094);
    msg.setSource(44399U);
    msg.setSourceEntity(131U);
    msg.setDestination(7066U);
    msg.setDestinationEntity(133U);
    msg.maneuver_id.assign("GJIGUOAMLVFVZPZOGOGEYFSMLUMAVVBDSPSKXUPEJGDVKHQHZXLIDRCSBHUGHAYLOCKOTBLVFKFWTEFY");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 5368U;
    tmp_msg_0.lat = 0.205703247189;
    tmp_msg_0.lon = 0.624954397596;
    tmp_msg_0.z = 0.433079212502;
    tmp_msg_0.z_units = 235U;
    tmp_msg_0.speed = 0.85008216932;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.bearing = 0.821652538503;
    tmp_msg_0.width = 0.82040090178;
    tmp_msg_0.direction = 170U;
    tmp_msg_0.custom.assign("SEVWQMNETENSBPBMWVORSZOGDVMEILFHXFYPKEWKXAMTAVALQNQOZGUMYNNHZALICLEVMQRTQBMGOKSCDSBQUPKRRVDHLIJTWRYDIBFXQSFJUIMSQPDIIFGNMTDUAXCPCUOZGPWAEZFTAHRIDQNKLTJYUJYNOEJJHOKLOTZYCWIBRPCUCXCSNRHWCUXXVXOJZGFKOZFFXWKKDHZBWEQGBXJZUHRSPCJYGVBYGALPYHSPEDTYGLUBHAAVVFIMLR");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.0983092569157);
    msg.setSource(31296U);
    msg.setSourceEntity(50U);
    msg.setDestination(64639U);
    msg.setDestinationEntity(101U);
    msg.maneuver_id.assign("ELZUASXOMYROAVUFJFZMADLDBPGLEOWLDYVTLHXRIQQMLJWDMHCIXOWHOENWKPGZPQXBTARDONHZLDMRBGPZGHTEIISIMYBHUPZUOPYJDSSUVLVAWKNAVVJGBMGRKDFXWMFGJQLLXDNAVTZNWDKYBZBVQINQ");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 30762U;
    tmp_msg_0.lat = 0.986036151096;
    tmp_msg_0.lon = 0.741651791486;
    tmp_msg_0.z = 0.344474644191;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.speed = 0.385329289466;
    tmp_msg_0.speed_units = 203U;
    tmp_msg_0.custom.assign("HVTPALRFVRRESHSOACQBINMYRKOFUAEKPEERKUOUZBVPQBFWKFGNBYILGDOQQMJSHZLFETRDDZNWKZUYVJPETLASCCRLGQYPYASITAJGIRIDGNBXTMDGLTMPPFUOVIZOFCBLWLXWVEWHCQRBWFMXTNCXCXLVSKEPDUSWZUSGGMWUBTJDNRHIHLAPWXBCJYJYKNYXFOSGUKQJYOQKAXDBVZENJZFDOXKM");
    msg.data.set(tmp_msg_0);
    IMC::EulerAngles tmp_msg_1;
    tmp_msg_1.time = 0.796305664852;
    tmp_msg_1.phi = 0.316753622526;
    tmp_msg_1.theta = 0.8310496796;
    tmp_msg_1.psi = 0.159780784515;
    tmp_msg_1.psi_magnetic = 0.399766296516;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.345922121747);
    msg.setSource(28124U);
    msg.setSourceEntity(197U);
    msg.setDestination(22081U);
    msg.setDestinationEntity(1U);
    msg.source_man.assign("VZNSPDTWUFKPAMDZGULKJSLQRBKPOHHXRCUPTHGHUWUZMXJJQZGLBNTNHPHGKBLKMTWWUFLVOCPSYQPMRMHTNIJY");
    msg.dest_man.assign("HZCCPDBJSSYBKTUZAXXFOPDBCNFQQSHNIOZHLQWVNLXVAOEKYFNEHHJHVMLCGIMCAXEYUAKJFYHPFBGWFTMRDSPZBEOEKLXRGLJBHXERMHDYQLPQNDSUNWMFVYKWIZRTIVQWOEIJQNPEMCFRCAVTVPSUAAZDUPUSGIJSIKDCQDWUOTXUPULWSYGTNRGWOHVALZYJXCISAXORVQOWBCNVQLOBKDDGGJGXGNTMUKTYB");
    msg.conditions.assign("BIDTZNMLHRPGFDWSZHFAVVJZOKCNTESRMORDDGGHQXWEBOSKUCIWDMNQRLVKAXTEFASUUNTMKVSDQRZFLPPJXKVHECJOJIUWETEBUNGQEJOFLHMYGWFQGPEYKAQMNUICPXRYBBGYVVCUKTALWKMTZAHBZYNOCQPXCLJJKAWFHHDSSWLQMYHOTQOGCOJJBBAWLSYRODSIGZYZEV");
    IMC::CommSystemsQuery tmp_msg_0;
    tmp_msg_0.type = 169U;
    tmp_msg_0.comm_interface = 4691U;
    tmp_msg_0.model = 41112U;
    tmp_msg_0.list.assign("ANYFCJXJOKFCIURCLDORWAPSZIJNILKAKMDMIOZLUBEAGPOWOWCCLBBGHMRUZKNZPDSQMGQZXICKHATSDMRNMLOCHEBOYLSLFEJ");
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.106639088682);
    msg.setSource(27317U);
    msg.setSourceEntity(166U);
    msg.setDestination(20583U);
    msg.setDestinationEntity(206U);
    msg.source_man.assign("UVNOCTEAWEZNUIATDEBGIFDFPCZQFHAZAVNWDOWXEMAEGJIRUEQMMNWBSTNXPLGFCJFYBVYGCNQZOMKEKLPVPIVJNKR");
    msg.dest_man.assign("AUXLJBLPRMRCGJKLUMMJRUHGCVBZYZYHSFTVNTEQEJIRTROVSLEADLIYHDXVJRTXHNWMMZECLTUPWXXPVWMYDZBROXLRVHFTFBRTISLLHIXIPTLVPYFOPEWUEPEAAZANDSIIZSMJYTQDFNBZQAACMNKFYUDGPAFSGGN");
    msg.conditions.assign("VEOPRIFDPMTIJIADTUEQYNJCYMIGVREAMIAJOJYLBZHEIABXKKKUZALHMLDRSFWWKNABUFKSFCQZVEGYFINCSOEGFDHILRTZHVCPHOKSJLWVXTMWTECZGSTMDRSYZPPFCTDPTVRXWUIHIJLEMQNNJGSOUBXYQZHDUGOLBHXGZYXEPAQTHURPVONCRJSADBBDQRKAJUDXPAPOQXFMWXTFVBSNBZUWWRMYBLSNQXFU");
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.674073391578;
    tmp_msg_0.base_lon = 0.592553656715;
    tmp_msg_0.base_time = 0.790410066898;
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
    msg.setTimeStamp(0.328518943765);
    msg.setSource(53529U);
    msg.setSourceEntity(51U);
    msg.setDestination(49630U);
    msg.setDestinationEntity(142U);
    msg.source_man.assign("AXFOHRFVGIZJOUYMVZNMIQLGYNMBYNQEDLRNNYZDEMCJUYPEGOUPCXXFSJFZCJEPAZIBSVQQINCWCPUWAHPDGRUBKKDHSUWOEYZUQRCMLMMKGCROJHHKCWLTCZLZQVAIBFETXVQHLHAXPNGRFVICBUHKLSSKDQLPYJTJFJIZJEUHTOWAAEUWKRVDLSOWJKXTVYBZYVRQABEMKGKGIDFIOPXIVTWS");
    msg.dest_man.assign("JTJLAWAREOSGASVPGRTGOOAVHRIHPVEQKWOGFYHTYPHJJNAXXBLVFAYNWFNCMDTJGTTJVWOAZCBVNIWHEBFMENYKDCEWQVHZRRDXTLJPZPKPYJKQIMMMGLBGKZSUYDLBFOQRELCUDEEXPYBWCZSATPKGRHYIWXOYVKASVXDIZOXMFWFZMXQCCSUTUFUTGSZSLPBSJDQIEYWBBVFNIKIIMQZQEUDIUO");
    msg.conditions.assign("UGNKRFXVDMGCLTVBCDEKXVWJNSBXCATVEWBPCYOVPMXLYISHXWTTLAMVBPAHKVGD");

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
    msg.setTimeStamp(0.440885634985);
    msg.setSource(46484U);
    msg.setSourceEntity(96U);
    msg.setDestination(4057U);
    msg.setDestinationEntity(111U);
    msg.command = 145U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MFTMNGISPEZXFFEWUUIVZANXXPPXMZXVUWBPOKYQWQPTWGOBHCAOMBJUCUGSBMIYZ");
    tmp_msg_0.description.assign("NGCUDVERQFYQRAAAEPNTFUKCNWQFOJJDWYBLPTZRJIKSZVKVBQIWYCLLXOMLFJPOESGKXPN");
    tmp_msg_0.vnamespace.assign("NSSMBPCUZYTCADXFWWOJTPUPKQILFYENFDZMRAG");
    tmp_msg_0.start_man_id.assign("YPOZEZALYALKRQSTGODRJMOBDMPKPCTBSELWZONHZCMTUCXCWSCJPVILMLZYEVEGOBIRZPIDKXPIBFZNCLLSSTOFVBFSLECUDVARIYODJKXTIICQGXUEFYDKQQTQVFYGMFHKVVWFUUIMGFHMPNZUHDZBFGWSSRDARYOJHEQABQKRRT");
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
    msg.setTimeStamp(0.229617740637);
    msg.setSource(59511U);
    msg.setSourceEntity(69U);
    msg.setDestination(51573U);
    msg.setDestinationEntity(63U);
    msg.command = 164U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AQEFWIUIJNYLWLQCNXYJRFNKCFWTZLUPLHBMSJPJANUJGOSKQQGBLPOLEXS");
    tmp_msg_0.description.assign("YHSZNKPFJMRKWBQOEDVBHQLDIELIPHPUWRQKNANXUPOPCZCUOLYKVEGXXMIYTCFRNPRGIGURVIHSRFIKYNSWQTIHSZMFJAYGEXNGUJDIGXTFCCVGFJTDECFKKWMPQMLOZCBHJLYNOTLKJQFEDOWWMWRQYBAWMAMWGBKTJRFBJALCAVFZVLUTXBNTAHYEIPYTMBZOQMREDLHJJLGXXOYZHAVAPKOVZGTXWZUVODSH");
    tmp_msg_0.vnamespace.assign("AIWAQJBKIFXGFGRLLECIPPZJMBOTBHVNEJNEPOIAWCLNMXGCOZYQSNHYXVDHGXGQKXNUMKWFWJAJAMVCZFUDYBZAKBQSSJUETTDKAVXUOQDQCALIKHJNDJQMTAMEDUMRYKFTCMURLCYCKEFZIWINBKHDGHFHWSLVZPVWTYSQSRLRLFSTMCOLSGFFRPRDJIHRVZXEKNXWWGTBMPQOHWZYRPAOYCJEGSZ");
    tmp_msg_0.start_man_id.assign("NVTDUZNZRQNDSZJKXPKRAJAXQMEIKJOGXCZRGXIYYQPMQKWMOGSHXIIWELIYZPKWJPCBPTKLVJXFBQMRBCFMOVAWHKGMZBTKMOFGIOYOQLZERYUODPMPAUOIYFQHRCWAIR");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IHDHNFKYWADIMKLASXMOZZOILBBGCBGDOFVEXPVWHNKIWRNZBAM");
    IMC::FollowPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("LTIMKGTMHRRMRGBQHCDWURJNROMYZUGXEOBJXTVONTDSCEUMBNIXAZFBIAZEWEOWLSLWNPACKORQLLHITLYFHUHYTSDPGVLWJGPUHHQOQHGVFNXQKR");
    tmp_tmp_tmp_msg_0_0_0.max_speed = 0.766245748887;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 127U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.828155714425;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.800997477013;
    tmp_tmp_tmp_msg_0_0_0.z = 0.84881902174;
    tmp_tmp_tmp_msg_0_0_0.z_units = 132U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("VJVIQCWNEJMNBEJLRZBHTQGVFWKCAPDCXSQQFIZIBCANEMSWCXRFJOHWFTHWJTYAKVCYOYDRBUXJTKHIXDQHTHNFBKDOXLLKXSARDSUKVDGYUAFYPGJAWKOVVPZBBHCRPMCOPBDNGWYSFZOVVNEFOHLTQEADBMAZFOEIUGZQNYNJRGMLZPXGEXFK");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.vid = 61093U;
    tmp_tmp_tmp_msg_0_0_1.off_x = 0.699069547833;
    tmp_tmp_tmp_msg_0_0_1.off_y = 0.600176233523;
    tmp_tmp_tmp_msg_0_0_1.off_z = 0.979557913824;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PH tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.value = 0.663072536718;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JTJYJEIDPCMZLJXEXALKEMVQBEMHRPCOQGKWFDPNGDWZXULHNWJMGATRUOYFXKPCSFCIGVHLAQZWOYZHXRKPVFUMWCPILPAHTVSHHJPCSOCURZRAJTBBUXLKQIEZWARIJNFDANMYVYPPBKKYKVMMHBSALBCETEQNMDGBNAQFQYIUGINMYNTOFRQGOVBOQDODVSGXXZIUYSLSKNSZIEHJUSYDTUZFAWRGLTJUWDBBQWTNEXE");
    tmp_tmp_msg_0_1.dest_man.assign("IFIGAMHUXQYLOHDGIAJGFVEACGSPNDATHOPLTBDGIUBQVJPEUJLHJDYEAACVDRQZIOLFKLNTQSWESCLNPLKNQHNFXKJQBCKBFDUETJXMVUKYKTHIQXXFMCWPMJRSJMNXFACZCDDQZRERRNBSQEFGUMPCQUJFGAYVMGZLOGBYWERSMHUVIKSOTHRVUWZHSYORFYZXBXMKWKAT");
    tmp_tmp_msg_0_1.conditions.assign("QGBXHCOVYLRVCIMXZNDLOICMEPJKIDGJNOTLGYAQVIRLHKOXFSDKRASPORGZDCAHYFJUNQALFLCDWUFRKQICENZBBVVPXVCNUZOMEBKPKEANAQBMGIXXGULSSHXNSPMUHKETWQMSYUDOUFBHDTNYWWYTUAEZAEHJFBMDSJCTMGMWTXACLLMBFXRPVKIQEUFLINNDXEZTEZYYQSY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Phycoerythrin tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.184438154154;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::LblRangeAcceptance tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 84U;
    tmp_tmp_msg_0_3.range = 0.918358225238;
    tmp_tmp_msg_0_3.acceptance = 204U;
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
    msg.setTimeStamp(0.375595366018);
    msg.setSource(7749U);
    msg.setSourceEntity(50U);
    msg.setDestination(32004U);
    msg.setDestinationEntity(106U);
    msg.command = 166U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("REJZQUIVPPARSLNEKATVQQIHGFQLEINLXBYILFMCJIDHRTQSXZWSXEUPQKTEZJAECYDCFUUWJTCFHCBJGGBXPHONMKULNBMQPGMVGUSTDYLUELDWXLNKRIWQWOZRLMGMYZTPKZBTVOMZYPAVYXSABIYUQDKFHGKDOXBANAPHRMRXHVDCGPDHQFAWMOYNVUXGZSOFDWOAYNRBNKFJOYIESRTNV");
    tmp_msg_0.description.assign("QBVDKPISJVLWVE");
    tmp_msg_0.vnamespace.assign("MPNMRVCSAVSAOMGAMKNHZNUWBNSHSTEXOEMAQRBPCQRODQUYRLVMCTFVWKTBGGOAVZTOTJTVGDIPREGGQKQSJHDLHOCYXICY");
    tmp_msg_0.start_man_id.assign("ENYLRBAXLXHWZT");
    IMC::PowerOperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 101U;
    tmp_tmp_msg_0_0.time_remain = 0.901639615243;
    tmp_tmp_msg_0_0.sched_time = 0.221430005683;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::SoiPlan tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id = 142U;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.366441783569;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.702738991307;
    tmp_tmp_tmp_msg_0_1_0.eta = 3711567673U;
    tmp_tmp_tmp_msg_0_1_0.duration = 41841U;
    tmp_tmp_msg_0_1.waypoints.push_back(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.948743557607);
    msg.setSource(45148U);
    msg.setSourceEntity(28U);
    msg.setDestination(5630U);
    msg.setDestinationEntity(0U);
    msg.state = 10U;
    msg.plan_id.assign("MKZEYCEZHAVINDXGBVHUGQVNLOVZDBXDULACWUHKCBGXJEFUFKYRHVCBAJRWTXRYCNOXXCAIMXHZLSBMG");
    msg.comm_level = 151U;

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
    msg.setTimeStamp(0.121157246788);
    msg.setSource(34650U);
    msg.setSourceEntity(123U);
    msg.setDestination(21299U);
    msg.setDestinationEntity(235U);
    msg.state = 249U;
    msg.plan_id.assign("EDDFKYMIKBEXQGXWQZTKFRWLWWXHFBWTMLEGESLZJKDOASETTZVDRSQQBPIHSPDZQSAKDGKCLXOUCYJUAAGPFJONAQVBRUAWTLDOBWVWHZIQGFUPAEXKIANBQYBNPRDZMHGRMUUTNVMNJBHRMHBOXOCTVCFSNFZELUDYWIYIDPXMXURINPNVVTIYVZZOSQKJTYIJKLWJHYACYPGQCCSNOKXRHU");
    msg.comm_level = 251U;

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
    msg.setTimeStamp(0.895297847717);
    msg.setSource(15068U);
    msg.setSourceEntity(201U);
    msg.setDestination(3996U);
    msg.setDestinationEntity(25U);
    msg.state = 86U;
    msg.plan_id.assign("BIUXVAMOGHSYGWSRNJYRYYKCSASPHGDNJFQKQLKPIHXGICMJDTQPIDFVTRLURAQMKVMZEZFLLASIJRPEVDGBHUYIIKGSLUIWENAHEMUNEVPWKHTJTQIXXUSYZURKCPCBBUQHRILMJECFOCZQEXDBFJQWYEENTOHOOMJBRTDFPSBNFCOCZQYUZMWATGLPAKZODZDATPQAVNLMKXV");
    msg.comm_level = 127U;

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
    msg.setTimeStamp(0.56980888552);
    msg.setSource(19644U);
    msg.setSourceEntity(252U);
    msg.setDestination(23525U);
    msg.setDestinationEntity(72U);
    msg.type = 61U;
    msg.op = 193U;
    msg.request_id = 49986U;
    msg.plan_id.assign("AOTUHQVHLBBOUCZBOKXPFLCTIOLWRZXWNOJHCHXMNQVVKLKBRZDZSGZVBWSMBKDMNFIFBHOIYTQXYJZXEFFYFUJZVHHDATIOAAEJFGDCEMEEHAWKJINDCUCALXCQPYGERTDUWVUJLAHYELOGLSWJVVEURCDIXRTNINVPDOKEQARQKPIGTSGBAQYMUSRMUFCRWZS");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 183U;
    tmp_msg_0.entities.assign("SFRVVWDZUDYZMLDZYZPLBDTHHPFZUDGEHYECXURQEIOKLDINENHMGCEURK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XCXZSANYMOEUGGLKKBOUBPJRZZTVDWOYJQCSUFQPCTDWPSLESKVPCYTRJOETMJNKDNGIAWAWBWQFTZGDOBNTESPUCFZCNPXAIFRRERIEIYJGTOIANAKJIYLVLFMMHQRGZIOBYRSURFKQGQDHRWMSXWMQWPXFKLTNVDXVSVIKDNRGKAXYJJLECBXQDHVEQETPHHHDKBMLZCZNHOMPYMLHHOCBISNXTBXUUAFYQCOEAJBV");

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
    msg.setTimeStamp(0.0699282371779);
    msg.setSource(8470U);
    msg.setSourceEntity(233U);
    msg.setDestination(35729U);
    msg.setDestinationEntity(247U);
    msg.type = 18U;
    msg.op = 25U;
    msg.request_id = 10104U;
    msg.plan_id.assign("JTHSQEGZRZNWITGVVCIFUCCSMLJDANZBCMKYAWHHEQCKMKDNTUANNPOBIODNK");
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.1167490481;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BQIHBLKGWABEBDTZBPPFGSRAMCKVCAYDMKFEKMJJVHFBOHRIJCQPVEKSPJPUUCTNRFXPPPEJALKZUTACUYRMZVASWUURTFLRGGNDYAGBULIDNSDQYMYSYDCKWUIVGXHBOZRHEIN");

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
    msg.setTimeStamp(0.979595749152);
    msg.setSource(58274U);
    msg.setSourceEntity(228U);
    msg.setDestination(47295U);
    msg.setDestinationEntity(111U);
    msg.type = 224U;
    msg.op = 184U;
    msg.request_id = 47456U;
    msg.plan_id.assign("QGCLBSNRZLRVWYSHAITCEQULBRNORNFMHDCNBEWMPYJZQXSUYHKXPGMHLJCADHEXUPPKSDMZDZGVLVTVTTSIBZFFKETNDYBZCFFSGAXVIEANOBXHRSTQMKIXVZUXSXQINJQYAKKIKICEMRKRQHHQOOLRYDDMVBDUITOFWOJXTQVCTWJFGNVPONLUPEPASDFIEBBMAXLLBWOYCHKWJHFDGGOGPI");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 60519U;
    tmp_msg_0.lat = 0.834274149759;
    tmp_msg_0.lon = 0.678629628157;
    tmp_msg_0.z = 0.278790846958;
    tmp_msg_0.z_units = 221U;
    tmp_msg_0.duration = 13367U;
    tmp_msg_0.speed = 0.911751414904;
    tmp_msg_0.speed_units = 42U;
    tmp_msg_0.type = 16U;
    tmp_msg_0.radius = 0.903030120904;
    tmp_msg_0.length = 0.585032283918;
    tmp_msg_0.bearing = 0.0735337407616;
    tmp_msg_0.direction = 130U;
    tmp_msg_0.custom.assign("MAOWPIDLVMJTGHZQZTKZWZUOVINDSCWACZLOJRVMHFUXSDMFSTGFEOKHPWXMTHHKIEHSMVYOOKBVUZEOIERDNUAARMLUWHOYPKSGPKRRSXQHYOQGIJLYVAHNBABXEXMRECYNATJBRVFLBDCSUYNTUILGDCPRMCNVUIWQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QDCCKQGMJDBRHRHYSSEKZUHBWQRYGWCVIOPIGTPADHNRLKWCLZ");

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
    msg.setTimeStamp(0.462877395208);
    msg.setSource(20839U);
    msg.setSourceEntity(144U);
    msg.setDestination(54404U);
    msg.setDestinationEntity(142U);
    msg.plan_count = 29427U;
    msg.plan_size = 64460955U;
    msg.change_time = 0.588375952596;
    msg.change_sid = 35413U;
    msg.change_sname.assign("YJZHKLNJCGKEVHZHEYFBTJGDLHOGUROGFYKXWXWMRHIAXLMRNUZOGOSWSWKFUTIRIHPALWODAYDSFISTJOLMYIRSFDOUEDDKTCLFSGXGAZEKYMQOJDXHWUBMURHTNVPYAMMXXIQFQBQVAHCPBUAVLPTBQLREVFINRIVAWVWJCQTVECZYJUOWEREDZRNBNPBNPTFTUQCSXJUSGKSZPHOBZPVLXWSNCDIZCEKQYDPINLBN");
    const char tmp_msg_0[] = {-55, -55, -80, -63, -93, 110, -2, 44, -52, 126, 76, 91, -116, -96, -51, -125, 86, 63, 23, 0, -60, 36, 19, 99, -17, -28, -14, -24, -56, -27, 21, -7, 28, -68, 61, 26, 8, 50, -26, 3, -65};
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
    msg.setTimeStamp(0.208320982399);
    msg.setSource(57375U);
    msg.setSourceEntity(6U);
    msg.setDestination(64698U);
    msg.setDestinationEntity(91U);
    msg.plan_count = 53405U;
    msg.plan_size = 555323729U;
    msg.change_time = 0.0382469801742;
    msg.change_sid = 18922U;
    msg.change_sname.assign("TGGSFAXWIZVJTQMLFUVDMITCBPRSNIVQJSVWHZIJCZMZCXSYQ");
    const char tmp_msg_0[] = {60, 97, 107, -71, 31, -114, 77, -97, 108, -8, -60, -82, -61, 65, -42, -60, 37, 111, 35, -85, -59, 84, 14, 5, 79, -82, -113, -68, 25, -24, 48, -122, -102, -69, -90, -85, 27, -124, 95, -80, -102, -100, 62, -46, -58, -115, -69, 27, -16, 93, -7, -95, -121, -100, 61, 114, 88, -27, -100, -91, 49, 100, -81, 54, -73, 82, -62, -100, -97, 44, 44, 92, -76, 19, -59, -9, 52, 87, -91, -119, 84, 8, 115, -17, -74, -74};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NZLOMFCRBQMZOOAPYXVMUYRJGJCKVDXITKVBOPSEGDVWSHHUFXJONFADLEHKQLJPYTRTJSTKUAOFDGPUQXIYEYNTWFUBWNFWPBWQLYHHNVGXXCUWBBMWOSYREQZFRGSKQZPHWDSBIXZLJFHJKQQXEAKGCZIWTDIHEOZRGIBSNLHCEYVCMTKAEFKLQHXTVCWYSZNKSPDYASAECIOATIUCJVMPANXALLVGNLIFZMMJTGGVMRRRD");
    tmp_msg_1.plan_size = 40294U;
    tmp_msg_1.change_time = 0.83933215498;
    tmp_msg_1.change_sid = 19756U;
    tmp_msg_1.change_sname.assign("JDABHILVQORXYXSDULOSHCIQOYWNYRLTIQJKMMOTLUCPSIJVLAEHSQNKDXPUZFXZZDAXMGDTZNQZEOVNQNPMKYPVWNUEPEMIZLWCJUSQGPSTFHXWJRGRTAYBAEXTDPTYCCWGEUMEAYNFORJBGXGFMTSIBUCLHBQFXWOLOKBVHFQUIWVLAMAFUHFKMLSGHAKGBEJPYJRKCENQIZBPVJTR");
    const char tmp_tmp_msg_1_0[] = {-9, 116, -119, 70, -26, -90, -108, -69, 95, 60, 8, 2, -41, -111, 37, 103, -77, 9, -80, 34, 23, 57, -21, -54, -85, 126, 94, -37, 24, 73, -125, -68, -61, 18, 99, -48, -62, 24, -127, -110, -24, -25, -49, 118, -5, 36, -62, -93, 15, -94, 35, -1, 123, 7, 2, -24, 19, -49, -21, 45, -60, 11, 76, -9, -69, 94, -76, 123, 9, 24, 94, -18, 27, 31, -32, -82, 87, -50, 124, -54, -102, -93, 36, -10, -109, 69, -29, 69, 81, -100, -32, 74, -64, -103, -90, -31, 40, -101, -52, -98, 12, -37, -30, -121, -16, -42, 0, 12, -47, 79, -9, -56, 45, 49, 79, 26, -16, 39, -122, 0, 117, -83, -98, -67, -125, 120, 106, 97, -85, 90, -116, 49, -125, 42, 51, 107, -106, 120, -34, -38, 51, -9, -117, 44, -111, -22, 78, -38, 37, -61, -123, 67, 65, -91, 122, 78, -9, 81, -127, -111, -86, -36, 46, -26, 46, 86, 12, 77, 93, 81, -27, 66};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.721697158761);
    msg.setSource(28236U);
    msg.setSourceEntity(58U);
    msg.setDestination(240U);
    msg.setDestinationEntity(132U);
    msg.plan_count = 34302U;
    msg.plan_size = 97600049U;
    msg.change_time = 0.804076268295;
    msg.change_sid = 41204U;
    msg.change_sname.assign("ALVGSQQAXEOHYFPGLGRPTTOJQWXWPBCCWSIJDUCAEFDPLRJMKBYFVSCYNOEZSEICFCFRKXLVWZGNJKJQDWYQTHVFXFBUJWPVOYKKKQGCAHZPSZOWROHEHXMRXIVEAALISTHFTKVWHATQPKVLPYCNRRUUZNMOGEPNUYKFWONBYAMXPIERBZDJHVULBBIMLDNUUNGQZDMYJLNCDHSFUNTIIRTDZWIASMHBXDMSXTYSVRZDJCGMJXEABQMELTI");
    const char tmp_msg_0[] = {-106, -76, 56, -89, -95, 96, -108, 122, -46, -68, 109, -24, 31, -53, -11, -72, -128, -56, -124, -35, 38, 52, 91, -115, -11, -70, 75, -48, -104, 41, -13, -106, -8, -56, 30, -89, 124, 65, -22, 50, -1, 112, 22, -22, -25, -118, 36, 31, 64, 37, 9, 111, -61, -31, 97, -9, -120, 120, -38, 84, -68, 68, -5, -9, -76, -83, -69, 15, 105, -39, -56, 93, -47, -95, 33, 26, 58, 0, 20, -33, 118, 118, -88, -119, 40, -78, -20, -98, -92, 59, 51, 63, -41, -115, -42, 43, 96, 2, -48, -55, 37};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NIJMGXUUNZEXPBGRVSHKVXWAQODNIJVWKNAPEVSUYSPHLBPNKRFRUGPYDFBZXWTYHHYWJNAFVWYCTYOBJLNSEIZDXGQSAQMFNLCHTJDITCGJRKMFCZOSAPXPYRLFGEMGHTXEMLZTIGMDCWKEHAOJAHWQQCWFXVZMZNBDQOPFANYTOCALKKSMDTSUURUQVCCDHLKBRFREIPQVSEPBKTJOZJKQFSXDIRIAGMJIROLOHBGVYLLDYB");
    tmp_msg_1.plan_size = 47299U;
    tmp_msg_1.change_time = 0.841761428705;
    tmp_msg_1.change_sid = 45080U;
    tmp_msg_1.change_sname.assign("NODZCNTTOJMPLFYJHBXFWSJPFOKEZOQRXYGBRFBIPVKLDIHNZXCUVWIPXLSGEDYLETRGWOJCCAUYATITHQDENNKSELELUEFWXJHMCWRVYWNYZVQUMPNJMBKJAEDXCPCRAMKH");
    const char tmp_tmp_msg_1_0[] = {96, 49, -83, -66, -82, 3, 124, -6, 12, -51, -5, 114, -48, -71, 59, 103, 7, 86, -21, 101, 40, 122, 98, 117, 73, 103, 54, -13, 69, -112, 81, 3, 30, -128, -29, 123, -101, -18, -81, -124, 14, 58, 19, -41, -52, 62, -9, -115, -80, 41, -91, -12, 122, 51, 111, -26, 29, 11, 80, 28, -80, 26, 95, 21, -66, 62, -34, -56, 35, 43, 50, 117, 31, 91, 11, -128, -128, -62, -34, 92, 6, -2, -41, -59, -78, -4, -38, 99, -54, 82, -94, -5, -107, -70, -35, 102, 72, -10, -24, -52, 122, 82, -16, 65, -85, -19, 97, 92, -69, 19, 90, 80, 120, 99, 41, -73, 114, 107, -44, 31, 4, 52, 81, 8, 3, 85, 18, 115, 102, -9, -88, -37, -43, 109, 41, 67, -54, -88, 32, 121, -34, 80, -49, 41, 37, -48, 86, -1, -52, -11, 121, -59, -63, -12, 84, 31, -94, 84, -119, -45, -27, 94, 33, 91, 36, 33, -34, 67, 17, 126, -48, -81, 9, 77, 122, 68, -14, 109, -89, 92, 107, 22, 69, 72, 70, -22, -35, -74, 48, -75, 118, -121, 3, -78, 92, -119, -116, -1, 4, 116, -61, -115, -104, 37, 4, -96, 61, 27, -127, 68, -60, 113, 19, 77, 118, 62, -101, -46, -118, -55, 98, 31, 60, 106, -118, -23, -5, 26, 8, 91, -91, -121, 18, -97, 106, 39, -8, -118, 35, -82, 120, 92};
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
    msg.setTimeStamp(0.270885379746);
    msg.setSource(31929U);
    msg.setSourceEntity(230U);
    msg.setDestination(22392U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("QOJXPLHDJHWJARBWLZKMJMLZWQRHRNDCTAEBZDPENRBNYYOJHTE");
    msg.plan_size = 25395U;
    msg.change_time = 0.338936487749;
    msg.change_sid = 9845U;
    msg.change_sname.assign("IKAAFREMSXERJPRPPDCNACNMSYKEKZDKTEYAPOCLNBWAZDJFNBMLBAVCDISDHGKKRLYUGQBXFVLNUTGICUXXQMQTMEFQNGLHBJMIJIXMUPVCAWZXJNCWRVVDATVDLBNGFGJCAJYKONWZWEXGUISKOYYUMOHUOZVQOUCLIASFTMTZREEISHZKITGWOOJRPSXQMBJVQDRRHYFUQWEGOHFEDCHPXNHPLUSDQYTBZPYSYZHXIVOSWWLVBBHTT");
    const char tmp_msg_0[] = {50, 76, 94, -77, 36, 118, -71, -120, -84, 103, 126, 83, -66, 10, -29, 100, -116, 50, 104, 118, -30, -93, -102, 124, -86, -31, -6, -61, 115, -21, 108, -109, -112, 6, 35, -7, -110, 102, -66, 16, -82, -54, -63, 0, 19, -17, 50, -52, 20, -43, -66, -89, -116, 120, 48, 89, 50, 16, 16, 72, -122, 78, -25, -86, 98, 120, -98, -106, -41, 43, 54, 8, 25, 94, -28, -60, -118, 87, -45, -7, -33, 78, -48, -73, -87, 103, 7, -117, -24, 67, -96, -34, 121, 114, 31, -18, -93, -75, 3, -123, -42, 9, 113, -105, -67, -125, 52, 8, 70, 82, 87, -16, 40, -22, -76, 78};
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
    msg.setTimeStamp(0.016538125);
    msg.setSource(5681U);
    msg.setSourceEntity(197U);
    msg.setDestination(60716U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("RVXAHHEKGJNPYBSUGMMQFAMKLSNGODCORLULDZFXFTTOKUPTINIXXFEVLTIVYQCRSENVVHZOVTYWRHDNALCTNPOMAWMVWBZYTIGOCGKBQXRUKTSYOUIDWYSHHJZAJKZKGMDISBFNEZVEFMYZRZMCPWBGCMPCJESJFPUDNJLALOAEJQPNHR");
    msg.plan_size = 10847U;
    msg.change_time = 0.267412891744;
    msg.change_sid = 13046U;
    msg.change_sname.assign("ARYIQBMYVKQJNMHKSJTCHHXMZKIKREXKEKAUWLPEDLUCISLIAFHHHECLDDWZGBOQRVCMHJQFEIJWKAYEMOBFOLGDPGDOYWUUPHWTXIRPXTTJONQZRKNFVRGNEPURVBSFMSZLEUCMRHQASGJQOOMVAXZMJD");
    const char tmp_msg_0[] = {-104, -117, 3, -106, -6, -13, 49, -60, 124, 53, 114, 45, -122, 69, -122, 40, -99, 94, 47, -32, 54, 111, -86, 30, 39, -36, 4};
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
    msg.setTimeStamp(0.39505578467);
    msg.setSource(26473U);
    msg.setSourceEntity(136U);
    msg.setDestination(37432U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("RLATICDAUDGEQLAANQIODXYMDBFWYJWDKXKRMYBRXZRSYIMWXBDBBRSEJMNASWF");
    msg.plan_size = 60576U;
    msg.change_time = 0.574628148964;
    msg.change_sid = 54656U;
    msg.change_sname.assign("DCXFDUQDXZTAAMVIDONNCWLMIJSKIMGFQTVEXOMNWXJTSOJOGPUKJFRZSMHYLMAYFHWHUJGJMTGZTILLZOKQANHRVPYEEHBTHVSPFAXILEVDBISJWZWEXTLAUQFQUARJCJIXSFLMWZWHPOWRPCKU");
    const char tmp_msg_0[] = {82, 119, -12, -100, -124, -58, -58, 45, -104, 119, -68, -45, -58, 104, -96, -60, 5, 65, -12, -88, -63, -20, 111, -124, -16, 75, 55, 55, -56, -75, -67, -120, 62, 64, -127, -124, -21, 41, 16, 92, -46, 99, -83, 23, -41, 34, 76, 1, -41, 8, 111, 70, 82, 3, -111, 12, 97, -4, -64, 36, 106, 18, -50, 118, -102, -51, 38, -5, -44, 83, 49, 45, -38, -44, 71, -34, 59, -104, -11, 20, -74, -62, -3, 69, 123, 63, 43, -67, 16, -15, 21, -2, -80, 56, 70, -13, 28, 42, 32, -1, 98, -118, 38, -8};
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
    msg.setTimeStamp(0.958074030478);
    msg.setSource(48197U);
    msg.setSourceEntity(38U);
    msg.setDestination(32980U);
    msg.setDestinationEntity(150U);
    msg.type = 185U;
    msg.op = 220U;
    msg.request_id = 23973U;
    msg.plan_id.assign("FXDAGMFQTJFNLRCOXPQVPGBGTBJLMXMEKPNUNSDYMJXXDBLPQFMKZJVHOGHKGXTUECDZBNQHLILWLTIKWOAEMKQRFJXBVWSEAYTSGWILONZPUAOYDIXVJCBZSCHIWVXRTJUZLRZVUVDKLGWJOHTOENRGCHSSRBPTYJIUFSWYNPVTUZFWMJQEBPWOVIHEPBTRDDUKYCQQVOCDFQEMGNKFRPDUYAUCMAWSSKYERALIKAY");
    msg.flags = 44256U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.948881011104;
    tmp_msg_0.y = 0.0454207054069;
    tmp_msg_0.z = 0.20914901337;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LUTYIGWYJNEAKXZMVZUVIZBKWXNOCILWQUCDUXHLZVHBQGORPJIQXAMNGBPJCDEPMQVSJMWOLSOTFXQGATBBNAWZIHBZUKMYOBDGADFJHSYWWIQMKJGXCRHMTCTMKEZCOCGNTSQSUQLSDYQJFEOVPLIMVVNSAAMEDJWASLFZEUOKLYNKSRTRAPVEULERDYRNLI");

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
    msg.setTimeStamp(0.121084385687);
    msg.setSource(5168U);
    msg.setSourceEntity(28U);
    msg.setDestination(5744U);
    msg.setDestinationEntity(152U);
    msg.type = 138U;
    msg.op = 181U;
    msg.request_id = 44367U;
    msg.plan_id.assign("ZOAPHCDRXHSUZUNHZMQLGAKYTRQMBXPISRHTROHCLWLJAMIEDTEXNKDYFGAEKTSEMPEGXHDXUPFUXWYUSCVGNGGCHJYTCZSEJCJXVQMSWBGOYSOJFLZDLWERTBDCZKDJJVNBOAKUSIJXQDNUNIMQPYQAPNQLEPFOGWTNVWILYVVKKOTXIFBSNY");
    msg.flags = 42216U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 42225U;
    tmp_msg_0.lat = 0.380371986968;
    tmp_msg_0.lon = 0.286082624119;
    tmp_msg_0.z = 0.365725459542;
    tmp_msg_0.z_units = 173U;
    tmp_msg_0.speed = 0.393729918535;
    tmp_msg_0.speed_units = 187U;
    tmp_msg_0.bearing = 0.506547821441;
    tmp_msg_0.cross_angle = 0.537924091365;
    tmp_msg_0.width = 0.516207036179;
    tmp_msg_0.length = 0.581909655795;
    tmp_msg_0.hstep = 0.607090030827;
    tmp_msg_0.coff = 177U;
    tmp_msg_0.alternation = 230U;
    tmp_msg_0.flags = 66U;
    tmp_msg_0.custom.assign("ZMUAMQVWIOMNOMPUFPLCHQKXAWQOMRUXNTBROHGUTJNHIIRFPDFYRPMFLFYBSUTZSUMWJHWHHEZORAEXDSFKENQORLRTZLOETCDUGZXGXAKVHBZSTCQCNWVOQDCYNBYXGT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OTMAXXBTNZWAHQJYOCXRUXTDRNOZLJZWLFMNYWPSQYBPXYOEZPSLLIJ");

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
    msg.setTimeStamp(0.00812092048339);
    msg.setSource(59730U);
    msg.setSourceEntity(70U);
    msg.setDestination(9870U);
    msg.setDestinationEntity(82U);
    msg.type = 220U;
    msg.op = 51U;
    msg.request_id = 29063U;
    msg.plan_id.assign("VCKBHGBRANKGDWSSLDXUPXJCMWCGCYCKBQDEVITUGZHPBZQDOZLAOFABROBHISSFLPHAPUAWEQYEHDHUUEUAWJUDRJVNPUIXWFLFESYWIUROLJLVMXOQTZMTGVVLPTSOKGHFKEOZKGZTYSUOCEYRNTKJQOPRMDGZXZL");
    msg.flags = 56410U;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("JNFOLHRAYEBIGHQLOMJGVXQXDWCQCZZHHMPZHYXPVKBDNQQONLJETDBIQLIBBEIKFMJKOYXLRLUTYLVDOMSPFOJWLWJUOARIMZSJQLDGYHXKITVMTNXNONGQYVAVISCSAKBESEEMPPUFGJSCIINBUFGBMIARYBKLRYVKRTDZEACZUNWMSVWMUTJHTUAGJCARCAFSXKODXWFAKEHZPONWZTPEVGSEPPWCN");
    tmp_msg_0.type = 210U;
    tmp_msg_0.op = 158U;
    tmp_msg_0.group_name.assign("JUQEYZWZJWUBJKLRXMEVYNGBSQMSQKHKRSUMNLSOIWGWELDAATZYUCXCIYORLOCYXGFFFTIHXJNNQBUYYORHBWIPHQXMKNCLTJJCZOEQGBGHWEKWMTDHFVMLDPGLEXQNCBWBRBBGATLUFIAMNQBDLUDFPQDOOPYGYVHZAVUTIZLJPPSXVPIGCOKZ");
    tmp_msg_0.plan_id.assign("VSTONSFYYBRRVEHJXOHLZFVUUBIRWUZLRGPQGTFHVWPWSJBUFIMONDONSQLQNSLMUXDHOXCONJBLIDNMUWXKKXADUMTGRLEXESAGPCAHEHSSKDWVTJDYLMAKRCFSASZRWJDRXIVJVMHMYMTMIBZCCNOHKPBRGEAFNHEHEFXTBPUUPZJRALEBJDWGGGJZQZPCTXOPQTJDOKIZMZNAKQPTTYYUIBGIYV");
    tmp_msg_0.description.assign("ISWDDSTLMYNBVHXPDGYGAEVOJYRTUJAZQBTTVTYIPWFWWGZXZHQNJECPOLTGPAMLAJKQIMJBHFYEILKPTIYDNCBZLUHZPHVWHKZOFWCFCIFIORPRFMUKRMUECSCLMROXUGAUDETCOYXQFSQDEOBSVJLMCIRIKBTX");
    tmp_msg_0.reference_frame = 54U;
    tmp_msg_0.leader_bank_lim = 0.621858272422;
    tmp_msg_0.leader_speed_min = 0.292474246896;
    tmp_msg_0.leader_speed_max = 0.217077666817;
    tmp_msg_0.leader_alt_min = 0.438335831291;
    tmp_msg_0.leader_alt_max = 0.269063922627;
    tmp_msg_0.pos_sim_err_lim = 0.106840351703;
    tmp_msg_0.pos_sim_err_wrn = 0.422403973557;
    tmp_msg_0.pos_sim_err_timeout = 17302U;
    tmp_msg_0.converg_max = 0.312115124395;
    tmp_msg_0.converg_timeout = 53334U;
    tmp_msg_0.comms_timeout = 31977U;
    tmp_msg_0.turb_lim = 0.282567621616;
    tmp_msg_0.custom.assign("MAIXJQELBLZSWEDLNVHQCZKMYGKAPTBBJGDFKVFXRIHAFMGQIDJAMNNRLOXLECQWPWBCLDTOMYUULLYVVGHPBWRMQIPOIBEUURANAXAZWXCUSBJDEXRCRZUOJCYGTJWPVAHOUPB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CWDEEOGHAOIOTFUORFSYMWKUBWYIIVLDTZXZVCEWHOVWEEGIQZELQUBRRABHWKDIXFJKCELVQSUSWPEFRAYJDFHXGMROMPNFTFVMPPIKWBVFUQOQHC");

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
    msg.setTimeStamp(0.82935560992);
    msg.setSource(49171U);
    msg.setSourceEntity(120U);
    msg.setDestination(39233U);
    msg.setDestinationEntity(4U);
    msg.state = 203U;
    msg.plan_id.assign("EZNVXVRZYGWACQQGJKSTPMAJQBGGTOPFBCXIOPHYWDQHDMUIOTHCLAHFETPAONUDHAVWSMRYXKTHXVCSIZEMIQGPCYMG");
    msg.plan_eta = -19694393;
    msg.plan_progress = 0.854433923253;
    msg.man_id.assign("WTKSKZGAELMSJJUUAR");
    msg.man_type = 46508U;
    msg.man_eta = 1501188544;
    msg.last_outcome = 58U;

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
    msg.setTimeStamp(0.483462810238);
    msg.setSource(55779U);
    msg.setSourceEntity(226U);
    msg.setDestination(33609U);
    msg.setDestinationEntity(7U);
    msg.state = 106U;
    msg.plan_id.assign("HKGJBMGLNRVRZNHXOZCKSPRUNUUZFWFIFTBTEYPXFXDRAOZRUXJFPUDMFMHFYLTBDOSOJJDBLDYYKOLC");
    msg.plan_eta = -1794298361;
    msg.plan_progress = 0.610893959925;
    msg.man_id.assign("OAJLEMWEKKIDXNKYARISCXZSQHSIYSUBXHLZFIMUQGYWEBIKPACLXOQKVXYTAJQAGADJSUJHVUHAGGVVNEFUCRZRNEBKBPZWJFOZJZCLFBNFWV");
    msg.man_type = 62890U;
    msg.man_eta = 1398272836;
    msg.last_outcome = 106U;

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
    msg.setTimeStamp(0.0793610851462);
    msg.setSource(65127U);
    msg.setSourceEntity(151U);
    msg.setDestination(64559U);
    msg.setDestinationEntity(202U);
    msg.state = 17U;
    msg.plan_id.assign("XCUQEHFLWPDMELNRMITAAEQCMGABHJQAVDEESCMWQGOHWRRCFNXAVAXFSRKPCGBDGOXN");
    msg.plan_eta = -54288702;
    msg.plan_progress = 0.236967480282;
    msg.man_id.assign("CGWFCEZHVYLWAQBIBSMKRQUDGQAEWZGKHNHATFRPQBDVBJUJOTYNAPUCPTSBURCOVLFFZLGSWYYFMIUFXUHSLGPDVKYMQRIWAVILTMPMAKIVOHWUNOWKRSQEKUJAAXWNTIBFZDSYZMOJSUMOJJXXXYQJGIVXLXTMIOJCLEXKTBPLCOHCEHDOOPX");
    msg.man_type = 3472U;
    msg.man_eta = -1330650922;
    msg.last_outcome = 107U;

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
    msg.setTimeStamp(0.579273141174);
    msg.setSource(64893U);
    msg.setSourceEntity(80U);
    msg.setDestination(36304U);
    msg.setDestinationEntity(216U);
    msg.name.assign("FXVMWZKEKHPFSVVQUVXRTYGLGJVZEVXNILQDOMRECHOFGWEJKHZSHEDYRUNIOYSTEJRMIBYRSAOBICAKVJYXQKADNBSOPRYIPDZPTDSEPGXNGQUDEFJTKCSDZGKSGBAPYEHEQLFXFUTHTHYMIWNUBORZF");
    msg.value.assign("LPPDJEHUQXYVCYAECGTWIVIVJFNSSKQZPOSKBWZGPURVJNCJWZGLNFHGWIIEFVLFHXYXEPXKBGUTOBYDTBKZIBJLGXMLQNEFSDENPMTUJRBMIDTHRRTMHXAQOTZRNXCPMQOUTOIEONAVWKJFCDLMKIUAKEHLAMTZUSUFHGLCRVNLSZJRNVSWYYEDSUACVOKJCUBW");
    msg.type = 240U;
    msg.access = 223U;

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
    msg.setTimeStamp(0.510896374433);
    msg.setSource(41276U);
    msg.setSourceEntity(86U);
    msg.setDestination(37719U);
    msg.setDestinationEntity(26U);
    msg.name.assign("VBEZJCKUTCDRBQRONPPYFGAQRVOWYEOAYGKJNPUATXQVR");
    msg.value.assign("HNXPRIMATGQQTIJBWDECDPVKEGXYAXUSJDHJCTZFPKVHUBDOMGZQWTMRYURKHCYUDHESCKOFNUWRNEVWULQSFOTMVVIFYYEUHMOOLZLKPJBVYAKGNUMVGEVRVJZYXFLMOGYSJURZQKFDWBTBBZMPLXXPEWAJATLRQVCKNHKWSOIYNGFQYFWCJAJHGJTXLGMSEQWG");
    msg.type = 19U;
    msg.access = 75U;

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
    msg.setTimeStamp(0.618611014197);
    msg.setSource(38541U);
    msg.setSourceEntity(237U);
    msg.setDestination(61569U);
    msg.setDestinationEntity(164U);
    msg.name.assign("JQNFXCHTNSZDDAGVMIFOLMSYUWYWUBEHPTRSSQXKTBVWOIIPDNXPCXHXJUDXCLTFHUQNSXRHBZFAQZKVBZUVDUWPWQMHLOVAOJIXLDNLLCCNZCZXTSZNHQFAWKCYYWZRMMTOGKIYRRMAJXNKZUFQRIZGIIQC");
    msg.value.assign("WRDYGHYOMBMTHBZNREDKCIGZQRCQEUSADNZLYNEZFIICYLKSANJTVROULVWOMYRCKHXOTMRXWPKUIBEYJBQTBJGZZHVWWAEWOSMMYVGPDMSTVSVQHHFDAJRFZZTTRAJBUCIFOIKFSDTEHMANGIOFXQQOHOZUUADLCPASGGXTB");
    msg.type = 15U;
    msg.access = 105U;

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
    msg.setTimeStamp(0.213535623335);
    msg.setSource(5935U);
    msg.setSourceEntity(64U);
    msg.setDestination(36348U);
    msg.setDestinationEntity(136U);
    msg.cmd = 228U;
    msg.op = 223U;
    msg.plan_id.assign("XNJJQWFCEHADSGTPPEJJBLLTSXRDCNVIWBIRMWNWXZKMBLRVBTLXTQPIEAHVYIRXSOYZIZLDULOCJNEIWXBGMZLKGTMFAYKQOCWKYTKPOYVQTLUOBQJCDBSDROKFZJZVIFJUSFFSZVCWJWC");
    msg.params.assign("OAGEBFMNFVDJYGMOCBXTVTLUJVRDNMRLZKLGFHJOWOYQQTOTHODEHUDVDJXLXANEXDNBAJPUWMOUIHLKNKJGQXOJFMUCNSGGCMECADYQYIIAEPTQPSWOCVZBTHTKAXXKRAEHCGRRWPZZAE");

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
    msg.setTimeStamp(0.942749844373);
    msg.setSource(42478U);
    msg.setSourceEntity(210U);
    msg.setDestination(57757U);
    msg.setDestinationEntity(229U);
    msg.cmd = 226U;
    msg.op = 219U;
    msg.plan_id.assign("VDKRPJIDYWASEGCOHJQLWECIWKVBGJRHBXQJILMCGQWKJBFUOUSVNVVECHTOWGSXEWRIKHZPMGIWEXYMWGCPXCZMZSURETAQBGPTXAYXJTIMZZTMDVELTDBNLHPANEPDQCMTZHKIJASLQLFACHMDFYPLIAFXHRYGZYKBYRQSVPINZ");
    msg.params.assign("HXQKIVWFWVZTBYURNQXREBRFKWNFMJXGGXFEIAYYOJGAPGJDPGLOFNZGTPESZLLPVROZXYKCWBDPTXQEJJSIEFKTQSBCCTVIJZMMCMOQLWFUBUNGHWOLXAWDQFYVLHAMDIGMYCJBADRPQWSNOHUZKHKNBECLBLCDKOTSCRHIXWGVUEMRPTSQYNPIEPTWSUGHLNIDMAKYTSVKZATXLXFRVZAYUDNIJ");

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
    msg.setTimeStamp(0.393661305866);
    msg.setSource(18659U);
    msg.setSourceEntity(200U);
    msg.setDestination(65298U);
    msg.setDestinationEntity(199U);
    msg.cmd = 53U;
    msg.op = 225U;
    msg.plan_id.assign("AOVVFRVNEJBDSJUQGQSIKPCGPSGSBFOUSVOVLMOXWKRTYNBKAUAJKCKZQLNTHECUTRRFWRPZEQMFIKDZNRYZKQSCPCYLUWMFWHATIEFEDJTOXOGXGESCYLYRIOEVTK");
    msg.params.assign("UNNBVBIJLGIHDEMRHYIDTFMKAYQNHWGOYCURWUSHBJOMJPLDBFOTSTJIKNKNUEN");

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
    msg.setTimeStamp(0.184144803631);
    msg.setSource(1552U);
    msg.setSourceEntity(49U);
    msg.setDestination(43385U);
    msg.setDestinationEntity(189U);
    msg.group_name.assign("AOHMTVYTGUDFZOWFJAXUWMXIIYDWTYVNMKVFMQOKZPNZEIOCKHANVUHPYDNBEWLJEWZJLJSWDCZXRMIEPQCGSRSNFQMDRXLLXQE");
    msg.op = 217U;
    msg.lat = 0.0852881518331;
    msg.lon = 0.683013898546;
    msg.height = 0.276549507094;
    msg.x = 0.959209632588;
    msg.y = 0.923531000714;
    msg.z = 0.681882027269;
    msg.phi = 0.261052704036;
    msg.theta = 0.165196976225;
    msg.psi = 0.870526824176;
    msg.vx = 0.484234436172;
    msg.vy = 0.225216680076;
    msg.vz = 0.181072728072;
    msg.p = 0.589560721309;
    msg.q = 0.498291081001;
    msg.r = 0.105260241996;
    msg.svx = 0.245088113152;
    msg.svy = 0.906446525858;
    msg.svz = 0.258615763493;

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
    msg.setTimeStamp(0.353339024015);
    msg.setSource(6395U);
    msg.setSourceEntity(253U);
    msg.setDestination(24215U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("UOMEBINAHPGQIIPOSYRKIOSFISOPWCOAPQVFRRCTGVYGNXTLSIMICEOPDSRYGIWCBXXFPNHBYFHJHKSUVYTGAZXWZUINNMNXDKHLKZAFZDAGTZRZMLPLQHXFLWHKUAL");
    msg.op = 155U;
    msg.lat = 0.25043988676;
    msg.lon = 0.391249115408;
    msg.height = 0.356174716851;
    msg.x = 0.732804510712;
    msg.y = 0.487933822462;
    msg.z = 0.242146846237;
    msg.phi = 0.228543899783;
    msg.theta = 0.952362312758;
    msg.psi = 0.402842903814;
    msg.vx = 0.320629725673;
    msg.vy = 0.41796016791;
    msg.vz = 0.373349122273;
    msg.p = 0.316222092684;
    msg.q = 0.958717002534;
    msg.r = 0.673625033749;
    msg.svx = 0.0904190252465;
    msg.svy = 0.35883012138;
    msg.svz = 0.12778982517;

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
    msg.setTimeStamp(0.299304516858);
    msg.setSource(25528U);
    msg.setSourceEntity(140U);
    msg.setDestination(12982U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("ODOCUXNXDUITOGKFDACTJENKVEQNUERBTJWPWICVVFLZUIOGHKLMLSPYHICMRHEEAWGLABSWXOEZFERPJBSSIYIJHJHYWBRNLNAUDTKAJAOQFMUMGUWGVHJQDVTRZHWGAHHNLFDZSEZZKBDUCSMYCRHDIUYLLMAWBYWILQOTAOYZFQSXYJPVYRTLTPTBZGIBVSFZYUKPAFSMGVXMZCFIMEXNCPNKQQFXXNWROGGOCVKCTQPSNVPMKDRKJX");
    msg.op = 91U;
    msg.lat = 0.878697077156;
    msg.lon = 0.524949296164;
    msg.height = 0.499686029509;
    msg.x = 0.880229836876;
    msg.y = 0.565044069779;
    msg.z = 0.572425346006;
    msg.phi = 0.404446274153;
    msg.theta = 0.308536025798;
    msg.psi = 0.470449885299;
    msg.vx = 0.307527175248;
    msg.vy = 0.838304335235;
    msg.vz = 0.528044038604;
    msg.p = 0.465354196687;
    msg.q = 0.397735083775;
    msg.r = 0.0698349515701;
    msg.svx = 0.553515309378;
    msg.svy = 0.287834440536;
    msg.svz = 0.154453388256;

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
    msg.setTimeStamp(0.368320620065);
    msg.setSource(25109U);
    msg.setSourceEntity(78U);
    msg.setDestination(2987U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("TSBUWAQWYFOTANIXI");
    msg.type = 4U;
    msg.properties = 209U;
    msg.durations.assign("FKXZIQQRXCIKNZBNUPIDTCRZLXUXHCTOBDKVHLQVKGBUWCDBCWEMJLQXEWFZFEIONAYRRMUUGKIVMVDQZKTVSGENHJQBHJHKOAWSYXWPXEBJ");
    msg.distances.assign("JOWFGLOICGODLVRGDYMUTPVJMCIBFBNKNXKTIQUNLSXSHLLVQFDBMWOHPEGUONHICYAQTNGFESTQKWJHPGZTSAELBXWXEXZINIMFBPAPWOWSPAWWPSXCFNBVGJUYQRPAI");
    msg.actions.assign("ZZRNCEDYHEGWDLRMUEUAWLPOFQLAYXYGKIINCXVIUAEGYLCTIJVFSKV");
    msg.fuel.assign("MJSWWXQDVLZXMNUMRSXNDOVHHJSBMIBPOGRCQEPEIGGHZTUIBFJSKQNWVYBYVIPEWTRJXUHQDTKXQMWFWRSKPZYGHOFOFAZAEFLHKEXNPPSVCMNYMBZYVILDILIHYXRSLSHENQQBGTKDTKBUUCMOWG");

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
    msg.setTimeStamp(0.624558186187);
    msg.setSource(14027U);
    msg.setSourceEntity(224U);
    msg.setDestination(23228U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("TSGBPETDGXAUBEPUYTGWFLLQZROVNRFGPKF");
    msg.type = 240U;
    msg.properties = 55U;
    msg.durations.assign("BBETDKPRLERRHZRABJKOYBRWJFADOFBUXGWCTUMSSOKMHPEHXSFYGRXIKKVLPTYXREHJTAUYILDRXIIHUECYTYDBGXSMZCYNWCQIQQRCFZLJJJBUDWAZXEVX");
    msg.distances.assign("HKUDDVDYJNSRGATLWRLGZETCVOLITESGSOSZOWZOXDADOZ");
    msg.actions.assign("JIGGGSFVHDPWTVLTHMJWUDEAFSAPHTPMWGAJQWTUGMAORHNEIFZMTAIPMRHYOFMNMNWEQCDWJJDCZZJBOOQGBI");
    msg.fuel.assign("ENWUQIWMZPFDFNHJJIWDAUFOMFEHETZOIBCYXBWRGFRZTVNBYAZRWOPUDEXXLCAOMPYTBMTRNCPQXQXCSNLWGBVKWOFKEUNZPHTXICMJLNDUIHFNSVBJGLAPVEDDLGMLITOFKMJIBCFJGUYZMLCQWALQQPZTNZKVHCYTSYDSDRUKOHWLYMRXDOXIZAPSYUSGRIWOYIFOPVQSYRHNS");

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
    msg.setTimeStamp(0.32516862169);
    msg.setSource(54526U);
    msg.setSourceEntity(170U);
    msg.setDestination(19516U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("SCPWEPPFEVLNGDHMVKBBSCYKHDPXWUZXOJQYGIWOGUXQNCFYVJEZQMNFRJIDWYKXCSCZRHZOTRBOCTNBVIJANAZEIZIHFTXQJYXHDKBTFGTCXPHEMQUSMVEAJQBKFDZUFTJGSHBPQATRMIHD");
    msg.type = 240U;
    msg.properties = 178U;
    msg.durations.assign("QOAHVPEXNQUFJQBGQMWWUZGWITGKJVEADHVYHGSLRRBCUZTUFIAASZFOPNSDCEAITQEGRRFYYNBWMLNTVZK");
    msg.distances.assign("ZUZYRMPVWZGCHRTUZIBCRONUHAMOWIQFXCQKYBTPGIRDQPSJGILOMOKMUNOVTMZLJFSHFPFAYAUMPIGLSEJELAWBWLPTKP");
    msg.actions.assign("IBOGHICCHAMGYYBAEPQAEJBKYRKVXRIQFKAKPLKGUVEPZIYZOLMGHNARDNPKAUCWZNUUOCBQRLALJHSXTWIKEFGHBKXCE");
    msg.fuel.assign("UEUTMZMQWRKW");

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
    msg.setTimeStamp(0.0528695022591);
    msg.setSource(7082U);
    msg.setSourceEntity(137U);
    msg.setDestination(42470U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.581135300105;
    msg.lon = 0.953161513789;
    msg.depth = 0.020413920421;
    msg.roll = 0.282905744599;
    msg.pitch = 0.990375088407;
    msg.yaw = 0.239636190779;
    msg.rcp_time = 0.790949510441;
    msg.sid.assign("BPMKEKJGSCFVHCMEEUXRMQKVTCDDGFMIEIDSACZZDNWJJARHDIYHTUQNQWRQUOXXEFQMFWPFKEHTXHSDABYPWOBTONLFVRSOQJGLTIPRCRNROPIPKGKOWVWPSVYVRXNKZZCXAMNDBZL");
    msg.s_type = 184U;

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
    msg.setTimeStamp(0.265864588189);
    msg.setSource(5813U);
    msg.setSourceEntity(249U);
    msg.setDestination(8502U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.171196219399;
    msg.lon = 0.12722610147;
    msg.depth = 0.701229707071;
    msg.roll = 0.572335605103;
    msg.pitch = 0.864739352344;
    msg.yaw = 0.328963485706;
    msg.rcp_time = 0.0682463498931;
    msg.sid.assign("XXXIBREHRIUQUJRSKNKFBSOWZRWONEGTFQBTDFESUCYBUNQHKVQPLFNAPTMHHJCUVIDPOGDLWYUHDFIJGMIQSDZEHKJZZYOBVBMNZSNMVLPLWTUYAPWEPYVYZXPGCZLAGDQALQDMJOTYILUGN");
    msg.s_type = 148U;

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
    msg.setTimeStamp(0.333709519528);
    msg.setSource(7120U);
    msg.setSourceEntity(227U);
    msg.setDestination(18974U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.41797799684;
    msg.lon = 0.999408611559;
    msg.depth = 0.276795865945;
    msg.roll = 0.397534058;
    msg.pitch = 0.313893039847;
    msg.yaw = 0.727843245471;
    msg.rcp_time = 0.397953068897;
    msg.sid.assign("NXSSOLEJMTHQSUOJWXBFJXFZMYPPUUHSZRILGPLXPSQZYNNYXARPMVZPCWWFDACRJBHJFNLJKETFUCGSOBPFRTVLCRIOAUDVCAKVDGXXMLSGKUKSBCGTVLRUGMZVZYLYPTQYALJRKGXHFNKGRHCHRWWTEAVFDQWVIQHLYDZWAAJDNFZEIWXABOITZWDYTENSOBIBTHODMBICJKEPCYBQIIQOMUZANETUQIKSMXKEHDHPNEVQUFYRVOGMD");
    msg.s_type = 74U;

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
    msg.setTimeStamp(0.247944961368);
    msg.setSource(55090U);
    msg.setSourceEntity(153U);
    msg.setDestination(26882U);
    msg.setDestinationEntity(68U);
    msg.id.assign("XWHQZMMYBUJBLMASDAYGFIHMGEAWAUZKLQIWMOANJJITBWTULRNOJDRTPFSCUDUQEGFAVHPJIQCOSZHGUDGIYTFVYCXGDEMPXCTTPWAJOEITXHSYKFLRMQOWFSZHQYOVMFRHLPUUDKUGYHCRWIHYZBAPKEEBCAKZEKMVCBIJNNSVELXSBZNPJSXPDSVRZBQWSTJFQBKOKREGMDCGDYAXLPVGO");
    msg.sensor_class.assign("VHBRFRYUNZDBDTRTAIINUYFRXTZJ");
    msg.lat = 0.80408427579;
    msg.lon = 0.380079590915;
    msg.alt = 0.0033797081099;
    msg.heading = 0.804792505742;
    msg.data.assign("GTYEAHDLNSLCMKMWIMEXSIAKYLJYPIXUIOLSQZBIYPZNLRPAD");

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
    msg.setTimeStamp(0.102203722955);
    msg.setSource(8141U);
    msg.setSourceEntity(93U);
    msg.setDestination(33355U);
    msg.setDestinationEntity(148U);
    msg.id.assign("HDKUUEELOCDJJDWKEYRMMRAXAWOPITXQQ");
    msg.sensor_class.assign("XVGFQPSNGQREIYAVGZNWWOCEODVTLDLZEMBMABEUFWYKPQDYOUAKHTBZDASCXHCWFYPKEFBRWAKMENUJZRAXPADTGRRCJHCFUPUFYHQIARZ");
    msg.lat = 0.836346514774;
    msg.lon = 0.46055399244;
    msg.alt = 0.00784612829151;
    msg.heading = 0.000211985882855;
    msg.data.assign("FGAQULAKCRDRVYVIOFATJKCGXJLHPFJXLZNHZEDNLUCSXICYQFEFPOIQGRCHRSECRUUHXOGSOZKNNXGLEAVUMXUDDMYKGMLSEZHOABTYYAQREWPDCZFVMSHFIYVHWKIQMCKNEQBLJJWBHKPIJWJBLBMTZMSSUGBBWJRVMGQDKICRUERAIQGGATDTDTODNWPFXTOPQRLLIXVAYMNOMZUKXZEBZPNCWIJOWT");

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
    msg.setTimeStamp(0.84611592105);
    msg.setSource(18407U);
    msg.setSourceEntity(38U);
    msg.setDestination(8841U);
    msg.setDestinationEntity(211U);
    msg.id.assign("XRTOVKPXGCPCGLPIFWPHZBCKPPWROTOUMWSZXCNADEOTQJFEJSMPEIWSJWSEBKBBDVRLUNXIMAUXRSDUTGFIEODHQKNTTEJGLKSUFGKIKXQLZYAVMBYASDFRLDGQLZXQGVJUINMZUOAKYYYISFCAFQDBOEOFHCYHWVPZZXPHRHU");
    msg.sensor_class.assign("ELWWWUFXKBCOFXMWNDZBTHDIMHZVCUJAJDYBINUWROXSDEWBDQVSUPBNFHSPIEMMFGFCFPTXQAGXMZORZELQVMWJSPORVFAZNMWQQDTSNKDQGGZEHACVTUMYPKHPKQKKTASAUVDBPHCASRTQSOQZBOVNWQFGJEYBUHGYRXIVENOHKKNYFZVSKIFJRIEPYDBILLOJUEJPXX");
    msg.lat = 0.699381564144;
    msg.lon = 0.11660065858;
    msg.alt = 0.913593747372;
    msg.heading = 0.1108776266;
    msg.data.assign("XRCTBOETHDPVYMWAARLQIAXNBMVHKZVSSLPRGLFRBIYSCJDWUZTWFOUTQHGHYGEJHNJPSMEJFMTFNGYUSAEUKYOAUBXZTVGJTQUCFHOOWVIZJWQGZDOUUCCXFKIFETAGDRVLMNDSVULPCWQFNNUQLSEDCJPBQKZRDVMGRDPENMPZPNAOAIHEQICFXKXIYEZRWBKKBHLNWOYBQJADVW");

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
    msg.setTimeStamp(0.0675000667339);
    msg.setSource(23504U);
    msg.setSourceEntity(148U);
    msg.setDestination(12924U);
    msg.setDestinationEntity(179U);
    msg.id.assign("YBMCVXVMILZFGTXWDJRRIFCQGTMIZGCRXUBHEWOYRZIAETGSVUUOAVUFXBGLMJXKWPTKORNTOICGTSNPKAEQYYZHSAXQLRNXIJOPDFJMYWUCVBZJIXBHWYFFERISPSQECFIEHSQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GWSVDRUFCZKNDOMFWJGQZKQCCYAEUJOYHGEWMPAHFPKODYBRXHDLDOBXYHALVQOQQGOWMPBAUETWCVELJVFKDNOGYBSXXKXLIVSBXPMDLOHNNQNYUZIKLTDMTAATELRVRKJATBPQMCPBZNJPECTILOIPCPSAZNYSIFHVGS");
    tmp_msg_0.feature_type = 203U;
    tmp_msg_0.rgb_red = 109U;
    tmp_msg_0.rgb_green = 128U;
    tmp_msg_0.rgb_blue = 194U;
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
    msg.setTimeStamp(0.832023666894);
    msg.setSource(47771U);
    msg.setSourceEntity(6U);
    msg.setDestination(37734U);
    msg.setDestinationEntity(36U);
    msg.id.assign("KUPXNUFNPDMKXRAXDYCISDDZCSVNZBJIQSDUSKFSASQMCJANMMAFBFZCYOCBEFQVLETOYVRLXKLRLHTHFVIKGWBYGUZERABTNVMVISIVLKRYGTOEKJERQALTUYATDWJHHW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XNNIZPZPFKACSAHSUEJKS");
    tmp_msg_0.feature_type = 244U;
    tmp_msg_0.rgb_red = 176U;
    tmp_msg_0.rgb_green = 11U;
    tmp_msg_0.rgb_blue = 70U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.508614777508;
    tmp_tmp_msg_0_0.lon = 0.000393832333241;
    tmp_tmp_msg_0_0.alt = 0.22349121376;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.142995123427);
    msg.setSource(34167U);
    msg.setSourceEntity(192U);
    msg.setDestination(60617U);
    msg.setDestinationEntity(24U);
    msg.id.assign("JSPACQLHOSFMMMTMXKHTXRLHANFLXDZKUQQYYICCMOPEUQKTTNBBQVVTVWPLJZJHMXPALQXYDAWAWBGJHJFXZXKOIXLIANCPKRRNOXDRRCHGWWSFTUUNVNIBBTFDDOJDXUPCEUJYFRGMYRBEZRFLTLVOGKGZOVBSKOJMUISJIIHWFDLWHYFEISZQMSUDPPKCOYVEARAEP");

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
    msg.setTimeStamp(0.866341960188);
    msg.setSource(53750U);
    msg.setSourceEntity(237U);
    msg.setDestination(39987U);
    msg.setDestinationEntity(125U);
    msg.id.assign("OTGDNRYOCNKHKHQSXFCRQOWTODEZBWSPCNEJOWAXGAKZPRUKJILIAMSYHFFBVYYFTFCVHSUQJFGBRMXIXGJYIWJWFFPREVPWVPIRUNN");
    msg.feature_type = 18U;
    msg.rgb_red = 35U;
    msg.rgb_green = 209U;
    msg.rgb_blue = 112U;

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
    msg.setTimeStamp(0.620465535045);
    msg.setSource(37767U);
    msg.setSourceEntity(195U);
    msg.setDestination(29043U);
    msg.setDestinationEntity(193U);
    msg.id.assign("UZGXEHOSPBAABVGLSLTVHIITHTIGXKVQGNZNWJIMNCFNVZLECPXKQHJPGGYQAWFFUTRLJXSPKKAMHJYPPXBROEZDJIZKXYUOXNTSSYVBZDRZEJIQDMACQMSHPNAUJWMYDCUKARQZWTAGYOLZEQ");
    msg.feature_type = 63U;
    msg.rgb_red = 156U;
    msg.rgb_green = 242U;
    msg.rgb_blue = 10U;

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
    msg.setTimeStamp(0.869430322759);
    msg.setSource(32102U);
    msg.setSourceEntity(39U);
    msg.setDestination(34907U);
    msg.setDestinationEntity(245U);
    msg.id.assign("OPYUPIPCILGYVBXNVCEKJWGKXAGQSIPVRUJNBQHUDDLNLFAOBXFOHCOHSDYSKQNUXSYGMQGAZEYNYHYFUWRBDRLBRHTJLREUXOVZMMKRLNTMUSSGXFWQYBWZSZJTSHBMHCACEGZSJOL");
    msg.feature_type = 120U;
    msg.rgb_red = 73U;
    msg.rgb_green = 206U;
    msg.rgb_blue = 130U;

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
    msg.setTimeStamp(0.830135365384);
    msg.setSource(9584U);
    msg.setSourceEntity(148U);
    msg.setDestination(1029U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.375891784538;
    msg.lon = 0.00462183344745;
    msg.alt = 0.943186703738;

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
    msg.setTimeStamp(0.120956818792);
    msg.setSource(13095U);
    msg.setSourceEntity(166U);
    msg.setDestination(6973U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.924289181611;
    msg.lon = 0.804220534117;
    msg.alt = 0.0195995637094;

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
    msg.setTimeStamp(0.602584220634);
    msg.setSource(20683U);
    msg.setSourceEntity(194U);
    msg.setDestination(58986U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.583923867215;
    msg.lon = 0.69648215108;
    msg.alt = 0.58086395977;

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
    msg.setTimeStamp(0.264973680474);
    msg.setSource(65204U);
    msg.setSourceEntity(215U);
    msg.setDestination(24456U);
    msg.setDestinationEntity(187U);
    msg.type = 111U;
    msg.id.assign("TJKGIRBWZXIGSBWYPHFTZTBFSUQFSDNYZPVRVWOKGXPCZTKLSITNJXFMAPCKRGWFVASXQIHLMTLKHXSWQGWRFTJELSSMWQRBIPQOVIBMEFEZAELAPRNGOCYKJNAGQDHCMPYUBAIEXAZORJTUNQIZFCEDUZUVOUHPMARJXUYRIGNPVTABAQOGCKZSUHYKCDBOFSQHOOWCJKXULLDJDHEOJPTYMVXGCQBDNNXNKCMENYE");
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 2923731435U;
    tmp_msg_0.status = 177U;
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
    msg.setTimeStamp(0.889612658681);
    msg.setSource(49907U);
    msg.setSourceEntity(17U);
    msg.setDestination(2103U);
    msg.setDestinationEntity(245U);
    msg.type = 156U;
    msg.id.assign("ZMSQTKFSUEWPUWCWASYLOUAAMDTARIIMNCMGAHHKSPIQYIOYQTGVYVNGBJRIFLGEOXDK");
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 28514U;
    tmp_msg_0.destination = 4769U;
    tmp_msg_0.timeout = 0.0684854546594;
    IMC::ArmingState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 225U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.71884987084);
    msg.setSource(29501U);
    msg.setSourceEntity(154U);
    msg.setDestination(50891U);
    msg.setDestinationEntity(162U);
    msg.type = 215U;
    msg.id.assign("QCJDLKYJOEOTPRKTNECAYXYVRNBSIGNPHFJDQAHJEXQFLYROFNBCTSEIHEVASGZXAITSXMCDUYXXWHHLZMHPXRBUAMOBLUWCZKHRNGYQAVYQRVSBUDDZTTJJWRFLAMIEXSLGIOQROTBDNHFYFJSNONCJBGRMGKRPPKNMO");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 99U;
    tmp_msg_0.plan_id.assign("MHEQTJILTGFSJKJNYTGXLLWQVLCPWKRMJDMLFNGUXKAPGXUM");
    tmp_msg_0.plan_eta = 1751918476;
    tmp_msg_0.plan_progress = 0.317326596535;
    tmp_msg_0.man_id.assign("OSEMIGYBUKJAPUVLADUDBPTGQRNJTOIWDODKPKUIEBEVGQGBRPTSCIWNLLMDYOOZHVRKABZZRXXFPIWSN");
    tmp_msg_0.man_type = 51581U;
    tmp_msg_0.man_eta = 389460054;
    tmp_msg_0.last_outcome = 229U;
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
    msg.setTimeStamp(0.410434033875);
    msg.setSource(32570U);
    msg.setSourceEntity(178U);
    msg.setDestination(14871U);
    msg.setDestinationEntity(227U);
    msg.localname.assign("ZVHAHXBVIAZLWGFPYNRYVXNKBQMEVDDTRJKG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UUHAWQHEOLPBNZIWYIBZKLJPWHQOBVEZRFRSAKFF");
    tmp_msg_0.sys_type = 218U;
    tmp_msg_0.owner = 38764U;
    tmp_msg_0.lat = 0.444270591373;
    tmp_msg_0.lon = 0.33239693657;
    tmp_msg_0.height = 0.624085930437;
    tmp_msg_0.services.assign("PQAZTMKOOPKCXHSVYCZRUTEXZAAOJEDKMTVPZLSJSNMXMQXFOIGDHB");
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
    msg.setTimeStamp(0.540671185098);
    msg.setSource(39573U);
    msg.setSourceEntity(145U);
    msg.setDestination(38149U);
    msg.setDestinationEntity(160U);
    msg.localname.assign("TEFSXQCGVCCGODZTGQTAQJUPFRKGPDNSJUNXYMLMXSLCAEMYTOILLJAFUHHSLWBMTQRLNPHQWZGHBVSMCYREOXCSAVDJVEGHBFDWTFIBIZKQYBGNRCWBZKHYNWXYKKQGZBAUKFZACFPMJEYPXXONAIIBVDDVPVDNFJRMSTUCNJWEZWYVQZIFGKEKDELHOOSDNRSEXUWMPTXKPRKOCAERPBALIYODNWRUIHJUZGAIUOHVPBQVHLSFZMUYQO");

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
    msg.setTimeStamp(0.58354532641);
    msg.setSource(54490U);
    msg.setSourceEntity(174U);
    msg.setDestination(709U);
    msg.setDestinationEntity(147U);
    msg.localname.assign("KINBTRJSFRUKXDUNDXACEHILASRIYGPUFIHMPPYOGWZGRGXEVPNPEFFVWAKLHXGQGTOCVCDMRFFKYERANCXZPYWVRMISHSLQAHLJMYAUUNAOOCBODLLIITREKANGZHLHQJBNWTMWCXHKWSWQAYCUQEHXEDBMTJPXTDZSGMQKFCIVUVBPJZWFDEICCT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YMSPJUNQPLDCOGKYFXFMKFZBFQNZWUBZSDLBQREOUHNBNHZEAHVHXDKKJNWVWICYDCAUTZYOTQPLISI");
    tmp_msg_0.sys_type = 207U;
    tmp_msg_0.owner = 39078U;
    tmp_msg_0.lat = 0.445142221369;
    tmp_msg_0.lon = 0.114025192062;
    tmp_msg_0.height = 0.484073475583;
    tmp_msg_0.services.assign("QNOJXAEZKPCATIWNXUFNYSXZMTZAUPIBWXOFPLNXVHDYGWPPTKDUOQUVKWWKWOVDUAIXYCVMDBXQIYVASLOVRVCBJNKSCAKDXRGYHBRMBNJSYLZNRREBHPQATMUPNGCJQHZJGXJZDRBEMWJWMTMXAKFHSDHGFTTKUIIMELQRTQLIBVOCZMOFEDFHLGFEJIZOFSFHDOZJLQSEJRTCIFSGNRUVYPCEMLGIQHPLEGHLUGSACOKZD");
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
    msg.setTimeStamp(0.506375838835);
    msg.setSource(49595U);
    msg.setSourceEntity(65U);
    msg.setDestination(37838U);
    msg.setDestinationEntity(200U);
    msg.timeline.assign("TJVZUMPLKMRPBYUSHAYUNKFKWCSKQDUPXQOINEDOOELUUMTQGJWZSVAXKDIXZAYSFCSMGHBGIMKHTDBDCMRPBPETMCRFDGOXFJTOBEIGNQCYAQ");
    msg.predicate.assign("VXSVFFZGYHPDQBPRRUKPKWBNDWMBLKTEJBPVKVYVFNISUIJTHTCATYATUEKLTGHCCBVMO");
    msg.attributes.assign("EMERTYSJKDYJROVPWIJDVTEYTZKMQXV");

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
    msg.setTimeStamp(0.945079013029);
    msg.setSource(52416U);
    msg.setSourceEntity(77U);
    msg.setDestination(16270U);
    msg.setDestinationEntity(10U);
    msg.timeline.assign("HWYLTQWJQSSJLMUADUBORBDQZTTQRWPMFNFJBEAKXKEZFFIPPVRPDRJMCWBNEBHTAHWKDMUNYHLIPDXXQZOLXOGMUFSNBCPLAWMECGZNKHZISAAY");
    msg.predicate.assign("RLTDCETVUNJAOEPMKCVPUIOJRUQNNQEMBHLZDMYVQUMILSOKHBOQLKPHLSZPSYK");
    msg.attributes.assign("LJGOVMINWK");

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
    msg.setTimeStamp(0.0979067845673);
    msg.setSource(15607U);
    msg.setSourceEntity(112U);
    msg.setDestination(19964U);
    msg.setDestinationEntity(119U);
    msg.timeline.assign("HEUAUBAJOAYKGGVQABIVCMJBIUEWIHHXDTLJIANPUNEOLKPGRRJLWNDKJVNDRACGXQFGEHHIBMNXOEFU");
    msg.predicate.assign("UHUZYNQXBZZKDDROXANDRBOJVHVYYRLBIFGUDTKCANCSBCJJLSMQCHRFEMMUYXMNVABFLMFVPPNQHUUHJYOBOFEEGXDBWQGEATIWNGWIWL");
    msg.attributes.assign("ZDBKJPKOQVQETBOECQTGGBMLOKUFDBCSFNRGSUXKFMLHPSFMNWYEFQQTDIRMETUIRGOCAAYKTJOTQVHUFNWDEYZNVZHGYKHLTJWIWBAFDJPWDNGXZAARUWIVCPFCEMJSJROUMKWLOSNIXMHGVJPGRNQXJURZQBSIHIZZYIEACYXXNVOBWRKOBGCLLPCMETP");

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
    msg.setTimeStamp(0.477809137986);
    msg.setSource(57555U);
    msg.setSourceEntity(163U);
    msg.setDestination(58028U);
    msg.setDestinationEntity(168U);
    msg.command = 243U;
    msg.goal_id.assign("RFYGZGMPOYSFBVJMAMNOACEXDDXZVQKWPHSTNLWKERCQETQQHDCKZJKYROSQSSREERKGAMFLDOIWHPGQPZUSDLNLRSCGNNKQBVKUNJMFAFVABGATAIXWITVCZHYOWLEABYASZYBEFUNCRKWLYIXLDWBMUFFJLETJBUDDHTSIU");
    msg.goal_xml.assign("OIRCFXSBQEQKNMRWGDTSJZSWGEHJDFEKSUZWPKVTBVWWILKQNQCFNEXTKKALWPEJBBOGBRXYHZUYYLQMHLRUJGNUXMENPDDOICHGUCPXWR");

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
    msg.setTimeStamp(0.821812124171);
    msg.setSource(54148U);
    msg.setSourceEntity(104U);
    msg.setDestination(48053U);
    msg.setDestinationEntity(127U);
    msg.command = 28U;
    msg.goal_id.assign("QLWHPSIBJXRWWAGYNAPNPHCWAAVOAHYJBPNUUJBFKOZQNJSOXCEYKLFBLLRAVMLDFLZWTARUXDHDNOGRHOBKVMEXOYKJYTRFEIGQZTQOILOUKDPHERZTUQNNOZRICZVGQRBCYEMVUSLPSTXPJJZBPYBWPGNZDAISGCRSHDVSLFPSEIEKBVYFLDSMWU");
    msg.goal_xml.assign("DSRESBMDIXRZWGEFMYTBHWRZSMLLVJSPUIQNCMVNIKREUQPUIVRWNPAVWJTDRIQGKMUXNDHHBMGWEVXLZPFKJEZFUHQCAOTGDQVLQDQWTRKTNGCOTJKPFCAYRKBPFVDFAMHEFDPEZKNIMOIELJTTWYI");

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
    msg.setTimeStamp(0.403374915571);
    msg.setSource(52856U);
    msg.setSourceEntity(131U);
    msg.setDestination(34049U);
    msg.setDestinationEntity(148U);
    msg.command = 118U;
    msg.goal_id.assign("DBNWRIPRFFXHQHBBVNTJKKXXJAXOGKMEFYSPCTGLAKZUAAYEIMYQRPJSJLZKUFWGSSLOGGSQQWQZMFMNYPRDUWJQNCOOIDXPTTODBJFPZELTKYSTKGCIVWHKEXEDWTCCMLVEHEFPZCAOOVUKONGZJZW");
    msg.goal_xml.assign("LKAUQENABTLVMIYOQKBNTVNXBTGMBODXDFDPAOFECAJDUSKABMRFKWYHGHVERAQRUIVDXLCCOJQVWLWPTXRUKFQWXXJMWSEYMKIJGGIGPSGAQDSBVRPCQCNNYNZRRSSIZYORWPULSEFLTAFTKRXIGZIUYLJMLZLFUPAINHETHKNGHZEFNVEJVXOVPLJWHWSXSQDZYBHZWNDITMHOOUCU");

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
    msg.setTimeStamp(0.587362209376);
    msg.setSource(29454U);
    msg.setSourceEntity(91U);
    msg.setDestination(18485U);
    msg.setDestinationEntity(141U);
    msg.op = 121U;
    msg.goal_id.assign("ZLVRAHQHOKPRCSDLYDOKZMPGXKIYYTQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EKSXLXJOURVLNNQTHDHLINHYSQIIBGLDGABHMCBJVKDWQZYGTZJMPLBWUEQIXEJTOIUZRBKSZOFCMKBCGAWJ");
    tmp_msg_0.predicate.assign("WCWIDVWBVGUFIBCUXPBUKIRFRCHYILQVKNSZSOMDUGZNTPKMAJRZZQIQEDLDJRTQMARLAEZWNOGDFLCWUZYQHHUOKDCOASOYXPPBEWRGKXJNDPHHABDNFPFTLOXAHNYCRJAXCQZEVUTGQEBFEZSLMZIWJAQILBAVXETWSOYWRJCPGGITSUYXXZKQHYVBHFJKRKVOESNLBRDYJVMPMTMETSGOPYJSWKATFNNDLHQUCVMSGNYXLFFXJTVBHEOMK");
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
    msg.setTimeStamp(0.510914968601);
    msg.setSource(48232U);
    msg.setSourceEntity(82U);
    msg.setDestination(2328U);
    msg.setDestinationEntity(2U);
    msg.op = 126U;
    msg.goal_id.assign("LFZDBRAZUBBWXISFIXAVYXSHTBFEMGTCOOUHHWJNSASVVBTNXGOXGQGTDGWRYCIORTNIKGWRXCDDVQXTFSTBKQCZAHBYGMYCRPRNIFUOCOPQVZJKROINVZAHIXZOEMAPQRLNAZSPYDJUJEUHBGVMKEKCUMHQCKEQDVP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LBMJWCZCYHNMZSFDFBSGWTNHHAJRECYOKRJWIMSGXQBZSZTQMYVZYEEHOWJUVSHVVTTFZVUBNIHXDQXUURPLQJOULKHXGTVZIZVGOOIYLZBSIQRNBGAKKMGAFNDPFQXRKGLPIBYHMHKIPATESCTKGSUCUJNKDIXMCBNYDZXVAMOGPTPWEYJPKRCLEFUJLWRTAFMEQVDKOQJUEUXGHYCICXQSVABBDNWTDFWPDDLLW");
    tmp_msg_0.predicate.assign("LZSNNXDABRAGYGXQNBNWGQLDOWAWBCNLEKGXBBEDVRSDRHZFSXMGFIHCQBWFNJKVMRUOMOLTCQVRIIURZHITLRMEJTOWQXVDWRKAMMYZNBZEGYQTWTTTPLXKPQSAEJCKOHKKZRHQFAOYJSGZNVYATPKKJJUTEAUFCFPVMQVANJMVXYCSYFXELJHEOCUIZPTYBYPHKSIHFPSUZOEBUDGUCFCVWOCUY");
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
    msg.setTimeStamp(0.123152160013);
    msg.setSource(43604U);
    msg.setSourceEntity(139U);
    msg.setDestination(39589U);
    msg.setDestinationEntity(93U);
    msg.op = 145U;
    msg.goal_id.assign("SWNNBOQAJLPOCNQEBVIYQJDDUPNPGJOCHHBKMNFJTMBEIKTSFRXRGYUHBNGDVJTTSDEVZTFDWSUZIXHGCPIGTDFJSTVAUIOZAXYLOQUFDEARKCERAUHJYXFPWCYQRUPORLTYKDKISMBHSLSGZYBUTPPDGWMAXRKMGCNLZMJFWCKZQBJVVIEQZAHWPMQMLVGE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YWEEARJZFNAFVHGEPXWCHAOKQXBOX");
    tmp_msg_0.predicate.assign("OYQWKADARJUICTBMPEQMISAMYGSOCBHPFVQKPXNGYDOWIGKUBZKAXDVSBXLAQIXKEOJZEEDSAQQZBZQJYOCEWWSIWVHNFPGMHTYUIUTKEVAUHTETDFSLXEMRWGDCGWYJMOJPHPRONPLNLNCHFDJWYTWMICZSFXNFHNGGZVNMKSBEKQQPRGTFJLXFUS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QBIUCSXFMGFTENNDDQNWTSPEFTDGNPMFOMLORCLWFHLTAYYQHGNCSZTJGKRERWJRKPXFUJKZNPNQIJEAZPZALJROUNWGDMXIKYVMVHAMPYYCGGBR");
    tmp_tmp_msg_0_0.attr_type = 189U;
    tmp_tmp_msg_0_0.min.assign("UKNXZISWJBSCOFZDTIAKGVYPTKICBECCAZOYARKEXJOZGBWBHBRZCTFUNVSQJTRVCPBMPAOQHS");
    tmp_tmp_msg_0_0.max.assign("ERQMPJAJECRRGAZRRLOFWDWLUOSEXKSLJTPIKXSZGXHPCREXDHMJGSQUJKDBWYTVKSNOAUUPXQFIRGWZXANLABKRTXLBLSFUZGUZJJGPMTOPAZNIQFAJCINQFEKPNMMVUVHVMUKNHZWVODYTGHHKXTDP");
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
    msg.setTimeStamp(0.512137290877);
    msg.setSource(21221U);
    msg.setSourceEntity(147U);
    msg.setDestination(34796U);
    msg.setDestinationEntity(125U);
    msg.name.assign("SGBDPAEIVWYVIZNQBTDXYXOSZJWDHKYIWEKKFSVALCOZSJITKCVHMPUKLLBPQXMIQTCMZMRUGPFBW");
    msg.attr_type = 227U;
    msg.min.assign("RCMSZFAAPLGOJKDJVKPILMHCPLBOIAZOAMHOWUZQSQDUGMFPDOVNPKSXBWQFURVURAGMZSFHOCEJUEGACBLQYDYYTQKYTIXJBNKQVOPRVDZYDOVRTEMNRGXGQYFQCILQSKKKWJVXNENIZZRBSOIXSRJUYYKFPPPFEGBHUYOLTENIHANHZDCJWENBKDSMTXSFVNQWHCLACTIBZIUTGWJXCEGTTUEXWHHZWTLAH");
    msg.max.assign("FCSXLITAZYLBYIEIHZRDDWQVLRUOBAJJGTUCFNQWUCJHACFPEYRSJWMNRSCMQVHPHSJKTWQKFDABVCRWJRVFWDANZVCGMHMVDCEI");

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
    msg.setTimeStamp(0.173928999021);
    msg.setSource(41958U);
    msg.setSourceEntity(9U);
    msg.setDestination(20100U);
    msg.setDestinationEntity(16U);
    msg.name.assign("GBWAZXXOMNCDTKIHSZQXOFFHIJYSRGRQVHPDSQNIOLKAYZHRIUALKQKIVCKHUYXBNJJCASMHVETZDLFMVOWLCTPPQGOPRHSOXMWJJWWPNLFWESYFSIY");
    msg.attr_type = 72U;
    msg.min.assign("XOPJXCEQANLLGGVCNDTBBDPTNGDNPUYNFITOSPZXDTSWZMVYDSXIZPWBFTAZDEIBQIOOOQCCKWKMMHCRFJNUEUCUAYSSYFZHDBILKVMOHQEZRXZQACHSTYRPCRWRFYLSLLTQDBBCOVRMAGDSKUXGFOHYUIGWLYXGNPZRFCIPESYIAQELHRIDIMZJGJUQQTESKWFBANHHHLKARZJVJPMVQKUUJJNLUOFMXMB");
    msg.max.assign("NNPKXAQVOYBFPVCOJGBTDEYZLPHFEGHOSRICINIOOWNNUYBQEAHYOELUCPCZEBZIXHURSFZQBPRBMKMDCWEDPSETVEAO");

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
    msg.setTimeStamp(0.209515974354);
    msg.setSource(45666U);
    msg.setSourceEntity(121U);
    msg.setDestination(40133U);
    msg.setDestinationEntity(178U);
    msg.name.assign("SYDWZGWSXBBHRFVQRISOIVKQBJTFWUXQVWWEBDLLKETPQCRGOSMROLXPURKXWSNLTENYZBDDVDIJFCEMKAOPORHHWZZAOKHCYSCHVULHMISXXOAYKYDDNGVJMNJZPJFIERQGVJYAVI");
    msg.attr_type = 0U;
    msg.min.assign("TBXAKVNVGSZODTMMYDFWBEQLUSFYAGLSPFIPQLQEWPXIOHVJFYKPMQPMYAABUHVZBJOJRNCTIYCGTXQHFBDCOQYYESESDVZXRIKPSMOKUAEUWVMLOVNPWPNSSCABHZRWOTHFYLXCGB");
    msg.max.assign("MXURCNTDVBIAXAPCBDSJVQNPCENUKQIXHKDLJHXNLHKVUCGEENCSADFZSIOKRSBKETYIPMDGGWTEWYDARJCBEJONBGKMAHEPGZGYZTYZSFMSMDKJTIDOQFFYLQOOIYRHSODBWQPGPXIMAOPGSTFQDRVWZBE");

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
    msg.setTimeStamp(0.221116483677);
    msg.setSource(61769U);
    msg.setSourceEntity(230U);
    msg.setDestination(47667U);
    msg.setDestinationEntity(106U);
    msg.timeline.assign("XAQJNVGHDVKMDRHKWNCYXTAEMFZZPZUGONGLPYQBZFLSTZCOQCSYUYRUMGUAWEBFMRHLYXGVDFASKREJBRFHVQKDFWYYVIBGSTWCJVOSLOWEPXIIHJPBIZTIAQXGWIVRQXXZKMDETLWFWHGLVJCPSNTIQZXGOQRABEHULTDPABP");
    msg.predicate.assign("QDINPCTQDPRBMELMVZQPTEANZUCERDGGAFPKVTLWFTXBHZFZJIHMKQOARDBCYBYXSDFJGCSTRZKUBEKWYBTPSWMQAJKOWALUVSRXSGYPPNJQMIH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BIYHXSCVPLGRGCVBDWSRKNKOPBYDXCSLLZFMDYTFFUKHDJQYWFU");
    tmp_msg_0.attr_type = 160U;
    tmp_msg_0.min.assign("YHVASNQXPEHTVDOEYPIXSNXEQDZTWFNBGKUPJOEFAERCSZIAWTZHQTEUMWGHZLHAQJXHGVXONYSERBZTWQSNAHMZYVVUCGLLOKPJYCTZGVSOXJKILUATOKUGBFDSXVCAWUCCDWEKGXRQRMBKCIYVRCSRDNMBDPNOVBXFJZPGEBDKMEJYJBGBZBWYRJLMPIKLRIOWIRTFHKIW");
    tmp_msg_0.max.assign("ZIPWVAEIWAXUATQEHEOZSSSKZXORQOGXVUDUMNIAGYUHFFDMRQWGMMTQUPMPECCCSZCSMLGUVTBTLELNVNBJGWKVQNZRPWNSUOWGZDRTHUGPXOQKHJEIKDADFJJBVCYDWLNJSOAHJLWMACTXLJDKIVCWEPINXLSSQPRZCUCKATFBXBTFOPIBJBDOFDJHBTHXKYEJNRIDOQRQKHYWVGFBLAYYYRKCVNKMXUFABOHZGMIFPM");
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
    msg.setTimeStamp(0.0810132898196);
    msg.setSource(15141U);
    msg.setSourceEntity(248U);
    msg.setDestination(46330U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("GVAVJSQWXVPTRLWBTGKMUQFFSLHUNCXZDTSNHWJDCYXCGZMZTWCNGAKTHDEBUMCIFBANTMTJFOBORGBOPNMKWQOYYPFFRLHDXJIRDNCEKUECUMLFIPJKBCCTQXIQUPVJLYWHQHUOVXHIPWZLGKMEPUQPFQNDSPTMNGVDEAZRUNZYERWBBYXYGEDXSXZQAIOSIMYJROQWOSTZCERH");
    msg.predicate.assign("CIDMWAODJEQJJPQCVPUGTFDRXVVHAWSGUDSHVLRKPTKWVNLCNDUPLIIXYNCQLNFMYRHCYNUZYJEXCAQNDJZOKSJINAWUIWHKNKVVVRSYHTHSZFNRPBHKMBXORQBYOUKGUYVIIOZGHODDWEGLOTRGELIYOBJZXUMAZXQAQJSMFQQMVZWTAWPAPMGCXPE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KXQPAOFWFFZKMOAGDRZGWASTNLOCAGKCSLDOVFLXFYFQZJGVQUTTNECNPWBILVVYBJRJXUIHYVVFXWEUUMRGMMQXDPEUPDIDNBOVYCZGSUTXBFBDLAWRMZCMDINRFCSXEKQVZEYEFMHHIYHZKKZERBXCXDISCPHLSNLYHRNITMIJUVQKWRPUQUHAPKTOJA");
    tmp_msg_0.attr_type = 185U;
    tmp_msg_0.min.assign("ETCJZWHLWDYYECPUOUIXDIPGILDVCWJHRUKKXZORMNUINPWAFQCQAPFJAUVDHUXZBSJKCQWVPHSCWJAUEVKYWYGRNZFCQTUTRQSAMBYNBCKMOSSZBZLFLUIMODYBIFWEFHATEVRSXGLDEMFYXRMRPPNSAZVTOTBNBHPYGOKAVDHGTFJXXGMZLH");
    tmp_msg_0.max.assign("VCFQAVYDFGVSYSFOLPNKSFTBYLTQWOUZWMFQSTUCQGPBAVFUTFUHBOWULIVXKZLUIMMUDMJASENOYWQLYNHBKLJXTZIBMPXEBCGGDQEOTDMAACHNXHGETHZOHQADPVTNGILFZUXCH");
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
    msg.setTimeStamp(0.731091984761);
    msg.setSource(29270U);
    msg.setSourceEntity(140U);
    msg.setDestination(5999U);
    msg.setDestinationEntity(159U);
    msg.timeline.assign("CHXCLNNCRJQYISHYBLSEDSQGVDXRWROJZRGOQJMKDNTLZHTPYIPPCSEZIXDJRTTUAALJGSDBFWGLMZQFPABUDGPAOTOKODZWEWQKZXJOECUADRPFPEATVBOFWBRVVSRVFVZWNXKCSINSQJHTDHSUHZUYVUELYBGEPIMYQYUVOKUBKLTMEQNCKGGUHZAKCDWPXJYGITFBJHAINNEMTFIZXOQKBYF");
    msg.predicate.assign("CWMZDSBBCRTQRXQCIPLABOMRTINTUHQLPYSLHLSHFVAJVZMSKSNBGJVCYOXWZJNDYDQQWNRYQLKQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HDEAGEEGBVILLJYYSIAVNXDWDKPRXOWTXPZDTHLEJMTZOQA");
    tmp_msg_0.attr_type = 203U;
    tmp_msg_0.min.assign("GMJBXFNCTWTRKULWDUPNLIIKYKXLRMYFGOZUZTQYIPHEBYJSARBMDCZTKDSWUTQFYNTCCPVPBCSSOMVNDTOWJQXFFEMQDWWLRIJLIYXRVMNAOSKBFOZOHIEOOXDPHARQJHZUAZXGLTJEKKVJXJCMYEXSQPNYZFHHVDTWGIWEZGFBQDTGHYSPEVOHHJGPEZENERLMDGNXNPCCGRJKILIBGABFWQUXQZCFUAVSODWVPAMVUKSK");
    tmp_msg_0.max.assign("ZGMKGIPJQTHUQOMFRJRWOLPAFXHZDOKRKIQMWTIJIBVCPZEVPTSQHLYFHJZAWKKOYMRTSUKWTUAPNZNHFNGCCHSCBNSRLXLNEXHYPOHCOBKFSUFSVMQEWEAECSZBYEDXXYRVGMPCGJVNEWRVTEQXUAZZMHPXDYMRINXTFPAFZDRGVLDMDOEBQR");
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
    msg.setTimeStamp(0.238843100844);
    msg.setSource(7176U);
    msg.setSourceEntity(234U);
    msg.setDestination(51493U);
    msg.setDestinationEntity(39U);
    msg.reactor.assign("FMBDABMFUTDWGIPWSQKVFPTGEJTKDKZSBNOUEJNQRFYSLCVJFSMKBWLZMITUIJUCOMEIEACZYVCDKZRHTFYBIQLDS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HWSMETYQBCIAQTBKRUGMZLXHRPUINGDRCCHWOKVHVVOLJBGSLDMIUVNZBZEQAVAZYYCZWEPSHAZJJYXOYNVNRCPNTHPPWXTUTCLGNJELKIGSFWHWMZIOMDNXESANXGDSHCFMIDKTAOMFSMMTDBZJRKINYRJIK");
    tmp_msg_0.predicate.assign("YNZWETXGRIWCPTVBARGXNIXZEHUEAAZTNGJHLGVVRZOCGDMCSJUYHPHPKMDNVBIMTJCQLAQDQHOMPANQXJXPLOPGLRURNFOZIBSAMDLSJEIOUKVQASWKQFMTCPBKPCCQLVJMSSJYVVKUWFDBFLINLQYYLT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SMEUYAUQXS");
    tmp_tmp_msg_0_0.attr_type = 155U;
    tmp_tmp_msg_0_0.min.assign("FHVGLKTIUHZQLXPGKDRWCKGPWQMOGUNQFZLSXCUKOMEJRTHVXKRZKKVCJMABLN");
    tmp_tmp_msg_0_0.max.assign("ZYPMRZNWBATGBACCVFDYMGILXHYZBOZSSRZDXMBKDKTFNUVOETY");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9042955999);
    msg.setSource(8286U);
    msg.setSourceEntity(12U);
    msg.setDestination(39776U);
    msg.setDestinationEntity(131U);
    msg.reactor.assign("ZYHNVHFJRCQIQZICANIIVOSMWVQFLZJLVJKWWRLZYLATKWUHMSVSRCMVZUOALXWTYVARBCWFNTBMVSLCQGXTALGXNFUEHGFCODOQXPVSGHJPKWMIMPHNGALYMQOJBKJFLIREHEBGOSQCTOFESWMQFGDBKGLZJDRPBYHSPUEDUCNBKDXDEPMTWPUUXQTBTAOGUIYXPYCUKIAFZKDBNPTPYRZJNDUMEN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LLMBRGOWKDIEXPNCRXIVRTHDAJCUWXVYGLTSEGBINFMYADDUOHAWUEGVBHSQSRQXUUTEVHFG");
    tmp_msg_0.predicate.assign("LPKDYHLDCJNFVRJTKRHGEPCHJYPTPSLSUUEZULHYRQGYQRQJKKKZYFAXZYGCDIJFWGXRPWCAUWRGZDTXGLXMVTPJGMETDOHJSCINOZBNQESCKVIHLMQIVZPNHIMRIXEAXLUVIVFAOWNXWATRIFTSBYVLEYITFJORENDJOBBOVDFPHCBEFQVSYHZUAWMOCCXBEQZXHQEBFWYBDXMAGMUQS");
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
    msg.setTimeStamp(0.527580056164);
    msg.setSource(35680U);
    msg.setSourceEntity(229U);
    msg.setDestination(14758U);
    msg.setDestinationEntity(101U);
    msg.reactor.assign("JFQOBCUBNKPMSQGZSFARHTFWEKXPUISWTGSRXXHMHTINLDLIQOPBMYRFOMSRZHDXLFCJPDGEPGFYXCWOVPULZAWNHRDNLOOXTLJMMTWKODNERRVBHCHMAZTFZSZNGNEYXRUJEN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QKNUVISTBJUQGZUTCYAFCITGKSUFIBUJWCGARIGVPNPAEKDMLRSKWFEVGRJUWMZYKDAMFJRRZPWSZXAXFWOZMQDWCWVXTOJQEIRSCELOVPWHDNSXYYYOOEJCLYHPMIBZJQLMHDUINGEOQBUEGSIBBYLEXAXONTFQZNHLMVCKJSLVRXBSPAGWMBHNVDHXAHOPCGLNFJOHKRVLTEIIDNHHLKCYSJPKBEYFMRDAYTGTBQA");
    tmp_msg_0.predicate.assign("YYJLBCYXKGSWUFTBTMWQYDRSZHKUOENHSRNAWERHYSPCLUAFFOHZHNNLWSEPKIEWEKWLENARIDTJJBVIJFKYYAXALOMFEITTGXDXDVSDUWZMROQUWOSFLPULGJMCUIJLQDNGUXNKCLCVOINOJKPN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BNLTWARPGWRQTLJFSYOQEUQGQDRIPMEVVUXNNWDNAZTSRTMBSLMFECHRGOZQGKVYMCPKSAYSCBXZXUSSATGWDHQZURRCFAGCPXVOZHFHDMDLZTJFIJAUIGWWGQKWYOQMHQLKBZ");
    tmp_tmp_msg_0_0.attr_type = 196U;
    tmp_tmp_msg_0_0.min.assign("UQDJXSWBNPIRVVTCUFHSMNNLOQBQMNFCRFWFDARVILPCBKZCSKUSICMCGHYGMXUEPTEPZTQLHGYKJGYQEMCDZRRKOXQLMDPDSMWIOPTIEHJOTQKIYJEJABGDBOJIPJSXLWCQDSJFWFXHYPHRTOVSXBUUG");
    tmp_tmp_msg_0_0.max.assign("WNSVOWMCBIIWREXXDGUDKBOIHUZJVJAKXOHFTCNBJGHUZGGTGNZJHZFQVXYMARDRZDTLRFTMBYVDKRSQYVBWNMZCSKBNIRDLBEOETFKLPMMVWNOP");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.821152146008);
    msg.setSource(62491U);
    msg.setSourceEntity(100U);
    msg.setDestination(26354U);
    msg.setDestinationEntity(8U);
    msg.topic.assign("ZXLILCOAHVBTSFZZCUPSHMWRW");
    msg.data.assign("CZDIFOYJCLXVPOXHOHBRRVHFWSLRHYHNXMCUKEVMAONJTWTAUZHUECSCASQGIPMFYBDAJGSYJPQIQLYSNEYVWKPKIEIBCKCGKAGDVOFZMJHWR");

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
    msg.setTimeStamp(0.0285151632026);
    msg.setSource(5840U);
    msg.setSourceEntity(5U);
    msg.setDestination(49793U);
    msg.setDestinationEntity(107U);
    msg.topic.assign("CXEZEEUSBDFTCXIQNKPYHKZMYEVBCBXRHGNLKJUINRMCZSVSDVFITSFJJNRGGAPECXUBVBXMEBFAQRWBAZEPWVGJWGZZJHQOOIYYTQNNVXLFPHKWQVUSDKXSUPAUAOE");
    msg.data.assign("BGKHPRDFEGLFLSBFQHLSBRONEXZMYKHPTRIWTVZCKGFFJGZVGRXLCUWWQRFLOYUCCPMXFX");

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
    msg.setTimeStamp(0.0458753983947);
    msg.setSource(47895U);
    msg.setSourceEntity(2U);
    msg.setDestination(19930U);
    msg.setDestinationEntity(140U);
    msg.topic.assign("LAZXRFAZJDJPSEBOLZGUJYBNRCBHRCUQCQRIFPULCTGTRODFDVWJKHGOPFINWBQFLTIBQQXZWWUYWIYKVYAZLVPTOIJYSTPMNSAENVTSRBRDDUKHCSZEHOFIXKGVWOGVGOUGPVZAZPMWFMYVPRXAPBSMSYHDDXZTGJASLQELQMGJAFEVIZU");
    msg.data.assign("UMSRIXOKJZAKSBRCAWIGOFXGDGHOGPWNNLJMAYFFUUDNQHMOWGQVYPTKTKOIEPELEMBLUSZFZAYBUOIRQFPXZIRORZJJYNDVGCQIZWNXHVNGZTCCNBJLEUHXYAEGOQJYETVMRTEENPEZOJUAHQLTWBAPCQTHUSXDS");

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
    msg.setTimeStamp(0.728496592231);
    msg.setSource(58210U);
    msg.setSourceEntity(118U);
    msg.setDestination(13232U);
    msg.setDestinationEntity(98U);
    msg.frameid = 127U;
    const char tmp_msg_0[] = {-101, 8, -62, -52, -9, -13, -47, 99, 45, -82, 36, 71, 88, 31, -2, -68, -122, -113, -70, 95, -32, 86, -8, -72, -72, 23, -91, -25, -38, -9, -83, 18, -78, 77, -50, 87, 115, 13, -83, 115, 65, 78, 105, -63, 22, 34, 23, -24, -87, 119, -69, 80, 13, -32, -16, -126, 115, 45, 5, -20, 59, -61, 16, -92, -74, -89, 0, 55, -51, 120, 70, 18, -57, 67, 118, -52, 69, 109, 91, 115, 96, 43, -90, 73, 37, 17, -92, -92, -81, 75, -109, -121, -17, -32, -70, 22, 11, -67, -63, 82, 38, -93, 38, -17, -62, -60, 26, -69, 109, -12, -117, -105, 99, -32, -119, -103, 115, -30, -64, -30, 123, 44, -60, -99, -81, 111, 9, 29, 114, -57, 58, -108, 115, -90, -102, -81, -35, 69, 109, -95, -66, -96, -44, -128, 43, -28, -37, 119, 124, 2, -48, -44, 47, -61, -60, 46, -42, -122, 69, -21, -101, 19, 7, -12, 67, 2, -60, 25, -82, 68, -102, -74, 57, -52, 68, -127, 35, -110, 117, -101, 102, 15, 43, 19, 117, -7, 117, 9, -42, 13, 93, -13, 118, 43, -99, 97, -91, 101, -59, 66, 67, -17, 45, 46};
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
    msg.setTimeStamp(0.298769915705);
    msg.setSource(29583U);
    msg.setSourceEntity(70U);
    msg.setDestination(34005U);
    msg.setDestinationEntity(111U);
    msg.frameid = 124U;
    const char tmp_msg_0[] = {123, -68, -102, -103, 49, 115, -53, -94, 11, 76, -6, -101};
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
    msg.setTimeStamp(0.571031488075);
    msg.setSource(22345U);
    msg.setSourceEntity(86U);
    msg.setDestination(35915U);
    msg.setDestinationEntity(92U);
    msg.frameid = 243U;
    const char tmp_msg_0[] = {20, -99, 4, -126, -24, 42, 35, -19, 114, -55, 26, 87, -112, 96, -107, -32, -124, 19, -102, -45, -50, -15, -43, -121, 100, -95, -105, 61, -92, 110, -27, 89, -40, -86, 72, -107, -41, 27, -37, -36, 7, -59, -92, 102, 1, 78, 103, -12, 44, 114, -91, -27, -8, 84, 84, -127, 118, -25, 4, -46, -34, -50, 122, 11, -119, 14, 12, 61, 53, 30, 48, 67, 48, -13, 26, -17, 121, 6, -63, 35, -79, -81, -80, 9, 21, -56, 16, 88, -11, -65, -128, -25, -69, 50, -98, 67, -77, -90, -70, -114, -51, -45, 84, 77, -75, 39, 4, 56, -21, 29, 102, -4, 124, 33, -38, 82, 89, 64, 36, 67, -31, -54, -31, 2, 44, -111, 43, 76, -36, -86, -42, 80, -105, -114, 53, -127, 4, -95, -37, -110, -32, 12, -97, 104, -47, 71, -123, -60, 76, 126, -100, -60, -3, 32, 39, -45, -39, 125, -120, -36, 29, -90, -119, 88, 3, 80, -50, 5, -52, -97, -60, -118, -36, -30, 71, 81, 30, -52, -63, -114, 62, -122, -41, 56, -106, -43, 115};
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
    msg.setTimeStamp(0.615854341012);
    msg.setSource(55760U);
    msg.setSourceEntity(193U);
    msg.setDestination(39159U);
    msg.setDestinationEntity(26U);
    msg.fps = 73U;
    msg.quality = 51U;
    msg.reps = 121U;
    msg.tsize = 104U;

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
    msg.setTimeStamp(0.578416094551);
    msg.setSource(53514U);
    msg.setSourceEntity(89U);
    msg.setDestination(10859U);
    msg.setDestinationEntity(150U);
    msg.fps = 151U;
    msg.quality = 167U;
    msg.reps = 64U;
    msg.tsize = 1U;

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
    msg.setTimeStamp(0.46168173171);
    msg.setSource(51070U);
    msg.setSourceEntity(138U);
    msg.setDestination(19231U);
    msg.setDestinationEntity(65U);
    msg.fps = 71U;
    msg.quality = 249U;
    msg.reps = 190U;
    msg.tsize = 9U;

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
    msg.setTimeStamp(0.627566824976);
    msg.setSource(25679U);
    msg.setSourceEntity(172U);
    msg.setDestination(34070U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.656857421347;
    msg.lon = 0.478293011536;
    msg.depth = 166U;
    msg.speed = 0.161078303144;
    msg.psi = 0.153391624972;

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
    msg.setTimeStamp(0.939097709356);
    msg.setSource(17826U);
    msg.setSourceEntity(33U);
    msg.setDestination(55484U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.157077843048;
    msg.lon = 0.23925183796;
    msg.depth = 125U;
    msg.speed = 0.445223791819;
    msg.psi = 0.238481542982;

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
    msg.setTimeStamp(0.435695284317);
    msg.setSource(5677U);
    msg.setSourceEntity(144U);
    msg.setDestination(43800U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.149002246575;
    msg.lon = 0.38720663751;
    msg.depth = 63U;
    msg.speed = 0.319795937311;
    msg.psi = 0.158566627774;

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
    msg.setTimeStamp(0.958693254825);
    msg.setSource(11887U);
    msg.setSourceEntity(189U);
    msg.setDestination(53880U);
    msg.setDestinationEntity(154U);
    msg.label.assign("EHAPBGGGPSIZDIMMJEKAIDVVSFDKFBIJTOMNHVSXUUUPHMYZQIRHOBCABYZYJCFHWXVOQCEYLYDDRTXKNAJTLATLNSSKWIWOPSWFFSZQJZBRPFQXFGJEZVCLTRIQEMMGGHGLYGVCRBZMQZQKGAEDHQBPTLTCAUOTLJGWDQAVHHSAVNWFMTYOKCYLDJEICIOKWLSXRPXBNHCNZJUQKUWNTXOCFXKUSEEIBPMRPUKWNYRZVO");
    msg.lat = 0.209906668767;
    msg.lon = 0.108977004129;
    msg.z = 0.914542064365;
    msg.z_units = 231U;
    msg.cog = 0.309068342405;
    msg.sog = 0.259456949922;

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
    msg.setTimeStamp(0.266566932734);
    msg.setSource(2938U);
    msg.setSourceEntity(93U);
    msg.setDestination(14724U);
    msg.setDestinationEntity(235U);
    msg.label.assign("YDZWXCTKNTZJFYIEWAGSJFJIPKIKVRYQAZCTLSGCCETVHBATRYCWXHLEOFHLPIQOSFWSAMTLMYUAGGFG");
    msg.lat = 0.19180782091;
    msg.lon = 0.169259034771;
    msg.z = 0.963550968465;
    msg.z_units = 222U;
    msg.cog = 0.856892283721;
    msg.sog = 0.931084427153;

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
    msg.setTimeStamp(0.563302078589);
    msg.setSource(51932U);
    msg.setSourceEntity(59U);
    msg.setDestination(60379U);
    msg.setDestinationEntity(146U);
    msg.label.assign("LDOBLHBAZCAUURDBRECHSUOTKAGQKXRWJQNEKTAKNUVWAINZBLDTZVAPXWPPSCLIUFFQHYGZEYEXRLFVIFICTFMDUNIMJCQ");
    msg.lat = 0.351845365178;
    msg.lon = 0.556333538971;
    msg.z = 0.0577435498737;
    msg.z_units = 157U;
    msg.cog = 0.726697797331;
    msg.sog = 0.274869377994;

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
    msg.setTimeStamp(0.145314756163);
    msg.setSource(29544U);
    msg.setSourceEntity(44U);
    msg.setDestination(5573U);
    msg.setDestinationEntity(95U);
    msg.name.assign("DEPXXYGOUZADQHGTXABDHQINUJFROSYDGDMLIYQSBSKQASNCJGFNEVXVRWECOUYEUHKRLNILKMFZEXMHPIKLGDVICUHTPJUZHOZJZJHKRMOEBKTJZYESHDPVPVLCRBZNGKNLJCFLLMPOTHZBYBJC");
    msg.value.assign("HDROBQGVJVPMXLVNKHXNTMWPJJARLCHDQINEWFAZUFQRRJRQOKBHGCAOUUBCVONLTQZONDWUFYZTBYBEZTEVFKOHEMJPUTCSUVCVZUMIXGRPHQQTDSSSZGNXBYZXSWMPLLECZLDC");

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
    msg.setTimeStamp(0.451925680535);
    msg.setSource(62491U);
    msg.setSourceEntity(185U);
    msg.setDestination(43952U);
    msg.setDestinationEntity(204U);
    msg.name.assign("GHNERJQHNCKKXRRWCGRRHWTFCQKNMFLPIEO");
    msg.value.assign("GPVUZUUQKEEZXYDOCTMMITVWKXRADWIMGPHFRPHWSZODNEOKBLPVNMMBOWPTMKLUUDYXQDSHWAOUHNVSRJKZLGSARYVLCJWOCJMSRGHMFFOZCLVCLRRTIIJINQXGFNNTZKTGCKTXJTEFOOEJYIJQXLTWNYCFFZNJDBYNXF");

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
    msg.setTimeStamp(0.802311282451);
    msg.setSource(2291U);
    msg.setSourceEntity(105U);
    msg.setDestination(1988U);
    msg.setDestinationEntity(202U);
    msg.name.assign("WTHDSBWHSVMIZHZOIWZQNVNYFQUTPJPSVEIOCNIXGFZWOQBHRYFIQKRDCKAIKPNMDTQASWAVMGJLRYNORNCSUUFPGJWKRZTKJFBGJXJXAAAANOUMQMQBDZDWFSRGGJSVWZEPPQREDEMWRPBUTINGSLEOUCXFQBCLCBZCH");
    msg.value.assign("YJFEDKQVXXIIKTDYGSLOXPRFABRZUOSKLGHLUYFASMBQZTUAIVAKBXKLZXLSRWIDPIHNWOJZBNMUJVPXHDTVLSLBMERGAJMTYEWUPFBTDFBNLPGCTICEJUBIE");

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
    msg.setTimeStamp(0.494829969897);
    msg.setSource(44899U);
    msg.setSourceEntity(208U);
    msg.setDestination(33384U);
    msg.setDestinationEntity(112U);
    msg.name.assign("FKXKOMTKELBVHYHCWCUHKCVLFIALJIQQQXTLRWHXXQVRPXWGRWNKFOUASZBYJHZJUVCVOKCGNOHEUYLAIRSKWUASAYXPNPCB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HDFYGSGPKMVRKLZIZHNRFYGZUIBEOCNRLDMMNQBRHKYVULHDTKQTEBHSXDADNCLRUKUOMVHWNIKAIJUJFIZJCZSUXSFEDNATHNQAPLSAJIVFXCCGYDFEWZRSXOWWGJISZOPNBBTIYNZCOWTKS");
    tmp_msg_0.value.assign("CBYCPJGNQHZWABPJGIQFPZIMRHBJGNJJAVNAZZDAWGERUQILXKDBCPYLCVLTULZCMGIXWDHFEPFELEUKVNPXTPYMHJGHSVGZVDZXNVRSDKNSMINXR");
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
    msg.setTimeStamp(0.747402732833);
    msg.setSource(48617U);
    msg.setSourceEntity(237U);
    msg.setDestination(12805U);
    msg.setDestinationEntity(196U);
    msg.name.assign("GXSMBVPXEASFGFLTZVKYZIRABUJUHIXERCYLYOJBTDJSKUQUICWMVRXFSTFDMHJQVWKCXLPKHVIWQYCPI");

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
    msg.setTimeStamp(0.327880806827);
    msg.setSource(17051U);
    msg.setSourceEntity(128U);
    msg.setDestination(46943U);
    msg.setDestinationEntity(110U);
    msg.name.assign("IGOTHRDALBVLZVPKYOCAFDOQKYTLKUTGEYHEVWCVNL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LESAPRPVAINLXUWPFVQVDFFNRLYYMYQ");
    tmp_msg_0.value.assign("ZSKLIROPEQEMRWGBYWUROHTLYLFYSCXUFQAVCFNLSYVAAIBQJHODQVXVJPDVOPZWTVCCHGTJIRKEQIRBGIZGJNCXVPZEWZROAYYUNGHSXMVZNTIHIQBOGTCOPHCJKIUVTXYDHMXNQYJRUDPFNARWEJCFNWGFLXGMZCWFQSMMBZKVAAFKSMJEHPEUFTTOKLXDDCISMZLWNXJYUJTRULQPPROOKBBWDBALDUS");
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
    msg.setTimeStamp(0.852036719003);
    msg.setSource(17269U);
    msg.setSourceEntity(171U);
    msg.setDestination(44091U);
    msg.setDestinationEntity(50U);
    msg.name.assign("ZHYCDSUYWUKMPCXBZMHRVEETBEXAPRWCPAXUJAZYUXTHAJGIZRNTDIFLKSWFCAIXADMOSNCLIZPSDTAJNVYIJBHPQSGKQLBEXYWYLMGRNKMUQEOYTTMYBGLONFVOCMQLDSWYKKVCLHSTPINPAPDOPGOLPFDQDISRWBSJLQSZQEEXJODOBNUBTGNJGNJOKWCUBVFMCVFZMFJXXMDGTRUHVOFAXLKWHHGHIZURV");
    msg.visibility.assign("ICIACHBLVZQGZXQPEDHHGXFRCWVPVZMPYPJLKLXZTUYIKIJRZAMPYMHWWAHGFTWXQBEWSVOLOPFNLO");
    msg.scope.assign("RGQDGHWNAHCPFQMWDJMLXIRRUYILBLGPZVPZBFMVKEJUGSOKGROAZAMTRNCHINDYBJXVKRZQXNCGJGUAIQRXIWHAZDWHWON");

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
    msg.setTimeStamp(0.973801332164);
    msg.setSource(403U);
    msg.setSourceEntity(36U);
    msg.setDestination(63667U);
    msg.setDestinationEntity(116U);
    msg.name.assign("BDRQRNBJOADFLPVCDTNSWRIJWUQRDEJAQPWOEBUXKQJMPTWJIKRYFEVUUERYZFYMQTTAGCHOXNFHJG");
    msg.visibility.assign("TQWVXKOHECFLWKMHIAJJSVKDSDYNTUHREVLEXEZUDGLS");
    msg.scope.assign("VONLJKVASBYGGIGXMLPKEZKDYHRZJFADXACUYBUYTMVKABGWCUSBZWTZPYMCTMVTKQGOQPZVU");

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
    msg.setTimeStamp(0.793784314666);
    msg.setSource(56756U);
    msg.setSourceEntity(13U);
    msg.setDestination(34800U);
    msg.setDestinationEntity(119U);
    msg.name.assign("QMNQIVODZQWBGKJDUZQKUTHCBRDRYZEBMXINQNUTFBDJKIDWAJYHSSLDYXVEPKCHYROROIMXYVGGPXTFXLTHOXEAFTNAAVTACZAOBLLMCZJCOONQKHDWIFAZHHWJKSNMAWXCMWRFPYWMJVIXVPIPSPMGCPKSYRUN");
    msg.visibility.assign("PQRZKLQWWNOREPMUBPLCVOBDJMKFRPAOXJEHXMFOMZACGQKUZPOYMXGHSTTDAFNUGSXQNLXDDZFSAJWKBIQNOEBERNJKLBVYQMPIVJUDBCCXAFZOXNKWRZWEKCSHBT");
    msg.scope.assign("UKCLSWYWSLAPX");

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
    msg.setTimeStamp(0.68521095902);
    msg.setSource(50336U);
    msg.setSourceEntity(18U);
    msg.setDestination(24322U);
    msg.setDestinationEntity(94U);
    msg.name.assign("WKBHPZCAWHLFHAEQTQLXAKITGODWXDNBFAIODAZLTPVMIWYPVEXXGHSJLECZFKWGR");

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
    msg.setTimeStamp(0.774871238351);
    msg.setSource(9490U);
    msg.setSourceEntity(120U);
    msg.setDestination(63464U);
    msg.setDestinationEntity(59U);
    msg.name.assign("UHDLVPISJUDBTQIPGDKJNQWGVGTRCWIIRUGYGFPXEEBWWAJHPEMGFJXXATWNQRXKFSNDRONDCDCJALSPESUXKVMVFSGHPDVCVNVYHQBSJUKYOULBWLOZWYJKTTCXADAZNPIRQOYKYFMWLLURINMZROVMBZECRMRRTVMSXHTSQCWZAIYSJTNHFZZDQLAOYPZFHEGQECWOTGHPVILHQKUGNIBXEYFEBXBAUHMUOKPSQB");

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
    msg.setTimeStamp(0.80117213831);
    msg.setSource(58242U);
    msg.setSourceEntity(252U);
    msg.setDestination(30311U);
    msg.setDestinationEntity(228U);
    msg.name.assign("VUMSDYEVOTZSDISFKLLFXQXCAONKWVMDBREAJINZFHWFBQKFROZCKBHGRPPCYYLCRSUEGPXCYSKGNMLIIQUGAKFNBZUTNZYECZPLYNCOMMIBRDKOMWBWRWQJBEQCXVZFRQVHWLIT");

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
    msg.setTimeStamp(0.269450681418);
    msg.setSource(47832U);
    msg.setSourceEntity(85U);
    msg.setDestination(47704U);
    msg.setDestinationEntity(24U);
    msg.name.assign("QIYVSQBJRGIYQLPYFGHZAPCTUTZSZAGNHTGQKWCWLMYGOVEDITAEVJUDRUWVDSRJEOIADEUTGHCJERXRPL");

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
    msg.setTimeStamp(0.186614321942);
    msg.setSource(62663U);
    msg.setSourceEntity(0U);
    msg.setDestination(55613U);
    msg.setDestinationEntity(180U);
    msg.name.assign("EVGXRZXAWSBIXODVVQIFOENUVNPGJAJZEGJOFPUKMKHQQIHCCFOLXIERKCFCYRMTZXHYUKRDUUSZQQTTXFKJDEQGBDCGRFZMDMUWMBDADQYYARUBWXYAOPMUBJNLWLAWLJCIFHKNTGBJYPGGTLYQIYVOSEZUWZMSONDVHEMNKOMDTNKAXSVFBDALIFBGZGNSZIFCVPBPLKP");

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
    msg.setTimeStamp(0.871154900151);
    msg.setSource(9464U);
    msg.setSourceEntity(119U);
    msg.setDestination(35895U);
    msg.setDestinationEntity(76U);
    msg.name.assign("VSBFWATDQMGCYIEZWCQKMBXKISGPDQWVZNEDNGLHMCIPJHBCVSSCECXBCHQUKIIALEQCJJLBEYSHVKHZPKCUVZFRVGJWHZWETGRWMAYAZKNNQYNXIPDOJTWUSXILOPRFFOMPHNTBBKUMOOAGTTXXORPRYDMYFGMLIUFHWAVVTHJJKAMYXPDOFJAUQAUD");

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
    msg.setTimeStamp(0.567605592906);
    msg.setSource(16389U);
    msg.setSourceEntity(193U);
    msg.setDestination(60142U);
    msg.setDestinationEntity(239U);
    msg.timeout = 1478579145U;

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
    msg.setTimeStamp(0.481035604221);
    msg.setSource(10996U);
    msg.setSourceEntity(181U);
    msg.setDestination(16003U);
    msg.setDestinationEntity(175U);
    msg.timeout = 3056842242U;

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
    msg.setTimeStamp(0.177788035441);
    msg.setSource(28542U);
    msg.setSourceEntity(116U);
    msg.setDestination(45209U);
    msg.setDestinationEntity(178U);
    msg.timeout = 3266647331U;

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
    msg.setTimeStamp(0.799024393284);
    msg.setSource(5509U);
    msg.setSourceEntity(167U);
    msg.setDestination(30796U);
    msg.setDestinationEntity(89U);
    msg.sessid = 302450387U;

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
    msg.setTimeStamp(0.406905204299);
    msg.setSource(44853U);
    msg.setSourceEntity(150U);
    msg.setDestination(29066U);
    msg.setDestinationEntity(240U);
    msg.sessid = 2768190216U;

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
    msg.setTimeStamp(0.107717201297);
    msg.setSource(28119U);
    msg.setSourceEntity(13U);
    msg.setDestination(11382U);
    msg.setDestinationEntity(244U);
    msg.sessid = 2194681039U;

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
    msg.setTimeStamp(0.745804384243);
    msg.setSource(55488U);
    msg.setSourceEntity(238U);
    msg.setDestination(33744U);
    msg.setDestinationEntity(148U);
    msg.sessid = 174061415U;
    msg.messages.assign("UUSVJIRLSXAGMHTRGIHOVWTOYPZO");

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
    msg.setTimeStamp(0.0139154767346);
    msg.setSource(2086U);
    msg.setSourceEntity(176U);
    msg.setDestination(22748U);
    msg.setDestinationEntity(201U);
    msg.sessid = 231674487U;
    msg.messages.assign("NGPLJNMSJWCXFAIPEQSMCPWAEXOQDRPRRFMFNDIXZVPTDTBARHLWCGOAEDZKVVWQCZLYGWKBODLEZUTXKYFIJNXERGRNBYJAHQRJWODQIMFYMSZZDIULOGULWHGBIECKHTDAWHTQNAUNJYXBLKFBGQKOTHYCGEADSUBJSCWQVYCGUPTPVPBZIOBHTSRAQNTFEBUXHSEDIASJKVEXVULJZXVVFMTGKLURJZFMPXOOI");

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
    msg.setTimeStamp(0.0416031706197);
    msg.setSource(62953U);
    msg.setSourceEntity(223U);
    msg.setDestination(7005U);
    msg.setDestinationEntity(88U);
    msg.sessid = 1729613740U;
    msg.messages.assign("JIQENZDMECMODVWPDRLIBSQSFONGRGUFZAJAVOVTQEQAKEAJDNSYHLZNWYHFGHKIXLRUHEKJBZBVQDZIBQVJIDJRFNWRK");

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
    msg.setTimeStamp(0.0964078722673);
    msg.setSource(7021U);
    msg.setSourceEntity(25U);
    msg.setDestination(18155U);
    msg.setDestinationEntity(109U);
    msg.sessid = 1980318970U;

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
    msg.setTimeStamp(0.56069147178);
    msg.setSource(40789U);
    msg.setSourceEntity(110U);
    msg.setDestination(39334U);
    msg.setDestinationEntity(28U);
    msg.sessid = 846738579U;

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
    msg.setTimeStamp(0.647948376425);
    msg.setSource(45700U);
    msg.setSourceEntity(185U);
    msg.setDestination(16425U);
    msg.setDestinationEntity(242U);
    msg.sessid = 1081525417U;

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
    msg.setTimeStamp(0.259954149772);
    msg.setSource(8042U);
    msg.setSourceEntity(222U);
    msg.setDestination(33672U);
    msg.setDestinationEntity(23U);
    msg.sessid = 1443646129U;
    msg.status = 231U;

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
    msg.setTimeStamp(0.9796024503);
    msg.setSource(25598U);
    msg.setSourceEntity(251U);
    msg.setDestination(64430U);
    msg.setDestinationEntity(143U);
    msg.sessid = 1453219580U;
    msg.status = 151U;

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
    msg.setTimeStamp(0.439889599635);
    msg.setSource(62025U);
    msg.setSourceEntity(65U);
    msg.setDestination(18052U);
    msg.setDestinationEntity(114U);
    msg.sessid = 3325974386U;
    msg.status = 92U;

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
    msg.setTimeStamp(0.246810964888);
    msg.setSource(23032U);
    msg.setSourceEntity(104U);
    msg.setDestination(57669U);
    msg.setDestinationEntity(112U);
    msg.name.assign("FKIEQPMNVKQRMGPCFHDPOKUWLYXUZSYYCYQGDXNOBFJUJOUTMNZJSTTHZVICSGDCWXNLJYSGDMLEHTAMDJKIXUTUQSAYWHMONCDWVNAYPRYICNHEAXWSGLIETFBPTQORRBUBWKAGJZDENMDZDPVBRICMHQZHVETGBASWNULXSBWPRFOFRXFFKVEMOIOXVXVQCKELGLFTNSJERJZWZA");

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
    msg.setTimeStamp(0.761457428315);
    msg.setSource(60185U);
    msg.setSourceEntity(96U);
    msg.setDestination(32182U);
    msg.setDestinationEntity(104U);
    msg.name.assign("ADKXRKQLSCBPNETXTHYTJHVWONTWRGEYXSQFSFLWCPOHCSUEAXHLGJVHNVTEQLJYEIOYDIODMKZFIBMGSRMZBWPONOD");

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
    msg.setTimeStamp(0.621219492787);
    msg.setSource(44983U);
    msg.setSourceEntity(143U);
    msg.setDestination(25886U);
    msg.setDestinationEntity(174U);
    msg.name.assign("YOLAORGJQKVKCTYISGQVRSANYBMSNDHOPKHGPELEFICXEXMRYHTQCJORBEOFTZVOGUIICKTATDRPDNXCPVNKUAIKPLPKCFTXBBWEUMCQNIYPXXKRBSALHIUBSYJMWDFJZYZVBFQZLJSQDAFSPHCVBIMRNLQZVWMGFHPZHUDJOGMHSUCLVLSIQRYMEERDGNJBKXWWEOUCUMZXWYWLXFTWFAFLDJEMSZARDUTWAONWOG");

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
    msg.setTimeStamp(0.287508306953);
    msg.setSource(14725U);
    msg.setSourceEntity(207U);
    msg.setDestination(9241U);
    msg.setDestinationEntity(118U);
    msg.name.assign("OAWXJFIWOQMDERBFRJGLAYVDUJRKNWTRAYVFGOEUAXVUBPPMWJOWVNTZDVCZFXIJLKSSSRXMIHMEDQFFCQKITFOKCHPNNGDXBHWNXOEMHCAFSTNSUCMGFMSZNZVCQSZNP");

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
    msg.setTimeStamp(0.631913914939);
    msg.setSource(10436U);
    msg.setSourceEntity(182U);
    msg.setDestination(16557U);
    msg.setDestinationEntity(238U);
    msg.name.assign("TNNDCYQGKFBAJLBRAOYGHBIBJUFSSVBLWKSPPHGCAQXWNYROELXSZJJMLFABPRBRJMBMWCQJWNZCRISKXMYGUSTCIEDZOPOVOGCCNUHKZGRBFUSUWGYCDPBEVZJONAV");

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
    msg.setTimeStamp(0.151603618786);
    msg.setSource(51391U);
    msg.setSourceEntity(82U);
    msg.setDestination(3755U);
    msg.setDestinationEntity(26U);
    msg.name.assign("BHPXNFVCKINVQOQIFYZEFBEHUNIWXSQIGTVXPZOQCVGPBNTMCLRASGYZUQMQQZEJVKERJUCTWEOLTEDGFTMORDHKCXAMYFPYSOWFASFZEGSLJUJTVLYNRHKONGCWAZHURTANHIVEZJKWJSLUJFMMKSICZNXYURWSMCPNBFBDZIGVAAUTBQV");

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
    msg.setTimeStamp(0.829831077919);
    msg.setSource(34995U);
    msg.setSourceEntity(125U);
    msg.setDestination(39545U);
    msg.setDestinationEntity(82U);
    msg.type = 180U;
    msg.error.assign("LYVYSRZLAKNQKNDBECTPBHBYVXOVGARMABINQWFTLGPXZBKHTFPCULVFPEQOBCYGAHPFJKSFGWOXNDMOONDKJARLBOLKXXIZPJNMKXCUZJGUDCDGTMLRUSBACKQOUUQFSWRUTWLVMYTHJIQZENVLDHVIEVKGOHASJPHUTIGJKIAID");

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
    msg.setTimeStamp(0.9977088547);
    msg.setSource(61471U);
    msg.setSourceEntity(226U);
    msg.setDestination(16976U);
    msg.setDestinationEntity(75U);
    msg.type = 23U;
    msg.error.assign("DCGQDRXUDQPWLASBYKNAGCFKNTIRWVLKWTXESCYUBYOUPIYOBRLPZDWXEDSXERPAZHFIFQFQMMPLJXOQITFZSJMCEDMPZFIGWYOLCEETZTTGALJAZLNFPACNZKJTQRSBHQVYADJIEHHREAXLUKQBVWBQBXUVHYCUFNJGZWOUHJYXHNVBDOERYBGWIDVIGLMHMLITPWUVVCQMSGANKGSFCMKOONIEOJRNS");

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
    msg.setTimeStamp(0.723330856429);
    msg.setSource(3254U);
    msg.setSourceEntity(96U);
    msg.setDestination(26947U);
    msg.setDestinationEntity(209U);
    msg.type = 137U;
    msg.error.assign("ECEVUXPAGMTARTLVUIOMYBDEJMXIGQRRADKFTYLIUEHOUOIXGGBPISJFHZYUVUXPTEHLAZHNWGTYSNVUWOKCTNEUJRZMIBQQMCAFWOIBWVBAKSPWYOSDOFXZLJMRRSWFPD");

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
    msg.setTimeStamp(0.681216979699);
    msg.setSource(15870U);
    msg.setSourceEntity(42U);
    msg.setDestination(20057U);
    msg.setDestinationEntity(151U);
    msg.seq = 42151U;
    msg.sys_dst.assign("LZGXSIJYSTSYAXDSIKELJSYMHGMSTUFTVTZMUNFLQPQYPTCZCBICUDQOXUHWERAESMQUKXPRUYZFAUOWCKCZZOBHNIWJXVAVGBCDKHVIHLBYRFABOCZNHHLQIBNIKCPBSIEMDOGWGSWJVDLPRMKXWWWEXPJDBOFZQTPVUYLDBRVGARNHTIDHVNCYMYGQMENLVRZSLJEVMGQTUFZTQRMYFNBUONJWATDOFPGDRXOJHFOPPAACERIKLFGKAXN");
    msg.flags = 180U;
    const char tmp_msg_0[] = {47, -24, -107, -30, 50, 90, 19, 58, 79, 106, 14, -8, 8, 100, -56, 93, -28, -48, -109, -33, -21, 11, 11, 31, -47, 45, -102, -52, -104, 26, -12, -128, 43, -122, -96, -27, -70, -74, 60, 106, 31, 98, 100, -98, 87, -38, -112, 73, 59, -6, 10, 72, 7, -3, 34, -86, 59, -114, -121, -57, 92, 53, 77, 42, -10, -47, -74, -115, -101, 2, -60, -45, 75, -127, -86, 35, -85, 15, 117, -10, 38, 57, 89, -9, 42, -97, -103, -47, -87, 29, 35, -79, 0, 25, -21, -31, 114, -114, -14, -96, 38, 34, -17, -51, 76, 8, -7, 37, 37, 70, -21, -78, -65, -67, -88, -118, -6, -51, 28, 60, 94, 30, 9, -31, 102, -2, -120, -34, -112, 8, 18, -82, -94, -36, 107, 5, 77, -126, -19, 94, 16, -8, 34, -84, 5, -48, -15, -18, 42, -46, 98, 7, -46, -29, -4, 97, -64, -104, -60, 91, 0, 47, 126, -68, -120, 53, -31, 100, 87, -19, -115, 71, -60, -74, -36, -124, 112, -26, 36, 50, 76, 109, 83, -28, -7, 59, 64, 69, -94, -99, -75, 55, -61, 96, -95, -44, 12};
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
    msg.setTimeStamp(0.194836522385);
    msg.setSource(61974U);
    msg.setSourceEntity(50U);
    msg.setDestination(61051U);
    msg.setDestinationEntity(72U);
    msg.seq = 35736U;
    msg.sys_dst.assign("WEMVYNUIECGFUMLCXNBTPRRBDJZCGETTMLLLPNRYVDRRZKJKSNFCVFOULQQVOJPYPCDQYKJGNZHWSTWOIENPKZLRRWFPGVTAJBKWYBBSSJFIUMPZFWGGVUUAXUCYMLSOSPXATURCBVHQFEXDEWBDQAMIDTGIIBFQTNEXXOIWSVYRXHVOZOLCIJDQFQZMHXJBKOAGYTAMXMSQPWUINJKKHYADSNHEZCPROZHEOIHDUHGTWY");
    msg.flags = 47U;
    const char tmp_msg_0[] = {115, -100, 18, 73, 50, -95, -37, -3, -70, -105, 115, -50, 62, 41, 3, -99, -23, -61, -15, 75, -86, 82, -110, 60, 22, 3, 94, -45, -64, 107, -10, 62, -2, -34, 94, -48, 79, -70, 32, 61, 30, -101, 100, -32, -9, -64, -1, 121, 57, -34, 95, 28, -116, 78, -17, 72, 99, -57, 51, -114, -80, -60, 57, 88, -61, 121, 76, -17, -78, -58, -38, -78, 84, -109, 19, 118, -88, 32, 95, -117, 63, -39, 121, 25, 68, -77, -61, -39, -52, 30, 91, -106, -69, 36, 75, -3, -125, -59, 60, 35, 56, -13, 56, 43, -69, 14, -99, -23, -109, -84, 23, 94, -114, -68, 112, -6, 83, 53, -26, -101, -67, 42, 0, -29, 32, 60, 61, -104, -123, 39, 21, -105, -37, -68, 17, 10, -91, -114, 98, -33, 72, 67, 35, -29, -42, 15, -25, -28, 83, 20, 10, -31, 6, 100, 66, 5, 63, -109, 12, 4, 100, 105, -118, 8, 86, 26, 34, -26, -32, 29, -9, 85, -92, 41, 8, -93, 49, 64, -48, -125, 34, 90, 114, -34, 28, 107, -103, -9, -63, 79, -83, -51, 74, -116, 63, 49, 125, -26, -38, 70, 68, -44, -98, 51, -62, -86, -74, -73, 96, -16, 61, 112, 19, -114, 65, -123, 87, 17, -124, 55, -1, 123, -112, 19, -103, -90, -67, -14, -2, -54, -98, 82, 104, 99, 62, -42, -81, 73};
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
    msg.setTimeStamp(0.994913105243);
    msg.setSource(24768U);
    msg.setSourceEntity(101U);
    msg.setDestination(54253U);
    msg.setDestinationEntity(141U);
    msg.seq = 59455U;
    msg.sys_dst.assign("BPQGXLQWRCPCJWNZYAFRSVRUHBWPBR");
    msg.flags = 167U;
    const char tmp_msg_0[] = {-45, -3, 0, 51, 58, 91, -25, -74, -1, 19, -27, 66, 81, 39, 11, 14, 116, -51, 68, 115, 96, -120, 110, 107, 11, 59, 122, -116, 121, 97, 21, 48, -53, 50, -73, -32, 13, -22, -41, 88, -75, 125, -29, 10, -27, -15, -63, -20};
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
    msg.setTimeStamp(0.782146722071);
    msg.setSource(17687U);
    msg.setSourceEntity(143U);
    msg.setDestination(45476U);
    msg.setDestinationEntity(182U);
    msg.sys_src.assign("SPUJVSIBHOZFKHPKUTNBOMAKCLQQKXZQTPLDJKCCXXCJEZOYNFFYGYVEIDMNOMSMDXSWJKHNTIRMLJPXZSVBNFOWATEWRADYLHRCETMWOYPUNATJQBGSLVDFYLEQIAQQSQTWWBJUOAUGENOIUFVSVIPIADULRZUBPLNEHGZDYKJYEXMKFAHSMVCRXBGERBWFPDCJRKZBOETRQGPXFXLTDZCYIKWMXRLZISUAVNCVNZJQGPCVHWDWGH");
    msg.sys_dst.assign("EPCKUMURHEQFXILNJYONKGSOPQMFTDIURKBCXXNNGSAQVDRFZSDBNNDKZKJFNGRAWYSRJOHCCKBJPGOHJVWUNFTRHIVBJAZYTLUQGFMONQVGIHPEEIHMZGCCUJOKIWSXWEVYFCLUBSWDPTGPIFEVBWVOMAQRULJDMDKBVRDRLSXSXBTMPADAZTQZXTUEKIEYKJLALWYSJHVRQYVTTMWFCBWHAZTQCPGP");
    msg.flags = 134U;
    const char tmp_msg_0[] = {55, -5, 34, 58, -97, 82, -113, 83, 65, -54, -125, 91, 64, -20, -125, -9, -17, -89, -89, -69, -56, 35, 84, -20, 124, 43, 77, 113, 72, -100, -95, 52, -105, -27, -47, -39, -123, 12, 77, -107, -74, -20, 126, 114, -67, -59, 59, 94, 126, -43, 53, 61, 90, -9, 96, -18, 89, -37, 96, 103, -56, -7, -24, -101, 120, 99, 65, 119, -23, -32, -7, -104, -10, 78, 94, -107, 82, -61, -104, 103, 83, -3, 81, -98, -35, -118, 88, -28, 72, 93};
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
    msg.setTimeStamp(0.227897529514);
    msg.setSource(44191U);
    msg.setSourceEntity(197U);
    msg.setDestination(61126U);
    msg.setDestinationEntity(163U);
    msg.sys_src.assign("ZSENEVMCFEPTVZHBDMTWZRFHYUYAHYSIOGLEMCLVJWFNTHQCDZMJCASXKUKGYVXVWMPOHOFULIALPAGWMKVZPUVUBOFNNLJHDAFDLYRBADDRXRTPOKCQNBNGQDC");
    msg.sys_dst.assign("AWMJACSUFCPXRDVYPUAYSRIZBTOXYXCDOYGKFLHPPWMRCTLFLTZNHOCAQVMKFIDVZDTSOUQWBHYUQQTRWMKWNJKKEVMQOTFOSABCR");
    msg.flags = 81U;
    const char tmp_msg_0[] = {120, 100, 115, -59, 112, 60, -15, 78, 48, 45, -67, -67, -8, -45, 24, -11, 6, -9, 57, 12, 111, 8, -101, -29, -88, 86, 18, -52, 111, -123, 28, 65, 86, -41, -123, 43, 66, 3, -33, 63};
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
    msg.setTimeStamp(0.683579527715);
    msg.setSource(3429U);
    msg.setSourceEntity(166U);
    msg.setDestination(47872U);
    msg.setDestinationEntity(76U);
    msg.sys_src.assign("OBTNOAMCZKQRWPHDUDDGCZHIGFNOBTQECYNAHCFFXJSMRLBVRJEGGTVGINYRDLNRKPAIEKYBTBGWSRVDYCCUWMDZKBLONGHEKHLZMZOYFMSPNYANULZTIRUXAKTXWOKSEQECGYNTPZUZQJXOMVAPGQWVPVQXEOPCLYSKXAVLWPDWPVWKOZRUHBQPDFQTFWJXLCMXVSFRAJSIHHIBCNX");
    msg.sys_dst.assign("IZVBUCPLIXLMBJDEPIJMYIZABDQUFBFDRZVMSPCRIEHXPCAUHVEPTFCMWWS");
    msg.flags = 102U;
    const char tmp_msg_0[] = {65, -76, -74, 60, -79, -90, 59, -79, -97, 4, -51, 28, 106, -112, 109, -102, 111, -111, -121, -70, -124, -85, -59, 32, -2, -66, -88, -68, -76, 14, 45, -21, -74, 98, -74, -47, -6, -120, -65, -108, -17, 29, 6, 60, -98, -26, -64, -86, 88, -102, -4, -49, -13, -50, -105, 65, 88, -48, -39, -44, 5, -71, 122, 16, -70, 58, 7, 8, 102, 44, -17, -104, -3, 83, -82, 119, -48, -103, -124, 122, 126, 43, 35, 91, 74, 111, 7, -110, 57, -53, -90, 125, 82, -53, 36, 93, 82, -113, -8, 115, 39, -85, -128, -74, -3, 107, 74, 42, 16, -94, 126, 12, 9, 11, -96, -104, -59, -32, 63, -9, 78, -40, -61, -89, 100, 9, 33, -88, 117, -70, -35, -102, -18, -67, 112, 23, -112, -86, 3, 40, 72, 65, 67, 103, -27, 76, -57};
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
    msg.setTimeStamp(0.982576836248);
    msg.setSource(13623U);
    msg.setSourceEntity(213U);
    msg.setDestination(19881U);
    msg.setDestinationEntity(21U);
    msg.seq = 12839U;
    msg.value = 56U;
    msg.error.assign("HCEVFRVGRPWFJERQCSOEOZBYZODSMTCTXVSYPNKIHIGALNTUJNJMBSWXFOLAVJWZFJIVTGMYWIMQQRUSHYDPUEQTCBAKBWUNCUPMLLHXGRGHFCKIMRYAXSIHFLADOZZCDJDLBXKXNQWRLFVUKVNTNBLTOOPPCTEPNDBDYEQZZCCXRDGPOMWSHQKQTUBWSSRRGPEVEFLDE");

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
    msg.setTimeStamp(0.530240636276);
    msg.setSource(11004U);
    msg.setSourceEntity(156U);
    msg.setDestination(31148U);
    msg.setDestinationEntity(189U);
    msg.seq = 15965U;
    msg.value = 136U;
    msg.error.assign("AMGUIPJPVTNVLIACJBRYRDQOEASENPZSHDXCPIQYQRVHCJPZTNMTHDEFOSGDJQBDYNUZSWXVOYTNILUHYSGWFLOSKKSJBOLHWVYWGYYENXJFCMSRBULZFHATVOYTBDIWQKOKNJWNLRWMICDAHWXLVMPLXNFGLHKKWAQFGACXCRZXTWNDKQKUFRXKSOOBEHEGUISHBEGGVAQJZDZQJJUKEPPFEUFAARGMZEIMZCTVPOQ");

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
    msg.setTimeStamp(0.282810959796);
    msg.setSource(2520U);
    msg.setSourceEntity(125U);
    msg.setDestination(9394U);
    msg.setDestinationEntity(112U);
    msg.seq = 18950U;
    msg.value = 165U;
    msg.error.assign("LRVXCJNYMYAAEUAIRYYGDJGCFXURZGMSDSDTJDETQSTDEKENFEASEVNILZHNQZVWGHNJORXPCEXORHIPVTBUZMUZTLFQWAOPGHTNJCISWQEHSMAMHBZWKZPQFARAMKBXFCGDBLCDJQKLUCCFNMJNTXTLRURXBLJXIYOZDNKGJSKYOOCIYWMIQGWBGBTLVIOVEBUHEPX");

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
    msg.setTimeStamp(0.530418959399);
    msg.setSource(47542U);
    msg.setSourceEntity(49U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(217U);
    msg.seq = 16998U;
    msg.sys.assign("ZQDGUMLLTPAKJDGPKUBZYVQJNBEICZWHYQDWERPBTGFURLYNAUFEJSMNDXWZWBKOJRCUNCEKDKTXMYZEVZTCQQFOLXQDVHIAXNUKIMLPZOCCLRAECMYEVHOBBJNIINAPJXKFYCWSOANXFOUHACOLPQ");
    msg.value = 0.665572007351;

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
    msg.setTimeStamp(0.248540025088);
    msg.setSource(48U);
    msg.setSourceEntity(242U);
    msg.setDestination(52493U);
    msg.setDestinationEntity(149U);
    msg.seq = 50084U;
    msg.sys.assign("MESBRUOYWVSDJIJDROMXERRFVTSVEZFYTDYGLRBSHVNHWWFVQIZGXBWGGQYCLCUCORFDEZBQBCVAULRXEUTAYHQLMXZTGKWQVSIXZQADRNYOCMHMMPKUDPDSYKHNOPOSANMQYWCCQGKJDJLIFOOGUTIJLPECEMOFSAGAHN");
    msg.value = 0.941419219825;

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
    msg.setTimeStamp(0.0708099188621);
    msg.setSource(19215U);
    msg.setSourceEntity(12U);
    msg.setDestination(43843U);
    msg.setDestinationEntity(210U);
    msg.seq = 1650U;
    msg.sys.assign("CEDCDJRULQYEXNAGGFAKNSZBSSFTCIUVIKCQSMWBRQSOBAEGXDPMWIRPGUKYTVJPDACRRTKJTLJFFBRHTIVNMYTWGGOCQTLVJURJXGOJPCZHKRUDKVSTKYJZZOBFEUATLELQHXZGBACZFDIFWPUXD");
    msg.value = 0.290398574267;

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
    msg.setTimeStamp(0.437676690069);
    msg.setSource(4073U);
    msg.setSourceEntity(122U);
    msg.setDestination(44143U);
    msg.setDestinationEntity(177U);
    msg.seq = 63201U;
    msg.sys_dst.assign("QEHEKMMPWCGLHPINVTLPHSPMWDKCMKIEUJXPSQVFUDBXYEOMLUDCICTRRBYDNANJLERBIBFQGGFIXAJEGOQGQTGAMFLDSQKXZQOLHXOCOMTMZBJBPDTVYVKFXWHFVJ");
    msg.timeout = 0.632045178346;

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
    msg.setTimeStamp(0.357450596463);
    msg.setSource(48179U);
    msg.setSourceEntity(16U);
    msg.setDestination(57463U);
    msg.setDestinationEntity(83U);
    msg.seq = 46346U;
    msg.sys_dst.assign("VQJBTSATWMNCEHBSWFHNCUBONQTCXYYIVNXJDFUIRSWUCHXPCK");
    msg.timeout = 0.994701023835;

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
    msg.setTimeStamp(0.484124112512);
    msg.setSource(62385U);
    msg.setSourceEntity(192U);
    msg.setDestination(45462U);
    msg.setDestinationEntity(217U);
    msg.seq = 60746U;
    msg.sys_dst.assign("ZCDLYEHFBXZEIXQGZAFSWBRZSXNGOWWDUSUNMXUNAJQUASDBPRVXLILCFZVBLECWOWWVDVQIIVYLROFABICISALMDAMFVRFMHPPLCFEDWYTDHBKUTQRJGHBINGTSHZEKE");
    msg.timeout = 0.859167697493;

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
    msg.setTimeStamp(0.638630750066);
    msg.setSource(24844U);
    msg.setSourceEntity(101U);
    msg.setDestination(49792U);
    msg.setDestinationEntity(72U);
    msg.action = 62U;
    msg.longain = 0.26763896829;
    msg.latgain = 0.810751801614;
    msg.bondthick = 1138236166U;
    msg.leadgain = 0.965071545163;
    msg.deconflgain = 0.161819651847;

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
    msg.setTimeStamp(0.635796506106);
    msg.setSource(33448U);
    msg.setSourceEntity(46U);
    msg.setDestination(54721U);
    msg.setDestinationEntity(111U);
    msg.action = 155U;
    msg.longain = 0.350837688324;
    msg.latgain = 0.417620483854;
    msg.bondthick = 829312967U;
    msg.leadgain = 0.295270985011;
    msg.deconflgain = 0.485686477777;

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
    msg.setTimeStamp(0.290979810822);
    msg.setSource(59513U);
    msg.setSourceEntity(187U);
    msg.setDestination(28545U);
    msg.setDestinationEntity(57U);
    msg.action = 18U;
    msg.longain = 0.993329781477;
    msg.latgain = 0.902126671609;
    msg.bondthick = 4156498727U;
    msg.leadgain = 0.676348962776;
    msg.deconflgain = 0.366464539228;

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
    msg.setTimeStamp(0.65241281974);
    msg.setSource(57577U);
    msg.setSourceEntity(107U);
    msg.setDestination(5792U);
    msg.setDestinationEntity(172U);
    msg.err_mean = 0.881815000345;
    msg.dist_min_abs = 0.224613441312;
    msg.dist_min_mean = 0.19168825657;

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
    msg.setTimeStamp(0.0820859966503);
    msg.setSource(51193U);
    msg.setSourceEntity(54U);
    msg.setDestination(24869U);
    msg.setDestinationEntity(29U);
    msg.err_mean = 0.144810724542;
    msg.dist_min_abs = 0.351162592408;
    msg.dist_min_mean = 0.931341106784;

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
    msg.setTimeStamp(0.575322272329);
    msg.setSource(47753U);
    msg.setSourceEntity(44U);
    msg.setDestination(40614U);
    msg.setDestinationEntity(124U);
    msg.err_mean = 0.666683371453;
    msg.dist_min_abs = 0.481840158121;
    msg.dist_min_mean = 0.168902774818;

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
    msg.setTimeStamp(0.536480663588);
    msg.setSource(12037U);
    msg.setSourceEntity(252U);
    msg.setDestination(3164U);
    msg.setDestinationEntity(8U);
    msg.action = 28U;
    msg.lon_gain = 0.0884159641549;
    msg.lat_gain = 0.757384617454;
    msg.bond_thick = 0.144192262366;
    msg.lead_gain = 0.216788192486;
    msg.deconfl_gain = 0.897069413691;
    msg.accel_switch_gain = 0.783785310074;
    msg.safe_dist = 0.0395875293787;
    msg.deconflict_offset = 0.0649193441315;
    msg.accel_safe_margin = 0.799626179838;
    msg.accel_lim_x = 0.997405984504;

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
    msg.setTimeStamp(0.997752874501);
    msg.setSource(279U);
    msg.setSourceEntity(206U);
    msg.setDestination(60582U);
    msg.setDestinationEntity(75U);
    msg.action = 69U;
    msg.lon_gain = 0.309389300893;
    msg.lat_gain = 0.848331006384;
    msg.bond_thick = 0.221635607345;
    msg.lead_gain = 0.993512530656;
    msg.deconfl_gain = 0.414748558472;
    msg.accel_switch_gain = 0.834788732636;
    msg.safe_dist = 0.203424074205;
    msg.deconflict_offset = 0.94995128543;
    msg.accel_safe_margin = 0.492382205706;
    msg.accel_lim_x = 0.81910240094;

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
    msg.setTimeStamp(0.901682155671);
    msg.setSource(44992U);
    msg.setSourceEntity(161U);
    msg.setDestination(45999U);
    msg.setDestinationEntity(220U);
    msg.action = 117U;
    msg.lon_gain = 0.597062146696;
    msg.lat_gain = 0.0860065439921;
    msg.bond_thick = 0.910470564415;
    msg.lead_gain = 0.893504229841;
    msg.deconfl_gain = 0.718447081588;
    msg.accel_switch_gain = 0.358224537632;
    msg.safe_dist = 0.947409560139;
    msg.deconflict_offset = 0.36935438165;
    msg.accel_safe_margin = 0.579961539112;
    msg.accel_lim_x = 0.663431389842;

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
    msg.setTimeStamp(0.683568441182);
    msg.setSource(62860U);
    msg.setSourceEntity(146U);
    msg.setDestination(52541U);
    msg.setDestinationEntity(167U);
    msg.type = 74U;
    msg.op = 108U;
    msg.err_mean = 0.655998581973;
    msg.dist_min_abs = 0.999676741424;
    msg.dist_min_mean = 0.321618326018;
    msg.roll_rate_mean = 0.428656614283;
    msg.time = 0.301616825636;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 164U;
    tmp_msg_0.lon_gain = 0.838922556717;
    tmp_msg_0.lat_gain = 0.706491990818;
    tmp_msg_0.bond_thick = 0.484980146723;
    tmp_msg_0.lead_gain = 0.9618236164;
    tmp_msg_0.deconfl_gain = 0.871353878171;
    tmp_msg_0.accel_switch_gain = 0.108048453332;
    tmp_msg_0.safe_dist = 0.772976802287;
    tmp_msg_0.deconflict_offset = 0.923787574344;
    tmp_msg_0.accel_safe_margin = 0.905849662687;
    tmp_msg_0.accel_lim_x = 0.765773171218;
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
    msg.setTimeStamp(0.305084820235);
    msg.setSource(33109U);
    msg.setSourceEntity(239U);
    msg.setDestination(59669U);
    msg.setDestinationEntity(175U);
    msg.type = 178U;
    msg.op = 214U;
    msg.err_mean = 0.637419507397;
    msg.dist_min_abs = 0.592383519017;
    msg.dist_min_mean = 0.269142352982;
    msg.roll_rate_mean = 0.811673133512;
    msg.time = 0.365283312208;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 91U;
    tmp_msg_0.lon_gain = 0.440736859844;
    tmp_msg_0.lat_gain = 0.977408046917;
    tmp_msg_0.bond_thick = 0.421568476834;
    tmp_msg_0.lead_gain = 0.993293028949;
    tmp_msg_0.deconfl_gain = 0.512523159452;
    tmp_msg_0.accel_switch_gain = 0.191930784219;
    tmp_msg_0.safe_dist = 0.347915947538;
    tmp_msg_0.deconflict_offset = 0.123921930793;
    tmp_msg_0.accel_safe_margin = 0.454675075645;
    tmp_msg_0.accel_lim_x = 0.181950387697;
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
    msg.setTimeStamp(0.40485739677);
    msg.setSource(15646U);
    msg.setSourceEntity(225U);
    msg.setDestination(65036U);
    msg.setDestinationEntity(51U);
    msg.type = 13U;
    msg.op = 235U;
    msg.err_mean = 0.0016496924368;
    msg.dist_min_abs = 0.906922623135;
    msg.dist_min_mean = 0.827835556097;
    msg.roll_rate_mean = 0.0614867988135;
    msg.time = 0.492388176735;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 72U;
    tmp_msg_0.lon_gain = 0.226139680386;
    tmp_msg_0.lat_gain = 0.505175106426;
    tmp_msg_0.bond_thick = 0.317738087582;
    tmp_msg_0.lead_gain = 0.626214265701;
    tmp_msg_0.deconfl_gain = 0.82964719375;
    tmp_msg_0.accel_switch_gain = 0.636514662985;
    tmp_msg_0.safe_dist = 0.172030948333;
    tmp_msg_0.deconflict_offset = 0.542581845805;
    tmp_msg_0.accel_safe_margin = 0.0480371846676;
    tmp_msg_0.accel_lim_x = 0.683217935411;
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
    msg.setTimeStamp(0.455984902438);
    msg.setSource(33303U);
    msg.setSourceEntity(246U);
    msg.setDestination(43809U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.198744214973;
    msg.lon = 0.52609444515;
    msg.eta = 1633541065U;
    msg.duration = 57106U;

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
    msg.setTimeStamp(0.598755766146);
    msg.setSource(31646U);
    msg.setSourceEntity(43U);
    msg.setDestination(52367U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.612077703716;
    msg.lon = 0.0763470695097;
    msg.eta = 3449779506U;
    msg.duration = 20018U;

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
    msg.setTimeStamp(0.922858338604);
    msg.setSource(31947U);
    msg.setSourceEntity(134U);
    msg.setDestination(28068U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.153758960359;
    msg.lon = 0.919182810143;
    msg.eta = 4107856781U;
    msg.duration = 12976U;

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
    msg.setTimeStamp(0.453476561519);
    msg.setSource(4670U);
    msg.setSourceEntity(185U);
    msg.setDestination(29865U);
    msg.setDestinationEntity(35U);
    msg.plan_id = 7090U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.561881537352;
    tmp_msg_0.lon = 0.0966362941721;
    tmp_msg_0.eta = 780519391U;
    tmp_msg_0.duration = 38761U;
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
    msg.setTimeStamp(0.215394033468);
    msg.setSource(44461U);
    msg.setSourceEntity(29U);
    msg.setDestination(48348U);
    msg.setDestinationEntity(128U);
    msg.plan_id = 11293U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0958441835839;
    tmp_msg_0.lon = 0.0524295744711;
    tmp_msg_0.eta = 2510543222U;
    tmp_msg_0.duration = 28891U;
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
    msg.setTimeStamp(0.960473451141);
    msg.setSource(21827U);
    msg.setSourceEntity(45U);
    msg.setDestination(40775U);
    msg.setDestinationEntity(247U);
    msg.plan_id = 32062U;

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
    msg.setTimeStamp(0.210912258826);
    msg.setSource(20673U);
    msg.setSourceEntity(166U);
    msg.setDestination(11864U);
    msg.setDestinationEntity(170U);
    msg.type = 98U;
    msg.command = 38U;
    msg.settings.assign("ROHKPIKLKFKEBIGUAGAWOBVRMEDUOWCFMYUANQVHBPJAJWQSRFSPIKYOCJWWXPLDXZPBTYHGQXZNIIUKVKLJFQTGEHRXPGDJBZFVSKHQGETKJTOCWTGE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22323U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.518474620509;
    tmp_tmp_msg_0_0.lon = 0.195322393186;
    tmp_tmp_msg_0_0.eta = 2866514512U;
    tmp_tmp_msg_0_0.duration = 37145U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LWQTFOTOQKJOBCKYPJXPAQISJNQXLWFHKGVUEWJLWZJXSEIOSIEPVKSNCUDXBTGEIXUPHRCAPRPOUORJZVFHNGBKMAPNAWZFWYICYICRKZWBATYGFYRQGBEUIDOMTXTSEZMVYSVDNAPZJCMLQDKUCWREVIYKHQYKUJMFGBRVQHQDILNGMZVLXLTGNCNEWSTEHMOHRSFAZODBTQFTNYAUDSJZARKHFWBMSUVZGDDRULB");

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
    msg.setTimeStamp(0.0138462206273);
    msg.setSource(11225U);
    msg.setSourceEntity(205U);
    msg.setDestination(9901U);
    msg.setDestinationEntity(206U);
    msg.type = 19U;
    msg.command = 168U;
    msg.settings.assign("OLGWKOUIQZTAXPUZHYCSMVPGGWKWXSTFLGWQUZMOJODNJMPFVXSBJRGTTELBPIVCHPDNLTREMGUYEJROKKN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 21689U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.580046278921;
    tmp_tmp_msg_0_0.lon = 0.883063406948;
    tmp_tmp_msg_0_0.eta = 3551769610U;
    tmp_tmp_msg_0_0.duration = 21616U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TBUCIDMLIKJFSXKMXYSOWYR");

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
    msg.setTimeStamp(0.745571016805);
    msg.setSource(42850U);
    msg.setSourceEntity(136U);
    msg.setDestination(30155U);
    msg.setDestinationEntity(185U);
    msg.type = 4U;
    msg.command = 7U;
    msg.settings.assign("OZDRDYICLUIDYKTNJQAMSFKBOQDWMAOGGKREBPXZCHZOTKCMYCIQBILSYERYYMOAIOTWYEAGODZQWWSIZELEFKHXPLSAVQNVWLKGKNQPEJZMUGSFRVUVNPMBXNXUFMUXWTT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53861U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0579981652635;
    tmp_tmp_msg_0_0.lon = 0.987547245255;
    tmp_tmp_msg_0_0.eta = 2762227485U;
    tmp_tmp_msg_0_0.duration = 1594U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YCUUHYXNVBHSRLZATYKTUZDIBODDDQLUDJFPIKWPHBTUKQANOGYZGPLZSRBJRSEIEDTEKFTMCXHCKMEJOAYFRRUXXKNOECRAONFVZJAAXHCLZHKNNRWOTTTSWZIJMLBTTMVCUKIOPFCFIB");

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
    msg.setTimeStamp(0.702159582107);
    msg.setSource(1711U);
    msg.setSourceEntity(80U);
    msg.setDestination(8560U);
    msg.setDestinationEntity(199U);
    msg.state = 4U;
    msg.plan_id = 45447U;
    msg.wpt_id = 46U;
    msg.settings_chk = 11291U;

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
    msg.setTimeStamp(0.481393820213);
    msg.setSource(17710U);
    msg.setSourceEntity(140U);
    msg.setDestination(23036U);
    msg.setDestinationEntity(123U);
    msg.state = 76U;
    msg.plan_id = 39528U;
    msg.wpt_id = 2U;
    msg.settings_chk = 63930U;

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
    msg.setTimeStamp(0.572811982034);
    msg.setSource(5040U);
    msg.setSourceEntity(146U);
    msg.setDestination(55231U);
    msg.setDestinationEntity(11U);
    msg.state = 159U;
    msg.plan_id = 33436U;
    msg.wpt_id = 44U;
    msg.settings_chk = 16828U;

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
    msg.setTimeStamp(0.335061976329);
    msg.setSource(49656U);
    msg.setSourceEntity(12U);
    msg.setDestination(5863U);
    msg.setDestinationEntity(50U);
    msg.uid = 81U;
    msg.frag_number = 86U;
    msg.num_frags = 75U;
    const char tmp_msg_0[] = {96, -5, -103, -93, -81, 102, 35, -116, -35, 108, -4, -82, -2, 88, -91, -77, -112, 25, -95, -35, -108, 51, -22, -105, -94, 37, -70, -31, 4, -34, -25, -14, 88, -127, -9, -17, -63, -94, -13, 118, 16, 15, 123, 23, -108, 64, 24, -30, 72, 109, 102, 71, -50, 68, -123, -90, 2, 61, -3, 68, 47, -17, -100, -58, 41, -1, -79, -62, -8, -45, 125, 118, 66, 13, 89, 83, -11, -91, -55, 8, 15, 43, -52, 32, 110, 17, -68, 93, -119, -119, 52, -17, -95, -31, -75, -12, -56, -128, 125, -91, -33, 97, 103, -45, 24, 118, 48, 43, -120, 81, 105, 42, -75, -109, 98, -108, -11, 101, 58, 13, 111, -123, -11, -102, -41, -29, 65, -112, 106, 5, -83, -42, 64, -32, -24, 48, 117, 25, 118, -125, -51, -84, 54, -4, 79, 69, -108, 4, -31, 97, -63, -54, -106, 54, 33, -103, 19, -88, -68, 53, -34, -63, 108, -84, 90, -79, -49, -50, 19, -8, 94, 58, -41, 125, 30, 103, -60, -64, -49, 106, -101, -82, -32, -27, 79, 30, -84, 77, -59, 109, 30, 0, 22, -75, 25, 66, 35, 118, 54, -105, 37, -104, 107, -103, -10, 101, 4};
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
    msg.setTimeStamp(0.886506111804);
    msg.setSource(20422U);
    msg.setSourceEntity(182U);
    msg.setDestination(4460U);
    msg.setDestinationEntity(155U);
    msg.uid = 212U;
    msg.frag_number = 59U;
    msg.num_frags = 210U;
    const char tmp_msg_0[] = {-57, 33, -64, 98, -123, 78, -128, 65, 96, 108, -116, 90, -38, -92, -7, 40, -97, -9, -79, 45, -109, 61, 16, 76, -24, -92, -75, 6, 118, 112, 107, -20, 103, -70, -26, 103, -88, -105, -1, -59, -126, -105, -100, -45, 64, 68, 6, -9, -99, 53, -123, 60, -9, -75, 114, -54, 39, 100, 32, 4, -45, -99, -102, -68, 55, -52, -94, -57, -33, 82, -11, 79, 72, -116, -36, -83, 24, 106, 99, -82, -92, 93, -31, 77, -56, -16, 43};
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
    msg.setTimeStamp(0.33048922888);
    msg.setSource(29688U);
    msg.setSourceEntity(48U);
    msg.setDestination(50930U);
    msg.setDestinationEntity(136U);
    msg.uid = 228U;
    msg.frag_number = 228U;
    msg.num_frags = 122U;
    const char tmp_msg_0[] = {-124, -88, -40, 77, 103, 101, -81, 13, 38, -128, 113, 99, -106, 110, -23, -45, -108, -29, -103, 6, -127, 50, 113, -74, 41, -39, 65, 90, -3, -71, 2, 71, -59, -119, 2, 64, -90, 47, -72, 12, 17, 23, 20, -17, 1, -100, -66, -42, -119, 110, -21, 78, -84, 2, 83, 7, -90, -100, -96, 83, 20, 101, -37, -2, -84, 16, -42, -106, -123, -64, -124, 37, -63, -99, -66, -63, -74, -8, 17, -30, 123, -48, -14, -104, 119, -23, 67, 89, -105, -60, -6, -68, -102, -59, 13, -77, 22, -62, -118, -37, 82, 84, 21, 116, -8, -19, -102, -82, -20, 31, -13, -103, -49, 52, -20, -102, -110, 46, -68, -77, 21, 3, 20, 120, 41, -30, 18, -8, 85, 100, 76, 29, 28, -29, -13, 110, -18, 66, -115, -12, -47, -73, -96, 91, 4, -2, -110, -16, 119, -31, 5, 78, -100, 32, 75, 101, -98, -1, 57, 26, 17, 81, 39, -49, -86, -63, -29, 113, 75, 33, 64, -5, -81, 75, 5, -65, -103, 37, -65, 51, -63, 57, -127, 73, 47, 101, -65, 75, 113, 5, -53, -32, -46, -79, 110, -107, -13, 63, 84, -22, 19, 38, -75, -46, -82, 26, 91, -76, 97, 21, 17, -2, -52, -31, 38, -62, 28, 22, 53, 95, 73, -125, 21, -18, 44, -44, -10, 4, -18, -96, 69, -12, 46};
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
    msg.setTimeStamp(0.245303621819);
    msg.setSource(34696U);
    msg.setSourceEntity(179U);
    msg.setDestination(7565U);
    msg.setDestinationEntity(173U);
    msg.content_type.assign("SOKJZMWKEYJVJBAVMNDQAVUKWTTRSBZCVXMCAQUDETEXCAABWZEUIUZRGYOTQXFNZWLGFIYWLKHOCHCDBRISSCSEGELUJLOPXIOARJQWNGPSHMFFRXMXNYKFKOBPQLEGDOFIPSSNPMNQPLTTDMUHIYPHIVVJF");
    const char tmp_msg_0[] = {88, -75, -117, -33, -77, -48, -100, -30, 116, -89, -2, -94, -60, -99, 106, -37, 112, -31, -84, -99, -103, 14, 42, 90, -119, 53, 81, 46, -92, -62, 90, -35, 86, 96, 39, -65, 43, -67, -2, 106, 125, -52, 88, -11, -117, -90, 87, 109, -95, 43, -49, -9, 76, 62, -92, -93, 35, 66, -112, -16, 28, -78, 102, -62, 8, 124, 63, -43, -81, -73, 81, 109, 2, -75, -33, 70, -77, -77, 21, 52, -50, -105, -71, -27, -95, -85, -90, 98, 119, 88, 68, 77, -128, -46, 61, -64, 106, -75, -98, -39, -4, 2, -110, 10, 121, 15, -123, -32, -12, -112, -62, -85, 73, -104, -61, 117};
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
    msg.setTimeStamp(0.938649470988);
    msg.setSource(45777U);
    msg.setSourceEntity(241U);
    msg.setDestination(62859U);
    msg.setDestinationEntity(166U);
    msg.content_type.assign("LCHOWXVVWATNDNRIAKVTGUBHJWNMMLCKBFRRJNKHTNLYQBGEWLJESCNOFVUEURPOAMPGQJOACDIMKPJEJLORPZKGDDSLDVPBACZXDBIYLUKIFUOIAUPYEFRWUMNHCHSTZXFALZTHEVZRGTSMETHXMHOBLJAZUWDSLYPGXFZGXOBKYIAYPQGMKQSHQMQJUYRBMIQTVITUS");
    const char tmp_msg_0[] = {76, -88, 65, -49, -114, 33, -111, -33, -114, 81, 28, 39, -104, -107, 64, -68, 100, -56, 104, -104, 126, 101, -97, -122, 41, 52, -43, 33, 5, 39, 37, -68, 59, 116, -111, 93, -109, 126, -85, -99, -18, 14, 39, -77, -64, 10, 103, -18, -41, -10, 54, -111, 30, -107, -90, 48, 6, -103, 112, -32, -75, 92, -34, 91, -74, 109, -89, -124, -57, 107, -38, 111, -69, -22, -58, 46, 115, -54, 26, -2, -68, 12, -80, 113, 110, 119, 110, -26, -76, 11, 54, 41, 105, 97, 124, -92, -121, -86, -105, -60, 111, -127, 89, 31, -1, -39, -103, 71, -102, -32, 39, 124, -122, -112, 52, -50, 116, 25, 25, -111, -67, -49, -127, 1, -35, -127, -3, -102, 118, 3, 94, 84, 32, 39, -37, 93, -104, -42, -23, 13, 23, 108, 51, -70, -72, 7, 33, 125, 52, 75, -31, 100, -90, -10, -81, -73, 23, 123, -5, -22, 37, 117, -90, -84, -102, -15, 121, -7, -106, -101, -127, -7, 13, -79, -52, 89, -92, 58, 117, 106, 63, -115, -85, -2, -44, -120, -31, 19, -120, -120, -87, -14, 81, 12, 98, 82, 14, 102, 83, 94, -116, 22, 83, 114, -7, -87, -54, -20, -103, -128, 76, 21, 119, 4, -12, 36, -38, 108, -85, 1, 45, -105, 108, 109, 118, 76, 92, 46, -54, -6, -66, -72, 80, 64, 27, 106, 34, 74};
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
    msg.setTimeStamp(0.810770023201);
    msg.setSource(29003U);
    msg.setSourceEntity(101U);
    msg.setDestination(3863U);
    msg.setDestinationEntity(104U);
    msg.content_type.assign("RNVJFYEJFSNNAWJCHHSFPSVVLTTAUTTJEIQJEWXQGCGIDAOVPONSBGMQGHUIBXTFQLSOASTYHWYDTIRVRKVLCRLGEWQFPMBXRCGHXGZETCRUOSAJCFDAAKZNKLNKOYWMOHMDBUFSKZWILJLO");
    const char tmp_msg_0[] = {-101, 9, -83, 92, 22, 1, 48, -11, -42, 112, -118, 91, 29, 62, 14, -50, 103, -115, 91, -71, 45, 27, -6, -114, 7, -22, -76, 94, 59, 69, -51, -6, -55, 67, -84, 16, -27, 13, -100, -127, -95, -63, -1, 95, 28, 61, -70, 114, 82, -117, 110, -92, 73, 69, -108, -109, -19, 76, 28, 57, 15, 120, 44, 84, -117, -53, -10, 44, -103, -30, 84, -10, -19, 53, -56, 117, 36, -3, -128, 68, 116, -5, 89, -2, 106, 41, 76, 91, 121, -35, -105, 113, -66, 54, 112, -58, -104, -51, 64, 6, 98, -83, -85, 29, -102, -111, 109, -4, 23, 97, -19, 45, -5, 7, -30, -47, 92, 5, 53, 115, 120, -119, 63, -96, 32, 78, 67, -114, 5, 10, 10, 91, 126, -3, 17, 124, -64, 44, -123, 117, -53, -85, 123, 1, 72, 71, -120, 19, -127, 99, -74, -33, 37, -96, 41, 47, -79, 75, 11, 125, -16, -75, -72, 5, -63, -15, 2};
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
    msg.setTimeStamp(0.612419251662);
    msg.setSource(47226U);
    msg.setSourceEntity(28U);
    msg.setDestination(37992U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.308878752759);
    msg.setSource(18871U);
    msg.setSourceEntity(195U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.306752571741);
    msg.setSource(15672U);
    msg.setSourceEntity(112U);
    msg.setDestination(3075U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.608618580224);
    msg.setSource(12698U);
    msg.setSourceEntity(118U);
    msg.setDestination(61206U);
    msg.setDestinationEntity(134U);
    msg.target = 50850U;
    msg.bearing = 0.584810651232;
    msg.elevation = 0.962017857242;

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
    msg.setTimeStamp(0.222216885959);
    msg.setSource(48491U);
    msg.setSourceEntity(22U);
    msg.setDestination(39127U);
    msg.setDestinationEntity(226U);
    msg.target = 3383U;
    msg.bearing = 0.276671776932;
    msg.elevation = 0.617457443783;

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
    msg.setTimeStamp(0.408090799119);
    msg.setSource(11659U);
    msg.setSourceEntity(40U);
    msg.setDestination(15107U);
    msg.setDestinationEntity(106U);
    msg.target = 51078U;
    msg.bearing = 0.248198890587;
    msg.elevation = 0.844869333146;

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
    msg.setTimeStamp(0.536105090267);
    msg.setSource(17725U);
    msg.setSourceEntity(70U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(77U);
    msg.target = 9138U;
    msg.x = 0.617912846616;
    msg.y = 0.514533241322;
    msg.z = 0.847330161666;

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
    msg.setTimeStamp(0.607130263809);
    msg.setSource(31400U);
    msg.setSourceEntity(232U);
    msg.setDestination(51788U);
    msg.setDestinationEntity(178U);
    msg.target = 6632U;
    msg.x = 0.106922635748;
    msg.y = 0.89691316925;
    msg.z = 0.571332508292;

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
    msg.setTimeStamp(0.396104954751);
    msg.setSource(10267U);
    msg.setSourceEntity(137U);
    msg.setDestination(14914U);
    msg.setDestinationEntity(166U);
    msg.target = 52114U;
    msg.x = 0.084746092601;
    msg.y = 0.189919069984;
    msg.z = 0.947199124016;

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
    msg.setTimeStamp(0.602115910904);
    msg.setSource(4042U);
    msg.setSourceEntity(105U);
    msg.setDestination(19713U);
    msg.setDestinationEntity(122U);
    msg.target = 31678U;
    msg.lat = 0.370143411549;
    msg.lon = 0.736795349524;
    msg.z_units = 87U;
    msg.z = 0.267510420838;

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
    msg.setTimeStamp(0.838987217523);
    msg.setSource(23131U);
    msg.setSourceEntity(231U);
    msg.setDestination(8705U);
    msg.setDestinationEntity(8U);
    msg.target = 46481U;
    msg.lat = 0.233859735835;
    msg.lon = 0.565365979197;
    msg.z_units = 80U;
    msg.z = 0.455520487471;

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
    msg.setTimeStamp(0.0638993843883);
    msg.setSource(26131U);
    msg.setSourceEntity(149U);
    msg.setDestination(48296U);
    msg.setDestinationEntity(37U);
    msg.target = 14677U;
    msg.lat = 0.311540169488;
    msg.lon = 0.719461694847;
    msg.z_units = 102U;
    msg.z = 0.390373322791;

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
    msg.setTimeStamp(0.739172823765);
    msg.setSource(23779U);
    msg.setSourceEntity(234U);
    msg.setDestination(19458U);
    msg.setDestinationEntity(119U);
    msg.locale.assign("BWXDKPZCODLTMUIRHFGKBVCRRKBJLOPAVJAPQPQNGWJPZIHYZWX");
    const char tmp_msg_0[] = {18, 85, 90, 31, -62, -74, -109, -63, 103, 59, 49, 116, -85, 62, 120, 12, 32, 107, 3, -94, -125, -24, -1, -66, 72, 11, 117, 66, 31, -56, 42, -26, 45, 41, 65, 45, 88, 63, -53, 124, -67, -64, -6, 71, -34, 6, 37, 118, 126, -100, -93, -67, 107, 4, -85, -25, 72, 11, -26, -17, 10, -97, 93, -16, 36, -96, 93, -84, -42, -125, -102, -82, 93, -59, 108, 9, -103, 40, -102, -99, -119, -61, 1, -40, -42, -123, -90, -28, -37, -12, -103, 51, -52, 80, 26, -38, -107, -32, 69, 80, -27, -114, -44, -127, -65, 51, 37, 65, 104, -120, 88, -34, 59, 9, -59, 74, 126, -107, -17, -5, 19, 59, -50, -50, -104, -49, 70, 7, -107, -9, 119, -102, -41, -26, -62, 4, -112, -114, 87, 56, 77, -18};
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
    msg.setTimeStamp(0.134962688223);
    msg.setSource(64942U);
    msg.setSourceEntity(49U);
    msg.setDestination(30110U);
    msg.setDestinationEntity(110U);
    msg.locale.assign("RLORUPDZQOGUMNDWFNJWOGEHEYAEHYZAXRKTJQLVZDNETCGDICNUMIOAUBCQKRUHSSFTJQYKJILKFLAOQSRLUNFVNCZIKTAOTLIYSHNPDRNJWYWSUIYVDGVAXYRMXXIRFXZOWZEHQBLTIHCWFLWDPGJPJBPAUPDBIKIEWBBQQAEUNMPBCQOSEJEYXPJSHMDSVTFKVVDGFMXVXAGELVXZFOZUYVPFZBCMTWK");
    const char tmp_msg_0[] = {18, -87, 48, -81, -56, -70, 51, 76, 107, 22, 84, -48, 20, 67, -67, 119, -54, -120, 65, 43, 16, 88, -49, -104, -59, 87, 34, -65, -111, -15, 90, -108, 46, -70, -19, 39, -115, 76, -73, 86, 8, 44, 115, -89, -8, 66, 25, -68, -60, -117, 4, 72, -10, -123, -89, 111, -52, -61, 78, -77, -115, 59, 39, 111, 107, -96, -65, -76, -22, 40, -83, -21, -76, 66, 98, 76, 113, 46, 94, -60, -81, -92, -77, 74, 80, 98, 6, 36, 14, -128, 24, 51, 19, 96, -115, -53, 84, 7, 75, 88, 2, -19, -75, -34, -76, -96, 6, -16, 112, -39, -58, -25, -53, -126, -39, 36, 65, -54, -84, 122, 69, -36, -53, -51, 117, 7, -73, -109, -90, 111, -18, 113, 95, 92, 103, -78, -62, -80, -4, -42, 51, -77, 35, -53, 64, 105, -65, -92, -46, -52, -123, 106, 58, -124, -50, -124, 66, 8, -111, -56, 35, 77, 80, -4, 118, -55, 59, -92, -95, -24, -87, -84, 28, 96, 117, 20, 59, 103, -117, -123, 61, -8, -36, 100, -76, -120, 53, -125, 54, -82, -87, 104, 50, -51, -57, -7, -7, 82, 125, 44, -31, -11, -54, -25, -91, -40, -31, -54, 89, -121, -66, -119, -102, -10, -52, -3, -114, 77, 39, 24, 69, -24, 27, 57, 54, -35, -112, 24, -118, 4, -111, -111, 88, -99, -51, -20, -95, -44, 68};
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
    msg.setTimeStamp(0.480322682421);
    msg.setSource(35480U);
    msg.setSourceEntity(183U);
    msg.setDestination(24551U);
    msg.setDestinationEntity(85U);
    msg.locale.assign("KYCJKOHPJLMYFLYGPXDFZXYKCOPQPGNDOBYMTAJTNSEENLTGBWQINBQNHVXOXGITARRMRAPWSRBPVTTXLHUFYOWLZABLBWWQDVIAXM");
    const char tmp_msg_0[] = {105, 105, -8, 46, -107, 122, -104, -98, -85, -106, -11, 91, -98, 45, -66, -78, 80, -35, 46, 67, 50, 106, 65, -54, 49, -105, -43, 51, 34, -6, 12, -51, 36, -92, -107, 11, 44, 10, -54, -7, -98, 110, -75, 83, 104, -102, 116, -31, 49, -59, -56, -22, -116, 20, -90, -16, -81, -124, 109, 126, -101, -81, -111, -54, -73, -4, -118, 118, 117, -34, 16, -13, 25, 51, -31, 47, -111, 13, 93, 11, -128, -34, 27, 80, 124, -76, 49, -114, -109, 43, -96, -124, -100, -98, 111, -100, -48, 16, 9, 25, 114, 106, 41, 39, 89, -79, -55, 82, -38, -107, 66, -76, -87, -55, -88, 28, 43};
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
    msg.setTimeStamp(0.0444418772338);
    msg.setSource(31032U);
    msg.setSourceEntity(205U);
    msg.setDestination(5300U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.00424143894626);
    msg.setSource(18270U);
    msg.setSourceEntity(157U);
    msg.setDestination(41199U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.154728861144);
    msg.setSource(60729U);
    msg.setSourceEntity(223U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.920017454783);
    msg.setSource(14340U);
    msg.setSourceEntity(33U);
    msg.setDestination(47131U);
    msg.setDestinationEntity(31U);
    msg.camid = 104U;
    msg.x = 63832U;
    msg.y = 1698U;

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
    msg.setTimeStamp(0.296024907003);
    msg.setSource(40679U);
    msg.setSourceEntity(245U);
    msg.setDestination(3226U);
    msg.setDestinationEntity(22U);
    msg.camid = 180U;
    msg.x = 290U;
    msg.y = 37044U;

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
    msg.setTimeStamp(0.682446092357);
    msg.setSource(49603U);
    msg.setSourceEntity(240U);
    msg.setDestination(30928U);
    msg.setDestinationEntity(162U);
    msg.camid = 163U;
    msg.x = 3197U;
    msg.y = 37239U;

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
    msg.setTimeStamp(0.404267121194);
    msg.setSource(23044U);
    msg.setSourceEntity(243U);
    msg.setDestination(28144U);
    msg.setDestinationEntity(228U);
    msg.camid = 112U;
    msg.x = 50255U;
    msg.y = 9611U;

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
    msg.setTimeStamp(0.16925414821);
    msg.setSource(26221U);
    msg.setSourceEntity(15U);
    msg.setDestination(19516U);
    msg.setDestinationEntity(245U);
    msg.camid = 10U;
    msg.x = 62955U;
    msg.y = 50067U;

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
    msg.setTimeStamp(0.0788869155765);
    msg.setSource(46530U);
    msg.setSourceEntity(206U);
    msg.setDestination(11603U);
    msg.setDestinationEntity(176U);
    msg.camid = 155U;
    msg.x = 60212U;
    msg.y = 24140U;

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
    msg.setTimeStamp(0.489467241376);
    msg.setSource(18856U);
    msg.setSourceEntity(227U);
    msg.setDestination(21739U);
    msg.setDestinationEntity(91U);
    msg.tracking = 123U;
    msg.lat = 0.304238003874;
    msg.lon = 0.987281929208;
    msg.x = 0.142653930074;
    msg.y = 0.199961269574;
    msg.z = 0.129337683971;

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
    msg.setTimeStamp(0.724581422208);
    msg.setSource(47554U);
    msg.setSourceEntity(80U);
    msg.setDestination(23391U);
    msg.setDestinationEntity(145U);
    msg.tracking = 56U;
    msg.lat = 0.069262664424;
    msg.lon = 0.775355574004;
    msg.x = 0.875709204247;
    msg.y = 0.161445449626;
    msg.z = 0.201008305146;

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
    msg.setTimeStamp(0.6787078075);
    msg.setSource(41293U);
    msg.setSourceEntity(31U);
    msg.setDestination(18696U);
    msg.setDestinationEntity(114U);
    msg.tracking = 239U;
    msg.lat = 0.966812576673;
    msg.lon = 0.986239899171;
    msg.x = 0.511631904269;
    msg.y = 0.271652819321;
    msg.z = 0.660365624004;

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
    msg.setTimeStamp(0.12564097785);
    msg.setSource(28960U);
    msg.setSourceEntity(241U);
    msg.setDestination(8674U);
    msg.setDestinationEntity(129U);
    msg.target.assign("WDAGQNAJGZQMKAXTYIZNHTQTTRLCXPRSWEVNRKIFKVQWDFVMABUSJBLIOXMMHGPUHWIEHBBYCFEBFJSRLIIUGXAPVMVFUBDUQQFCSLMCYRQPMYRKPINBRQAKGYRWXJDVOFNNFZUGLECOGYIZWCJWTEETMYDVJTOOZPLESUQGRORSTJZJDCIKDSCDOPYEHXXKHBVGXUMHWSNFAWOZTBUISN");
    msg.lbearing = 0.297024773767;
    msg.lelevation = 0.854793016142;
    msg.bearing = 0.890927637217;
    msg.elevation = 0.745546914118;
    msg.phi = 0.482637296193;
    msg.theta = 0.250254087927;
    msg.psi = 0.106791852099;
    msg.accuracy = 0.631892360624;

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
    msg.setTimeStamp(0.990310066587);
    msg.setSource(7476U);
    msg.setSourceEntity(3U);
    msg.setDestination(43685U);
    msg.setDestinationEntity(33U);
    msg.target.assign("FTZDOUGJUFGCAECPCYNHOIOVSKNJYMPUMKIBFYLCDDTAIUKWAHFVNBQQQQXPLOCWFSPXCLLSBQFXBZOHRDQGMIWEJJWJIPOTKTGSMWLNNIICBN");
    msg.lbearing = 0.266028163214;
    msg.lelevation = 0.0288749519116;
    msg.bearing = 0.936694316704;
    msg.elevation = 0.296826547913;
    msg.phi = 0.71713033298;
    msg.theta = 0.00147869874292;
    msg.psi = 0.971996431218;
    msg.accuracy = 0.648359155687;

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
    msg.setTimeStamp(0.745966463543);
    msg.setSource(64699U);
    msg.setSourceEntity(131U);
    msg.setDestination(11597U);
    msg.setDestinationEntity(213U);
    msg.target.assign("DCYBIBPOUPSQDDBHKEQYVHMEKEJXAUFGLSZIATUFLSVTUYXKCYWOIFTDMWILLRNJWFEFDPMONTHZZQKBWFUWTWXJEYPGOIXZYQDKKOVGRXPDHFNVVCYWCTEKWCPMLVUEKUZXDLHFQOOBNRPJOJAZLNCQRDBAGDJSMGNVTSISEYBIHLLCLTVUPCQHVA");
    msg.lbearing = 0.734086323877;
    msg.lelevation = 0.65661374121;
    msg.bearing = 0.0451825064407;
    msg.elevation = 0.809724932989;
    msg.phi = 0.290493900348;
    msg.theta = 0.559848151879;
    msg.psi = 0.296468381333;
    msg.accuracy = 0.46590747799;

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
    msg.setTimeStamp(0.183323510567);
    msg.setSource(53624U);
    msg.setSourceEntity(109U);
    msg.setDestination(34595U);
    msg.setDestinationEntity(8U);
    msg.target.assign("FHFCYPXQUDPQBVC");
    msg.x = 0.535875549629;
    msg.y = 0.320356064653;
    msg.z = 0.0467862757638;
    msg.n = 0.916471303252;
    msg.e = 0.796842580065;
    msg.d = 0.370854189072;
    msg.phi = 0.0647423920819;
    msg.theta = 0.844485542808;
    msg.psi = 0.0140515826653;
    msg.accuracy = 0.910348814996;

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
    msg.setTimeStamp(0.416530691703);
    msg.setSource(45298U);
    msg.setSourceEntity(177U);
    msg.setDestination(50448U);
    msg.setDestinationEntity(175U);
    msg.target.assign("VXZJSQCOQLCWRYERLNYYWHHPOWEEYZASFLVUGGQUQCIUUNLHFSDVJIVEWWIZZRQCBQXJTCDGQCNCFJJVMTTQDJNBFAFUBZIGYSTVITXGONKXATRJRBRVPSWLHPHCVMPVLXYDOLMGHGKMNXHQYBOMHPOHCKHFKDOFRLJEZDQXDIMPGMZOOCKZISGABAFJXUZJNYIFKETIBPDUBNEMAYDWEKSTYAVRSKRIPAFPXWSKUEAMUKB");
    msg.x = 0.504448611828;
    msg.y = 0.143937645711;
    msg.z = 0.889216513336;
    msg.n = 0.829917291017;
    msg.e = 0.0802567619353;
    msg.d = 0.0340046759531;
    msg.phi = 0.692594297513;
    msg.theta = 0.344261371196;
    msg.psi = 0.760733199509;
    msg.accuracy = 0.270147064724;

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
    msg.setTimeStamp(0.111560695415);
    msg.setSource(39664U);
    msg.setSourceEntity(11U);
    msg.setDestination(61189U);
    msg.setDestinationEntity(242U);
    msg.target.assign("XJLITNAUADSWXQQIMYNSEZKEBHVIFYWVCYDHGSPRRKMNCGBVOLBRNSFLKHARYQLVZJGMLUIUVLIPVOJBJOPQEOIIQPSDBUAMFMCWTDBYGFYNDDZCTWXPRYXKJCAAPZJBNDSYIMGFKXVHRNWMEPCZKOHKKUSQGNMSCGVTOGTXTYNTJUNOEITWRKZCAAXJOBTGFUEOBYHLXZZRSQFKLMDQUSQXMWGPHBHQLUWAEZEAREEDOWCWFPCHIVJXFZJDPV");
    msg.x = 0.198246246965;
    msg.y = 0.658798222822;
    msg.z = 0.354083911;
    msg.n = 0.115341446045;
    msg.e = 0.994615835707;
    msg.d = 0.731124470429;
    msg.phi = 0.409911566473;
    msg.theta = 0.701546563702;
    msg.psi = 0.775879521541;
    msg.accuracy = 0.405294012073;

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
    msg.setTimeStamp(0.282665730913);
    msg.setSource(60809U);
    msg.setSourceEntity(88U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(170U);
    msg.target.assign("ZIAQFUFMGVDBHRRWOTXYOGWQAMDYT");
    msg.lat = 0.898035320714;
    msg.lon = 0.883105632955;
    msg.z_units = 65U;
    msg.z = 0.223447758518;
    msg.accuracy = 0.191786598259;

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
    msg.setTimeStamp(0.517151462327);
    msg.setSource(44915U);
    msg.setSourceEntity(238U);
    msg.setDestination(45589U);
    msg.setDestinationEntity(61U);
    msg.target.assign("HLLDGCBJNQVODEMLXXYEPMZPFOOYXHRKPXFWZYWPBABOTLRDAEAZNCJORJASZTEJTOKDFUHLNKIDYGYLQZUIPGXWMEBGWNQEZWJQHIGNJZMRGVWOINNRHDVBMUMCRDCUCSKFBSRSTSEMUCYJACCCUVFS");
    msg.lat = 0.0179483361226;
    msg.lon = 0.361766811656;
    msg.z_units = 43U;
    msg.z = 0.91887334626;
    msg.accuracy = 0.213861482084;

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
    msg.setTimeStamp(0.345156157049);
    msg.setSource(15418U);
    msg.setSourceEntity(221U);
    msg.setDestination(19092U);
    msg.setDestinationEntity(80U);
    msg.target.assign("OXOVNHZTBRWLMZ");
    msg.lat = 0.481503515443;
    msg.lon = 0.8207033874;
    msg.z_units = 18U;
    msg.z = 0.737637734514;
    msg.accuracy = 0.16338683112;

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
    msg.setTimeStamp(0.810034200776);
    msg.setSource(33699U);
    msg.setSourceEntity(9U);
    msg.setDestination(43833U);
    msg.setDestinationEntity(166U);
    msg.name.assign("BBQAEUGOVYNABALXCTJVYAUJTVWELOPSLZSRSZLEIUH");
    msg.lat = 0.507707839672;
    msg.lon = 0.351872963852;
    msg.z = 0.0505569355029;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.674536544957);
    msg.setSource(48439U);
    msg.setSourceEntity(110U);
    msg.setDestination(45198U);
    msg.setDestinationEntity(185U);
    msg.name.assign("TSZMLBWXUUQEACSQFMFZTIIGDJNNDONKCRHXVCBRKZAXYHPRRGMUQCYVJFBJISXLETVNPAMRMWBNNGZWAGTHVNTANSHLBZCDQZGAKLKGOCYAIMLSEPLBEMDTFXGTHEYKKAGSFFOMEQOWPYFUCZISIVJLGUITXNUOKJWUIXVMCQORHCPZDZQOLSENPBMOKWWBWR");
    msg.lat = 0.591981541602;
    msg.lon = 0.449589436376;
    msg.z = 0.709861434584;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.938503803075);
    msg.setSource(52993U);
    msg.setSourceEntity(35U);
    msg.setDestination(27059U);
    msg.setDestinationEntity(239U);
    msg.name.assign("IMSHTVOLBPFOGWFHKPKYNJCDBWLTOLEGFKRDSKINSUATZDQHQNCVIRIWZODZBLPYQRGUDMIDHDGXLFTXMUQKITOEHINRAJEGOYESAQXSVVADOJEMKSCMPYDPAXBTXCYXTIOMQZRCFYSNZEATUHHOGNEZZJRAJWVJYRFQMEMBXVDKAVWH");
    msg.lat = 0.9368292907;
    msg.lon = 0.667791206078;
    msg.z = 0.115801186973;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.953082348625);
    msg.setSource(64957U);
    msg.setSourceEntity(194U);
    msg.setDestination(34339U);
    msg.setDestinationEntity(20U);
    msg.op = 234U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BPZMBDOKADBPDSQEIFVMCQUDWMVGXHCBRGKSMPIJCTKRTAXAJIJJQKBIUVNTCHGAPXVTYFNNFGCTODYHEYPYVHKVUWWDJKAWXZYYWLDRXSUPKLAZNOLUDLRZKHEIQFHVCLQHCJSAXOGXFQTNZRDZOUFBLNINVVNQSIKFMFYEGNOUMZMJIEJWREAYAZWUGOGEUXCADSEPBLROIEGJPQQXYFHYTPHLRMSWHWLMSZETQS");
    tmp_msg_0.lat = 0.7895676761;
    tmp_msg_0.lon = 0.574162520468;
    tmp_msg_0.z = 0.201153984357;
    tmp_msg_0.z_units = 91U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.259126309716);
    msg.setSource(60612U);
    msg.setSourceEntity(76U);
    msg.setDestination(63610U);
    msg.setDestinationEntity(246U);
    msg.op = 143U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("LGZRRUVXMOKOBBZAVVAQNNKYTSHFEMWTXNGFNADPOGZQFNKLECIDQWJNDRWCJKMSOKNUBIPXCPFHKJPLHTHFDWKTYSJAQ");
    tmp_msg_0.lat = 0.215392356862;
    tmp_msg_0.lon = 0.293224719073;
    tmp_msg_0.z = 0.0884455597127;
    tmp_msg_0.z_units = 150U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.306661721631);
    msg.setSource(24153U);
    msg.setSourceEntity(153U);
    msg.setDestination(32105U);
    msg.setDestinationEntity(229U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.00451612955641);
    msg.setSource(13508U);
    msg.setSourceEntity(103U);
    msg.setDestination(41374U);
    msg.setDestinationEntity(194U);
    msg.value = 0.602433537046;
    msg.type = 249U;

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
    msg.setTimeStamp(0.735082469849);
    msg.setSource(38617U);
    msg.setSourceEntity(85U);
    msg.setDestination(23933U);
    msg.setDestinationEntity(11U);
    msg.value = 0.693443835789;
    msg.type = 152U;

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
    msg.setTimeStamp(0.652131305992);
    msg.setSource(10955U);
    msg.setSourceEntity(151U);
    msg.setDestination(60927U);
    msg.setDestinationEntity(207U);
    msg.value = 0.898514434464;
    msg.type = 161U;

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
    msg.setTimeStamp(0.0828563992571);
    msg.setSource(24994U);
    msg.setSourceEntity(223U);
    msg.setDestination(25410U);
    msg.setDestinationEntity(236U);
    msg.value = 0.135353015087;

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
    msg.setTimeStamp(0.0191963984028);
    msg.setSource(13848U);
    msg.setSourceEntity(148U);
    msg.setDestination(53260U);
    msg.setDestinationEntity(9U);
    msg.value = 0.287056894301;

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
    msg.setTimeStamp(0.508006844872);
    msg.setSource(60325U);
    msg.setSourceEntity(32U);
    msg.setDestination(17900U);
    msg.setDestinationEntity(221U);
    msg.value = 0.278515329963;

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
    msg.setTimeStamp(0.224265065032);
    msg.setSource(28231U);
    msg.setSourceEntity(35U);
    msg.setDestination(57751U);
    msg.setDestinationEntity(14U);
    msg.timestamp_last_service = 0.313081168961;
    msg.time_next_service = 0.989760464314;
    msg.time_motor_next_service = 0.241057573194;
    msg.time_idle_ground = 0.233118314464;
    msg.time_idle_air = 0.900540945261;
    msg.time_idle_water = 0.862621597578;
    msg.time_idle_underwater = 0.631452626522;
    msg.time_idle_unknown = 0.643203345424;
    msg.time_motor_ground = 0.63597505512;
    msg.time_motor_air = 0.0294163973924;
    msg.time_motor_water = 0.148763829875;
    msg.time_motor_underwater = 0.515873610682;
    msg.time_motor_unknown = 0.41608996945;
    msg.rpm_min = -19896;
    msg.rpm_max = -30530;
    msg.depth_max = 0.152510174294;

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
    msg.setTimeStamp(0.983541515691);
    msg.setSource(34433U);
    msg.setSourceEntity(254U);
    msg.setDestination(27401U);
    msg.setDestinationEntity(157U);
    msg.timestamp_last_service = 0.627004211697;
    msg.time_next_service = 0.01719509245;
    msg.time_motor_next_service = 0.595366739925;
    msg.time_idle_ground = 0.518312398429;
    msg.time_idle_air = 0.361932465038;
    msg.time_idle_water = 0.360546975691;
    msg.time_idle_underwater = 0.640771165723;
    msg.time_idle_unknown = 0.278071405222;
    msg.time_motor_ground = 0.838953759343;
    msg.time_motor_air = 0.86080206525;
    msg.time_motor_water = 0.877145888148;
    msg.time_motor_underwater = 0.791980186616;
    msg.time_motor_unknown = 0.321436946427;
    msg.rpm_min = 13570;
    msg.rpm_max = -10224;
    msg.depth_max = 0.060300565425;

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
    msg.setTimeStamp(0.175233337573);
    msg.setSource(10245U);
    msg.setSourceEntity(172U);
    msg.setDestination(17431U);
    msg.setDestinationEntity(187U);
    msg.timestamp_last_service = 0.310836285425;
    msg.time_next_service = 0.914951043753;
    msg.time_motor_next_service = 0.664515137128;
    msg.time_idle_ground = 0.369160493321;
    msg.time_idle_air = 0.0807533805655;
    msg.time_idle_water = 0.967360627196;
    msg.time_idle_underwater = 0.379007410386;
    msg.time_idle_unknown = 0.822581321059;
    msg.time_motor_ground = 0.886477113597;
    msg.time_motor_air = 0.487233026545;
    msg.time_motor_water = 0.0554616462291;
    msg.time_motor_underwater = 0.155350676126;
    msg.time_motor_unknown = 0.911728295639;
    msg.rpm_min = 7257;
    msg.rpm_max = -9965;
    msg.depth_max = 0.627127630806;

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
    msg.setTimeStamp(0.327502673612);
    msg.setSource(57103U);
    msg.setSourceEntity(157U);
    msg.setDestination(54589U);
    msg.setDestinationEntity(107U);
    msg.severity = 224U;
    msg.text.assign("TCEWPDGPAFOGRIPWDGGIPUIRYZDVXCHOOHEGCSMYMBVBSRJKXOHEMIKBEQXZJKSONUCWGBHUARECENQQWRKTLIIFKXDWOSCPCCAPDHZQXGNIIXJHXARTKRVUFUTXMALYTTZLRWHAZWYWYJZUDFQNGUBBJKUKTSOUONMHIFKVQZLYJFVAQEHJKTEQMMYEODBLBJDMATPNURLZLNAOSY");

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
    msg.setTimeStamp(0.114564104618);
    msg.setSource(50881U);
    msg.setSourceEntity(36U);
    msg.setDestination(15155U);
    msg.setDestinationEntity(44U);
    msg.severity = 139U;
    msg.text.assign("UCQNIHDASMYXGATPMJEMDORYLYAALOUHVERDNWFFHYTAHWBRZQUSYLYPGCKWYKFRPFPIJOXWLFGECOOYLLDDXDVFVWJNURTMSQFVHTEJQZJBIQQIIBQUZKGWUVGMXLBCHMNRBTMADFOZJWMFSOVJUQHHSXZETETKECIKVMCFKUODXCPZABNHZGALIXYPNSZKIVQRTBPAGBBGEEKKJWNLXWVDCTGQEUN");

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
    msg.setTimeStamp(0.67026079875);
    msg.setSource(53252U);
    msg.setSourceEntity(215U);
    msg.setDestination(1095U);
    msg.setDestinationEntity(241U);
    msg.severity = 146U;
    msg.text.assign("NOHPQSGHCHBEKOQWSIRJSVWXPDSKYLLSZYHA");

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
    msg.setTimeStamp(0.467720045551);
    msg.setSource(31524U);
    msg.setSourceEntity(118U);
    msg.setDestination(49021U);
    msg.setDestinationEntity(30U);
    msg.channel = 32;
    msg.value = -1927037811;
    msg.gain = 187U;

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
    msg.setTimeStamp(0.547718813186);
    msg.setSource(9903U);
    msg.setSourceEntity(192U);
    msg.setDestination(27082U);
    msg.setDestinationEntity(87U);
    msg.channel = -18;
    msg.value = 700419201;
    msg.gain = 235U;

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
    msg.setTimeStamp(0.0345433287657);
    msg.setSource(39098U);
    msg.setSourceEntity(114U);
    msg.setDestination(27188U);
    msg.setDestinationEntity(161U);
    msg.channel = -43;
    msg.value = -503101923;
    msg.gain = 105U;

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
    msg.setTimeStamp(0.392174950972);
    msg.setSource(58643U);
    msg.setSourceEntity(10U);
    msg.setDestination(23837U);
    msg.setDestinationEntity(152U);
    msg.ch01 = 0.275288367498;
    msg.ch02 = 0.639598772894;
    msg.ch03 = 0.166844744477;
    msg.ch04 = 0.213634299011;
    msg.ch05 = 0.770071541966;
    msg.ch06 = 0.813251645369;
    msg.ch07 = 0.373783058408;
    msg.ch08 = 0.123506896763;
    msg.ch09 = 0.644832110558;
    msg.ch10 = 0.185584256435;
    msg.ch11 = 0.876895076717;
    msg.ch12 = 0.899256352573;
    msg.ch13 = 0.585132572745;
    msg.ch14 = 0.510857001553;
    msg.ch15 = 0.463854269071;
    msg.ch16 = 0.542615939645;

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
    msg.setTimeStamp(0.229932425855);
    msg.setSource(65238U);
    msg.setSourceEntity(115U);
    msg.setDestination(51151U);
    msg.setDestinationEntity(202U);
    msg.ch01 = 0.284899689384;
    msg.ch02 = 0.355858718171;
    msg.ch03 = 0.582721599553;
    msg.ch04 = 0.781140050294;
    msg.ch05 = 0.0861192650505;
    msg.ch06 = 0.68564463616;
    msg.ch07 = 0.557868309482;
    msg.ch08 = 0.958890833796;
    msg.ch09 = 0.403363700453;
    msg.ch10 = 0.137227664762;
    msg.ch11 = 0.434095646519;
    msg.ch12 = 0.264758705515;
    msg.ch13 = 0.0364565622482;
    msg.ch14 = 0.313487657039;
    msg.ch15 = 0.310364886144;
    msg.ch16 = 0.135806752127;

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
    msg.setTimeStamp(0.927736321971);
    msg.setSource(38931U);
    msg.setSourceEntity(185U);
    msg.setDestination(7318U);
    msg.setDestinationEntity(158U);
    msg.ch01 = 0.0145830992218;
    msg.ch02 = 0.42644404101;
    msg.ch03 = 0.142194110273;
    msg.ch04 = 0.742204219441;
    msg.ch05 = 0.51338559379;
    msg.ch06 = 0.404188009059;
    msg.ch07 = 0.86200253483;
    msg.ch08 = 0.634335528477;
    msg.ch09 = 0.9735509711;
    msg.ch10 = 0.371899672213;
    msg.ch11 = 0.999472751159;
    msg.ch12 = 0.955310595291;
    msg.ch13 = 0.0132574471661;
    msg.ch14 = 0.369197834126;
    msg.ch15 = 0.787027530803;
    msg.ch16 = 0.444360623253;

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
    msg.setTimeStamp(0.913326194243);
    msg.setSource(32656U);
    msg.setSourceEntity(172U);
    msg.setDestination(20272U);
    msg.setDestinationEntity(215U);
    msg.value = 0.553414801553;

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
    msg.setTimeStamp(0.585108916548);
    msg.setSource(21130U);
    msg.setSourceEntity(56U);
    msg.setDestination(48589U);
    msg.setDestinationEntity(206U);
    msg.value = 0.113788871673;

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
    msg.setTimeStamp(0.694180148292);
    msg.setSource(39140U);
    msg.setSourceEntity(80U);
    msg.setDestination(28630U);
    msg.setDestinationEntity(136U);
    msg.value = 0.520717738368;

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
    msg.setTimeStamp(0.558285613584);
    msg.setSource(15579U);
    msg.setSourceEntity(5U);
    msg.setDestination(29991U);
    msg.setDestinationEntity(110U);
    msg.op = 182U;
    msg.lat = 0.294790635856;
    msg.lon = 0.753654474818;
    msg.height = 0.490378053761;
    msg.depth = 0.882398705745;
    msg.alt = 0.618581795458;

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
    msg.setTimeStamp(0.373941811741);
    msg.setSource(34446U);
    msg.setSourceEntity(148U);
    msg.setDestination(48196U);
    msg.setDestinationEntity(80U);
    msg.op = 174U;
    msg.lat = 0.967484897018;
    msg.lon = 0.999149756342;
    msg.height = 0.376892390794;
    msg.depth = 0.663542111934;
    msg.alt = 0.775970771297;

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
    msg.setTimeStamp(0.0554696271285);
    msg.setSource(35762U);
    msg.setSourceEntity(212U);
    msg.setDestination(51757U);
    msg.setDestinationEntity(103U);
    msg.op = 181U;
    msg.lat = 0.558846850211;
    msg.lon = 0.31091497191;
    msg.height = 0.659617714001;
    msg.depth = 0.164208164878;
    msg.alt = 0.317345172861;

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
