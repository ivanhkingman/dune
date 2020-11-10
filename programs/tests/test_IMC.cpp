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
// IMC XML MD5: ebd615ab4b129fe913b51419fc76c3d2                            *
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
    msg.setTimeStamp(0.90685460812);
    msg.setSource(49913U);
    msg.setSourceEntity(217U);
    msg.setDestination(32608U);
    msg.setDestinationEntity(35U);
    msg.state = 18U;
    msg.flags = 145U;
    msg.description.assign("JHLNUARNCWWESZJLZCOFPOCUXYCBLRRHEFGARJBSWSECDMDEXJTMXTXDYHMQOYUGIZLTKQDAPNTNOGMSNWXPITEBKHTKKOJQVHGSUUAFNVDPBVQBQKFJHVYHYSYGZKAWCPBZVCKUBTRLQCEYFYIWMDIHUXNNOJLIAGLBXZVDXEQCH");

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
    msg.setTimeStamp(0.00784255399485);
    msg.setSource(36709U);
    msg.setSourceEntity(82U);
    msg.setDestination(61083U);
    msg.setDestinationEntity(253U);
    msg.state = 27U;
    msg.flags = 23U;
    msg.description.assign("UXFXMELJIHUOPKKPTSTTQOWUIBKZMQQIVECSOFKNCVDRKLVZWVMISQUVIYCSXDKVRU");

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
    msg.setTimeStamp(0.765437368727);
    msg.setSource(40587U);
    msg.setSourceEntity(7U);
    msg.setDestination(52737U);
    msg.setDestinationEntity(85U);
    msg.state = 87U;
    msg.flags = 203U;
    msg.description.assign("DWBPHEQBCTYNAYBCZEOLEAWLISQJJQLRHXJRQCHDWRVCWAMYDVNWXYVNGRKJBVLUOGCFQIJJGBSKNIGIPZUPBLXDBFAPIWVDFKQGUFNSXUISVTOUVBHYZXWSVPGDHARJDAGTJHRBAUIENV");

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
    msg.setTimeStamp(0.50062562497);
    msg.setSource(53800U);
    msg.setSourceEntity(179U);
    msg.setDestination(19892U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.524898587751);
    msg.setSource(31602U);
    msg.setSourceEntity(156U);
    msg.setDestination(25026U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.394230070037);
    msg.setSource(25495U);
    msg.setSourceEntity(208U);
    msg.setDestination(435U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.177798040485);
    msg.setSource(21133U);
    msg.setSourceEntity(153U);
    msg.setDestination(49741U);
    msg.setDestinationEntity(69U);
    msg.id = 134U;
    msg.label.assign("NMNOXYMWYJMGLRYHZRRPQZGMQAXYFWVSMLHHQWNZSKEAKRRDSWNCWKUJWVQWWPYONJUT");
    msg.component.assign("QZFTCZBVSOELMNXSBXLBWZNSALKFNMDYLNJLMEYOTJXRGICVFCTMTSBRAGQABGDFPPUYQUUPRANBKVDIPECNPZKMITQIHK");
    msg.act_time = 684U;
    msg.deact_time = 25119U;

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
    msg.setTimeStamp(0.315388507643);
    msg.setSource(4285U);
    msg.setSourceEntity(103U);
    msg.setDestination(22359U);
    msg.setDestinationEntity(52U);
    msg.id = 83U;
    msg.label.assign("FYSCBQZGRRBEFDVQDBRNNFICSNRLGAQGLHDFYZRXNWATLUXGQTKHNROOGBOVOMPZUBFEAKDATGHCJFINLXWTYXKIKQJWJAWKHXSBQHDRHEHPEKZKMXLULITCQWAMJRFQSDQJZTNBCIOHRWOXLCMFXVPNHEWKSVEMDZPRVSUECLVITHICPVEGDLVEFIBJAUGIZOQTYKMJYJZXGVYPSPYBCZMAFUDAMISA");
    msg.component.assign("RESQDYTBPPRRWFTIRVXASYFOAAFJJOKTQHYBATONUCFAPTZNDHILEDUIGBGCKNVKKWTYFRBWRQVNOOCEESEUKWZHCQMUTKBHUDBBLIGCCDTRJOMGXVJYIVRGYPXTZNFWSIGSWEANQIVJQPFJAVWMYGLPJLETGHQOIHSGEFLNIKYVRMGXHVMCZDZKVWDPCMDMUBHZSXECHCU");
    msg.act_time = 59876U;
    msg.deact_time = 49665U;

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
    msg.setTimeStamp(0.553941522635);
    msg.setSource(1931U);
    msg.setSourceEntity(238U);
    msg.setDestination(23388U);
    msg.setDestinationEntity(43U);
    msg.id = 173U;
    msg.label.assign("AYYZIVWCBYQQZOQMPRREJYOSVRFOWNZHFFCFXNEOCTFIIZYAKXXJBUEJZMBDMUFHENQTSJQAWBPUQSRLZXGLONNDPMLCMVKWZVOIIXRVANJKEYHNKVKPYMGBGGB");
    msg.component.assign("WNOTICSCGTZNPCBGQOBCDCEUWPVCBWWSVSKLVUZKATSBLVMYZFHHSQWGMGYLDLRYDYJEOMPAOMQLYAOBKXEHRCULJPXFFJYNWNONJMWGJWZYPBEPQIOEAYIQGASAVPOIYFXPHYRTLVBWIDXBSAZORMKKJATVRROMUJUNFFLGIGCNUDMJLDWHKQZURITPXTSVRLFZDXEZXNSQCSRTQNDAAHZFBRIDEQQXMHHXVEEZKKIPDGTNHEXGKHT");
    msg.act_time = 50732U;
    msg.deact_time = 34180U;

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
    msg.setTimeStamp(0.375709237251);
    msg.setSource(29122U);
    msg.setSourceEntity(143U);
    msg.setDestination(61563U);
    msg.setDestinationEntity(84U);
    msg.id = 75U;

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
    msg.setTimeStamp(0.00257957892781);
    msg.setSource(10738U);
    msg.setSourceEntity(97U);
    msg.setDestination(10771U);
    msg.setDestinationEntity(59U);
    msg.id = 226U;

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
    msg.setTimeStamp(0.645028919133);
    msg.setSource(57914U);
    msg.setSourceEntity(170U);
    msg.setDestination(53115U);
    msg.setDestinationEntity(93U);
    msg.id = 214U;

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
    msg.setTimeStamp(0.186272761017);
    msg.setSource(5290U);
    msg.setSourceEntity(62U);
    msg.setDestination(64688U);
    msg.setDestinationEntity(194U);
    msg.op = 17U;
    msg.list.assign("QMLLFTIMMLTTADEBBVQGPWLENRUDCBQDKVHRJHLBFWDNTGSTKJLYOVXRBAZICUWJAMIJQ");

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
    msg.setTimeStamp(0.268178625035);
    msg.setSource(35051U);
    msg.setSourceEntity(42U);
    msg.setDestination(44442U);
    msg.setDestinationEntity(180U);
    msg.op = 3U;
    msg.list.assign("EJJNJFAQQMOHRWKKUPWMPDDMSMBCYTSXEUISYBTNIGCDEYYAERQBOGZXWQHBZWQOVGIDVMJTWMHYGUZAZKRLVNUFXIL");

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
    msg.setTimeStamp(0.366433356334);
    msg.setSource(52088U);
    msg.setSourceEntity(40U);
    msg.setDestination(20075U);
    msg.setDestinationEntity(187U);
    msg.op = 47U;
    msg.list.assign("NLBSMQXZBOTWYKXDFHREKLKKAXRIGDJIPWVCZUMXDCPRLAJHNMYHLTTPCGDZJTMRCCHPYCHVRAWKPBVIZKRSONAEDDEMOSCIVFQLWYMBWJTUNZWINAZRGXTQLUVENVROWYFQLEMQPOQSJXBFOUUNEZCEYQTADATVXUBGLVBSUZAEGWVJQZGKQJXPVIRCU");

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
    msg.setTimeStamp(0.533856686707);
    msg.setSource(53464U);
    msg.setSourceEntity(62U);
    msg.setDestination(26030U);
    msg.setDestinationEntity(84U);
    msg.value = 180U;

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
    msg.setTimeStamp(0.708632571902);
    msg.setSource(11029U);
    msg.setSourceEntity(5U);
    msg.setDestination(62957U);
    msg.setDestinationEntity(15U);
    msg.value = 215U;

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
    msg.setTimeStamp(0.316151201507);
    msg.setSource(26702U);
    msg.setSourceEntity(121U);
    msg.setDestination(23674U);
    msg.setDestinationEntity(11U);
    msg.value = 219U;

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
    msg.setTimeStamp(0.196343976232);
    msg.setSource(28276U);
    msg.setSourceEntity(30U);
    msg.setDestination(41122U);
    msg.setDestinationEntity(228U);
    msg.consumer.assign("PGVCYZAOOOXGTBAWEXUZUYEFLPOBYKQRBSPJMDDACCMHPBCIIIURXJQYBMOSVPLVHAKASIHQIXGNNGRMDIYULQSLUIQSBRLGNKEJEBHUZJLOPUTKWGVFQDJDQYWHOWJIZXHODZSFKFOAMFEHWDRWTKMFZLESXFBBHDHCXNKYZAMCQNYNAWMGZUVKKRSVFRLWBWDEXCFVNGUTJXL");
    msg.message_id = 17554U;

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
    msg.setTimeStamp(0.787035354336);
    msg.setSource(55698U);
    msg.setSourceEntity(107U);
    msg.setDestination(54094U);
    msg.setDestinationEntity(14U);
    msg.consumer.assign("SDYICIZDDCHACRMCNNGCZIKXQUHAMRPQKARPMUTWQGVKEKLHEMWGVGXKRTESPGYHEXMKPIQODXBUKWOJSSYBTVQAJLLMWOZYAGBCRYSLNDCJJQKXXORWJXZEWCXDXWEPKCEZDUDIHFVTLHZNBBFPCJGSIHSWBTNASXFKHBNJUFTJLTATFUVWBZESYNGFNPQDGAZFIYUOYMQSVMQYUNIFOMFHVZZRBYLR");
    msg.message_id = 20054U;

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
    msg.setTimeStamp(0.998596091706);
    msg.setSource(23941U);
    msg.setSourceEntity(248U);
    msg.setDestination(1847U);
    msg.setDestinationEntity(93U);
    msg.consumer.assign("EIPYZNPSMWWJUHFDEJNCQRMIKPPAQMUAXCHYSAMMXSATBDTYXSWOYKTAMRWBGOIHXNNAZDGAOZCVEVSUFPWB");
    msg.message_id = 23589U;

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
    msg.setTimeStamp(0.353301613698);
    msg.setSource(10858U);
    msg.setSourceEntity(254U);
    msg.setDestination(30734U);
    msg.setDestinationEntity(115U);
    msg.type = 23U;

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
    msg.setTimeStamp(0.9715348725);
    msg.setSource(56502U);
    msg.setSourceEntity(2U);
    msg.setDestination(5489U);
    msg.setDestinationEntity(189U);
    msg.type = 1U;

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
    msg.setTimeStamp(0.407150132392);
    msg.setSource(63516U);
    msg.setSourceEntity(76U);
    msg.setDestination(21995U);
    msg.setDestinationEntity(46U);
    msg.type = 32U;

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
    msg.setTimeStamp(0.310492879338);
    msg.setSource(41247U);
    msg.setSourceEntity(52U);
    msg.setDestination(31643U);
    msg.setDestinationEntity(3U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.126480453678);
    msg.setSource(12223U);
    msg.setSourceEntity(69U);
    msg.setDestination(45333U);
    msg.setDestinationEntity(205U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.305159605968);
    msg.setSource(38835U);
    msg.setSourceEntity(173U);
    msg.setDestination(47781U);
    msg.setDestinationEntity(120U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.502935969274);
    msg.setSource(7467U);
    msg.setSourceEntity(217U);
    msg.setDestination(20140U);
    msg.setDestinationEntity(47U);
    msg.total_steps = 105U;
    msg.step_number = 62U;
    msg.step.assign("EYWYVSTSTFEBLLWRKLSZOZRVOPJADQGTFCIFBPOPVXINNFKXWXHYLJUWDUFCBGDNIIGQTUSGZETEXMAPNYCKECQSORNYERDXMJKQMJGBABWUCCUHHWLDXMXEBQDQJDA");
    msg.flags = 36U;

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
    msg.setTimeStamp(0.386728661103);
    msg.setSource(63596U);
    msg.setSourceEntity(215U);
    msg.setDestination(49819U);
    msg.setDestinationEntity(142U);
    msg.total_steps = 246U;
    msg.step_number = 237U;
    msg.step.assign("TLTXCYWKKXUSYOEKVTFULINJMKQZKAARQJBQMODAPCQMHDIEWCUHEZNWYGIVUXJMLIGRPQBAUPBKXNUOFGHVDRBLRZSOTYLIMPEODSGGSXD");
    msg.flags = 30U;

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
    msg.setTimeStamp(0.901506336311);
    msg.setSource(33360U);
    msg.setSourceEntity(173U);
    msg.setDestination(36180U);
    msg.setDestinationEntity(225U);
    msg.total_steps = 188U;
    msg.step_number = 129U;
    msg.step.assign("KDFARXROFTPAUXSXKQDRCTEVAMWCHWZGRSBVBMMVXTSIAYVQHCWJGGQFMWIOHIOHEIYAYLWZIGESRNVYGNTKNDQBPJBLOEHUEKZWVCSOBFKPTBYUSTVWECQXIMAFKAGJKZZTKNNDWCQIJHTLDJIUJJLYSAPZCQQDJOREGVTLZOTQL");
    msg.flags = 17U;

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
    msg.setTimeStamp(0.645593434108);
    msg.setSource(15775U);
    msg.setSourceEntity(115U);
    msg.setDestination(58464U);
    msg.setDestinationEntity(246U);
    msg.state = 91U;
    msg.error.assign("EYKRLRBFLZSNBOIWJGKLPXCPFWLAOQUUNJXHVSNUEUMVI");

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
    msg.setTimeStamp(0.0282413968515);
    msg.setSource(49336U);
    msg.setSourceEntity(213U);
    msg.setDestination(44996U);
    msg.setDestinationEntity(237U);
    msg.state = 173U;
    msg.error.assign("VYYPWGQTJWUBCKDDOXGSHTE");

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
    msg.setTimeStamp(0.663155315588);
    msg.setSource(60910U);
    msg.setSourceEntity(76U);
    msg.setDestination(25856U);
    msg.setDestinationEntity(133U);
    msg.state = 212U;
    msg.error.assign("JBTJYAWONJSQIHJHXYFPSMTMPYXVGEKWXRPRCQEFGWDKWTFUYKQBBNGLWLCLFZAVIJRVCTHJANRIOVMAOGXIUKGSTEMLJBFWXQOJIUIRZHRENUVHYPQYUOXNEAXERXOSZNANGMFAQNSYPUDHPTC");

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
    msg.setTimeStamp(0.627061330996);
    msg.setSource(59597U);
    msg.setSourceEntity(161U);
    msg.setDestination(42260U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.396889844741);
    msg.setSource(60152U);
    msg.setSourceEntity(15U);
    msg.setDestination(16531U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.75550349601);
    msg.setSource(53328U);
    msg.setSourceEntity(76U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.0801323261145);
    msg.setSource(36536U);
    msg.setSourceEntity(254U);
    msg.setDestination(60819U);
    msg.setDestinationEntity(45U);
    msg.op = 25U;
    msg.speed_min = 0.629015991206;
    msg.speed_max = 0.202567611749;
    msg.long_accel = 0.140235966585;
    msg.alt_max_msl = 0.248071866002;
    msg.dive_fraction_max = 0.292559965667;
    msg.climb_fraction_max = 0.676989617887;
    msg.bank_max = 0.432939768023;
    msg.p_max = 0.666326190474;
    msg.pitch_min = 0.958848796029;
    msg.pitch_max = 0.0799222928366;
    msg.q_max = 0.0414903782089;
    msg.g_min = 0.296288463969;
    msg.g_max = 0.303571207221;
    msg.g_lat_max = 0.76616071178;
    msg.rpm_min = 0.79835362351;
    msg.rpm_max = 0.0603202836027;
    msg.rpm_rate_max = 0.957516843706;

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
    msg.setTimeStamp(0.0382760168389);
    msg.setSource(5043U);
    msg.setSourceEntity(198U);
    msg.setDestination(2590U);
    msg.setDestinationEntity(118U);
    msg.op = 220U;
    msg.speed_min = 0.312069445245;
    msg.speed_max = 0.908804304142;
    msg.long_accel = 0.344942956416;
    msg.alt_max_msl = 0.0261330463458;
    msg.dive_fraction_max = 0.208005740778;
    msg.climb_fraction_max = 0.873127188552;
    msg.bank_max = 0.0994749468591;
    msg.p_max = 0.156775577233;
    msg.pitch_min = 0.757904789926;
    msg.pitch_max = 0.788515422978;
    msg.q_max = 0.783072185016;
    msg.g_min = 0.613590659508;
    msg.g_max = 0.729217084031;
    msg.g_lat_max = 0.400241909617;
    msg.rpm_min = 0.900212580797;
    msg.rpm_max = 0.257370258975;
    msg.rpm_rate_max = 0.479227670016;

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
    msg.setTimeStamp(0.714982213675);
    msg.setSource(29249U);
    msg.setSourceEntity(201U);
    msg.setDestination(26922U);
    msg.setDestinationEntity(118U);
    msg.op = 125U;
    msg.speed_min = 0.975851849626;
    msg.speed_max = 0.955236326963;
    msg.long_accel = 0.350844842969;
    msg.alt_max_msl = 0.667071493958;
    msg.dive_fraction_max = 0.259325084831;
    msg.climb_fraction_max = 0.685221380773;
    msg.bank_max = 0.0270299156644;
    msg.p_max = 0.621230609408;
    msg.pitch_min = 0.0422400036771;
    msg.pitch_max = 0.868242476478;
    msg.q_max = 0.463809830741;
    msg.g_min = 0.571941560628;
    msg.g_max = 0.0533779438308;
    msg.g_lat_max = 0.35174211604;
    msg.rpm_min = 0.664825868965;
    msg.rpm_max = 0.881272469675;
    msg.rpm_rate_max = 0.928322830886;

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
    msg.setTimeStamp(0.689447881482);
    msg.setSource(33294U);
    msg.setSourceEntity(176U);
    msg.setDestination(58654U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.331760667332);
    msg.setSource(17745U);
    msg.setSourceEntity(157U);
    msg.setDestination(48436U);
    msg.setDestinationEntity(109U);
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3971648951U;
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
    msg.setTimeStamp(0.443681341457);
    msg.setSource(31315U);
    msg.setSourceEntity(34U);
    msg.setDestination(19520U);
    msg.setDestinationEntity(102U);
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 254U;
    tmp_msg_0.value = 0.781255801927;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.211962307656);
    msg.setSource(35998U);
    msg.setSourceEntity(226U);
    msg.setDestination(22379U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.436417593322;
    msg.lon = 0.722737225986;
    msg.height = 0.819017074192;
    msg.x = 0.93673841605;
    msg.y = 0.659602991126;
    msg.z = 0.793757008045;
    msg.phi = 0.583678374122;
    msg.theta = 0.88212495607;
    msg.psi = 0.806445389315;
    msg.u = 0.293419772179;
    msg.v = 0.550130827818;
    msg.w = 0.591149605824;
    msg.p = 0.0619285257949;
    msg.q = 0.250333644094;
    msg.r = 0.573845707875;
    msg.svx = 0.590717182907;
    msg.svy = 0.212377307288;
    msg.svz = 0.940235517039;

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
    msg.setTimeStamp(0.251089279228);
    msg.setSource(11987U);
    msg.setSourceEntity(105U);
    msg.setDestination(33114U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.609024959497;
    msg.lon = 0.850182382008;
    msg.height = 0.446951013606;
    msg.x = 0.95152531589;
    msg.y = 0.905811787412;
    msg.z = 0.373290770748;
    msg.phi = 0.344992973455;
    msg.theta = 0.752154596085;
    msg.psi = 0.485821231971;
    msg.u = 0.219899222328;
    msg.v = 0.949737592125;
    msg.w = 0.877932948639;
    msg.p = 0.0762790943014;
    msg.q = 0.129967606286;
    msg.r = 0.181012021465;
    msg.svx = 0.561400925104;
    msg.svy = 0.681442006486;
    msg.svz = 0.930939482597;

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
    msg.setTimeStamp(0.515502377315);
    msg.setSource(16687U);
    msg.setSourceEntity(248U);
    msg.setDestination(10609U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.992727586968;
    msg.lon = 0.21528894992;
    msg.height = 0.627424679434;
    msg.x = 0.196964989529;
    msg.y = 0.0482181183219;
    msg.z = 0.561206332573;
    msg.phi = 0.284289625907;
    msg.theta = 0.0391871822083;
    msg.psi = 0.502317533242;
    msg.u = 0.877997147558;
    msg.v = 0.285129676044;
    msg.w = 0.953735249081;
    msg.p = 0.267750297632;
    msg.q = 0.720830263011;
    msg.r = 0.370324788935;
    msg.svx = 0.221940883774;
    msg.svy = 0.325124782296;
    msg.svz = 0.291955697169;

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
    msg.setTimeStamp(0.939174839386);
    msg.setSource(1191U);
    msg.setSourceEntity(86U);
    msg.setDestination(6315U);
    msg.setDestinationEntity(66U);
    msg.op = 222U;
    msg.entities.assign("PTIRHNNWSHOZDCMXAAYQAZKSNINCEXETCRMUZPPWMEDYYJDNSTEVKBMTHLBTUYHIIHGURYHAEQQVYEDFHJPKZDKLUGUIBNPLVQBVSJMROTKQGRQLIXGXFOVUDXRJNQTGPKDMCNBOJTNIQOEAYWLSUWRPOCJUFFEUJEKVWFOAQGRQXWRYDOKGBVDMZGUZ");

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
    msg.setTimeStamp(0.230624699669);
    msg.setSource(58766U);
    msg.setSourceEntity(131U);
    msg.setDestination(9456U);
    msg.setDestinationEntity(162U);
    msg.op = 187U;
    msg.entities.assign("FBAWFRHDIPVUKDWHAQQBEZWEABFXSUKCVVJPQZAKPXLLJRVTKLHCIZFOXNJVBUCGOORSUHUAEKIZXOTSQBPMJFEWYNNNCRPMLONEYBTEYLSFPSWBATSKQGQJVZGDQHVJLWLWHWGREMIQCNIGCGRSFWGEFRSYTHTUTZBFIGOLU");

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
    msg.setTimeStamp(0.763708251068);
    msg.setSource(62233U);
    msg.setSourceEntity(34U);
    msg.setDestination(17840U);
    msg.setDestinationEntity(31U);
    msg.op = 217U;
    msg.entities.assign("GAVAXHGLWSWECXLJLEJTACSYRFJKNYRQVELCGDOKBZZPATQNXICZFROGFHSYUGMUACDPWSIDZWMXZGROUCBAHPJNAJQIMEXDCNYHOVQSKFUFGSXOKLTWCFEQJUKJKLZPVIFVPVQWBEPLQMEWXVWWFCNJINLMGIXFQIQHRLDZZKSAQBEUTDOLRYMHKHKTUTBYUTPHPMNOBNMSDYZMIOBVUDOKSMXWRGRNXPTJYTNRVJSFRHCOITVUDZPGYDEBB");

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
    msg.setTimeStamp(0.737503632013);
    msg.setSource(28893U);
    msg.setSourceEntity(100U);
    msg.setDestination(55667U);
    msg.setDestinationEntity(72U);
    msg.type = 102U;
    msg.speed = 29429U;
    const char tmp_msg_0[] = {-118, 15, 97, 22, -90, 25, 103, 7, -45, 39, 45, -26, -86, 117, 126, 68, -105, -35, -120, 50, 123, -70, -87, 19, 6, -127, 38, 112, 10, -94, -52, 71, 76, 76, -65, 116, -105, -43, -64, 71, -111, -90, 9, -95, 33, -54, -82, 33, 71, 91, 58, 32, -15, 57, -6, -126, 54, -125, 53, 31, -127, 104, -113, 52, -55, -17, 126, -60, -58, -91, 103, 38, -74, 96, -75, 77, -40, -3, 124, -56, 32, 10, 47, -5, -127, 108, -96, -44};
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
    msg.setTimeStamp(0.933093018883);
    msg.setSource(10801U);
    msg.setSourceEntity(194U);
    msg.setDestination(6788U);
    msg.setDestinationEntity(146U);
    msg.type = 234U;
    msg.speed = 11548U;
    const char tmp_msg_0[] = {-4, 117, -59, 30, -87, 62, 115, -110, 124, 93, -109, -101, -58, 45, -93, -100, -65, -118, 54, -33, -5, 74, -51, 103, 120, -86, -31, 15, 95, -45, 96, 51, -36, 18, 96, 8, -60, -35, 86, -128, 4, 45, 53, 92, -86, 18, 102, 6, 71, 102, 98, 81, 29, -18, 40, -12, 55, -74, -119, 25, 11, 90, 54, 101, -21, -1, 49, 26};
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
    msg.setTimeStamp(0.353697811097);
    msg.setSource(26945U);
    msg.setSourceEntity(202U);
    msg.setDestination(43418U);
    msg.setDestinationEntity(213U);
    msg.type = 18U;
    msg.speed = 25899U;
    const char tmp_msg_0[] = {93, -45, 111, 113, -70, -27, -111, 31, -111, -65, -47, -29, 6, 81, 114, 114, -93, -46, 83, -24, -54, 38, 116, -98, 67, 25, 37, -63, 42, -48, -36, 103, 47, 62, -63, -71, 104, -102, -83, 17, -35, -93, 56, -72, 8, -76, 6, 105, -99, 112, -13, 12, -19, -123, 74, -70, 116, 99, 117, -48, 119, -32, 14, -41, 92, 8, 49, -20, 103, -60, 22, 89, 9, 58, 12, -21, -36, 102, 116, -92, 90, 44, 3, -56, 84, 6, -3, 48, 102, -43, -4, 125, 64, -2, 4, 104, -88, 14, 115, -4, 123, -101, -43, -124, 82, -32, -19, 60, 26, 5, -22, -1, -112, -122, 54, -91, -107, 78, 117, 87, 6, 1, -104, -102, 71, 38, -42, 2, -111, 24, 59, -5, 34, 25, 51, -34, 117, -77, -106, 4, 80, 8, 32, -118, 7, 92, 43, -63};
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
    msg.setTimeStamp(0.0568244715465);
    msg.setSource(8981U);
    msg.setSourceEntity(127U);
    msg.setDestination(55184U);
    msg.setDestinationEntity(33U);
    msg.op = 151U;
    msg.tas2acc_pgain = 0.0614410662716;
    msg.bank2p_pgain = 0.931273922224;

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
    msg.setTimeStamp(0.341373302692);
    msg.setSource(41775U);
    msg.setSourceEntity(222U);
    msg.setDestination(16286U);
    msg.setDestinationEntity(160U);
    msg.op = 95U;
    msg.tas2acc_pgain = 0.532040090922;
    msg.bank2p_pgain = 0.155970152248;

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
    msg.setTimeStamp(0.359911735432);
    msg.setSource(30393U);
    msg.setSourceEntity(117U);
    msg.setDestination(10172U);
    msg.setDestinationEntity(93U);
    msg.op = 194U;
    msg.tas2acc_pgain = 0.820556712214;
    msg.bank2p_pgain = 0.180276763548;

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
    msg.setTimeStamp(0.760264994519);
    msg.setSource(12081U);
    msg.setSourceEntity(119U);
    msg.setDestination(787U);
    msg.setDestinationEntity(122U);
    msg.available = 286303345U;
    msg.value = 89U;

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
    msg.setTimeStamp(0.0627723552789);
    msg.setSource(53582U);
    msg.setSourceEntity(28U);
    msg.setDestination(11353U);
    msg.setDestinationEntity(116U);
    msg.available = 3750503424U;
    msg.value = 65U;

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
    msg.setTimeStamp(0.436870671094);
    msg.setSource(41477U);
    msg.setSourceEntity(217U);
    msg.setDestination(2131U);
    msg.setDestinationEntity(83U);
    msg.available = 1169966818U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.179483022724);
    msg.setSource(59696U);
    msg.setSourceEntity(119U);
    msg.setDestination(44281U);
    msg.setDestinationEntity(84U);
    msg.op = 42U;
    msg.snapshot.assign("IWEALFVKYJRTNTJKHQPAHQLFWYVHEBBFCVKIPGVAWOFHCIJFHBMCKSLHSPNRNSBOXTDXZCFGPXAJCTGYNLECASBNXSXUXPAARJQWEPKQPKNQOOJWDEOLOZQFVUJUGEYTDFBSHIDHIZCRCQSIQVZSGMDMXHZBUIPBWVMVPDXYAEZTDOUOLJANQFDYLZLCFLLIRUZMNW");
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.965325005634;
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
    msg.setTimeStamp(0.774896773508);
    msg.setSource(55519U);
    msg.setSourceEntity(206U);
    msg.setDestination(26282U);
    msg.setDestinationEntity(240U);
    msg.op = 143U;
    msg.snapshot.assign("WHZVNYYUFPWQJHAOFOTJILQKUFDVYNOAEKOVOIPKRGBRWTCEMNU");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 198U;
    tmp_msg_0.reason = 171U;
    tmp_msg_0.value = 0.0208079703466;
    tmp_msg_0.timestep = 0.62827217068;
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
    msg.setTimeStamp(0.800508066777);
    msg.setSource(49364U);
    msg.setSourceEntity(254U);
    msg.setDestination(23529U);
    msg.setDestinationEntity(80U);
    msg.op = 144U;
    msg.snapshot.assign("BBOIIZMJFUBJQXDADOLAIJSVEMZUGXMBVNYRSGUNEONLDYGHWNQFVCYDQLIUQWATMHHQVPWBMYRTNEGPVZIMDCQBZKJSEIKRNXWHLEFREALSWTOLXXPGBIMMCHTKEJZGCMLTUXWRDKPOUROKCXFGHDEJXYTVZEXAWOHGJVBWQQOFZYLUMUDDOVDTKHJSIRYZRNVCZGTSBJVPSSSASOJKPKFALWUYAUNCNFRNYLCPCFACTBEIHTIHKFZRQF");
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 4U;
    tmp_msg_0.op = 184U;
    tmp_msg_0.err_mean = 0.229211124955;
    tmp_msg_0.dist_min_abs = 0.375125797664;
    tmp_msg_0.dist_min_mean = 0.102353354208;
    tmp_msg_0.roll_rate_mean = 0.706695911553;
    tmp_msg_0.time = 0.0435430498128;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 11U;
    tmp_tmp_msg_0_0.lon_gain = 0.879560613031;
    tmp_tmp_msg_0_0.lat_gain = 0.649547502687;
    tmp_tmp_msg_0_0.bond_thick = 0.29878566655;
    tmp_tmp_msg_0_0.lead_gain = 0.224791814263;
    tmp_tmp_msg_0_0.deconfl_gain = 0.210102124633;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.622671088935;
    tmp_tmp_msg_0_0.safe_dist = 0.789262002343;
    tmp_tmp_msg_0_0.deconflict_offset = 0.932603319132;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.834226251978;
    tmp_tmp_msg_0_0.accel_lim_x = 0.107007852615;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.429659955645);
    msg.setSource(46241U);
    msg.setSourceEntity(17U);
    msg.setDestination(44483U);
    msg.setDestinationEntity(41U);
    msg.op = 61U;
    msg.name.assign("CTMRZZGUQUJTRGSKKIODQHKRZOBOECVVWECHADLPFZNVONYXIIHUCSJACMXUPKEUKUJRJHNOCYNPJMGFLREKODLFQSBADWXAPXAPSVJVILQQCBETVRTUJAWSREZNGSFXHAYZZGZOYBDNQGIBVQKJFANIWTGCGUHMLFSFWMKUNAFDXTEFBTPVEBPLHTSMIOLDUIWPQJLVAGMDS");

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
    msg.setTimeStamp(0.480395984814);
    msg.setSource(21803U);
    msg.setSourceEntity(241U);
    msg.setDestination(48224U);
    msg.setDestinationEntity(186U);
    msg.op = 228U;
    msg.name.assign("ATXJUFBQOQJKOFFSWYKUOFCIVRNZPCMYUIHHFLRKAQVHXDTBQDGGARTUIRRYNPAPLKNYWLLMVNJYRHXZCRLWMZMTSATGWESVQFRVNNFIWJAZADAEVSDZIYNKHBPENOXKWZCGLJKMZWLBPSQLLYJCZXNVINBVPBXUBEIOPTEDFFPGDZSJQCKUUFIEAWJGSCMRLOYQTOCWDMHGCKSUPIDHPIWXTVYXDGBEEJMSRKEEDJGHUBBUXSXTMHHGOMQ");

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
    msg.setTimeStamp(0.0144893233301);
    msg.setSource(51681U);
    msg.setSourceEntity(235U);
    msg.setDestination(10162U);
    msg.setDestinationEntity(56U);
    msg.op = 205U;
    msg.name.assign("NPRIXOKVLKEEJAOUHYERJYGHJSAHBBEKYCLNEDGRPBVCZ");

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
    msg.setTimeStamp(0.334869886509);
    msg.setSource(8431U);
    msg.setSourceEntity(129U);
    msg.setDestination(46346U);
    msg.setDestinationEntity(50U);
    msg.type = 17U;
    msg.htime = 0.6784247259;
    msg.context.assign("GCRIYTFUYZLMSXMVRDMYVOFHRAQCEJYKMELRHPCGXJIUPTMAPBUPPFEGSIKBDJAWLLJQMZEXVOJMQVPCBXWRFXVJHSNWSZEXOSIHOOAPOCNTAFDWNBHOFTHWYTIFAKHYFTZDOQGEMGLNUKF");
    msg.text.assign("TWEJLZUJFQLJIAFWKR");

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
    msg.setTimeStamp(0.963660873875);
    msg.setSource(34107U);
    msg.setSourceEntity(141U);
    msg.setDestination(13800U);
    msg.setDestinationEntity(32U);
    msg.type = 176U;
    msg.htime = 0.504318107166;
    msg.context.assign("IIIDSZIHTKQPXXBBNCOQHZDALUGZFDEPZIEPCJUVGLMUSWVQUOQYELXNRUFOXRHDRKJSLOFYCNRHSDRGVKFRXGAQWLMVTNDKOBCXPAYZABELCLJYAPRSOWKBSMFDMTDFYRTBUYONTZEAEPJBQPMQAKIUWSYR");
    msg.text.assign("IGCVBUROKKEFAEDYTKQEWGOWFIKAJUEFULHNYOUTQUMTJQNJPWQBCJAQLXCLHMTRUBJPLHAVMTIJRXRXWSTZVWVOIPHLHMWGJRDFIGJUFUZYYKPICRMZTJSNBBVMKEHXLNGMQKQBZFZPDXAOTZGDVROKPWOHEVGCYSDSSB");

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
    msg.setTimeStamp(0.371159876275);
    msg.setSource(62077U);
    msg.setSourceEntity(193U);
    msg.setDestination(54139U);
    msg.setDestinationEntity(129U);
    msg.type = 244U;
    msg.htime = 0.129707682081;
    msg.context.assign("MWGGTKTQICGDNHLVJEOBHDGTQCUYNFILOSLXKOVXVYRMJZMPLNSIBCCHDTACHQMMPWUBSDRRWQQYQFZAAAWDSYOZAPBIZPTXOSNPUTYZWGYQBWGATL");
    msg.text.assign("ONUOHWPETRMTIYAEGSEIUJKRNQGLQEUTHXJCTNXVVDNWFAXMBDVWMFUEBFFZXMYJTHOBGDZXCZBCGFWTG");

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
    msg.setTimeStamp(0.0239065081403);
    msg.setSource(38722U);
    msg.setSourceEntity(35U);
    msg.setDestination(492U);
    msg.setDestinationEntity(182U);
    msg.command = 66U;
    msg.htime = 0.822295017173;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 107U;
    tmp_msg_0.htime = 0.421004600643;
    tmp_msg_0.context.assign("UUFBZOPTGFYJP");
    tmp_msg_0.text.assign("RZVGJBEKGTOTWZOFTTPYGCUSGFGQZUOYFNGDJQFGOKLELIRYSZRUVIUMFBDAYMEIENWUMECVPRKJLRXWSASGOEQYDTCNEBRXZGLIQLZCQQOSWAWNUHDXJSDUKAHBWANYPMVSQHJXUFARCUEWLQXXMKSIIHHFVECDPTBKJONFJIOIDGLMHKPRPBVBETYHIUAVNBHMNFCAJBZMCMIWPCKDWNMKCYRP");
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
    msg.setTimeStamp(0.203135903216);
    msg.setSource(51150U);
    msg.setSourceEntity(13U);
    msg.setDestination(15024U);
    msg.setDestinationEntity(250U);
    msg.command = 48U;
    msg.htime = 0.889498651593;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 8U;
    tmp_msg_0.htime = 0.700525026228;
    tmp_msg_0.context.assign("ZFLIEUSYJTDNFTFYRM");
    tmp_msg_0.text.assign("ASDTAZQKRZOCSGFPSJAOFHHVLUKUWRNCHYUJQVNYEXL");
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
    msg.setTimeStamp(0.0133759667007);
    msg.setSource(5427U);
    msg.setSourceEntity(158U);
    msg.setDestination(27096U);
    msg.setDestinationEntity(51U);
    msg.command = 253U;
    msg.htime = 0.420110059267;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 61U;
    tmp_msg_0.htime = 0.130725252533;
    tmp_msg_0.context.assign("ITGRRQLFCZVAGCTWABBWRMEDQLSMKAGCBPLXDVLNSZLDSLVEGVGJFSMTKVNNXBPITLPLINABXRUHKXAOJBCOWJAFWTAFRSYSUPORWNSTQHDWCHUQQJLOFCJZWEJWMHCHZIDHDHRIDZEKZOMGAEXVEPQYBGRMOXXMKWGXDULRDZUPYEKMYMNFZGKQRHETFITVQCYNPJUFVZYONESEYIYCWPUPAJKYBAIKFHPBY");
    tmp_msg_0.text.assign("RSFWLENCOFFJMSUHUCHLQBARZR");
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
    msg.setTimeStamp(0.716704172391);
    msg.setSource(24975U);
    msg.setSourceEntity(139U);
    msg.setDestination(7867U);
    msg.setDestinationEntity(173U);
    msg.op = 219U;
    msg.file.assign("TFBSWSZOGMELMQXLFXODNCJTMQZVQYOKPCKLHHMWNMKBWYETPEAMOXKPKOYCLVUWNSFSOVXRDGBYILVITIEXBUVAJVQSXDDPNRXTA");

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
    msg.setTimeStamp(0.906288229024);
    msg.setSource(23516U);
    msg.setSourceEntity(123U);
    msg.setDestination(47646U);
    msg.setDestinationEntity(81U);
    msg.op = 223U;
    msg.file.assign("OIOITTEPBOPCFKRHRPYKINLVFXSBL");

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
    msg.setTimeStamp(0.925087949483);
    msg.setSource(3313U);
    msg.setSourceEntity(170U);
    msg.setDestination(2867U);
    msg.setDestinationEntity(245U);
    msg.op = 177U;
    msg.file.assign("XLEVBHBZJBHRURDNUTYCQUWRZSBCXOMVQIKKXSJBHEQXT");

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
    msg.setTimeStamp(0.96936178728);
    msg.setSource(33786U);
    msg.setSourceEntity(243U);
    msg.setDestination(46872U);
    msg.setDestinationEntity(214U);
    msg.op = 40U;
    msg.clock = 0.989503455471;
    msg.tz = -80;

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
    msg.setTimeStamp(0.556484419441);
    msg.setSource(14300U);
    msg.setSourceEntity(237U);
    msg.setDestination(13912U);
    msg.setDestinationEntity(66U);
    msg.op = 248U;
    msg.clock = 0.196177538861;
    msg.tz = 109;

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
    msg.setTimeStamp(0.951684571011);
    msg.setSource(35347U);
    msg.setSourceEntity(91U);
    msg.setDestination(15581U);
    msg.setDestinationEntity(216U);
    msg.op = 64U;
    msg.clock = 0.270111502211;
    msg.tz = -100;

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
    msg.setTimeStamp(0.069366004745);
    msg.setSource(42636U);
    msg.setSourceEntity(207U);
    msg.setDestination(37558U);
    msg.setDestinationEntity(26U);
    msg.conductivity = 0.829463460049;
    msg.temperature = 0.275868816358;
    msg.depth = 0.823962672973;

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
    msg.setTimeStamp(0.77057055948);
    msg.setSource(4744U);
    msg.setSourceEntity(6U);
    msg.setDestination(63773U);
    msg.setDestinationEntity(51U);
    msg.conductivity = 0.798248745025;
    msg.temperature = 0.953193105426;
    msg.depth = 0.807143390469;

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
    msg.setTimeStamp(0.538302087275);
    msg.setSource(16823U);
    msg.setSourceEntity(15U);
    msg.setDestination(59709U);
    msg.setDestinationEntity(225U);
    msg.conductivity = 0.208977421075;
    msg.temperature = 0.239498749679;
    msg.depth = 0.406493147272;

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
    msg.setTimeStamp(0.36813470676);
    msg.setSource(64481U);
    msg.setSourceEntity(0U);
    msg.setDestination(58496U);
    msg.setDestinationEntity(107U);
    msg.altitude = 0.142106074418;
    msg.roll = 16332U;
    msg.pitch = 35414U;
    msg.yaw = 48291U;
    msg.speed = 22476;

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
    msg.setTimeStamp(0.0469163134665);
    msg.setSource(43531U);
    msg.setSourceEntity(33U);
    msg.setDestination(5811U);
    msg.setDestinationEntity(232U);
    msg.altitude = 0.0803512723288;
    msg.roll = 12370U;
    msg.pitch = 14280U;
    msg.yaw = 38738U;
    msg.speed = 11664;

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
    msg.setTimeStamp(0.680854998098);
    msg.setSource(39160U);
    msg.setSourceEntity(217U);
    msg.setDestination(25288U);
    msg.setDestinationEntity(240U);
    msg.altitude = 0.9051556729;
    msg.roll = 27860U;
    msg.pitch = 63200U;
    msg.yaw = 3985U;
    msg.speed = -26463;

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
    msg.setTimeStamp(0.420505661441);
    msg.setSource(24317U);
    msg.setSourceEntity(63U);
    msg.setDestination(5264U);
    msg.setDestinationEntity(9U);
    msg.altitude = 0.178805087458;
    msg.width = 0.42887388188;
    msg.length = 0.444843416858;
    msg.bearing = 0.378287482684;
    msg.pxl = -451;
    msg.encoding = 106U;
    const char tmp_msg_0[] = {-64, -16, 17, 83, -60, -12, 78, 19, -52, 32, 45, 51, 120, 18, 28, 100, -57, -63, 72, -103, -2, 55, -70, 17, 126, -57, -56, -96, 106, -58, 38, -14, 42, 8, -127, -118, 121, 105, 40, -64, -122, 33, -115, 122, -91, 69, 9, 2, -52, 96, 66, 76, 88, 55, 3, -98, 12, 73, 14, -34, 17, -8, -43, -109, 45, -2, 109, -104, 63, 15, 77, -84, -104, -24, -79, -116, -77, -126, -100, 107, -22, -56, -61, -46, 9, -85, -54, -34, -108, 16, -58, -77, -57, -38, 5, 100, 48, -103, -4, 64, -90, 29, 89, -7, 27, -63, -105, 18, 90, -85, 112, 63, -20, -51, 78, 104, -47, 91, 42, 80, 68, 47, 4, 115, -88, 17, -43, -56, 68, 81, 19, 104, 75, -33, 71, 15, 17, 82, 85, 81, -84, 59, -72, -91, -42, 109, 8, -88, 55, 90, 110, -6, -37, -56, 73, -125, 31, 120, 125, 115, 76, 9, -91, 84, -1, -67, 118, 35, -92, -89, 70, 13, 97, 11, 108, -82, -88, 29, -80, -2, 59, 45, 112, 43, 63, -3, 117};
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
    msg.setTimeStamp(0.516931376556);
    msg.setSource(884U);
    msg.setSourceEntity(80U);
    msg.setDestination(55640U);
    msg.setDestinationEntity(212U);
    msg.altitude = 0.234867527444;
    msg.width = 0.142385808105;
    msg.length = 0.279090164917;
    msg.bearing = 0.884529486328;
    msg.pxl = 14493;
    msg.encoding = 98U;
    const char tmp_msg_0[] = {-29, 103, 45, -87, -12, -116, 40, -123, -28, -73, 48, -73, -72, 116, 107, 28, 123, -54, 53, -114, 65, -104, -111, -12, -73, 43, -43, 113, -52, 103, -75, 94, -99, 18, 95, -31};
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
    msg.setTimeStamp(0.562003304111);
    msg.setSource(21003U);
    msg.setSourceEntity(133U);
    msg.setDestination(6888U);
    msg.setDestinationEntity(232U);
    msg.altitude = 0.151490851195;
    msg.width = 0.00431850221176;
    msg.length = 0.69908218906;
    msg.bearing = 0.374058827678;
    msg.pxl = -20078;
    msg.encoding = 15U;
    const char tmp_msg_0[] = {-23, 80, 76, 56, 80, 7, 70, -101, -79, 86, -47, -29, -39, -31, 25, 63, 37, 117, -83, 62, 60, 29, 44, -103, 119, -83, -34, 112, 46, 62, -124, -39, 11, -39, 22, -26, -64, -54, 75, 117, 76, 64, 28, -81, 22, 59, 67, -86, 20, 100, 32, -76, -15, 19, 71, -49, 20, 2, -3, -47, -104, 123, 113, 18, -88, 113, -86, -126, -9, 87, -45, 16, 5, 122, -98, -54, -12, 74, 22, 84, 83, -113, 123, -75, 29, 108, 108, -70, -124, 4, 8, 12, 122, 55, -50, -16, -38, 8, 122, 80, -29, -92, -29, 95, 65, 1, -41, -95, 15, 14, -51, 99, 1, -27, -44, -9, -120, 50, -14, -65, 12, -116, -66, -111, -7, -83, 65, -84, 40, 91, -113, -86, -40, 10, -15, 37, -18, 107, -123, 4, 122, 96, 98, -72, -42, -75, 111, -23, -63, 106, 24, -92, -36, -11, -85, 46, 71, -30, 104, 86, 7, 24, 105, 7, -123, -39, 116, -68, -35};
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
    msg.setTimeStamp(0.340185691559);
    msg.setSource(65070U);
    msg.setSourceEntity(210U);
    msg.setDestination(25102U);
    msg.setDestinationEntity(22U);
    msg.text.assign("WGTDSMTQXNNFCUODAQSPNGLOPVELJHKSIEMFWZPNAAZNHXECIRCBQIMEMWOWBUNCZ");
    msg.type = 187U;

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
    msg.setTimeStamp(0.308232103969);
    msg.setSource(58997U);
    msg.setSourceEntity(232U);
    msg.setDestination(27974U);
    msg.setDestinationEntity(247U);
    msg.text.assign("OCMYNKEGTKEIFKZYGQZGNPXBFFMIDZPMKJTKTIQNKKOUVYRWHHVEPETUUBUYDQQPGDHRYLHXGUAMBAKOXJYPFBNEYGO");
    msg.type = 24U;

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
    msg.setTimeStamp(0.043322404848);
    msg.setSource(52199U);
    msg.setSourceEntity(173U);
    msg.setDestination(22017U);
    msg.setDestinationEntity(219U);
    msg.text.assign("ZDSCAYWHDCRTEIOEMAJSREPYETNHBBHVWOPTVX");
    msg.type = 240U;

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
    msg.setTimeStamp(0.165414188919);
    msg.setSource(63419U);
    msg.setSourceEntity(217U);
    msg.setDestination(31502U);
    msg.setDestinationEntity(191U);
    msg.parameter = 175U;
    msg.numsamples = 15U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 18536U;
    tmp_msg_0.avg = 0.784272091931;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.888196346951;
    msg.lon = 0.213380342391;

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
    msg.setTimeStamp(0.159944931974);
    msg.setSource(111U);
    msg.setSourceEntity(43U);
    msg.setDestination(62097U);
    msg.setDestinationEntity(40U);
    msg.parameter = 35U;
    msg.numsamples = 162U;
    msg.lat = 0.332589282572;
    msg.lon = 0.866620653385;

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
    msg.setTimeStamp(0.312938317117);
    msg.setSource(62655U);
    msg.setSourceEntity(205U);
    msg.setDestination(60455U);
    msg.setDestinationEntity(251U);
    msg.parameter = 79U;
    msg.numsamples = 127U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 17205U;
    tmp_msg_0.avg = 0.993912360134;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0525096451779;
    msg.lon = 0.604955859524;

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
    msg.setTimeStamp(0.445848453686);
    msg.setSource(39882U);
    msg.setSourceEntity(71U);
    msg.setDestination(59163U);
    msg.setDestinationEntity(41U);
    msg.depth = 45270U;
    msg.avg = 0.883705502249;

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
    msg.setTimeStamp(0.490334868196);
    msg.setSource(54456U);
    msg.setSourceEntity(60U);
    msg.setDestination(844U);
    msg.setDestinationEntity(9U);
    msg.depth = 8814U;
    msg.avg = 0.989561185495;

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
    msg.setTimeStamp(0.210204860102);
    msg.setSource(26931U);
    msg.setSourceEntity(11U);
    msg.setDestination(30698U);
    msg.setDestinationEntity(58U);
    msg.depth = 31117U;
    msg.avg = 0.286035367442;

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
    msg.setTimeStamp(0.99736428392);
    msg.setSource(18024U);
    msg.setSourceEntity(36U);
    msg.setDestination(34328U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.963210294787);
    msg.setSource(940U);
    msg.setSourceEntity(19U);
    msg.setDestination(26717U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.529667898586);
    msg.setSource(10268U);
    msg.setSourceEntity(70U);
    msg.setDestination(15461U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.437242226897);
    msg.setSource(44374U);
    msg.setSourceEntity(45U);
    msg.setDestination(3597U);
    msg.setDestinationEntity(86U);
    msg.sys_name.assign("BKZFDEDZLOXRCPIACZTBUYTMCGXUXJLXAYYZQOMKXHMWOJVRCLKTVA");
    msg.sys_type = 101U;
    msg.owner = 31047U;
    msg.lat = 0.761486712352;
    msg.lon = 0.0405449891376;
    msg.height = 0.514713088729;
    msg.services.assign("WFHAZWWEXBPMURVZGBDGVLRAYPEYTCCEYAJBSBBGTNOIBGGNGIVYSASOVWSMPADKTIUEXLGDDCICLIDAHMZVWCJZPRFWUUTCPISZMKF");

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
    msg.setTimeStamp(0.423335794544);
    msg.setSource(7560U);
    msg.setSourceEntity(74U);
    msg.setDestination(25405U);
    msg.setDestinationEntity(119U);
    msg.sys_name.assign("KHKGWUTQYAWFZOTIGOWWBAGZMOFHVUNERDTJPXRZPHRIJCHJTLZQILIACCCRRSDVERJJATOZIQUKTFXMMQYZRLAEQPMVYWQYBUZDOBZMCPHWHXUZPVHSEUGQYXKBLIYKBKCUCSQLVTLGGNABDGNQOJRLVXASODLMMOIXLDUTRGUNYNHJEEBPACOSVSVSMNGDVPFYFZPBXGXKPIFSAXICDTUPKOJYELNHIEAVWXERDMQFYSFBNMEHDWNK");
    msg.sys_type = 68U;
    msg.owner = 18581U;
    msg.lat = 0.969621241234;
    msg.lon = 0.482514388331;
    msg.height = 0.663115009219;
    msg.services.assign("AXMMNHOIEMRCBFMSAJWPGPJAORSVTPHPKLUTQANNCHBJRCECZZZDNBKRCEQH");

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
    msg.setTimeStamp(0.193033947751);
    msg.setSource(24540U);
    msg.setSourceEntity(46U);
    msg.setDestination(48516U);
    msg.setDestinationEntity(145U);
    msg.sys_name.assign("VFXCFXQOCEGWLWGVQKEP");
    msg.sys_type = 69U;
    msg.owner = 3581U;
    msg.lat = 0.680410903982;
    msg.lon = 0.0805972019009;
    msg.height = 0.913937262987;
    msg.services.assign("PWZWCMXPIDGSDFNRXEHICNCWAXANMBXGTRJMKHPPPZMFJAFIODCCIHNZZDUUCQYRSSEZTOSDDQUMBOLZTAEVFJAENGQBWRBIVHQRYKNUCTYFSKIBBNXHG");

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
    msg.setTimeStamp(0.85761656534);
    msg.setSource(33444U);
    msg.setSourceEntity(29U);
    msg.setDestination(31787U);
    msg.setDestinationEntity(129U);
    msg.service.assign("GBOYRIBHFWDEJXMJSCPGKLPWSAQXPXOLUUWIDZQPWKRNXPJIDNYPCYNMKNTJDUSCYJCEQBLT");
    msg.service_type = 2U;

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
    msg.setTimeStamp(0.462088281684);
    msg.setSource(61498U);
    msg.setSourceEntity(114U);
    msg.setDestination(28603U);
    msg.setDestinationEntity(114U);
    msg.service.assign("FYAIPGQFTHPSA");
    msg.service_type = 151U;

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
    msg.setTimeStamp(0.847947474042);
    msg.setSource(15880U);
    msg.setSourceEntity(115U);
    msg.setDestination(35512U);
    msg.setDestinationEntity(113U);
    msg.service.assign("SBOTWRFFNEMYIZJNLGUWGXTOCBQDNFHRLOKHATIZMMHGKMJVOJZQAIDYEFZDRCOGWUQXJGUVUEFUHSPYVZBLDWYBEZRPYPQOECJXHAECLVTUWXSVECPKXXBMNFUNEBBHIPBSXKRAVNBHSIPHGNIRGCMQCYFJUSWVIDZPXSFNWCCUOMHMOTPDRDVA");
    msg.service_type = 219U;

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
    msg.setTimeStamp(0.607029233857);
    msg.setSource(45109U);
    msg.setSourceEntity(176U);
    msg.setDestination(42596U);
    msg.setDestinationEntity(125U);
    msg.value = 0.449595201004;

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
    msg.setTimeStamp(0.833809379408);
    msg.setSource(11531U);
    msg.setSourceEntity(138U);
    msg.setDestination(25009U);
    msg.setDestinationEntity(99U);
    msg.value = 0.266645346419;

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
    msg.setTimeStamp(0.447470390877);
    msg.setSource(17110U);
    msg.setSourceEntity(83U);
    msg.setDestination(50261U);
    msg.setDestinationEntity(77U);
    msg.value = 0.744789020789;

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
    msg.setTimeStamp(0.211105877898);
    msg.setSource(30595U);
    msg.setSourceEntity(166U);
    msg.setDestination(10200U);
    msg.setDestinationEntity(110U);
    msg.value = 0.853837564497;

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
    msg.setTimeStamp(0.970770340031);
    msg.setSource(48527U);
    msg.setSourceEntity(249U);
    msg.setDestination(30088U);
    msg.setDestinationEntity(227U);
    msg.value = 0.101236829861;

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
    msg.setTimeStamp(0.475489867925);
    msg.setSource(8752U);
    msg.setSourceEntity(86U);
    msg.setDestination(18597U);
    msg.setDestinationEntity(84U);
    msg.value = 0.767654518854;

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
    msg.setTimeStamp(0.749694168684);
    msg.setSource(30853U);
    msg.setSourceEntity(23U);
    msg.setDestination(50752U);
    msg.setDestinationEntity(186U);
    msg.value = 0.942614803148;

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
    msg.setTimeStamp(0.342635719921);
    msg.setSource(45486U);
    msg.setSourceEntity(41U);
    msg.setDestination(35625U);
    msg.setDestinationEntity(193U);
    msg.value = 0.769239617869;

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
    msg.setTimeStamp(0.18700649698);
    msg.setSource(17831U);
    msg.setSourceEntity(18U);
    msg.setDestination(10119U);
    msg.setDestinationEntity(191U);
    msg.value = 0.667146266778;

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
    msg.setTimeStamp(0.532750115163);
    msg.setSource(12012U);
    msg.setSourceEntity(97U);
    msg.setDestination(48088U);
    msg.setDestinationEntity(191U);
    msg.number.assign("KVAOWCUGHAQSZRFTXUIRAMEJBBSASUWPYJIQMXSUQLBMLLAKVQTFIJLRHVGYOBYYJTIMLHQR");
    msg.timeout = 28971U;
    msg.contents.assign("NEVJPHMCBQKKUQTHFUTJZYVFFZIZJPGSJKCTCIEJWFAAREUEKFMZLPGEEIUBHZVYVXNMQHRIBJUGSWQCUHLSYYBIFQOZSXTYCWP");

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
    msg.setTimeStamp(0.724447210928);
    msg.setSource(46545U);
    msg.setSourceEntity(221U);
    msg.setDestination(16187U);
    msg.setDestinationEntity(219U);
    msg.number.assign("NILCSXNJDBSJLDDVKEBQYGWZOPYIUIPFXQUAZNSBCKBYYQAKLNRJGGHFALPFZKCQMCRTMOBLIAZIMW");
    msg.timeout = 36829U;
    msg.contents.assign("HGGZKXYATRKCBCYZIRFQFGJKPHFNAWEUOPFDFFBXSJXEZNVMBAXFTYLYYGULZHIPIHFFPSGMLFJJLNTWXULBZDDCUQLMVVDSTWAOCZAUWOETSBINOOWKEDSTMUDBPVPBKCKILZYZOINIILSMMDVHUJTBGTPVQRQYGOKSPYRXVXUMIWCAEWTARQNQRBUJWWSHMHNUDKENJAQGPHHEZNSLHRVXQCCJYSPGRWEDCKEVIQAJGKVOX");

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
    msg.setTimeStamp(0.851976757314);
    msg.setSource(22433U);
    msg.setSourceEntity(28U);
    msg.setDestination(54177U);
    msg.setDestinationEntity(147U);
    msg.number.assign("DBLPWKYMQKIGTYSUFVCKMNBSQXMZCHZLTABVICANCSTWQCJPXEYAOAYCJWKQJULUUZPCYVRYOLEPFHZNGZMAZUAUOVESOQTPMDJBFPGBKJXPFBVOIFFVEGUVLRRWJHDWZHRGDGVJOOTPPXKLNIYEABFGRHHNYLJRNSMSIDKQOTCIHMRHRWGSIWNMAGD");
    msg.timeout = 48865U;
    msg.contents.assign("OQCRRYWRKZGMMCELDIVHWLWCXKKWTHLZQRYPCKFTISIXYDNEMZBQMBXMATNAXEGOISBJJLVRMYQELNAUFIHZTROUIXONRXAYVLKUGHTM");

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
    msg.setTimeStamp(0.0231724267885);
    msg.setSource(3182U);
    msg.setSourceEntity(78U);
    msg.setDestination(28729U);
    msg.setDestinationEntity(168U);
    msg.seq = 956468557U;
    msg.destination.assign("RYWENDVANEUFWKZTDYBGUISVBINHJXVQELZKZTVJNYULUCHTJLBLHYEMFDITRXKVCXQCXYARNFQOZRKSFBAYOJPDCFHAWTOQTHZSWAQXDFCBAMTPCGBPWZWOGXSJNMPBSPKWTVPGUPFOUMORHRAKEQALEIKRYQZEROXLSILVZVOUMZPFRUJMFTBAIJGOVYMGBZLNHNMDCUEQEPVDBYRGTNPJHWKGSLSMFYJIQCEJOAKSIIMHNCDLSXKIDCDX");
    msg.timeout = 46052U;
    const char tmp_msg_0[] = {-20, 124, -31, -11, -59, -33, -106, -87, 38, -111, 7, 12, 12, -47, 71, 81, 20, 64, -54, 1, -78, -81, -29, 40, -103, 97, 3, -50, 43, -85, 30, 27, -99, -101, -116, 101, -22, 56, -84, -68, 114, 46, 77, 87, -65, 53, -79, -66, -99, 16, -108, -121, -44, 8, 84, 88, 17, 0, 84, 74, -83, 63, -78, 59, -91, 104, 79, 50, -106, 1, -36, 42, -63, -44, -31, 50, 40, -14, -118, -73, 31, -58, 126, -59, -39, 72, -72, 86, -124, 21, -51, 23, 91, 104, -86, 83, -68, -59, -111, -54, 21, -89, -24, 110, 79, 114, 66, -95, 117, 38, -31, 45, -95, -83, -14, 93, 86, -102, -61, -65, -33, 0, 25, -92, -126, 21, 20, -85, -38, -60, -81, 40, 2, 119, -113, 83, 108, -31, -60, 47, 50, -92, 24, -5, 96, -26, 14, -17, 22, 39, 49, 68, 84, -53, -70, 112, 120, -65, 55, 45};
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
    msg.setTimeStamp(0.414280743321);
    msg.setSource(61914U);
    msg.setSourceEntity(138U);
    msg.setDestination(53503U);
    msg.setDestinationEntity(153U);
    msg.seq = 1222988545U;
    msg.destination.assign("NVFJBXHKNOAARUNCZZYTXZOFHQVMUCEUTVYIJYZRDPYNPBCINASVMDSETQYGTTAJZLJHCXQLTBQWJGPECGKCFZDOGDDKBSDGXJZVDUDIWORFFBSVMRKLPQDEUOAMLSSQXRPBWTEMMAIKIIFWJXSFB");
    msg.timeout = 17760U;
    const char tmp_msg_0[] = {-15, -54, -46, -109, 34, 61, -68, 55, 121, 29, -30, -28, 52, 79, 21, -91, -37, -30, 23, 61, 88, -56, -66, 94, 125, -90, 46};
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
    msg.setTimeStamp(0.794501632121);
    msg.setSource(44645U);
    msg.setSourceEntity(106U);
    msg.setDestination(10054U);
    msg.setDestinationEntity(162U);
    msg.seq = 523067958U;
    msg.destination.assign("TMPHWOBCJAFCRUTHKJWPLNUZWVIPXPPO");
    msg.timeout = 39195U;
    const char tmp_msg_0[] = {24, -123, 97, -123, -43, -51, 95, 16, 115, 14, -33, 44, -84, 36, 6, 91, 86, 22, 94, 96, 9, -101, -56};
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
    msg.setTimeStamp(0.187446214627);
    msg.setSource(44125U);
    msg.setSourceEntity(222U);
    msg.setDestination(56508U);
    msg.setDestinationEntity(225U);
    msg.source.assign("HTWBLYQQVFUFRMJZNQMEQKQRTMAKLBUJKLYEJRWOPEZOJJBNIWLKWGKAHB");
    const char tmp_msg_0[] = {-102, 30, 96, 26, 74, 7, 47, -104, 88, -123, -73, 43, -74, -8, -31, 122, 69, 112, 16, -27};
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
    msg.setTimeStamp(0.405905449878);
    msg.setSource(34789U);
    msg.setSourceEntity(164U);
    msg.setDestination(56074U);
    msg.setDestinationEntity(186U);
    msg.source.assign("CGWQRTYECIJBRTRDPUJGHKJRDQJKTPARWNEQUWKAIOBORNNHWPFUZVVCDTSZMFLHLEUGUSTAZRSHUEWMHYVVBCVXMCAIMIHXJPLYSTZMZCUEQFPNPXYAXIPRIKTCXKLWYRITDQIQEBGCLDKVFOBFOFUGWDVWKNO");
    const char tmp_msg_0[] = {124, -106, 79, -41, -36, 34, -83, -80, 111, 94, -4, 120, 123, -120, -14, 14, -100, -37, -128, -19, -72, -25, 47, 86, 88, 37, 65, 80, -94, 78, -113, -58, -91, -113, -126, -68, -90, -113, 103, 10, 100, -36, 6, -72, 121, -99, -46, -7, 116, -95, -123, 15, -22, -73, -63, -100, -53, 41, -59, 20, 114, -110, 111, -7, 99, -26, -58, -105, 24, 92, 97, -114, -25, -62, -93, 82, 76, 104, 47, -43, -98, 9, 122, -15, 49, -29, 76, 100, 70, -48, 102, -105, 18, 30, 34, 15, 52, 41, 58, 83, -125, -21, 58, -9, -95, 89, 92, 16, 20, -106, -116, 6, 79, -93, 120, -117, 26, -16, 17, -57, -5, 67, 112, -80, 55, -119, -99, -120, -76, -25, -118, -11, 110, 113, -44, 41, 42, -86, 61, -16, -6};
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
    msg.setTimeStamp(0.765836761226);
    msg.setSource(38595U);
    msg.setSourceEntity(157U);
    msg.setDestination(63600U);
    msg.setDestinationEntity(236U);
    msg.source.assign("MNRENBIUILQCFYXLWGLUAMSUFDJTSZHXKBFDOBEE");
    const char tmp_msg_0[] = {3, -109, 115, -112, 75, 74, 96, -37, -17, 14, 59, -14, -54, 21, 84, 97, 93, -92, 122, -34, 90, 6, 66, -50, 94, 114, -32, -108, 60, 46, -68, -109, -13, 88, -105, -71, 33, -117, -118, -115, -107, -92, -111, -67, -61, 85, 40, 36, 69, 17, 36, -10, -107, -85, 102, -57, 91, -61, 12, -68, -116, 104, -91, 95, 122, 93, 64, 84, 34, -108, -106, -67, -40, 22, 76, -54, 100, -20, -86, 39, -58, 11, -115, 12, 112, 81, -121, 13, 79, -44, -123, 28, -51, 9, 71, -104, 65, -39, -52, -92, 82, -116, 5, -10, -86, 43, 80, -13, -43, -33, -96, 90, -53, 58, 61, -101, 76, -26, -123};
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
    msg.setTimeStamp(0.0968017062583);
    msg.setSource(28668U);
    msg.setSourceEntity(122U);
    msg.setDestination(10728U);
    msg.setDestinationEntity(50U);
    msg.seq = 3958642793U;
    msg.state = 210U;
    msg.error.assign("ANRDUTGJCSZIEIVOLGVSEMTNDYYEAVIHPAAXHRPPAUEFWUQNFUWEWPPZHDNQAWSBNWWSAWGTTJYQNKOJXJWQIPRFTYLMDUHKQBSLTSXNQNVZXJI");

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
    msg.setTimeStamp(0.482577058698);
    msg.setSource(29362U);
    msg.setSourceEntity(16U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(130U);
    msg.seq = 818079948U;
    msg.state = 83U;
    msg.error.assign("TLHKEFSHQZOVUNIJJCNGKPWJUIFNKVXHADOSZNKSSZTQPZZIMABMNJCYXFANXFVKZUSQIMEFCZRJTBFGSLTIEQFILJWYBPQBVQGCAENVWHXRJMYPNYKEJBGZTULLXEVCHYBCFLWBIDDPQKJVIWEXD");

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
    msg.setTimeStamp(0.241477072278);
    msg.setSource(45267U);
    msg.setSourceEntity(141U);
    msg.setDestination(15092U);
    msg.setDestinationEntity(46U);
    msg.seq = 2381264871U;
    msg.state = 83U;
    msg.error.assign("JVTNZQXNPALMDPIXBKOFICHURPXFARKSQAFFIEIDLGAHSIXOWXQNMCYZBGSCOMLUCUBTULOASZRGZIJHMESLSQUDBXHLZCSIBFXWJOTKWQKQHULYZJOVGTYPNXIPZMEEZKLMWRTZSRRBIVKDEGVTHVWCBTCDCENUBLDEWPMZPEHYQFQGBDVTNCHFPORAU");

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
    msg.setTimeStamp(0.686631416047);
    msg.setSource(46293U);
    msg.setSourceEntity(232U);
    msg.setDestination(52914U);
    msg.setDestinationEntity(20U);
    msg.origin.assign("MEEOQBEWSSNBABPIMNMGBCLUNACGQFLXHPKFOEFHPJMDZWXZMSTQQGTNKDIZTJXTTDPCHPCHSZZQWHTJSCSOCYIUQGNRPIJVSARNEGVJCYZNYOEGFWMRGDFCXTRROUXBKWQEDOBUTIVAVSBLKOOZVLZIFLYAIVSYHKGHUBLPUNJVAGVTY");
    msg.text.assign("ZVMQYIXYARLNEGLZTSVCOIECAXZSJOWKPOMRHSQ");

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
    msg.setTimeStamp(0.94256832452);
    msg.setSource(28382U);
    msg.setSourceEntity(236U);
    msg.setDestination(9764U);
    msg.setDestinationEntity(222U);
    msg.origin.assign("AIYTRDPMXMOIZSQHZFCKUFQQJIEDXPPJNHOLFGNXXVVEXKKJSPFISKBNMLUNRPDQSWRMCUJBWZVWCVAEJX");
    msg.text.assign("PQZRYGNMSWKPWSDSXENEVHAOMZUQNEONWVPBRGBHTSILNOURUQYCCBEZRUXYXQBXKYMEKHZWTDMOMCYIRYKFJPUR");

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
    msg.setTimeStamp(0.385013914394);
    msg.setSource(48627U);
    msg.setSourceEntity(180U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("BTFRTLRRICPBGRTFEVYSQWLVSYAIDUXBZDGNXMFCFABUODYKXUMRJDEHMAJQLNZNTDAJPPEOOHSWPMGVIBIDBEXPIRVPQSSZADSHDYKTWHMHWVMKVKCQSQVENLBXFKCTMYCSOWWOLZMWCGXTHALGSDYABEACINU");
    msg.text.assign("LKFJANKYGPYFDIAQKKOQFJGSYPZCWIHZOJUIWZSUJKTBULDLJGIVGXUQICMOOANRPUQIJQWSLBUDWCGSYTKHWLJMUEMHPQMR");

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
    msg.setTimeStamp(0.699360369513);
    msg.setSource(1125U);
    msg.setSourceEntity(73U);
    msg.setDestination(18463U);
    msg.setDestinationEntity(157U);
    msg.origin.assign("PGBGIKUTWDQTBXVPSYKTAGLEMFUSO");
    msg.htime = 0.491281430975;
    msg.lat = 0.999803308844;
    msg.lon = 0.371514672435;
    const char tmp_msg_0[] = {-81, -65, -115, -27, 103, -22, -66, 27, 114, -43, -115, 68, 30, -128, 98, 32, -117, -107, -9, -92, -81, -5, -43, -52, -54, -21, 63, 36, -57, -82, -126, -36, -62, 69, -62, -92, -119, -2, 108, 22, -16, 94, 100, 6, 32, -33, -107, -52, 10, 63, -29, 106, -12, -44, -51, -40, 29, -72, 88, 30, 94, -47, -13, -51, 45, 105, 105, 23, 11, 72, 92, 31, 38, -44, 109, -90, -14, 36, 6, 125, 69, 41, -33, -1, -101, -70, 121, 64, 50, -61, -67, 69, 7, -111, -2, -99, -25, 87, 67, 15, 7, 59, -47, 9, 98, 102, 12, -26, -7, 80, 43, 50, 69, 38, 12, -73, 117, -69, 41, -122, -92, 55, 30, 83, 49, -40, 76, -13, -100, 111, 34, -41, 38, -102, -97, -104, 101, -110, 96, 107, 97, -83, -62, -86, 55, -10, -51, -71, -30, -31, -108, -41, -43, 44, 11, 90, -20, -53, 55, 83, 0, 78, -87, 35, -70, -105, -65, 1, 70, -95, 49, 121, 30, 124, 84, -64, 111, -13, -6, -73, -8, -102, -37, -103, 80, -104, 16, -73, 107, -105, 112, 82, 22, -72, 114, 10, 81, -53, -51, -66, 28, 53, 108, 101, -84, -61, -59, 109, 120, 58, -126, 104, -61, -107, -14};
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
    msg.setTimeStamp(0.922127894867);
    msg.setSource(61011U);
    msg.setSourceEntity(49U);
    msg.setDestination(13761U);
    msg.setDestinationEntity(209U);
    msg.origin.assign("LNSGCIMWGMBXYTPXVKUGEKSLFDZXDONIHNOFAIHDVKHJOVWPSGRUQVOUCTDPQXXZLTEKAMISDDSLLPTCPURUSUFGFQJVTRIOOIINXKWQSCZXHJBJOHXJNAQVAMIYSCERBEVNJHVJCELHWAFWP");
    msg.htime = 0.821646121048;
    msg.lat = 0.164104611777;
    msg.lon = 0.5681646791;
    const char tmp_msg_0[] = {-100, -81, 35, -107, 23, 120, -65, -59, 96, 110, 90, 21, -128, -47, -111, 110, 28, 81, 70, -98, 87, 26, 19, 122, 81, -34, 73, 10, 104, 29, -123, -107, -81, -89, 20, 58, -62, 118, -58, -21, -56, 119, 80, 1, -62, 86, -55, 30, 104, 14, 91, 102, -105, 93, 52, -122, -19, 82, 32, 73, -71, -76, -4, -58, -125, 40, 107, 16, 107, -50, -97, 101, 73, 121, -83, 110, 36, 12, 10, -86, 101, 109, -93, 116, -97, -68, -76, 36, -34, 32, -97, -77, 28, 96, -16, -38, -56, -101, 16, 40, -58, 10, 31, -69, 79, 94, -70, 58, -48, 69, 68, 79, -23, 104, 106, 111, -10, -42, -92, -19, 63, -13, -59, -11, -111, -66, -56, 29, -40, 61, -31, -37, 56, -63, -111, 73, 59, 15, -87, 60, 69, 34, -71, 31, -86, 69, 95, -70, 124, -46, 86, 43, -29, 64, -111, 10, 18, -29, -114, -106, -43, 117, 47, 89, -77, 65, -20, 92};
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
    msg.setTimeStamp(0.0819310502298);
    msg.setSource(39574U);
    msg.setSourceEntity(32U);
    msg.setDestination(35608U);
    msg.setDestinationEntity(152U);
    msg.origin.assign("PLNCMVEBBPZPETNNMFWZASDSNMMFWFEOLZXMACBBUIXDQNULGPMTVDDMLCKAGFGKBXJUFNWAKRLHUGKXOHDZYRHHOCQOAXKRMYREJXNQUEFJHACBGIIZXDQTKZRISASFLGHHENIDZWJPWHIHSRAQBNTPQVPBYRGCEUJOJEWOJITUYLQYJVLAGTKBZOQVCVKRVWKODBZTKTWYENCSUYRJQHVYGFDGP");
    msg.htime = 0.38322077257;
    msg.lat = 0.317217752798;
    msg.lon = 0.852865944979;
    const char tmp_msg_0[] = {23, 104, 47, -18, -17, 99, 59, -28, -43, 36, 6, 5, -68, 56, 6, 86, 94, -122, 85, -93, 75, -30, 94, -112, 68, -86, -4, 110, 26, 11, -9, -6, 106, 1, 62, -70, 126, -88, 81, 60, 102, 106, 53, -79, -11, -22, -62, 35, 39, 74, -38, 96, -117, 82, -83, 81, -10, 62, -86, 126, 125, -124, 53, -10, -21, 21, -33, -104, -12, -77, -26, -28, 117, -93, -99, -89, -81, 68, 125, 103, -57, -115, 67, 26, -54, -60, 67, 95, -17, 109, -48, -117, -84, -85, -22, 91, -111, -115, 108, -61, 77, 30, 41, -93};
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
    msg.setTimeStamp(0.721769463073);
    msg.setSource(40300U);
    msg.setSourceEntity(27U);
    msg.setDestination(51792U);
    msg.setDestinationEntity(20U);
    msg.req_id = 30311U;
    msg.ttl = 44621U;
    msg.destination.assign("WVBZUPPNZCHLBUAQSRKXZCGSEMISBJAGYOWOCKZHKYQDXTIRJJCDOJWUKDMGVELJUWGIQXAETFWFXMEHVASFQRPQZHRIKZBIUSNSDDLOREYOJFLYWNBSPGIHNM");
    const char tmp_msg_0[] = {52, 116, 22, 37, -108, -47, -55, 112, -41, 0, 92, 57, 71, 9, -17, 78, -116, -115, -26, 84, -17, -98, 69, 116, 49, 67, -120, 109, 118, 49};
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
    msg.setTimeStamp(0.622737300794);
    msg.setSource(65111U);
    msg.setSourceEntity(112U);
    msg.setDestination(6150U);
    msg.setDestinationEntity(30U);
    msg.req_id = 34374U;
    msg.ttl = 57003U;
    msg.destination.assign("ESOAAXRDJINHHGGTLWPTAGBTENITAJMFYCIJ");
    const char tmp_msg_0[] = {-99, -73, 44, 9, -35, 16, 71, 113, 24, -69, -44, -10, -66, 119, -107, 44, 25, 83, -114, -43, -1, -62, -42, -101, 88, -37, -26, 18, 61, 96, -2, -62, 118, 32, 123, 69, 64, 110, -98, -11, -95, -104, 68, 45, -77, -53, 117, 8, 96, 120, 47, 14, -103, 8, 48, -7, -91, -9, -106, -94, -80, -99, 58, 125, -102, -80, -9, -14, 93, -102, 78, -77, -97, -65, -3, 120, 110, -19, 64, -20, -14, -114, 84, -95, -88, 85, 24, -4, -39, -113, -11, 95, -125, 11, -83, 55, -58, 82, 111, 120, -79, -122, 54, -109, 4, -107, 16, 116, 123, 41, 64, -1, -70, -34, -62, 57, 67, -25, 6, 78, 100, 55, -104, -68, 64, -104, -112, -109, -35, -113, 47, -93, 115, -66, 39, -11, -119, -96, -113, 24, -120, -11, 38, -63, 78, -22, -120, -115, -105, 88, -125, -47, -10, -3, -38, 99, 24, 88, -33, -37, -4, 33, 49, 68, 72, 91, 98, -91, -121, -7, -36, 46, -42, -51, -55, 20, -123, -119};
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
    msg.setTimeStamp(0.587556233793);
    msg.setSource(52275U);
    msg.setSourceEntity(180U);
    msg.setDestination(29932U);
    msg.setDestinationEntity(243U);
    msg.req_id = 43705U;
    msg.ttl = 33077U;
    msg.destination.assign("SOINEHKGWAWBLESTKEAGTCYDQQXYNNLJZCXDTIFVGLZDJGAPDPDIKZKMXXJHTHBRHCQEYJTXCQSUMHHEWCBXUOQAVJUVZBEBYWPOBTWMGMOSMWUUGPDJKFOWKYKSZNKAZBUGQOXOMBEXSCTLJQVSPIYYRKNLSIYVCLPLEMA");
    const char tmp_msg_0[] = {5, 108, 123, 14, -127, 119, -31, -48, 126, -108, -1, -124, -22, -61, 125, 91, -60, 14, -128, -89, 80, -72, 82, -57, 23, -86, -115, 1, -55, -97, 57, -72, 2, -115, 88, -39, -51, 31, 82, -107, 125, 38, 61, -32, -41, -2, -59, 100, 48, -82, -112, 22, -44, -65, 87, 26, -49, 38, -102, 15, -11, -18, 123, -23, 33, 86, 70, 97, 27, 79, 59, -55, -30, 13, 92, 31, -4, 46, -28, 90, 14, 50, -83, 118, -35, -111, 102, -42, 58, 83, 25, -44, -3, 56, 30, -111, -111, -68, -127, 100, 25, -103, 109, 76, 105, 15, 124, 126, 114, -7, 123, -78, -55, 10, 82, -114, -120, 95, 70, 1};
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
    msg.setTimeStamp(0.249070967253);
    msg.setSource(6802U);
    msg.setSourceEntity(153U);
    msg.setDestination(60645U);
    msg.setDestinationEntity(210U);
    msg.req_id = 2997U;
    msg.status = 108U;
    msg.text.assign("TZSZRNQVGQMKHCVFEKNBIHBTANGRLNLSZDDVHWMMHHKACBVXFLPAIWCFYEAQYSIYPBWKIZRSNKJLRCWQPCFZMTFHWCJKBMMKVIWPXAGLVPCUMYOLEOEWRENEQOSYEOYFGCWWNDGFXODBJHUFTIRJZKHVNXCBDBPGPSHVRDARXFWZCAUJTYYQGORLGIYTLNIMULTEBSUFTQUDUZJVSAOXUXGMUQDSEQGOJIAIUQRNDPMVPPXAKJJSTKX");

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
    msg.setTimeStamp(0.311021737575);
    msg.setSource(62252U);
    msg.setSourceEntity(127U);
    msg.setDestination(16267U);
    msg.setDestinationEntity(216U);
    msg.req_id = 40173U;
    msg.status = 27U;
    msg.text.assign("GNSOMPYLJDFZMDYARJKPMWKQH");

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
    msg.setTimeStamp(0.0779385289203);
    msg.setSource(58235U);
    msg.setSourceEntity(47U);
    msg.setDestination(43760U);
    msg.setDestinationEntity(166U);
    msg.req_id = 48514U;
    msg.status = 180U;
    msg.text.assign("VBARDEUTTRAHJUUALHGCFSMXJVDPXBC");

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
    msg.setTimeStamp(0.440022307269);
    msg.setSource(11914U);
    msg.setSourceEntity(85U);
    msg.setDestination(14893U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("QHJMXQHLGUWHTTAEYDOPQIGDKAWGKFLYBMWSAUHJWEGXIRIWMCFMBEVDRXNQVZUTKHPJZTGTRATYFIUVSYBBFCCXBJNHHFRNOCSIDWWQILRSVIPNGYZGJHZOAQONYCOFSULWTXLPDLJCZUFXVAVQZTSLCTPAIFLDEHNFQARSROJXHKBODIEMZSGLABXADDEMJCONXGWRMCLRBYMTFCKJBPPEKPVIMNSYJUUXKZQQUGKVBUOEVYNKENKMPWZRY");
    msg.links = 247704070U;

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
    msg.setTimeStamp(0.556687291965);
    msg.setSource(6315U);
    msg.setSourceEntity(241U);
    msg.setDestination(12035U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("VGXUHQZGEZRXZXUWFOOFZVADBIPPGZUYAAYLWNTVBMNKHPQHMWWZSEKPLEWPCKUYLQPIRAGYYLUSXTSOXHENKAXQCRHOEIJJPQZMFRVOGTWLCBXZJIHOMOJICKDULAGMCRYTBLRGTMQMESIEMJNRBJYYXDHFFNIZNYWDCXNOSUKQTRCBAWWGHRBCQCOIQDTBUJDVPAJAVIVLBAMTDLNSFVTFFSKDEEDP");
    msg.links = 3690770030U;

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
    msg.setTimeStamp(0.896172073193);
    msg.setSource(24907U);
    msg.setSourceEntity(181U);
    msg.setDestination(25200U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("CJUCOXFRPZRYNUEEUTQAHWTEJNGIJHZOBZWOXNXXYXXATQAMGVOHIWLQLUOZSKZAMNWWNPSTDKCMMYFVDIACLEZVSLODHYORAIHVIKRWPDRSDFVTGIYBULFFBJPDNUZUINCSTGSHUEKIBCGKRPLHMWJOFKVJBVDHYMIAMLUHNDUMEFBGPSQQXZZBVTYPKXLBQYRRIOCLGFYYPTQC");
    msg.links = 4121211688U;

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
    msg.setTimeStamp(0.393663938477);
    msg.setSource(14321U);
    msg.setSourceEntity(41U);
    msg.setDestination(29715U);
    msg.setDestinationEntity(252U);
    msg.groupname.assign("LSZVOPNSDHZCNRGAOWRVMUFITKKMZDDLLCSOKQBPMAXRHZEYQOTIFQSBUBUEWNHESMJWEAFTBQDHRRXCYVPTXYIWJFVDVZAGPTCICJJAHLXFFBDFZKQPQNOAUKPJSSGUJYDYACRVFFTQLSNLKYOLDLVRUSRJIHKUNFPIBXRKQQMWBNRZLZYEJYIWIGAWKLXWYMUOBVNGACBAGEGDMGEPOPIHHEYUJMEJNMUHSXPXDNTCCMZVEGWHVTIZGCBQT");
    msg.action = 97U;
    msg.grouplist.assign("AXHJHWWVLPZZ");

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
    msg.setTimeStamp(0.915720420549);
    msg.setSource(13481U);
    msg.setSourceEntity(84U);
    msg.setDestination(28903U);
    msg.setDestinationEntity(137U);
    msg.groupname.assign("KTNAQCMFUNQDAFHWNIIEVUNPXYZMRHMXOSBJABKBDLWFSYVDIPYYVRFPYEJCULTVKLTQNCVDKAOLZCEAHSPBRUXGNELROXRPDPZZFXTIEIYFRBIZULGNEFBHDZVCWJKFNURGKBUWWAMRTOSHZVDWBSJPJ");
    msg.action = 167U;
    msg.grouplist.assign("VXQIXWUQFKOUPBWWTLHWNNMPQWQCDJOALHFMJNRJRSUFLHAKAXWMDWUSSNINLZXYHSPDDMGHAYKUSHLYDGRRNHIFBILBCAEVAYVSIXEEGGMKPZCUVXNBTOLXEVPFJFMYFEOBJGVHBKAQZRZJIHMOTQETYZWVGTEEOSVDZQTPY");

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
    msg.setTimeStamp(0.549975571161);
    msg.setSource(13901U);
    msg.setSourceEntity(166U);
    msg.setDestination(42631U);
    msg.setDestinationEntity(87U);
    msg.groupname.assign("BCKTYCCMACCHXLLPOUDEEZGMUGBLZMORNKXKXSXNRKOQSFVQVFDJZIGOBZSIHBTXWSOJCPSLUXQRARGPBYTMMWNAPZSRYPJPYUKTIWWQPVJKTNBMGVGNOVRLWJDUHLQDGTUFIRDCROUGVUIPJEAANMCQZFDIWDRMBVHF");
    msg.action = 184U;
    msg.grouplist.assign("QLVJRKYLEJDTPLCSZCQDSBIUXVVGTVMIDMDAHVMGMWBHXUJSUBRSBEWAQJOYQKUCODJHOPVJHBFWMVGIRIALNYBZUYKAFKVAPKFRNRJNNTXSVRXOWOALSSANNCRQPCXFP");

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
    msg.setTimeStamp(0.426011655413);
    msg.setSource(4322U);
    msg.setSourceEntity(142U);
    msg.setDestination(17567U);
    msg.setDestinationEntity(134U);
    msg.value = 0.706673858139;
    msg.sys_src = 24742U;

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
    msg.setTimeStamp(0.854196204888);
    msg.setSource(6636U);
    msg.setSourceEntity(112U);
    msg.setDestination(28354U);
    msg.setDestinationEntity(182U);
    msg.value = 0.302213454448;
    msg.sys_src = 14487U;

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
    msg.setTimeStamp(0.863353035778);
    msg.setSource(41353U);
    msg.setSourceEntity(137U);
    msg.setDestination(63001U);
    msg.setDestinationEntity(165U);
    msg.value = 0.681243004229;
    msg.sys_src = 39172U;

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
    msg.setTimeStamp(0.729653923442);
    msg.setSource(336U);
    msg.setSourceEntity(55U);
    msg.setDestination(65428U);
    msg.setDestinationEntity(132U);
    msg.value = 0.379650647245;
    msg.units = 74U;

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
    msg.setTimeStamp(0.147595985144);
    msg.setSource(32076U);
    msg.setSourceEntity(105U);
    msg.setDestination(40097U);
    msg.setDestinationEntity(243U);
    msg.value = 0.929399807984;
    msg.units = 173U;

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
    msg.setTimeStamp(0.422270915698);
    msg.setSource(60867U);
    msg.setSourceEntity(252U);
    msg.setDestination(47186U);
    msg.setDestinationEntity(18U);
    msg.value = 0.529752283921;
    msg.units = 102U;

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
    msg.setTimeStamp(0.477765194689);
    msg.setSource(38866U);
    msg.setSourceEntity(90U);
    msg.setDestination(18298U);
    msg.setDestinationEntity(87U);
    msg.base_lat = 0.647857954417;
    msg.base_lon = 0.907898424862;
    msg.base_time = 0.383989956564;

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
    msg.setTimeStamp(0.532252814104);
    msg.setSource(21048U);
    msg.setSourceEntity(117U);
    msg.setDestination(36865U);
    msg.setDestinationEntity(180U);
    msg.base_lat = 0.507178193307;
    msg.base_lon = 0.541528733449;
    msg.base_time = 0.841856567682;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 53906U;
    tmp_msg_0.priority = 76;
    tmp_msg_0.x = 17271;
    tmp_msg_0.y = -26666;
    tmp_msg_0.z = 4089;
    tmp_msg_0.t = 14319;
    IMC::PowerChannelControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WKBOXLDSDQFGVXNJERCSXCOWJUVJXIKVPSOAFFVOEPXPUGTETARVAUOKSJSTSADBHLIYYTGBBKMJFEZQNAEDJIAMXHZPCGWBMLGLBOREXSHIA");
    tmp_tmp_msg_0_0.op = 240U;
    tmp_tmp_msg_0_0.sched_time = 0.215136251835;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.388913045129);
    msg.setSource(4537U);
    msg.setSourceEntity(99U);
    msg.setDestination(58384U);
    msg.setDestinationEntity(154U);
    msg.base_lat = 0.104283976163;
    msg.base_lon = 0.542006292958;
    msg.base_time = 0.657611935974;

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
    msg.setTimeStamp(0.656681219355);
    msg.setSource(57709U);
    msg.setSourceEntity(153U);
    msg.setDestination(10455U);
    msg.setDestinationEntity(58U);
    msg.base_lat = 0.293858887778;
    msg.base_lon = 0.682125322378;
    msg.base_time = 0.0944435737832;
    const char tmp_msg_0[] = {92, 105, -12, 17, 0, -53, 58, -128, 64, -76, -73, 65, -125, -53, 55, 126, 1, 91, 63, -102, -111, 83, 62, 43, 35, -89, 107, -112, -114, 55, -113, 53, -8, -48, 30, -73, -89, 10, 15, 81, -88, -74, -114, -33, -67, -52, 118, -25, -34, -117, -39, 17, -76, 89, -4, -89, 39, -16, -128, 126, 2, 103, 124, 109, 110, 117, 41, -98, 19, 51, 109, 9, 53, 0, -96, 78, -16, -50, 109, 62, 117, 106, 31, 22, 24, 60, -63, 42, 10, -110, -81, 59, 32, -15, -3, 0, 108, 61, 48, 15, 67, -22, -39, -24, 87, -89, -97, -118, 116, -51, 104, -22, -5, 54, 99, 16, -85, -14, 13, -58, 103, -103, -111, -21, -128, 4, 78, -56, -59, 28, 22, 80, 36, -95, 1, -17, 118, -23, 61, -119, -121, -54, -24, -88};
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
    msg.setTimeStamp(0.48545839097);
    msg.setSource(39425U);
    msg.setSourceEntity(172U);
    msg.setDestination(42989U);
    msg.setDestinationEntity(45U);
    msg.base_lat = 0.566646106275;
    msg.base_lon = 0.0333529538309;
    msg.base_time = 0.257179402115;
    const char tmp_msg_0[] = {117, -95, 52, -20, -76, 109, -83, -18, 52, 97, 47, 40};
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
    msg.setTimeStamp(0.166082989154);
    msg.setSource(49616U);
    msg.setSourceEntity(248U);
    msg.setDestination(16035U);
    msg.setDestinationEntity(133U);
    msg.base_lat = 0.706360572498;
    msg.base_lon = 0.305509741787;
    msg.base_time = 0.53548852817;
    const char tmp_msg_0[] = {39, -43, 43, 16, -71, 19, 92, 121, -41, 11, -69, -71, -25, -34, 124, -68, 121, -119, -59, 86, -78, -31, -44, -51, 1, 76, -79, 92, 74, -24, -33, -32, -42, 66, 83, 100, 15, -83, -29, -35, -56, -48, -15, 38, -39, -39, 70, -17, -118, -39, 33, -102, 7, -103, -94, 15, 96, -126, -71, 41, 119, -103, -120, -99, 46, -30, -61, 25, 125, 49, 32, -116, 65, 18, -91, 102, -55, 74, 98, -48, -102, -97, -82, -22, 109, -120, 92, 67, -128, -119, -96, 113, 108, -32, -70, 57, -96, -112, -112, -45, 100, -94, 8, -10, -116, -11, 64, -55, -53, 0, -58, -125, -24, -13, -21, 125, 83, -115, 108, 42, 8, 56, 31, 124, -10, -25, -116, -60, 60, -24, 69, -5, -96, 24, -79, 12, 61, 122, 81, 122, 103, 74, 61, 10, 81, -11, 33, 46, 21, 49, 17, -73, -109, 43, -125, 40, -71, -38, 117, 35, 30, 115, -3, 110, 37, -41, 50, -52, -75, -83, 94, -53, 15, 81, 46, 114, 61, -14, 112, 93, -5, -118, 9, 16, 85, -21, -102, -107, -22, -40, -55, -100, 104, -3, -87, 49, -21, -27, 12, 58, 86, 103, 123, -119};
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
    msg.setTimeStamp(0.0642928111712);
    msg.setSource(60745U);
    msg.setSourceEntity(238U);
    msg.setDestination(40661U);
    msg.setDestinationEntity(197U);
    msg.sys_id = 45338U;
    msg.priority = -75;
    msg.x = 8327;
    msg.y = 29896;
    msg.z = 19935;
    msg.t = 15756;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 239U;
    tmp_msg_0.comm_interface = 188U;
    tmp_msg_0.period = 64825U;
    tmp_msg_0.sys_dst.assign("SJWKXSXGQRCUBCEAUVIGLEOBUWZHPPEAMWXSNGGABEYQKVHKCTZFWASKVWJMWMTKMWYENOVKSXYIHCPSMTFANDRQFOKQLHDLIQQITYRCAPXOJQNDGONMDHDYSNIJXFZEEMWZDPXUPLUIBUIMNLSRFHQOCZFNCCDVLJJTSZCVZBKOXGPVRBONMYGFHDOEGBMHTLOSPJPKDFVRHVUJAIGTRUPBHURDLAGEXZLBNXWAATIRVBYWJRCZYYZQT");
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
    msg.setTimeStamp(0.281613363746);
    msg.setSource(38657U);
    msg.setSourceEntity(216U);
    msg.setDestination(54686U);
    msg.setDestinationEntity(182U);
    msg.sys_id = 53735U;
    msg.priority = -21;
    msg.x = -10762;
    msg.y = -27981;
    msg.z = 10924;
    msg.t = -26373;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.250767147012;
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
    msg.setTimeStamp(0.898537935242);
    msg.setSource(55696U);
    msg.setSourceEntity(176U);
    msg.setDestination(4275U);
    msg.setDestinationEntity(174U);
    msg.sys_id = 9842U;
    msg.priority = -82;
    msg.x = -21599;
    msg.y = -23264;
    msg.z = -7824;
    msg.t = 31841;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 5701U;
    tmp_msg_0.value = 200U;
    tmp_msg_0.error.assign("ZLLIKIRQIVVYZDWZVRCDHFUBOLJJACQFREUWSNRQMLCVWBJTTD");
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
    msg.setTimeStamp(0.809012651507);
    msg.setSource(48375U);
    msg.setSourceEntity(187U);
    msg.setDestination(27872U);
    msg.setDestinationEntity(65U);
    msg.req_id = 26190U;
    msg.type = 251U;
    msg.max_size = 45005U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.254794986432;
    tmp_msg_0.base_lon = 0.658295771406;
    tmp_msg_0.base_time = 0.780441287296;
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
    msg.setTimeStamp(0.883300844187);
    msg.setSource(60667U);
    msg.setSourceEntity(94U);
    msg.setDestination(36641U);
    msg.setDestinationEntity(12U);
    msg.req_id = 32192U;
    msg.type = 77U;
    msg.max_size = 21514U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.79909115333;
    tmp_msg_0.base_lon = 0.997858321631;
    tmp_msg_0.base_time = 0.257988210446;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 9904U;
    tmp_tmp_msg_0_0.priority = 10;
    tmp_tmp_msg_0_0.x = -12332;
    tmp_tmp_msg_0_0.y = 30899;
    tmp_tmp_msg_0_0.z = -5693;
    tmp_tmp_msg_0_0.t = -22507;
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.action = 134U;
    tmp_tmp_tmp_msg_0_0_0.lon_gain = 0.604582019831;
    tmp_tmp_tmp_msg_0_0_0.lat_gain = 0.7813404256;
    tmp_tmp_tmp_msg_0_0_0.bond_thick = 0.167033018079;
    tmp_tmp_tmp_msg_0_0_0.lead_gain = 0.647110872011;
    tmp_tmp_tmp_msg_0_0_0.deconfl_gain = 0.914475142175;
    tmp_tmp_tmp_msg_0_0_0.accel_switch_gain = 0.499015472549;
    tmp_tmp_tmp_msg_0_0_0.safe_dist = 0.0268060850937;
    tmp_tmp_tmp_msg_0_0_0.deconflict_offset = 0.159601356337;
    tmp_tmp_tmp_msg_0_0_0.accel_safe_margin = 0.373191767477;
    tmp_tmp_tmp_msg_0_0_0.accel_lim_x = 0.0130545421625;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.351181673301);
    msg.setSource(21759U);
    msg.setSourceEntity(254U);
    msg.setDestination(34968U);
    msg.setDestinationEntity(144U);
    msg.req_id = 58382U;
    msg.type = 169U;
    msg.max_size = 55929U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.753835960462;
    tmp_msg_0.base_lon = 0.761428386845;
    tmp_msg_0.base_time = 0.281009547903;
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
    msg.setTimeStamp(0.793546200741);
    msg.setSource(51929U);
    msg.setSourceEntity(148U);
    msg.setDestination(21871U);
    msg.setDestinationEntity(165U);
    msg.original_source = 48945U;
    msg.destination = 43409U;
    msg.timeout = 0.154259567658;
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.815608382724;
    tmp_msg_0.type = 152U;
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
    msg.setTimeStamp(0.93509540643);
    msg.setSource(20532U);
    msg.setSourceEntity(245U);
    msg.setDestination(13519U);
    msg.setDestinationEntity(218U);
    msg.original_source = 42265U;
    msg.destination = 50646U;
    msg.timeout = 0.959883617763;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 3456328571U;
    tmp_msg_0.value = 158U;
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
    msg.setTimeStamp(0.360417439112);
    msg.setSource(167U);
    msg.setSourceEntity(115U);
    msg.setDestination(35788U);
    msg.setDestinationEntity(19U);
    msg.original_source = 34180U;
    msg.destination = 38758U;
    msg.timeout = 0.5929717152;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 18961;
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
    msg.setTimeStamp(0.794468675594);
    msg.setSource(16695U);
    msg.setSourceEntity(157U);
    msg.setDestination(3528U);
    msg.setDestinationEntity(116U);
    msg.type = 95U;
    msg.comm_interface = 5849U;
    msg.model = 19268U;
    msg.list.assign("XALRDWOKVUAAINSPGXHPVKIFLUNJVZODMAVAFQXZFYIEIBCMMPDUECCSTTTHNB");

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
    msg.setTimeStamp(0.395990695706);
    msg.setSource(21792U);
    msg.setSourceEntity(12U);
    msg.setDestination(4866U);
    msg.setDestinationEntity(252U);
    msg.type = 139U;
    msg.comm_interface = 18814U;
    msg.model = 23765U;
    msg.list.assign("WULDRTHWVGZCVLTWMRFKFHFYXPUTGBVSXHZPFULKOOPPBUAWOMAIRAIBTLAUVRZNCVIQNITTRMKZJJERXMJJGWFGEABAMYGVOPBWFXGYRJHDKE");

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
    msg.setTimeStamp(0.56091057737);
    msg.setSource(12156U);
    msg.setSourceEntity(85U);
    msg.setDestination(42266U);
    msg.setDestinationEntity(43U);
    msg.type = 211U;
    msg.comm_interface = 21626U;
    msg.model = 18589U;
    msg.list.assign("GCAFLHYYFHZUTWXUMRCOCQZKKNVQFNKTGCJBSRILITSPYIMZKYUMWRJTYRVQIKVTXCKTUVESKWMOWYZNDEWSDDDYHPLTMBSSQBXVXDVEMPNPOIBOTJHUXFGQJZIJOGDMVKDNPBBAGJLSGAMYLZBEQIUHWFEINHSNUQANRRPWMJTOGARZPIVADCXSJEPKATQLDHEULGZENWCUCJ");

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
    msg.setTimeStamp(0.896953144104);
    msg.setSource(6215U);
    msg.setSourceEntity(235U);
    msg.setDestination(58444U);
    msg.setDestinationEntity(99U);
    msg.type = 237U;
    msg.req_id = 342891143U;
    msg.ttl = 32541U;
    msg.code = 82U;
    msg.destination.assign("OZOVJLULKRWOEAJDNOLYAJEHEZVQBFFNGBMIQASGPZLACVUNCYIEMGUWYAHILQPXUNETUMDKNIFYJLDCTGHMSQFAORJWUNDSXGGSUZXJYD");
    msg.source.assign("PZGNZCDJJVTBOBIUMVGWUTISWYBBJKZFMGBYJLOJLDVCRYHOAGSRMLNKELUZUEXDGALFLXKCHRFREHNBTMXGOIAVMUDSPYVMHAJHFWTHURHUPJQZRXHQDWMCPIPOTQOATSWLNQAIOEAOBLHKPNGMQKK");
    msg.acknowledge = 150U;
    msg.status = 109U;
    const char tmp_msg_0[] = {-45, 109, 102, -108, 105, 42, 67, -17, -47, -33, 123, 76, -51, -61, 124, -121, 17, -108, 118, -110, 97, -107, -50, -39, 88, 109, 117, 36, 49, 75, 32, 4, 14, 39, 15, 114, -33, -24, 122, -123, -34, 72, -53, -123, 114, -49, -92, 68, 87, -88, 29, -32, -107, -85, -96, -30, -41, -84, -46, 111, -120, 75, -14, -23, 36, -79, -117, -69, -74, -45, -75, 98, -27, 42, 46, 53, -72, 20, 23, 85, -39, 35, 5, 91, -10, 24, -115, -79, -103, -29, -50, 40, -60, 99, -45, -105, 93, -44, -76, 117, 83, -54, 102, -68, 61, 55, 44, 88, -80, -101, 50, -8, -1, 117, 29, 91, -6, -8, 7, 1, -36, -28, -87, -78, -55, 14, 112, -63, -76, 102, -123, 78, 28, 43, -100, 12, -52, -26, 30, -126, -26, 103, 64, -112, -110, 88, -12, -28, 99, 12, 121, 30, -25, 118, 14, 117, 14, 114, -11, -28, 19, 126, 1, -23, -46, -48, -63, -82, -104, -41, -115, 32, -43, -103, -25, -68, -47, 52, -98, -3, -126, -31, -54, 23, 20, 17, 45, -108, 98, -50, 89, -76, -113, -53, -64, 91, -90, 43, 62, 118, -49, -12, 49};
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
    msg.setTimeStamp(0.66844962874);
    msg.setSource(46498U);
    msg.setSourceEntity(96U);
    msg.setDestination(58399U);
    msg.setDestinationEntity(214U);
    msg.type = 138U;
    msg.req_id = 701808889U;
    msg.ttl = 32279U;
    msg.code = 27U;
    msg.destination.assign("UOWSBEHCBSZEUEHVDKMBXAOMYGCAIPHIHLMXBDTQREVNWHILAMAZZBDHLUKNBWKQDPZNAKGWAFTFRNZIPKVVH");
    msg.source.assign("AIAFXONFJEKXSAGOIBFLIZTUFLWWMLFQNKNSMVLXMEIQFRPZIRDDTOALTOZSUPWRWUQBETB");
    msg.acknowledge = 191U;
    msg.status = 72U;
    const char tmp_msg_0[] = {21, -65, -99, -126, -10, 46, 13, -80, 10, -119, -105, 100, -31, -7, 30, 21, -112, 58, 25, -125, -47, -128, 121, 54, -128, 104, 100, -110, -37, -123, 126, -64, 1, -34, -36, 70, -29, 34, -84, -8, -123, 64, -85, -52, 77, 124, 117, -122, 66, 30, 37, 20, -114, -75, 70, 48, -102, -49, 122, -34, -64, -109, 39, 44, 80, -92, 28, 85, 49, 38, 84, 47, -88, -36, 2, -20, 65, 57, -106, 120, -67, -39, -24, -103, -128, 115, -91, -90, 74, 126, -122, 6, 83, 46, -25, -108, -68, 37, -14, 124, 46, -99, 18, -109, 105, 121, 120, 57, 101, -117, -75, -90, 34, 60, 34, -32, 29, -107, -22, -105, 109, -14, 123, 117, -121, 35, 37, -14, 48, 7, -77, -11, 96, 22, -122, -113, 40, 80, -110, 73, -115, -36, 115, 87, 35, 29, -85, -108};
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
    msg.setTimeStamp(0.0292798009085);
    msg.setSource(10577U);
    msg.setSourceEntity(199U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(38U);
    msg.type = 103U;
    msg.req_id = 2821754434U;
    msg.ttl = 18866U;
    msg.code = 7U;
    msg.destination.assign("LVUFVRZVJEGAKKBJSQZOSNVUXFUOHARCDNGZAWXNVKAMYMMHLPRFAPXFAIVIXWKNYMXHBTIKOMIXUIUPLTFLLZYJWQCZGVTFKBBQYBRJRPVFLSYWWHXOLHONCRQFKQNCQJDNPDCZJAHDQFSTDQUAWUBMZOHIEJSTCMETNBEAMYJHSOGBEBGZTYUPDABVVYIPDSLDETNEXYKCC");
    msg.source.assign("HLVBAYEDULKVOOKKFBMIUSRGPSBAWPTEEMXZMOGSTFHZAZTAXQPJEWCMXOJZEVNUJBUWWJFAXMODWKNHVCSMVOXTGQLIDQSPBIZPIZBUYIHYRAGUCJPRIKBTESNYYFDKNWJHQRUKKIYLQRGFOKYGNXNLESMPRWDZVTOTQGZXZRVCCDFHUCB");
    msg.acknowledge = 38U;
    msg.status = 10U;
    const char tmp_msg_0[] = {-75, 42, -28, 37, -11, 75, -43, 39, -92, 92, 59, -92, 49, 125, 112, -76, -45, -102, 6, 101, 51, -2, -43, -4, 114, -105, -22, 64, -76, -35, 68, -78, 42, 67, -116, 30, 18, -92, -98, -25, 119, -109, -93, -12, 61, 62, -69, -58, 5, -95, 69, 16, -58, 12, -26, 22, -113, 25, -39, -24, 77, -88, 86, -3, 66, 64, 56, 98, -76, -49, -41, 82, 96, 3, 64, 27, -39, -81, -78, 102, -98, -25, 39, -96, -100, -68, 43, 57, -73, 36, -1, -121, -94, 76, -50, -39, -96, -110, 67, 90, -74, 84, -87, 99, 70, -18, 57, -112, -111, 46, 53, -83, 124, -80, -93, 27, 63, -53, 18, 104, -25, -55, 34, -47, 107, -89, -91, 45, -102, 61, 53, 55, 99, -105, -24, -117, 106, -87, -87, 59, -103, -33, -97, 19, 109, 43, -85, -40, 7, -6, 47, -15, -85, 3, 9, -89, 22, 2, 42, 101, -116, 84, 41, -54, -80, 65, -65, 83, 57, -39, 122, -99, 99, 25, -3, -53, 22, -84, 13, 102, -18, 45, 53, -82, -107, 59, -45, 98, 10, -27, 106, 80, 36, -10, -41, 48, 83, 91, 41, 43, -52, 79, 53, -94, 100, -65, -55, 118, 118, -21, 76, 71, 95, -19, 42, -90, 7, -56, 91, -78, -69};
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
    msg.setTimeStamp(0.428164730858);
    msg.setSource(53590U);
    msg.setSourceEntity(153U);
    msg.setDestination(13515U);
    msg.setDestinationEntity(203U);
    msg.id = 0U;
    msg.range = 0.343022930484;

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
    msg.setTimeStamp(0.154527891285);
    msg.setSource(61624U);
    msg.setSourceEntity(228U);
    msg.setDestination(13267U);
    msg.setDestinationEntity(99U);
    msg.id = 164U;
    msg.range = 0.468585717935;

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
    msg.setTimeStamp(0.382350244302);
    msg.setSource(15159U);
    msg.setSourceEntity(220U);
    msg.setDestination(33395U);
    msg.setDestinationEntity(120U);
    msg.id = 187U;
    msg.range = 0.923459253022;

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
    msg.setTimeStamp(0.713404549269);
    msg.setSource(36525U);
    msg.setSourceEntity(74U);
    msg.setDestination(30456U);
    msg.setDestinationEntity(191U);
    msg.beacon.assign("DGFVFIKFUHE");
    msg.lat = 0.211138904697;
    msg.lon = 0.858588980248;
    msg.depth = 0.465963110321;
    msg.query_channel = 126U;
    msg.reply_channel = 241U;
    msg.transponder_delay = 22U;

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
    msg.setTimeStamp(0.599023950436);
    msg.setSource(22857U);
    msg.setSourceEntity(240U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(143U);
    msg.beacon.assign("XMPECYIBJWDOXCQXJFVTXKTFWJGLMDLIXTMZZTACZKKLTRUEVFPFUUMMEKAHQVAUUXQNUWRSLHFZOBVYSNINBBOEWVTAADVPMFSJBQMRKMQGHYODHSSYZHSNWLYLATSQKUEPUWIEOQJRGBYEGGWOGYHXYRBZIJAYIRPPEOQYGGRBBZEJIKTFJZCMWTVBKLPAQLOUHJUPVNJCQAWZCTOWXVMVPIFDDGINCGRSHSZHRIK");
    msg.lat = 0.21294822975;
    msg.lon = 0.598758985886;
    msg.depth = 0.567039959441;
    msg.query_channel = 105U;
    msg.reply_channel = 143U;
    msg.transponder_delay = 145U;

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
    msg.setTimeStamp(0.797242644117);
    msg.setSource(48162U);
    msg.setSourceEntity(42U);
    msg.setDestination(48192U);
    msg.setDestinationEntity(242U);
    msg.beacon.assign("XMNOXEBANYAUDPNMSFIFXJHKFVTCEBPFZPEPYDGLTNMOSCJCKKSSMUTYGGVYOAQFAKPBMOSUYELCHQGDDRLPVOBXKLYJPGUOMHBUEYQSTDJTFVGIWYUKMGCIBZ");
    msg.lat = 0.532504002748;
    msg.lon = 0.186225650946;
    msg.depth = 0.65552185352;
    msg.query_channel = 23U;
    msg.reply_channel = 105U;
    msg.transponder_delay = 9U;

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
    msg.setTimeStamp(0.771130564707);
    msg.setSource(63357U);
    msg.setSourceEntity(152U);
    msg.setDestination(20977U);
    msg.setDestinationEntity(154U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.181109773003);
    msg.setSource(52928U);
    msg.setSourceEntity(232U);
    msg.setDestination(15031U);
    msg.setDestinationEntity(92U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.0680897305025);
    msg.setSource(53146U);
    msg.setSourceEntity(23U);
    msg.setDestination(51610U);
    msg.setDestinationEntity(184U);
    msg.op = 153U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SSHVYEDQVCPFTIKMDNZXMUPLRUPBIOGZOCOEKPFSOAVCYKSXBLEYAUBPXNQIVMFWSYSRNBFHGNDZDLSOHBKRXXYCPEUQQVVRIZTFIHWJFVNNDAPZHYBBATQVAGMTSWEXNGHKCRBOWTSDHBTUMOJTHQXMQLTXGUIZFYZIDUYWWEWKNPYRZODFEUCQWLUKJJMBGXLALCNLLFGQDFIMJUTJWRMOWYEAIVRCJTGKESIZHONJZJAPCAPVEGDLHARGX");
    tmp_msg_0.lat = 0.897509577138;
    tmp_msg_0.lon = 0.788570902443;
    tmp_msg_0.depth = 0.916833033906;
    tmp_msg_0.query_channel = 190U;
    tmp_msg_0.reply_channel = 91U;
    tmp_msg_0.transponder_delay = 120U;
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
    msg.setTimeStamp(0.0669242254426);
    msg.setSource(59131U);
    msg.setSourceEntity(18U);
    msg.setDestination(25479U);
    msg.setDestinationEntity(121U);
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 831947626U;
    tmp_msg_0.value = 246U;
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
    msg.setTimeStamp(0.742787262346);
    msg.setSource(21121U);
    msg.setSourceEntity(88U);
    msg.setDestination(6848U);
    msg.setDestinationEntity(93U);
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.455951157476;
    tmp_tmp_msg_0_0.lon = 0.50346273246;
    tmp_tmp_msg_0_0.height = 0.396138577457;
    tmp_tmp_msg_0_0.x = 0.732863123313;
    tmp_tmp_msg_0_0.y = 0.976867148069;
    tmp_tmp_msg_0_0.z = 0.042753872425;
    tmp_tmp_msg_0_0.phi = 0.831480072081;
    tmp_tmp_msg_0_0.theta = 0.60222558417;
    tmp_tmp_msg_0_0.psi = 0.407027862689;
    tmp_tmp_msg_0_0.u = 0.607373214789;
    tmp_tmp_msg_0_0.v = 0.714927025869;
    tmp_tmp_msg_0_0.w = 0.830919886152;
    tmp_tmp_msg_0_0.vx = 0.00223095424316;
    tmp_tmp_msg_0_0.vy = 0.131243946666;
    tmp_tmp_msg_0_0.vz = 0.39637103346;
    tmp_tmp_msg_0_0.p = 0.617646428985;
    tmp_tmp_msg_0_0.q = 0.637998990884;
    tmp_tmp_msg_0_0.r = 0.410768151743;
    tmp_tmp_msg_0_0.depth = 0.259564036039;
    tmp_tmp_msg_0_0.alt = 0.655182358961;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 103U;
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
    msg.setTimeStamp(0.342863054656);
    msg.setSource(34800U);
    msg.setSourceEntity(31U);
    msg.setDestination(39288U);
    msg.setDestinationEntity(174U);
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 68U;
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
    msg.setTimeStamp(0.574944421766);
    msg.setSource(57637U);
    msg.setSourceEntity(248U);
    msg.setDestination(17457U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.921695700522;
    msg.lon = 0.911411636906;
    msg.depth = 0.680775662051;
    msg.sentence.assign("WVTUGYOSGLBIZSPVODEECQOUWHTNIZNMVESBGWTMWUZVVFAJOJAHUYAXYTZNBGTBSGQXLJMMYSFGEJLNMXJFLFXDAASKILCGKZRLEXRTKUBVNIQROPRQESCMQHWXNOFTPODTHRIUHKKUOTVYOFNZVFEGJGUYCBHHFYKRIASIRCWPXLDZYDDWPWQJQY");
    msg.txtime = 0.182231968132;
    msg.modem_type.assign("IYXCQEPDNAEBBDVVIBYDERHBJBAHYDWSRFESYVQXFTWKSAJUGNGQLOGQNEORUJIT");
    msg.sys_src.assign("DSNXNRDFKWFPMRADJEAIEOTXUSJNSKYJYHRRCWZGQSEALAHWYQLJHGAJXICOHXTNKBYTCTENBKSOANFMKMPSUDLYMBORIWGJKVOHFMSQVAPRCJQEFECQYCWWIBZRXSYAAELQZLJVXTPDPGKUYIFZISMYCCMLMQDOFZVOBRZEDAIIVPZROXKBONTGUUMDWTKGNBUKLBGW");
    msg.seq = 32285U;
    msg.sys_dst.assign("EIQGTKOPMPLUSHNKLAVHVQXCSMGNMZQJODMPYIWZRAJXJRUWTXGGCWFSPXIVCAOALIZCAEQLYKBEUDKZTFGTEXLNJYCAFCBFPDHAJOWJILUVMYG");
    msg.flags = 210U;
    const char tmp_msg_0[] = {30, -95, -37, 121, 0, -6, -91, 8, -41, 55, -85, 57, 117, 117, -32, 66, 94, 84, -79, -31, 44, -64, -62, -45, 120, -78, 61, 26, -96, 68, 99, 77, 124, 94, 97, 14, -24, -92, -18, -65, -57, -54, 70, 61, 126, -99, 12, -17, 45, 16, -109, 75, 86, -23, 95, 99, 94, -116, 55, 32, -17, 103, -32, 116, 61, -6, -15, -104, -44, 118, -52, 9, -107, -77, 4, 120, 125, 30, 38, -85, -48, 25, 100, 115, -89, -127, -108, 13, -76, 19, 83, 72, -70, -13, -76, -115, 26, -87, -65, 86, 51, 124, -114, -60, -25, -88, 67, 10, 116, -24, -115, 21, -12, -111, -110, -74, 21, -34, -70};
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
    msg.setTimeStamp(0.736048525409);
    msg.setSource(61659U);
    msg.setSourceEntity(225U);
    msg.setDestination(16514U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.818197729376;
    msg.lon = 0.203990997827;
    msg.depth = 0.283047152012;
    msg.sentence.assign("SZAVDJEINANGCHFIOPSHOVKLLBD");
    msg.txtime = 0.542894131972;
    msg.modem_type.assign("LOHFWJSHLNKPNZZMZJAWKLRRYJOBVDKVOPTKLFITPWQFNHSNFUXXJGCUPBLKPGEHEFNUAYHVASEVD");
    msg.sys_src.assign("UNACSVIKXLZMKOQGVXUIWWTDKAEHSWGNQLPBLVVAOAVVJIBTNNFAYUXEJHBSPDTPEMYGPCMLYBFJEPREDTKPLFJSWDDJQFUHABWJIHUYZPNKRRUFEYDDXBQEITKJGIRGZMKLXVXMFVGHOLAGUHAMWNXPFCONTLMRJUGHVNIZSORSCTJBRQNQTFCCCUYSXXQSFPMIKZSZJZOERMVUKHFTXYB");
    msg.seq = 1648U;
    msg.sys_dst.assign("KFANBMCUJLNESGRHOLOQDECGNZZQBRDXGBUOHKOFZEJQPVSWFGILPKETZXATKOWDQVXJTIXCJASFUYFLAHMTBLMNPNDVESAWWXGY");
    msg.flags = 131U;
    const char tmp_msg_0[] = {-105, 3, -50, -47, 94, 115, -21, -63, -110, 80, 85, -103, -58, -98, 117, -18, 40, 105, 38, -34, 32, 93, 57, -57, 104, 88, -9, -112, -60, -55, 18, -29, -62, 64, 72, -27, 67, 77, 114, 40, 102, -125, -83, 64, -114, 125, 27, -104, -55, -105, 122, 61, 60, -41, 24, -8, 51, -6, 75, 114, 61, 124, 86, -40, 18, 118, 48, -80, 118, 104, 51, 20, 110, -75, 84, -4, -98, -80, -117, 119, -38, -83, -53, -92, 56, 41, -12, -105, 15, -72, -122, -49, 44, 75, 104, -93, 52, 9, 30, -115, 78, -111, -23, 103, -108, 65, 13, 119, 56, 42, -37, -22, -22, -18, -5, 56, 120, 53, 66, 1, 73, 80, -86, 55, -109, 2, -104, -86, 89, -78, -13, -104, 3, 125, 125, -19, 60};
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
    msg.setTimeStamp(0.827457851727);
    msg.setSource(23513U);
    msg.setSourceEntity(185U);
    msg.setDestination(63195U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.0319399591501;
    msg.lon = 0.690264114922;
    msg.depth = 0.225772421609;
    msg.sentence.assign("KEOGLPLIDWZFKAGAHACSPWXKXHVTDNYQDBTSYITVXEJMFBCEEVPXIJJCWCWEDHRWAQPYELQQKONJUYQHDRFEUESNMKUTFBPANLVUXUHNYAKADYVTCEORZSPUQBFNZMSGOY");
    msg.txtime = 0.493284499404;
    msg.modem_type.assign("IIORUFDZXPEYNYJDJAKCABPIHEJMNHEYPUCZAASUOXSOUGCZCHISNVWHLBMRGLAXMNWFDFVDBRUJXXZSIYJNUWLGQGNCOMDVTEBVFMMTRNYLLHELZSECOQRIPJHZFGPAVICTVEFYOTURWWPCWDMSLYRORMXKITXQFBKZDKVFFMSXPBB");
    msg.sys_src.assign("LKLZAPSYTEFMYWCAIRSGXWMJDIVLIQXNYPFVCVHCJTPGRKOABYAFBZRAMRWGTOQ");
    msg.seq = 33843U;
    msg.sys_dst.assign("GTZAZKXFRAMOATIWTRBJZBEQKPTHSYFTHQUZQDWRMNRLPSPAATRVFZLSQUXICYMVMIKOGODALFVVWRBSBHRNLKXMKWOIFMEEGMDXNWXUQACDQBLOMFTFILSCWSIYPPHVTNNHDJYGGYELBTZYCPLWJEKDMVCXCCUG");
    msg.flags = 156U;
    const char tmp_msg_0[] = {-57, -44, 84, -1, 45, -43, 103, -78, 19, 52, -55, 37, 21, 5, 10, 119, -86, -17, -64, -12, -43, -84, -78, 13, -54, 33, 52, 5, 66, -87, 51, 92, -81, -27, -44, -119, 71, -37, 1, -75, -90, -104, 64, -11, 54, 42, -69, 33, -94, -112, 23, -1, 7, -87, -63, -42, -57, -13, 27, -99, -24, -122, 49};
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
    msg.setTimeStamp(0.362903498516);
    msg.setSource(18811U);
    msg.setSourceEntity(165U);
    msg.setDestination(25739U);
    msg.setDestinationEntity(213U);
    msg.op = 168U;
    msg.system.assign("FTOBUKGAOSXSYPUTCWWOLUBDQFRJCITXILDGXOWAQJRJKWJTPNEWKMUYPSSBEIZEQSAXLDVIBNQIFOYBCLMZGHLLNZYBXMERNMAJZRBAFJEDFHRYPOXDBDQCGWNVJKVHMWHTKPSPULPBDQKNXVRQGJPIVHYZZ");
    msg.range = 0.419787038708;
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5433U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.952380761823;
    tmp_tmp_msg_0_0.lon = 0.55470725543;
    tmp_tmp_msg_0_0.eta = 1391004526U;
    tmp_tmp_msg_0_0.duration = 10076U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.976217259207);
    msg.setSource(49110U);
    msg.setSourceEntity(179U);
    msg.setDestination(35841U);
    msg.setDestinationEntity(195U);
    msg.op = 242U;
    msg.system.assign("OVSUUWQOVZIENJTKXPMPVFWHBXCOBLOBBQIMDPUVFEYIKZTJUOPHLYKHGATBUIIW");
    msg.range = 0.29013087673;
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 51910U;
    tmp_msg_0.comm_mean = 236U;
    tmp_msg_0.destination.assign("RQUBDLNGLRLEVRFZRMWTOGNWMFUNVAKPAEOIBWWCJYSHWPQZCUTWCYAKIITJKLL");
    tmp_msg_0.deadline = 0.0152222489319;
    tmp_msg_0.range = 0.819050101163;
    tmp_msg_0.data_mode = 141U;
    IMC::UASimulation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 142U;
    tmp_tmp_msg_0_0.speed = 18421U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-25, 112, -93, -106, 47, -23, -42, 107, 100, -70, -46, -70, 102, 3, 12, 100, 29, -124, -39, -36, -118, -7, -53, 70, 63, 77, 18, 23, -76, -89, 27, 45, -5, 62, -69, 104, 27, -3, -55, 3, 112, 29, -57, 9, 98, -15, -86, 126, 11, -101, -48, -110, -8, 44, -86, -93, 107, -78, -112, 60, -43, -99, -115, -37, -90, -82, -99, 22, 12, -63, 6, -60, 118, 97, -18, 12, 100, 90, -51, 93, -128, 40, 67, -4, 16, -83, -114, 99, 77, -35, -33, -24, 101, -63, -67, 78, -30, -81, 40, -87, -13, -103, -90};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("CDDDRHITOHAEGSJKZHJURVHKLBQCARCYHCLPULSNTPOTTJGEDCUAZZQVBFFANVYXIVKQXKHYSDNVGDXQRPNOIMMVRSHCCBRAUPMQYWJBSWUJPGBNJWASQPWMVDOOXQMZUBERXKBCUOFRSITE");
    const char tmp_tmp_msg_0_1[] = {124, 61, -107, -36, -121, -16, 36, 41, 41, 46, -25, -35, -66, -52, -57, -64, 50, -92, -6, 110, 21, -12, -98, 96, 113, 19, -55, 34, 16, 12, 50, -23, 5, 98, -82, -28, 94, -117, 92, 78, 18, -109, -41, 100, 29, -31, -60, -39, 14, -49, -10, -23, 100, 60, 96, -91, -29, 73, -104, -92, -18, -85, 71, -1, -86, -69, -95, 59, 42, 44, 121, -63, 66, 59, -122, 78, 12, 47, -19, -105, 77, -55, 71, 79, 112, -110, -73, -87, 89, 81, 28, -54, -9, -60, -93, -19, 126, -97, 36, 6, 24, -93, 75, 103, -57, -105, 91, 21, -55, 105, 31, -37, 20, -69, 42, -32, -68, 103, 7, 26, -93, 45, 27, -11, -36, 109, -68, 49, 72, 10, -79, 70, -8, 120, -117, -86, 67, 23, -67, 2, -36, -104, -28, -24, 88, 81, -33, -35, 27, -50, -54, 93, 92, 111, 109, -6, -62, 115, 10, -75, 40, 97, 63, -22, 78, 84, 77, -9, 126, 58, -5, 68, -21, 12, 7, 5, -31, -113, 93, 46, 51};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.305194409665);
    msg.setSource(16472U);
    msg.setSourceEntity(80U);
    msg.setDestination(3788U);
    msg.setDestinationEntity(191U);
    msg.op = 208U;
    msg.system.assign("MCOYQZHRJXKCAGUSDGVCIRCGWWEOJDOODBICKFJBYAEABNNJFAHJMZLOUTNBRSTXERHNVKDWZLSGYZTPTQVYJKCJIALULNPXFIPVNPTGZTVHPTLUEBLQNRSPOTFXXXBQIRSGIKMMABWBNUFAOPFBMVUDXMEOAQHZVYEHCEZLOVGMFTGBFLYXPEPSQJQZKDHGDYDDDQKPSVWAJKORUKLUILGREEUNSCWYQFTSHWASIKMHZYQHZRCNJIRMIXFUMX");
    msg.range = 0.202301801768;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("FAYUGMSULLERZAYRIDSBOCNWHUYJMRVFLODSTJERZXWJBXBGVXPQKQELMIEVCQASXJXCRIIYBNZGB");
    tmp_msg_0.rssi = 0.170662234802;
    tmp_msg_0.integrity = 28997U;
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
    msg.setTimeStamp(0.655415609582);
    msg.setSource(30096U);
    msg.setSourceEntity(172U);
    msg.setDestination(50439U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.377328279652);
    msg.setSource(15127U);
    msg.setSourceEntity(24U);
    msg.setDestination(65461U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.892900721707);
    msg.setSource(36867U);
    msg.setSourceEntity(221U);
    msg.setDestination(55980U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.909636334053);
    msg.setSource(47385U);
    msg.setSourceEntity(58U);
    msg.setDestination(11033U);
    msg.setDestinationEntity(111U);
    msg.list.assign("JEZMBTJWJFMSUGZVMDVUDTOPQKOWY");

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
    msg.setTimeStamp(0.732327396532);
    msg.setSource(18636U);
    msg.setSourceEntity(146U);
    msg.setDestination(42014U);
    msg.setDestinationEntity(229U);
    msg.list.assign("WQXSITGYLZOZRHIZKWLYHVORHSEPPYBYJQPSBOAHIEKLMSNUWKNEVBUKMJAQDEMJKSABOHLPLVALNDXJEBMDYUPINPTQRZJRACFCOPTQBFZVMOFETCGHXYZWHXXUHJCULBDLMTGEWQWKZRCEDNGFGGQNJP");

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
    msg.setTimeStamp(0.19283005552);
    msg.setSource(57457U);
    msg.setSourceEntity(221U);
    msg.setDestination(6835U);
    msg.setDestinationEntity(22U);
    msg.list.assign("NAZAQOAQOUHXOXRNHUKROQSGVPTOHKUZQDKIIRVJIMCZFYADWUEUBWLWFEWJDGNUVKHMXOF");

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
    msg.setTimeStamp(0.0463742165914);
    msg.setSource(1030U);
    msg.setSourceEntity(217U);
    msg.setDestination(61541U);
    msg.setDestinationEntity(196U);
    msg.peer.assign("FAFTIGHPCFUZSILPCNETJGZZRXHIINYPMMXOKRX");
    msg.rssi = 0.0681897152688;
    msg.integrity = 19026U;

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
    msg.setTimeStamp(0.595149645705);
    msg.setSource(35589U);
    msg.setSourceEntity(167U);
    msg.setDestination(18683U);
    msg.setDestinationEntity(247U);
    msg.peer.assign("EISUMSBOPKEQBKFZZVDYQLPSDELLJUYAKBUNNRHYCCXUL");
    msg.rssi = 0.564935596735;
    msg.integrity = 45630U;

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
    msg.setTimeStamp(0.379487198069);
    msg.setSource(59994U);
    msg.setSourceEntity(253U);
    msg.setDestination(34339U);
    msg.setDestinationEntity(81U);
    msg.peer.assign("TDAMPSQUGSMQLZMJEWDCGROXTCYIDVABJSTBIQHWEKFXXZGMJFYAYWRVCAQUIYEQUJLRYFXKBOZCSUUDJAFFSEOTQONYIXVQNKHFBZUKEEEDMYTNKISVIRKNPNLLSETHPTNMHRYGHRHCQIVAVMOVLM");
    msg.rssi = 0.469299704777;
    msg.integrity = 58500U;

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
    msg.setTimeStamp(0.604802924875);
    msg.setSource(64776U);
    msg.setSourceEntity(68U);
    msg.setDestination(43090U);
    msg.setDestinationEntity(65U);
    msg.req_id = 3131U;
    msg.destination.assign("XJVXZTHRESNVCSAZTZRUYAYCQYMUOGGKBAMSFCJYUHGWEPYKDYBQISNQNHUWNYHTWHZ");
    msg.timeout = 0.569986167007;
    msg.range = 0.494528170868;
    msg.type = 228U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.130064420893;
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
    msg.setTimeStamp(0.0391034681015);
    msg.setSource(56877U);
    msg.setSourceEntity(178U);
    msg.setDestination(55473U);
    msg.setDestinationEntity(43U);
    msg.req_id = 12270U;
    msg.destination.assign("FCAOIKZSNEZUPPTCQFVXCKIWVQAEJHETSBVJPQYWFOWAIXYJFTBCMIVWQZUIFLGNAGEDPQCCVLXJY");
    msg.timeout = 0.908709026495;
    msg.range = 0.831994999892;
    msg.type = 60U;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.40372260711;
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
    msg.setTimeStamp(0.0981730073831);
    msg.setSource(31473U);
    msg.setSourceEntity(80U);
    msg.setDestination(40386U);
    msg.setDestinationEntity(163U);
    msg.req_id = 26227U;
    msg.destination.assign("RVEYZMDBCYIAUXJLGYUHIMIDICSKREOBPTEZMNLGTKTNAYWUJHONFSJMWCLLUGTPHHIKV");
    msg.timeout = 0.635608781024;
    msg.range = 0.632216718403;
    msg.type = 120U;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("IVVBDASMPTNSHKACSCDVVHJKWADIMXWFCWZERNOHSFLHE");
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
    msg.setTimeStamp(0.0361543391444);
    msg.setSource(5591U);
    msg.setSourceEntity(160U);
    msg.setDestination(27141U);
    msg.setDestinationEntity(26U);
    msg.req_id = 15095U;
    msg.type = 20U;
    msg.status = 236U;
    msg.info.assign("QWOFMWVNWHWTYPPZMAJPVFINISTRAPIZFSIOEWHZUGMDQRMNRJCSIEYVCPKXJZZXWKOT");
    msg.range = 0.0733108348656;

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
    msg.setTimeStamp(0.570459896022);
    msg.setSource(42219U);
    msg.setSourceEntity(213U);
    msg.setDestination(53298U);
    msg.setDestinationEntity(182U);
    msg.req_id = 65215U;
    msg.type = 2U;
    msg.status = 113U;
    msg.info.assign("ROTIJLTCOUXRXBGQNNLDQBUDHREWGNSYMJESTEPJTKEKFRQJAHXINKCLNREIXKUQSHXLEYZYJD");
    msg.range = 0.688228526491;

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
    msg.setTimeStamp(0.22270570641);
    msg.setSource(22755U);
    msg.setSourceEntity(107U);
    msg.setDestination(45897U);
    msg.setDestinationEntity(242U);
    msg.req_id = 10038U;
    msg.type = 66U;
    msg.status = 33U;
    msg.info.assign("SAOCKVCAMWLUFZTKUJSILKWAXATTMFDOEXNMRSYDMRPXHICWQINCNESDBHWPYQHYPABOHWXNWJGEAKCMTGRVJHETFVASUKGDYQKZZEFDPJUCUNBXFWWVSLFZVLOGIBRQSTOLXJUADBTFVQELZOLKZRIFVFMMAZCIJUGVFXBLVZJYBYJCKBVDIBLSRYICMQIGWRNUQPNOUHMQDYCDEPGJGRZPRHBNYXSH");
    msg.range = 0.111605138213;

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
    msg.setTimeStamp(0.121370661605);
    msg.setSource(22827U);
    msg.setSourceEntity(94U);
    msg.setDestination(61485U);
    msg.setDestinationEntity(253U);
    msg.value = 21498;

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
    msg.setTimeStamp(0.489501984643);
    msg.setSource(46621U);
    msg.setSourceEntity(207U);
    msg.setDestination(46528U);
    msg.setDestinationEntity(135U);
    msg.value = -26790;

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
    msg.setTimeStamp(0.588568000685);
    msg.setSource(42559U);
    msg.setSourceEntity(158U);
    msg.setDestination(30969U);
    msg.setDestinationEntity(208U);
    msg.value = 24883;

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
    msg.setTimeStamp(0.321747240401);
    msg.setSource(34675U);
    msg.setSourceEntity(78U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(247U);
    msg.value = 0.294853381074;

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
    msg.setTimeStamp(0.857936802582);
    msg.setSource(12270U);
    msg.setSourceEntity(139U);
    msg.setDestination(29389U);
    msg.setDestinationEntity(55U);
    msg.value = 0.955483075679;

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
    msg.setTimeStamp(0.436597387882);
    msg.setSource(33110U);
    msg.setSourceEntity(146U);
    msg.setDestination(18528U);
    msg.setDestinationEntity(94U);
    msg.value = 0.382683582034;

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
    msg.setTimeStamp(0.217621475528);
    msg.setSource(46386U);
    msg.setSourceEntity(149U);
    msg.setDestination(64790U);
    msg.setDestinationEntity(12U);
    msg.value = 0.481824238421;

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
    msg.setTimeStamp(0.830355258213);
    msg.setSource(25095U);
    msg.setSourceEntity(121U);
    msg.setDestination(16187U);
    msg.setDestinationEntity(41U);
    msg.value = 0.578606017179;

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
    msg.setTimeStamp(0.359239343954);
    msg.setSource(35558U);
    msg.setSourceEntity(186U);
    msg.setDestination(18110U);
    msg.setDestinationEntity(239U);
    msg.value = 0.209162910544;

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
    msg.setTimeStamp(0.146895600866);
    msg.setSource(23105U);
    msg.setSourceEntity(229U);
    msg.setDestination(19396U);
    msg.setDestinationEntity(65U);
    msg.validity = 976U;
    msg.type = 69U;
    msg.utc_year = 56448U;
    msg.utc_month = 176U;
    msg.utc_day = 23U;
    msg.utc_time = 0.403266460089;
    msg.lat = 0.627518322012;
    msg.lon = 0.779288260464;
    msg.height = 0.762082311834;
    msg.satellites = 243U;
    msg.cog = 0.894920393919;
    msg.sog = 0.557430377521;
    msg.hdop = 0.167950473819;
    msg.vdop = 0.746699745738;
    msg.hacc = 0.33356704642;
    msg.vacc = 0.276120402265;

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
    msg.setTimeStamp(0.903177147908);
    msg.setSource(26620U);
    msg.setSourceEntity(211U);
    msg.setDestination(14969U);
    msg.setDestinationEntity(235U);
    msg.validity = 63254U;
    msg.type = 163U;
    msg.utc_year = 55415U;
    msg.utc_month = 134U;
    msg.utc_day = 191U;
    msg.utc_time = 0.882665195278;
    msg.lat = 0.951105830881;
    msg.lon = 0.0893261120428;
    msg.height = 0.709568546902;
    msg.satellites = 58U;
    msg.cog = 0.927852346225;
    msg.sog = 0.115276291983;
    msg.hdop = 0.370011503364;
    msg.vdop = 0.414717311806;
    msg.hacc = 0.184388221982;
    msg.vacc = 0.79225154896;

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
    msg.setTimeStamp(0.271443394421);
    msg.setSource(57805U);
    msg.setSourceEntity(85U);
    msg.setDestination(30764U);
    msg.setDestinationEntity(132U);
    msg.validity = 31685U;
    msg.type = 69U;
    msg.utc_year = 20985U;
    msg.utc_month = 147U;
    msg.utc_day = 183U;
    msg.utc_time = 0.260686446664;
    msg.lat = 0.680688101942;
    msg.lon = 0.954949836503;
    msg.height = 0.0762798015208;
    msg.satellites = 23U;
    msg.cog = 0.435342135362;
    msg.sog = 0.231814330341;
    msg.hdop = 0.825120610438;
    msg.vdop = 0.539692265563;
    msg.hacc = 0.871556432045;
    msg.vacc = 0.0838354561723;

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
    msg.setTimeStamp(0.530124018778);
    msg.setSource(40500U);
    msg.setSourceEntity(227U);
    msg.setDestination(53286U);
    msg.setDestinationEntity(18U);
    msg.time = 0.174758843385;
    msg.phi = 0.499752461307;
    msg.theta = 0.849251980672;
    msg.psi = 0.803218316748;
    msg.psi_magnetic = 0.493783708332;

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
    msg.setTimeStamp(0.447965187605);
    msg.setSource(1654U);
    msg.setSourceEntity(59U);
    msg.setDestination(5550U);
    msg.setDestinationEntity(218U);
    msg.time = 0.674074869094;
    msg.phi = 0.0947590342597;
    msg.theta = 0.237289399544;
    msg.psi = 0.615144516082;
    msg.psi_magnetic = 0.553483422083;

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
    msg.setTimeStamp(0.827897808066);
    msg.setSource(49390U);
    msg.setSourceEntity(30U);
    msg.setDestination(62993U);
    msg.setDestinationEntity(233U);
    msg.time = 0.740748740734;
    msg.phi = 0.749687752784;
    msg.theta = 0.806857080942;
    msg.psi = 0.0469473180421;
    msg.psi_magnetic = 0.137580543214;

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
    msg.setTimeStamp(0.588547589763);
    msg.setSource(38425U);
    msg.setSourceEntity(203U);
    msg.setDestination(44892U);
    msg.setDestinationEntity(74U);
    msg.time = 0.430864584588;
    msg.x = 0.0450428341066;
    msg.y = 0.0168032585389;
    msg.z = 0.932846004402;
    msg.timestep = 0.897397458642;

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
    msg.setTimeStamp(0.19001900748);
    msg.setSource(50223U);
    msg.setSourceEntity(107U);
    msg.setDestination(35790U);
    msg.setDestinationEntity(172U);
    msg.time = 0.193402209882;
    msg.x = 0.228468809825;
    msg.y = 0.468311493314;
    msg.z = 0.59169569068;
    msg.timestep = 0.84121272082;

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
    msg.setTimeStamp(0.607834753691);
    msg.setSource(21137U);
    msg.setSourceEntity(169U);
    msg.setDestination(19419U);
    msg.setDestinationEntity(66U);
    msg.time = 0.32193069543;
    msg.x = 0.0436210425663;
    msg.y = 0.530354144789;
    msg.z = 0.334158396976;
    msg.timestep = 0.448598349202;

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
    msg.setTimeStamp(0.235252856924);
    msg.setSource(21891U);
    msg.setSourceEntity(168U);
    msg.setDestination(22289U);
    msg.setDestinationEntity(9U);
    msg.time = 0.855082279851;
    msg.x = 0.774536763814;
    msg.y = 0.274964653828;
    msg.z = 0.0996234695201;

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
    msg.setTimeStamp(0.67546480298);
    msg.setSource(50730U);
    msg.setSourceEntity(177U);
    msg.setDestination(61493U);
    msg.setDestinationEntity(161U);
    msg.time = 0.0536650198859;
    msg.x = 0.431183392699;
    msg.y = 0.769534686502;
    msg.z = 0.366588627956;

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
    msg.setTimeStamp(0.50005627416);
    msg.setSource(38958U);
    msg.setSourceEntity(55U);
    msg.setDestination(11528U);
    msg.setDestinationEntity(248U);
    msg.time = 0.930204732257;
    msg.x = 0.502826041953;
    msg.y = 0.40451329844;
    msg.z = 0.963661511299;

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
    msg.setTimeStamp(0.613268494824);
    msg.setSource(60210U);
    msg.setSourceEntity(74U);
    msg.setDestination(20164U);
    msg.setDestinationEntity(184U);
    msg.time = 0.396279365144;
    msg.x = 0.0416649632499;
    msg.y = 0.501236820416;
    msg.z = 0.521094136193;

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
    msg.setTimeStamp(0.00741926539079);
    msg.setSource(18254U);
    msg.setSourceEntity(198U);
    msg.setDestination(30755U);
    msg.setDestinationEntity(87U);
    msg.time = 0.918431153034;
    msg.x = 0.436956467609;
    msg.y = 0.185342742783;
    msg.z = 0.396081088737;

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
    msg.setTimeStamp(0.548751833231);
    msg.setSource(36819U);
    msg.setSourceEntity(22U);
    msg.setDestination(9195U);
    msg.setDestinationEntity(128U);
    msg.time = 0.256419209693;
    msg.x = 0.664303276378;
    msg.y = 0.908131562771;
    msg.z = 0.148747837332;

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
    msg.setTimeStamp(0.688987038415);
    msg.setSource(19963U);
    msg.setSourceEntity(10U);
    msg.setDestination(26682U);
    msg.setDestinationEntity(86U);
    msg.time = 0.875032183667;
    msg.x = 0.0202938264313;
    msg.y = 0.766978741781;
    msg.z = 0.120676638526;

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
    msg.setTimeStamp(0.0672934267682);
    msg.setSource(59030U);
    msg.setSourceEntity(117U);
    msg.setDestination(8952U);
    msg.setDestinationEntity(151U);
    msg.time = 0.992456955541;
    msg.x = 0.970831333153;
    msg.y = 0.342136323977;
    msg.z = 0.370032136851;

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
    msg.setTimeStamp(0.652476757637);
    msg.setSource(56301U);
    msg.setSourceEntity(78U);
    msg.setDestination(39569U);
    msg.setDestinationEntity(177U);
    msg.time = 0.380917962825;
    msg.x = 0.344969253756;
    msg.y = 0.18925056429;
    msg.z = 0.877432325222;

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
    msg.setTimeStamp(0.750915043295);
    msg.setSource(46478U);
    msg.setSourceEntity(202U);
    msg.setDestination(16972U);
    msg.setDestinationEntity(81U);
    msg.validity = 34U;
    msg.x = 0.835486106208;
    msg.y = 0.0387473879501;
    msg.z = 0.0683949942519;

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
    msg.setTimeStamp(0.78446058393);
    msg.setSource(47876U);
    msg.setSourceEntity(154U);
    msg.setDestination(43461U);
    msg.setDestinationEntity(171U);
    msg.validity = 176U;
    msg.x = 0.692672582023;
    msg.y = 0.439709707356;
    msg.z = 0.273473100927;

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
    msg.setTimeStamp(0.340209464951);
    msg.setSource(11002U);
    msg.setSourceEntity(147U);
    msg.setDestination(49658U);
    msg.setDestinationEntity(104U);
    msg.validity = 227U;
    msg.x = 0.746145509055;
    msg.y = 0.839395372005;
    msg.z = 0.233237719866;

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
    msg.setTimeStamp(0.305703588222);
    msg.setSource(32505U);
    msg.setSourceEntity(125U);
    msg.setDestination(25733U);
    msg.setDestinationEntity(89U);
    msg.validity = 253U;
    msg.x = 0.243369521817;
    msg.y = 0.518568713111;
    msg.z = 0.518958567794;

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
    msg.setTimeStamp(0.241444241684);
    msg.setSource(38307U);
    msg.setSourceEntity(127U);
    msg.setDestination(50978U);
    msg.setDestinationEntity(81U);
    msg.validity = 227U;
    msg.x = 0.00915499274745;
    msg.y = 0.967584545738;
    msg.z = 0.311998638139;

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
    msg.setTimeStamp(0.0799912374453);
    msg.setSource(15405U);
    msg.setSourceEntity(244U);
    msg.setDestination(15577U);
    msg.setDestinationEntity(24U);
    msg.validity = 204U;
    msg.x = 0.703482585495;
    msg.y = 0.224938147843;
    msg.z = 0.655836441962;

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
    msg.setTimeStamp(0.504619871331);
    msg.setSource(27721U);
    msg.setSourceEntity(66U);
    msg.setDestination(53888U);
    msg.setDestinationEntity(204U);
    msg.time = 0.351146267486;
    msg.x = 0.68467093912;
    msg.y = 0.16388402347;
    msg.z = 0.313320086391;

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
    msg.setTimeStamp(0.0114742608832);
    msg.setSource(49450U);
    msg.setSourceEntity(42U);
    msg.setDestination(21237U);
    msg.setDestinationEntity(41U);
    msg.time = 0.688141117195;
    msg.x = 0.0039683625805;
    msg.y = 0.391201621544;
    msg.z = 0.129922854244;

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
    msg.setTimeStamp(0.0695054725147);
    msg.setSource(20504U);
    msg.setSourceEntity(182U);
    msg.setDestination(58013U);
    msg.setDestinationEntity(198U);
    msg.time = 0.580158475007;
    msg.x = 0.0636922492066;
    msg.y = 0.269737590533;
    msg.z = 0.395364475349;

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
    msg.setTimeStamp(0.924653993704);
    msg.setSource(61512U);
    msg.setSourceEntity(109U);
    msg.setDestination(62203U);
    msg.setDestinationEntity(144U);
    msg.validity = 85U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.157336068263;
    tmp_msg_0.y = 0.257368511721;
    tmp_msg_0.z = 0.305179482557;
    tmp_msg_0.phi = 0.194114449936;
    tmp_msg_0.theta = 0.0803211658226;
    tmp_msg_0.psi = 0.210561995856;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0358767802905;

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
    msg.setTimeStamp(0.0587044861981);
    msg.setSource(20709U);
    msg.setSourceEntity(208U);
    msg.setDestination(7544U);
    msg.setDestinationEntity(178U);
    msg.validity = 236U;
    msg.value = 0.306757281626;

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
    msg.setTimeStamp(0.87421520336);
    msg.setSource(16907U);
    msg.setSourceEntity(219U);
    msg.setDestination(43894U);
    msg.setDestinationEntity(177U);
    msg.validity = 117U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.580787968297;
    tmp_msg_0.beam_height = 0.228803299725;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.802764040771;

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
    msg.setTimeStamp(0.745318382519);
    msg.setSource(39118U);
    msg.setSourceEntity(244U);
    msg.setDestination(3278U);
    msg.setDestinationEntity(67U);
    msg.value = 0.275825432156;

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
    msg.setTimeStamp(0.138426692822);
    msg.setSource(10652U);
    msg.setSourceEntity(112U);
    msg.setDestination(42775U);
    msg.setDestinationEntity(107U);
    msg.value = 0.587102511866;

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
    msg.setTimeStamp(0.383433355274);
    msg.setSource(1950U);
    msg.setSourceEntity(163U);
    msg.setDestination(38780U);
    msg.setDestinationEntity(139U);
    msg.value = 0.802983339365;

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
    msg.setTimeStamp(0.190781156922);
    msg.setSource(38233U);
    msg.setSourceEntity(43U);
    msg.setDestination(55262U);
    msg.setDestinationEntity(32U);
    msg.value = 0.293952700154;

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
    msg.setTimeStamp(0.675619115954);
    msg.setSource(13357U);
    msg.setSourceEntity(75U);
    msg.setDestination(23961U);
    msg.setDestinationEntity(133U);
    msg.value = 0.992353307444;

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
    msg.setTimeStamp(0.426932408377);
    msg.setSource(61514U);
    msg.setSourceEntity(27U);
    msg.setDestination(37407U);
    msg.setDestinationEntity(110U);
    msg.value = 0.98536476889;

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
    msg.setTimeStamp(0.0758851239977);
    msg.setSource(44799U);
    msg.setSourceEntity(220U);
    msg.setDestination(42286U);
    msg.setDestinationEntity(176U);
    msg.value = 0.400690626352;

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
    msg.setTimeStamp(0.359483386507);
    msg.setSource(53929U);
    msg.setSourceEntity(16U);
    msg.setDestination(47700U);
    msg.setDestinationEntity(49U);
    msg.value = 0.897651439498;

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
    msg.setTimeStamp(0.749724900689);
    msg.setSource(11148U);
    msg.setSourceEntity(179U);
    msg.setDestination(44375U);
    msg.setDestinationEntity(64U);
    msg.value = 0.413377042435;

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
    msg.setTimeStamp(0.894115526876);
    msg.setSource(30888U);
    msg.setSourceEntity(211U);
    msg.setDestination(25223U);
    msg.setDestinationEntity(101U);
    msg.value = 0.0313572733222;

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
    msg.setTimeStamp(0.0811920760975);
    msg.setSource(60398U);
    msg.setSourceEntity(140U);
    msg.setDestination(55474U);
    msg.setDestinationEntity(116U);
    msg.value = 0.0833105794062;

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
    msg.setTimeStamp(0.840929800548);
    msg.setSource(31076U);
    msg.setSourceEntity(135U);
    msg.setDestination(62819U);
    msg.setDestinationEntity(31U);
    msg.value = 0.347266025774;

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
    msg.setTimeStamp(0.99826244869);
    msg.setSource(45437U);
    msg.setSourceEntity(183U);
    msg.setDestination(62076U);
    msg.setDestinationEntity(165U);
    msg.value = 0.187181675422;

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
    msg.setTimeStamp(0.154097813954);
    msg.setSource(58704U);
    msg.setSourceEntity(251U);
    msg.setDestination(39174U);
    msg.setDestinationEntity(153U);
    msg.value = 0.459077985563;

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
    msg.setTimeStamp(0.450957288235);
    msg.setSource(56984U);
    msg.setSourceEntity(163U);
    msg.setDestination(8382U);
    msg.setDestinationEntity(31U);
    msg.value = 0.235197072527;

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
    msg.setTimeStamp(0.106982772076);
    msg.setSource(62560U);
    msg.setSourceEntity(133U);
    msg.setDestination(15930U);
    msg.setDestinationEntity(84U);
    msg.value = 0.288138450498;

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
    msg.setTimeStamp(0.213784314448);
    msg.setSource(30832U);
    msg.setSourceEntity(197U);
    msg.setDestination(43184U);
    msg.setDestinationEntity(74U);
    msg.value = 0.790000641139;

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
    msg.setTimeStamp(0.367090552917);
    msg.setSource(28099U);
    msg.setSourceEntity(25U);
    msg.setDestination(7719U);
    msg.setDestinationEntity(16U);
    msg.value = 0.263952477736;

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
    msg.setTimeStamp(0.331167995721);
    msg.setSource(16996U);
    msg.setSourceEntity(66U);
    msg.setDestination(27187U);
    msg.setDestinationEntity(102U);
    msg.value = 0.700392021262;

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
    msg.setTimeStamp(0.0147532389251);
    msg.setSource(41665U);
    msg.setSourceEntity(8U);
    msg.setDestination(46168U);
    msg.setDestinationEntity(8U);
    msg.value = 0.359445454107;

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
    msg.setTimeStamp(0.344626037243);
    msg.setSource(55574U);
    msg.setSourceEntity(225U);
    msg.setDestination(2949U);
    msg.setDestinationEntity(171U);
    msg.value = 0.985851153039;

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
    msg.setTimeStamp(0.180605091308);
    msg.setSource(39972U);
    msg.setSourceEntity(107U);
    msg.setDestination(8604U);
    msg.setDestinationEntity(239U);
    msg.value = 0.549387560175;

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
    msg.setTimeStamp(0.791819884788);
    msg.setSource(58777U);
    msg.setSourceEntity(16U);
    msg.setDestination(12708U);
    msg.setDestinationEntity(104U);
    msg.value = 0.380091032463;

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
    msg.setTimeStamp(0.461523341914);
    msg.setSource(37803U);
    msg.setSourceEntity(28U);
    msg.setDestination(32809U);
    msg.setDestinationEntity(28U);
    msg.value = 0.0156155115711;

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
    msg.setTimeStamp(0.489727269231);
    msg.setSource(34086U);
    msg.setSourceEntity(221U);
    msg.setDestination(20555U);
    msg.setDestinationEntity(45U);
    msg.direction = 0.20459516835;
    msg.speed = 0.706048601385;
    msg.turbulence = 0.164270251009;

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
    msg.setTimeStamp(0.0382122000878);
    msg.setSource(4742U);
    msg.setSourceEntity(186U);
    msg.setDestination(9890U);
    msg.setDestinationEntity(55U);
    msg.direction = 0.176900918289;
    msg.speed = 0.814374752228;
    msg.turbulence = 0.689620057744;

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
    msg.setTimeStamp(0.578681282321);
    msg.setSource(62418U);
    msg.setSourceEntity(92U);
    msg.setDestination(7164U);
    msg.setDestinationEntity(159U);
    msg.direction = 0.00851304348241;
    msg.speed = 0.238084878743;
    msg.turbulence = 0.601216228869;

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
    msg.setTimeStamp(0.704398673547);
    msg.setSource(18156U);
    msg.setSourceEntity(243U);
    msg.setDestination(46173U);
    msg.setDestinationEntity(23U);
    msg.value = 0.00444049028808;

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
    msg.setTimeStamp(0.759801430972);
    msg.setSource(38774U);
    msg.setSourceEntity(155U);
    msg.setDestination(15197U);
    msg.setDestinationEntity(22U);
    msg.value = 0.0427098067932;

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
    msg.setTimeStamp(0.386795432184);
    msg.setSource(29990U);
    msg.setSourceEntity(200U);
    msg.setDestination(1728U);
    msg.setDestinationEntity(2U);
    msg.value = 0.299741108002;

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
    msg.setTimeStamp(0.0440038965065);
    msg.setSource(37996U);
    msg.setSourceEntity(74U);
    msg.setDestination(52763U);
    msg.setDestinationEntity(83U);
    msg.value.assign("LHXFLBBUVCPBYFMCIISGLBSRAUTHRTXBIIUDOQNGOFWWOHNYFPJDCSZGPURVUXDTNQXTDMDCVGDWZYKWQISAMWCPSKYDVVAPLRIUCQEZWRZEXNNYHYVNKRNXPJPTDFXITRQEJEEZMFMBXWLPYGCTJKOUWQNQRBHVTFZSIZGQJLHDMFALPEPRGKEFMZCMRJKYCIOGJAZKLABENETVJLYSKZGOONBUQDTSKIOVULOAXMM");

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
    msg.setTimeStamp(0.0262275360832);
    msg.setSource(58736U);
    msg.setSourceEntity(135U);
    msg.setDestination(3719U);
    msg.setDestinationEntity(215U);
    msg.value.assign("QQYWPCFUIEDYPQWCZZKETVGCBCAUJUQPIMDBOJLKDHDLQBTVMGZGUXLECLTUHXSDIUNFSMKOECKSSYINHKJOITQSRERXADRRATYAFMAINXVWHMHKEMJAGQNXKUMPDWXRFFVIJDVFJEYHHZPXTGNJSRWOMYPOLBJOASKRGUVZBWZYPHWRHIWNKZPTZDOVNABMLXFQLVFIHBSBSOXNCXLGLAKLGYSTYCQPVJPBTYJNZWBROOVFGGUEQEZNECDMTI");

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
    msg.setTimeStamp(0.427319683634);
    msg.setSource(36118U);
    msg.setSourceEntity(193U);
    msg.setDestination(20969U);
    msg.setDestinationEntity(209U);
    msg.value.assign("PFXXNPMNYDIHPKHUTKWHYMCNFDWSMOVCNGARZKQXGBAAJABZITQDXFWEPLAQRDHGLVVNERMEDMZEVYCJJGKBFZSEOTFYUMSSKUSFAGVIXWWNSQWUBCKXFDJZGXBACYT");

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
    msg.setTimeStamp(0.384064746838);
    msg.setSource(19483U);
    msg.setSourceEntity(122U);
    msg.setDestination(43826U);
    msg.setDestinationEntity(224U);
    const char tmp_msg_0[] = {-46, 10, 38, -26, -126, -14, 9, -23, 106, 104, 81, 108, -57, -42, -109, 23, -77, 79, 2, -68, 10, -109, 99, 96, -75, 74, -64, 71, 99, -127, 23, 38, 74, -6, 54, 42, -60, 117, 95, -8, -90, -39, 63, 95, -82, -81, 40, -82, 56, 2, -51, -108, -50, 6, -56, -41, 61, 64, -95, 84, -55, -120, -45, -97, 62, -50, 6, -81, 68, 24, 71, 51, -127, 110, -127, -41, -99, -52, -99, 84, -109, 75, -111, -115, -36, -107, -8, -116, 105, 99, 116, -101, -126, 45, 96, -41, -2, -115, -104, 64, 17, -41, 25, -119, -44, 1, 125, 34, 75, -101, 0, 100, -74, -75, 23, 8, -1, 72, 26, 123, -47, -50, 20, -72, -3, -91, 33, 54, -19, -126, -49, 34, -12};
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
    msg.setTimeStamp(0.1907738696);
    msg.setSource(22068U);
    msg.setSourceEntity(233U);
    msg.setDestination(50195U);
    msg.setDestinationEntity(198U);
    const char tmp_msg_0[] = {59, 50, 52, 35, -72, -61, -18, 60, -50, -49, 125, 40, 90, 103, 57, 86, 123, -3, 23, 116, 111, 50, 17, -51, -97, 120, -122, -100, -79, 119, -15, 8, -53, 37, 1, 101, -18, -122, 26, -64, 66, 105, -92, -99, 41, 97, -23, -80, 68, -116, -60, 122, -79, -97, -2, 32, 76, -9, -33, -60, -78, -37, 109, 111, -121, -51, 82, -3, -72, 18, 56, -51, -49, 59, -37, 42, -17, -50, 80, -80, -93, 18, -11, -17, 63, -97, -120, -121, -63, 112, 57, 126, 32, -21, 68, -124, -75, 87, -30, -118, 9, -18, -62, -126, -109, -46, -71, -119, 2, 94, -46, 23, 93, -55, 5, -74, -70, 45, 7, 46, 27, 115, -75, -52, -104, 97, -42, 126, -50, 33, 78, -70, 116, 32, -106, -30, -50, 21, 18, -119, 85, -52, -43, -104, -51, -47, -13, -70, 97, -85, 101, 112, 103, 36, -127, 3, -117, 16, -86, 61, -83, 124, -19, -61, 73, 118, -15, -65, 68, 11, -5, -121, 84, -16, -10, -7, 1, -107, 57, -55, 106, 47, -2, 89, -46, 77, 114, 124, -127, -57, -68, -75, -1, 90, -95, 91, 26, -64, 56, 87, 117, 103, -55, 51, 61, -16, 38, -56, -83, -48, 8, 115, -43, 33, -49, 54, 70, 63, 27, -88};
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
    msg.setTimeStamp(0.833108571612);
    msg.setSource(18610U);
    msg.setSourceEntity(199U);
    msg.setDestination(8026U);
    msg.setDestinationEntity(39U);
    const char tmp_msg_0[] = {-80, 8, -21, -11, 29, -15, 99, -102, 75, 16, 55, 98, 56, 7, -53, -71, -78, -78, 26, 85, -48, 109, -123, 17, 53, -33, 0, 115, 21, -107, -41, 76, 40, -72, -81, 99, -22, 32, -15, -15, -80, 104, 125, 116, -75, -102, -85, -85, -27, -3, 105, -24, 50, -108, 95, -67, 38, 122, -46, 68, -42, -90, -52, -3, -91, 10, -37, 109, 124, -94, 35, -58, 93, 119, 123, 75, -58, 35, 10, 46, -30, 98, -43, 33, -70, 70, -126, 24, -126, 71, -74, -127, 31, -83, 1, -99, 92, -99, -96, 97, 10, 35, 65, 3, -7, -29, 63, -122, 87, 16, -107, -125, -32, 53, -15, 83, 64, 112, -84, 71, 119, -60, 59, -87, 103, -15, -49, -102, -121, 64, 124, 119, 49, -25, 58, 86, -87, -58, 71, -53, -23, -70, -118, 29, 69, 110, 88, -53, 20, 24, -67, 53, 123, -33, -71, -77, 60, 71, -22, -106, 123, 96, 30, -111, -75, 30, 106, 21, 32, 99, -117, -112, -59, -3, -100, -18, 19, -127, 0, -24, 17, -12, 108, -96, 116, 76, 59, 88, -64, -95, -105, 71, -70, 31, -116, 104, 48, -11, -33, 20, 95, 114, 24, 51, -50, 28, -49, 122, -18, -50, 103, 88, 66, -103, 59, 82, 45, -99};
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
    msg.setTimeStamp(0.347237205449);
    msg.setSource(11350U);
    msg.setSourceEntity(31U);
    msg.setDestination(16292U);
    msg.setDestinationEntity(178U);
    msg.value = 0.933875573585;

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
    msg.setTimeStamp(0.355182741848);
    msg.setSource(38067U);
    msg.setSourceEntity(32U);
    msg.setDestination(33774U);
    msg.setDestinationEntity(168U);
    msg.value = 0.109204226654;

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
    msg.setTimeStamp(0.0965741257239);
    msg.setSource(17069U);
    msg.setSourceEntity(88U);
    msg.setDestination(3011U);
    msg.setDestinationEntity(66U);
    msg.value = 0.365072316909;

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
    msg.setTimeStamp(0.908870562706);
    msg.setSource(26622U);
    msg.setSourceEntity(70U);
    msg.setDestination(56894U);
    msg.setDestinationEntity(41U);
    msg.type = 8U;
    msg.frequency = 3137961798U;
    msg.min_range = 12695U;
    msg.max_range = 44961U;
    msg.bits_per_point = 200U;
    msg.scale_factor = 0.597496299291;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.256002186048;
    tmp_msg_0.beam_height = 0.826024118022;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {48, 33, -16, 16, 62, 84, 102, -85, 123, 64, -8, 88, -21, 93, -38, -94, -85, -34, 17, 7, -112, -30, -55, 100, 51, -88, -30, -123, -128, 66, 59, -113, -92, 44, 45, 2, 18, -115, -101, 52, 70, 90, -79, 49, 117, -110, 126, -15, 39, -120, -30, 2, -17, 72, -107, -23, -28, 108, -34, -16};
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
    msg.setTimeStamp(0.883519557089);
    msg.setSource(12106U);
    msg.setSourceEntity(195U);
    msg.setDestination(23307U);
    msg.setDestinationEntity(168U);
    msg.type = 147U;
    msg.frequency = 4153741028U;
    msg.min_range = 30512U;
    msg.max_range = 24374U;
    msg.bits_per_point = 37U;
    msg.scale_factor = 0.49488155554;
    const char tmp_msg_0[] = {-27, -85, 58, -64, 59, -13, -99, 75, -62, -35, -95, -43, 115, 117, 70, -51, 103, 110, 9, 28, 52, 12, -10, -117, -24, 116, -25, -63, 109, -31, -90, -13, 33, -20, -16, -25, 50, 39, -89, -98, 115, 42, 67, -85, -48, -109, 9, -39, -80, -79, 79, 20, -37, -128, 72, -117, -122, -96, -59, -28, 58, 37, -33, 35, -115, 17, -114, -56, -74, -121, 93, 28, 27, 100, 78, 80, 117, 17, 74, -50, 33, 52, 126, 120, 66, -110, 122, 32, -78, -115, -42, 28, -99, 2, -126, 95, -104, 78, 108, -87, -126, -75, -31, 70, -66, -121, -5, 62, -13, 49, -49, -117, 2, -57, 102, 113, 88, 102, 98, 113, -75, 106, -94, 42, -114, 57, -15, -103, 103, -76, -48, 75, -47};
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
    msg.setTimeStamp(0.664328394385);
    msg.setSource(47928U);
    msg.setSourceEntity(97U);
    msg.setDestination(12730U);
    msg.setDestinationEntity(65U);
    msg.type = 36U;
    msg.frequency = 2099060603U;
    msg.min_range = 20314U;
    msg.max_range = 39611U;
    msg.bits_per_point = 140U;
    msg.scale_factor = 0.657864268821;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.346793033369;
    tmp_msg_0.beam_height = 0.25147515352;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-110, -56, -126, -33, -104, 25, -60, -94, -8, -2, 55, 97, 74, -99, -107, 79, 102, 58, 110, -107, -57, 61, -96, 33, 38, 88, 106, 78, 13, -37, 9, -14, 60, 91, -85, 119, 71, -36, 47, -119, -27, 67, 43, -86, -103, -21, 1, 87, 85, -50, 120, -67, -103, -84, 83, 103, -120, -78, -43, 32, -34, -5, -32, 1, -100, 9, -2, 100, -28, 30, 61, -10, -79, 58, 100, 66, -40, -58, 11, -104, 105, -80, -50, 123, -118, -48, -122, -94, -99, 38, 82, 4, 123, -57, -33, 98, -56, -32, 119, 91, 47, -6, 125, 45, 28, 40, 25, -4, -90, -15, 56, -103, -9, 10, -74, 108, -36, -58, 101, 27, 25, -124, 74, -32, 104, -47, 19, -57, -97, -68, -116, 23, 93, -40, -63, -44, -81, -61, -63, -82, 14, -123, -63, 114, 115, -126, -18, -35, 21, -89, -1, 107, -48, -108, -4, -95, -57, 121, 30, 111, -123, -66, 58, -52, 58, 17, 7, -118, -72, -17, 0, -21, 86, -63, -116, -64, -15, 94, -1, -25, 79, 5, -45, -105, 38, -106, -30, 86, 10, 22, 28, -69, 121, 101, -78, -73, 98, -28, -53, 80, -19, 53, 96, -62, 82, 23, -58, 125, 75, 83, -128, -41, -99, 51, 117, 21, 113, -74, -41, -22, 122, -39, -120, -41, -3, -88, 40, 50, -51, -100, -114, 98, -56, -128, 84, -109, -31, -5, 57, 111, -15, -54, -114, -36, 44, 17, 0, -9, 119};
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
    msg.setTimeStamp(0.586097480791);
    msg.setSource(52995U);
    msg.setSourceEntity(179U);
    msg.setDestination(24792U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.554112367207);
    msg.setSource(57006U);
    msg.setSourceEntity(169U);
    msg.setDestination(4868U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.657515536199);
    msg.setSource(10840U);
    msg.setSourceEntity(147U);
    msg.setDestination(37956U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.638689573242);
    msg.setSource(14713U);
    msg.setSourceEntity(233U);
    msg.setDestination(44583U);
    msg.setDestinationEntity(223U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.337172296279);
    msg.setSource(35318U);
    msg.setSourceEntity(161U);
    msg.setDestination(14592U);
    msg.setDestinationEntity(221U);
    msg.op = 16U;

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
    msg.setTimeStamp(0.725207789602);
    msg.setSource(56614U);
    msg.setSourceEntity(42U);
    msg.setDestination(11086U);
    msg.setDestinationEntity(47U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.0739583216501);
    msg.setSource(19860U);
    msg.setSourceEntity(248U);
    msg.setDestination(16479U);
    msg.setDestinationEntity(94U);
    msg.value = 0.941877648789;
    msg.confidence = 0.807767390728;
    msg.opmodes.assign("OWOPCEAYUGMVJWIYHORFCNSUIGBLOXJVOCVZFFDGZGSXEJQTTAZLYJTHZWKSRLLUJLBVTDXWNAZHNPAHHRKUOUYKKXDJMCJGMOEIMEPZFDAJWVYYZBPTQYZMUCMPBEMFKXGXCAOTHNUIFNIRVPJNGHFRBSXDYMGNEGACRISSRTYHLGDFQHTRZCEWPYQPINMUFLXCDANOSLVEQSIBPPQWNKCWUKOEWRQALJISXRBKKVZBQIAQUQWTVBFDT");

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
    msg.setTimeStamp(0.118810587527);
    msg.setSource(29397U);
    msg.setSourceEntity(59U);
    msg.setDestination(9831U);
    msg.setDestinationEntity(163U);
    msg.value = 0.734302349573;
    msg.confidence = 0.978687040534;
    msg.opmodes.assign("ZBWYQZFXGYJIMQQXHEXNNIXGKVKTVIBIYAECSSRYDCJXOKAOCNYWYDHPUHEZJQTDZFVGIKJGSOUACYPEZBFPUJTHIZKRDXOPSMZLMFOFWGVNOMXBWPRLCKXDIHLMCMRIRHTYLUPRIHOFFNEJBPDMTJMTSGOSVDHLNBZQUEVGMLNLFTATQAQEFFWWCJEJABPKJNTKAERTYOVUWXZUAHHGRDUSGBALDPOPNQSDSZLINCQVCM");

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
    msg.setTimeStamp(0.415558163133);
    msg.setSource(15922U);
    msg.setSourceEntity(99U);
    msg.setDestination(29979U);
    msg.setDestinationEntity(164U);
    msg.value = 0.880242129586;
    msg.confidence = 0.330932674789;
    msg.opmodes.assign("JUSKJLITWEDXDBYRVAGMMMAMDSNMYGQSZIOWNVAVTZAHZKDXXJCXSRIKAQWYIBNQWIPMKGNOSLUXICTDALREDYRHPZMJPWQVGLHOGTRPUCTBFBMW");

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
    msg.setTimeStamp(0.586689215582);
    msg.setSource(1828U);
    msg.setSourceEntity(193U);
    msg.setDestination(58191U);
    msg.setDestinationEntity(124U);
    msg.itow = 517238887U;
    msg.lat = 0.455536899393;
    msg.lon = 0.631480264902;
    msg.height_ell = 0.0699379054394;
    msg.height_sea = 0.318926289791;
    msg.hacc = 0.420052574051;
    msg.vacc = 0.702938509843;
    msg.vel_n = 0.336855247003;
    msg.vel_e = 0.445657786488;
    msg.vel_d = 0.216794648763;
    msg.speed = 0.558354477516;
    msg.gspeed = 0.523352184487;
    msg.heading = 0.780874669713;
    msg.sacc = 0.647367287913;
    msg.cacc = 0.565517540128;

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
    msg.setTimeStamp(0.315739976616);
    msg.setSource(42159U);
    msg.setSourceEntity(115U);
    msg.setDestination(3888U);
    msg.setDestinationEntity(177U);
    msg.itow = 1729759842U;
    msg.lat = 0.984926148111;
    msg.lon = 0.974290417219;
    msg.height_ell = 0.55844944912;
    msg.height_sea = 0.911511166112;
    msg.hacc = 0.784118557837;
    msg.vacc = 0.836014292572;
    msg.vel_n = 0.627647408526;
    msg.vel_e = 0.811162556579;
    msg.vel_d = 0.740017835954;
    msg.speed = 0.433231399418;
    msg.gspeed = 0.774094915468;
    msg.heading = 0.75884569865;
    msg.sacc = 0.772914496731;
    msg.cacc = 0.968345598334;

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
    msg.setTimeStamp(0.708465002167);
    msg.setSource(62998U);
    msg.setSourceEntity(208U);
    msg.setDestination(5740U);
    msg.setDestinationEntity(188U);
    msg.itow = 2787089417U;
    msg.lat = 0.401266188946;
    msg.lon = 0.700161593568;
    msg.height_ell = 0.693862151792;
    msg.height_sea = 0.584075766493;
    msg.hacc = 0.59076532217;
    msg.vacc = 0.441037811941;
    msg.vel_n = 0.17787725022;
    msg.vel_e = 0.0361054536809;
    msg.vel_d = 0.774948096445;
    msg.speed = 0.88120148929;
    msg.gspeed = 0.848368089097;
    msg.heading = 0.133514088549;
    msg.sacc = 0.385902085345;
    msg.cacc = 0.510843765617;

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
    msg.setTimeStamp(0.604010731909);
    msg.setSource(47710U);
    msg.setSourceEntity(219U);
    msg.setDestination(21432U);
    msg.setDestinationEntity(115U);
    msg.id = 147U;
    msg.value = 0.655419179067;

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
    msg.setTimeStamp(0.856789782488);
    msg.setSource(28295U);
    msg.setSourceEntity(140U);
    msg.setDestination(44699U);
    msg.setDestinationEntity(4U);
    msg.id = 31U;
    msg.value = 0.0165715916072;

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
    msg.setTimeStamp(0.128094709521);
    msg.setSource(55703U);
    msg.setSourceEntity(21U);
    msg.setDestination(34426U);
    msg.setDestinationEntity(11U);
    msg.id = 250U;
    msg.value = 0.998908875993;

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
    msg.setTimeStamp(0.817809413308);
    msg.setSource(11487U);
    msg.setSourceEntity(70U);
    msg.setDestination(64806U);
    msg.setDestinationEntity(207U);
    msg.x = 0.993477599045;
    msg.y = 0.312017270832;
    msg.z = 0.401519761466;
    msg.phi = 0.409162369768;
    msg.theta = 0.2046508585;
    msg.psi = 0.634889367967;

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
    msg.setTimeStamp(0.441572826366);
    msg.setSource(17187U);
    msg.setSourceEntity(218U);
    msg.setDestination(33532U);
    msg.setDestinationEntity(137U);
    msg.x = 0.850115882056;
    msg.y = 0.376625031107;
    msg.z = 0.768426647547;
    msg.phi = 0.399248234122;
    msg.theta = 0.564433106163;
    msg.psi = 0.339094456652;

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
    msg.setTimeStamp(0.880356410076);
    msg.setSource(20812U);
    msg.setSourceEntity(45U);
    msg.setDestination(6458U);
    msg.setDestinationEntity(125U);
    msg.x = 0.813907413112;
    msg.y = 0.629265260755;
    msg.z = 0.809547943229;
    msg.phi = 0.230415163504;
    msg.theta = 0.782504582448;
    msg.psi = 0.222643094284;

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
    msg.setTimeStamp(0.050085043117);
    msg.setSource(44311U);
    msg.setSourceEntity(22U);
    msg.setDestination(60869U);
    msg.setDestinationEntity(88U);
    msg.beam_width = 0.499806363158;
    msg.beam_height = 0.154376671623;

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
    msg.setTimeStamp(0.688378444499);
    msg.setSource(6248U);
    msg.setSourceEntity(156U);
    msg.setDestination(55261U);
    msg.setDestinationEntity(140U);
    msg.beam_width = 0.745287109329;
    msg.beam_height = 0.0748637068075;

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
    msg.setTimeStamp(0.00299076318728);
    msg.setSource(25309U);
    msg.setSourceEntity(214U);
    msg.setDestination(17905U);
    msg.setDestinationEntity(78U);
    msg.beam_width = 0.809776759414;
    msg.beam_height = 0.326314057487;

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
    msg.setTimeStamp(0.944267633905);
    msg.setSource(44504U);
    msg.setSourceEntity(24U);
    msg.setDestination(30179U);
    msg.setDestinationEntity(202U);
    msg.sane = 30U;

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
    msg.setTimeStamp(0.797710083331);
    msg.setSource(40615U);
    msg.setSourceEntity(246U);
    msg.setDestination(21878U);
    msg.setDestinationEntity(235U);
    msg.sane = 94U;

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
    msg.setTimeStamp(0.845910290138);
    msg.setSource(59667U);
    msg.setSourceEntity(28U);
    msg.setDestination(44833U);
    msg.setDestinationEntity(169U);
    msg.sane = 158U;

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
    msg.setTimeStamp(0.323650739312);
    msg.setSource(21756U);
    msg.setSourceEntity(182U);
    msg.setDestination(55105U);
    msg.setDestinationEntity(117U);
    msg.value = 0.595526949257;

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
    msg.setTimeStamp(0.949675094436);
    msg.setSource(31528U);
    msg.setSourceEntity(207U);
    msg.setDestination(55190U);
    msg.setDestinationEntity(17U);
    msg.value = 0.0383598219122;

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
    msg.setTimeStamp(0.915142327008);
    msg.setSource(37840U);
    msg.setSourceEntity(64U);
    msg.setDestination(40660U);
    msg.setDestinationEntity(214U);
    msg.value = 0.237785608233;

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
    msg.setTimeStamp(0.0408800853912);
    msg.setSource(61985U);
    msg.setSourceEntity(234U);
    msg.setDestination(6918U);
    msg.setDestinationEntity(183U);
    msg.value = 0.998600604734;

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
    msg.setTimeStamp(0.640640833772);
    msg.setSource(2663U);
    msg.setSourceEntity(239U);
    msg.setDestination(51240U);
    msg.setDestinationEntity(135U);
    msg.value = 0.208167205733;

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
    msg.setTimeStamp(0.509536506404);
    msg.setSource(14853U);
    msg.setSourceEntity(166U);
    msg.setDestination(65197U);
    msg.setDestinationEntity(237U);
    msg.value = 0.802768372268;

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
    msg.setTimeStamp(0.907387580697);
    msg.setSource(60263U);
    msg.setSourceEntity(1U);
    msg.setDestination(8204U);
    msg.setDestinationEntity(232U);
    msg.value = 0.0110810155332;

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
    msg.setTimeStamp(0.663302230444);
    msg.setSource(7641U);
    msg.setSourceEntity(10U);
    msg.setDestination(48248U);
    msg.setDestinationEntity(199U);
    msg.value = 0.404508512533;

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
    msg.setTimeStamp(0.428150273612);
    msg.setSource(26219U);
    msg.setSourceEntity(33U);
    msg.setDestination(34381U);
    msg.setDestinationEntity(249U);
    msg.value = 0.904459707321;

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
    msg.setTimeStamp(0.770734611614);
    msg.setSource(40595U);
    msg.setSourceEntity(169U);
    msg.setDestination(51328U);
    msg.setDestinationEntity(145U);
    msg.value = 0.581903113352;

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
    msg.setTimeStamp(0.783967932901);
    msg.setSource(602U);
    msg.setSourceEntity(252U);
    msg.setDestination(459U);
    msg.setDestinationEntity(173U);
    msg.value = 0.303312347809;

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
    msg.setTimeStamp(0.107375773807);
    msg.setSource(25338U);
    msg.setSourceEntity(111U);
    msg.setDestination(22187U);
    msg.setDestinationEntity(27U);
    msg.value = 0.16908405994;

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
    msg.setTimeStamp(0.722658076085);
    msg.setSource(13930U);
    msg.setSourceEntity(17U);
    msg.setDestination(5455U);
    msg.setDestinationEntity(144U);
    msg.value = 0.961057494467;

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
    msg.setTimeStamp(0.698889449995);
    msg.setSource(44427U);
    msg.setSourceEntity(251U);
    msg.setDestination(64299U);
    msg.setDestinationEntity(50U);
    msg.value = 0.436172799338;

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
    msg.setTimeStamp(0.501208631853);
    msg.setSource(23759U);
    msg.setSourceEntity(238U);
    msg.setDestination(38529U);
    msg.setDestinationEntity(143U);
    msg.value = 0.379945795533;

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
    msg.setTimeStamp(0.173043542393);
    msg.setSource(2439U);
    msg.setSourceEntity(228U);
    msg.setDestination(44402U);
    msg.setDestinationEntity(55U);
    msg.value = 0.903414079685;

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
    msg.setTimeStamp(0.463845579959);
    msg.setSource(56362U);
    msg.setSourceEntity(180U);
    msg.setDestination(1714U);
    msg.setDestinationEntity(132U);
    msg.value = 0.00988604691891;

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
    msg.setTimeStamp(0.213693325128);
    msg.setSource(23084U);
    msg.setSourceEntity(242U);
    msg.setDestination(11689U);
    msg.setDestinationEntity(111U);
    msg.value = 0.392754848715;

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
    msg.setTimeStamp(0.577886531313);
    msg.setSource(33477U);
    msg.setSourceEntity(162U);
    msg.setDestination(33937U);
    msg.setDestinationEntity(129U);
    msg.value = 0.284506587638;

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
    msg.setTimeStamp(0.923843056556);
    msg.setSource(49049U);
    msg.setSourceEntity(95U);
    msg.setDestination(8994U);
    msg.setDestinationEntity(113U);
    msg.value = 0.381757530599;

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
    msg.setTimeStamp(0.141870072245);
    msg.setSource(32070U);
    msg.setSourceEntity(172U);
    msg.setDestination(17955U);
    msg.setDestinationEntity(76U);
    msg.value = 0.444937526693;

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
    msg.setTimeStamp(0.611606802291);
    msg.setSource(30943U);
    msg.setSourceEntity(23U);
    msg.setDestination(55808U);
    msg.setDestinationEntity(234U);
    msg.value = 0.634581450147;

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
    msg.setTimeStamp(0.213705970149);
    msg.setSource(37547U);
    msg.setSourceEntity(41U);
    msg.setDestination(20816U);
    msg.setDestinationEntity(208U);
    msg.value = 0.506794520861;

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
    msg.setTimeStamp(0.41963200762);
    msg.setSource(61825U);
    msg.setSourceEntity(216U);
    msg.setDestination(21004U);
    msg.setDestinationEntity(188U);
    msg.value = 0.289146362722;

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
    msg.setTimeStamp(0.0555249658021);
    msg.setSource(39857U);
    msg.setSourceEntity(214U);
    msg.setDestination(47541U);
    msg.setDestinationEntity(248U);
    msg.validity = 46828U;
    msg.type = 156U;
    msg.tow = 3690258171U;
    msg.base_lat = 0.56888219568;
    msg.base_lon = 0.949810682831;
    msg.base_height = 0.601504987919;
    msg.n = 0.230701340856;
    msg.e = 0.952859097893;
    msg.d = 0.105394762696;
    msg.v_n = 0.350996653796;
    msg.v_e = 0.324655869115;
    msg.v_d = 0.837485148954;
    msg.satellites = 95U;
    msg.iar_hyp = 7498U;
    msg.iar_ratio = 0.953836873938;

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
    msg.setTimeStamp(0.993451140623);
    msg.setSource(20912U);
    msg.setSourceEntity(132U);
    msg.setDestination(64076U);
    msg.setDestinationEntity(196U);
    msg.validity = 8820U;
    msg.type = 253U;
    msg.tow = 1908530394U;
    msg.base_lat = 0.867273951864;
    msg.base_lon = 0.716194739676;
    msg.base_height = 0.32002810408;
    msg.n = 0.854201328006;
    msg.e = 0.065853420661;
    msg.d = 0.200173597182;
    msg.v_n = 0.2810783227;
    msg.v_e = 0.673220120049;
    msg.v_d = 0.889434761381;
    msg.satellites = 227U;
    msg.iar_hyp = 42904U;
    msg.iar_ratio = 0.924232083342;

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
    msg.setTimeStamp(0.683495419732);
    msg.setSource(45885U);
    msg.setSourceEntity(5U);
    msg.setDestination(2819U);
    msg.setDestinationEntity(44U);
    msg.validity = 36820U;
    msg.type = 189U;
    msg.tow = 2175466114U;
    msg.base_lat = 0.0923346669099;
    msg.base_lon = 0.638701827113;
    msg.base_height = 0.516955313723;
    msg.n = 0.898893142642;
    msg.e = 0.881143857649;
    msg.d = 0.0068294188631;
    msg.v_n = 0.539112686029;
    msg.v_e = 0.775701687384;
    msg.v_d = 0.685928388225;
    msg.satellites = 118U;
    msg.iar_hyp = 41224U;
    msg.iar_ratio = 0.628534696975;

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
    msg.setTimeStamp(0.0302737846818);
    msg.setSource(27327U);
    msg.setSourceEntity(80U);
    msg.setDestination(63523U);
    msg.setDestinationEntity(136U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.814069047088;
    tmp_msg_0.lon = 0.387146842426;
    tmp_msg_0.height = 0.686640427636;
    tmp_msg_0.x = 0.532903390735;
    tmp_msg_0.y = 0.122954617861;
    tmp_msg_0.z = 0.435814237122;
    tmp_msg_0.phi = 0.355713823077;
    tmp_msg_0.theta = 0.641227878217;
    tmp_msg_0.psi = 0.0654396734441;
    tmp_msg_0.u = 0.330958874033;
    tmp_msg_0.v = 0.287725574545;
    tmp_msg_0.w = 0.99809525003;
    tmp_msg_0.vx = 0.201657333118;
    tmp_msg_0.vy = 0.412696223117;
    tmp_msg_0.vz = 0.322967282952;
    tmp_msg_0.p = 0.403389435004;
    tmp_msg_0.q = 0.688102641258;
    tmp_msg_0.r = 0.941627071842;
    tmp_msg_0.depth = 0.580287417211;
    tmp_msg_0.alt = 0.714974563884;
    msg.state.set(tmp_msg_0);
    msg.type = 27U;

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
    msg.setTimeStamp(0.424751794416);
    msg.setSource(657U);
    msg.setSourceEntity(69U);
    msg.setDestination(674U);
    msg.setDestinationEntity(102U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.497159377776;
    tmp_msg_0.lon = 0.92029620239;
    tmp_msg_0.height = 0.55056516913;
    tmp_msg_0.x = 0.915543369218;
    tmp_msg_0.y = 0.0850672835709;
    tmp_msg_0.z = 0.2439850246;
    tmp_msg_0.phi = 0.30320491789;
    tmp_msg_0.theta = 0.427902500852;
    tmp_msg_0.psi = 0.692941972694;
    tmp_msg_0.u = 0.521129067163;
    tmp_msg_0.v = 0.143080758943;
    tmp_msg_0.w = 0.992070996528;
    tmp_msg_0.vx = 0.044154905899;
    tmp_msg_0.vy = 0.843234842517;
    tmp_msg_0.vz = 0.512461918719;
    tmp_msg_0.p = 0.629575722186;
    tmp_msg_0.q = 0.309277884002;
    tmp_msg_0.r = 0.321657507471;
    tmp_msg_0.depth = 0.440402531112;
    tmp_msg_0.alt = 0.930756482208;
    msg.state.set(tmp_msg_0);
    msg.type = 218U;

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
    msg.setTimeStamp(0.543458688473);
    msg.setSource(46950U);
    msg.setSourceEntity(1U);
    msg.setDestination(13017U);
    msg.setDestinationEntity(233U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.370455779763;
    tmp_msg_0.lon = 0.107586456219;
    tmp_msg_0.height = 0.456373575858;
    tmp_msg_0.x = 0.15611336998;
    tmp_msg_0.y = 0.644611099507;
    tmp_msg_0.z = 0.519505744184;
    tmp_msg_0.phi = 0.10744997406;
    tmp_msg_0.theta = 0.923775439802;
    tmp_msg_0.psi = 0.397094976326;
    tmp_msg_0.u = 0.445249198061;
    tmp_msg_0.v = 0.762396631488;
    tmp_msg_0.w = 0.164819300199;
    tmp_msg_0.vx = 0.352325016187;
    tmp_msg_0.vy = 0.55120928713;
    tmp_msg_0.vz = 0.749142651147;
    tmp_msg_0.p = 0.765015109704;
    tmp_msg_0.q = 0.154706911487;
    tmp_msg_0.r = 0.848865083671;
    tmp_msg_0.depth = 0.781962143729;
    tmp_msg_0.alt = 0.408114345335;
    msg.state.set(tmp_msg_0);
    msg.type = 254U;

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
    msg.setTimeStamp(0.734983265815);
    msg.setSource(23224U);
    msg.setSourceEntity(68U);
    msg.setDestination(58678U);
    msg.setDestinationEntity(187U);
    msg.value = 0.599907649102;

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
    msg.setTimeStamp(0.781268948344);
    msg.setSource(25756U);
    msg.setSourceEntity(61U);
    msg.setDestination(13577U);
    msg.setDestinationEntity(18U);
    msg.value = 0.797878163839;

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
    msg.setTimeStamp(0.357127387386);
    msg.setSource(42036U);
    msg.setSourceEntity(46U);
    msg.setDestination(54411U);
    msg.setDestinationEntity(193U);
    msg.value = 0.783821833474;

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
    msg.setTimeStamp(0.0859280787788);
    msg.setSource(29694U);
    msg.setSourceEntity(209U);
    msg.setDestination(59188U);
    msg.setDestinationEntity(38U);
    msg.value = 0.583614482519;

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
    msg.setTimeStamp(0.726959281877);
    msg.setSource(29615U);
    msg.setSourceEntity(231U);
    msg.setDestination(62017U);
    msg.setDestinationEntity(14U);
    msg.value = 0.635238984152;

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
    msg.setTimeStamp(0.188197165386);
    msg.setSource(17748U);
    msg.setSourceEntity(197U);
    msg.setDestination(52320U);
    msg.setDestinationEntity(15U);
    msg.value = 0.806878054724;

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
    msg.setTimeStamp(0.922093414334);
    msg.setSource(54850U);
    msg.setSourceEntity(153U);
    msg.setDestination(64136U);
    msg.setDestinationEntity(79U);
    msg.value = 0.664308724989;

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
    msg.setTimeStamp(0.815268941266);
    msg.setSource(37373U);
    msg.setSourceEntity(138U);
    msg.setDestination(22946U);
    msg.setDestinationEntity(170U);
    msg.value = 0.113116843202;

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
    msg.setTimeStamp(0.845798280394);
    msg.setSource(4631U);
    msg.setSourceEntity(113U);
    msg.setDestination(60851U);
    msg.setDestinationEntity(149U);
    msg.value = 0.391742395308;

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
    msg.setTimeStamp(0.637947207464);
    msg.setSource(4961U);
    msg.setSourceEntity(151U);
    msg.setDestination(17056U);
    msg.setDestinationEntity(98U);
    msg.value = 0.787767245297;

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
    msg.setTimeStamp(0.971164622183);
    msg.setSource(29519U);
    msg.setSourceEntity(102U);
    msg.setDestination(16691U);
    msg.setDestinationEntity(108U);
    msg.value = 0.803444630786;

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
    msg.setTimeStamp(0.520397600089);
    msg.setSource(44740U);
    msg.setSourceEntity(211U);
    msg.setDestination(43207U);
    msg.setDestinationEntity(143U);
    msg.value = 0.608146385594;

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
    msg.setTimeStamp(0.905547454484);
    msg.setSource(54198U);
    msg.setSourceEntity(152U);
    msg.setDestination(29508U);
    msg.setDestinationEntity(26U);
    msg.value = 0.526533407636;

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
    msg.setTimeStamp(0.770011462628);
    msg.setSource(64142U);
    msg.setSourceEntity(161U);
    msg.setDestination(2793U);
    msg.setDestinationEntity(60U);
    msg.value = 0.963740715851;

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
    msg.setTimeStamp(0.428633020434);
    msg.setSource(17959U);
    msg.setSourceEntity(102U);
    msg.setDestination(30428U);
    msg.setDestinationEntity(60U);
    msg.value = 0.58809000163;

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
    msg.setTimeStamp(0.338214286116);
    msg.setSource(60346U);
    msg.setSourceEntity(123U);
    msg.setDestination(7304U);
    msg.setDestinationEntity(91U);
    msg.id = 15U;
    msg.zoom = 54U;
    msg.action = 5U;

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
    msg.setTimeStamp(0.418756618628);
    msg.setSource(25633U);
    msg.setSourceEntity(3U);
    msg.setDestination(60914U);
    msg.setDestinationEntity(49U);
    msg.id = 225U;
    msg.zoom = 104U;
    msg.action = 244U;

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
    msg.setTimeStamp(0.115046975783);
    msg.setSource(26412U);
    msg.setSourceEntity(206U);
    msg.setDestination(50426U);
    msg.setDestinationEntity(94U);
    msg.id = 111U;
    msg.zoom = 71U;
    msg.action = 34U;

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
    msg.setTimeStamp(0.490401032592);
    msg.setSource(15424U);
    msg.setSourceEntity(142U);
    msg.setDestination(37815U);
    msg.setDestinationEntity(186U);
    msg.id = 66U;
    msg.value = 0.0996639949344;

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
    msg.setTimeStamp(0.713370421877);
    msg.setSource(36586U);
    msg.setSourceEntity(82U);
    msg.setDestination(55856U);
    msg.setDestinationEntity(46U);
    msg.id = 35U;
    msg.value = 0.300226644883;

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
    msg.setTimeStamp(0.0576395738271);
    msg.setSource(702U);
    msg.setSourceEntity(66U);
    msg.setDestination(43869U);
    msg.setDestinationEntity(136U);
    msg.id = 236U;
    msg.value = 0.607266108294;

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
    msg.setTimeStamp(0.109457274523);
    msg.setSource(64984U);
    msg.setSourceEntity(86U);
    msg.setDestination(2827U);
    msg.setDestinationEntity(195U);
    msg.id = 102U;
    msg.value = 0.232756385298;

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
    msg.setTimeStamp(0.759346736643);
    msg.setSource(43824U);
    msg.setSourceEntity(94U);
    msg.setDestination(58983U);
    msg.setDestinationEntity(10U);
    msg.id = 227U;
    msg.value = 0.364812524625;

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
    msg.setTimeStamp(0.392071129824);
    msg.setSource(53143U);
    msg.setSourceEntity(229U);
    msg.setDestination(4603U);
    msg.setDestinationEntity(3U);
    msg.id = 235U;
    msg.value = 0.203413206073;

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
    msg.setTimeStamp(0.112122062968);
    msg.setSource(18792U);
    msg.setSourceEntity(107U);
    msg.setDestination(17277U);
    msg.setDestinationEntity(55U);
    msg.id = 37U;
    msg.angle = 0.394941480836;

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
    msg.setTimeStamp(0.492918262358);
    msg.setSource(21058U);
    msg.setSourceEntity(243U);
    msg.setDestination(29021U);
    msg.setDestinationEntity(114U);
    msg.id = 39U;
    msg.angle = 0.97236226233;

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
    msg.setTimeStamp(0.868790569786);
    msg.setSource(47123U);
    msg.setSourceEntity(233U);
    msg.setDestination(46180U);
    msg.setDestinationEntity(153U);
    msg.id = 240U;
    msg.angle = 0.928122949751;

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
    msg.setTimeStamp(0.521504057122);
    msg.setSource(64377U);
    msg.setSourceEntity(183U);
    msg.setDestination(44957U);
    msg.setDestinationEntity(11U);
    msg.op = 2U;
    msg.actions.assign("XDPAUOVSJPVPQYFGZSZTDMELWPWJQYUGTCRTCXBEDSYDEHVOQLAQIRBKRWFPDXPYMEANGPAJLTHQFUKICXVAUCCGOXSSKSJLBTCTKMWZVFKIKUBZEIJFEQUBINPKGHZZETGFYFANRVEORYXTTJWMIRNYIRGSAQLLPUHNUUNIQWOVBXXWIIVKYNLVZWDEOQGAZRNKMCAHKRBHOCHQNHBDH");

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
    msg.setTimeStamp(0.619785215859);
    msg.setSource(37837U);
    msg.setSourceEntity(207U);
    msg.setDestination(55501U);
    msg.setDestinationEntity(10U);
    msg.op = 69U;
    msg.actions.assign("MGLICZDXRJXKPXXYAVZTQRRHWJVARBPCMNKKZKCYTMHNYZFMSPIQINELGEHQWRUIDFZOJONMPSPUQGOSXGQHTFSOVCOSQMWSZK");

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
    msg.setTimeStamp(0.47528133017);
    msg.setSource(18253U);
    msg.setSourceEntity(244U);
    msg.setDestination(42906U);
    msg.setDestinationEntity(10U);
    msg.op = 34U;
    msg.actions.assign("EQYJNOUUXVLUIZVRAQSJPWPJJYGRHZKJPXEBGTPJHNKFMBXACONZIVTXIEFQPKZDZZHFTTYLWVLROZFSCKJXFVUBDDINKEDUXVATDVWWPOWQNEUTHOYYTNBWFKSSRLHYELJIKIHBGOONOSCRBZSQRASGYSTQFHGLSICFVWENJSWYCAOMRPYRAYMQMCEMKTQWCREDIODDXQNLPFZXBHBABZJUHVFXLMXPULUAAGMATDMICEVUMRMWBPGGNHGGDC");

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
    msg.setTimeStamp(0.142521791306);
    msg.setSource(40376U);
    msg.setSourceEntity(39U);
    msg.setDestination(21894U);
    msg.setDestinationEntity(174U);
    msg.actions.assign("PMMRBZVPAYSZXWTWCYETVGYCEFELSNHJJSGJMTQTWFLKDNCXCXPWQYKQLLAXUKHTNKUZUUVCPDZJALFBIIHVHSWRWPMMMOZBAQRXLGRXLEEKYOAFOFOHYQCQOEDNVNKMGBFMWGFUCZPJZDRZSUSRWWUITZPUEMSNHFXUTOOYDRJGHYXIHBQTNQCFD");

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
    msg.setTimeStamp(0.190183907965);
    msg.setSource(58168U);
    msg.setSourceEntity(132U);
    msg.setDestination(6913U);
    msg.setDestinationEntity(114U);
    msg.actions.assign("OXFEZXCMJQXXEKCEVWSQUFNDVLDYTOWHMZOTJVTPOQKGCGOLCYJDIYAFJSIAZWWJIVHVDNJBQXMDJFYFZTAYRMFHOBYEWBKAIJWEHOXGXTYAUZSBWCTCOUSZZZQXUKVYEIELRQBCDJQWNJCUWGDVFKNLQYPBQTOREZKXPILKPTIHBUKGNGMGVSUEHLRWFDMGRAVAINSBAMXPRPNULFGACBDRPGYSORZBFAVNPLI");

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
    msg.setTimeStamp(0.691937885312);
    msg.setSource(8955U);
    msg.setSourceEntity(250U);
    msg.setDestination(6217U);
    msg.setDestinationEntity(121U);
    msg.actions.assign("VSABYGYAMTYUYFBYJDNNIBVHNFTZELPLRCYPPOZVCGUUJXBMFKLHWXLVWGCXKQWWJBJUJJYPROGNRGOOPBHGDZCSUPHMQNIHOTZLPKIQBJSJMSKTNIUFMOWSEIWQZPSWHKDNFBFVEKYDCZFZVERNQMADEAXITMASNCIEUDTRQCMOAMTXTQLKHIEKIDBCVXGLZOTNEQFCDEAZWQPTQRLHUSVFAVLRHRJFKA");

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
    msg.setTimeStamp(0.952449645505);
    msg.setSource(294U);
    msg.setSourceEntity(140U);
    msg.setDestination(51121U);
    msg.setDestinationEntity(129U);
    msg.button = 15U;
    msg.value = 64U;

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
    msg.setTimeStamp(0.281631297751);
    msg.setSource(3200U);
    msg.setSourceEntity(133U);
    msg.setDestination(19881U);
    msg.setDestinationEntity(243U);
    msg.button = 119U;
    msg.value = 156U;

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
    msg.setTimeStamp(0.00594461650974);
    msg.setSource(36417U);
    msg.setSourceEntity(3U);
    msg.setDestination(17798U);
    msg.setDestinationEntity(202U);
    msg.button = 185U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.993175202387);
    msg.setSource(4253U);
    msg.setSourceEntity(165U);
    msg.setDestination(32430U);
    msg.setDestinationEntity(52U);
    msg.op = 248U;
    msg.text.assign("IYXNQWXZYZXMUTQWUDIFZUZCREOXGRFGTYZXVKMTZBMEXLLMSKKSDCYKHATQPUAWLUYDUXROGBALBXBZWPQE");

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
    msg.setTimeStamp(0.551142256634);
    msg.setSource(40478U);
    msg.setSourceEntity(127U);
    msg.setDestination(59766U);
    msg.setDestinationEntity(92U);
    msg.op = 177U;
    msg.text.assign("LSGSHKFUFEQVWGCDNEEUYFQCTTGVKLJAWEOBIHPNTGOPSIKAGFZMIDRSSXIFJKTQXGSYVVF");

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
    msg.setTimeStamp(0.942339279875);
    msg.setSource(29612U);
    msg.setSourceEntity(214U);
    msg.setDestination(49303U);
    msg.setDestinationEntity(32U);
    msg.op = 181U;
    msg.text.assign("GDPQUIHVTKGITVFWERZONRYPUUVLYIIYCABQOHRVAQAZMSRRDJXGMYHDXVKGTOOTBCSAWDNELFQQBMOSLZMOPTIWYCEFDETVNKNKKJEHLIVIZDHNCOEBYBXWGSORMAOCRWQF");

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
    msg.setTimeStamp(0.0624233406845);
    msg.setSource(39073U);
    msg.setSourceEntity(134U);
    msg.setDestination(30920U);
    msg.setDestinationEntity(141U);
    msg.op = 199U;
    msg.time_remain = 0.120390526444;
    msg.sched_time = 0.396331903822;

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
    msg.setTimeStamp(0.358859790045);
    msg.setSource(22185U);
    msg.setSourceEntity(12U);
    msg.setDestination(57643U);
    msg.setDestinationEntity(84U);
    msg.op = 37U;
    msg.time_remain = 0.322815118674;
    msg.sched_time = 0.40503253638;

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
    msg.setTimeStamp(0.343091526039);
    msg.setSource(14733U);
    msg.setSourceEntity(22U);
    msg.setDestination(60448U);
    msg.setDestinationEntity(122U);
    msg.op = 104U;
    msg.time_remain = 0.214127975481;
    msg.sched_time = 0.675346110069;

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
    msg.setTimeStamp(0.33702644333);
    msg.setSource(12343U);
    msg.setSourceEntity(239U);
    msg.setDestination(1812U);
    msg.setDestinationEntity(232U);
    msg.name.assign("EIEZVXCKUXGPJYHIWWFSEOKNDVENMZBSZDDYBNXFIDPSHTLYUINJAYAWFZZFUAVSWMNPDZMFOBDGTTQXIHERCMMVJFPHNTJHFQGEPXKAKLRXQDKNRXJQKLGBPEIGXLLTQECBRKUDVQYQBOLBVULBGFUJGAWNPCGPEVRPMHWJSBHBQIVYCQPOYWKXRZTAIHOJXSSYZRLUACOFYWCLIRSUMOTWMKMCRTOVRQMDGCUELKSSTHDOUNVATWZOAJHYA");
    msg.op = 159U;
    msg.sched_time = 0.959267742281;

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
    msg.setTimeStamp(0.331356589523);
    msg.setSource(10592U);
    msg.setSourceEntity(215U);
    msg.setDestination(49296U);
    msg.setDestinationEntity(162U);
    msg.name.assign("IUQQJUYUIDPPXOBWGUXYVM");
    msg.op = 0U;
    msg.sched_time = 0.460247626956;

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
    msg.setTimeStamp(0.202706831026);
    msg.setSource(13657U);
    msg.setSourceEntity(62U);
    msg.setDestination(49737U);
    msg.setDestinationEntity(197U);
    msg.name.assign("PWAOGXYOGGUHMNUJDKTALXELBSGQDITRGSEQDVIAVQCPAFNRJZQOQHHECDVDORKRXWWTUUVAXLSNKFCQKJMSTHGTPJNYETBXBKCDOPRYXFJEXILCYOZDVBVYCSVGPMBANBWKZILMZOBATJCOEIMIAHNSWZ");
    msg.op = 53U;
    msg.sched_time = 0.987820094083;

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
    msg.setTimeStamp(0.541574188946);
    msg.setSource(57920U);
    msg.setSourceEntity(227U);
    msg.setDestination(45265U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.0242224159743);
    msg.setSource(2782U);
    msg.setSourceEntity(30U);
    msg.setDestination(60430U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.997835205982);
    msg.setSource(34669U);
    msg.setSourceEntity(169U);
    msg.setDestination(19929U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.850752523313);
    msg.setSource(28929U);
    msg.setSourceEntity(235U);
    msg.setDestination(49697U);
    msg.setDestinationEntity(228U);
    msg.name.assign("LIFKGHEAJRZIGSTFUVUVBBHBFSUXDSEQLDHQWADQNTQGHZRNJSYJVKDTXJNCKPI");
    msg.state = 83U;

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
    msg.setTimeStamp(0.59192177181);
    msg.setSource(24412U);
    msg.setSourceEntity(180U);
    msg.setDestination(52992U);
    msg.setDestinationEntity(214U);
    msg.name.assign("FXPGUVZSCOJMFMTYQZYKVAEURSESZANTBLTAKCNQISFKDCHJVFOKNDWZAAOIDTZLHQPXTKDXTMDCQJYQGV");
    msg.state = 227U;

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
    msg.setTimeStamp(0.502068501082);
    msg.setSource(31314U);
    msg.setSourceEntity(209U);
    msg.setDestination(59988U);
    msg.setDestinationEntity(24U);
    msg.name.assign("BBNQAYGSPGPAOSFFEIFXZLDMGBJSPLXOKNAXOWMBMMUPEJNUPSIKBYLPWBIGMSOPTLCDNARYWXOGZVUKUOQGHBMRQSXWSXMDDU");
    msg.state = 51U;

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
    msg.setTimeStamp(0.246115133598);
    msg.setSource(36888U);
    msg.setSourceEntity(208U);
    msg.setDestination(41018U);
    msg.setDestinationEntity(123U);
    msg.name.assign("ULDXYXVBKGKUOLTLBKAGJOQVPZNUHAZQBNRWDHTROITTTNQLCHDZLFBXREGAIQPUNIHYOFMCFJNECFWGMOFHJYAUSPCZSLIQXHBXDWJFUVUJYEOWWEZJMUL");
    msg.value = 30U;

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
    msg.setTimeStamp(0.311664052252);
    msg.setSource(53811U);
    msg.setSourceEntity(51U);
    msg.setDestination(25143U);
    msg.setDestinationEntity(247U);
    msg.name.assign("MHISUXVURDCKCGDZLWVHCRTRTOQZKBOAPDXZKJAWWLRFKHT");
    msg.value = 162U;

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
    msg.setTimeStamp(0.87008718218);
    msg.setSource(15035U);
    msg.setSourceEntity(123U);
    msg.setDestination(60121U);
    msg.setDestinationEntity(243U);
    msg.name.assign("MXHVLIGMWUWJIVVZNDXLKLFSSLRYFPKHGOOQTUDZITKXVPUBBPTSZMCNSONPHACECHBJROMAPKMHWUUEHFXFBBRRKYMOLJKGEKHCSKGNBWKRDJYVZOXOXGZPWEUDFMWMFXNNPNYJVHTSEVQLILFYZAMRFIQZWUOCGNPQASCEYVWGJMALTIBTCCERIQQZBYSNXCTYPLERXWSROHAVLUQUDWJKQBXTTDSHYDUQNGICZT");
    msg.value = 218U;

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
    msg.setTimeStamp(0.0912184303632);
    msg.setSource(48887U);
    msg.setSourceEntity(106U);
    msg.setDestination(58540U);
    msg.setDestinationEntity(96U);
    msg.name.assign("JAWWKJPCEODQBHAATQLSWFJUHVTOJQPWFXIMVOESRZDIMLDJKNQVRRGVPLXCCBPUJCPUHMFFMXGGAPYOIYXKOHTKVOHYXDFERVSUQLBNHLDXYXGIZEIBQSZBMLYQQNUTBPLDTPNZAZAYPMGFFFLILGXDKEHSUIRENCHWAKSJUJMEDWFYQBGCKRZPYWWIEGKRBMYVNNUIUCMIGAC");

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
    msg.setTimeStamp(0.0609221023755);
    msg.setSource(4142U);
    msg.setSourceEntity(202U);
    msg.setDestination(24595U);
    msg.setDestinationEntity(27U);
    msg.name.assign("BJMPITSRVOISQYSQHGIQELGTKEHJXUCMXESTLQAKLEKXDTGWVDLGQWGQSXWVBFXOSXQZVCMKTPIWFMJBJIPAXCIJFWGAKZPMKHBCHYRLOEUTJPVWIQYHDMZVO");

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
    msg.setTimeStamp(0.758408762768);
    msg.setSource(39152U);
    msg.setSourceEntity(71U);
    msg.setDestination(30400U);
    msg.setDestinationEntity(15U);
    msg.name.assign("CIGVUUSSLOSFRNNQGGKBDQKTBULMORIZFLEBLXZTIECJMUIGEFXJYBDFDAHBKIXEUUDILIRFHXPWGKDDXUMMSZBLTJWGOKEKCKAALVARICJADQGPVZLVSXNARBRZLDCWQOKTHXSMZFXPNXPYOCHUBGKPHBZTNGJLZKV");

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
    msg.setTimeStamp(0.637699924885);
    msg.setSource(5212U);
    msg.setSourceEntity(114U);
    msg.setDestination(10076U);
    msg.setDestinationEntity(87U);
    msg.name.assign("IUMAZIRNLAUVBZVGXKGTXONPPYHXFQXJ");
    msg.value = 78U;

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
    msg.setTimeStamp(0.823093507061);
    msg.setSource(52493U);
    msg.setSourceEntity(102U);
    msg.setDestination(11052U);
    msg.setDestinationEntity(120U);
    msg.name.assign("IIVGBOLGWYZGXPHMTUIFVLVEGNEXEHJOBSEMKSHLRKIBIPGAKPORLJJBGTMTYWLBVVIRDIKUVXTDAJUCTOLTWQJBRKPSNRDWMSNLZYPHHDIFZEFDOOPFEMMBYDOKVSSZOWXZHWKCUYSYJZUXRGNHUJTRDYDQWBQCQGKYFFCZVPQTMQJONNQXIZYZLCCNCEAWRPNEXAVRBAYQ");
    msg.value = 203U;

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
    msg.setTimeStamp(0.545162101767);
    msg.setSource(10604U);
    msg.setSourceEntity(44U);
    msg.setDestination(47687U);
    msg.setDestinationEntity(166U);
    msg.name.assign("DWAUKFNZNTQTVOWYUQKONGEYWZVXQYCNBCZSJTCZOEWPFMLMGCGEEAIMIZLSIPQTJYDADRRGYLRTNOHBUTQQKHIBMLMRBHBNCOLPXISSKZMZCUGWGXFIPOTIMEYOHKVQDXXEJWHHCNZUWB");
    msg.value = 177U;

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
    msg.setTimeStamp(0.962417068777);
    msg.setSource(6850U);
    msg.setSourceEntity(61U);
    msg.setDestination(23639U);
    msg.setDestinationEntity(202U);
    msg.id = 128U;
    msg.period = 1991366342U;
    msg.duty_cycle = 1419013365U;

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
    msg.setTimeStamp(0.160900992245);
    msg.setSource(61928U);
    msg.setSourceEntity(253U);
    msg.setDestination(13658U);
    msg.setDestinationEntity(242U);
    msg.id = 56U;
    msg.period = 3929818298U;
    msg.duty_cycle = 2178064295U;

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
    msg.setTimeStamp(0.577172833101);
    msg.setSource(54551U);
    msg.setSourceEntity(251U);
    msg.setDestination(6981U);
    msg.setDestinationEntity(136U);
    msg.id = 39U;
    msg.period = 2606107177U;
    msg.duty_cycle = 76309624U;

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
    msg.setTimeStamp(0.492603685311);
    msg.setSource(40160U);
    msg.setSourceEntity(1U);
    msg.setDestination(28120U);
    msg.setDestinationEntity(219U);
    msg.id = 247U;
    msg.period = 1432518267U;
    msg.duty_cycle = 2683032727U;

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
    msg.setTimeStamp(0.301131613389);
    msg.setSource(44159U);
    msg.setSourceEntity(187U);
    msg.setDestination(55609U);
    msg.setDestinationEntity(44U);
    msg.id = 18U;
    msg.period = 1547510946U;
    msg.duty_cycle = 948924733U;

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
    msg.setTimeStamp(0.333393197954);
    msg.setSource(12225U);
    msg.setSourceEntity(188U);
    msg.setDestination(9690U);
    msg.setDestinationEntity(59U);
    msg.id = 178U;
    msg.period = 2389852881U;
    msg.duty_cycle = 2240271274U;

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
    msg.setTimeStamp(0.888338037509);
    msg.setSource(4998U);
    msg.setSourceEntity(187U);
    msg.setDestination(2222U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.0788402129986;
    msg.lon = 0.752097479719;
    msg.height = 0.919411153219;
    msg.x = 0.199553908613;
    msg.y = 0.171907203523;
    msg.z = 0.700846705017;
    msg.phi = 0.6204337135;
    msg.theta = 0.0605909090945;
    msg.psi = 0.573614557814;
    msg.u = 0.657716882445;
    msg.v = 0.791559551766;
    msg.w = 0.722627196735;
    msg.vx = 0.474140646568;
    msg.vy = 0.081343223333;
    msg.vz = 0.625978188544;
    msg.p = 0.819842976793;
    msg.q = 0.424877685469;
    msg.r = 0.933117727667;
    msg.depth = 0.936649137995;
    msg.alt = 0.891001848927;

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
    msg.setTimeStamp(0.679828681323);
    msg.setSource(57582U);
    msg.setSourceEntity(10U);
    msg.setDestination(15915U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.767841388139;
    msg.lon = 0.0274513199172;
    msg.height = 0.148349847841;
    msg.x = 0.243638419218;
    msg.y = 0.456058459471;
    msg.z = 0.895146351387;
    msg.phi = 0.233025552718;
    msg.theta = 0.217647216907;
    msg.psi = 0.601432422673;
    msg.u = 0.968622829652;
    msg.v = 0.0958643557831;
    msg.w = 0.97013910284;
    msg.vx = 0.0429095108043;
    msg.vy = 0.333563670575;
    msg.vz = 0.642592637947;
    msg.p = 0.729359174537;
    msg.q = 0.0681076995163;
    msg.r = 0.314942556706;
    msg.depth = 0.456894236951;
    msg.alt = 0.0952303511439;

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
    msg.setTimeStamp(0.703956822267);
    msg.setSource(53315U);
    msg.setSourceEntity(46U);
    msg.setDestination(59104U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.998131772263;
    msg.lon = 0.864889812369;
    msg.height = 0.372776883666;
    msg.x = 0.584831587776;
    msg.y = 0.483816846916;
    msg.z = 0.732565553701;
    msg.phi = 0.0641931683084;
    msg.theta = 0.993930116134;
    msg.psi = 0.591645878535;
    msg.u = 0.561495521113;
    msg.v = 0.854625688455;
    msg.w = 0.766020045682;
    msg.vx = 0.186101746639;
    msg.vy = 0.345592270691;
    msg.vz = 0.0578967636445;
    msg.p = 0.892621601331;
    msg.q = 0.668656658875;
    msg.r = 0.988668542267;
    msg.depth = 0.820762761799;
    msg.alt = 0.720766203915;

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
    msg.setTimeStamp(0.766109162161);
    msg.setSource(50401U);
    msg.setSourceEntity(54U);
    msg.setDestination(58176U);
    msg.setDestinationEntity(33U);
    msg.x = 0.0497338758547;
    msg.y = 0.893219339818;
    msg.z = 0.88906912167;

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
    msg.setTimeStamp(0.00771872030791);
    msg.setSource(33141U);
    msg.setSourceEntity(95U);
    msg.setDestination(22940U);
    msg.setDestinationEntity(124U);
    msg.x = 0.53882403144;
    msg.y = 0.978132908099;
    msg.z = 0.103288658845;

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
    msg.setTimeStamp(0.744721964474);
    msg.setSource(54381U);
    msg.setSourceEntity(131U);
    msg.setDestination(20014U);
    msg.setDestinationEntity(160U);
    msg.x = 0.518854935406;
    msg.y = 0.0462144726654;
    msg.z = 0.437319644417;

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
    msg.setTimeStamp(0.72401055186);
    msg.setSource(26593U);
    msg.setSourceEntity(159U);
    msg.setDestination(32943U);
    msg.setDestinationEntity(140U);
    msg.value = 0.208438948535;

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
    msg.setTimeStamp(0.444300721508);
    msg.setSource(40117U);
    msg.setSourceEntity(14U);
    msg.setDestination(49637U);
    msg.setDestinationEntity(174U);
    msg.value = 0.947736135789;

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
    msg.setTimeStamp(0.122475199227);
    msg.setSource(50515U);
    msg.setSourceEntity(237U);
    msg.setDestination(20255U);
    msg.setDestinationEntity(239U);
    msg.value = 0.89030728046;

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
    msg.setTimeStamp(0.117332228865);
    msg.setSource(27389U);
    msg.setSourceEntity(200U);
    msg.setDestination(60564U);
    msg.setDestinationEntity(236U);
    msg.value = 0.25197711294;

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
    msg.setTimeStamp(0.0279666979761);
    msg.setSource(19091U);
    msg.setSourceEntity(46U);
    msg.setDestination(58009U);
    msg.setDestinationEntity(99U);
    msg.value = 0.775524823913;

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
    msg.setTimeStamp(0.253330491404);
    msg.setSource(4750U);
    msg.setSourceEntity(96U);
    msg.setDestination(28683U);
    msg.setDestinationEntity(148U);
    msg.value = 0.869206908442;

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
    msg.setTimeStamp(0.788080493243);
    msg.setSource(7880U);
    msg.setSourceEntity(77U);
    msg.setDestination(57440U);
    msg.setDestinationEntity(33U);
    msg.x = 0.279079445274;
    msg.y = 0.19835023089;
    msg.z = 0.173434582425;
    msg.phi = 0.519110663125;
    msg.theta = 0.385428922014;
    msg.psi = 0.327469059672;
    msg.p = 0.162909447755;
    msg.q = 0.37462568555;
    msg.r = 0.820833442893;
    msg.u = 0.386111333138;
    msg.v = 0.429587324101;
    msg.w = 0.889421482601;
    msg.bias_psi = 0.855966367184;
    msg.bias_r = 0.437568839383;

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
    msg.setTimeStamp(0.528596998045);
    msg.setSource(24615U);
    msg.setSourceEntity(227U);
    msg.setDestination(51646U);
    msg.setDestinationEntity(195U);
    msg.x = 0.917669281536;
    msg.y = 0.580370068697;
    msg.z = 0.411890970747;
    msg.phi = 0.352548903498;
    msg.theta = 0.322131611008;
    msg.psi = 0.142716069424;
    msg.p = 0.476195426198;
    msg.q = 0.204350422556;
    msg.r = 0.300628092877;
    msg.u = 0.301522795252;
    msg.v = 0.69081167377;
    msg.w = 0.742053631383;
    msg.bias_psi = 0.168587650475;
    msg.bias_r = 0.774133358271;

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
    msg.setTimeStamp(0.675587286639);
    msg.setSource(34351U);
    msg.setSourceEntity(149U);
    msg.setDestination(65489U);
    msg.setDestinationEntity(181U);
    msg.x = 0.148853505016;
    msg.y = 0.327904136016;
    msg.z = 0.0896971226212;
    msg.phi = 0.0448849180912;
    msg.theta = 0.447950506956;
    msg.psi = 0.770783437362;
    msg.p = 0.514338927927;
    msg.q = 0.694452256012;
    msg.r = 0.333983627317;
    msg.u = 0.45652758297;
    msg.v = 0.359881094162;
    msg.w = 0.16156235517;
    msg.bias_psi = 0.133255494592;
    msg.bias_r = 0.0225595222072;

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
    msg.setTimeStamp(0.993547064571);
    msg.setSource(9433U);
    msg.setSourceEntity(165U);
    msg.setDestination(23684U);
    msg.setDestinationEntity(212U);
    msg.bias_psi = 0.0300938314595;
    msg.bias_r = 0.8341273423;
    msg.cog = 0.253476069647;
    msg.cyaw = 0.149039858647;
    msg.lbl_rej_level = 0.94485585738;
    msg.gps_rej_level = 0.507329817916;
    msg.custom_x = 0.167689970481;
    msg.custom_y = 0.54056504962;
    msg.custom_z = 0.809862193967;

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
    msg.setTimeStamp(0.331331994552);
    msg.setSource(52655U);
    msg.setSourceEntity(233U);
    msg.setDestination(65398U);
    msg.setDestinationEntity(80U);
    msg.bias_psi = 0.885805241032;
    msg.bias_r = 0.120283749437;
    msg.cog = 0.296035444807;
    msg.cyaw = 0.766313314967;
    msg.lbl_rej_level = 0.977462953219;
    msg.gps_rej_level = 0.0118571377288;
    msg.custom_x = 0.434282780362;
    msg.custom_y = 3.21191782988e-05;
    msg.custom_z = 0.661059162831;

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
    msg.setTimeStamp(0.480528823697);
    msg.setSource(44965U);
    msg.setSourceEntity(69U);
    msg.setDestination(31494U);
    msg.setDestinationEntity(3U);
    msg.bias_psi = 0.843422670585;
    msg.bias_r = 0.6031827859;
    msg.cog = 0.263187095202;
    msg.cyaw = 0.908318059957;
    msg.lbl_rej_level = 0.910732191787;
    msg.gps_rej_level = 0.516498057649;
    msg.custom_x = 0.882725208194;
    msg.custom_y = 0.0119243266907;
    msg.custom_z = 0.378840426699;

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
    msg.setTimeStamp(0.854107374569);
    msg.setSource(28448U);
    msg.setSourceEntity(64U);
    msg.setDestination(2390U);
    msg.setDestinationEntity(0U);
    msg.utc_time = 0.324903783335;
    msg.reason = 202U;

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
    msg.setTimeStamp(0.299980136948);
    msg.setSource(14307U);
    msg.setSourceEntity(215U);
    msg.setDestination(25203U);
    msg.setDestinationEntity(199U);
    msg.utc_time = 0.656497138537;
    msg.reason = 51U;

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
    msg.setTimeStamp(0.0846052363749);
    msg.setSource(30177U);
    msg.setSourceEntity(30U);
    msg.setDestination(39080U);
    msg.setDestinationEntity(73U);
    msg.utc_time = 0.210585965905;
    msg.reason = 122U;

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
    msg.setTimeStamp(0.0802990936418);
    msg.setSource(44264U);
    msg.setSourceEntity(134U);
    msg.setDestination(39342U);
    msg.setDestinationEntity(109U);
    msg.id = 245U;
    msg.range = 0.44121286259;
    msg.acceptance = 0U;

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
    msg.setTimeStamp(0.155897749481);
    msg.setSource(8054U);
    msg.setSourceEntity(35U);
    msg.setDestination(4256U);
    msg.setDestinationEntity(251U);
    msg.id = 18U;
    msg.range = 0.773493805006;
    msg.acceptance = 113U;

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
    msg.setTimeStamp(0.0722236196349);
    msg.setSource(30864U);
    msg.setSourceEntity(29U);
    msg.setDestination(38343U);
    msg.setDestinationEntity(10U);
    msg.id = 179U;
    msg.range = 0.999159453811;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.42458114284);
    msg.setSource(63280U);
    msg.setSourceEntity(241U);
    msg.setDestination(9562U);
    msg.setDestinationEntity(110U);
    msg.type = 53U;
    msg.reason = 77U;
    msg.value = 0.00573123544426;
    msg.timestep = 0.862763893349;

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
    msg.setTimeStamp(0.834027655773);
    msg.setSource(13172U);
    msg.setSourceEntity(9U);
    msg.setDestination(16835U);
    msg.setDestinationEntity(202U);
    msg.type = 7U;
    msg.reason = 116U;
    msg.value = 0.14791901861;
    msg.timestep = 0.564506931017;

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
    msg.setTimeStamp(0.810358229376);
    msg.setSource(7950U);
    msg.setSourceEntity(40U);
    msg.setDestination(33694U);
    msg.setDestinationEntity(67U);
    msg.type = 8U;
    msg.reason = 1U;
    msg.value = 0.215862293835;
    msg.timestep = 0.833406411159;

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
    msg.setTimeStamp(0.114515003364);
    msg.setSource(36560U);
    msg.setSourceEntity(75U);
    msg.setDestination(4795U);
    msg.setDestinationEntity(220U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RSLWHSPOPMUYTMEILQYYLXXMTPQFOMOEPQFCSIOAGKLXEJCRWXTMVZJZHFXIFJOJZBRWDDGIYNPTZCJJGOBFVTLUJGHKALZKQKWEOJUQGTGFIXHEKCGILNUADUSWHENRBJMXLAKWDQDVRAPNXHUFLQGZRWNSPUMNCVPKDHAKSDPFDDIJNMWBUBUEBYBAYOSCARBRLGCMIUVQTYIFOBDTRYNQEBNVTOHEHCTQASZPFVGCISEWVY");
    tmp_msg_0.lat = 0.699673530723;
    tmp_msg_0.lon = 0.925717161534;
    tmp_msg_0.depth = 0.0269637441915;
    tmp_msg_0.query_channel = 254U;
    tmp_msg_0.reply_channel = 74U;
    tmp_msg_0.transponder_delay = 216U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.164540953594;
    msg.y = 0.297539760837;
    msg.var_x = 0.637932116331;
    msg.var_y = 0.488837272659;
    msg.distance = 0.0266111038071;

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
    msg.setTimeStamp(0.48891399632);
    msg.setSource(57725U);
    msg.setSourceEntity(132U);
    msg.setDestination(54013U);
    msg.setDestinationEntity(250U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XAWPUBANKFZEMUJSZIWVMTKATOKCZQWWDSBBXSWMVHIGUERDYGFYQVWYNTOUBHNFZWJOBQKLONTNPXFLZXYEHDXIEAFRDRIKABSRIPGGBGZEOYZXKYCYCDWFMFOHKDCGVBLKJWAXLSOSHGRNHONDHMMURCUTASPRKUHJOEVJAVMYFJLRWTVVIJXQIGPIRTEEHMQTSLQJQODMLJNIRFVPEQCCDDTPBLEKPTGUCZLYBCXQFYIQZNJ");
    tmp_msg_0.lat = 0.121162247291;
    tmp_msg_0.lon = 0.676216543534;
    tmp_msg_0.depth = 0.540284317249;
    tmp_msg_0.query_channel = 214U;
    tmp_msg_0.reply_channel = 35U;
    tmp_msg_0.transponder_delay = 101U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.568772238169;
    msg.y = 0.564097942899;
    msg.var_x = 0.248025682944;
    msg.var_y = 0.139929199103;
    msg.distance = 0.058802456392;

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
    msg.setTimeStamp(0.543373179839);
    msg.setSource(48978U);
    msg.setSourceEntity(60U);
    msg.setDestination(9444U);
    msg.setDestinationEntity(44U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GUZQPEUSZYNYEDPKZDVATOEIPEMHSUNEAPRLRXBWHWMFMYMYAWEGMXLKZCSHDJOKYVEKRZKVHLXHRZXFXSABQFMMYTOKVUAVWCXOTBIJSOUMQPUORDUQVNVMJXQXVSPHGLELSTCWNBJHAWKTSFIXDABXTJQQWSJINGKQFOFDDYMICBVDPJGLRHYFWNKBZDSCQYTII");
    tmp_msg_0.lat = 0.0405125948285;
    tmp_msg_0.lon = 0.0955914613446;
    tmp_msg_0.depth = 0.809638715088;
    tmp_msg_0.query_channel = 241U;
    tmp_msg_0.reply_channel = 186U;
    tmp_msg_0.transponder_delay = 52U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.207852748777;
    msg.y = 0.668081457039;
    msg.var_x = 0.627220396078;
    msg.var_y = 0.71656516547;
    msg.distance = 0.128827406685;

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
    msg.setTimeStamp(0.314367206729);
    msg.setSource(44772U);
    msg.setSourceEntity(203U);
    msg.setDestination(52413U);
    msg.setDestinationEntity(195U);
    msg.state = 24U;

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
    msg.setTimeStamp(0.418431761947);
    msg.setSource(58028U);
    msg.setSourceEntity(43U);
    msg.setDestination(18388U);
    msg.setDestinationEntity(125U);
    msg.state = 131U;

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
    msg.setTimeStamp(0.297763031598);
    msg.setSource(65237U);
    msg.setSourceEntity(64U);
    msg.setDestination(13820U);
    msg.setDestinationEntity(61U);
    msg.state = 202U;

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
    msg.setTimeStamp(0.731303064046);
    msg.setSource(35871U);
    msg.setSourceEntity(48U);
    msg.setDestination(53628U);
    msg.setDestinationEntity(108U);
    msg.x = 0.480649578306;
    msg.y = 0.866553692096;
    msg.z = 0.211070293232;

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
    msg.setTimeStamp(0.122572039524);
    msg.setSource(4768U);
    msg.setSourceEntity(81U);
    msg.setDestination(44799U);
    msg.setDestinationEntity(26U);
    msg.x = 0.0873204144478;
    msg.y = 0.432177547785;
    msg.z = 0.482083805352;

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
    msg.setTimeStamp(0.883746067874);
    msg.setSource(1609U);
    msg.setSourceEntity(12U);
    msg.setDestination(9079U);
    msg.setDestinationEntity(165U);
    msg.x = 0.455618119394;
    msg.y = 0.0498413919011;
    msg.z = 0.592427261744;

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
    msg.setTimeStamp(0.85415591621);
    msg.setSource(56045U);
    msg.setSourceEntity(225U);
    msg.setDestination(477U);
    msg.setDestinationEntity(199U);
    msg.va = 0.318198699905;
    msg.aoa = 0.422456009023;
    msg.ssa = 0.028241852708;

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
    msg.setTimeStamp(0.0521585564037);
    msg.setSource(54341U);
    msg.setSourceEntity(188U);
    msg.setDestination(40510U);
    msg.setDestinationEntity(141U);
    msg.va = 0.519053197442;
    msg.aoa = 0.491142972933;
    msg.ssa = 0.850418797625;

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
    msg.setTimeStamp(0.767610109086);
    msg.setSource(23519U);
    msg.setSourceEntity(39U);
    msg.setDestination(13915U);
    msg.setDestinationEntity(183U);
    msg.va = 0.0624496242595;
    msg.aoa = 0.743506296492;
    msg.ssa = 0.0860071915117;

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
    msg.setTimeStamp(0.43663018856);
    msg.setSource(11379U);
    msg.setSourceEntity(77U);
    msg.setDestination(519U);
    msg.setDestinationEntity(89U);
    msg.value = 0.504733889848;

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
    msg.setTimeStamp(0.0305958447961);
    msg.setSource(14078U);
    msg.setSourceEntity(121U);
    msg.setDestination(31916U);
    msg.setDestinationEntity(115U);
    msg.value = 0.175665156664;

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
    msg.setTimeStamp(0.814567752705);
    msg.setSource(30416U);
    msg.setSourceEntity(239U);
    msg.setDestination(26813U);
    msg.setDestinationEntity(203U);
    msg.value = 0.817632392746;

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
    msg.setTimeStamp(0.769586683072);
    msg.setSource(26036U);
    msg.setSourceEntity(184U);
    msg.setDestination(26115U);
    msg.setDestinationEntity(159U);
    msg.value = 0.972277230415;
    msg.z_units = 103U;

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
    msg.setTimeStamp(0.552696640791);
    msg.setSource(16369U);
    msg.setSourceEntity(7U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(69U);
    msg.value = 0.276450292062;
    msg.z_units = 123U;

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
    msg.setTimeStamp(0.294167664057);
    msg.setSource(13275U);
    msg.setSourceEntity(61U);
    msg.setDestination(39785U);
    msg.setDestinationEntity(157U);
    msg.value = 0.373670362443;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.193825328229);
    msg.setSource(49711U);
    msg.setSourceEntity(136U);
    msg.setDestination(45187U);
    msg.setDestinationEntity(238U);
    msg.value = 0.289169914741;
    msg.speed_units = 38U;

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
    msg.setTimeStamp(0.111980053497);
    msg.setSource(39790U);
    msg.setSourceEntity(25U);
    msg.setDestination(53588U);
    msg.setDestinationEntity(29U);
    msg.value = 0.769734747345;
    msg.speed_units = 219U;

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
    msg.setTimeStamp(0.763293554439);
    msg.setSource(58836U);
    msg.setSourceEntity(249U);
    msg.setDestination(50378U);
    msg.setDestinationEntity(124U);
    msg.value = 0.313691251266;
    msg.speed_units = 156U;

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
    msg.setTimeStamp(0.651007737879);
    msg.setSource(48506U);
    msg.setSourceEntity(1U);
    msg.setDestination(28115U);
    msg.setDestinationEntity(75U);
    msg.value = 0.386174057331;

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
    msg.setTimeStamp(0.480976598365);
    msg.setSource(46340U);
    msg.setSourceEntity(86U);
    msg.setDestination(5370U);
    msg.setDestinationEntity(205U);
    msg.value = 0.213140613552;

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
    msg.setTimeStamp(0.994540961566);
    msg.setSource(56071U);
    msg.setSourceEntity(176U);
    msg.setDestination(18650U);
    msg.setDestinationEntity(155U);
    msg.value = 0.0724833400543;

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
    msg.setTimeStamp(0.370522557113);
    msg.setSource(39529U);
    msg.setSourceEntity(66U);
    msg.setDestination(47388U);
    msg.setDestinationEntity(119U);
    msg.value = 0.404692393803;

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
    msg.setTimeStamp(0.12925863687);
    msg.setSource(35930U);
    msg.setSourceEntity(166U);
    msg.setDestination(54572U);
    msg.setDestinationEntity(48U);
    msg.value = 0.303763065332;

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
    msg.setTimeStamp(0.0728008667204);
    msg.setSource(21964U);
    msg.setSourceEntity(36U);
    msg.setDestination(47190U);
    msg.setDestinationEntity(218U);
    msg.value = 0.0122565855516;

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
    msg.setTimeStamp(0.0587227496343);
    msg.setSource(48935U);
    msg.setSourceEntity(107U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(91U);
    msg.value = 0.476913323606;

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
    msg.setTimeStamp(0.0633760998102);
    msg.setSource(27125U);
    msg.setSourceEntity(219U);
    msg.setDestination(529U);
    msg.setDestinationEntity(2U);
    msg.value = 0.0119068478552;

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
    msg.setTimeStamp(0.0558776772316);
    msg.setSource(7105U);
    msg.setSourceEntity(114U);
    msg.setDestination(50513U);
    msg.setDestinationEntity(240U);
    msg.value = 0.460678876972;

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
    msg.setTimeStamp(0.581035739347);
    msg.setSource(25136U);
    msg.setSourceEntity(166U);
    msg.setDestination(49034U);
    msg.setDestinationEntity(216U);
    msg.path_ref = 1501393417U;
    msg.start_lat = 0.43577780375;
    msg.start_lon = 0.589472640021;
    msg.start_z = 0.19295554751;
    msg.start_z_units = 251U;
    msg.end_lat = 0.594547632383;
    msg.end_lon = 0.964423389217;
    msg.end_z = 0.484657641983;
    msg.end_z_units = 23U;
    msg.speed = 0.54592222514;
    msg.speed_units = 130U;
    msg.lradius = 0.219009953376;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.286507797328);
    msg.setSource(28412U);
    msg.setSourceEntity(35U);
    msg.setDestination(20320U);
    msg.setDestinationEntity(215U);
    msg.path_ref = 3670964148U;
    msg.start_lat = 0.842520192669;
    msg.start_lon = 0.874554348725;
    msg.start_z = 0.389705175438;
    msg.start_z_units = 12U;
    msg.end_lat = 0.23355202723;
    msg.end_lon = 0.937367603203;
    msg.end_z = 0.90410565647;
    msg.end_z_units = 188U;
    msg.speed = 0.97865180116;
    msg.speed_units = 98U;
    msg.lradius = 0.834491818921;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.149242439779);
    msg.setSource(22063U);
    msg.setSourceEntity(100U);
    msg.setDestination(4250U);
    msg.setDestinationEntity(145U);
    msg.path_ref = 626832458U;
    msg.start_lat = 0.618313614419;
    msg.start_lon = 0.483659425125;
    msg.start_z = 0.545232197853;
    msg.start_z_units = 236U;
    msg.end_lat = 0.235713345763;
    msg.end_lon = 0.56553074423;
    msg.end_z = 0.394030603101;
    msg.end_z_units = 131U;
    msg.speed = 0.321329215574;
    msg.speed_units = 35U;
    msg.lradius = 0.897577226618;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.481682984916);
    msg.setSource(17608U);
    msg.setSourceEntity(167U);
    msg.setDestination(29476U);
    msg.setDestinationEntity(36U);
    msg.x = 0.313066185169;
    msg.y = 0.0820294848062;
    msg.z = 0.127658640072;
    msg.k = 0.316517000856;
    msg.m = 0.829346161808;
    msg.n = 0.251288698352;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.280838172825);
    msg.setSource(12405U);
    msg.setSourceEntity(158U);
    msg.setDestination(42791U);
    msg.setDestinationEntity(68U);
    msg.x = 0.474996046768;
    msg.y = 0.0733998962834;
    msg.z = 0.0887117489693;
    msg.k = 0.272543097425;
    msg.m = 0.847014234196;
    msg.n = 0.550166418262;
    msg.flags = 252U;

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
    msg.setTimeStamp(0.653109444702);
    msg.setSource(48483U);
    msg.setSourceEntity(229U);
    msg.setDestination(46309U);
    msg.setDestinationEntity(41U);
    msg.x = 0.577929605893;
    msg.y = 0.96144908189;
    msg.z = 0.905543948005;
    msg.k = 0.326614352252;
    msg.m = 0.634908086916;
    msg.n = 0.614653234132;
    msg.flags = 99U;

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
    msg.setTimeStamp(0.0137235350462);
    msg.setSource(30535U);
    msg.setSourceEntity(236U);
    msg.setDestination(42970U);
    msg.setDestinationEntity(9U);
    msg.value = 0.00413913291861;

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
    msg.setTimeStamp(0.046831417358);
    msg.setSource(56509U);
    msg.setSourceEntity(114U);
    msg.setDestination(2363U);
    msg.setDestinationEntity(171U);
    msg.value = 0.0691751683739;

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
    msg.setTimeStamp(0.565175372896);
    msg.setSource(52237U);
    msg.setSourceEntity(25U);
    msg.setDestination(54607U);
    msg.setDestinationEntity(151U);
    msg.value = 0.386065815713;

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
    msg.setTimeStamp(0.457553470956);
    msg.setSource(18183U);
    msg.setSourceEntity(68U);
    msg.setDestination(26317U);
    msg.setDestinationEntity(176U);
    msg.u = 0.38133383761;
    msg.v = 0.130114038715;
    msg.w = 0.301729422003;
    msg.p = 0.340935280367;
    msg.q = 0.101502290582;
    msg.r = 0.247831269814;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.349476179066);
    msg.setSource(15179U);
    msg.setSourceEntity(157U);
    msg.setDestination(44480U);
    msg.setDestinationEntity(27U);
    msg.u = 0.373187693194;
    msg.v = 0.33579994909;
    msg.w = 0.845151099843;
    msg.p = 0.432809689199;
    msg.q = 0.965121168872;
    msg.r = 0.0297711695577;
    msg.flags = 136U;

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
    msg.setTimeStamp(0.464801996821);
    msg.setSource(34749U);
    msg.setSourceEntity(216U);
    msg.setDestination(59850U);
    msg.setDestinationEntity(99U);
    msg.u = 0.281183662477;
    msg.v = 0.975147609937;
    msg.w = 0.712155150522;
    msg.p = 0.0478971843003;
    msg.q = 0.917008296948;
    msg.r = 0.983618922126;
    msg.flags = 225U;

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
    msg.setTimeStamp(0.72177896015);
    msg.setSource(57468U);
    msg.setSourceEntity(102U);
    msg.setDestination(54042U);
    msg.setDestinationEntity(118U);
    msg.path_ref = 3802821064U;
    msg.start_lat = 0.0756021006482;
    msg.start_lon = 0.951525280037;
    msg.start_z = 0.434425302295;
    msg.start_z_units = 216U;
    msg.end_lat = 0.569982380851;
    msg.end_lon = 0.819482841214;
    msg.end_z = 0.798002744978;
    msg.end_z_units = 26U;
    msg.lradius = 0.270363745415;
    msg.flags = 152U;
    msg.x = 0.578986681775;
    msg.y = 0.508307154813;
    msg.z = 0.484242622128;
    msg.vx = 0.768034675068;
    msg.vy = 0.33910555397;
    msg.vz = 0.470971278297;
    msg.course_error = 0.644371836409;
    msg.eta = 27952U;

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
    msg.setTimeStamp(0.261248992704);
    msg.setSource(9105U);
    msg.setSourceEntity(151U);
    msg.setDestination(16368U);
    msg.setDestinationEntity(132U);
    msg.path_ref = 3999530784U;
    msg.start_lat = 0.488555722738;
    msg.start_lon = 0.085233267566;
    msg.start_z = 0.766706072168;
    msg.start_z_units = 245U;
    msg.end_lat = 0.467259653291;
    msg.end_lon = 0.374216138314;
    msg.end_z = 0.28558722946;
    msg.end_z_units = 237U;
    msg.lradius = 0.22289811941;
    msg.flags = 198U;
    msg.x = 0.510509600853;
    msg.y = 0.669928225431;
    msg.z = 0.546514756403;
    msg.vx = 0.522140123687;
    msg.vy = 0.818180874354;
    msg.vz = 0.540789722099;
    msg.course_error = 0.747085548815;
    msg.eta = 41574U;

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
    msg.setTimeStamp(0.963856059603);
    msg.setSource(54652U);
    msg.setSourceEntity(85U);
    msg.setDestination(11366U);
    msg.setDestinationEntity(139U);
    msg.path_ref = 1522155402U;
    msg.start_lat = 0.65513433655;
    msg.start_lon = 0.511445630115;
    msg.start_z = 0.245707915918;
    msg.start_z_units = 211U;
    msg.end_lat = 0.414620153837;
    msg.end_lon = 0.208099467886;
    msg.end_z = 0.635832319606;
    msg.end_z_units = 114U;
    msg.lradius = 0.237104826822;
    msg.flags = 83U;
    msg.x = 0.289055710321;
    msg.y = 0.443939556967;
    msg.z = 0.639715265014;
    msg.vx = 0.187189666687;
    msg.vy = 0.764440500817;
    msg.vz = 0.26579543555;
    msg.course_error = 0.617640155027;
    msg.eta = 13446U;

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
    msg.setTimeStamp(0.338235564658);
    msg.setSource(44252U);
    msg.setSourceEntity(123U);
    msg.setDestination(20677U);
    msg.setDestinationEntity(167U);
    msg.k = 0.918265365447;
    msg.m = 0.353902747204;
    msg.n = 0.301831869443;

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
    msg.setTimeStamp(0.201469511318);
    msg.setSource(41508U);
    msg.setSourceEntity(138U);
    msg.setDestination(8794U);
    msg.setDestinationEntity(244U);
    msg.k = 0.647963023278;
    msg.m = 0.0521203466905;
    msg.n = 0.0344778980707;

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
    msg.setTimeStamp(0.590099011926);
    msg.setSource(48516U);
    msg.setSourceEntity(130U);
    msg.setDestination(37903U);
    msg.setDestinationEntity(166U);
    msg.k = 0.223956315025;
    msg.m = 0.95683930406;
    msg.n = 0.075103072746;

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
    msg.setTimeStamp(0.296506387396);
    msg.setSource(18291U);
    msg.setSourceEntity(71U);
    msg.setDestination(28082U);
    msg.setDestinationEntity(8U);
    msg.p = 0.850178400154;
    msg.i = 0.617192310512;
    msg.d = 0.487976058491;
    msg.a = 0.13656882747;

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
    msg.setTimeStamp(0.528363441517);
    msg.setSource(18997U);
    msg.setSourceEntity(43U);
    msg.setDestination(42831U);
    msg.setDestinationEntity(181U);
    msg.p = 0.971505808099;
    msg.i = 0.722316457186;
    msg.d = 0.972947390257;
    msg.a = 0.88756609043;

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
    msg.setTimeStamp(0.787176899229);
    msg.setSource(26661U);
    msg.setSourceEntity(89U);
    msg.setDestination(42322U);
    msg.setDestinationEntity(210U);
    msg.p = 0.652639505146;
    msg.i = 0.976941431337;
    msg.d = 0.40332549789;
    msg.a = 0.963165327378;

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
    msg.setTimeStamp(0.439740190953);
    msg.setSource(55267U);
    msg.setSourceEntity(27U);
    msg.setDestination(12901U);
    msg.setDestinationEntity(103U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.993675208558);
    msg.setSource(38789U);
    msg.setSourceEntity(101U);
    msg.setDestination(57213U);
    msg.setDestinationEntity(97U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.0368761638674);
    msg.setSource(12221U);
    msg.setSourceEntity(98U);
    msg.setDestination(53055U);
    msg.setDestinationEntity(135U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.0123548680767);
    msg.setSource(26393U);
    msg.setSourceEntity(239U);
    msg.setDestination(56153U);
    msg.setDestinationEntity(166U);
    msg.x = 0.792840687694;
    msg.y = 0.493402427478;
    msg.z = 0.0416156007821;
    msg.vx = 0.0715302964504;
    msg.vy = 0.830680541453;
    msg.vz = 0.727691158032;
    msg.ax = 0.125081012805;
    msg.ay = 0.813775746969;
    msg.az = 0.0223540356376;
    msg.flags = 28761U;

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
    msg.setTimeStamp(0.546501990608);
    msg.setSource(62815U);
    msg.setSourceEntity(228U);
    msg.setDestination(10485U);
    msg.setDestinationEntity(20U);
    msg.x = 0.0582740228756;
    msg.y = 0.636716893344;
    msg.z = 0.441104239485;
    msg.vx = 0.977403907651;
    msg.vy = 0.980185289035;
    msg.vz = 0.0261805337831;
    msg.ax = 0.366217051381;
    msg.ay = 0.0718910348095;
    msg.az = 0.711414488072;
    msg.flags = 26814U;

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
    msg.setTimeStamp(0.829497621304);
    msg.setSource(12689U);
    msg.setSourceEntity(52U);
    msg.setDestination(16094U);
    msg.setDestinationEntity(66U);
    msg.x = 0.649923086909;
    msg.y = 0.620611528741;
    msg.z = 0.687299018326;
    msg.vx = 0.0449275111484;
    msg.vy = 0.129679364145;
    msg.vz = 0.650335370632;
    msg.ax = 0.75015457566;
    msg.ay = 0.493254417003;
    msg.az = 0.842319882373;
    msg.flags = 61726U;

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
    msg.setTimeStamp(0.791998485739);
    msg.setSource(53642U);
    msg.setSourceEntity(186U);
    msg.setDestination(6177U);
    msg.setDestinationEntity(235U);
    msg.value = 0.365072638217;

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
    msg.setTimeStamp(0.569108244487);
    msg.setSource(6898U);
    msg.setSourceEntity(100U);
    msg.setDestination(59357U);
    msg.setDestinationEntity(13U);
    msg.value = 0.55297185849;

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
    msg.setTimeStamp(0.377732663529);
    msg.setSource(57616U);
    msg.setSourceEntity(97U);
    msg.setDestination(12637U);
    msg.setDestinationEntity(172U);
    msg.value = 0.718738919905;

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
    msg.setTimeStamp(0.493248149093);
    msg.setSource(6092U);
    msg.setSourceEntity(105U);
    msg.setDestination(20762U);
    msg.setDestinationEntity(67U);
    msg.timeout = 44165U;
    msg.lat = 0.133031743376;
    msg.lon = 0.519904183034;
    msg.z = 0.806919525403;
    msg.z_units = 77U;
    msg.speed = 0.651518772571;
    msg.speed_units = 146U;
    msg.roll = 0.681117852222;
    msg.pitch = 0.460403155962;
    msg.yaw = 0.440271053565;
    msg.custom.assign("RTBISZFBIKLSCKNEXZYGUXMIXNYOUWJVKDJYCCJOWWJLXXZXUORLYIHHKPCCNQLYXD");

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
    msg.setTimeStamp(0.531162534352);
    msg.setSource(33062U);
    msg.setSourceEntity(27U);
    msg.setDestination(46722U);
    msg.setDestinationEntity(145U);
    msg.timeout = 61723U;
    msg.lat = 0.12121741308;
    msg.lon = 0.319581010386;
    msg.z = 0.770151505737;
    msg.z_units = 242U;
    msg.speed = 0.555178344617;
    msg.speed_units = 130U;
    msg.roll = 0.638014221029;
    msg.pitch = 0.769366556248;
    msg.yaw = 0.937184050224;
    msg.custom.assign("KZCZZBVIOHWFDHNOZLWYYTPULOPKORBGEBNKWSUVMTUHVUPDPGDAJFVHZUBLMHQRZOZOCEAIRGJLTLVAXNCCXNYFNQFUIKQFYPSRGX");

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
    msg.setTimeStamp(0.379892454075);
    msg.setSource(65172U);
    msg.setSourceEntity(147U);
    msg.setDestination(51667U);
    msg.setDestinationEntity(33U);
    msg.timeout = 56221U;
    msg.lat = 0.0874837186767;
    msg.lon = 0.886400815548;
    msg.z = 0.245802334088;
    msg.z_units = 22U;
    msg.speed = 0.211589477934;
    msg.speed_units = 91U;
    msg.roll = 0.490771905325;
    msg.pitch = 0.228901704971;
    msg.yaw = 0.869885017338;
    msg.custom.assign("DYNDWYKCOZLIHNZUTGDSNXAYUGUHCGBOFIEXWTVZKRRMXWXKUNI");

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
    msg.setTimeStamp(0.391945379238);
    msg.setSource(62928U);
    msg.setSourceEntity(89U);
    msg.setDestination(17241U);
    msg.setDestinationEntity(166U);
    msg.timeout = 65065U;
    msg.lat = 0.410899004225;
    msg.lon = 0.0535762632827;
    msg.z = 0.57023354318;
    msg.z_units = 132U;
    msg.speed = 0.111236280282;
    msg.speed_units = 155U;
    msg.duration = 64286U;
    msg.radius = 0.540284321472;
    msg.flags = 10U;
    msg.custom.assign("SXKBCPGETXNVPFCGMNXMAHCMTGZEEUZPILEISHQFPTRJMMOBSYBVDDMPJSHQUPPKHZKDLHKHWRGFUAUPNSUQBIOKNKZNOMTJOGIYDDGRCEYBEVOLRXZJJETQAFBUQ");

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
    msg.setTimeStamp(0.810086199507);
    msg.setSource(64327U);
    msg.setSourceEntity(125U);
    msg.setDestination(50168U);
    msg.setDestinationEntity(82U);
    msg.timeout = 57160U;
    msg.lat = 0.181446067528;
    msg.lon = 0.660732396732;
    msg.z = 0.42531865687;
    msg.z_units = 42U;
    msg.speed = 0.967102681992;
    msg.speed_units = 215U;
    msg.duration = 51718U;
    msg.radius = 0.755741850549;
    msg.flags = 190U;
    msg.custom.assign("OOTQFPIHKJGEXZINCCHXPQQQDJHBZBLONQLOFAEZTMQJSPCDWAWTSADMAAWXTYYPEHVFRDPVVILZDMBLJ");

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
    msg.setTimeStamp(0.0584104747462);
    msg.setSource(17291U);
    msg.setSourceEntity(245U);
    msg.setDestination(3459U);
    msg.setDestinationEntity(199U);
    msg.timeout = 22993U;
    msg.lat = 0.587218322844;
    msg.lon = 0.788919856106;
    msg.z = 0.692445617478;
    msg.z_units = 231U;
    msg.speed = 0.685304581225;
    msg.speed_units = 100U;
    msg.duration = 28926U;
    msg.radius = 0.208873851872;
    msg.flags = 104U;
    msg.custom.assign("GVNNIRFLHBMTTXYPZAWOETCNUBJPKISTTJCGQXFFFMLWOBAHMFERCREYCTWAVIXBKNMAEHLVRVERQYRLZAQCKSDLTOQGDXNVQJGUVHOGBSZMYJLGRDJZXXWDNUBNCSPFYBPJRVBPXKODWEPLOVYHIKFSZWLLREQQTMOSYQTSAUHBICDIKPPNODUETISDFIJJUEVXKNKAMHAPKIDUGWFSGVKLMCCZ");

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
    msg.setTimeStamp(0.535717350193);
    msg.setSource(6992U);
    msg.setSourceEntity(31U);
    msg.setDestination(31902U);
    msg.setDestinationEntity(178U);
    msg.custom.assign("OHQFHNMBRLNGIHTHDOVAWKRDDBVHWCNRGDQUHPPVFIFZBQFXGRVVXNWJSZUJQXCQDONLSKFJCDEPMJEAUXGYFTXTANNITDIAGCZPLEASRFMTETIULYHAXZKTZIGYBMGYQLNZBWUKUCKOSJEJOKO");

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
    msg.setTimeStamp(0.306473883513);
    msg.setSource(27579U);
    msg.setSourceEntity(171U);
    msg.setDestination(33028U);
    msg.setDestinationEntity(188U);
    msg.custom.assign("HBMUOBLFHBESGVSMBDYIKVBTOZPCPCGPKXRVNQGTDDGVUELICFBTEUMARLWGAIKCWKZSYQOTOGQSYIMVNRLSNWENNYZIPADQYUCWPQXNOMJOAAFDLVPLBETVLFIXUHZRJTK");

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
    msg.setTimeStamp(0.528936501101);
    msg.setSource(32871U);
    msg.setSourceEntity(118U);
    msg.setDestination(45593U);
    msg.setDestinationEntity(25U);
    msg.custom.assign("FVDJYQXEUXCLHDNAIPCSVPHLORQVGBCIRSJWYQIDBBGZDUCQOJLDPGNHJFSLTCS");

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
    msg.setTimeStamp(0.14828306465);
    msg.setSource(62772U);
    msg.setSourceEntity(216U);
    msg.setDestination(24108U);
    msg.setDestinationEntity(57U);
    msg.timeout = 6789U;
    msg.lat = 0.433158259754;
    msg.lon = 0.134331158489;
    msg.z = 0.160405916514;
    msg.z_units = 195U;
    msg.duration = 29814U;
    msg.speed = 0.228365291308;
    msg.speed_units = 46U;
    msg.type = 187U;
    msg.radius = 0.163117842996;
    msg.length = 0.920396638767;
    msg.bearing = 0.383296137715;
    msg.direction = 246U;
    msg.custom.assign("IIMBRYGVZBLQHBNWKDMJGFTSHQLTJIXUFYSAOQXBEWAMAVSJQBWNGEOJKCXBUIBNPPUECBZCSWADVQETPHZFJTZMHHEQHDOVDLKAEXDOUALROMOGTGQISCL");

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
    msg.setTimeStamp(0.66010100009);
    msg.setSource(1181U);
    msg.setSourceEntity(92U);
    msg.setDestination(40707U);
    msg.setDestinationEntity(216U);
    msg.timeout = 58364U;
    msg.lat = 0.667819795487;
    msg.lon = 0.328718742848;
    msg.z = 0.383084621917;
    msg.z_units = 213U;
    msg.duration = 38287U;
    msg.speed = 0.177217928921;
    msg.speed_units = 194U;
    msg.type = 83U;
    msg.radius = 0.352223017898;
    msg.length = 0.0984251428645;
    msg.bearing = 0.763305753764;
    msg.direction = 4U;
    msg.custom.assign("VPKZBYAXWYTBPNAQGDEQTIDAMUTPKRPPQMIBJOFRDHNKIUMPDRJRPZCWEGMWIXBYMFQSSGDYVUNHHKGNJEAHQYATGZWWOUAEFIAQSVZNROWVBACHPIOQCYSSUDGRMAZJCJXGYTIGLCREKFGQGHKE");

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
    msg.setTimeStamp(0.936703725754);
    msg.setSource(26559U);
    msg.setSourceEntity(170U);
    msg.setDestination(24587U);
    msg.setDestinationEntity(145U);
    msg.timeout = 33336U;
    msg.lat = 0.528009735446;
    msg.lon = 0.481161716902;
    msg.z = 0.896892075156;
    msg.z_units = 228U;
    msg.duration = 58582U;
    msg.speed = 0.480878496708;
    msg.speed_units = 205U;
    msg.type = 211U;
    msg.radius = 0.922967383043;
    msg.length = 0.470609907897;
    msg.bearing = 0.300209527954;
    msg.direction = 190U;
    msg.custom.assign("JNRSVLFOCADWRVKVZEKVVJEBMPGYOHZWAESCPZTDNXGOOCDDUHSKNNEQPXMAXMESYNYTBDRHKNGBLPKQQWZRHKZRPRTMZTFJUZLUNGHOVWOFTAAGYLJNQAGRYKNIYEFLSHXASFQKIOWXPMJWPFLUNSCWZJVQKIOFMMULABJQBHPOYMXEUGGBMZKWUICBGCAIGRSUTDLBDVOLXDDWECUHPLJSCXYXIIJCBQDPJQEBTTTMYWUIT");

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
    msg.setTimeStamp(0.553856726756);
    msg.setSource(46832U);
    msg.setSourceEntity(44U);
    msg.setDestination(40280U);
    msg.setDestinationEntity(72U);
    msg.duration = 45146U;
    msg.custom.assign("KRMAMECUGFHIFNX");

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
    msg.setTimeStamp(0.0192990721909);
    msg.setSource(19467U);
    msg.setSourceEntity(102U);
    msg.setDestination(45475U);
    msg.setDestinationEntity(78U);
    msg.duration = 946U;
    msg.custom.assign("IJCPHJIZEIXRHWVZMXUAPFONGPBRZSQJYABCOFWTNPXQCSVYRKVKILVLOFKJZYOAQJKGQVJHGYDTQFITJYGXGPEHALXEKKRFJEVXFMLJZTQUWDSANHASBPKALRDCTVPOGLULTNKUGDWIOWEYDMBMOSETRMXGIAMDGLUBCXSBRJFEHSQTHNWNZMKQOADMNCSRZVBCPVLYQRAEISOCZUOPFCQMEVTWIYUYUUWXNH");

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
    msg.setTimeStamp(0.317317632398);
    msg.setSource(65183U);
    msg.setSourceEntity(60U);
    msg.setDestination(41179U);
    msg.setDestinationEntity(127U);
    msg.duration = 51047U;
    msg.custom.assign("MLRIZEDINVLOGMMJONQOTQGPHKQNUDYVIZICENDXRRVZTFDVQQMBFBVJSZCYYTSWPKUIRUAYGUFERXEBIZXPXWWIOZBJCFKLFUFPKULCPDOVUWPWYDTZUEHMTHIGTURMVVMGCAGKNALK");

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
    msg.setTimeStamp(0.0934321046418);
    msg.setSource(7068U);
    msg.setSourceEntity(156U);
    msg.setDestination(18359U);
    msg.setDestinationEntity(254U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.217689202957;
    msg.control.set(tmp_msg_0);
    msg.duration = 57638U;
    msg.custom.assign("XKGRYSVTMDBBZDUQBYKQSSLYYMGBRITMPGADAAEOTFIXIOXSXEVWTCW");

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
    msg.setTimeStamp(0.597560382166);
    msg.setSource(57537U);
    msg.setSourceEntity(224U);
    msg.setDestination(54462U);
    msg.setDestinationEntity(171U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.617061751147;
    msg.control.set(tmp_msg_0);
    msg.duration = 60711U;
    msg.custom.assign("XCLOXSDMMCTBHHJZKWSXZVLTZAQHKISLIBXUEMJBWQDRNOMPHOGMGVWFDROBMEZCIQJLQNXNAVNVQLKWESGFPWOBHQIGRAUXHCVKCLCYEOOEPQQRHWLYRGUSTENYRKKFKYPKFZNRFDUZHIVMTPEAKZYBAMCTTDTCFIXGJVGBCXTYAAFGDAJNLNIOJXIDPIABPEZRLGHLKSPUNFTMXWWJPCSQVUJUYTONZFSJHW");

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
    msg.setTimeStamp(0.620354738816);
    msg.setSource(45980U);
    msg.setSourceEntity(149U);
    msg.setDestination(55189U);
    msg.setDestinationEntity(220U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.00614333805332;
    msg.control.set(tmp_msg_0);
    msg.duration = 53976U;
    msg.custom.assign("ZSQLHITIHGXAFDDJHVKNWFGJEJJAYFPCGDOTFOMWAXRXZHRWNYVJCVMXAYFSDMTUVLIVXVEUW");

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
    msg.setTimeStamp(0.909973123485);
    msg.setSource(63773U);
    msg.setSourceEntity(89U);
    msg.setDestination(2200U);
    msg.setDestinationEntity(218U);
    msg.timeout = 13946U;
    msg.lat = 0.812927908634;
    msg.lon = 0.268341909856;
    msg.z = 0.490713858756;
    msg.z_units = 159U;
    msg.speed = 0.730157530588;
    msg.speed_units = 43U;
    msg.bearing = 0.714287586734;
    msg.cross_angle = 0.413940556807;
    msg.width = 0.0541881500671;
    msg.length = 0.742569779879;
    msg.hstep = 0.564499679036;
    msg.coff = 184U;
    msg.alternation = 0U;
    msg.flags = 22U;
    msg.custom.assign("ZSTXAGLZGISAYHBXEUNUJZDBOYCGMPLKELTHDJMXHXRLCDBWAQPJMOXECAPNZIBSRAKYGCRFVEKHFMZGDWLRJWVTUCIUOWTRUPJLFNOGQZHMIAJDBYCITJFSWYNSVNELDNXAEXHGWPVRVK");

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
    msg.setTimeStamp(0.918482623445);
    msg.setSource(12954U);
    msg.setSourceEntity(73U);
    msg.setDestination(34486U);
    msg.setDestinationEntity(245U);
    msg.timeout = 56920U;
    msg.lat = 0.6218304653;
    msg.lon = 0.160253000594;
    msg.z = 0.714287863123;
    msg.z_units = 135U;
    msg.speed = 0.584819236679;
    msg.speed_units = 187U;
    msg.bearing = 0.658002511929;
    msg.cross_angle = 0.434371228789;
    msg.width = 0.108046247557;
    msg.length = 0.36777503736;
    msg.hstep = 0.0484533485664;
    msg.coff = 77U;
    msg.alternation = 206U;
    msg.flags = 103U;
    msg.custom.assign("TTUSGWGBRJCVAKPSFNZCCLTXTDRUCCMQFUPLREPSOYHKKKBJYRLRNIFATRCYDFGPVVDOGBKZABEMELZNDZOYNWQNXDIFVHPRNGWXTAZNEHQRSJAFEHDBAVVYXIDAQIJXVQHQFUSUAXXKS");

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
    msg.setTimeStamp(0.493835011258);
    msg.setSource(24714U);
    msg.setSourceEntity(62U);
    msg.setDestination(40053U);
    msg.setDestinationEntity(254U);
    msg.timeout = 54262U;
    msg.lat = 0.993555486473;
    msg.lon = 0.568651095629;
    msg.z = 0.693441498309;
    msg.z_units = 114U;
    msg.speed = 0.756635846409;
    msg.speed_units = 224U;
    msg.bearing = 0.0491403410127;
    msg.cross_angle = 0.655695004393;
    msg.width = 0.604903266309;
    msg.length = 0.0814951094753;
    msg.hstep = 0.149396344932;
    msg.coff = 216U;
    msg.alternation = 161U;
    msg.flags = 214U;
    msg.custom.assign("DUTVJYPRMQWXKBTMPFWODJPFJUSGNEVVAXOSKQBPADSMXQZJJIKIBHYXQTJEXYUAFXZAPZVZAVHRFAQHZYHKLMWNLSXCYSNFZAHEMSGVOEDCLIUBOZRBGOPUCQEJXONHCTTPVYPBTDEDIGUBPQWQGIZMHNKNRHNFWLLDCJFRMKOLUWBSYILCHASUEBLQDORWCMRTOTVWQEFCXAYAUSNLTCKSIVGGYGTHIKDMWNNFIKPVKWYFGZERDGXCLUMJ");

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
    msg.setTimeStamp(0.272809363542);
    msg.setSource(49166U);
    msg.setSourceEntity(107U);
    msg.setDestination(24180U);
    msg.setDestinationEntity(43U);
    msg.timeout = 58830U;
    msg.lat = 0.286105415097;
    msg.lon = 0.479220329769;
    msg.z = 0.388783314557;
    msg.z_units = 67U;
    msg.speed = 0.70891319331;
    msg.speed_units = 5U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.519970285296;
    tmp_msg_0.y = 0.718818485186;
    tmp_msg_0.z = 0.507373176028;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YXNWJTQLDOFQWYDWKRGTPDECTUXSNDSKCSUSPYWQMIKXDRL");

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
    msg.setTimeStamp(0.541454532275);
    msg.setSource(36313U);
    msg.setSourceEntity(156U);
    msg.setDestination(17542U);
    msg.setDestinationEntity(247U);
    msg.timeout = 23022U;
    msg.lat = 0.308999093861;
    msg.lon = 0.20526538544;
    msg.z = 0.125234160154;
    msg.z_units = 189U;
    msg.speed = 0.551847764061;
    msg.speed_units = 74U;
    msg.custom.assign("ORFRGCPKXFENFQOKCCUIEGPHULILVUWZDCAVKNOMRUWEWPKALMRIMZXWVUTYUQLNIYKWMANZJTJFWFXTAPKQSMORZIZBOHGTBWJPRSANPGUSDCEPHXRZFLRCYGVMDXMLBDOAJFIYDXZYJKVIBWTQLQNDSAMBNENUCSZVXEITHUDYTWANYAVSXXGGBCGJOUBTYILVLHPEPBDJFGJQDWYQSJNHKHBZHRSBOZTYMPVACQQTEKSVHDEKCJFGROSQH");

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
    msg.setTimeStamp(0.861423903003);
    msg.setSource(12764U);
    msg.setSourceEntity(65U);
    msg.setDestination(45190U);
    msg.setDestinationEntity(133U);
    msg.timeout = 25971U;
    msg.lat = 0.0916332490241;
    msg.lon = 0.91166742685;
    msg.z = 0.976828175061;
    msg.z_units = 32U;
    msg.speed = 0.0533515623365;
    msg.speed_units = 214U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.00443299202322;
    tmp_msg_0.y = 0.155722925975;
    tmp_msg_0.z = 0.115998586163;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IGUFOPMQRUWQFZPJOHSBUIHIIUQQCQHMNYLGGIZDCSKDBTELGUMVFERVRBMHDHFPUMMAGVZUWGOZSTMPJDRYPLATJHBGNTNRYAZORQWLDVKAHREVCXSYFOOSIXSGBKRCUXIMC");

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
    msg.setTimeStamp(0.662959863484);
    msg.setSource(14694U);
    msg.setSourceEntity(249U);
    msg.setDestination(16941U);
    msg.setDestinationEntity(212U);
    msg.x = 0.987008805272;
    msg.y = 0.986716109984;
    msg.z = 0.968105851832;

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
    msg.setTimeStamp(0.720600105184);
    msg.setSource(8778U);
    msg.setSourceEntity(202U);
    msg.setDestination(39801U);
    msg.setDestinationEntity(146U);
    msg.x = 0.681049372089;
    msg.y = 0.544696458997;
    msg.z = 0.629458794473;

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
    msg.setTimeStamp(0.967264037624);
    msg.setSource(25751U);
    msg.setSourceEntity(141U);
    msg.setDestination(5236U);
    msg.setDestinationEntity(123U);
    msg.x = 0.244236139422;
    msg.y = 0.318291694032;
    msg.z = 0.905873899378;

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
    msg.setTimeStamp(0.480324039293);
    msg.setSource(44140U);
    msg.setSourceEntity(192U);
    msg.setDestination(37179U);
    msg.setDestinationEntity(174U);
    msg.timeout = 36514U;
    msg.lat = 0.809946640286;
    msg.lon = 0.474407637734;
    msg.z = 0.228030041363;
    msg.z_units = 214U;
    msg.amplitude = 0.419793733326;
    msg.pitch = 0.998188233878;
    msg.speed = 0.999000669858;
    msg.speed_units = 162U;
    msg.custom.assign("MDRTPPLJDSRFKGBYMFYMJODXQTQLPMJPVOYHYGRGACTBHAOCTKCFUNZKRMMGDNCXIWLGNOLFJFPTQOWBBCXGAAXIINDVJHWSAGLZUQEUVCOLZZPQRKIGYUCJCKHEYNGBUAYEUUPJXNZIFREZEQYWXKSCRWWSHRWFIZSRTXPBLJDUQDLFTEHMWIVPEHETXBSIDOVK");

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
    msg.setTimeStamp(0.486981270261);
    msg.setSource(7921U);
    msg.setSourceEntity(108U);
    msg.setDestination(56817U);
    msg.setDestinationEntity(56U);
    msg.timeout = 60613U;
    msg.lat = 0.251816719583;
    msg.lon = 0.630981263952;
    msg.z = 0.175407863627;
    msg.z_units = 232U;
    msg.amplitude = 0.478626470547;
    msg.pitch = 0.408980753771;
    msg.speed = 0.356357086473;
    msg.speed_units = 64U;
    msg.custom.assign("CSQAICIDVYSMMTRCHBXGVJCPDMWUIVMXHEKTZJYKYYHHOKOXGUYNQLSBWCZHUJPONNSFJAHCMGRJHLVSBKBTLWRNQVZYKSXFEYWFQZUXZIAMZFSGFWJBYVGYAXDDUTEPWFRDDGVSZNXIOSPNTJANPNCJDZZULMKDSLLUXEBADQIHHWFOWGQXPOPWEUKGANTMLRQDQETKRZBKNALQRFYGHCVBFJFEO");

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
    msg.setTimeStamp(0.28979264792);
    msg.setSource(17789U);
    msg.setSourceEntity(232U);
    msg.setDestination(26776U);
    msg.setDestinationEntity(40U);
    msg.timeout = 48751U;
    msg.lat = 0.445671322245;
    msg.lon = 0.00891125586222;
    msg.z = 0.139515893485;
    msg.z_units = 113U;
    msg.amplitude = 0.5005463028;
    msg.pitch = 0.970935553977;
    msg.speed = 0.511233898425;
    msg.speed_units = 198U;
    msg.custom.assign("UPEEXKHFXYTMBCCACAZIAXZTVFBKFOFSXLKENFOFPYAJREWNPOLSPWLBCMTIHKRJMGTLDSEHRJBJXMMDLHTJRRUQHGAIZAMHVEWXGBKININUBIFYYDPGTYMMCUGXIRRXENTOCVDUTVWFQDSGRSZYYQVWLQVYOPSULWDHWQPLGJJRACHYESTCQZGGXMOZIQWZNNTHBLZSSAFCBBERDVOMDIQKJKJNWVXZLDCWUNKOPEPQUUVZO");

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
    msg.setTimeStamp(0.679144586722);
    msg.setSource(16693U);
    msg.setSourceEntity(147U);
    msg.setDestination(63100U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.900843704558);
    msg.setSource(30256U);
    msg.setSourceEntity(130U);
    msg.setDestination(36487U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.881562903574);
    msg.setSource(49579U);
    msg.setSourceEntity(207U);
    msg.setDestination(25990U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.484476287664);
    msg.setSource(56291U);
    msg.setSourceEntity(254U);
    msg.setDestination(7201U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.4894534639;
    msg.lon = 0.357376861513;
    msg.z = 0.181155607922;
    msg.z_units = 38U;
    msg.radius = 0.47836714374;
    msg.duration = 60278U;
    msg.speed = 0.170092705823;
    msg.speed_units = 112U;
    msg.custom.assign("QZTEVKYVYOGMJWNTFKPZLMIGYGPCAJOVBEJQWRXMJTXHDPCRBSFBAOSYETOJVSAUKSTAHCWQUTBQWXMRYOKADCNHXC");

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
    msg.setTimeStamp(0.348652807396);
    msg.setSource(44804U);
    msg.setSourceEntity(85U);
    msg.setDestination(56356U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.852267787437;
    msg.lon = 0.650293604872;
    msg.z = 0.585513353316;
    msg.z_units = 23U;
    msg.radius = 0.320877927433;
    msg.duration = 26132U;
    msg.speed = 0.487707100277;
    msg.speed_units = 84U;
    msg.custom.assign("ZNGLWRZDMYPOPBYWPHQCKPFCKURMQIFNXNQSVMXZLXSKZXLCYIKZEKDJEAOIDTBTPAMJUB");

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
    msg.setTimeStamp(0.804312392059);
    msg.setSource(40433U);
    msg.setSourceEntity(191U);
    msg.setDestination(48387U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.881305336332;
    msg.lon = 0.181001462057;
    msg.z = 0.0503983712681;
    msg.z_units = 37U;
    msg.radius = 0.299082539984;
    msg.duration = 48875U;
    msg.speed = 0.846948340025;
    msg.speed_units = 14U;
    msg.custom.assign("XTFAGLOYXYTIXWEJSENODUYHI");

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
    msg.setTimeStamp(0.308744668515);
    msg.setSource(44486U);
    msg.setSourceEntity(246U);
    msg.setDestination(29465U);
    msg.setDestinationEntity(126U);
    msg.timeout = 50051U;
    msg.flags = 192U;
    msg.lat = 0.978466123881;
    msg.lon = 0.466012443678;
    msg.start_z = 0.664473667803;
    msg.start_z_units = 120U;
    msg.end_z = 0.176555902957;
    msg.end_z_units = 140U;
    msg.radius = 0.298929820684;
    msg.speed = 0.805384576816;
    msg.speed_units = 129U;
    msg.custom.assign("RYJOZWHKOFAPVXWEBQWMCYYDANOCCJRIEJXFSQOFDLHIM");

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
    msg.setTimeStamp(0.492066678979);
    msg.setSource(23974U);
    msg.setSourceEntity(149U);
    msg.setDestination(13039U);
    msg.setDestinationEntity(10U);
    msg.timeout = 26085U;
    msg.flags = 118U;
    msg.lat = 0.273918821248;
    msg.lon = 0.649647681362;
    msg.start_z = 0.952699081048;
    msg.start_z_units = 167U;
    msg.end_z = 0.895376226122;
    msg.end_z_units = 121U;
    msg.radius = 0.249989202646;
    msg.speed = 0.775776413091;
    msg.speed_units = 27U;
    msg.custom.assign("SRSCSZAWEBESIYKMKVXOTZXCXMOPDDPVB");

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
    msg.setTimeStamp(0.327712459062);
    msg.setSource(22546U);
    msg.setSourceEntity(125U);
    msg.setDestination(11163U);
    msg.setDestinationEntity(121U);
    msg.timeout = 40000U;
    msg.flags = 84U;
    msg.lat = 0.256538764352;
    msg.lon = 0.852549071473;
    msg.start_z = 0.375923308967;
    msg.start_z_units = 106U;
    msg.end_z = 0.259730600199;
    msg.end_z_units = 194U;
    msg.radius = 0.688189687187;
    msg.speed = 0.0893128899561;
    msg.speed_units = 112U;
    msg.custom.assign("OKXIRZEQOCECRSYRIMAIANJGFQYRFKNYTCIPFPUOBHGQEOCJVFPKBJQWVKEELMZZGLXOSUBWSZFMJGKNUKAYBHTDLX");

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
    msg.setTimeStamp(0.0586147418045);
    msg.setSource(18460U);
    msg.setSourceEntity(203U);
    msg.setDestination(30589U);
    msg.setDestinationEntity(117U);
    msg.timeout = 8703U;
    msg.lat = 0.837412778793;
    msg.lon = 0.543530908796;
    msg.z = 0.370634502542;
    msg.z_units = 145U;
    msg.speed = 0.246771914123;
    msg.speed_units = 69U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.176867053012;
    tmp_msg_0.y = 0.554688567814;
    tmp_msg_0.z = 0.68401130881;
    tmp_msg_0.t = 0.75532403162;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TAOBIDJXJGYNZEDFKONDLMTAACXZTAKOBZXPYOGCYVGZWFURIEUAPPIKMGTFGKGZFCVDPNOSRIGJEUWXMMSPBHBLIFDLCSZCBTVFHANQLDYMIVWHOYLIUQQQXADEZVCHEDNRRILYV");

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
    msg.setTimeStamp(0.405595294184);
    msg.setSource(28099U);
    msg.setSourceEntity(100U);
    msg.setDestination(50412U);
    msg.setDestinationEntity(100U);
    msg.timeout = 27689U;
    msg.lat = 0.82734294677;
    msg.lon = 0.998946590068;
    msg.z = 0.208901730246;
    msg.z_units = 216U;
    msg.speed = 0.424594630372;
    msg.speed_units = 78U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.489702417063;
    tmp_msg_0.y = 0.24798726503;
    tmp_msg_0.z = 0.2129708169;
    tmp_msg_0.t = 0.990193807449;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ULFPSLBRBKVKPEDOZCUKBMKGWTSLLBXIFATIQCYEGKCALGJNUGSQSQPBXORCAAXQMBCPEIMARVRCVTRGWFMTHHUNJHQJORWTYTJKWPPZUY");

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
    msg.setTimeStamp(0.335551739926);
    msg.setSource(26002U);
    msg.setSourceEntity(192U);
    msg.setDestination(50786U);
    msg.setDestinationEntity(96U);
    msg.timeout = 5648U;
    msg.lat = 0.603240042373;
    msg.lon = 0.442877676931;
    msg.z = 0.758625801122;
    msg.z_units = 185U;
    msg.speed = 0.368945238744;
    msg.speed_units = 167U;
    msg.custom.assign("FGSWQAMQPQGYHFSFTRYKJPRCYRQOZGPGODIQZFZRILOPFJGSEJUZJSAQKKBPUDGFHJYMOXUNVTVUNVDKEALJJQOUJOMQVDZSUAHGLVLHNDIXADVLNXCIWABAPABDKTZRQSMMMTFBFIWAEBTCNUSHTDNPIWLCKYRCKRXMKWCUENEPZPUKXXOSBMJRTVTTAKCVJBHOXLSDESCCEHXIMCELYBYHGYMHE");

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
    msg.setTimeStamp(0.880641105688);
    msg.setSource(28732U);
    msg.setSourceEntity(184U);
    msg.setDestination(52820U);
    msg.setDestinationEntity(70U);
    msg.x = 0.772404819487;
    msg.y = 0.545859694957;
    msg.z = 0.260124421372;
    msg.t = 0.839975209617;

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
    msg.setTimeStamp(0.427748221346);
    msg.setSource(14789U);
    msg.setSourceEntity(86U);
    msg.setDestination(57022U);
    msg.setDestinationEntity(133U);
    msg.x = 0.56541487113;
    msg.y = 0.993364687388;
    msg.z = 0.146141557466;
    msg.t = 0.132677921494;

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
    msg.setTimeStamp(0.0535670534129);
    msg.setSource(11179U);
    msg.setSourceEntity(240U);
    msg.setDestination(55109U);
    msg.setDestinationEntity(114U);
    msg.x = 0.827900683989;
    msg.y = 0.614177515336;
    msg.z = 0.465886916014;
    msg.t = 0.754473257334;

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
    msg.setTimeStamp(0.335027339991);
    msg.setSource(45599U);
    msg.setSourceEntity(16U);
    msg.setDestination(59232U);
    msg.setDestinationEntity(54U);
    msg.timeout = 39028U;
    msg.name.assign("CKTVDPARPUHMNNHRMVNFSJG");
    msg.custom.assign("VRBZIMQWNBGHQDQKWYWSFYUCYTDXELBTNQBZNEKIURUXXEFLMKCVDHMLQZIFZPOONONIWRGCUDNZLYJHHMQDRYQRSHOARKQEATKKVVQZFSSHGJIMRYELLAUAAKUFWCVEXUWUCSCOTFHIJZDACOLXYGEEB");

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
    msg.setTimeStamp(0.808699317342);
    msg.setSource(57500U);
    msg.setSourceEntity(242U);
    msg.setDestination(54170U);
    msg.setDestinationEntity(252U);
    msg.timeout = 40695U;
    msg.name.assign("DYMXBJTQKEPEAXAVSOINTHVQLKWHLDZHPMTSFGCUUYHXGKSTZTGGEAXRSZQNRHXQYMFFPWCFIRNYETKAFLZNQVBNMDSDSGLLDHAAJXPRMFJSBKDRDHIBBEAZCBHRSUMUYDOWMKCUSGVNOWZWWYMXEMKIEVNHXCJVQLKQIJQWDZPUZREVBGQITYVYPAJLYFOIWPTIPCOO");
    msg.custom.assign("GYEUXFTFYQUZMUDQVLSFTSLTCURZDQKHYNGWIMEVZNFIUBVJBLDODMJYQZNRNJIIRRWSAHCYXMXARZTETMKGIGEQUVNKPQHLJJKIFHVABOAAQICHAOHHQLGXWVDMZJIPJINKZBLCKUJMRYMJEWAPFHNSAOUELXYUTMYGVWDCOLTBRQYGFSXIDNDPBRHNPMRUVQTCZVDXOSKSOXBXSGYLPOKNWDC");

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
    msg.setTimeStamp(0.60439250935);
    msg.setSource(7072U);
    msg.setSourceEntity(82U);
    msg.setDestination(26938U);
    msg.setDestinationEntity(195U);
    msg.timeout = 40674U;
    msg.name.assign("ZIQFEWFXHWDGBRTESMUPQAEDZWHXZHLLUBXUYGEVYEMHBMGQPPAWIODSLRBXMVCAPRXOSMSFYQBMNXZNJJJLBUCKZKWGVTDGXSNOITFGQJUUOUSWKXGQKSAYCIKCGHNVNVAFRRJKHVTKLBOPTFLMGTKTFOSFJESOTIOKFCWJZXLIDENZRROQIADCUHOIMXQLJRTRBPIDCZPHDZMCPDYNUWYWHYVJAGL");
    msg.custom.assign("UWXHOEATUNBALBVKTORJUAPCSMXPTGTIXEQYSUPWTVFBHTQFJLZBVHL");

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
    msg.setTimeStamp(0.876151815005);
    msg.setSource(61188U);
    msg.setSourceEntity(95U);
    msg.setDestination(8769U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.409278006585;
    msg.lon = 0.047681314019;
    msg.z = 0.572753226514;
    msg.z_units = 80U;
    msg.speed = 0.707708460117;
    msg.speed_units = 170U;
    msg.start_time = 0.0859377582338;
    msg.custom.assign("IUMDGRXOIBJXQGIGZKDUQHDRVBJAWBFSURREVJXAOZCFCNPZWTBVQWGHQSTGERADEFUSDDXZPIALUJNVIVZSLBIZUEOWYATDFSWIVJHTLKUFBPZYOEYJNNCYNMYRDFEMZEQEJPLKIAPXTREVTRWJCKMNKGSJBOLKEUHXGCQSANFSGFHXSZBLMBPQBCMYRWVM");

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
    msg.setTimeStamp(0.805711084045);
    msg.setSource(47127U);
    msg.setSourceEntity(176U);
    msg.setDestination(2986U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.898378438948;
    msg.lon = 0.190320261917;
    msg.z = 0.29717278843;
    msg.z_units = 247U;
    msg.speed = 0.713525790126;
    msg.speed_units = 76U;
    msg.start_time = 0.709019140595;
    msg.custom.assign("ZCPECWOWBHUPLXAETBBBOXAHMHDLDSLNTZNKRDAPJMC");

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
    msg.setTimeStamp(0.383351913268);
    msg.setSource(63123U);
    msg.setSourceEntity(95U);
    msg.setDestination(37923U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.0291310370616;
    msg.lon = 0.869076734285;
    msg.z = 0.973816217389;
    msg.z_units = 6U;
    msg.speed = 0.543488571299;
    msg.speed_units = 185U;
    msg.start_time = 0.0256048115331;
    msg.custom.assign("MEFTHTIFUUGRLBDOFFCTCVPEDUWJCADHEGDWZHCCAMDVWICVUEKPTIQTUPVDFJZWKNMPYFGPRHPPSGVUWJOVKSSKYYRZXQEKXNHNYMNCBPSIGEQHUDMRRILVABWPZBNKLOYNALLCELWGSDZIOCPMOXURAZULTVILEFZZQYXSSJXBNCXAFJDJQNAIMJMKMABF");

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
    msg.setTimeStamp(0.187955300423);
    msg.setSource(32983U);
    msg.setSourceEntity(107U);
    msg.setDestination(14961U);
    msg.setDestinationEntity(248U);
    msg.vid = 58828U;
    msg.off_x = 0.521712377683;
    msg.off_y = 0.532943203177;
    msg.off_z = 0.736327303091;

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
    msg.setTimeStamp(0.698346819185);
    msg.setSource(22255U);
    msg.setSourceEntity(36U);
    msg.setDestination(38659U);
    msg.setDestinationEntity(226U);
    msg.vid = 60097U;
    msg.off_x = 0.201700539877;
    msg.off_y = 0.366328646523;
    msg.off_z = 0.54458490474;

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
    msg.setTimeStamp(0.225218737314);
    msg.setSource(48874U);
    msg.setSourceEntity(22U);
    msg.setDestination(54549U);
    msg.setDestinationEntity(97U);
    msg.vid = 44485U;
    msg.off_x = 0.0749663898104;
    msg.off_y = 0.947920848578;
    msg.off_z = 0.338033193911;

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
    msg.setTimeStamp(0.351564524886);
    msg.setSource(51321U);
    msg.setSourceEntity(6U);
    msg.setDestination(43895U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.0662072612173);
    msg.setSource(7509U);
    msg.setSourceEntity(182U);
    msg.setDestination(21718U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.860520058285);
    msg.setSource(49263U);
    msg.setSourceEntity(25U);
    msg.setDestination(33160U);
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
    msg.setTimeStamp(0.549340433306);
    msg.setSource(51680U);
    msg.setSourceEntity(7U);
    msg.setDestination(43913U);
    msg.setDestinationEntity(161U);
    msg.mid = 56348U;

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
    msg.setTimeStamp(0.321335385985);
    msg.setSource(29682U);
    msg.setSourceEntity(217U);
    msg.setDestination(31052U);
    msg.setDestinationEntity(164U);
    msg.mid = 49029U;

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
    msg.setTimeStamp(0.824810407265);
    msg.setSource(59129U);
    msg.setSourceEntity(220U);
    msg.setDestination(1426U);
    msg.setDestinationEntity(81U);
    msg.mid = 65074U;

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
    msg.setTimeStamp(0.726607077094);
    msg.setSource(53052U);
    msg.setSourceEntity(32U);
    msg.setDestination(3153U);
    msg.setDestinationEntity(241U);
    msg.state = 127U;
    msg.eta = 3094U;
    msg.info.assign("GCIKEMHMZPPOCHSQXABXKCUOFFLRHXRDLDPCOPVZEDZDDZOXNJWFRUZRESAOFQPGDBATIIXBYFKBHNCMUQYKDKZEZWTAQSKIVKLPGBMPVDNPOFLBSIJZWTQWIJLTHNAIN");

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
    msg.setTimeStamp(0.150183901068);
    msg.setSource(46681U);
    msg.setSourceEntity(29U);
    msg.setDestination(35836U);
    msg.setDestinationEntity(104U);
    msg.state = 162U;
    msg.eta = 29006U;
    msg.info.assign("IROKXAEZHGBTFGAFMCBIJYIOSLUVZIGCTGJHGFDCLZYRFEOPOKSDDCACKSFBAAUAOOITIPXZYQWABFZZMXNKXTZHOQDSVBWHMKSDTVTRXJMGVTELUMNGVUHEGLUODXEMMGIBQPHFDRNFTCCYVNTIPHLAVSEUSVXQRWMEWPWPYZNQQNWWUYKUDBPYADRTNXEMGC");

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
    msg.setTimeStamp(0.975686950844);
    msg.setSource(1858U);
    msg.setSourceEntity(191U);
    msg.setDestination(32880U);
    msg.setDestinationEntity(91U);
    msg.state = 254U;
    msg.eta = 26178U;
    msg.info.assign("GUSGUNKICJOCGJG");

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
    msg.setTimeStamp(0.50866203528);
    msg.setSource(5713U);
    msg.setSourceEntity(11U);
    msg.setDestination(34311U);
    msg.setDestinationEntity(81U);
    msg.system = 31485U;
    msg.duration = 30034U;
    msg.speed = 0.511333225061;
    msg.speed_units = 161U;
    msg.x = 0.222443146799;
    msg.y = 0.163994305735;
    msg.z = 0.642522498707;
    msg.z_units = 148U;

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
    msg.setTimeStamp(0.635948948278);
    msg.setSource(63782U);
    msg.setSourceEntity(213U);
    msg.setDestination(31361U);
    msg.setDestinationEntity(207U);
    msg.system = 7804U;
    msg.duration = 62712U;
    msg.speed = 0.878334610236;
    msg.speed_units = 220U;
    msg.x = 0.607322596686;
    msg.y = 0.690975632303;
    msg.z = 0.643522179852;
    msg.z_units = 99U;

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
    msg.setTimeStamp(0.850871670303);
    msg.setSource(16183U);
    msg.setSourceEntity(43U);
    msg.setDestination(26721U);
    msg.setDestinationEntity(190U);
    msg.system = 51343U;
    msg.duration = 26256U;
    msg.speed = 0.776223169469;
    msg.speed_units = 251U;
    msg.x = 0.761574959131;
    msg.y = 0.692751483204;
    msg.z = 0.0037354381625;
    msg.z_units = 106U;

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
    msg.setTimeStamp(0.600525883746);
    msg.setSource(58992U);
    msg.setSourceEntity(235U);
    msg.setDestination(5597U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.631293987405;
    msg.lon = 0.534130511463;
    msg.speed = 0.685194978813;
    msg.speed_units = 77U;
    msg.duration = 14911U;
    msg.sys_a = 34369U;
    msg.sys_b = 49016U;
    msg.move_threshold = 0.97679684442;

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
    msg.setTimeStamp(0.445984720444);
    msg.setSource(34078U);
    msg.setSourceEntity(188U);
    msg.setDestination(27356U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.265411490923;
    msg.lon = 0.896278808616;
    msg.speed = 0.237301834963;
    msg.speed_units = 78U;
    msg.duration = 19660U;
    msg.sys_a = 47301U;
    msg.sys_b = 887U;
    msg.move_threshold = 0.325717122854;

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
    msg.setTimeStamp(0.0545569063759);
    msg.setSource(8090U);
    msg.setSourceEntity(121U);
    msg.setDestination(60446U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.674718748493;
    msg.lon = 0.716745128619;
    msg.speed = 0.114457762723;
    msg.speed_units = 149U;
    msg.duration = 61085U;
    msg.sys_a = 63363U;
    msg.sys_b = 652U;
    msg.move_threshold = 0.180022603197;

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
    msg.setTimeStamp(0.673212937039);
    msg.setSource(22354U);
    msg.setSourceEntity(43U);
    msg.setDestination(6676U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.494273988131;
    msg.lon = 0.117552996501;
    msg.z = 0.853444952803;
    msg.z_units = 101U;
    msg.speed = 0.27703672884;
    msg.speed_units = 64U;
    msg.custom.assign("JKTBQCRJQQHAUBAMPJJKRUGKLBKRPOAZNIICRQYBHVMLBVSYDHYCOCKTNRMLCZVMUYSYUBESAQIWOZARIQVTNGRJFUOGPKLYPEXCHKSMHGPMEFQXTYVONKLTYCIYPAIEGEXSGHIHTTNDXFWZD");

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
    msg.setTimeStamp(0.132504814057);
    msg.setSource(31286U);
    msg.setSourceEntity(129U);
    msg.setDestination(57869U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.265950272495;
    msg.lon = 0.501159738138;
    msg.z = 0.639110956039;
    msg.z_units = 252U;
    msg.speed = 0.210776666374;
    msg.speed_units = 66U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.109641692842;
    tmp_msg_0.lon = 0.986381230428;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DJRYOWMZYFEOUYOAFLSXIHFGHHDSFQHNBGBAMEAYJKMGECFUZVDOJPGBFZUSACCZAVHFPWFRTMVDTLTOSEQUMLAHTKQUQEIGZVDGAJCSZMTFBKNKIYLRKJJVHADIXEWNUDWLWSWOJOOCIEPIVTQZCBKAPSBWEKKUSYNTPNRVHLCNUXCTDWEQKYNYVLWTLJXOGIXMGYK");

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
    msg.setTimeStamp(0.501582131104);
    msg.setSource(64507U);
    msg.setSourceEntity(32U);
    msg.setDestination(7221U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.928185308004;
    msg.lon = 0.762685366306;
    msg.z = 0.320328354478;
    msg.z_units = 233U;
    msg.speed = 0.339559008298;
    msg.speed_units = 230U;
    msg.custom.assign("AVUTDVESEQDWMTFWJODHOTKQRGWUVNIBIWCIEWOAZFLGFCCKVNCOVJRNTMJPBHYADB");

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
    msg.setTimeStamp(0.433291691166);
    msg.setSource(101U);
    msg.setSourceEntity(12U);
    msg.setDestination(13575U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.31632668433;
    msg.lon = 0.986849464471;

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
    msg.setTimeStamp(0.931751063808);
    msg.setSource(8273U);
    msg.setSourceEntity(125U);
    msg.setDestination(14516U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.782318390366;
    msg.lon = 0.260030505271;

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
    msg.setTimeStamp(0.339103781454);
    msg.setSource(29918U);
    msg.setSourceEntity(238U);
    msg.setDestination(6184U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.392734235657;
    msg.lon = 0.20946374396;

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
    msg.setTimeStamp(0.79784531651);
    msg.setSource(58034U);
    msg.setSourceEntity(67U);
    msg.setDestination(20277U);
    msg.setDestinationEntity(49U);
    msg.timeout = 10643U;
    msg.lat = 0.982910815742;
    msg.lon = 0.683601180051;
    msg.z = 0.687404345472;
    msg.z_units = 104U;
    msg.pitch = 0.483432260582;
    msg.amplitude = 0.334905062492;
    msg.duration = 12891U;
    msg.speed = 0.790585514393;
    msg.speed_units = 37U;
    msg.radius = 0.00355210753393;
    msg.direction = 3U;
    msg.custom.assign("KGQBQAZPRXOBITLNSVPRLEFRXYJJOOAZLCEVYXHKKEKMSBYZECPIAOYAQSVSOJHXTHKXYGFJMMMCRAZHCPFCEIMKGGLFJUNOLFQUADNDDDNBWRARZHMWEJUUNEUZRXVSUVWIBSNIYOPVQCXC");

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
    msg.setTimeStamp(0.0788408052529);
    msg.setSource(41881U);
    msg.setSourceEntity(154U);
    msg.setDestination(48443U);
    msg.setDestinationEntity(28U);
    msg.timeout = 40313U;
    msg.lat = 0.572522107517;
    msg.lon = 0.0194371911229;
    msg.z = 0.634780885319;
    msg.z_units = 169U;
    msg.pitch = 0.250329589725;
    msg.amplitude = 0.93715592195;
    msg.duration = 10834U;
    msg.speed = 0.36394250592;
    msg.speed_units = 8U;
    msg.radius = 0.427223878313;
    msg.direction = 184U;
    msg.custom.assign("MBYHINLGUQPDZIMJLQFENEIVWGBHBFZNFTOSXUNOSVOGVMLVWPIILXGKWUXYYUCKBQVSIWMSAXCOZCOXHRKFMLOWMZIUGFKWJFJJLYOPSDECJKAMQGEDPJBINEZAORJWOKRDVPTNECRCLDGQXAUYH");

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
    msg.setTimeStamp(0.937115743608);
    msg.setSource(35079U);
    msg.setSourceEntity(201U);
    msg.setDestination(19674U);
    msg.setDestinationEntity(57U);
    msg.timeout = 20076U;
    msg.lat = 0.626733832327;
    msg.lon = 0.680360590919;
    msg.z = 0.563234899678;
    msg.z_units = 101U;
    msg.pitch = 0.862933552435;
    msg.amplitude = 0.575061192121;
    msg.duration = 26716U;
    msg.speed = 0.3353321648;
    msg.speed_units = 168U;
    msg.radius = 0.215945523561;
    msg.direction = 246U;
    msg.custom.assign("MMCGDWYJZBLSOJVZXERGKNIGGRLIAPAWDYUROEAUYKZSDDFXFSFHAHRMYBCPHHBLBUJUOQWWOPCLVXWYJUPTVNYASVMMTKUFVHJQNMEXPCCMEJROLXSZIZFGSJMPSYIFTXDYDWLRDQJMFXWQUSPHMAVZITKIBQ");

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
    msg.setTimeStamp(0.731612889912);
    msg.setSource(3U);
    msg.setSourceEntity(218U);
    msg.setDestination(8213U);
    msg.setDestinationEntity(169U);
    msg.formation_name.assign("UFFWCJZXCYXTZZFPVIHPHLRJTSPTVOSNZUHORDGQBOKAQHQCNTPIUYYILRJXCQNESJGWFBQEVEMNFFGOWPUUM");
    msg.reference_frame = 181U;
    msg.custom.assign("ESIYKSZBRYANTOZVFRDTPIQXNESLPRFSEOJVXNJXGPDPWJYNOLTEVOCSRBKUMZCSCJYIQHAGROYYMGLZTVH");

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
    msg.setTimeStamp(0.0587270499801);
    msg.setSource(43492U);
    msg.setSourceEntity(214U);
    msg.setDestination(51864U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("BIYGIPDNSQAPWRPIFZUKSLLNQXKXBTHNNSJYRFJQAXYFLBSYEKYMXIFT");
    msg.reference_frame = 164U;
    msg.custom.assign("IVRSGXLGNSWXFDWOLEJPUHQHCQABMIRGJAKPFCCMTKQMJVXCKMKLAPQTOKMDTFBAEJABDRRWIVMWYNKUHBINVJEYYQTFHRIJRCDSVLZXAIEUDLXZNIKXRUPTRYFMCQGYMXDLVJBSGGWHQTZFEWSPQVRTEDPXIVTIAYFLHCPJW");

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
    msg.setTimeStamp(0.233393445131);
    msg.setSource(53862U);
    msg.setSourceEntity(120U);
    msg.setDestination(49642U);
    msg.setDestinationEntity(136U);
    msg.formation_name.assign("CRNFZKCSOJRFZESIGPFBBMBMLFXQHWYIWLJLMEHGSNQCQWWLYXGJPIMEZHVFYCCNLVYXKRCUVKFBTJPFOHTOIRTSCHEDMLBDZPP");
    msg.reference_frame = 130U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43958U;
    tmp_msg_0.off_x = 0.830412640618;
    tmp_msg_0.off_y = 0.296367763666;
    tmp_msg_0.off_z = 0.309213012144;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VWINLEDVOFAETAHVRSLUZYKKSTEIBCELDJFWNGTIWQNGXMASHXTGGSMRT");

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
    msg.setTimeStamp(0.643212180044);
    msg.setSource(47359U);
    msg.setSourceEntity(80U);
    msg.setDestination(40845U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("NDMDOKMGVPGUHENAUZCGWQHWJATHGUSIEVIURKDLGQOOFGQXYUDRSFIRFUBTBRGMBWLOBPODKZBZQRHLBNDTDQXJMRZBOUIFPEAKYNFJSIKRVLSJGQNCCLEAYIRZTXQBQJKKPXOSXSFYIJPCHTZXTEECRJIFHHYIKCGJCVLZBETHUWFHZWOTPOOACUSYQGMVJWNDDLZFPLYAVSUMXTFVWX");
    msg.formation_name.assign("CXQATXALSVJOOMEZIABYIYJKWFQLLMXWNPKCSZNMPQECFWRWHMCFMTGFLCJRLAUSJXKVIKQFPRANJPEVVRBJTXDXXNUKUZHLEGABDRZZRCJKBAPNBACUJUFEVEYNYLGQAQCHTWNIYVTHVPSGSGRFHTKHZPUU");
    msg.plan_id.assign("MPXCVFBBELEJNEZYKOLTTIOAIYSUHZFAHZSGIKSKIOTMTCNAJUWSTODKJMRBQTXZKHAFZLGGAIUURNEAWNYMRNQRDBBRCHTXMPGDASQFKPPDXZHUVQZAQNEXCYHVQWSLRHIYWHGLOLDLLMQYPXSVXNRAYZYBGFDEKJNBDUUPNGSCPYDMHWBHMVKWFQGPBFTPUMQUUDOBELJOVJ");
    msg.description.assign("RZEPFZRGUKKHPCJHLWTIMCVDZUYFQODBVANICHAQBKHNKEFFIIWJUUDNUOYHRQKUWAUQLYBYLCPIWEQTGIQXNDFCELNADFEZCSXLBCATRVPIAFHQOSZSBVAO");
    msg.leader_speed = 0.051741546806;
    msg.leader_bank_lim = 0.765924582372;
    msg.pos_sim_err_lim = 0.910936871187;
    msg.pos_sim_err_wrn = 0.306990297348;
    msg.pos_sim_err_timeout = 4623U;
    msg.converg_max = 0.583550707723;
    msg.converg_timeout = 43320U;
    msg.comms_timeout = 40953U;
    msg.turb_lim = 0.306672912757;
    msg.custom.assign("VTQPLWDISMVBKLOXATKQRIDZVXKYNMXLGUGPNCYCXMEBNUBMQQCPLARYHRQTGIZERQRPKVHWJCGZIIJDEQYTFATCVZRKGECJQBNPDFLWCSSSBSVKLWNYYLCSKOXETDIWIUCJGZKXZPJUPM");

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
    msg.setTimeStamp(0.0710155330728);
    msg.setSource(16763U);
    msg.setSourceEntity(68U);
    msg.setDestination(9911U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("BBCKVWNVRH");
    msg.formation_name.assign("DPJIYGNPQONYLKLGDGKWZZRTPNVZGFUTELBZIQGIMEOWXQNOLLFHDLQTLADSXEWRUFUUOTQAIESNFWMMMCLVSVAEYBGBZHJTRWHTAEQAVTPNVWJUFNHOHPBRXXKWKSIMSPHGCFCIFOYOXPAPRDXNJRADSQBVIWUKRCBIWDKHJGSBJQYBBDZMPECJYCFYYBSRAHXTIUXGZEHVTZ");
    msg.plan_id.assign("ZWGHLCQMJFAIZBPEVLBGSLDKAZDYANSWSOXTQWVYDTTMPKVCFAQLACIHKSKVOHSOKHNWZIICDMGFQUQNKRWIPEWXUBGNCMEZNFDJYGUSZNMLSVKNUHBYLOJMXQJOABTUBCTJFCVVQTMPVNBMXOBURIURLHPRRTDBWAFBXERPGDIFWTALJJXRXMQAJVEOLPURYREC");
    msg.description.assign("KFFUHGMNXPVXMBZGENSBYIAJURAFOCXKLJVWHXHJTVQAAEIZRXBZJMCYTCDCXIQSPKYWNRAWQNZEUMPTLCWSCYEICTXZRLOFDYVUHFXYIEVRARHGHFATRU");
    msg.leader_speed = 0.0545484562841;
    msg.leader_bank_lim = 0.121935627551;
    msg.pos_sim_err_lim = 0.333166104763;
    msg.pos_sim_err_wrn = 0.811279085897;
    msg.pos_sim_err_timeout = 63304U;
    msg.converg_max = 0.285622763522;
    msg.converg_timeout = 57563U;
    msg.comms_timeout = 405U;
    msg.turb_lim = 0.0687770628861;
    msg.custom.assign("ZYXWXYRTQVQWYEHXNGBJSVGEFQAFGRIOCFQWDUCZTQBFMQEPLCOEEVNNPVMGQHZONSLYVOWUOJPNWXHTTCFVNRPRXDEIOSLMHJSNZXHRTGOMDLJJVXMWIALYTSDGKNJKUEOHIYBUKFSKDRGKTDDLPJUJRYAIGLMWSCYCVKGKBBCZASCLASDNWGHVXACTMUQIHMWXU");

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
    msg.setTimeStamp(0.755543326973);
    msg.setSource(27970U);
    msg.setSourceEntity(227U);
    msg.setDestination(30330U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("PXWSGDVXZVAFTWGBUAACLLKASKNDL");
    msg.formation_name.assign("IXXRZUQHWPIILEVXCHQBDHTAQVYYSCABEOHXVPGOPORZKEJJAMKVBLSCXQCKSKZWPLDDCZLRIVUPKTUU");
    msg.plan_id.assign("RGFSRPGIJNDPPKVYRWPUFXCYBBLOPTMEDBUPTVZXLXMBRDUAKASSFALCETFHOKGEHNNMVIXIBDGUNSLXMJMEBULZPADCGPVUBTOCFMDNQUCITQHRWGYWIZJKNIGIZAYUERXTLIYSPQLEVZXJHKVRGWTUSPXULOHLRMOMWAFCABZZBKKRVTEWEJQNHSOXDQQFNRWTQBQSJZASZDHVXIYSMKETCADOOHOLYFCKDYYJKGOMCJF");
    msg.description.assign("YJFGAWPYDMBORNMHFIYAUQUTQAUSFZWQZGNFZWNXRPIELXJECHPIDNCIHKWGCQVURMBPYXWEKAYXQQHAKSKETIHOFRUYIPLVABRITBLOLPTTNXKNRCUOUUHIKRYACSQRGFNFJQKIQJJTXWNYCZGWNRMBYXMEWPDSABOEMGVVAGZEHLZCDUSXCZHTCLEDVJUDLMOHSEJEPVBJBQJSDSLVBFKDFIGJDLGXLBSVPMK");
    msg.leader_speed = 0.144638420748;
    msg.leader_bank_lim = 0.557904843607;
    msg.pos_sim_err_lim = 0.176708201244;
    msg.pos_sim_err_wrn = 0.380861532487;
    msg.pos_sim_err_timeout = 26099U;
    msg.converg_max = 0.891301055035;
    msg.converg_timeout = 53296U;
    msg.comms_timeout = 31384U;
    msg.turb_lim = 0.371836275894;
    msg.custom.assign("GIACTZHYYXPDLNCQRGUQMZSICZUVQPFVWCIRXZJRXGIQLVBIWFFMVHULZVNHHUELAKMXSJLBVFKRDLTWUASEOMPFHQJSOBHMXJS");

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
    msg.setTimeStamp(0.638073382738);
    msg.setSource(52108U);
    msg.setSourceEntity(31U);
    msg.setDestination(12706U);
    msg.setDestinationEntity(88U);
    msg.control_src = 55082U;
    msg.control_ent = 114U;
    msg.timeout = 0.938819780008;
    msg.loiter_radius = 0.465401743027;
    msg.altitude_interval = 0.33463307722;

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
    msg.setTimeStamp(0.302959313554);
    msg.setSource(38867U);
    msg.setSourceEntity(4U);
    msg.setDestination(2821U);
    msg.setDestinationEntity(145U);
    msg.control_src = 51098U;
    msg.control_ent = 213U;
    msg.timeout = 0.386553652308;
    msg.loiter_radius = 0.686961593254;
    msg.altitude_interval = 0.856913420539;

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
    msg.setTimeStamp(0.845323762666);
    msg.setSource(57917U);
    msg.setSourceEntity(150U);
    msg.setDestination(36915U);
    msg.setDestinationEntity(129U);
    msg.control_src = 6004U;
    msg.control_ent = 42U;
    msg.timeout = 0.93227229232;
    msg.loiter_radius = 0.449456276449;
    msg.altitude_interval = 0.848062362029;

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
    msg.setTimeStamp(0.994128145709);
    msg.setSource(23489U);
    msg.setSourceEntity(136U);
    msg.setDestination(12821U);
    msg.setDestinationEntity(65U);
    msg.flags = 5U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.918465509352;
    tmp_msg_0.speed_units = 77U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.928557860063;
    tmp_msg_1.z_units = 192U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.991808687809;
    msg.lon = 0.956202123912;
    msg.radius = 0.759658874983;

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
    msg.setTimeStamp(0.569040882706);
    msg.setSource(2828U);
    msg.setSourceEntity(134U);
    msg.setDestination(45175U);
    msg.setDestinationEntity(111U);
    msg.flags = 14U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0873042215809;
    tmp_msg_0.speed_units = 80U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.916024087459;
    tmp_msg_1.z_units = 169U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.801188114554;
    msg.lon = 0.734075849753;
    msg.radius = 0.504701694459;

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
    msg.setTimeStamp(0.753156862215);
    msg.setSource(58755U);
    msg.setSourceEntity(138U);
    msg.setDestination(843U);
    msg.setDestinationEntity(11U);
    msg.flags = 75U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.546068372895;
    tmp_msg_0.speed_units = 202U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.940612459966;
    tmp_msg_1.z_units = 70U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.955253371411;
    msg.lon = 0.639556305522;
    msg.radius = 0.418095686542;

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
    msg.setTimeStamp(0.00474291464212);
    msg.setSource(27783U);
    msg.setSourceEntity(196U);
    msg.setDestination(34905U);
    msg.setDestinationEntity(236U);
    msg.control_src = 40806U;
    msg.control_ent = 194U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 109U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.154282437795;
    tmp_tmp_msg_0_0.speed_units = 81U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.172726652512;
    tmp_tmp_msg_0_1.z_units = 34U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.783332038273;
    tmp_msg_0.lon = 0.0463999196053;
    tmp_msg_0.radius = 0.879115674179;
    msg.reference.set(tmp_msg_0);
    msg.state = 118U;
    msg.proximity = 212U;

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
    msg.setTimeStamp(0.377966955897);
    msg.setSource(49982U);
    msg.setSourceEntity(222U);
    msg.setDestination(34423U);
    msg.setDestinationEntity(217U);
    msg.control_src = 21385U;
    msg.control_ent = 132U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 51U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.130931868572;
    tmp_tmp_msg_0_0.speed_units = 159U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.00998345122127;
    tmp_tmp_msg_0_1.z_units = 202U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.122932471891;
    tmp_msg_0.lon = 0.6038991481;
    tmp_msg_0.radius = 0.465593733598;
    msg.reference.set(tmp_msg_0);
    msg.state = 179U;
    msg.proximity = 26U;

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
    msg.setTimeStamp(0.122458188015);
    msg.setSource(52541U);
    msg.setSourceEntity(126U);
    msg.setDestination(49288U);
    msg.setDestinationEntity(219U);
    msg.control_src = 19386U;
    msg.control_ent = 245U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 134U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.305464160227;
    tmp_tmp_msg_0_0.speed_units = 4U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.43689794403;
    tmp_tmp_msg_0_1.z_units = 210U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.557686435593;
    tmp_msg_0.lon = 0.910263278103;
    tmp_msg_0.radius = 0.686233213184;
    msg.reference.set(tmp_msg_0);
    msg.state = 27U;
    msg.proximity = 223U;

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
    msg.setTimeStamp(0.440661692562);
    msg.setSource(42558U);
    msg.setSourceEntity(15U);
    msg.setDestination(5866U);
    msg.setDestinationEntity(138U);
    msg.ax_cmd = 0.197759891599;
    msg.ay_cmd = 0.801863241017;
    msg.az_cmd = 0.436017006065;
    msg.ax_des = 0.387326873787;
    msg.ay_des = 0.304476600544;
    msg.az_des = 0.83633955635;
    msg.virt_err_x = 0.89603390692;
    msg.virt_err_y = 0.503095512881;
    msg.virt_err_z = 0.559490689791;
    msg.surf_fdbk_x = 0.390309686705;
    msg.surf_fdbk_y = 0.80151824554;
    msg.surf_fdbk_z = 0.666631443404;
    msg.surf_unkn_x = 0.198150064184;
    msg.surf_unkn_y = 0.18978725952;
    msg.surf_unkn_z = 0.181090817877;
    msg.ss_x = 0.549615112872;
    msg.ss_y = 0.433722160504;
    msg.ss_z = 0.556581783529;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QAEYPBOHQFQPGJJXMYZMSLJHIRJCGHLYTORGLYFFMMIVABQEKNUEPOBEVKYNVXNQFMDBREEOXQIYSCSGPXQTCQZPDCNIAKTWHJOAFGBGKFDHOEXIDTWOUOSVSEUMDHA");
    tmp_msg_0.dist = 0.942921126294;
    tmp_msg_0.err = 0.102474997743;
    tmp_msg_0.ctrl_imp = 0.60544483905;
    tmp_msg_0.rel_dir_x = 0.398368230883;
    tmp_msg_0.rel_dir_y = 0.849507902744;
    tmp_msg_0.rel_dir_z = 0.342779491839;
    tmp_msg_0.err_x = 0.476316079402;
    tmp_msg_0.err_y = 0.678517591604;
    tmp_msg_0.err_z = 0.23428756189;
    tmp_msg_0.rf_err_x = 0.36458611188;
    tmp_msg_0.rf_err_y = 0.634280097884;
    tmp_msg_0.rf_err_z = 0.0571677148612;
    tmp_msg_0.rf_err_vx = 0.440944738231;
    tmp_msg_0.rf_err_vy = 0.243619724724;
    tmp_msg_0.rf_err_vz = 0.577012466118;
    tmp_msg_0.ss_x = 0.0992861335725;
    tmp_msg_0.ss_y = 0.627923783251;
    tmp_msg_0.ss_z = 0.660576165827;
    tmp_msg_0.virt_err_x = 0.644497979928;
    tmp_msg_0.virt_err_y = 0.388942518684;
    tmp_msg_0.virt_err_z = 0.326649246872;
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
    msg.setTimeStamp(0.54021659588);
    msg.setSource(8380U);
    msg.setSourceEntity(172U);
    msg.setDestination(55664U);
    msg.setDestinationEntity(97U);
    msg.ax_cmd = 0.289498772641;
    msg.ay_cmd = 0.169439422579;
    msg.az_cmd = 0.262335822665;
    msg.ax_des = 0.453402793888;
    msg.ay_des = 0.291661941441;
    msg.az_des = 0.6555244966;
    msg.virt_err_x = 0.474451219797;
    msg.virt_err_y = 0.260139343432;
    msg.virt_err_z = 0.734267317279;
    msg.surf_fdbk_x = 0.793580880941;
    msg.surf_fdbk_y = 0.139649231152;
    msg.surf_fdbk_z = 0.513539602228;
    msg.surf_unkn_x = 0.557119631226;
    msg.surf_unkn_y = 0.390945109818;
    msg.surf_unkn_z = 0.382061862406;
    msg.ss_x = 0.212570255169;
    msg.ss_y = 0.282878006531;
    msg.ss_z = 0.608240284839;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WKHVLGDQTFGDOSDPNVZUFZIHAKZJRBONVZXHMGNYTJOXHBTGDEOAVFYFVABSQNJMYYHDEUWXBATKWHBKIJDYUWURLYIXBYPKLXLWJFQTJWRZVUAVUFNDZPIPYSLIZPNXPXFMUNCFOIHOFRWYHLUOEKLEQJJCCEBKRZXQMMSWQWQEWLKCCTALPSDCSGBNERCPLAIRTMPHNKYIGGMGBUFAESNOSIKXHGQTJRC");
    tmp_msg_0.dist = 0.79756724369;
    tmp_msg_0.err = 0.0630627440849;
    tmp_msg_0.ctrl_imp = 0.563719365238;
    tmp_msg_0.rel_dir_x = 0.829257103563;
    tmp_msg_0.rel_dir_y = 0.93368562838;
    tmp_msg_0.rel_dir_z = 0.91687605534;
    tmp_msg_0.err_x = 0.00608504984772;
    tmp_msg_0.err_y = 0.98609838627;
    tmp_msg_0.err_z = 0.665690137284;
    tmp_msg_0.rf_err_x = 0.19047969537;
    tmp_msg_0.rf_err_y = 0.907106025899;
    tmp_msg_0.rf_err_z = 0.139099024126;
    tmp_msg_0.rf_err_vx = 0.344945030457;
    tmp_msg_0.rf_err_vy = 0.622229696063;
    tmp_msg_0.rf_err_vz = 0.247346503906;
    tmp_msg_0.ss_x = 0.898683758177;
    tmp_msg_0.ss_y = 0.143926088783;
    tmp_msg_0.ss_z = 0.587317236926;
    tmp_msg_0.virt_err_x = 0.131965049132;
    tmp_msg_0.virt_err_y = 0.9865546515;
    tmp_msg_0.virt_err_z = 0.123301858684;
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
    msg.setTimeStamp(0.310689324874);
    msg.setSource(19957U);
    msg.setSourceEntity(239U);
    msg.setDestination(19172U);
    msg.setDestinationEntity(22U);
    msg.ax_cmd = 0.924500252079;
    msg.ay_cmd = 0.175090226414;
    msg.az_cmd = 0.957667227455;
    msg.ax_des = 0.00238649085845;
    msg.ay_des = 0.442050630244;
    msg.az_des = 0.760885566445;
    msg.virt_err_x = 0.725616939683;
    msg.virt_err_y = 0.6189086872;
    msg.virt_err_z = 0.861521471167;
    msg.surf_fdbk_x = 0.900794609686;
    msg.surf_fdbk_y = 0.823031803038;
    msg.surf_fdbk_z = 0.79627849467;
    msg.surf_unkn_x = 0.401302160775;
    msg.surf_unkn_y = 0.202526216058;
    msg.surf_unkn_z = 0.506277072864;
    msg.ss_x = 0.682115281903;
    msg.ss_y = 0.290292288155;
    msg.ss_z = 0.450247043701;

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
    msg.setTimeStamp(0.912475463728);
    msg.setSource(39818U);
    msg.setSourceEntity(235U);
    msg.setDestination(31384U);
    msg.setDestinationEntity(71U);
    msg.s_id.assign("QJMDYCIDZNERLFUDBOOWQUHPBDLASYNYVDKVQARWKXJVMUYGEKFLHMWUAFWSKGJYCITWWQCQTEBRVGAKCXISRPIRVEBXKXKWSPEHEMBUETZNDLWHTZBOCTGULURJLXGDLAJTOMOFIHRXPZCWAXBXKNHIGDZMFJYBISMYO");
    msg.dist = 0.362568340051;
    msg.err = 0.604158370986;
    msg.ctrl_imp = 0.121094739746;
    msg.rel_dir_x = 0.0870533433992;
    msg.rel_dir_y = 0.98248875106;
    msg.rel_dir_z = 0.595752894824;
    msg.err_x = 0.646611296074;
    msg.err_y = 0.18630995589;
    msg.err_z = 0.723581814793;
    msg.rf_err_x = 0.511856190392;
    msg.rf_err_y = 0.41890944578;
    msg.rf_err_z = 0.399013987449;
    msg.rf_err_vx = 0.402674430171;
    msg.rf_err_vy = 0.256015361657;
    msg.rf_err_vz = 0.0605519778725;
    msg.ss_x = 0.686165035375;
    msg.ss_y = 0.590741485316;
    msg.ss_z = 0.625028218536;
    msg.virt_err_x = 0.47031172594;
    msg.virt_err_y = 0.431716007717;
    msg.virt_err_z = 0.103866123428;

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
    msg.setTimeStamp(0.410011121219);
    msg.setSource(31852U);
    msg.setSourceEntity(209U);
    msg.setDestination(9069U);
    msg.setDestinationEntity(250U);
    msg.s_id.assign("JTENGJECZQNMYNHXUBBHNXCATHLIHGDMQXMACWTEOCHXTQIOLU");
    msg.dist = 0.325093922685;
    msg.err = 0.576497937851;
    msg.ctrl_imp = 0.469032533403;
    msg.rel_dir_x = 0.741937222358;
    msg.rel_dir_y = 0.0932361274437;
    msg.rel_dir_z = 0.245734337308;
    msg.err_x = 0.679935088807;
    msg.err_y = 0.446143761128;
    msg.err_z = 0.10593497753;
    msg.rf_err_x = 0.372140958759;
    msg.rf_err_y = 0.531888309346;
    msg.rf_err_z = 0.259880126288;
    msg.rf_err_vx = 0.191332801909;
    msg.rf_err_vy = 0.874281133241;
    msg.rf_err_vz = 0.606623264335;
    msg.ss_x = 0.856967492419;
    msg.ss_y = 0.995873647642;
    msg.ss_z = 0.982763064276;
    msg.virt_err_x = 0.721605440809;
    msg.virt_err_y = 0.534818850687;
    msg.virt_err_z = 0.458059582037;

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
    msg.setTimeStamp(0.14396649734);
    msg.setSource(50556U);
    msg.setSourceEntity(135U);
    msg.setDestination(43055U);
    msg.setDestinationEntity(54U);
    msg.s_id.assign("DAOEYGYMPRDGWYITALXPJUIEAYFKFCLRJIMVYCTPBAPNICZZKSRUXJRHIOOVTEWZXKDBABCCLUM");
    msg.dist = 0.998284245719;
    msg.err = 0.637762274017;
    msg.ctrl_imp = 0.918278032473;
    msg.rel_dir_x = 0.403013879636;
    msg.rel_dir_y = 0.988571997161;
    msg.rel_dir_z = 0.0610088578269;
    msg.err_x = 0.662044070982;
    msg.err_y = 0.728671615706;
    msg.err_z = 0.252034506379;
    msg.rf_err_x = 0.759394193649;
    msg.rf_err_y = 0.207146059885;
    msg.rf_err_z = 0.879509356239;
    msg.rf_err_vx = 0.902558607577;
    msg.rf_err_vy = 0.585124117655;
    msg.rf_err_vz = 0.00176128166795;
    msg.ss_x = 0.161901345296;
    msg.ss_y = 0.864517550412;
    msg.ss_z = 0.863149679451;
    msg.virt_err_x = 0.96459635666;
    msg.virt_err_y = 0.337548161608;
    msg.virt_err_z = 0.360085029802;

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
    msg.setTimeStamp(0.279194493099);
    msg.setSource(1583U);
    msg.setSourceEntity(98U);
    msg.setDestination(33685U);
    msg.setDestinationEntity(219U);
    msg.timeout = 46381U;
    msg.rpm = 0.311416291151;
    msg.direction = 116U;
    msg.custom.assign("TLBDYRAGDLKXZADHOOJUEVAFODIFO");

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
    msg.setTimeStamp(0.68389415665);
    msg.setSource(11930U);
    msg.setSourceEntity(225U);
    msg.setDestination(54822U);
    msg.setDestinationEntity(25U);
    msg.timeout = 5652U;
    msg.rpm = 0.179687309128;
    msg.direction = 80U;
    msg.custom.assign("ZCDMGJCIPFMJUWUPMTAMOLQMRXVAWLSWUZXDNWGZZEXWVNBBYTIHQGTUZDHMOSSENLIRZKUAQVYIB");

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
    msg.setTimeStamp(0.457199404966);
    msg.setSource(52037U);
    msg.setSourceEntity(116U);
    msg.setDestination(29282U);
    msg.setDestinationEntity(69U);
    msg.timeout = 63996U;
    msg.rpm = 0.909495668906;
    msg.direction = 193U;
    msg.custom.assign("YDSMCAUDCIEIADPNSYGRCTCJWIOHTJWAUOFZYHXVMVIBGAVFJYAUFAKWXABTNBXSWOFYMIRGSLOBZGJKTEIJCRMQMSLRHDBPVXWZGBKPTKEWOZQBORUTGKKZLOEA");

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
    msg.setTimeStamp(0.614035186129);
    msg.setSource(18858U);
    msg.setSourceEntity(161U);
    msg.setDestination(16467U);
    msg.setDestinationEntity(142U);
    msg.formation_name.assign("DQNYXURXMFKVOWMNJSVWKECEFOZGJMZBWCTJQLTRQTMNBITAWUIRWZZFMRWHVAZKAIZNEPBSUIGQOOXJESANXOGUKPQOOYHLLHIYFCYEEBXIQOICIVPSSTG");
    msg.type = 30U;
    msg.op = 238U;
    msg.group_name.assign("SWFREOEVTCUDUJRHENADMBFDFWTPGIQHGBGVPOZOKWDEXNSBOMBKDVLNKWZITRSZNWTQCMXYVFAXGBTIAPMBAJKCLOJQVELRIHFOUXQXZKJIYHGEZIQCWENFXJPCUHWBCMLDAVEJLKMXUHTZRFIJFANZDSGGANJVKPNKMBOUSPNVXIHYYAULRVDPFXORTQRY");
    msg.plan_id.assign("DWQIWHAGLGUTYAZRNSIDHQMNCUSRWXBMSZRVLPOJMNRQHZYDMSWAHOSXYKSTEPEICKCIGQGCXEFLTPIUNXZLGURFBEFYQCQLDXJPTEROZDIXJDROHYVQNFIKNBUVNBGBPSNIWBVKAVMEOKE");
    msg.description.assign("DCAVSTYRPIRVFYNYQRIUXNZEIBBVMQYLJEVFAQURQHAFKOFGGXTUVRJFZIWKMQACKCIHJPFVFDDHAFQLAPLCCDPIXUVSWQMHGCOWTZWKJIJBLXXDLXSPINLNPONATUSJSESVOHLPGLMIERRSIWSPMSZOBQJWRBPGOUJJFQMZKCUUAHGDZSZPECEYRTXBYYNGZEBBOHNDUCEQGOEFTBTKWKAGDXVHNNGBUMDTMOJWKMZEO");
    msg.reference_frame = 178U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36528U;
    tmp_msg_0.off_x = 0.41588550465;
    tmp_msg_0.off_y = 0.835662825155;
    tmp_msg_0.off_z = 0.777104717197;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.480104134171;
    msg.leader_speed_min = 0.651339947051;
    msg.leader_speed_max = 0.890766894531;
    msg.leader_alt_min = 0.781932655027;
    msg.leader_alt_max = 0.240399943901;
    msg.pos_sim_err_lim = 0.370792112455;
    msg.pos_sim_err_wrn = 0.211336744422;
    msg.pos_sim_err_timeout = 58625U;
    msg.converg_max = 0.965289141212;
    msg.converg_timeout = 51037U;
    msg.comms_timeout = 37370U;
    msg.turb_lim = 0.939770954611;
    msg.custom.assign("CDPASFKVJPHKQCCAUBKRPWHDZWZCWVPGIUJWSFRGKPTSVHEMCECHYITVSAULOZZPBDFGSTHFXBJHXDNISJDMOEKPJQRXKIGNBWVLURRFLURVIODNIANPLOEDUNDLWYNNHAWBKYSMACFSTFXZWUGZOQBWQCUPNZBIKNQNTJMGERYLJXKLYYMIEAX");

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
    msg.setTimeStamp(0.146042533704);
    msg.setSource(60014U);
    msg.setSourceEntity(218U);
    msg.setDestination(35872U);
    msg.setDestinationEntity(209U);
    msg.formation_name.assign("QCTBNDOSXZLEJKJLB");
    msg.type = 44U;
    msg.op = 45U;
    msg.group_name.assign("GPVQGQDJHRHFLGOZQWLQFBBCBLVIFGTWALGCYAIDYAUXWXTEMMTZWPQDWKIOOGRSRANRINHJEIVKNNTRFEUYDVCDKERFAZMMYKJXOGSKMXPBTHZLIVUHFDYFAPKXMOCNHAUJNBZLTHGWVIWKRPCUMZPHVFEAOQHYSRCDFOOYNOZSPBPDMBGQUERSTISZDMEZNJIYQDXPWTLLZKCPYJVETTBJYSCACKQUXBKSWS");
    msg.plan_id.assign("MJWYZRBYGMTLGUVBVDPCZDQQAMCKJKU");
    msg.description.assign("WCISVXHPKSJHHUIVUZKVLERRKGYCPUCGBTOADNFJNODMEOKCYAUSJHLOATKFZLBDJSAWRYACDQBUBQNJNEZZPTDDMHWSPRVNWZMWEMVYCTSCTFHFROXXSVLOREJFGMIFXYPKXCTKIHTPOLURHAPLQBNGSQAIOEJRQJBITXGDNMSKYEMPYIWXESIDLQKUAXMXWRZZJVUBZKQTVVCXIFQLYFYBNAFQWWVCYGZNNMJEGG");
    msg.reference_frame = 204U;
    msg.leader_bank_lim = 0.857513922487;
    msg.leader_speed_min = 0.889590340273;
    msg.leader_speed_max = 0.632576056657;
    msg.leader_alt_min = 0.931079736931;
    msg.leader_alt_max = 0.507277267523;
    msg.pos_sim_err_lim = 0.84044762701;
    msg.pos_sim_err_wrn = 0.913908947056;
    msg.pos_sim_err_timeout = 47940U;
    msg.converg_max = 0.729511059063;
    msg.converg_timeout = 24362U;
    msg.comms_timeout = 41689U;
    msg.turb_lim = 0.748597446873;
    msg.custom.assign("YAUGOVRSSJVCVEESEJYVMXJFWGLNNEHDRRUOUXUFNXOSXWDZNCAWTHLQYIFQZCKMFCPWUJYWLXTXTNYDCVXMRCRMOLMLESU");

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
    msg.setTimeStamp(0.435905734576);
    msg.setSource(12184U);
    msg.setSourceEntity(166U);
    msg.setDestination(29748U);
    msg.setDestinationEntity(15U);
    msg.formation_name.assign("YPPULFQPRRYHDNMSRDCFZPGMHKXIFUUKETAXDSCAPNJEGYKTQQEZDVKGFXDOOVNMFWATWB");
    msg.type = 96U;
    msg.op = 91U;
    msg.group_name.assign("SSVUZOQEIOYCCFESOVDDMSGJCHUYEZAIPUKVMQMETVNJAMQQNL");
    msg.plan_id.assign("GMSCLBWYYNAJJMREGZNDA");
    msg.description.assign("SSCEVWYGCMOTTSAOSELWTPUAHGKQPUJIOICDPCPQUHYKLHYLBIZBUXROWQYNYZITTZQVXJTAJSCIRWABGEJDFFXJAHNQZKTAMNUBGGAZCBVDCIYZWVSICUWNBOMOJDYDPWVFCGCRKYDUVEDHXSELLNOQIMKJTHAIVTRVROZFFFNPBPPEKHQOGR");
    msg.reference_frame = 109U;
    msg.leader_bank_lim = 0.397100287012;
    msg.leader_speed_min = 0.764098437501;
    msg.leader_speed_max = 0.690511140868;
    msg.leader_alt_min = 0.311436506466;
    msg.leader_alt_max = 0.192981290346;
    msg.pos_sim_err_lim = 0.0441452138038;
    msg.pos_sim_err_wrn = 0.42997356419;
    msg.pos_sim_err_timeout = 37715U;
    msg.converg_max = 0.00802706894214;
    msg.converg_timeout = 24163U;
    msg.comms_timeout = 37647U;
    msg.turb_lim = 0.397551276967;
    msg.custom.assign("TBHSKWTJQPOSGUJSHFRJJRMGDIFNITXMEZYJAGSTAXYJKWQERFVSBDRAMEDLFYHHYUNKAIIXCNIFVHCZPCDKWQCBRCXTFTNXGMCSTHPVEHXPLUSVMTKFSMWYGUNQSGLKZVRFCQTMKPWMKOZRPWHIKQ");

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
    msg.setTimeStamp(0.703120855243);
    msg.setSource(5711U);
    msg.setSourceEntity(253U);
    msg.setDestination(57827U);
    msg.setDestinationEntity(200U);
    msg.timeout = 36655U;
    msg.lat = 0.328492532707;
    msg.lon = 0.540155641475;
    msg.z = 0.888676891543;
    msg.z_units = 2U;
    msg.speed = 0.547505604081;
    msg.speed_units = 219U;
    msg.custom.assign("ORUQMNVIZGHAHWIFIKGKXOKLLGKOXFUPEFVYWNVWIMQZFCVFQMRYQLSXBRLTWEZURWJKPJJIMFQBSHOUPBJGDGAMGHWGVPNBNCDZETDPXLVHRQPJOHUNOOUCFYYSQNSNWRZNMAHDSXDQKTVPLYFIXOUFAVZBYCIETDJK");

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
    msg.setTimeStamp(0.394858564242);
    msg.setSource(49994U);
    msg.setSourceEntity(125U);
    msg.setDestination(26097U);
    msg.setDestinationEntity(217U);
    msg.timeout = 35288U;
    msg.lat = 0.0797882624604;
    msg.lon = 0.593988002621;
    msg.z = 0.551802562392;
    msg.z_units = 48U;
    msg.speed = 0.75335873067;
    msg.speed_units = 205U;
    msg.custom.assign("OMMJQCONQWFAUDKHUXTVNJFYOAMCTMJELTTGZFUSGSVUKWIJWLDZNBKNDHDJQOSMJEUQQAJYNVCLNLKCGFGRBGAEQTE");

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
    msg.setTimeStamp(0.340179666268);
    msg.setSource(31635U);
    msg.setSourceEntity(29U);
    msg.setDestination(26279U);
    msg.setDestinationEntity(106U);
    msg.timeout = 14832U;
    msg.lat = 0.178146780219;
    msg.lon = 0.817695365053;
    msg.z = 0.616295660383;
    msg.z_units = 83U;
    msg.speed = 0.317606227663;
    msg.speed_units = 26U;
    msg.custom.assign("JDQTVUTHTSBQRAZAUBNXNWLGLOKBVFNJGWRSJEPVKAUCVNMXGKPSFFGYKDAAMJPHWCASLXYRCBPNDUTMMFFIQFWRAOGBEJIZXUVVVFLDRCXVTTPDKILOHNGROF");

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
    msg.setTimeStamp(0.880148330311);
    msg.setSource(43695U);
    msg.setSourceEntity(84U);
    msg.setDestination(12915U);
    msg.setDestinationEntity(123U);
    msg.timeout = 62638U;
    msg.lat = 0.215522410614;
    msg.lon = 0.2538536882;
    msg.z = 0.282609573698;
    msg.z_units = 208U;
    msg.speed = 0.390547072427;
    msg.speed_units = 121U;
    msg.custom.assign("WJDVFYKTASOZMCIWPCVUFLYIFPOOLINQTSZXNWAVMBNUUIZTTKPCCQJYACNLSBZXQBZXOTTVUWBNSTLFDNRLDNZXKOWDRSSFREHAQEYGDDBOBOPUEJHEGLWYWPGNHSAPAZHTYFTMOIYGMUKJHDWULFSGEDCRQQNYAXBMHMMRAZRUIFXRHDQNKCTAXXQCKGKCHIHFIVJGUMIZVYUXIOGKPWWSFOVVLREGXPJESMLEBRPEJHQKVJ");

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
    msg.setTimeStamp(0.145662732271);
    msg.setSource(40028U);
    msg.setSourceEntity(248U);
    msg.setDestination(9929U);
    msg.setDestinationEntity(250U);
    msg.timeout = 28670U;
    msg.lat = 0.136516197935;
    msg.lon = 0.0146675766817;
    msg.z = 0.517511504699;
    msg.z_units = 243U;
    msg.speed = 0.999127699461;
    msg.speed_units = 57U;
    msg.custom.assign("XDGEFBOXAEZGVDUSXZSDBELMUGJFYCMBCLANNLLPJLCPWBGNGIXHHZSPIFBPXERYGTNKAZFIUBFONXMUXIWJNNJEGUHZJMAUQSORYYRBWRTMROLSWENCTZQOVCRYWLQAMMWVLTVSKAQNKMQUTDWKAVVAONJPHJRTKZWIASEHCMEQSJZXLFVHTPRPHIRZKZUOGDFIIOJKXCDPHSTKOLCEEQVPTPUDBYCGUYIXIBAWQFDHYTQSGBKHCQF");

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
    msg.setTimeStamp(0.116105286399);
    msg.setSource(9639U);
    msg.setSourceEntity(33U);
    msg.setDestination(24753U);
    msg.setDestinationEntity(172U);
    msg.timeout = 30014U;
    msg.lat = 0.621249557998;
    msg.lon = 0.924490199011;
    msg.z = 0.842628327711;
    msg.z_units = 223U;
    msg.speed = 0.00139483272933;
    msg.speed_units = 31U;
    msg.custom.assign("EYHMVERVHLVGDKRKZFRCNNQVODLJZPQMKEJBABTWIFHIWOLBTXWISROJQAONQYUCIPMYYOREBSDHJAWKCKSBGVLQLGXFVVRLAUGVLZMPSGMDTZPRCHBEAYXJOJNVQSSBGNULILIAFOCZBOXSHXIIE");

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
    msg.setTimeStamp(0.0782787478418);
    msg.setSource(12995U);
    msg.setSourceEntity(252U);
    msg.setDestination(10070U);
    msg.setDestinationEntity(148U);
    msg.arrival_time = 0.776474916803;
    msg.lat = 0.750736032427;
    msg.lon = 0.961728490878;
    msg.z = 0.725801013601;
    msg.z_units = 218U;
    msg.travel_z = 0.405774259691;
    msg.travel_z_units = 189U;
    msg.delayed = 209U;

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
    msg.setTimeStamp(0.283985745685);
    msg.setSource(16664U);
    msg.setSourceEntity(205U);
    msg.setDestination(47315U);
    msg.setDestinationEntity(42U);
    msg.arrival_time = 0.105854343225;
    msg.lat = 0.601581131589;
    msg.lon = 0.911626751951;
    msg.z = 0.411461072186;
    msg.z_units = 126U;
    msg.travel_z = 0.199111229148;
    msg.travel_z_units = 162U;
    msg.delayed = 139U;

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
    msg.setTimeStamp(0.712485824619);
    msg.setSource(12454U);
    msg.setSourceEntity(180U);
    msg.setDestination(30834U);
    msg.setDestinationEntity(172U);
    msg.arrival_time = 0.610683211829;
    msg.lat = 0.902980325573;
    msg.lon = 0.535202041555;
    msg.z = 0.252559821477;
    msg.z_units = 50U;
    msg.travel_z = 0.14699820227;
    msg.travel_z_units = 56U;
    msg.delayed = 205U;

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
    msg.setTimeStamp(0.295009127291);
    msg.setSource(13796U);
    msg.setSourceEntity(215U);
    msg.setDestination(9357U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.399669492241;
    msg.lon = 0.920091395849;
    msg.z = 0.43294793215;
    msg.z_units = 143U;
    msg.speed = 0.977255032409;
    msg.speed_units = 59U;
    msg.bearing = 0.940896151267;
    msg.cross_angle = 0.428668223882;
    msg.width = 0.461628637601;
    msg.length = 0.838344138093;
    msg.coff = 229U;
    msg.angaperture = 0.720878078858;
    msg.range = 17793U;
    msg.overlap = 131U;
    msg.flags = 139U;
    msg.custom.assign("MUDPQOGRFFGGIPBZYVXNGQUWUKHQVCFJUOPVHCLJLQOLEIXWBAKRSFAFDZHYRWAIQNGTSUJOPYXONLELATVXXMQZPHJQKHFVDDVR");

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
    msg.setTimeStamp(0.728371856283);
    msg.setSource(29522U);
    msg.setSourceEntity(233U);
    msg.setDestination(57864U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.534322098563;
    msg.lon = 0.943607408902;
    msg.z = 0.815382416744;
    msg.z_units = 212U;
    msg.speed = 0.782519065452;
    msg.speed_units = 33U;
    msg.bearing = 0.422227608378;
    msg.cross_angle = 0.484617934276;
    msg.width = 0.290247017966;
    msg.length = 0.576349433647;
    msg.coff = 245U;
    msg.angaperture = 0.997850073711;
    msg.range = 20994U;
    msg.overlap = 107U;
    msg.flags = 248U;
    msg.custom.assign("HHOQPVYBVARGILRKRBBXIXXFMUBUEERLDACKLJSWXCJTKNXACXZMMTGYMHZTHKJYKYGNFHSNCRQILYPUVIPVWFMWRVDMBJODEGNCPIXRSNOQTZSIFTQJQDMYVYJIEAIOWUQZSUCBCBGHWCJLXPQDFFJ");

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
    msg.setTimeStamp(0.971452356707);
    msg.setSource(961U);
    msg.setSourceEntity(29U);
    msg.setDestination(56729U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.608373440246;
    msg.lon = 0.0278187683389;
    msg.z = 0.273368497203;
    msg.z_units = 186U;
    msg.speed = 0.824936422983;
    msg.speed_units = 251U;
    msg.bearing = 0.253661167407;
    msg.cross_angle = 0.933851720456;
    msg.width = 0.128319036899;
    msg.length = 0.270873474614;
    msg.coff = 13U;
    msg.angaperture = 0.360735940112;
    msg.range = 15089U;
    msg.overlap = 47U;
    msg.flags = 125U;
    msg.custom.assign("UUTPTIYHPTZQVDXQZMXVDVYNOGYTFEOHPIWNKBVWJGERKZQRUFKGEODBGQZCWNFSAICBOKUMDPGYMBWFPFZFFLQANTUISEQPPGQVMUOLDKWCCYJLBWTHIVDHGUDVJBNBXRGNEKDUHQWHHIVVJSZZRCOEJSSVLNBYEYWPZRXEHAAMBRXZMTIRKSXABMTIYSGREJLKUQTPKLODPTNCIMNXLRRHCCUDYQXAJWOOYLCZSA");

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
    msg.setTimeStamp(0.415080842601);
    msg.setSource(3717U);
    msg.setSourceEntity(9U);
    msg.setDestination(11568U);
    msg.setDestinationEntity(1U);
    msg.timeout = 46022U;
    msg.lat = 0.0898617168502;
    msg.lon = 0.366230729379;
    msg.z = 0.953944476587;
    msg.z_units = 117U;
    msg.speed = 0.86335061853;
    msg.speed_units = 230U;
    msg.syringe0 = 83U;
    msg.syringe1 = 154U;
    msg.syringe2 = 55U;
    msg.custom.assign("CVDYQYWGPVXASGPCUOBWUZEGPPMYHSPNCWENJFGMFGTGNCSTRFKDQSQFXJQGCIZMMRTPFALMN");

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
    msg.setTimeStamp(0.165388741326);
    msg.setSource(56723U);
    msg.setSourceEntity(253U);
    msg.setDestination(7279U);
    msg.setDestinationEntity(59U);
    msg.timeout = 16569U;
    msg.lat = 0.175086205792;
    msg.lon = 0.649956745245;
    msg.z = 0.969427668502;
    msg.z_units = 189U;
    msg.speed = 0.436942629188;
    msg.speed_units = 59U;
    msg.syringe0 = 139U;
    msg.syringe1 = 52U;
    msg.syringe2 = 77U;
    msg.custom.assign("CVSOWCLJTKVZMFZAFDIAVZNNQLJEUSTEXAZBBOVXPNSMROSDQGYWAXZTTCFYYGRYYEEGHGDQNGHXKYDBFTKCUJCJOIZDKUBIOTLSWIAJUNYAWPRPTLGDRNPEHZJZVUYUQPTIMRDLRQL");

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
    msg.setTimeStamp(0.896708969054);
    msg.setSource(36325U);
    msg.setSourceEntity(14U);
    msg.setDestination(5094U);
    msg.setDestinationEntity(10U);
    msg.timeout = 23853U;
    msg.lat = 0.524841531651;
    msg.lon = 0.706151176276;
    msg.z = 0.371945070836;
    msg.z_units = 112U;
    msg.speed = 0.14084096899;
    msg.speed_units = 228U;
    msg.syringe0 = 14U;
    msg.syringe1 = 24U;
    msg.syringe2 = 110U;
    msg.custom.assign("OHMSEOAHNSOLYAWSHBDKQBDUZKTBCDIVHAEIUCSAYFXLORWZODWLKCCXWHVYGXTQIXNEPBHZDITRTIS");

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
    msg.setTimeStamp(0.55997870067);
    msg.setSource(50113U);
    msg.setSourceEntity(140U);
    msg.setDestination(31475U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.608093544989);
    msg.setSource(19450U);
    msg.setSourceEntity(69U);
    msg.setDestination(10648U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.173672958185);
    msg.setSource(4097U);
    msg.setSourceEntity(243U);
    msg.setDestination(19207U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.90656985047);
    msg.setSource(56181U);
    msg.setSourceEntity(150U);
    msg.setDestination(41489U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.788620231072;
    msg.lon = 0.79773652367;
    msg.z = 0.928854864769;
    msg.z_units = 98U;
    msg.speed = 0.484438927926;
    msg.speed_units = 184U;
    msg.takeoff_pitch = 0.299315132361;
    msg.custom.assign("IINMMHHSXKHLXEYSXKCOZMHZKVMDOOGPGAXSGPFRVALHZLOFPTJIIKHHUPYVSVYSMAIUNLDRWYOSDHMBWEIJPBDBWWHYGQUZAAYQVIMQKEGLTCRNWLFGNQETSQXUBUGODARYUCXGENSWWNJABWLYCFFDCECXMIBTETZWPXNTJGZPHQNFSFGZVQJZFYCARLKJAVCPWJNUOURTBKMQKJDDQRRXXBPVLTJUZEQFVBKYPZRV");

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
    msg.setTimeStamp(0.190073317267);
    msg.setSource(38540U);
    msg.setSourceEntity(253U);
    msg.setDestination(46869U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.585832495867;
    msg.lon = 0.667549600231;
    msg.z = 0.0521096792407;
    msg.z_units = 68U;
    msg.speed = 0.0154584752482;
    msg.speed_units = 55U;
    msg.takeoff_pitch = 0.55896920169;
    msg.custom.assign("KZRMHHPPEXOGQYUQOHJWGRHLVNMBMFKNPVIZEAMUIBDBTXVPJECLIZYOYEQWCMGJHZAWRDBHAUNILKIVMEHXCYUCAWHOFZFAISUPZKKWPOETECLNRBQBPYBSDVXTWEEJTTGRNUBMSNYUFJAIGDRXVNDSCRUHCKYYUMAYOFLKUYSJEXTFZGFLQOKMBTQSKLSIWRSZJOQQVNAVMNVIRWJOZQLPQBHX");

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
    msg.setTimeStamp(0.662189174467);
    msg.setSource(18036U);
    msg.setSourceEntity(90U);
    msg.setDestination(55778U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.423105451533;
    msg.lon = 0.121201529732;
    msg.z = 0.595008470007;
    msg.z_units = 208U;
    msg.speed = 0.500864646615;
    msg.speed_units = 156U;
    msg.takeoff_pitch = 0.564996850417;
    msg.custom.assign("VPUCDLQPWGMZNTLCTYVDHQABEMKZVUKNDCMPLRQFLUASOWRIWQNJDJECJFUHRHXFDROTZFTYBPEEVIJVDBQKEMRFGGTBWGUTOMIZPVPJIAYDZLAGVQJENIXICUQRBLHQXUX");

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
    msg.setTimeStamp(0.494460847463);
    msg.setSource(41588U);
    msg.setSourceEntity(116U);
    msg.setDestination(4439U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.309719669913;
    msg.lon = 0.117740140545;
    msg.z = 0.796287294773;
    msg.z_units = 50U;
    msg.speed = 0.289433803989;
    msg.speed_units = 119U;
    msg.abort_z = 0.21103406684;
    msg.bearing = 0.178876161539;
    msg.glide_slope = 113U;
    msg.glide_slope_alt = 0.437759458169;
    msg.custom.assign("XUYAHOZZQYTMHMGHVIHJWZJHRIVIIGTAJWAMPCSURDMGCOYATMCYOWBSULAUXPYIFAVZBCIFHFEQSLYNVJWDLGFQZOKVQGROEDVRGAFSNDCUYXDKKTOLETBJVDBFODCTYKQJFMTKZKXSQJUSETPBXOEFRLTUBRGNURKJHDBAMWVINIQEHRZFMPCDZPHQBBWKNSJLRCLPFIGYMPNVLEEZNGWDGZXTIMXCPWWKNNSAXEPCKQWUBOYUNJLXPAE");

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
    msg.setTimeStamp(0.171602801993);
    msg.setSource(12771U);
    msg.setSourceEntity(97U);
    msg.setDestination(28314U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.920228732213;
    msg.lon = 0.31557378307;
    msg.z = 0.159307306249;
    msg.z_units = 210U;
    msg.speed = 0.515096607721;
    msg.speed_units = 233U;
    msg.abort_z = 0.0985127525392;
    msg.bearing = 0.613184437295;
    msg.glide_slope = 20U;
    msg.glide_slope_alt = 0.896113186972;
    msg.custom.assign("VYWKPQCUSPINEIIBGALVLUVQPXDXHKNBPKKBGNVUXCEKFXM");

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
    msg.setTimeStamp(0.75372050061);
    msg.setSource(29252U);
    msg.setSourceEntity(185U);
    msg.setDestination(40131U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.320142951428;
    msg.lon = 0.399717907197;
    msg.z = 0.324523195115;
    msg.z_units = 140U;
    msg.speed = 0.757705079241;
    msg.speed_units = 17U;
    msg.abort_z = 0.97368343263;
    msg.bearing = 0.106347629836;
    msg.glide_slope = 117U;
    msg.glide_slope_alt = 0.67668191733;
    msg.custom.assign("ZCVHIKSDVLSMTWFLHRYXCSDSDZALPAOOEUVBQRZAIIQAUOTSTPGOVEKLWQ");

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
    msg.setTimeStamp(0.514677618096);
    msg.setSource(48288U);
    msg.setSourceEntity(138U);
    msg.setDestination(51773U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.956227636086;
    msg.lon = 0.114631812151;
    msg.speed = 0.292223492979;
    msg.speed_units = 122U;
    msg.limits = 44U;
    msg.max_depth = 0.339356488593;
    msg.min_alt = 0.524753431448;
    msg.time_limit = 0.131854903765;
    msg.controller.assign("TBNACYKARIJZZHUUHALARKMTKZPIJIFQLFBFWVJZOMNKDTCHCPONWSELSMYCMKVMVHDOOQNTMNLJDUYIFFRJVGJDVASWXKCUBJBYZSYWTZNUZCVRXLS");
    msg.custom.assign("QKQWPBQPUTAMCNBDENSUOEWXWZWQPONPSCSGB");

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
    msg.setTimeStamp(0.557066419698);
    msg.setSource(33380U);
    msg.setSourceEntity(94U);
    msg.setDestination(578U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.771092341159;
    msg.lon = 0.209583906593;
    msg.speed = 0.138404620655;
    msg.speed_units = 253U;
    msg.limits = 46U;
    msg.max_depth = 0.560991256443;
    msg.min_alt = 0.180563172618;
    msg.time_limit = 0.872325395668;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.691380898651;
    tmp_msg_0.lon = 0.468490375386;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("XUXWRPIQRHLJJPMRHHLBCKEOIVOVJPAWKKIQZTDBFESAGVFSMEJHQRMJGACXKFRYVNONYGNTIYBFYUAZPUIWQWRUCINAMPMBMTWQODXXPZSYGBLSMVYZAODIS");
    msg.custom.assign("QKPYBZJBJVANAENSFZXKUREPJZNOBMBHCCOQEPODBQDKCHGLPEMNOUNXAPHRBCCIXMAXGTTMABWFQYLPGVAZQLTFANFWEGLBMZFCRBJNTHYWOYFDQMYHUILXGLIYZUQSRWJKVTKVROXVIKJJKILYAVOZISIUQWUETVYGGHFVRSECWLTXYIDUPPRMXNRJJEZDDWKSTAGXCWFQRVEDSSKYNCUWAWEFSIMODUDDCUZVOHSLHTBOZNJMXGKIQPPHL");

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
    msg.setTimeStamp(0.69035541088);
    msg.setSource(11292U);
    msg.setSourceEntity(210U);
    msg.setDestination(41697U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.320836306521;
    msg.lon = 0.19075578401;
    msg.speed = 0.397547500323;
    msg.speed_units = 236U;
    msg.limits = 231U;
    msg.max_depth = 0.00920752947817;
    msg.min_alt = 0.550845005661;
    msg.time_limit = 0.911932216748;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.676652952721;
    tmp_msg_0.lon = 0.234890182738;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KLWCUCZWVDZFAQDOVDLCGWQTFZWHOYONIRPELCEOSURGEBDQDFZSERFSPYRJBRGSTLDNAGFIAJTFYMILUNXFLGDJGOXABEZGKLHPSWLBJBKHHSAIUFHHNEMOLPUTGUMYYMMKXYEQHXICBBGVWQYYUWEPAJNP");
    msg.custom.assign("LGNHEYNWLSBAGWEMDLZSXFUOBVXQJQRCKGRCFNWYVFIDOTBSHRRBLKSNQYKREKGPURTTDUNEZAEIETEGTSMIOUOKAOMJMHHLDICKLLDPNSNDRZFH");

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
    msg.setTimeStamp(0.215454245753);
    msg.setSource(53678U);
    msg.setSourceEntity(123U);
    msg.setDestination(50609U);
    msg.setDestinationEntity(138U);
    msg.target.assign("BHVBDYXLFMRURGZIXIHCYCJTKHWAHZFOJGTEZHISDVTGYSKZMDPIIJZAJLOOWNMLHBYLKPEEMORSUAPDUURMGWQIIZQJZBYWMCSAPBDLN");
    msg.max_speed = 0.232417141475;
    msg.speed_units = 191U;
    msg.lat = 0.849805635957;
    msg.lon = 0.583263617988;
    msg.z = 0.152815799413;
    msg.z_units = 208U;
    msg.custom.assign("EZRXTRFDBEIAHXGJMYTISSBLZYITWSIAKCCAUHLAURGQNANVEALBMWA");

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
    msg.setTimeStamp(0.957236906317);
    msg.setSource(34604U);
    msg.setSourceEntity(242U);
    msg.setDestination(16694U);
    msg.setDestinationEntity(14U);
    msg.target.assign("XKCPYBUBYEPHKQSWOSAUMKBSSZDANIKRNRZWIBUWNQLIKNUKVEKFUWGBWSPAQNNLDQCXZEXNEYFROFJRCRGWFYXHCRZLEBMZOFEGXHMOHBYYWSJDEWRTLFPAESDNICYPJUQEWJOFVOFIASMPVVRQVILKDGXLZQSGYMHGTLTAVCFBDRHIPBIUNMTJJZATVMCDYOVXRMQJLYAAJQLDTXNXJCLPBMGHGZOZKIPDCHH");
    msg.max_speed = 0.635573475104;
    msg.speed_units = 220U;
    msg.lat = 0.219835360564;
    msg.lon = 0.488418639754;
    msg.z = 0.756459327282;
    msg.z_units = 249U;
    msg.custom.assign("WEBNKHPPOEAGNADUXMKFBIJMIOHWXGQOIZWKOBBRLVZTCGBNMQPCUCYMTFILFUJGQIRUROKQSSAFSHHUYUFWDHVYDNXJRGIANUYMPAEOPLDNPMAWSPEZMXLQVDORVQJQLHSTXGSMVCLNDSFCKVYVJPYLAZTJBONEPUZHLMXDDRLVSWBTJWSCCHJZBZYKQDAENKYCXSBXUZEEXJ");

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
    msg.setTimeStamp(0.982924984447);
    msg.setSource(13566U);
    msg.setSourceEntity(88U);
    msg.setDestination(48174U);
    msg.setDestinationEntity(35U);
    msg.target.assign("AKEXWGMQSIMCSWLMAALVNPUZKOPVYGPTBPZNJKOVEQJNVIXRDZVWCUUECJDVYQQJPWTRPFMWRXIINTLCYJHAIYKYTRFOTRYCGK");
    msg.max_speed = 0.313651066033;
    msg.speed_units = 20U;
    msg.lat = 0.743184138982;
    msg.lon = 0.377746042257;
    msg.z = 0.96035006214;
    msg.z_units = 69U;
    msg.custom.assign("ZQBNPXQQPJYIVFGNMDHSQHKUSRZGCTBUPCISGOZVFYSUINKDQTDGSBJCHUFAHWUOTKYVKOJARIWGTEFMWBCZDPDANASCYIBWETWNKLQEOTMLWBSAJITUMVAYGWHXOJQLMZELXJRVUFKNYORHFCAYIYUXAXDFBSJMRHWIWPAILHJNKCFOXRGEKZEDZWXCMIVJPDXTYHOGEPMVUKTRGLQLQLKUPRFGYV");

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
    msg.setTimeStamp(0.721572294515);
    msg.setSource(38476U);
    msg.setSourceEntity(164U);
    msg.setDestination(57733U);
    msg.setDestinationEntity(136U);
    msg.timeout = 53814U;
    msg.lat = 0.972478354712;
    msg.lon = 0.227785196621;
    msg.speed = 0.320137436582;
    msg.speed_units = 190U;
    msg.custom.assign("PQSLAYRJDHZBILURZGQHYLPZKKBOGGNYCZAVSUPGPVLNRYPJOHGVLDPUMNHIXYNKMRTYMUQVHSDCDIKJQOULDBVZWGCECHFLWBIEFRIPXFQWIRRGCETMCHMUXOLZVNPVWHXFVCBZQ");

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
    msg.setTimeStamp(0.474262504352);
    msg.setSource(871U);
    msg.setSourceEntity(79U);
    msg.setDestination(54530U);
    msg.setDestinationEntity(101U);
    msg.timeout = 7811U;
    msg.lat = 0.993694210669;
    msg.lon = 0.497787984743;
    msg.speed = 0.483685584591;
    msg.speed_units = 241U;
    msg.custom.assign("YOCDFXVMTWXXSDUCGFQVPUIRTEWOOHEQOAJUMZYXLXNYYDWDWKJPJYRYVGZUPPQYZVVQQHJEBFNUMONBPWKSNFCIDLETKYX");

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
    msg.setTimeStamp(0.0697341673458);
    msg.setSource(53723U);
    msg.setSourceEntity(27U);
    msg.setDestination(18944U);
    msg.setDestinationEntity(137U);
    msg.timeout = 14424U;
    msg.lat = 0.809037043759;
    msg.lon = 0.302876814821;
    msg.speed = 0.518604946658;
    msg.speed_units = 51U;
    msg.custom.assign("WIXKDPBLZGIGSPXDSFRNVOBCNFVYVPZGJFDOVZOZAPNLBJSKCBSTOVKDJQMQJWYPYKIQWOKBTJQXMJHXEPKHMNXYFCBTSQDQVIYKBLVIWLUBEUAHONGGWNGAPOEQHXTNCJGHKBIZKZEFDUHUTABKPRLTHECSJZZZXPZOULCFHRYNAVDYDDFPUEAAGIWTAMSRALGXSYMWUTVHFRRHFQNROQWSMERQLICOMYRWMNSCTULMRFEWUJTDXC");

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
    msg.setTimeStamp(0.456905352738);
    msg.setSource(20796U);
    msg.setSourceEntity(128U);
    msg.setDestination(34418U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.845461881678;
    msg.lon = 0.198959984003;
    msg.z = 0.98858892587;
    msg.z_units = 231U;
    msg.radius = 0.110152148906;
    msg.duration = 60069U;
    msg.speed = 0.410970715392;
    msg.speed_units = 69U;
    msg.popup_period = 59138U;
    msg.popup_duration = 15452U;
    msg.flags = 52U;
    msg.custom.assign("XXYCAJPWYQWUEIBHRMSCMOGZJVUJRXYLIRCILCHMKUIVZCFBKAFZEYONOWPIJHNFNTLONBEHDDBXHBYYAFEKZRASVFLRHTZCNVOURGNWVGTNBJKJKHVZCRRMWPNGJWSQCPSX");

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
    msg.setTimeStamp(0.237923453842);
    msg.setSource(34957U);
    msg.setSourceEntity(104U);
    msg.setDestination(3591U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.660548811578;
    msg.lon = 0.214845549297;
    msg.z = 0.638868863873;
    msg.z_units = 180U;
    msg.radius = 0.520509800265;
    msg.duration = 7509U;
    msg.speed = 0.89847903241;
    msg.speed_units = 141U;
    msg.popup_period = 13317U;
    msg.popup_duration = 25717U;
    msg.flags = 206U;
    msg.custom.assign("OBFNIQIZIRMCTVXDENVXQGXGXAMRGIMMETKRNMNGHZXSGJKUYTWJDLDREWMEE");

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
    msg.setTimeStamp(0.856873031663);
    msg.setSource(29027U);
    msg.setSourceEntity(37U);
    msg.setDestination(55642U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.778634359029;
    msg.lon = 0.225954812672;
    msg.z = 0.982049897043;
    msg.z_units = 234U;
    msg.radius = 0.928879646122;
    msg.duration = 49480U;
    msg.speed = 0.746699039634;
    msg.speed_units = 43U;
    msg.popup_period = 7924U;
    msg.popup_duration = 46653U;
    msg.flags = 112U;
    msg.custom.assign("KBRGCURIOODJZWKTBIRBBWAMPXVSLFOPQHVQWEEACSHRCWXSWHKSQBWEMVGWJQKZYHREJYMMXCUOJDBLOSAFUNXHCLHZIYZDZAWLLFDYETTBILRHLPUGPGNEFGEYCXCJYLMYONGDBTKPRRQEEQZPXAZIKLJFGMBFNIIJBCTPIVUYTQNXNOX");

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
    msg.setTimeStamp(0.445799355052);
    msg.setSource(17595U);
    msg.setSourceEntity(69U);
    msg.setDestination(26775U);
    msg.setDestinationEntity(160U);
    msg.timeout = 56039U;
    msg.lat = 0.915911057808;
    msg.lon = 0.189900269062;
    msg.z = 0.592725553317;
    msg.z_units = 158U;
    msg.speed = 0.887367586918;
    msg.speed_units = 209U;
    msg.roll = 0.402273339349;
    msg.pitch = 0.581602115432;
    msg.yaw = 0.959232237355;
    msg.pitch_thresh = 0.517086204461;
    msg.rpm = 0.0382195854685;
    msg.thrust_duration = 54132U;
    msg.custom.assign("DXRHLXEJWDAJBJSKZIARIALAAJSWYWBMDMVRZJKTZYPZQVXQ");

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
    msg.setTimeStamp(0.737010680446);
    msg.setSource(11281U);
    msg.setSourceEntity(105U);
    msg.setDestination(55843U);
    msg.setDestinationEntity(96U);
    msg.timeout = 43624U;
    msg.lat = 0.15238743509;
    msg.lon = 0.986266506012;
    msg.z = 0.0553003835018;
    msg.z_units = 150U;
    msg.speed = 0.722053210699;
    msg.speed_units = 220U;
    msg.roll = 0.130820388082;
    msg.pitch = 0.0665060195409;
    msg.yaw = 0.787441935151;
    msg.pitch_thresh = 0.475126055883;
    msg.rpm = 0.602911141713;
    msg.thrust_duration = 51013U;
    msg.custom.assign("ARUYEIQPZLIRWCZVTVJPNGDSOFCAERLGCSBBXCHZQOJTCEFKQXBWIPOAQNVGPXJLPDDKTCKSEMTEHQNFVTSDREHQDCJWNXHONMANWTSDUFVAWGAPMYYLVEBXYWHJMKUYRBIWKKVOORZIYIGTWCRBHGUIAKXFIQSFZQKDWGXZRZUUUTXLEUMGBVTGZTPLAZJVOENBUASYMKPOOIN");

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
    msg.setTimeStamp(0.0372285839444);
    msg.setSource(13994U);
    msg.setSourceEntity(217U);
    msg.setDestination(56685U);
    msg.setDestinationEntity(198U);
    msg.timeout = 49026U;
    msg.lat = 0.375614040156;
    msg.lon = 0.433972132387;
    msg.z = 0.617690133044;
    msg.z_units = 14U;
    msg.speed = 0.0548628626426;
    msg.speed_units = 234U;
    msg.roll = 0.867492741485;
    msg.pitch = 0.598681537697;
    msg.yaw = 0.754774256408;
    msg.pitch_thresh = 0.0958943367427;
    msg.rpm = 0.342540972928;
    msg.thrust_duration = 47851U;
    msg.custom.assign("PZRZLIVSBZPQEPKJXNQKIFIWEBX");

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
    msg.setTimeStamp(0.628383092074);
    msg.setSource(58446U);
    msg.setSourceEntity(200U);
    msg.setDestination(15585U);
    msg.setDestinationEntity(116U);
    msg.timeout = 18265U;
    msg.lat = 0.698965732996;
    msg.lon = 0.261127416855;
    msg.z = 0.715165049079;
    msg.z_units = 123U;
    msg.speed = 0.791337293692;
    msg.speed_units = 143U;
    msg.bearing = 0.712882889727;
    msg.width = 0.0239200091665;
    msg.direction = 133U;
    msg.custom.assign("QGTLIGSUBMCKLLQKPUXERKETYGHWYIQOJTPNFNEEHHEIVRZCDWYQPLWYLNGNSLUFCDQPBMATFVIEXZJFUXND");

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
    msg.setTimeStamp(0.372349924109);
    msg.setSource(24326U);
    msg.setSourceEntity(153U);
    msg.setDestination(18689U);
    msg.setDestinationEntity(188U);
    msg.timeout = 24572U;
    msg.lat = 0.957750988632;
    msg.lon = 0.602060096012;
    msg.z = 0.456070162006;
    msg.z_units = 180U;
    msg.speed = 0.388050618993;
    msg.speed_units = 56U;
    msg.bearing = 0.442379679555;
    msg.width = 0.485405318248;
    msg.direction = 176U;
    msg.custom.assign("QROWCFIXAOROYHGMGTQUNWIRHYZREAMXNPZJGAJLKRWVLBNFFZSPKKJKMBOTSPSOSLRQMIYJWEHHDZETTBIAKEYPXRKNBWQEKSLQHBNIGMDFLKCQIXTJDOFUHVIQVXNSXEMDSNFLCGLCPOZODYJPJATIQXSTWOPBRUWTBWZPA");

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
    msg.setTimeStamp(0.764378528065);
    msg.setSource(60165U);
    msg.setSourceEntity(21U);
    msg.setDestination(53022U);
    msg.setDestinationEntity(142U);
    msg.timeout = 32958U;
    msg.lat = 0.905262100461;
    msg.lon = 0.081507913201;
    msg.z = 0.0205320793977;
    msg.z_units = 202U;
    msg.speed = 0.716103581801;
    msg.speed_units = 66U;
    msg.bearing = 0.979364795966;
    msg.width = 0.367695088973;
    msg.direction = 232U;
    msg.custom.assign("QCAJLWIPKGVODQTPXNDTNVHINWNDGCTFTEQPSYSLAKZBFKGIERHZBULPVCBZXTATATSXLKRVRFIJJWBVGHLKHDWMXSPIZUFMGEZOWUNROBOBBCXDXYFYMOTBOJJIQGVZUSNEZECYYUMLQQYFURXPCUNJVEKQVTJDPQMOKKC");

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
    msg.setTimeStamp(0.0679501332763);
    msg.setSource(35792U);
    msg.setSourceEntity(118U);
    msg.setDestination(21763U);
    msg.setDestinationEntity(119U);
    msg.op_mode = 189U;
    msg.error_count = 3U;
    msg.error_ents.assign("GYWDQLWDSTBRSFJAMXGXHBIABEAIXXSZPWNVRYHLUTKVSASFGOSRUKKNSEYCEYUINVBTQRULOBJEVMJDIYAMEVNTEDZKDCRJKUOVXFAKLXGMUHRMYNLFPTRPDMQGHQMVCZCGFKKPCXERAHWLTMOOVNPIZRNIYDGKPPECCKZBMUACFNQDBXPDGUFCNFELNWAFHVALHFYHYUOBQSTPCYTZHWTVZOJWIMWJDGRIHIBOPWLZLQQSJXJOGTSUQEJIBQ");
    msg.maneuver_type = 20229U;
    msg.maneuver_stime = 0.00425037894806;
    msg.maneuver_eta = 61901U;
    msg.control_loops = 2708050684U;
    msg.flags = 248U;
    msg.last_error.assign("HDAGKAMFZMLSGRHLVUWKYPVTOQLBNTMRWQKYYKMX");
    msg.last_error_time = 0.66430057303;

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
    msg.setTimeStamp(0.780915334276);
    msg.setSource(26504U);
    msg.setSourceEntity(179U);
    msg.setDestination(63644U);
    msg.setDestinationEntity(208U);
    msg.op_mode = 72U;
    msg.error_count = 203U;
    msg.error_ents.assign("KZBAKIKMJMHFSTSPAHGCHHNIJLJIZSDWIYMCJNHDYIPGFISNSLODOLQFFBVWBHEAXQOXXQGJWQWIRYCXFCWUTQABVXPATOALOUGSESWMXBAPELIYZOQNDGGAXQPDESUMVLOUYFPRJTPYIBIMCJTZRNNPDLJGKNUEHRRLOGVKYXRKCNGVUBTGZZFPKCCRCUTTEXMNRBTNDLAPVTQMMZHKZLRWHJHSEUZCBYKDEFBDF");
    msg.maneuver_type = 47052U;
    msg.maneuver_stime = 0.174241669811;
    msg.maneuver_eta = 57468U;
    msg.control_loops = 144092942U;
    msg.flags = 152U;
    msg.last_error.assign("UAIYVHTEWDRZJYEKOB");
    msg.last_error_time = 0.806488634283;

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
    msg.setTimeStamp(0.248800393011);
    msg.setSource(59458U);
    msg.setSourceEntity(56U);
    msg.setDestination(51139U);
    msg.setDestinationEntity(26U);
    msg.op_mode = 15U;
    msg.error_count = 132U;
    msg.error_ents.assign("FJUFHRLAGISGFWXILWKMASNPURQEVJXOGRYYWBNHDUJXCMZVNMQGUOLKIDFTTBBHQFXCFWTDDCEDUVIBRJZHYTWQMKZNOHBEGTMOWMBDUOFYCSZLEDBNGSQIPQJIADHKLYASEMELPNVBJGLYWIVZQHOPTQAYKCVSKZQNSTLCBKUNXHXERGHTLAERCPUVDJCAAGPCRMO");
    msg.maneuver_type = 7979U;
    msg.maneuver_stime = 0.324884260085;
    msg.maneuver_eta = 9330U;
    msg.control_loops = 883516997U;
    msg.flags = 246U;
    msg.last_error.assign("XNZYUBKINJWNTHCCTGYPEIXASBJDHYMHURURVWTCYOWHBPNF");
    msg.last_error_time = 0.238152135971;

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
    msg.setTimeStamp(0.850838955709);
    msg.setSource(7209U);
    msg.setSourceEntity(22U);
    msg.setDestination(38011U);
    msg.setDestinationEntity(176U);
    msg.type = 237U;
    msg.request_id = 44987U;
    msg.command = 14U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 35288U;
    tmp_msg_0.lat = 0.229868335278;
    tmp_msg_0.lon = 0.379412059184;
    tmp_msg_0.z = 0.193091422855;
    tmp_msg_0.z_units = 25U;
    tmp_msg_0.speed = 0.753758576387;
    tmp_msg_0.speed_units = 79U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.188206449803;
    tmp_tmp_msg_0_0.y = 0.234842953682;
    tmp_tmp_msg_0_0.z = 0.816173510851;
    tmp_tmp_msg_0_0.t = 0.101082436888;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PWWJXFVGLWLOKZVNDQTGGVXNXNLCUBIRUALYPNEMIMFZUEHMLQRCUEJYDFUAKKGHNOEXCDCZOYNVKYIKEFYTAFDCGYBGVCTOBQTPQFALLHZQFKHHMBBZGBQJXHSQSEPRIZGXIHXCDMZUKXWIWSJPO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52182U;
    msg.info.assign("PHCQRBBSUNJLWPKJLWPGGGALBQDOYWNQFZPJKDCVGTAQYSMMQSDYOYNDQSZNRUHUECL");

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
    msg.setTimeStamp(0.691966442141);
    msg.setSource(1792U);
    msg.setSourceEntity(11U);
    msg.setDestination(46104U);
    msg.setDestinationEntity(30U);
    msg.type = 251U;
    msg.request_id = 54182U;
    msg.command = 71U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 18652U;
    tmp_msg_0.lat = 0.859171816248;
    tmp_msg_0.lon = 0.856740634554;
    tmp_msg_0.z = 0.544347172117;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.speed = 0.391112815598;
    tmp_msg_0.speed_units = 123U;
    tmp_msg_0.bearing = 0.716211960658;
    tmp_msg_0.cross_angle = 0.296202323308;
    tmp_msg_0.width = 0.0565571129704;
    tmp_msg_0.length = 0.0692657738269;
    tmp_msg_0.hstep = 0.989592578791;
    tmp_msg_0.coff = 136U;
    tmp_msg_0.alternation = 95U;
    tmp_msg_0.flags = 26U;
    tmp_msg_0.custom.assign("JMFHWMEWBRFMWRKUVPGMVQROVLBAFMXGZIUAXXVQQVCFSXIHNLUVZOSXEDXHTBLCUECPZSNGYUGZOIYTJLONDKRAAKGVCJTHYTQYWYOWEEBAJZPMOCBAFLPDKKH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60305U;
    msg.info.assign("ZBVLJUQKYGEHEPBPXRMBRUNMJGYBCVVNCDCPSNKHWTLHRTVAMGIMWAYXZWCIQMTXQX");

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
    msg.setTimeStamp(0.000433873724042);
    msg.setSource(24146U);
    msg.setSourceEntity(152U);
    msg.setDestination(63784U);
    msg.setDestinationEntity(146U);
    msg.type = 194U;
    msg.request_id = 8682U;
    msg.command = 219U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 50269U;
    tmp_msg_0.lat = 0.665019530499;
    tmp_msg_0.lon = 0.891532283858;
    tmp_msg_0.z = 0.864858722331;
    tmp_msg_0.z_units = 111U;
    tmp_msg_0.speed = 0.348949337287;
    tmp_msg_0.speed_units = 186U;
    tmp_msg_0.bearing = 0.458166645781;
    tmp_msg_0.width = 0.0985652465712;
    tmp_msg_0.direction = 48U;
    tmp_msg_0.custom.assign("IDCUCVEYFQHQZYMRUBGAXTOPKGIFFSLNFMVAOHDKLJZWACIVDSRPAPEJCPHCKQDDGKVNXOXUEIXIPWYZGVWEATIJNSMHXFZDYYSURG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61899U;
    msg.info.assign("QVLOSFFTKFOQTMRYDISYLIQYOHMXIPLKUQKJNYWDFXUPCJBNJCQLNSKABWUAGZTZCYKIHUBFENKAUCDHVJXOYZABOMVPH");

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
    msg.setTimeStamp(0.999140438275);
    msg.setSource(52831U);
    msg.setSourceEntity(141U);
    msg.setDestination(40142U);
    msg.setDestinationEntity(196U);
    msg.command = 203U;
    msg.entities.assign("UOSNNWJPCYTSIDNMMALYTQJQDZDSHKWNERZTEZVH");

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
    msg.setTimeStamp(0.828623188561);
    msg.setSource(5621U);
    msg.setSourceEntity(60U);
    msg.setDestination(10973U);
    msg.setDestinationEntity(169U);
    msg.command = 76U;
    msg.entities.assign("THGOIAUACSNFFCIMKINGYHCYPKCVLLPHLQDNYGVBDGNHQESEXEQXJXMNDGXUACOWKPGTASROZTGMBEMBSLAJHVEISPYCRD");

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
    msg.setTimeStamp(0.218832876732);
    msg.setSource(46609U);
    msg.setSourceEntity(161U);
    msg.setDestination(7689U);
    msg.setDestinationEntity(111U);
    msg.command = 3U;
    msg.entities.assign("VOKIHTQJDXLTHQJZHOZEUFBRSDMWPVEOPSOECTWNNDQRSXALMJKIYGYOHPHAIRRUSILZWVGYDXAZLZUFZCPOBSEJFZBQPMAIYKDJSQRQWNHFCTLNUTEVLHODRUFRGWCTBKZIBXCWEMIYRRGCMAPGASNFWNUIHEXAUSNBQILKEJNWPDGVNKFGUPLBSXKOVXCKMWNDOCGGMZJECJLWMJFVVKQ");

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
    msg.setTimeStamp(0.643873870421);
    msg.setSource(11144U);
    msg.setSourceEntity(140U);
    msg.setDestination(56856U);
    msg.setDestinationEntity(130U);
    msg.mcount = 80U;
    msg.mnames.assign("ZQCPQYMBNQAUWLROXXADJJJKNSAKULLRRVHVZXSUWGYRDERXBBPLWKSOKJXIHNQSOLBVBAOTKZQZHOXFSIFTVWUDAHYEYDVXDXSMCMFSIGSIGGDTVIFCGMJKWMMFUDRBTSNOEHBLUKDPJCEIYGQJLBICNFAPNYPWGGHVREUHATEONPV");
    msg.ecount = 71U;
    msg.enames.assign("BKTJCJMPRGBZTBEWIJKLHDYJFCGVPXNCNQTYHNTKFQGDCSSWDSUFAFZCOKDBHSYPLZJKPYKOYXUSGOARWSVMOEYFXVWSMJBFUCITNIZILEROEKFKAAEHKEAVUHJIIRGDPVRRXALLBZPXTMJNANBHZREVL");
    msg.ccount = 215U;
    msg.cnames.assign("MNPIZLBPGVSLLQBPGCDTXZSUPWSBCJKKSEQZJUATIVLQBNPQIIBBRFPNOLQBUGUGZVEMOGZIXPFMZCHAJMTT");
    msg.last_error.assign("DKMZTTCJKSXUVCWDPFHLLXPNGWRBLDNMEAIYCQFKALKCGJCPMYXAMYWHJFBOICEMLKRXIIVFOCWXRGUNYSTSDHLHRMVZRQEXPSLRIQYHXUQDXEHZFVDCAQXJPODBGZMZSRWPHKTTVNHGOGBERXKYVOCURVMZBOBMVMKLPQINZOUQZAWIDUYDYBEJLAFVNBYWFPSISGOAAHSEQAGRKTWBLPJQOFFZTWANDF");
    msg.last_error_time = 0.691861853737;

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
    msg.setTimeStamp(0.982481901129);
    msg.setSource(10039U);
    msg.setSourceEntity(101U);
    msg.setDestination(58758U);
    msg.setDestinationEntity(101U);
    msg.mcount = 217U;
    msg.mnames.assign("WCRCJDZJQYANSJOXGEWPXTWISOZHLJKEZXQMHFPFSAFIIQHQFAVPHCMTVMS");
    msg.ecount = 146U;
    msg.enames.assign("FIFVRRZUECGAGUYDPNMDAUHBAUNBXUJNQDXVGOQTMHREQNLEWXJMMIIXNHHUMMTBFKGPYLYHRFZRFVQXRPIPHINJXSNOZOZOTKWTJTZNABCWCCZ");
    msg.ccount = 111U;
    msg.cnames.assign("ZRCVXPEPAXSKDUISSZCYRSNHDXJQMDINOSXRBUHDPELXLEUWOBRZBMXLFDWKJJFOUOAVZSXIJNQLSLWZWYKZDQFSOVMGYIEAGKDNWIQHCGIGPIILMVUBGNMRBG");
    msg.last_error.assign("FOLIMPCOZYNUZOCFJQKFPEWDPGYLXEFESJCTCKNOMSQVZYKXEURC");
    msg.last_error_time = 0.158939768077;

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
    msg.setTimeStamp(0.911627945326);
    msg.setSource(26625U);
    msg.setSourceEntity(195U);
    msg.setDestination(51180U);
    msg.setDestinationEntity(113U);
    msg.mcount = 108U;
    msg.mnames.assign("PEODKSMJGZYGJKVTSEFIUATZJFBKHPNROSGUCOHEQZVPZSWGDNRT");
    msg.ecount = 35U;
    msg.enames.assign("ISGMEEFLVUXRZZLDXDHKX");
    msg.ccount = 5U;
    msg.cnames.assign("UQYYZLMDHJUPILJTPQCXDNYKTOTFVROROWCGRJKQXEKKUKXWQFIASNGCVVGMIGHOQCXCSSFWNYJCZCDFGSMEQADFVNTRYVPMIRNAXZBCOEHVAVNBQDBJJY");
    msg.last_error.assign("CEYVKUOPIRDMNEJTLLPFQIFUCBFFYBRKATBPXQBHVKWFDGTZZUAQCHHPOTFCNOZCHNLWPVRSYQLAKSVWDXMXIHVNJVRBACTHKWZAOMZMINBYFSWUGSLICJBDXJRGAICYLWIXRHYGODKASXNDAATSPZZELUJEEXUTGYRNGVBGMMRSMSDQUXLIDGKLOFMZREKFUPXWWEJJQMCFPYIKMTQOZJQGAVUH");
    msg.last_error_time = 0.0652031844903;

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
    msg.setTimeStamp(0.588813098686);
    msg.setSource(45673U);
    msg.setSourceEntity(168U);
    msg.setDestination(39832U);
    msg.setDestinationEntity(96U);
    msg.mask = 109U;
    msg.max_depth = 0.528913597736;
    msg.min_altitude = 0.739723688286;
    msg.max_altitude = 0.857723793093;
    msg.min_speed = 0.392712354899;
    msg.max_speed = 0.406107968288;
    msg.max_vrate = 0.792675121651;
    msg.lat = 0.952909269636;
    msg.lon = 0.250397713641;
    msg.orientation = 0.191559406868;
    msg.width = 0.290706797715;
    msg.length = 0.390157184963;

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
    msg.setTimeStamp(0.917406725468);
    msg.setSource(42263U);
    msg.setSourceEntity(232U);
    msg.setDestination(56247U);
    msg.setDestinationEntity(111U);
    msg.mask = 70U;
    msg.max_depth = 0.31235042382;
    msg.min_altitude = 0.647846125978;
    msg.max_altitude = 0.12793894587;
    msg.min_speed = 0.076217204121;
    msg.max_speed = 0.040329781954;
    msg.max_vrate = 0.116822934037;
    msg.lat = 0.00279732733912;
    msg.lon = 0.0730335062748;
    msg.orientation = 0.212824183184;
    msg.width = 0.960746378916;
    msg.length = 0.481858753391;

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
    msg.setTimeStamp(0.974396968295);
    msg.setSource(41008U);
    msg.setSourceEntity(4U);
    msg.setDestination(16181U);
    msg.setDestinationEntity(61U);
    msg.mask = 254U;
    msg.max_depth = 0.26031182041;
    msg.min_altitude = 0.672183371018;
    msg.max_altitude = 0.558659099551;
    msg.min_speed = 0.834857038564;
    msg.max_speed = 0.214571528568;
    msg.max_vrate = 0.880459833797;
    msg.lat = 0.810394046574;
    msg.lon = 0.636296162089;
    msg.orientation = 0.972925962394;
    msg.width = 0.831430858021;
    msg.length = 0.840931358926;

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
    msg.setTimeStamp(0.366778108546);
    msg.setSource(9347U);
    msg.setSourceEntity(180U);
    msg.setDestination(38854U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.194158811991);
    msg.setSource(51640U);
    msg.setSourceEntity(123U);
    msg.setDestination(11896U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.880262515531);
    msg.setSource(38343U);
    msg.setSourceEntity(153U);
    msg.setDestination(51446U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.934225065555);
    msg.setSource(42595U);
    msg.setSourceEntity(199U);
    msg.setDestination(43115U);
    msg.setDestinationEntity(230U);
    msg.duration = 54430U;

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
    msg.setTimeStamp(0.998036515756);
    msg.setSource(9236U);
    msg.setSourceEntity(55U);
    msg.setDestination(2353U);
    msg.setDestinationEntity(194U);
    msg.duration = 49149U;

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
    msg.setTimeStamp(0.873835855184);
    msg.setSource(17290U);
    msg.setSourceEntity(88U);
    msg.setDestination(63793U);
    msg.setDestinationEntity(164U);
    msg.duration = 21107U;

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
    msg.setTimeStamp(0.592286277456);
    msg.setSource(9000U);
    msg.setSourceEntity(45U);
    msg.setDestination(31029U);
    msg.setDestinationEntity(38U);
    msg.enable = 159U;
    msg.mask = 496633434U;
    msg.scope_ref = 565549758U;

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
    msg.setTimeStamp(0.503633066582);
    msg.setSource(58256U);
    msg.setSourceEntity(113U);
    msg.setDestination(41958U);
    msg.setDestinationEntity(146U);
    msg.enable = 87U;
    msg.mask = 3820868133U;
    msg.scope_ref = 2027766446U;

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
    msg.setTimeStamp(0.672143840169);
    msg.setSource(63001U);
    msg.setSourceEntity(228U);
    msg.setDestination(26959U);
    msg.setDestinationEntity(172U);
    msg.enable = 82U;
    msg.mask = 2467940729U;
    msg.scope_ref = 2241664450U;

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
    msg.setTimeStamp(0.0648424886456);
    msg.setSource(41674U);
    msg.setSourceEntity(213U);
    msg.setDestination(48868U);
    msg.setDestinationEntity(123U);
    msg.medium = 58U;

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
    msg.setTimeStamp(0.805370119431);
    msg.setSource(23748U);
    msg.setSourceEntity(195U);
    msg.setDestination(15577U);
    msg.setDestinationEntity(59U);
    msg.medium = 157U;

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
    msg.setTimeStamp(0.287050814008);
    msg.setSource(47755U);
    msg.setSourceEntity(252U);
    msg.setDestination(36601U);
    msg.setDestinationEntity(98U);
    msg.medium = 80U;

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
    msg.setTimeStamp(0.7938480477);
    msg.setSource(15213U);
    msg.setSourceEntity(13U);
    msg.setDestination(37240U);
    msg.setDestinationEntity(190U);
    msg.value = 0.730824918506;
    msg.type = 7U;

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
    msg.setTimeStamp(0.59702395216);
    msg.setSource(65455U);
    msg.setSourceEntity(250U);
    msg.setDestination(18034U);
    msg.setDestinationEntity(122U);
    msg.value = 0.568874618727;
    msg.type = 115U;

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
    msg.setTimeStamp(0.979276493908);
    msg.setSource(25540U);
    msg.setSourceEntity(185U);
    msg.setDestination(49260U);
    msg.setDestinationEntity(196U);
    msg.value = 0.201329472028;
    msg.type = 125U;

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
    msg.setTimeStamp(0.486037423927);
    msg.setSource(9235U);
    msg.setSourceEntity(141U);
    msg.setDestination(63179U);
    msg.setDestinationEntity(207U);
    msg.possimerr = 0.77561257828;
    msg.converg = 0.577281263331;
    msg.turbulence = 0.220179988705;
    msg.possimmon = 77U;
    msg.commmon = 241U;
    msg.convergmon = 69U;

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
    msg.setTimeStamp(0.582330746377);
    msg.setSource(43921U);
    msg.setSourceEntity(75U);
    msg.setDestination(62693U);
    msg.setDestinationEntity(100U);
    msg.possimerr = 0.50786748072;
    msg.converg = 0.8019640901;
    msg.turbulence = 0.93404989092;
    msg.possimmon = 151U;
    msg.commmon = 70U;
    msg.convergmon = 237U;

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
    msg.setTimeStamp(0.601191641731);
    msg.setSource(37267U);
    msg.setSourceEntity(197U);
    msg.setDestination(27690U);
    msg.setDestinationEntity(74U);
    msg.possimerr = 0.649716938864;
    msg.converg = 0.777979671884;
    msg.turbulence = 0.700136355965;
    msg.possimmon = 5U;
    msg.commmon = 217U;
    msg.convergmon = 7U;

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
    msg.setTimeStamp(0.375122755794);
    msg.setSource(3549U);
    msg.setSourceEntity(25U);
    msg.setDestination(46035U);
    msg.setDestinationEntity(49U);
    msg.autonomy = 86U;
    msg.mode.assign("IZZIWMGBQOAMXRTJUNXDNKKROXJJARVUHPJJYSZXGMHZABBWGGVKPTSZTCDSCLQTLCTPFUPOPHAEDNHYCEOEMBWAGYAPZNJNHUEYLUMIDUOIMYKIANDFKQEDCPNRGOCNNASSTEZYTUCEFJ");

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
    msg.setTimeStamp(0.808558699785);
    msg.setSource(42533U);
    msg.setSourceEntity(224U);
    msg.setDestination(34121U);
    msg.setDestinationEntity(87U);
    msg.autonomy = 130U;
    msg.mode.assign("ZTQUGSRFDCZVZKNIFAHAXZQTQGQQMDYJDSOTKDCDDOUYLWSMWWJLXFUEBXSAIGRBLWHZBCSSUPCOLWGLFKQALHYEANYMVTDTWMVMHGKPCZTNPNBLMYR");

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
    msg.setTimeStamp(0.746034094281);
    msg.setSource(46502U);
    msg.setSourceEntity(163U);
    msg.setDestination(18223U);
    msg.setDestinationEntity(156U);
    msg.autonomy = 152U;
    msg.mode.assign("QHLVGBQCTZCLNGIWYXMKIWZHKAAHOFINABLVVAGENXZVPZOYCMBYQGHIRAMLIIQASCQTLRWFGUNNZXNSVAYOUVTGJFGFZWVOFOGKPFSHAQNLUDDIVXNKRCHNHJUEPPZUXBMEWSOUPSJCUWTTLSOXETQFPYKOESSUPUFWVRMICWRFLXRHBHLXBB");

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
    msg.setTimeStamp(0.90507950174);
    msg.setSource(57014U);
    msg.setSourceEntity(116U);
    msg.setDestination(24298U);
    msg.setDestinationEntity(77U);
    msg.type = 86U;
    msg.op = 179U;
    msg.possimerr = 0.781149601167;
    msg.converg = 0.116443428206;
    msg.turbulence = 0.0652059076191;
    msg.possimmon = 248U;
    msg.commmon = 180U;
    msg.convergmon = 124U;

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
    msg.setTimeStamp(0.873770798007);
    msg.setSource(12296U);
    msg.setSourceEntity(1U);
    msg.setDestination(54732U);
    msg.setDestinationEntity(28U);
    msg.type = 78U;
    msg.op = 33U;
    msg.possimerr = 0.49564399979;
    msg.converg = 0.745946751919;
    msg.turbulence = 0.403192874093;
    msg.possimmon = 193U;
    msg.commmon = 205U;
    msg.convergmon = 106U;

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
    msg.setTimeStamp(0.69741509693);
    msg.setSource(8309U);
    msg.setSourceEntity(55U);
    msg.setDestination(47516U);
    msg.setDestinationEntity(53U);
    msg.type = 54U;
    msg.op = 182U;
    msg.possimerr = 0.339267118675;
    msg.converg = 0.353070603735;
    msg.turbulence = 0.895455561443;
    msg.possimmon = 53U;
    msg.commmon = 198U;
    msg.convergmon = 209U;

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
    msg.setTimeStamp(0.317787626038);
    msg.setSource(10829U);
    msg.setSourceEntity(176U);
    msg.setDestination(41942U);
    msg.setDestinationEntity(188U);
    msg.op = 213U;
    msg.comm_interface = 170U;
    msg.period = 33057U;
    msg.sys_dst.assign("KPKJQQDNQIFWMXHMXKWJKCIDGIPZTLZTGUQPRVBHHEJWAHMYUNCXCSGYAOMOSBLAUSNMKIWXOBLNUJYOEZEJBPPQDLZGNJXYRZRTCJCLHTEIELGHOQDDMZCVEYGTZHTNHPSYSXMSJUKFCIZFVZWVQVKAFSYEKHPBWCASVIOMTAWUUTWVRDFDJMBBNNOINXHRDQEEYRPLSLTPRXBLOGCFFTAJKYAVX");

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
    msg.setTimeStamp(0.239080085132);
    msg.setSource(5207U);
    msg.setSourceEntity(134U);
    msg.setDestination(13946U);
    msg.setDestinationEntity(1U);
    msg.op = 118U;
    msg.comm_interface = 156U;
    msg.period = 43944U;
    msg.sys_dst.assign("JHNSREMZIEWJAITNKBZLKWOLOSHZKGXRXZEIEVRJJKSDJRCCEAVWMDPMHUSLZYYSDNRFIZGBWDJQMTKUXZBSQMVRMXOBCWABFYTWRPTJPMHENSUUIQKNEHLAVHGKFGPRGUQPAFOBVQUKVCCOAVVLF");

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
    msg.setTimeStamp(0.205759952192);
    msg.setSource(3128U);
    msg.setSourceEntity(42U);
    msg.setDestination(7871U);
    msg.setDestinationEntity(225U);
    msg.op = 236U;
    msg.comm_interface = 90U;
    msg.period = 41409U;
    msg.sys_dst.assign("ZIMKHWTQCEEOKUABULVJTIWWNSFHPEIOSXYHLVMDNVGOMQXMZCCFHIXZUGKHWECLWADQHPMADGTBFS");

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
    msg.setTimeStamp(0.622589403451);
    msg.setSource(54267U);
    msg.setSourceEntity(145U);
    msg.setDestination(33283U);
    msg.setDestinationEntity(143U);
    msg.stime = 710507495U;
    msg.latitude = 0.748253811056;
    msg.longitude = 0.0514069483067;
    msg.altitude = 11148U;
    msg.depth = 34922U;
    msg.heading = 42883U;
    msg.speed = 6333;
    msg.fuel = -120;
    msg.exec_state = -79;
    msg.plan_checksum = 15149U;

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
    msg.setTimeStamp(0.112693963759);
    msg.setSource(6426U);
    msg.setSourceEntity(72U);
    msg.setDestination(23562U);
    msg.setDestinationEntity(37U);
    msg.stime = 680800574U;
    msg.latitude = 0.161176864746;
    msg.longitude = 0.292536028826;
    msg.altitude = 51555U;
    msg.depth = 45354U;
    msg.heading = 5311U;
    msg.speed = 17241;
    msg.fuel = -52;
    msg.exec_state = 78;
    msg.plan_checksum = 22554U;

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
    msg.setTimeStamp(0.721076632396);
    msg.setSource(47517U);
    msg.setSourceEntity(39U);
    msg.setDestination(55727U);
    msg.setDestinationEntity(191U);
    msg.stime = 3859527496U;
    msg.latitude = 0.989400360736;
    msg.longitude = 0.554689263124;
    msg.altitude = 33744U;
    msg.depth = 49029U;
    msg.heading = 49856U;
    msg.speed = -1163;
    msg.fuel = 98;
    msg.exec_state = -2;
    msg.plan_checksum = 26188U;

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
    msg.setTimeStamp(0.674322464345);
    msg.setSource(12449U);
    msg.setSourceEntity(222U);
    msg.setDestination(10587U);
    msg.setDestinationEntity(241U);
    msg.req_id = 22835U;
    msg.comm_mean = 222U;
    msg.destination.assign("XPUUNTKMFBXAJRVFOEDMFQWPMUVAJREAWNOHPUHIEHCCLVVQVKNTXNXOFSMWUETDTFQSCTCYMDBJMZJQJLWOUFWCSO");
    msg.deadline = 0.873815576199;
    msg.range = 0.922949131435;
    msg.data_mode = 240U;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 97U;
    tmp_msg_0.error.assign("UJUNILJVSXESUQKPTTYDROHRHCKOQXYFYTMFEEHIMULGBBZZAQWWWGIZOFDQFOMQHWKSJWUDVRMDIGBJYBNTEYYKJNRVVRRCZVOTGJYPAQIQCXPWAIZNXTKHSCVABXVXBEDUWNCREHPYIUPENKAZZWSKJUPQZBMDAISORRAQCDBLL");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BHULPVFZNTYODWLGIIAOSCNKETDFKBOKBRIDTSEIMSWGCEQQKWYODEGRVLNAFBDSOEJXDFAVGMQLDNDGZCYMKEQULCQSP");
    const char tmp_msg_1[] = {-25, -76, -11, -53, -3, -93, -42, 30, 27, 31, -64, -95, -3, -102, 33, -74, -81, -53, -52, 94, -84, 23, -18, 34, -116, 24, 99, 65, -88, -64, -105, -99, -62, -34, 69, 6, -128, -73, -1, 68, -14, 76, -43, -107, -126, -50, 49, -65, -2, 93, 110, -42, 57, -37, 81, 40, -62, -40, -7, 59, -28, -118, 6, 31, 87, -15, 15, -11, 78, -7, 65, 116, -62, -40, -99, -52, -55, 33, 80, 50, -25, 70, -31, 78, -107, 107, 58, -73, -16, 105, 66, 106, -33, 100, 48, 58, 126, -101, -116, -49, 89, 94, 72, -41, 90, 100, 79, 40, 35, 125, -29, -72, 85, 81, 45, -19, 14, 125, 59, -64, 33, 27, 32, 63, -6, -38, 21, 37, 47, 49, 55, -12, -117, -102, -89, -42, 30, 54, 84, -90, -123, -42, 120, -40, 78, -99, 42, 44, -111, -61, -117, -1, 123, 64, 88, 93, 116, 36, -33, -9, 42, 117, -85, 119, -56, -21, 66, -104, -92, 7, 41, -123, 126, 103, 41, -81, -16, -102, -78, -36, -98, -12, 39, 92, 1, -109, -37, -42, -73, 73, -124, -36, -44, 124, 107};
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
    msg.setTimeStamp(0.505108182676);
    msg.setSource(46647U);
    msg.setSourceEntity(95U);
    msg.setDestination(41039U);
    msg.setDestinationEntity(59U);
    msg.req_id = 59250U;
    msg.comm_mean = 76U;
    msg.destination.assign("TYOIXCXLZWEWAHYAMWLBNHULZOFMDVXVPHWHIODDQFODJLYVDTWVXAPLEVTWGPOKSXSRVYWSXSGBFIUQPJTMUXPJBSROEWBBFQQECVTIFRFUGISXQKADBYIBNNMGEHABTZJCEAGKCLQUTAQNFJJZYVKOUTMPGEQNXCFLJGUUOMOPYZRIYHSVGHHWJNUHDRKWNBSIZGRJMFS");
    msg.deadline = 0.952765346936;
    msg.range = 0.0262936216192;
    msg.data_mode = 202U;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 175U;
    tmp_msg_0.x = 18954U;
    tmp_msg_0.y = 48123U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YRCAIHYBUXGHQRZGNRVNENKASJVLWBXWZADDOYKTQCIBTZYIWNHCOZVNRXFUTAPEVDHAFGYLYZYPTPMKALOJZGKVBDKREHJBGOROEEORUQWXFXYMWYDIWRUKWHSW");
    const char tmp_msg_1[] = {-34, 115, -106, -84, -22, 121, -15, 91, 108, -106, 28, -40, -56, 33, 5, 72, 46, 99, 40, 104, 104, 82, 86, 12, -37, 16, -66, -57, 115, 76, 48, 22, 44, -102, 73, -25, -21, 68, -99, 37, -1, -30, -35, 16, -52, -29, 28, -54, 38, -66, 81, 86, -83, -7, -113, 60, -23, 109, -43, -39, -32, -115, 37, -33, -8, 26, 125, 64, -6, 91, -70, 108, 46, -13, -34, 117, 84, -21, 49, 101, -50, -68, -87, -100, 35, -111, 119, 28, -4, -17, 125, -34, 85, 19, -64, 97, 29, -21, 80, -79, 72, 56, 56, -13, 53, -76, -78, 112, -68, -33, -34, 52, -30, -107, 99, -64, 80, -53, -17, 31, 62, 9, -15, 5, -128, -111, 120, -14, 124, 4, 123, 48, 101, -124, 14, -30, 73, -27, -20, 28, -120, 116, -40, -77, -55, 47, -60, 93, -52, -81, -62, -82, -47, -81, -120, 97, -87, 120, -105, -104, -128, 18, 111, 125, 28, -51, -29, -36, 92, 33, 111, 126, 68, -100, 37, 94, 57, 77, -80, 17, 13, 113, -125, 71, -9, -82, 13, -81, 30, 110, -68, 35, 53, 101, 116, 25, -68, 20, -62, -16, -77, -66, 26, -56, -9, -105};
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
    msg.setTimeStamp(0.316128365268);
    msg.setSource(23954U);
    msg.setSourceEntity(191U);
    msg.setDestination(18307U);
    msg.setDestinationEntity(18U);
    msg.req_id = 59712U;
    msg.comm_mean = 149U;
    msg.destination.assign("EDLADGHGGLWBWJYCAIPTOEIMDVFJRQZDRNXYMUNJQTPDRPJFQGBSQMDEOZOVMJCKFVJMSXYOMFISZKLLZHRWTZLMTFXPZFDNOUZC");
    msg.deadline = 0.65972020276;
    msg.range = 0.543324595726;
    msg.data_mode = 201U;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("UQPASUNWEDWIMXCQSLZMXSYYHMFDZWARPC");
    tmp_msg_0.op = 75U;
    tmp_msg_0.lat = 0.627671998053;
    tmp_msg_0.lon = 0.602970337892;
    tmp_msg_0.height = 0.988990346425;
    tmp_msg_0.x = 0.167134033904;
    tmp_msg_0.y = 0.72346836714;
    tmp_msg_0.z = 0.520296452388;
    tmp_msg_0.phi = 0.672898598316;
    tmp_msg_0.theta = 0.180838800228;
    tmp_msg_0.psi = 0.750186027462;
    tmp_msg_0.vx = 0.49350402494;
    tmp_msg_0.vy = 0.117258797344;
    tmp_msg_0.vz = 0.996383473767;
    tmp_msg_0.p = 0.578531053341;
    tmp_msg_0.q = 0.109520339227;
    tmp_msg_0.r = 0.314061232284;
    tmp_msg_0.svx = 0.338081677501;
    tmp_msg_0.svy = 0.267501208912;
    tmp_msg_0.svz = 0.16425234291;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SPFGDIVGGEXSWKMGWHESVDJOQIV");
    const char tmp_msg_1[] = {46, 56, -53, -105, 112, -123, -58, -39, 111, -74, -57, -51, 102, -41, -113, 13, 53, -17, -29, 4, -52, -117, -128, -76, -93, 23, -59, 55, 1, -7, -36, 111, 16, 75, 43, 56, -87, 60, 103, -88, -73, 111, 61, 13, -118, 1, 125, -53, 120, 117, -39, -17, 1, 4, 33, -81, 96, -30, 50, -100, -49, 53, 4, 106, 67, 35, -44, 108, 0, -118, 118, -1, -56, -40, -28, -2, 42, -25, -90, -108, 62, 13, -8, 97, -51, 9, -81, 93, 89, -24, 19, -114, 42, 90, 19, 10, 96, -106, -42, 115, 2, -7, -49, 24, 115, 58, 46, 46, -120, -11, -43, 26, -91, 110, 107, -19, -128, 31, -41, 32, -98, 117, 7, -19, -25, -63, 108, 63, -40, -36, 115, 28, -46, -102, 125, -92, -128, 67};
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
    msg.setTimeStamp(0.584126362086);
    msg.setSource(1383U);
    msg.setSourceEntity(147U);
    msg.setDestination(54346U);
    msg.setDestinationEntity(67U);
    msg.req_id = 41052U;
    msg.status = 89U;
    msg.range = 0.994799419529;
    msg.info.assign("MJQXUUCKYDGXMDOANDCBDBWPHEGZACWIHHFQPHOUUBOXCZAGNIZCPNWNWLSILYAFZMQAJRLQRTUPOBKTUVCIHPEJPTSVBXUKNUQIJTRGQOQELFLGWAFN");

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
    msg.setTimeStamp(0.761215632225);
    msg.setSource(23680U);
    msg.setSourceEntity(22U);
    msg.setDestination(3175U);
    msg.setDestinationEntity(114U);
    msg.req_id = 10508U;
    msg.status = 53U;
    msg.range = 0.477593477837;
    msg.info.assign("SZRUAJMHVCCOVOHVHAPMYFMXEUDJIAHTERJEHFCJAYTZUMBVYKIAQJCZMYIXSXYGSHCKPYQMGBHZWLLKSGQRNCSMOCWKDLSUOBDABTSUHOBGNGUURXTPVED");

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
    msg.setTimeStamp(0.75680480817);
    msg.setSource(42253U);
    msg.setSourceEntity(241U);
    msg.setDestination(63057U);
    msg.setDestinationEntity(97U);
    msg.req_id = 13595U;
    msg.status = 40U;
    msg.range = 0.224655145836;
    msg.info.assign("UBKGVVDGQUCXZUMBPZSAACEZTSQBVJLEJWENQVWNNMIMUGPLGHDDWRSGIFWXIQHWQZFEXVTUWKORYHYPCJTCNTDGEDRREYWHCZEXNGOXLMVHDSBXAIBLTFLUSVYTDAKPFDTDVNHLTNYRQCHFOYPYKFYIAGLOBOCQNEQMZKJMRZPPNMOXUFJUZKOKMJXCXHPHARAAEIUTYFYOKOTBRBFJHIVCJACGGKZJEOIFVKPRNZBPM");

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
    msg.setTimeStamp(0.0641115565963);
    msg.setSource(530U);
    msg.setSourceEntity(106U);
    msg.setDestination(49222U);
    msg.setDestinationEntity(141U);
    msg.req_id = 5632U;
    msg.destination.assign("JHQMKTVKIPDXIELHNFADFXRAPEMNOFWSTZVZPWQDSNFMLIRYTXEJWNGSMOCXQRFSRXUVQMQLHJBFYBETDKOGSONYCKRVAKLKZSWAQPFOUQWGLWDTUNVKSTDBJBEKUZMZAUBPRHTZXHOSCUJEXNTVHVAQAGWEVCMERIMCOQIJJFYZKBUPWCXTRZCHTUYLMWCGGNDVGHYDIPFSIOCLLOQ");
    msg.timeout = 0.348781967997;
    msg.sms_text.assign("CVRIOVZDPCUZIXLPSGNZYIAOEIYNIJXDHRUCBYCLPOLABOFCGTSGXTLHEZEGIVNKRZDHMWZMMDFIFUMZRWXGQUCKSDBLVLJXAMJNLHLPAJKHKUMJZXSQQXYBDAYTOZNWURTEEFUUNMBQHBOME");

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
    msg.setTimeStamp(0.991318800052);
    msg.setSource(27996U);
    msg.setSourceEntity(152U);
    msg.setDestination(19185U);
    msg.setDestinationEntity(69U);
    msg.req_id = 46472U;
    msg.destination.assign("QOFSHVKUJRUVWIXVYQRKQESBEX");
    msg.timeout = 0.987883378098;
    msg.sms_text.assign("ACEBAHEICHDWJAVDMLNMFISPIHFWQQYEYTOSRKKKHBCFWHPOWSMMQZQIMZTTEAUWHLZYFDZSTZUAZCSUTXZVKOGZORIBLODYARGGVYKKBNQTNSVAWXDNBBYVXYXCXMRQGPYCWZVYDCJFNXFLOILXVIUFJUKVNGEPXBLLNSTVDHNXAIRJRLQQIGHEEQSASUROANP");

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
    msg.setTimeStamp(0.477333463455);
    msg.setSource(33076U);
    msg.setSourceEntity(206U);
    msg.setDestination(30654U);
    msg.setDestinationEntity(254U);
    msg.req_id = 29483U;
    msg.destination.assign("SJFVUXOSTGFHZFANZIZWSALAUGMBNUSDDBQZVBGOJACWVHNPUWUNBYVGQQIEELOLWENHCYXDMGMQCADJPZXCIHKAYYRQRSMPKBVEYNOTHAXQKCNDWAYEKMNWKOOMCTXLVTYMBVWCHTBMCBIPVMVPHTIQK");
    msg.timeout = 0.141092074621;
    msg.sms_text.assign("PHGOFUDOEKHQDPAOCCNUMHELABIQDQRDUZXZFIWYLURKFRBUVKMIMDLBXNAVWSXIUBZTEIVQFWBCGQQSTJAQFOMAZMZPWDRTD");

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
    msg.setTimeStamp(0.569083618878);
    msg.setSource(19324U);
    msg.setSourceEntity(253U);
    msg.setDestination(53502U);
    msg.setDestinationEntity(223U);
    msg.req_id = 43797U;
    msg.status = 225U;
    msg.info.assign("JEPLBPBRDWUCNSPNGUAZORIPUKVLQJFXGWDHGHTDQAXFMXJRKMROJCDZXXIVRTVHGXLTMOIVOYGQYIPBENSTMILUGTQPVYMHJLPFBLFKOYZWBTZCYGSWIQPGHNWZAZJZTEKJKJHTDWAEUUDMFQOOVGKFDNNVYFOIHOZEPWMECJVMRKYHSUTBQEAQWECZSHSCNKBRVCWFNLMRLXLKUR");

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
    msg.setTimeStamp(0.778905918347);
    msg.setSource(36205U);
    msg.setSourceEntity(128U);
    msg.setDestination(59254U);
    msg.setDestinationEntity(252U);
    msg.req_id = 425U;
    msg.status = 133U;
    msg.info.assign("DDVSKXRWIBTFVDYDLHFSQCIXCJPBQIVDHUZITMHRNWGTBEYFEDCWUZPOEPBLGGUZLANUZWJZJCIRROBKYICQQOUVSHPASVNSANHESWGEHCYROIJWQTSNJCVEQQCTBFNBOMVJDODEFRUXMHJZSIUM");

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
    msg.setTimeStamp(0.560615737947);
    msg.setSource(44688U);
    msg.setSourceEntity(91U);
    msg.setDestination(53800U);
    msg.setDestinationEntity(134U);
    msg.req_id = 7372U;
    msg.status = 252U;
    msg.info.assign("ZSGIOECTMVBWQXWMMMPARHJYIPJEAIEZUKOJJXHCDNYKUUXKTUACJXIBVVDBBNWZJBVVSTKGKIBHWCFCGIQOYYIJUSEISMZLWDNXNVYQLTEFCTSLTOARKCOQYNBOXTFGQEFNRJPQPYULDZVMNUXSMCZSJMWVDZRQOVZCFUXGHHAGSYHHRTGYNDLSERLVBAAOPMZ");

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
    msg.setTimeStamp(0.0698190479432);
    msg.setSource(17561U);
    msg.setSourceEntity(121U);
    msg.setDestination(10576U);
    msg.setDestinationEntity(227U);
    msg.state = 236U;

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
    msg.setTimeStamp(0.488955537584);
    msg.setSource(22887U);
    msg.setSourceEntity(15U);
    msg.setDestination(29926U);
    msg.setDestinationEntity(86U);
    msg.state = 103U;

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
    msg.setTimeStamp(0.926132439192);
    msg.setSource(19668U);
    msg.setSourceEntity(55U);
    msg.setDestination(50958U);
    msg.setDestinationEntity(247U);
    msg.state = 134U;

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
    msg.setTimeStamp(0.354920461028);
    msg.setSource(14238U);
    msg.setSourceEntity(235U);
    msg.setDestination(25931U);
    msg.setDestinationEntity(122U);
    msg.state = 91U;

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
    msg.setTimeStamp(0.734819295057);
    msg.setSource(4564U);
    msg.setSourceEntity(153U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(58U);
    msg.state = 195U;

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
    msg.setTimeStamp(0.023013740275);
    msg.setSource(64983U);
    msg.setSourceEntity(142U);
    msg.setDestination(32376U);
    msg.setDestinationEntity(167U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.231137475262);
    msg.setSource(64381U);
    msg.setSourceEntity(172U);
    msg.setDestination(51550U);
    msg.setDestinationEntity(213U);
    msg.req_id = 385U;
    msg.destination.assign("VTUALDYRQLVFNGZPMYVYFBQILLIDGFSREPTZYCUNHUJAUDVBPOENUSWFMBQWCQYQMNVHYKQFYOWOCKXWOISBNDQMZODPNTKYATIIINIZSEOIQDHGKESKJOARSAJHUXAEHZTFXMORUJBKOXPZIKMECAHLXKRELCPLJJJVZPFCCAZLNSFXKUCFWGFDNATV");
    msg.timeout = 0.0901835429222;
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 122U;
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
    msg.setTimeStamp(0.892765996942);
    msg.setSource(62243U);
    msg.setSourceEntity(109U);
    msg.setDestination(24067U);
    msg.setDestinationEntity(190U);
    msg.req_id = 63539U;
    msg.destination.assign("GHIDWINFOLQPOBKLDROA");
    msg.timeout = 0.530367464471;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OXNORSZCFXKIMAISREYAELCCXWCSTXNHHEHSRBZLDYGLQZWSWDQVTQOMQWPTTMRJKUJIAZCMZVGEPJBBACNIUTLMOV");
    tmp_msg_0.feature_type = 99U;
    tmp_msg_0.rgb_red = 218U;
    tmp_msg_0.rgb_green = 13U;
    tmp_msg_0.rgb_blue = 116U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0185332248234;
    tmp_tmp_msg_0_0.lon = 0.273657518621;
    tmp_tmp_msg_0_0.alt = 0.374638456108;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0473796593213);
    msg.setSource(54716U);
    msg.setSourceEntity(165U);
    msg.setDestination(38380U);
    msg.setDestinationEntity(86U);
    msg.req_id = 53991U;
    msg.destination.assign("ZPSIADNXBOLCTUEJQRSZLLXBPVKWNJQHUYGNMDBJHAFTKKLEOMOGGSPWGEPNPKAQDTBICKERCKPSGQJWIECVJRHNGMIKXRRKYUATNNMQUMYIRXZKDVVLTYYFDWTMZASMNAEBFFANZFSMJORCAGVHLWIJZUIPBIJQVEWWGSMTCUOYRSK");
    msg.timeout = 0.745743652332;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 50827U;
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
    msg.setTimeStamp(0.849159918277);
    msg.setSource(63130U);
    msg.setSourceEntity(218U);
    msg.setDestination(3628U);
    msg.setDestinationEntity(201U);
    msg.req_id = 14082U;
    msg.status = 233U;
    msg.info.assign("NJPUGKLTILEVNKNLCXURLOESCXCIDHWEPYTKJWDNMNMUURBYPMFIUNNZBTKBBAYAOVUHAQWORKSPBUPBJ");

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
    msg.setTimeStamp(0.942279593966);
    msg.setSource(61098U);
    msg.setSourceEntity(35U);
    msg.setDestination(65233U);
    msg.setDestinationEntity(51U);
    msg.req_id = 6812U;
    msg.status = 51U;
    msg.info.assign("KFDHVNRWGEKMCGVDVBQXWKSJPRISAXTXUYWPJKCLAJUFDQZGQUEBR");

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
    msg.setTimeStamp(0.12537163797);
    msg.setSource(17729U);
    msg.setSourceEntity(156U);
    msg.setDestination(257U);
    msg.setDestinationEntity(9U);
    msg.req_id = 46854U;
    msg.status = 162U;
    msg.info.assign("IEQJKVZIEKPBSRPFRKRVNYMCHVZCMYGBDSYGSR");

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
    msg.setTimeStamp(0.0543459792147);
    msg.setSource(62376U);
    msg.setSourceEntity(85U);
    msg.setDestination(8282U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.728281886095);
    msg.setSource(55853U);
    msg.setSourceEntity(2U);
    msg.setDestination(39866U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.0889714765981);
    msg.setSource(1619U);
    msg.setSourceEntity(237U);
    msg.setDestination(55799U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.44900081825);
    msg.setSource(46622U);
    msg.setSourceEntity(100U);
    msg.setDestination(36502U);
    msg.setDestinationEntity(3U);
    msg.plan_id.assign("WOKTUSAQQCNXFHUJULQQECGMXXIBJHNCNQCELCWHLJYZPTNDCOYXKCERZWWLFKHBBYRPSPGAUAVMQSUIIGRBVNMIUSGZATDBONVVMOVIJWBSYFLSFOLUPZFWWBIOYL");
    msg.description.assign("EVSGBFQRBLJFINZXLPDGJOPGKUMKNKJPWZTSUAUYMYQWHZYGOGQXXUAGFOZXONWATCEGTVFEBYTAXQKOTHSZCMAJYBDOWEETSDRUDEEZVQILVHWKPVIHAVBUFDLDFI");
    msg.vnamespace.assign("DURECNYYROSPBZRQLGYXJAOKVIKHJBCAYCSWTLTNEUQYKCWDIJQPTRVOFRSAQZEUTPFKNZJZJOXGUNPEIZWGOHRVMOFAQDCELTMXOWSI");
    msg.start_man_id.assign("GSTGJQZDKSJDVMFHMIZUDYCHNBNGQIAZPMRJBJSYIOGMLYODPALLYFYCERKPFTAWEWKJXJTIHVHDETLSNBTYUPFXNATGMUYKDOUZZCLSZYQDCWAKFOSVLVWPAQRLGNQVMNXFERHBXOUKJGPPBPYRQZEGHXKZTSVOXLOCSUVXPMEKRCIMBGXUETPHX");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("TPEHTPWUWEACMHVNTBZDUSTCTHQFREMJFUVCOXVWURRABCFBGKNJZRICWSHTCWKVJS");
    tmp_msg_0.dest_man.assign("KRFGXRSVUVDEGQISFSGKVMNOJZGOFZGCTIPVYCPINEYIICBNNUIXJOEUJYYBEDITCNGVXWILCAGAYBXBOFKBBAEASQDHNDSBFJUHZVHFMEPPUJSLXGKXTZROFCXRYEMLTAPLOEZWKMDRIOFWLWLFXRNKCQQMNVYTUPUBASDSHZPLDRQDTMKPNTMFQCWQKXTPIDBKZKUORJAWBVQMSHZAHJHZRWSHWMAJYMEQAGNPYOZVWRTLV");
    tmp_msg_0.conditions.assign("PADZQCEHEWIIHXZRLJVIHVJAOWRJCCNCFVIBLUCYYTAHETUGSKMVMUFBISIGKPEUSHGPJAAFPGPMJCDGLWLOOQTUYODAHXISVRMQXUZNOBKBJDWXAYFAWBFGLSWSATSCBIOAMJPOLQZGMSUZDBKYLEZYKNLFMQQIESPFVVTDCNHXVNFTBQXGKKXKOBSEYRR");
    IMC::UsblFix tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target = 44490U;
    tmp_tmp_msg_0_0.lat = 0.643336879273;
    tmp_tmp_msg_0_0.lon = 0.271249255274;
    tmp_tmp_msg_0_0.z_units = 220U;
    tmp_tmp_msg_0_0.z = 0.666856128143;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::FineOil tmp_msg_1;
    tmp_msg_1.value = 0.539229780014;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::IdleManeuver tmp_msg_2;
    tmp_msg_2.duration = 43562U;
    tmp_msg_2.custom.assign("EKVPHCBFNUCVQVWCIDJIBGVCUXMTXWOQJAMKMTTPANMGJZLGKFZMHDPSQZWPAFMLVNESDEQTIFOCLDJSUGPEXRCYROKEYSUDTJLFGQVXBVUSYSMAXQCEOUAONUX");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.47505469823);
    msg.setSource(50024U);
    msg.setSourceEntity(60U);
    msg.setDestination(21582U);
    msg.setDestinationEntity(187U);
    msg.plan_id.assign("WZRUYHWGYNGVBBEENRQWEKPHQFSVMZVKTNBZFAEVCGBZBPOAODSYPYKIZNUYRCUYYDWMNXVEZZSQCXEKITLPOADRILXIEODUXHTJIPYMKLIGFEGQQBLMHMHGKCQSULUZXQCMDIHDTCOURJGWMRSFXVXJSUAQKDQFOTGFRBTSOCIOBLAHGLVPQJMIN");
    msg.description.assign("UPCDSAKDLQXVLMVDUGURYTNOFBLEWFLLNORHISPVSKZTHFTRUUKJWHPKNYURXDQTDQQGLYHKQGPFCALZJZMNCYEVOSVYZFOMQBJEGBDAJYDOAWVVOCYHIBJGKINLZQAWBEFZWAPINRCZCPYJWGRNGBMEIEHFXQVXSTXHXUDMPBOZTAXHBGSQPVSACYDECNZETHIXOKRMKINIVOMJUATRJPJTIRBKOYSWWGURSLCFTUFEE");
    msg.vnamespace.assign("KFIUBYVTCCCQRESUNJJZSASGGNVNMSPQRZWORVPAHAJUSIRJNCRUAAMWOEKOODBCFQYXFVUPNRULILCHTLXESJXKBKUXTYYNHHCTWBYQFVVFNJVVQRWODXGLUMSTITGWWWHJARZZPVZZFMLIAQXCWPADQSZSDRXKEJPTKYWNMEZUKGGNMBLDAYPPIVLLQEUEEAHOXDPMBKYDXBIBOTIBWHMEDOMF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AGMIHBZSGRZUXEZJWXHSGMKFKAFXNEZINOLWUZTLAQTCYCRVBOCTTJUEKTLYFPXDYQDPDJHFTCVLYGSYRLMNDOQYJQEPWFIBBDTNUANWKTCOIWOSDVQBNIZSOJXCFE");
    tmp_msg_0.value.assign("GPOVHNCDWCOANBPSRVQRGWLQIFHLPXEVSNJUFCUTNXUMCOQQTCTEPXZVZYQTXMZKPHAVPGFNDCXHRUDYWNHJLBMJLEREABSBELLYFFHDOMJYUHWMBMTSQCSSSWTOURJIFIATCYVKBGHJEGODWKILJKOYMJMMSBHAYQIOIZKPLDILKGZYZGYAFNDLOVIFBAPKAWWSZKDAHVBEZVDCVNUREJGJRQZIXF");
    tmp_msg_0.type = 183U;
    tmp_msg_0.access = 184U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MSFTYKYVEVBOOBPVITJXEZPJOEYONKKFVILHYVGKLZUKXHPIJTCPYVPLMIYWUNURPUKYWOQDOCQGZDXNMPENHTDQZJFFMLSGJVMIKPQWZXTHGWJIRF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("JSFTNKXYLBUACENETATHXXDWZGQUXBUEJYETYVSYHRTXDOSRHFDHTLLRSBWIPEQFNIIQWCSMDFIGUBKUDNMLJMIUSJNMZKJUJPMJPOFAKEQBNNTIWNWCLSPCRZVAKMTLCOPJKWAZCZZGPJXHVPQJSDRRUONYVGDRCAIMIVGQRTBBEYORGVLGWPAFSRZLF");
    IMC::Dislodge tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 5341U;
    tmp_tmp_msg_1_0.rpm = 0.0755413989021;
    tmp_tmp_msg_1_0.direction = 12U;
    tmp_tmp_msg_1_0.custom.assign("DWLBJKUNRBXLPAQRGRVMFGUBQSVCQGIPRKXNCGTCJHMMYALTLFMQIMWYMBBUDVDHNGWGXODEIOWYEUOWJZOMOGDVLTQZEYWOFLCFTKFBUQDUSXDCKEJRTYNTTTPYVCHOCKDHXFYOWBNWJPAWKAPPUQUGJLNAWKVIANSPNKRSIYIICVSZGSFUZALRLLAEIDMD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::TransportBindings tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.consumer.assign("YPRUMGBKIZASZLOAJQXDGOXOFAGKQIXLBYVWMJTPSNXBZJTXAHCPUHDW");
    tmp_tmp_msg_1_1.message_id = 14591U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("UGPEDSAKYBQPXJRKJNNBEXBTGGAXWHEQFWJSN");
    tmp_msg_2.dest_man.assign("FTDVJVRCJCJZNLAZJKFYCPWNARQIDWEGVZLVTSIXNONTBGKABWQLUHGSCFLHODFVLZOEROBDXOYYUPUBENPMPY");
    tmp_msg_2.conditions.assign("GMHWYOAKHSJXOWRKXDYGGUET");
    IMC::SessionStatus tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.sessid = 3067506774U;
    tmp_tmp_msg_2_0.status = 79U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::RemoteState tmp_msg_3;
    tmp_msg_3.lat = 0.422818352094;
    tmp_msg_3.lon = 0.158370626511;
    tmp_msg_3.depth = 36U;
    tmp_msg_3.speed = 0.76120291948;
    tmp_msg_3.psi = 0.637819484088;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.891716862566);
    msg.setSource(28598U);
    msg.setSourceEntity(56U);
    msg.setDestination(25135U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("WIZDUSHCSEVXAKRXUJIHAYLFPBBFPOQNU");
    msg.description.assign("VSZJKONJSGOGCNKWGSPNXLEHPNFIJCTGDMEVKGDOAQAMSFXOYFIHIIXVURDYWXTKPRUVKPKKFOZNGBMXTBRZHLZRRVUTHUMMZSNJAYBAEGNGLQRXHHTJXBJUUQIEPWMDSXZWRPMZQHQAQJCQILKECVUFHAWOLNCZAYTYJTSOSHFERYVBMUDDCPPGALNUBNQDWOBYPS");
    msg.vnamespace.assign("NAGHXAWXHNSZXFJLAVQYLWUBYCKUTSTWMHVKCZKZOIXERNLPLITOEIGSAOHQATQDT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KRMEOXTORIXUCWZPLILAFGLYCX");
    tmp_msg_0.value.assign("BWFWMNQZDDDPBGOVSMYBBVAOJFWPVTYIETWETQNBB");
    tmp_msg_0.type = 244U;
    tmp_msg_0.access = 215U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XAHFDIOJZAOPPMVWDCMHJRIJHTOTWKIIQXWNMQEIKETSQKROYFSOEACPK");
    IMC::Dislodge tmp_msg_1;
    tmp_msg_1.timeout = 31066U;
    tmp_msg_1.rpm = 0.764165533696;
    tmp_msg_1.direction = 221U;
    tmp_msg_1.custom.assign("ITRYHAOSXKOCLCQQROYJKJTREFOTGQBAMWQNXIBZFEVFDGMXDDQRGLXEPWOSASOCDUGSNQBKGJTKJZAVXPNFIALJNRSZOJUMSWLFMRLGHYMGNYHUUWPWIEYVPCMXYFUBIABHKLGEUOHKTVTVBEFHBRDHNIPGWCQHASERDGOTEUTWOZPXS");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::OperationalLimits tmp_msg_2;
    tmp_msg_2.mask = 85U;
    tmp_msg_2.max_depth = 0.728056166959;
    tmp_msg_2.min_altitude = 0.358815286242;
    tmp_msg_2.max_altitude = 0.215874804322;
    tmp_msg_2.min_speed = 0.533066472171;
    tmp_msg_2.max_speed = 0.399927172376;
    tmp_msg_2.max_vrate = 0.898972497404;
    tmp_msg_2.lat = 0.549975001434;
    tmp_msg_2.lon = 0.230543508866;
    tmp_msg_2.orientation = 0.902466644476;
    tmp_msg_2.width = 0.627589532507;
    tmp_msg_2.length = 0.816027611278;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.869150701419);
    msg.setSource(16271U);
    msg.setSourceEntity(240U);
    msg.setDestination(19476U);
    msg.setDestinationEntity(113U);
    msg.maneuver_id.assign("FZSLLCIBCPGQJTDJNCFBMFPWJXWMHCCQFXVNUVAESITOMRDAPMJHDVJJICPNVEUREJCUJISSVEBYOSAZTALFYTTOYMIXRDGUIRZVDXYPZYZMCHIDEGAUWFPXEUOQNRBWHXQWLWBFKTASGMEHBPVANDUGKGGXYN");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 53548U;
    tmp_msg_0.lat = 0.919954818367;
    tmp_msg_0.lon = 0.318692681779;
    tmp_msg_0.z = 0.976460137762;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.speed = 0.29557072301;
    tmp_msg_0.speed_units = 15U;
    tmp_msg_0.custom.assign("CFCTLEXXWSTSBIYNRQWQEMJILXISSHPVZGMGHIGJJPPAQGMOJYZOICLCECIRSJLUDQYTKUFWAZAUXBZICUDWFR");
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
    msg.setTimeStamp(0.462684930332);
    msg.setSource(56761U);
    msg.setSourceEntity(47U);
    msg.setDestination(7850U);
    msg.setDestinationEntity(10U);
    msg.maneuver_id.assign("CDONGYICYWRGUZNFADCSURQLWEGFFWQGPKCHXVWKFTBXBQIDWOUCLMAEUXPHYKUKKIWTLWSVVLCOMNPGYPJZORMZJSNBLOTJLWSECQAHGDZLXLAPQJBXDNNQVETUKKOPEEHXBXUIQBANPRHIRTFJRLPVSBXZYCKMSDVVBZACETQOEYWFICNUOATRYSPQMHGFWXOKHOQJTAVSLMANPTSVYIZFBDHKGFFDGY");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 40912U;
    tmp_msg_0.lat = 0.642563229501;
    tmp_msg_0.lon = 0.507125534832;
    tmp_msg_0.z = 0.842791509633;
    tmp_msg_0.z_units = 14U;
    tmp_msg_0.pitch = 0.0336879531122;
    tmp_msg_0.amplitude = 0.711942291734;
    tmp_msg_0.duration = 13437U;
    tmp_msg_0.speed = 0.936713077607;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.radius = 0.647373887577;
    tmp_msg_0.direction = 215U;
    tmp_msg_0.custom.assign("XPMNFCDEVKVZNOMAWHKWDRDNYSPQGOATGJJBFXYUAGPKLGTRBPVUJQCXYALKKHIIUM");
    msg.data.set(tmp_msg_0);
    IMC::HistoricData tmp_msg_1;
    tmp_msg_1.base_lat = 0.987509263516;
    tmp_msg_1.base_lon = 0.933725959384;
    tmp_msg_1.base_time = 0.815701317139;
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
    msg.setTimeStamp(0.629434496822);
    msg.setSource(45377U);
    msg.setSourceEntity(240U);
    msg.setDestination(20072U);
    msg.setDestinationEntity(94U);
    msg.maneuver_id.assign("IWDFEWBAWJNUGEXVERKOEIZKPJXRJVXQIDTEBLACKNWKGKERKJHPIBNIVVVUZAHSQJPZTBECYCWTPFFRZKVHHHOVNTQXI");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 24675U;
    tmp_msg_0.lat = 0.881983636683;
    tmp_msg_0.lon = 0.885703924985;
    tmp_msg_0.z = 0.493584938634;
    tmp_msg_0.z_units = 135U;
    tmp_msg_0.speed = 0.487317967424;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.syringe0 = 3U;
    tmp_msg_0.syringe1 = 53U;
    tmp_msg_0.syringe2 = 114U;
    tmp_msg_0.custom.assign("BGQTOTFMYLXNVQFYACZGPIJAUDIBDWACMXIZYNRADVJMOVRLHPVJTAFEVKQZEHBZXBGGTWJSXNVECRQWAZELKS");
    msg.data.set(tmp_msg_0);
    IMC::SetLedBrightness tmp_msg_1;
    tmp_msg_1.name.assign("GXHDUMLKMOJLDUVQANFEDZPWJEDNLNJFMZJSJSBIG");
    tmp_msg_1.value = 232U;
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
    msg.setTimeStamp(0.51992556052);
    msg.setSource(31269U);
    msg.setSourceEntity(173U);
    msg.setDestination(63286U);
    msg.setDestinationEntity(7U);
    msg.source_man.assign("SSGKUWDJBHYEAVBEJGUAOTZVQCXWQXRVVBADOIWKUZSKVYKHSMEXVBISOKYDZNMKNNPMSYERLGCUREBADQMRBVHLCGBGHDGEOTXPJQMVWJNPHTXTYZAEPLQORJCFLPDFBIMFOZSFXZRTNRASHJMWKOHPAODVLHNARNUIADNZCQXHTCCQZYWTFPMFTCJUBPQ");
    msg.dest_man.assign("ETUPAAHMTDTKNJEKNAVIUFXPUNIZPMQEBREQKVYLROIJWPCZYCKENFYIXIGVAWGZYMOTTJZWRGPRJFRSKLURQWQVFRHLZPWMTHFJCDOALJAMTQOHQFGGMEYWEMSWBFCLXLUZDLHVAPTSSVBCPLSQYPBVGUCTZKHOCXIHFSYQHNAVDJBMEYHGXCJBYDOIBRDULNKRVFDKWNDYRCGWBIKMLCIDWHXNDOKXTISBXEAZXG");
    msg.conditions.assign("PVQYZGSAOUZRKVLXAWRXLWQTWMJEJTAKFHFEXDOGRDLTDFKGNUYTYMECWQMZZELJQKVTXFCBRUYGCHAZKXWURSFSVNJXDDWOYGSPIPXLLTZHHVPBRQETSGGORC");

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
    msg.setTimeStamp(0.57691058262);
    msg.setSource(23315U);
    msg.setSourceEntity(137U);
    msg.setDestination(19769U);
    msg.setDestinationEntity(36U);
    msg.source_man.assign("NECGLPRJOUMMEGSXBPCUGVMXUAVQSYQRKQGNRFAZRMYLFBTHDJNEXFUTLIXPSCWZKQUXWCIQBJSSHSKHQWCCDZYGYCVIBQORFCFDVCVMLXMZFKHGJKTYWCRMWZSOARGTZBY");
    msg.dest_man.assign("VMADUBDXPBNBDZLYJQBJIYTNTBYXECIVNYNTLATBFFEMMGDHRTKZKGZLBEPQLE");
    msg.conditions.assign("SLWXZXIWJSZVCVIEMJXITUZEOFEBEGZPCAUHRHWNJLPTFXKXHIABKQMLASREJZRDYGNTDFCLYAYQFHLEJCQVKODQRUUYAEPKLMHNZVGPUMTTPBQGHIRVUJSBD");
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 214U;
    tmp_msg_0.period = 3308608209U;
    tmp_msg_0.duty_cycle = 30667795U;
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
    msg.setTimeStamp(0.952556292366);
    msg.setSource(45704U);
    msg.setSourceEntity(167U);
    msg.setDestination(53850U);
    msg.setDestinationEntity(157U);
    msg.source_man.assign("ESWAKOYBJDZMNRKSGXULQYLNOEIAUJGCKSMCRDTLERWWMHHSZNVYVPLMXPCNPDYDZNSMIXTHFKYUFOUGQFWAQJOLUDWITSSGCEXJOKGTMHBGEFFKECVFYWXATWHCVVFOFQECQIIRNBWMDTBUTORPZJVJPIXNBJLRJPMKAKHEIHXSRVZVTPLYUCRJAOHQJRXIITQSHZGUIHOPGRYTMDEBGSLMZFOPXCPZVXVDBD");
    msg.dest_man.assign("VIOCHXLQLYX");
    msg.conditions.assign("IUNZCOHLMMQAOSTIZHKTUNCAEXAEJDGOGGDBPINYAKULPCWZCQZPXSJRHZPBTFKHIESCLKQGZSVEGCAWKSVHTXBYMZSRXTDJIIHAJNJFFAUEWRHIVXERLBKIMYVVUOQLFDTBFHTJGINIQPWPZCVYTXXLBYQKOMGDMRMTULOGODNDXSBBCLVPDONESUEHGFYKANGUW");

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
    msg.setTimeStamp(0.613987452104);
    msg.setSource(20786U);
    msg.setSourceEntity(193U);
    msg.setDestination(19194U);
    msg.setDestinationEntity(92U);
    msg.command = 103U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HCDGKTGZDOKWKFECGZLOKXUSTYDNDUQNZAPQGVWEGOEJTOELZUVZPCMUAAVFFOKWPAFYMNKWNYBAQICZHVNRGCCKOQAFVWJYSBMHHPEQMBWZTINHULLCNFWTAIFFQSBXXKBVWLFXJYUBRAQUQHHKCDRFMPYHILMYSIANIEVXIDEJBDLPJUKLDVGZVZLSJOIGTJSTCMRGJHBJSRROZVODPMSHNCRWPUBRXAEPYXLXXIGBSTTYRORTUI");
    tmp_msg_0.description.assign("XBHVORIKTGFYANDHJWORHNOYTEUEKQGUFCAQWAOUPI");
    tmp_msg_0.vnamespace.assign("OJASMTSSDIMABPHGTOGVVORKVSQOIQCIOCPBWXPZKRHZOEVSSAGBELVJDZGWXYQYCRYFGLYFHNLLJLLCBVJDFUSMUFPXRFWWLNORXBUTTNSATEELYVHHQNBKPHNKXDZXXKPRPKWGHJUIUQZBFSUDQAUWHKJEDMUNHZTMZD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TDZZRMXJUWVLNRNUXXQNECZKWWXBSZFGICFQNKZJNAFXLLOSLOEYJUVFI");
    tmp_tmp_msg_0_0.value.assign("HHCXBGODQJZCCOQNSAJOHLWCECJVBALXLWWIRZBJIPTBAYOFTDRFXVSTNMLGSVUIRHEBZXKMTIJHPRZWDESXSKDYSQYHSFIDRKPZGEKMPCAHXUGQFRKQJCLEZLDTDWQSBCFTPIXJFNZUPAUEAMPMIPRHUNAVYORWMKFQZUFMLUOUBMGTPVYHNOIFWWVBLENBSGOAMMYENXKKAGXDJCDYQVRURKEPUYHSDNLKJWGXTTNAJTV");
    tmp_tmp_msg_0_0.type = 127U;
    tmp_tmp_msg_0_0.access = 112U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PNIDDVUKUXEBJEQMPXTVNGMMYJJZGWYMLBCJAAISWXVLUTMSVSLOJZOUVQNUEFNZFXASOZXDDJVQEJQIAIELCAISTQFFCIUPGGMDWITRGCDRZQRAY");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HKNHKKRNPIRXASQLFRMUGJOWQDLHEMTSLLHRBBUWIVFUUDZADJYZSXWEQPRVLQGGYQXUEFDKOVZIWNCJRUKTKXDCFUIVOEPPYTTNFDXVLMZBXOJMIEJDMVASNOOSHEONBQGGYLQLGYOPTZQGRWPSHVCFICAPBGATYESEQVKT");
    tmp_tmp_msg_0_1.dest_man.assign("QFLWVAEXNLFMXNZ");
    tmp_tmp_msg_0_1.conditions.assign("CKWIAMDYQEUAQQVPDBNDCLQAHVXWYICOAFXVNEVERNBKLJZZYIMZWJZSRARNZFVTNTDQKXSKSJEXLCAYEGYRGHBYYBEP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CompassCalibration tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 32965U;
    tmp_tmp_msg_0_2.lat = 0.713186491795;
    tmp_tmp_msg_0_2.lon = 0.104109702869;
    tmp_tmp_msg_0_2.z = 0.663081358476;
    tmp_tmp_msg_0_2.z_units = 248U;
    tmp_tmp_msg_0_2.pitch = 0.548530642818;
    tmp_tmp_msg_0_2.amplitude = 0.127956333822;
    tmp_tmp_msg_0_2.duration = 36292U;
    tmp_tmp_msg_0_2.speed = 0.636012432558;
    tmp_tmp_msg_0_2.speed_units = 93U;
    tmp_tmp_msg_0_2.radius = 0.922329237162;
    tmp_tmp_msg_0_2.direction = 245U;
    tmp_tmp_msg_0_2.custom.assign("LDKCFWFVQAVENLRMMSKTDPPUCJDNRXFIPCDCTRUKGTBVCLHKIMZCPMJYHJZXKBLSKBRNDGOATJHAPHSRGOEALELQXJVZXHODXSOWFIGTIUURGMUVDZMGEQHOWYLZBXQLNWPSWXBSQQRPFKAULQNYSNGHCQDAPVBIYKDBYHUYTZMATEPORNEZIGIYGFIWBLJOMWZA");
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
    msg.setTimeStamp(0.625382391213);
    msg.setSource(53209U);
    msg.setSourceEntity(223U);
    msg.setDestination(34091U);
    msg.setDestinationEntity(43U);
    msg.command = 181U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EUAZYHUOJIYXIPLOTPRLPNFMCQDNZFHYZMNASLVOQZVXSNCVVQDNDZOIKPGKTFIFNNONCMUBKWSXPHETGVPLPEBYKWO");
    tmp_msg_0.description.assign("TCIWFEQWKHSHPAXVXRLUCWDMFUEVYBDPRKNSVSNAGVFQJBXDJZRNQSGWMMDJENNTHLGGIMGBJYJLVAOCRODJCODBHOUOXBTYDYIFLKGQQHOLAOBMKPHXIKZUWZOSBWQCAWTFTIEVYYGHIWHBUGCSHZAAMEBSNPRWZMDKLPCLQFJTYICAMRGZEVRTIUTEJFRYW");
    tmp_msg_0.vnamespace.assign("CKYFFEGLVEONRVGQAPBHPONJXNDQAMFBREBJXBEOZLBIQZBCORCXIYVTLSFUJISUKQOWGF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IYUTAABALJXVISINFTDKFGSOEHGTMSHNNYJURKOIGEDCHWVPNGUKRLVJTKFFCSQVRPZWVZWCNPBMMJJOGECQDDDZGGHQTWRDOZCXJFVHNCYTLNQTCLEGHROBUSLOQKEPBRXGACQIIKZMZVILEUFBSCQRJFZFKTPYZWDRHXLXBIEMSSREZUTLYRALHUFKOWOJGHVPIYMWHLJXEVXWNUPISXPYFKQYWKZUVMNBWQSEAMQOPAPUYBTBAXMNBX");
    tmp_tmp_msg_0_0.value.assign("HPZTNXJTIDKSHMCFSAFFLRWRXFHRLPXRBJXUNQKQUOAJUYCQQEWPWTQRQERMHYDWAVSMVMORRHCJVDKZPVBMSSYQYLHONTVVBGHGEJCTFZRPOIA");
    tmp_tmp_msg_0_0.type = 223U;
    tmp_tmp_msg_0_0.access = 34U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QDXDPMODFXNJLJFQFIBPVQGYAEFWXCBDKQYLIKYUGDTKAWZRCNEBXHJTKOJGMOOMPVGEHEUHZGXSQCOQEZDPTUZGWKIANESPHZCINRCAFMEXZHAOVPWDIVJYHCYRWYUSLWSEXIOGMLGWTBRNPMQKEYVVTYLDFOZLRLANOUUHWGIKFBNTVIFW");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("NUWLWDRCRXTEAYCXKDQOQRCEISUD");
    tmp_tmp_msg_0_1.dest_man.assign("PYCWJMZPGVMBSVXKRNLYETICBZOLSNPTENNIAEZTNGFRTOBIDDAXTFCBERUISQFCXPTFHLNNKXEZKGJVIIPQSIQTWZ");
    tmp_tmp_msg_0_1.conditions.assign("JPTXBHTOCQXJHYIQUVGSUGPYGULEVGDDFCLBNCVKWCVTHSAHDYBLVBOZVDA");
    IMC::HistoricEvent tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.text.assign("PIHAFEWKUOUSRILPVUGEXZBLAVWVYZXVSKGLAWOESVCTSNJFYFNHQCIQWEJSMDMGAICFZDELBRZBDAWKYIRMQWKXKYVVBHIKNIMBVBUOFMOTXCWHOZXEDNAKDGBTCUKA");
    tmp_tmp_tmp_msg_0_1_0.type = 54U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::FuelLevel tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.707399290334;
    tmp_tmp_msg_0_2.confidence = 0.674475310211;
    tmp_tmp_msg_0_2.opmodes.assign("KPXHHEHXDQIAUDHUMLPNEXHQBPF");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.44158207761);
    msg.setSource(32848U);
    msg.setSourceEntity(30U);
    msg.setDestination(42717U);
    msg.setDestinationEntity(75U);
    msg.command = 211U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TUNDHPKPOUJTSEVBVLVLLNHHXCHOTQXVCE");
    tmp_msg_0.description.assign("DWXTWGHFZXGMINEYACRPLOPRANWPMFDMWLEXIHZOOTDENFCJQFJCTLBYWZDXIAYARVCKVMFGGRWMCQPOXBAZSBGTPUFKQLNTYOXXMLKMTESPCDAHRPHPGDEZATBIVSTRCSQJEYEYRBHXKZFMKRIYSJMNVEVSQTQBVSAOXUKQIAFUBGUKJZLDN");
    tmp_msg_0.vnamespace.assign("CGUFUJBNSGMWYGRYZOJXELLSZHRUDRBFGSKAIJLAZNPDODWWIJDDCXSVHCICNXLLQYEIMMHGVBGIBMBTGCZTDRTMWDQNEYVKYTCGHVPCCIEQNLFJFQRWWBQYSOXOYULRVHNZOHVMIUECTQAJTMQ");
    tmp_msg_0.start_man_id.assign("FQYCHBEILHRZKTRMCXQWHJYBBFLOFMYPNJEISAGNENZOXETSHLLCDTKTEKXIDRBZHIZNIKVTXZNWHKXVJSXPGQEIDBPDPAVVDKPSABXBSQLNULOSOOJCGGXMOEJHDIOQGUMPPNAWUHBZTYOAIYQTJKMVRPVGXVYVGQZLUFKSGNEWRDJRFDIGMHETJWDFICDNBPYACSCEPJTBFZJLUW");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("RCXKYQTWGKVPHFTWVFCUYRBRNZJUHGORLEJHI");
    tmp_tmp_msg_0_0.dest_man.assign("KIWVTOQCCEJIXVEMOGGLPRSTBBRNOJCXHUGDYEVDBDATFJQMFKPJLHBYUMSVGPSEXTECNJIUATBZWIXADAHCDRVLZXOXBMYVUMAHZSXUQGNPGCWSABIQPZOOVWSVTERRNZBKFMFOXDDFYELCQOHWLNIQYFPKKPWMGDGBVFJLKBPNRPGJTQHCPTSSIWYEKEODWDWJSTKRIQAWUZH");
    tmp_tmp_msg_0_0.conditions.assign("AYTLYCUXMDXHIGZMXVKJGEBCPADXRWZJCFQPRSBFBXYJSKQEBQZMMMEQENOSHUUOEFXRDOYXUVLARVNWLAIJKTUIUDMQSLLHWTCCGVASBSZDYOISTGFFELSPXBSJGGNZOWJQZRATBZLRWOKUYEVAORKGQGWUCTHPFKGZVHIJDKVNIIMI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::UamTxRange tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 9107U;
    tmp_tmp_msg_0_1.sys_dst.assign("UQYCTVLGBJTOWQUUYHQHHXYENUAYADGBBIFWMNMZUMGEAKOJXHPGXYEKUYURAMXTVPIVTWEFCHFEROJVFRKLSMWOBXREAWQINBNDGZBSQPQBFAWGWTPMUVDBHPPJYTJMIWCKCKSQKQCOHFIXDOUEVRGKSGFRIDXZFORPHRNLSZN");
    tmp_tmp_msg_0_1.timeout = 0.891946536465;
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
    msg.setTimeStamp(0.737696090957);
    msg.setSource(54864U);
    msg.setSourceEntity(81U);
    msg.setDestination(53405U);
    msg.setDestinationEntity(241U);
    msg.state = 239U;
    msg.plan_id.assign("LHFUWYGOBLWDXIZWHBXNZKXPMANMEEQRRBJRTQVRGTPGDGJSZBVVNIYTHTHVTPQKDHBALOCNWJFNQICXFXIWNKPGMJKAPZKHZCZPCQURDEGYLJLFAYDRPYDOVUGBSIUMINVZSJQQXDIWIWWQMYIVOSVCHPOMMSOBBETOSHLATAVGDZSNEWLXLSXEDHYUEKYUXJEFFML");
    msg.comm_level = 102U;

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
    msg.setTimeStamp(0.361493229354);
    msg.setSource(63182U);
    msg.setSourceEntity(140U);
    msg.setDestination(17353U);
    msg.setDestinationEntity(35U);
    msg.state = 221U;
    msg.plan_id.assign("ANFKVJKLDPDGHSAICMUOBCCAYBIZJXBPMPTSNYFEAITYYTFFFQHIGRTUPHKDDIFZTCBPZRLWSTCQSDHMBJPYFAHDYZEPHPVGROJZXBTXHGNOUCGVUQSLESOIXLTMMNKAZRYHEWODUWEGKUPRKWMQVWJJLKURJNAXTDGLXQHCVWYPDCUAINWVEWKGCOVXEOKBEQSVQLZFNOWGTJJIM");
    msg.comm_level = 237U;

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
    msg.setTimeStamp(0.647641417358);
    msg.setSource(27884U);
    msg.setSourceEntity(68U);
    msg.setDestination(34673U);
    msg.setDestinationEntity(67U);
    msg.state = 87U;
    msg.plan_id.assign("JWCLMZURTPLOIFNRQDHYXGRPSNOZMMSLENEJGVHEQYCEAUQWFAIPXTHDHJISRWGBFYKAQTCTNQZITWOAMKCVSVUEMFJXPHGBMJDALDWLVEOOHQMEZBIJAPWDHSUFKYCLBRUTWFFRCNCDRXQVYGQAPTRENBGVRKAHWFZTFVOZ");
    msg.comm_level = 53U;

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
    msg.setTimeStamp(0.43248801787);
    msg.setSource(52207U);
    msg.setSourceEntity(89U);
    msg.setDestination(26686U);
    msg.setDestinationEntity(118U);
    msg.type = 72U;
    msg.op = 12U;
    msg.request_id = 14445U;
    msg.plan_id.assign("ZARMRJIQCPGSTMFIFULARCHJFLBWWUNOKAMSTDOEENUFPKNKCSVEPNEQG");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.684537916266;
    tmp_msg_0.x = 0.61531002663;
    tmp_msg_0.y = 0.00694623750688;
    tmp_msg_0.z = 0.874501559034;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LXWXDQEXAIPIBMOIDLUWMCAYMXMOPEVNOENEYKBRTXSMENZDQWXJBUTPVLJZZDBRDQVPLIVSWFHRCVIQFHAKIFMBKFYBBGGJCRTKMOTRFXWKQWBIFOFHZVVTSAOJBXUNQCWJFSQSGMQLGHNDYVYTDGPYFRTKUJRBLDNFHOAAAYQZHIXOWIKPAACCSNZUCPEIJRZV");

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
    msg.setTimeStamp(0.370726624424);
    msg.setSource(60231U);
    msg.setSourceEntity(250U);
    msg.setDestination(5436U);
    msg.setDestinationEntity(194U);
    msg.type = 121U;
    msg.op = 61U;
    msg.request_id = 58680U;
    msg.plan_id.assign("MVQURQDNFISBJVWLGTSRAOFLDRFHTIWHILJIDRSXCHAZTMRNDZJJVQJPYUQMELKGOCQNCBGPDUTFUWJABPJHOSKIYKBBDTEPUGPWWYNKYUYFAGACKTSFMAGGDZHMLLLTAASECOLKCWZFYKHUCWVFXXCDRIWLVPWKODIEBJJ");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 5959U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FBGGEUFPDIIXDAQTSNQHJIEBHJPSDHXAENHDYKLIZYACGQRHOLXVUFNHDEOQUWPNSNFPKWUMBOMINIJYRFMTRGDNZNMJUZDEYZPLGEGPORCXZYOIZQGCKCRPILAHVINLRKTOWTWLJAFJPPJARCMRWTKEMSBIUFKQCUMLYKVWYQTPXKBOHSGBYQVWEHAYZUVQKJCFLLUCVYZGWADRZXOXRHOMVJMMWSJLBSFCZUTVOCGTSEBAWXVXQETXDVSN");

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
    msg.setTimeStamp(0.952957771787);
    msg.setSource(42920U);
    msg.setSourceEntity(144U);
    msg.setDestination(37726U);
    msg.setDestinationEntity(148U);
    msg.type = 209U;
    msg.op = 4U;
    msg.request_id = 15383U;
    msg.plan_id.assign("XWAPYPFDBPYCXCLMRTOWAQEYCYUJNZFMEVUUDWUKIHNQVMNBVTRLOZGPJDUBIDEDKHQKBTZZKMZIIXDIOSARXZTGGQILRNPTJMSMSQOKYMBFQYPGHHEFMNWDUHKOBWFHLGHDWWSPJQXAXLRRSWNECCUUXWVVSTADYFDQVCSJNYVMTSAECJIKAOUZHBOKBCFVRRGLTXBVJHZJACWYLNTJQLPZOEGUGRFXBLRSKIFKNPJCIZIHSEEALMOPEQO");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 7U;
    tmp_msg_0.op = 31U;
    tmp_msg_0.plan_id.assign("ODROIVFMTEMCJHEAUNEEVOURSZHFQZEYGHJFIGOJVCYAKWYJXTWCXILUHLGWWJEPBBDFDGWOHCJCLBDJDCMNNCYQAACQSMUAMUQOKZUVXFHNUMHFHIRARGE");
    tmp_msg_0.params.assign("DPDVKYJRRXTACAFTLXCLELKOWQLPKQNWUOBTVGBAGNGIDOCNEKUSRLCHFMBZWRALXZBXOGHYSBVGUKBNHSIEWZQKUEMUDNWFDLCQFITSDLMFFXQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YYGMFTPAWCUHMCKWFVDSZHGDKNJSIEPHXZRZJPSFJUEAWIAGNFIKSOXJALAICDLSEPZDBQKDEGLOROYSBRRAOEBVCTJVYDHPNRIHZUMFQTQVIEUTWIVBVJAEBIQRCSUUSFQBXNFPMYKNNFWFWWMGPMBUMNTZOUGHCERQTRQHVTQXCCWQOYIKKYYLXKLVXBUNRBCJYLTIZMZFVLPENQDGZGAGDOGTEHSWLLJKXVDPBODUKOZXSCMTRO");

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
    msg.setTimeStamp(0.362503767662);
    msg.setSource(39814U);
    msg.setSourceEntity(168U);
    msg.setDestination(54600U);
    msg.setDestinationEntity(155U);
    msg.plan_count = 32158U;
    msg.plan_size = 3131397998U;
    msg.change_time = 0.247067832718;
    msg.change_sid = 2973U;
    msg.change_sname.assign("HWKVWFZFIXVAFGPPYQYUQLVOJQQLA");
    const char tmp_msg_0[] = {69, 1, 124, -124, -21, 126, -77, -66, -58, 62, 31, 103, -103, 48, 83, -12, -121, 47, -93, 95, 78, -98, -58, 115, -55, 126, -59, -38, 101, 124, -94, 40, -5, 115, 41, -10, -55, -121, -128, -107, 75, 70, -118, -4, 113, 45, 4, -92, -112, -31, -126, -98, 66, 19, 87, -43, 45, -15, 2, 22, 44, -117, 7, -68, 120, 35, -55, 116, -122, -43, 115, -104, 83, -1, -126, -7, 96, -121, -43, -45, -23, 16, -102, -92, -97, -45, 7, -91, 124, 53, -93, 50, 17, -101, -48, -58, -83, -33, -128, -110, 86, -34, 36, -39, -31, -62, -119, 122, -91, 32, 83, 64, -93, 17, -9, 91, -125, -100, 107, 33, 111, -81, 2, -124, 44, 32, 121, -30, 68, 120, -68, 73, -95, 12, 92, 94, 100, -83, 113, -128, 19, -1, -14, 24, -42, 66, 119, 118, 91, -121, 109, -23, 21, -66, 85, 89, -114, 81, 40, -20, -108, 21, -47, -11, -111, -56, 6, 44, 101, -90, 98, -91, -86, -30};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LEUYFNMGXIIXCYRABXPPHKCRSRDJPNRDACYNFQYQMRFZHKDSWCNIEDPAYMBVFNSIWUTRMFJZJWPPMHOVAQLOEZZCQOQMTWBLTNLKUHGVGXCJTVCAEKSHGKVFAMZJYVKPDULZNMGTCKEWWGHWIVJUWIRBHAUDTOJSRZWMXKMVXAADSXSLBUZRXTYVSNVKUEXTQLGEIINBHLZNYBFFYOACGXKJEQUSQOJPPZTFEGJRSFBOQHGWBHYBDPLOO");
    tmp_msg_1.plan_size = 31609U;
    tmp_msg_1.change_time = 0.0424209476278;
    tmp_msg_1.change_sid = 23907U;
    tmp_msg_1.change_sname.assign("OHQXUTDHDRMNWRZYOKXMTLEZHNGMTAKOYQFKCJXTCLQPHLLZXKAPWIRULWSPPRQSMAYVWUVZIIRFACEQCSZZRNOQJVBKTHBDIXPXDGSLJQMPWIUXPBPKJLFDFFXYMTSYJYIEHXCBLBJZTGVJGNWCYPKSHNVHZQDKNEAFVDVVVEBUUNHMEZIGCMDAINSUOTFLEMKOSR");
    const char tmp_tmp_msg_1_0[] = {76, 99, -16, -73, 17, -2, 94, -86, 112, -9, -73, -98, 75, -111, -127, 54, -80, -102, -62, -8, 79, 55, 107, -93, 84, 93, 12, 63, 62, -26, -28, -39, 5, 101, 11, -126, 105, 11, -82, 74, 48, 24, -48, -82, -35, -37, 102, -77, 120, 35, -84, 36, 87, 87, -85, 121, 13, -111, -26, -5, 65, 95, -7, 12, -31, -108, -77, 70, 38, -92, 96, 122, 95, -36, -107, -92, -38, 35, 38, 92, -17, -21, -30, -51, -12, -83, -34, 58, 5, -84, 117, -24, -13, 52, -77, 46, -101, 84, -83, 15, -13, 109, 33, 29, 39, -118, 125, -47};
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
    msg.setTimeStamp(0.0626568777122);
    msg.setSource(37694U);
    msg.setSourceEntity(156U);
    msg.setDestination(5061U);
    msg.setDestinationEntity(55U);
    msg.plan_count = 27041U;
    msg.plan_size = 3371247724U;
    msg.change_time = 0.640224261085;
    msg.change_sid = 39792U;
    msg.change_sname.assign("YQBSJJKBWCXCQWGNXGFSJEISFVDPKCJTGMUTRVMDUGFUQMOQKAMEEPOCXSODEKFZSHEBBZMAKLEKFZISUHWPOPSIPHTOMCLQYLY");
    const char tmp_msg_0[] = {-19, 22, 48, 51, -90, -98, -20, -88, -117, 126, 35, 112, -47, -5, 68, 102, -58, 11, -75, 46, -4, 92, 23, 10, -88, 0, -34, 57, 1, -61, -62, -125, 110, -102, -7, -70, -74, 47, -69, -35, 3, -111, 78, -7, -69, 21, 58, 12, -76, 59, -60, -66, -51, -47, -22, 79, 42, 86, 71, -20, -99, -76, 78, 23, -32, 56, 101, 89, 4, -97, -46, -19, 66, 109, 82, -54, -86, -105, -70, 51, 90, 60, -97, -8, -32, 113, -39, -108, -17, 80, -66, 46, -105, -113, -72, 79, 77, -54, -84, 19, 25, -107, 23, 63, 31, -83, -81, 32, -16, 109, -122, 85, 120, -20, 97, 115, 115, 31, 28, 6, 22, -52, 54, -36, 73, -7, 70, 20, -67, 105, 13, 44, 25, -25, 116, 76, 52, -37, 7, 64, 90, 126, -50, 89, -53, -11, 103, 39, 11, 114, -90, -73, 20, 5, 27, 16, -94, -110, -107, -128, 126, 70, -126, -29, -91, 40, -67, 76, -31, -94, -11, 50, 59, 3, 16, 59, -48, 12, 105, -54, -90, -73, -13, 11, -71, -74, 25, -112, 107, 97, 27, -31, -106, -118, -110, -2, -90, 118, -13, -93, 7, 88, 116, 34, 120, -6, -16, 37, -92, 75, -61, 6, -59, -59, -114, 111, -94, 15, -117, -23, -127, -31, -21, 77, -51, 93, 61, 120, 121, -79, 41, 113, 114, 45, -65, -7, -20, 88, 35, -5};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UANNTKRKBRYIPAPTTNLTJWZZCOQVFFXKOPAYBQXDSRNKBVVFRLFQWEJFANUMQHJWGSAPDMLZNGFHXGDTELIRGLQMLTMPIFGHFLBUZYIXWINDZJPJJSLRCVKEWMFEGCAOXVHUSCBZHSEBUDGIKULKORQMDIIPHWWOMQCTVCRCTUNYZUVQHKAGSJSEMNDYPXMEN");
    tmp_msg_1.plan_size = 57614U;
    tmp_msg_1.change_time = 0.237624267994;
    tmp_msg_1.change_sid = 34754U;
    tmp_msg_1.change_sname.assign("OOQQSSCYODBTAQHJNAISCAIYWYNOEOYMHQJRUPBILRAMOGUREPVUJXOTFWMIEGGPUAIPTCZVPNRZLOTRXNCACXYXIKBWNWWFNKOXBADXLRZPWBRDHLKHLKXAESBENBFYLTYVGCDDNLZLGAZVWMHMHKFUSAFKJJKRDD");
    const char tmp_tmp_msg_1_0[] = {73, 38, -13, 33, -5, 18, 15, 113, -114, -97, -69, 121, 113};
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
    msg.setTimeStamp(0.629351231932);
    msg.setSource(48957U);
    msg.setSourceEntity(173U);
    msg.setDestination(16551U);
    msg.setDestinationEntity(226U);
    msg.plan_count = 65517U;
    msg.plan_size = 1338412007U;
    msg.change_time = 0.269651425387;
    msg.change_sid = 51429U;
    msg.change_sname.assign("CALJGKZZBHVPBJNSZAYGXENYBPOTMGCWQWBDONKNLZYFUJDSJWMCVUMFHCEKTVNPLRZXUIDSPQJDAWQOOGGTPCCFYAILRSAHHBSITRUOXXSNNEPJMZGAUVAYJTMCIBKBBZAEHYIEWHMCQFNDRLDUHHJTQYDQLJKKEFK");
    const char tmp_msg_0[] = {117, -57, -65, -70, 80, -104, 48, -39, 90, 95, 115, 27, 50, -124, 86, 47, -1, -73, -34, 116, 21, -62, 21, -38, 102, 25, -64, -100, 40, 50, 118, -60, 92, 121, -118, -126, 96, -7, 26, -47, -121, -21, 11, 32, 43, 75, 114, -113, 7, -90, 109, -63, 77, -80, 87, -81, 76, 79, -70, 76, -121, -126, -57, -36, -27, 95, -29, -78, -95, 80, 60, 118, -120, 56, -25, 121, -55, 99, 18, 117, -36, 52, 24, -62, -85, -61, 3, 86, -47, -15, 18, -41, -56, -16, 22, -105, -61, -26, -71, -91, -97, -128, 50, 68, 88, 79, -6, 105, 111, 119, 121, 15, -121, -54, -30, -14, -51, -50, -43, -55, -103, 22, -43, -44, -73, 25, -37, -8, -3};
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
    msg.setTimeStamp(0.437794858544);
    msg.setSource(16533U);
    msg.setSourceEntity(246U);
    msg.setDestination(36174U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("VKAFUTKGAKUFFFDOTPGIZDXYKFVMJKCWRGMJDEPHNHPNDRIIWJZQSVJSTAXEBXASWYZNIGGUAUZTOLGLUJBCYAOEIQBJKLZQBYOHEPUMKCPDY");
    msg.plan_size = 22259U;
    msg.change_time = 0.731315776884;
    msg.change_sid = 57963U;
    msg.change_sname.assign("SUNWGEMSWUXMHBIRPXYATMAYOBAMQJDMGZVBVWDYVLJCEYGGHEKBXGOYQALOSRSNJOUIHWUYJNFCVKKLQUKGDCHNQFTDFIZWKXSOQPCFZRLOCNQFSZMPCZKOSVBENHWECLKQZMNZUBHBTKABMTMBZRRXJEYNGIXIHJQSOAJAGTQRAPLYITWFDKWUNLVPIFFURJFSYXHVTXDLBZDRVIQLTJJORACEPPTEHXLIRYDUZ");
    const char tmp_msg_0[] = {-68, -92, -61, -70, -75, 94, 110, 16, 122, 116, 31, 16, 37, -34, 44, -92, -102, 0, 69, -15, -82, -110, 34, 65, 124, -128, -38, 68, 54, -64, -104, -16, -32, -48, 102, 47, 102, 41, -7, 121, -67, -4, -121, -106, 47, -33, 122, 116, 63, 119, -65, -2, -32, 35, 23, 95, -50, 103, -99, -1, -78, 58, -28, 74, 64, 71, -95, -126, 45, 30, 27, -41, 10, -106, 98, 39, -27, -24, 50, -77, -112, 6, -120, -92, -49, 113, -98, 86, -56, -44, -69, -15, -108, 75, 94, 124, 101, -117, 39, -10, 85, 59, -39, 6, 27, -127, -6, -87, 119, 26, 119, 115, 126, 56, 91, -74, -66, -71, 101, -110, 17, -71, -45, 83, 108, -71, 61, -8, -88, -31, 15, 58, 62, 7, 102};
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
    msg.setTimeStamp(0.0117077548979);
    msg.setSource(56487U);
    msg.setSourceEntity(139U);
    msg.setDestination(49770U);
    msg.setDestinationEntity(15U);
    msg.plan_id.assign("AVWEYOWKJSVCCYAMAJBTMFUFVFKZLQIAM");
    msg.plan_size = 39348U;
    msg.change_time = 0.292912207829;
    msg.change_sid = 30754U;
    msg.change_sname.assign("BAUZFXPZKWLBOJUAKHRYDIUOGBKFAFUVJZONHUKYWYYYOQSMXUIDZQGCCHZJNDSCEGGHWCWSBROEXLQBPCPIHCXXORBFHRSPNLLTQZSJHSMMGAOJDGLATZJTFYFTWMJUSJOARDAEIKIEVIOGTMNWPDDQQLDUINKRKMYYTNJNVVOMHECVELDFPVAQAXTTXEEJIWYVCQZQQKRXGTGCUVVPFKAPRINDLBMFSYUSNXSWNHBZBBXZVKMHTWMIRC");
    const char tmp_msg_0[] = {103, 13, -106, 76, -77, 95, 45, -36, -86, -2, 28, -38, 98, 31, 119, -95, -25, 20, 68, -34, 125, 12, 54, -71, 97, -92, -32, -7, 77, 45, 20, 44, 1, 16, -45, -101, 111, -8, 70, 75, -26, -35, -51, 84, 65, 43, -57, 106, -39, -16, -51, -119, 78, -115, -64, -80, -61, -117, -81, -59, 60, -88, -11, 123, -69, 86, -116, 60, 45, 99, 98, -61, -124, 21, -26, -79, 49, -8, 124, 115, -96, -59};
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
    msg.setTimeStamp(0.590129858843);
    msg.setSource(59559U);
    msg.setSourceEntity(141U);
    msg.setDestination(60959U);
    msg.setDestinationEntity(107U);
    msg.plan_id.assign("YDUNFMZQWJUWOWMKTRFNRKBLSMBCLBPFGXKXPAGPTATEUZVELJUSUEVWALVQMJRJIMCZFBIDYXZHGEVISEWISOREOVNKLUHXOUWXULFFRISNULARECMRDZBTCEBBECQACLGYVJWKLGXOSDWHLIYIPCZKHBYOKMWTZDQSNQBIQXGRAAVTHVNAQYPFHMNHYGRFNQXJQCOTEOKNDIAZUJYZMDSSCJVJGHOXGTDPWKPVFDOP");
    msg.plan_size = 6799U;
    msg.change_time = 0.175084910359;
    msg.change_sid = 11552U;
    msg.change_sname.assign("WNZMFDPEGMHQYKTCJHQMBCLJVWFRESZAHXHWAYMWAOKTHTMRSMHDJPXZNDFOAIJBRLBRGRHGCNEKKTLXWSQNYTGLORJDMDIAKYYODFGYKDEXFPPUZJXQNBNPYEJFUVWPIWFSIBSVIZCIOTCKBJTXANNIGOGLVUECQN");
    const char tmp_msg_0[] = {109, -109, -102, -88, -118, 61, 23, -28, -111, 26, 22, -119, 37, 99, -94, 118, -43, -61, -72, 111, -64, 42, -39, -57, -7, 62, 69, 79, 42, -67, -69, -84, -73, 13, -68, 42, 38, -119, 109, -91, -91, 102, -80, -110, 1, 80, -100, -110, 7, 98, 12, 49, -127, -47, -20, 87, 35, 33, -111, -125, 57, 80, 115, 3, -43, 107, -82, -66, -29, 116, -86, 76, 23, -101, 34, -125, -89, 8, 101, 114, -30, 23, 82, -87, 64, -124, -31, 57, -21, -115, -51, -20, 123, 82, -19, -65, 27, -33, 23, 11, 113, 75, 102, -126, -25, -72, 60, 87, 27, -71, 80, 71, -41, 77, -50, -29, -119, -49, 59, -59, 55, -127, -121, -75, 34, 73, 8, 32, 83, -91, -13, 33, 112, 8, -75, 73, 32, -41, -86, 108, -22, -33, -26, -1, -122, -1, 90, -20, 73, 42, 54, -116, -107, -126, 38, 5, -99, -75, -62, 1, 12, 80, 45, 52, 87, 5, -30, -124, -64, -121, -29, 88, 17, 66, 23, -117, -33, 68, -116, 56, -106, -112, -50, 7, 58, 102, -3, -3, -57, -64, 48, 58, -123, -87, -32, -92, -127, -110, 115, 113, 112, 34, 82, -34, -71, 93, 71, 17, -109, -126, 67, 77, 91, -16, 85, -68, 113, -14, -30, 23, 6, 71, 21, 63, 91, -71, -2, -57, 80, 29, 26, 77, 42, -40, 105, -69, -113, -85, 18};
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
    msg.setTimeStamp(0.753195643588);
    msg.setSource(47353U);
    msg.setSourceEntity(73U);
    msg.setDestination(19067U);
    msg.setDestinationEntity(233U);
    msg.type = 75U;
    msg.op = 56U;
    msg.request_id = 36824U;
    msg.plan_id.assign("JZUZFOSRUPWSVIHLFUFVNXPNYGIKVAEHJXVMJKROZBATSTIYYMWKSQGADUSTFMQBEUTDQAMNEHRECHOQODOKWTOUQYFJGTVFQXLWDNMQQEXBWWMHWZUZBXMHHEASYIRBBOKWLKAINPLGTTCR");
    msg.flags = 16597U;
    IMC::GetParametersXml tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GVHWILNNRMLMANJSDYZTPHVRUPEGZUKGUGNSCAXYOQSAUOLKDAWTHKOOJEZECQIIAXPCTOGCUUNQVQRPGTKGJRNLSLNERCMPDZMACFKHYXKEFYWSLGHEUIRTVJYEZXXDSBPFWBYADHYHOQNAFXTWHTMOBZJPDVDWLIQMQZJIBCIFMWDRLYQOPEFQUMFBUGRXHXDYTXSVEIAKSJFIRIOWBMMYZTBBCBOHTKDVZLAWJKFVNC");

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
    msg.setTimeStamp(0.320476093329);
    msg.setSource(348U);
    msg.setSourceEntity(97U);
    msg.setDestination(47113U);
    msg.setDestinationEntity(50U);
    msg.type = 186U;
    msg.op = 18U;
    msg.request_id = 23891U;
    msg.plan_id.assign("KHDARNGEYATMVCMAUGOKKJYACVILZCYJZLWPJCZDMCPFOIHHNSYQPTZNESFJEVEXWGLJDVKEWDHFIHXVFRDAQFQM");
    msg.flags = 63348U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("EWFTGKADVIUZEMYRTIAMTFDJCHFSSXFNAYYPIQUCQKWYGUGCUDSKPNXSLHVENEABFGPDBMQIJ");
    tmp_tmp_msg_0_0.lat = 0.215033481491;
    tmp_tmp_msg_0_0.lon = 0.630601477743;
    tmp_tmp_msg_0_0.depth = 0.14385513743;
    tmp_tmp_msg_0_0.query_channel = 57U;
    tmp_tmp_msg_0_0.reply_channel = 9U;
    tmp_tmp_msg_0_0.transponder_delay = 204U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.491262957617;
    tmp_msg_0.y = 0.221190169262;
    tmp_msg_0.var_x = 0.98909833313;
    tmp_msg_0.var_y = 0.703779910815;
    tmp_msg_0.distance = 0.237796408811;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RHOXZXCEGCJXKAPPADWCCNOUCHJYOQFLCXUKMVJLWYIRYQKTLPAXLTEBWDJOOIIWAOQNSKMKXZSBRDNDZPBUOTQIKYSCWPEPZFDBPEVBSQLJZFGDKHMIGQMAZRWIVBMZWBKTTULNRICPUBURJPHGKLHWIAUSZMOLFNHMHIGQWRDFQYSVRYUCXTPNHHJFTLVEOENQES");

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
    msg.setTimeStamp(0.893315024389);
    msg.setSource(61998U);
    msg.setSourceEntity(142U);
    msg.setDestination(930U);
    msg.setDestinationEntity(223U);
    msg.type = 202U;
    msg.op = 79U;
    msg.request_id = 18552U;
    msg.plan_id.assign("ZSTGFBKTPMRWZERKXSAASYOUKUUPJLWYJINBPLWTVPHWXWPEFIVXKMVXENAURQFFSEAUIONQDIQLMKGHCTCCZLGJBJVVGOYYVIPKVQLYIHRNAZXZCCRWNEHFNRSOHVFKOGAZDHLXJDKFLJCETNYWJDGIJDBBMOAMALZMGUPXWASBOHSPDGFCJCYBDRQTYDNQCEIMQUVEQDEKFTULXNMZSEOLICOKJBSPYGVPRDTRTFQXHBUOTWAMSHZNHZBR");
    msg.flags = 33309U;
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.902632521216;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FJTZMGPPQTVSVDWYDHYUTYMROSLETNMSTKBXBXKPYIYDGTQCLQRQAHMUIKSNJNIQPSEGOTYFHEUPLVFQWHWKFCRJUKSMPLGGNVHPAORZYLIPXNRLEZO");

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
    msg.setTimeStamp(0.318767835162);
    msg.setSource(50444U);
    msg.setSourceEntity(228U);
    msg.setDestination(22859U);
    msg.setDestinationEntity(200U);
    msg.state = 218U;
    msg.plan_id.assign("GRZSZVEFIMOJJPWVUHZISALPGEAJSQUBDHZBIORGREKXFMUKYSAWTLZEDFIUNUF");
    msg.plan_eta = 393523898;
    msg.plan_progress = 0.927455370082;
    msg.man_id.assign("DZRKZGJPIIKTOCCUVXIHWUNSAHMVPYOLSSRXNYINYFSSJRINHFXSOHQFYEPMTLDNBCUKIAPJWEDPJKUPVNPBHGFMWNTTMCDNMBZDSBTYWVVNRGFHQTLAFEPEOGXHFVMJMCQKAWTVSSOGHKOZLDFXYPGVREODOQKRCQJBTWMABZEAILRBFZBCUJEVCHXYUADGVWA");
    msg.man_type = 41492U;
    msg.man_eta = -1310521890;
    msg.last_outcome = 164U;

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
    msg.setTimeStamp(0.876095901611);
    msg.setSource(20854U);
    msg.setSourceEntity(205U);
    msg.setDestination(51628U);
    msg.setDestinationEntity(42U);
    msg.state = 134U;
    msg.plan_id.assign("ZFRMBLFSMTDGIIQMNDJSBEACXITIZHOFAWYZMCGVBZXRLTSJDLFCRWDFMJKQFTHEKSNIUPVKJHYXJHRUKSLOVKOWKKIMBIWUUISWVVLESHCZKUPBRTUOOAVQTNZPJBZNLNLWEYCWKCYMYVYJZFYPDEAWDSNVGGXQAPBBPIB");
    msg.plan_eta = -2079713823;
    msg.plan_progress = 0.0312818314707;
    msg.man_id.assign("DAYAMVMNCGUPCQEQWFDHTWEUJGNNCVXYSFVLHWJFMHVUUAHRMNCYDQTOEMGXXNZXRJTCVHQNJOUGCXFUKIODKVJZNXBSKJTQZLDYPBISPLWEFAOPMPXEBPUUISIKORYWTLSWEUVIO");
    msg.man_type = 34900U;
    msg.man_eta = 447550200;
    msg.last_outcome = 18U;

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
    msg.setTimeStamp(0.0875154098117);
    msg.setSource(231U);
    msg.setSourceEntity(21U);
    msg.setDestination(32171U);
    msg.setDestinationEntity(123U);
    msg.state = 208U;
    msg.plan_id.assign("KGONGEIYRWOYEHUHJTW");
    msg.plan_eta = -1130239707;
    msg.plan_progress = 0.234345924997;
    msg.man_id.assign("YHDODTYSYFGJZGUGEWYUCESQYDBZRAINOZXXNCHBZBOHDVJPAJIMPKUFSYYREBPWGYIDVAPCHYASMQKMSAMOOVIILCSVWABERJHRQIZBEBFQELEGBRLMFKIJOQGVKRTJQQNDQWPHBWRNWWTCNDLSTFJMCRHNQDHPCAZSOPOLUFUXVNMITIHUDWYPJJGUKGEMZCFJLGBZWTOGXX");
    msg.man_type = 1932U;
    msg.man_eta = -1089499179;
    msg.last_outcome = 21U;

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
    msg.setTimeStamp(0.220680183357);
    msg.setSource(46364U);
    msg.setSourceEntity(209U);
    msg.setDestination(26125U);
    msg.setDestinationEntity(8U);
    msg.name.assign("DAWWLXFUZKJACXDIHIEYWWWFOHSMYTLRRYKIHPKHXAHAVOAEPYBVRQOBLDBDBZHFUSEZYOCKFNUTDEOMXJJEIKQPMJNNJLMGBLAKTMGYZDOTQFNVRIZXAWLBMTRVGFVITMDFPWJEGHBEFFTQQOPPUVNYITKEJMHRXBCUZNGAIIPOUAPYWRCMTQLZVCSRSNNYSXZKLOTQIQUKVGRDSUXCLWCZACPJCCSKSJSVSHDX");
    msg.value.assign("PJDVINHBSKMIUMWFFKIPKQBBUNVIGX");
    msg.type = 250U;
    msg.access = 49U;

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
    msg.setTimeStamp(0.510339082195);
    msg.setSource(53663U);
    msg.setSourceEntity(0U);
    msg.setDestination(36049U);
    msg.setDestinationEntity(136U);
    msg.name.assign("OHXJCSSWEJLZAUELSXPFPRVVFRXQWCRBGNNLKCBGOZEIQFNEXQGAFELXBNHHLXJZXFARCDUXWYCDUOTJMISMBLNHVSYVHIGWTZUJQYVMRXTMJPETZAHKYKZHEGLKBUVHNSDUBTRWFBZKAGOGIVBJMODPMSCZROYTRKDNDEETSLFCTCLWXIAMQTWAPZRYAUOCDKPVAORMNMYZVPSVIAQS");
    msg.value.assign("PCFJTUOIXIAAZQGKUYRGTODWGOFKRKHPSLQWESMXSOXKMHCOARMBIBTQFTDNOJNTBFDLGRCANGJOIRRRMSYEVDWAKWNSEXZVQPVF");
    msg.type = 125U;
    msg.access = 113U;

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
    msg.setTimeStamp(0.957454854607);
    msg.setSource(19702U);
    msg.setSourceEntity(137U);
    msg.setDestination(5855U);
    msg.setDestinationEntity(74U);
    msg.name.assign("WQYIWMTWSP");
    msg.value.assign("ACZGQKBQJBYFSREHWMQWAOHXNSIXGZJPWSMEPMIETJSPBIEQOQALKHVWRFVUUFYANOKJWALNXRCU");
    msg.type = 10U;
    msg.access = 187U;

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
    msg.setTimeStamp(0.862774123244);
    msg.setSource(12238U);
    msg.setSourceEntity(95U);
    msg.setDestination(34082U);
    msg.setDestinationEntity(179U);
    msg.cmd = 25U;
    msg.op = 50U;
    msg.plan_id.assign("NMFBYHVBAFMWCOKCUZIXFHGJQDMLSVUUJNHGLUTKPQWMOXJBRGMNZAIDDXBAIXRYAHVGWPGTQPWPRTQSRXWIUTPCIEVTAUCJJTCAEKQTPFLSDLORHVDBCFQGKEWHQYWELAMLTEBOROEZJUKRJYAPCOEHLOSJZCXSXLINGVPSDZNZKMVUOHCDTDJGOYXUTWQKEFBQIZENBPW");
    msg.params.assign("VKGVVWWZHSWZJFVQCNFYCXUMWDZWMYCDVROYJJINRCVBKLSKGBLYNDIELOPBMLPISMANFWRECZQBDAOYTYCPT");

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
    msg.setTimeStamp(0.0562651298435);
    msg.setSource(53705U);
    msg.setSourceEntity(65U);
    msg.setDestination(61313U);
    msg.setDestinationEntity(34U);
    msg.cmd = 73U;
    msg.op = 15U;
    msg.plan_id.assign("HHSLDDKZOOCLKHWAQQMOBARPXQXNWVFRYEIQYUOCTCXXVUIFNEVJTHCMZGRWJZGQAHGJDUWNKEMBABKHLLHUMODUYOLEBKDVCAZIXUOBWCFGPROWBKUPCQJIVYUZTPWJFEKNMXFSAATPESFIZDGIWLMBCAVTQRXRZHDEUPYPVYDANYHNIXGFTEXLGMBGSMSYBNZFNXAJSWJTPJTLIDSNRKPSWSJPVCTREQMHVCNOOUQMIBZEF");
    msg.params.assign("VNTQBBBZSJWFWBUHFOEENAVXZKYSGMSUKUMBWNXYRQHIDPRXTOQGARTXLMHAAZTHJJETJEYNWUYZIPPYTGLCEVZBMUVZKLYKJVSDHOHGCLDHIUWSVHPCXLBYNFAKTIAMLPLXBAQDXQPIEVFJLFWDGOXRDF");

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
    msg.setTimeStamp(0.151641957412);
    msg.setSource(40116U);
    msg.setSourceEntity(38U);
    msg.setDestination(38755U);
    msg.setDestinationEntity(29U);
    msg.cmd = 58U;
    msg.op = 236U;
    msg.plan_id.assign("VLIRAPXBJOQLYBFNFACPZGFGN");
    msg.params.assign("QXEGQEXAPWUXQHVGXBRCCBJMJNDCAPFMPFERXVSUVYDRTUFRGVKSJFBLUNAWOFWGCMDIWTKMOGEDMRFOKZJQJXWOLIMTHSWVRFHEUQHUCHLWCCAVSUITNRGXILJUZIKXYLBYDWPPNHEVIRBQYENQTBKSZTYZZYKPJJKYDSMYHZGZDFEOBLFJSLUHWMXKQJAZHWQBYZQYMNAOENCOHGODVVDPLELVRGMC");

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
    msg.setTimeStamp(0.943325640279);
    msg.setSource(21750U);
    msg.setSourceEntity(174U);
    msg.setDestination(42430U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("HKTHDZJVPULTGXPIDEDYSHCZYGXSMIQEB");
    msg.op = 132U;
    msg.lat = 0.225757852706;
    msg.lon = 0.140715340705;
    msg.height = 0.629082525243;
    msg.x = 0.389904318417;
    msg.y = 0.66694427769;
    msg.z = 0.259440423629;
    msg.phi = 0.898900818231;
    msg.theta = 0.681915235436;
    msg.psi = 0.413364861269;
    msg.vx = 0.413114719254;
    msg.vy = 0.33639156396;
    msg.vz = 0.787118463709;
    msg.p = 0.168176711407;
    msg.q = 0.686900899626;
    msg.r = 0.659530931819;
    msg.svx = 0.264607113658;
    msg.svy = 0.207835501189;
    msg.svz = 0.650519581291;

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
    msg.setTimeStamp(0.265359153133);
    msg.setSource(33533U);
    msg.setSourceEntity(79U);
    msg.setDestination(30546U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("HJYLTSSIZSCPCSUZDDYTWETDGSFXKPOCHLRVMFBXHAHFDFKCIUQELNNZHQCEPLGW");
    msg.op = 95U;
    msg.lat = 0.559741345978;
    msg.lon = 0.61706623265;
    msg.height = 0.455126549497;
    msg.x = 0.263187223689;
    msg.y = 0.246921976418;
    msg.z = 0.925412813468;
    msg.phi = 0.090901703575;
    msg.theta = 0.811152682186;
    msg.psi = 0.442711235134;
    msg.vx = 0.0141372122299;
    msg.vy = 0.866500330073;
    msg.vz = 0.633829692669;
    msg.p = 0.789100077697;
    msg.q = 0.655174323566;
    msg.r = 0.124578269985;
    msg.svx = 0.967280212164;
    msg.svy = 0.120598756361;
    msg.svz = 0.737602213481;

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
    msg.setTimeStamp(0.872052995237);
    msg.setSource(55720U);
    msg.setSourceEntity(51U);
    msg.setDestination(17298U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("PRJYYXDMWIUWWEFNIELJOAWJFTHIQXAVXKREKXOZXTIZXJNQMFCDMGTUJKVUBSDYVJFLULBQTDGYODDASFCYT");
    msg.op = 237U;
    msg.lat = 0.0905540955922;
    msg.lon = 0.145068905757;
    msg.height = 0.431396378155;
    msg.x = 0.327902761769;
    msg.y = 0.662191296817;
    msg.z = 0.0348462691688;
    msg.phi = 0.963534488737;
    msg.theta = 0.454323426001;
    msg.psi = 0.381251005104;
    msg.vx = 0.933590865721;
    msg.vy = 0.177477375095;
    msg.vz = 0.301844234505;
    msg.p = 0.369643861566;
    msg.q = 0.811823715562;
    msg.r = 0.0391826156661;
    msg.svx = 0.0570145197341;
    msg.svy = 0.417724010502;
    msg.svz = 0.530647522054;

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
    msg.setTimeStamp(0.0384746714608);
    msg.setSource(7148U);
    msg.setSourceEntity(163U);
    msg.setDestination(40247U);
    msg.setDestinationEntity(98U);
    msg.plan_id.assign("XIQFNPSJBIMIXPWBGNYCJVNCCVBRXYAZZUAVWSIRILFJVWDEQGFEMSKNIQPAEMNWUIBCPZLHSXDNTRQEKHYNHBTLXGXKBMMZLJTHQQGJOJIUDGHUDGIDUQOYSQJDLEJRASKCCTHL");
    msg.type = 223U;
    msg.properties = 126U;
    msg.durations.assign("SNUMEVDPSMGPUHDAZMSHFGGEYZGSLULSNPHFBAWKYOAOQAJCRKVCGAKPQYIPBQLUIYNGTZQJBQMOLTNJXRJZBTLWAWRXCNVBPJIRCUNETFVWDRVMVOTHSDLHPWNXVLBMDLWOVAFYZKFORBEW");
    msg.distances.assign("NTVDCAFFJJTWSNUXFYCPISEATQUKVZNXCLQEEDHPHWEWUOEBBZBVCIRBURILHCOFUKNVELWCFGMNJGSKPWXQFJOPGYKPAZIKLYODQSRMRWYGXUAVLVALLTSWFSNBDHKTAVHBERIKUFMYWHBJIRQZPCOYAC");
    msg.actions.assign("FMWBTCDHTJGHEADWCRDRCCPSXXKZKLELPIYXWCKVQGFUBULJXVJMVEKEQHKBPCZBMMVSEDEGHDGQOLFQZSUBHBNIAXYLLSPQFGRSPZQSKNWOCJNWACNXFKRPOKNYTTRNRJTXSHWEWLNGNZUGAQKFXOHRDU");
    msg.fuel.assign("BITOPJNAZPXWRUNGYPFTICPKNOWCZEJFRHFLDSXKAWCLUZDGKQQOXZBIGLOTCXJJOIWINZYTDUKRETITNAGABMDLPNEPSYKFUHCPLMGHZVRMIPZURCXSLQALSFXRJWHEXAMGUJBFEQUQVDSSMKVJPEZLSCCMWTHSWXBMOGOKDRVKAUWTKBGK");

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
    msg.setTimeStamp(0.0275189161116);
    msg.setSource(53478U);
    msg.setSourceEntity(158U);
    msg.setDestination(38385U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("YBPZJCUEHJQANVQPMISBRLOORCYCDUXQHOJUEHSNOYOVRDLLLY");
    msg.type = 120U;
    msg.properties = 175U;
    msg.durations.assign("XDDIWLQOORFJZEBCRBWAABUGPAEZORZFSYYRPBIMAJAWQJVSNLOQUPVSMDUSBDGJGTSULPHGGGRAINAFXSRIOKNNHWUZINXRGIOYHYDPTHPLUHISVTZQKFKRXUQMQDBXFMCVPTGVMTQDFFNEMXCYWUKCSBAOMVHEYWFJWBUYEKKMPVDH");
    msg.distances.assign("NAGBGXSIOUGPBHFYXNYFBRUQAESGOSNYNAPMBVIDFBQWWCUQORQCVDOUTRVEHOGKHRPCYIIWVZDUPKZACJOKXVQPKXEUWKLUBFAWAMCCAVMINMFXJVFFRMOUJKQBRMIQYIPPDRVHHBYJPZJKMEYONWJNECFEHCTVUHM");
    msg.actions.assign("HFMITXWIDVAEFBGOWZMNESKFOTSUNEWAZPLDPIHIROEOCZNIXETFODKNDCIPTUIYWPGCGHNRKSCOHXJRRBMNYWLQZEQTDFVBHZUGTVWRNJZVCCABWMSXWPMODUKYXBYQRQQSHSYKLUCU");
    msg.fuel.assign("JXOYDWKPOBLAMZMNFZ");

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
    msg.setTimeStamp(0.64602824848);
    msg.setSource(21712U);
    msg.setSourceEntity(47U);
    msg.setDestination(34154U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("KCQYTQYPDNNJATOOSKFXPGSMPRWLPUDBBOAFPRIZZJBZFQDTVLZCEYPMJTKSGJCLUWUMDVRSZVBWVAYHAIXHGRAAGFDWUCIBCRGCHXVCLLOYMPDJFTSRHOLYWKKNEWNEYFJOZKFNOOKAHOTHUAFWEQVGJHNRIFIUYITEUPSAVYTCSZXQDEXQQIHBI");
    msg.type = 178U;
    msg.properties = 102U;
    msg.durations.assign("IZPJVSIRTHPNGOLOAPREVZHZYRPWADJZLRPPSBYFAQQKQWVZCFSPLEEYKBODDMTCULUDBWOXKCOQTLUVRIPFZNCRHLILYQKNGOCIFA");
    msg.distances.assign("RUEBCWOZBXAKBLNOOXXOHTUVLZLLQXMQGJTVMSROJTSQOQAULI");
    msg.actions.assign("BEUGFPMJWXZJMEODWTVAFDPECGEGSZRHCOFYQSSROIVPAZMTNBKYBBDCODSXFLETZCUVLGFZUYYNEOWNWUPNUJXJZUCYKLQYZTIZONQBKZNSNARGVXHNKEDCQXRMICERRXNTLHETTJAQXHWYPIRARBRCKJCMDPQHWQCAVTMWUHAYRVFUHZKBSPILQWXAS");
    msg.fuel.assign("OOPGILMEEOWHNRDOXBBDWQ");

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
    msg.setTimeStamp(0.0140091191789);
    msg.setSource(13335U);
    msg.setSourceEntity(118U);
    msg.setDestination(52424U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.382714387879;
    msg.lon = 0.531484090923;
    msg.depth = 0.479524942144;
    msg.roll = 0.900101602934;
    msg.pitch = 0.912301019937;
    msg.yaw = 0.690741407055;
    msg.rcp_time = 0.515828488432;
    msg.sid.assign("LQZCPRZHWFNUQYONCMCKGLSRBKDHNVUXZAZDZYDJOZPIKUMOLYSHIJIISFPXNAFRPGD");
    msg.s_type = 108U;

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
    msg.setTimeStamp(0.574567806436);
    msg.setSource(13044U);
    msg.setSourceEntity(164U);
    msg.setDestination(59595U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.405658162106;
    msg.lon = 0.712198348464;
    msg.depth = 0.482605054852;
    msg.roll = 0.685565898129;
    msg.pitch = 0.485400562325;
    msg.yaw = 0.929157728366;
    msg.rcp_time = 0.795008564409;
    msg.sid.assign("OBKWRHMRVXRIZMEVZDCQYNWKZUYUXYFQBWNVKSJYMBQJHNDOUBLDISWBTVACVQKBHINTTJGQJLDWYGLMRITSWOHSDXBKCAFSIZMIEFCDDLEPNCAXHOXZVPDZTYSXTFSUSRLFZQWZKZSJPXOGRXLUJGSULJMNANOAPTEEHIKAABYI");
    msg.s_type = 23U;

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
    msg.setTimeStamp(0.977944653427);
    msg.setSource(43156U);
    msg.setSourceEntity(74U);
    msg.setDestination(4393U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.751463989781;
    msg.lon = 0.956764576232;
    msg.depth = 0.147179225474;
    msg.roll = 0.281428226435;
    msg.pitch = 0.657521450676;
    msg.yaw = 0.211823323354;
    msg.rcp_time = 0.326181097189;
    msg.sid.assign("QYXZQLKCYLATPRIZRMFPTGALANAYDFHPOKVQARYLLZFEAWILHVXDZJADXCLVGIONJSACOZEQUPPDEYDUIYSMXGIMHVBXUHVZHWJQWBNCJJKMTJGXDWEETKTWTONMMOWUYNLBDNEIMOXNNSEBHRNMEVKVPVBYVJUJZCOFXFTGIFIWKKFYR");
    msg.s_type = 123U;

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
    msg.setTimeStamp(0.38740767642);
    msg.setSource(30780U);
    msg.setSourceEntity(81U);
    msg.setDestination(30534U);
    msg.setDestinationEntity(130U);
    msg.id.assign("LTUFSOWPQHKMLLFDZPEPYJOCQPDSBYZCOJUWZMARMWVUCEEUYMYTDTNAXJWQIZQPILXKRSGNKHDSRCMLSBIEEBXLFWHFTVW");
    msg.sensor_class.assign("AHXJMVLHPYUKGOMYDJCDOHOTEJIZVRGWBHNZUFXIWTAFUQJRBJNFCEKSLCCZTIMYFHSIYFXBSYEEGPPYZLZLPJOXKUUKWRNVTOSXWGVBDIGTYVWTJTOAUQPRCJAUNTZSXVQZCAHIABVHNPCXMSQILRAFIEUGGQDGRQWFKSKIAGHPPBJODSRKBSNYGLVFEWWDKPQUBECOYKESIXTBVFWPRVXDHMEFNHZLLCQEMQXDMZLNMLJMAYQ");
    msg.lat = 0.533234992788;
    msg.lon = 0.0169148354338;
    msg.alt = 0.832232782299;
    msg.heading = 0.0884722922182;
    msg.data.assign("JNDFNYFRPRFUDPLVECMVZGCNERJNSTCMPJKAFCORYOPUFSVDVDBPLWKTSLYIETIAIABLZAIMKXQSBIGRHOHCMWVSXLEWWBXQEXTHKLTWUFLTSBQDXPBOQYRNENJPWAWUUXTKWSRLUJEEYBVFJKOOVMAHHODAIZTDZJXTPSOGGOJWCDAWUGPVKCVXHQFZFYQOVIHZZYAQKUCMBGSBIFMHGQUNUZHNERJKYXEIQDTZHMACXQZRGCNLJKSBP");

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
    msg.setTimeStamp(0.119869637137);
    msg.setSource(16957U);
    msg.setSourceEntity(102U);
    msg.setDestination(216U);
    msg.setDestinationEntity(84U);
    msg.id.assign("VDUAJUUMQQHCAWSZEKIGLTUFXWZMVMIHYOHKASFNURKBTIJLERFPKXVQPBOUYQBROIPTHJKCMTWMKMZJXNSMBNHKRFGRDUAFEGOCGCZLPJFQELOMDSXWWZBHLTDIHAUNQXGXN");
    msg.sensor_class.assign("PQDCAHJRCYCMGXXJFSTFHWAHICOKGRGIGAWUEQJUWSOSZEKHVAKJXLPZUZGQFHPYOLHYAKPNVZMRREWBLZMIZWWNMXTOCOYPLIAYTNSOJERQDPDQNTRVFTFHGDAUXUGOTMGJPSXVVGSQSMKQDDNJWAHRYRPQNZCYWDCOPHRNFKCLMURAQEIULEDVVIVGLBLXKKMIFEZCWBNOJZYWLBDXJIKBEXSFBAZBUTOTYBDFLNEUVMFTISTPQBXSUHEY");
    msg.lat = 0.802113967456;
    msg.lon = 0.852633530661;
    msg.alt = 0.339782027681;
    msg.heading = 0.508304558558;
    msg.data.assign("JRFHRQMDOGXVBVNHWPVPOIQAIMSHFTMRPIGBEVTD");

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
    msg.setTimeStamp(0.582760034778);
    msg.setSource(9757U);
    msg.setSourceEntity(166U);
    msg.setDestination(41086U);
    msg.setDestinationEntity(193U);
    msg.id.assign("XXXLBFYRKPQMRRXPCPUEOGUXTGUZDTQOJRPMHVQKEDCSQNJJPIEZAFJPLECQIKJBCOFOYVSZYZCOJQGMBMNMFXVGLGQNWVMECCWXBJAVPWXLDAYHOSPHDULLREDUJZUZAIPOKEHYOBUWTIDSBNFVLFBQHRYNS");
    msg.sensor_class.assign("CYHYKEZJVROYANLKLQMSHFGIVIVGAHCGVXCOUUFGZCYIPERWSPXVLIHTPATFESPYELPNPGCWAHQKMTWSOGFDMBIOXDBGFXEPEZQIYTDJDTUZHBFJGLKVZZAYWPEAKQMZOVWBIYERMOWOYTQPMBNLDCFBSSNVFHXNZQIGXCQZJRWQBFSW");
    msg.lat = 0.583209460632;
    msg.lon = 0.314884073717;
    msg.alt = 0.625858280003;
    msg.heading = 0.815547508607;
    msg.data.assign("XALTNNGUPQGDYHYMOFIENSLODY");

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
    msg.setTimeStamp(0.664403633481);
    msg.setSource(39879U);
    msg.setSourceEntity(189U);
    msg.setDestination(64854U);
    msg.setDestinationEntity(69U);
    msg.id.assign("KRGGIQWCNFIOFAOKJYFMXDMVPEJHSTYBIOIEXFSYBZJVTQAGGFJLZTQUSEUTW");

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
    msg.setTimeStamp(0.671306763905);
    msg.setSource(47879U);
    msg.setSourceEntity(38U);
    msg.setDestination(41388U);
    msg.setDestinationEntity(178U);
    msg.id.assign("HKPWAPNSOFRHXCBKTVGRALUZDYYGBVMLAXDVSXQJNWABCJDWFECKTBUSKXRTPNQAQOPYODUCMHIKNZUZZIROIITLIXNX");

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
    msg.setTimeStamp(0.217145985976);
    msg.setSource(13990U);
    msg.setSourceEntity(28U);
    msg.setDestination(14035U);
    msg.setDestinationEntity(104U);
    msg.id.assign("TDWKRCVSGZNXKFIKRDBCSHHWCFPTFZWYNBRAPUSYIDYAQFDUCIVUHHDIECPHBXLUKMVHVJYQHQOSLCTSAGTIIXDNEJQYZYRPTJFBIODUIVMAEIRWMLFBCLRWVQCMKGAPFURGKSOPVFMGIEXCWLPLYAEQEBLOZDBJJBWULSLUTWZNYGKSVQZKARRKZRXNXXMJJHEGXODQNQAYTJVUTMXKGGJDZAMWSSFMPFH");

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
    msg.setTimeStamp(0.796833867399);
    msg.setSource(23608U);
    msg.setSourceEntity(145U);
    msg.setDestination(13430U);
    msg.setDestinationEntity(178U);
    msg.id.assign("TXIXNYELDPRQQGYPCDHCVJSAMKOPWJUASENUPMZIHBHLZEWPRKJHBFNDUENVDHVGYRXZ");
    msg.feature_type = 235U;
    msg.rgb_red = 71U;
    msg.rgb_green = 113U;
    msg.rgb_blue = 245U;

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
    msg.setTimeStamp(0.423589147663);
    msg.setSource(43059U);
    msg.setSourceEntity(1U);
    msg.setDestination(35459U);
    msg.setDestinationEntity(189U);
    msg.id.assign("LRDJZQTYCUWMXAZHABFQJRCNCXKRTYGXADTQZMFYJDKKKMQECMTJDXHPU");
    msg.feature_type = 103U;
    msg.rgb_red = 102U;
    msg.rgb_green = 57U;
    msg.rgb_blue = 196U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.298364073891;
    tmp_msg_0.lon = 0.0801453642175;
    tmp_msg_0.alt = 0.435861966676;
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
    msg.setTimeStamp(0.833385389152);
    msg.setSource(61579U);
    msg.setSourceEntity(210U);
    msg.setDestination(20295U);
    msg.setDestinationEntity(165U);
    msg.id.assign("JDTGALFPPDTKIHEIXSIPAXXIFDGCESSYKOBENMXDBPNPYJAHZUDFIEGGSVKLEOQHQSRGUDCMJAOTTESDFQSGLANWUPJYTKVKWOYROVBSQAZMOUUIOBYRNCIHMUAWQCWHXCBMVCQBYRDWZRYKEHQZXTRBKJDBVNUKOOOCQPHLDNRMCNGGCGPYRJZZVFTXJKFZWNFVTLVUSKHIBGLZLBZ");
    msg.feature_type = 83U;
    msg.rgb_red = 41U;
    msg.rgb_green = 60U;
    msg.rgb_blue = 195U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.851735066028;
    tmp_msg_0.lon = 0.842893991336;
    tmp_msg_0.alt = 0.587536290194;
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
    msg.setTimeStamp(0.512495418224);
    msg.setSource(21495U);
    msg.setSourceEntity(69U);
    msg.setDestination(26154U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.285001834796;
    msg.lon = 0.118065067137;
    msg.alt = 0.200002331041;

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
    msg.setTimeStamp(0.114391834668);
    msg.setSource(49910U);
    msg.setSourceEntity(22U);
    msg.setDestination(9367U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.451173638746;
    msg.lon = 0.0534909363117;
    msg.alt = 0.560419787517;

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
    msg.setTimeStamp(0.266093855054);
    msg.setSource(28840U);
    msg.setSourceEntity(9U);
    msg.setDestination(61893U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.356156622276;
    msg.lon = 0.588273141207;
    msg.alt = 0.219908674378;

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
    msg.setTimeStamp(0.543052274698);
    msg.setSource(11238U);
    msg.setSourceEntity(133U);
    msg.setDestination(7521U);
    msg.setDestinationEntity(136U);
    msg.type = 66U;
    msg.id.assign("AWOWGJWOXLTRWKXMEQHSPTRZPWHFSFHEGMVIPVVNYXWNDFQXNAMTZRZORUKYOBELBPQM");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ZDEJHMDRGDUKTDLKZIIWHFKBABLMLESVAOEQIDQVVSLPKBFXTGYRLEVTJUECKMSPNLKHOVOHMCNLCXRNAWRFUDQPCUOWOJUGAPMITCBSSBFNYHTZQFVLECAHQVOYYYUMYBJJMGYFWXMPQIUMCYSKOVIPZRVJKRGGFRLQXQSXTUXTTONJDTTADUZBBPYPBLZFXCAJZHCZNSSNIAFEN");
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
    msg.setTimeStamp(0.806439988243);
    msg.setSource(19064U);
    msg.setSourceEntity(76U);
    msg.setDestination(33415U);
    msg.setDestinationEntity(83U);
    msg.type = 189U;
    msg.id.assign("VNONAZFEXDTGYNKHEBDIUDDSQSSYCXYBOJSGTJDEYXFUCORQUOEMZBHTHSLVTFPRHJOILMCKUNWHGEQQXQCKITVWAJRMXJCEAMLJUMWJWZPT");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.77566656375;
    tmp_msg_0.lat = 0.8801694569;
    tmp_msg_0.lon = 0.532539325368;
    tmp_msg_0.z = 0.0784819468894;
    tmp_msg_0.z_units = 18U;
    tmp_msg_0.travel_z = 0.589166205421;
    tmp_msg_0.travel_z_units = 56U;
    tmp_msg_0.delayed = 254U;
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
    msg.setTimeStamp(0.236191613753);
    msg.setSource(60782U);
    msg.setSourceEntity(135U);
    msg.setDestination(55208U);
    msg.setDestinationEntity(215U);
    msg.type = 139U;
    msg.id.assign("PZFHMGMBIOAGLMAPZUDDMVRXWCMUKRETCXMNENQIJVJBURFFKBAQMHGTQTKYGFLAPCOPTXYYXSNCIHYCTOHJUZSXNCCUDYZCWHVEIWROWLPFTSLASFGIXLLQLPBLQWCSDNVAZEEYEOQPFVINFRHWXOTWRSIMJOVHDKWGZIDAADSHRNSLVRQXTJEOAFTGMHPZSDWEBXZEGUTY");
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.471421740063;
    tmp_msg_0.ch02 = 0.83404481238;
    tmp_msg_0.ch03 = 0.753335145668;
    tmp_msg_0.ch04 = 0.934738540156;
    tmp_msg_0.ch05 = 0.665535980458;
    tmp_msg_0.ch06 = 0.297250460697;
    tmp_msg_0.ch07 = 0.386192235204;
    tmp_msg_0.ch08 = 0.905692423331;
    tmp_msg_0.ch09 = 0.245316414103;
    tmp_msg_0.ch10 = 0.0339154174731;
    tmp_msg_0.ch11 = 0.229118843339;
    tmp_msg_0.ch12 = 0.29826003826;
    tmp_msg_0.ch13 = 0.940780847822;
    tmp_msg_0.ch14 = 0.861260102488;
    tmp_msg_0.ch15 = 0.544135924116;
    tmp_msg_0.ch16 = 0.33035073754;
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
    msg.setTimeStamp(0.928446443467);
    msg.setSource(61480U);
    msg.setSourceEntity(6U);
    msg.setDestination(28629U);
    msg.setDestinationEntity(38U);
    msg.localname.assign("EKKYEXXXBGAVUEUHWQGCKOORTOOFCRQTNLFOUDPPXTGKJZH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OPAQRHZSECBBQAPWQJOKFOFZDFNIVOKHAYMFGXUECTRGGKLSBITBALIBPCKKOVPTXMOSZQHHWYMTOLXSZ");
    tmp_msg_0.sys_type = 30U;
    tmp_msg_0.owner = 28594U;
    tmp_msg_0.lat = 0.471919373426;
    tmp_msg_0.lon = 0.917331599877;
    tmp_msg_0.height = 0.657450034179;
    tmp_msg_0.services.assign("VIMWDNCQCGAFXDVOIKLOGREYTLVPWMZNLWVZAHRBPYWSUBVQRUTOHWSOQCJWXKUYLLXXKVNSUEQOCGGGTSBDSRHXJAQNCZHPGFKSHZCTOUERSKXHWBILVDJEMTRWFCHNRIMLTDPDTNTPWDYBPHAFTMKFFIIUOUBMWUJMPHKLAXMJJLGIGNF");
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
    msg.setTimeStamp(0.38117288032);
    msg.setSource(1543U);
    msg.setSourceEntity(17U);
    msg.setDestination(50131U);
    msg.setDestinationEntity(170U);
    msg.localname.assign("GJURINKZCKHQTZFWHOFBXGFWKJXBCXBBQZDVVTJXEKRNDIXZRMCT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ILWWISNPEJGEECBTTLUGQVRTPNXLZRVRANWGXWTWZFWFMTCBOBSPTMEIRARLYKDORIXPPRMZAYUMHFJUXDRHJKWCGEXOFIABLQYHPGLXJOEOKPSDLBNMXUDCZQFOVTUPBJCHHQBJFFSWSMIHSLVMFDJCUTYVOQQGUYPAYZRMAAVLNDTKBVDMNCRQKWJDNJSAXWMYXAGEZTOISIKNKIAZQFUEDQCPX");
    tmp_msg_0.sys_type = 163U;
    tmp_msg_0.owner = 50241U;
    tmp_msg_0.lat = 0.576009530823;
    tmp_msg_0.lon = 0.183519202678;
    tmp_msg_0.height = 0.265347237522;
    tmp_msg_0.services.assign("PROSAWNLWPAKQVZSLHMFQATXIZSDNFLJTWDWVABSRJBYHYHXXJYGVQSHPGTKZWNJUSLKYOLUOCFDRMOEXVLRELKZXSXNGZGUOGAFFRPAPNSNGPGDOVWXZVKCDFXYTHREZGVVQRXTTBJGDOAKUUCPBKKVHBWKJEIQLEBQJSADBMFUDOIOJBUMFIURBJQTUQOPSCNEIHZENXGCIMWDYMAYFRJQMZTICCVWNEACPLN");
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
    msg.setTimeStamp(0.493776098461);
    msg.setSource(42870U);
    msg.setSourceEntity(244U);
    msg.setDestination(17886U);
    msg.setDestinationEntity(137U);
    msg.localname.assign("TZGJCNHEXRQPSTKDVCGMIOLSLUABYDPGKXIJNTWOBXYBYQFWZKOGOLOHDDEKCFPATAMQXECLWJGHFVITJAUZWRYTZSCJMSRVWNYULMGHNOJIXYFRYQBGQPKEMVWKYXBQLMEZYDQOVNXPXIDWBFHUDJITWSFTWMFQTPSHDRAPACNBONUBLZRHIEYBIVJFESCODKZMEVFQUL");

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
    msg.setTimeStamp(0.660813642251);
    msg.setSource(29994U);
    msg.setSourceEntity(226U);
    msg.setDestination(52361U);
    msg.setDestinationEntity(110U);
    msg.timeline.assign("FDWMWDKMVZNGBKFOVISXATYWTSAQKHHCJOUDNGYZRUGRJCDARKXVFYOJLLQMYTHNMCMRGLHEUEXKDNXEHVXSVWKMERWGVOLFYBTEUBIQCUXWZJYONXHACIVMFANCYSYSPYSLSNDASGGCZLTMNJUPQPZWRKAVJDRPQCHPBRIEUOADMPTLXCPAMJBFZT");
    msg.predicate.assign("DOFMOUSTKVPKJYEJAWHDDORBQDRALNBYQSYNMRPIPGATSODJBETOWWPZEXQVUQ");
    msg.attributes.assign("RMXGQUTXUIFILEKABMLAIYOFSPDHYRSIQBZDCEIFCGWEXZGGWFGCHOJBRTDBBTSRREKNOAFZM");

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
    msg.setTimeStamp(0.191633976123);
    msg.setSource(55285U);
    msg.setSourceEntity(50U);
    msg.setDestination(4255U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("LDJSHSWOKMLZZZTKHJOLIGDXWDMAE");
    msg.predicate.assign("VYCLWKWHSPYMPPPMDZLWKERTBSIIHLBYHNMBPNVVKZAGIWJOCUQNFYNPAQQTODRYRHHUCCNAULMVBEQVCLCHUDOZPQTABEVAOTSWBBKRJVUUTKXBMXRTDKFSJDLXEEKLFESUGLPYFTDMASZHUFTROEOSYFEAXQPRXSICGXWF");
    msg.attributes.assign("BLWWKDLEUEMALKDHPYBSIJNVHBAXXUXIYGJGIOOXFSZGMZESIVSCYR");

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
    msg.setTimeStamp(0.0794864736857);
    msg.setSource(47032U);
    msg.setSourceEntity(104U);
    msg.setDestination(7482U);
    msg.setDestinationEntity(126U);
    msg.timeline.assign("JJNODURPQDRLFBZINDQMNVJLMKOTUZQYCDYBUBTPMNSXDDBXXUXPPRMTIEZCTVDMOVYWEFQTFRNXDUWUTGELOLWNYGIZEQHSRNOFALPJKIXXIHBPOWNTLZCGCIZNHSHAYCEITJWVSAVRCRZHMLMMELSUZGFKGRUWNKCJPWKXAYEHCY");
    msg.predicate.assign("RNHXBUTKUQVZVEQLRUWKTOWXFQBSFNORAYMVHGDURXAWLKRIYBHSTEPKDGCYRREGLEPPBHSMCIOZTXAOCQQZNCSPZADPIJKBDQGYFJRUIENMIBMANNXIVHYXEBQEMNKFZJRKQBYGXOVHHHEJGWJJIOUOFZDSIJGPLZNCKVOFOXSACLDWNMSWQ");
    msg.attributes.assign("DNMBDKUQKMOLUPGGRCCCHMG");

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
    msg.setTimeStamp(0.82478540185);
    msg.setSource(34896U);
    msg.setSourceEntity(103U);
    msg.setDestination(52545U);
    msg.setDestinationEntity(165U);
    msg.command = 153U;
    msg.goal_id.assign("UNCVNFTZVZVLVTCJHSMXKHCIMRULEUTKCOCXNLXVQLAOMPMIXIDN");
    msg.goal_xml.assign("IEURVIZEJRQTXDYZCJPTMOIMSAOVGXNNHSBPSDWSFHMAJPQPZYFH");

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
    msg.setTimeStamp(0.372647198573);
    msg.setSource(30468U);
    msg.setSourceEntity(154U);
    msg.setDestination(62954U);
    msg.setDestinationEntity(134U);
    msg.command = 25U;
    msg.goal_id.assign("XBHQQJBJFQMYMPTXHFSKTOFGQSELBJAQEVCQVYWUFCRLTFIOIHSNAZMURDCMVLAGHLSVYIZVVHZKZNHKEUBSCRWRYYFYYEAJJOSXPNWKIVKMRJXYGKNPYBONIWDNMCKZUSHPOVRDSDQCDULRSANTLDAXSKNZOGIEOPLUIWZZGWGDBQYTOGCFENFQKBUEDVWDHIXWOXQAXMWBAOGBWMTLDLUJRFUZNXPGTPAFRTHRIZTGEIJECM");
    msg.goal_xml.assign("WJCFPUIRBYSFWLUHPSUOMYNDYKKNRBPDQTXJTFGMIDLQOWDTGUVYDDWBPUBGZXAUUJHHLAISO");

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
    msg.setTimeStamp(0.23821982235);
    msg.setSource(29473U);
    msg.setSourceEntity(7U);
    msg.setDestination(64988U);
    msg.setDestinationEntity(6U);
    msg.command = 216U;
    msg.goal_id.assign("LBWKKFIUPNCISQJQSIYWCBLWMEVZBAXNDDJLCKOADOVHJVIGLZMHOCPORLJPNEIEYHEOXUYOQZKUKAHRZVMNUKMRDNLBWJGIATAFHCQVRSTAKZLHQBBVZRIAYEUDOGXJMQGWMNFITPMNWJWKGYPSTP");
    msg.goal_xml.assign("XHHNGEYZOZGCQDEUEKRDVFOACLSUQVNVCOANWFSHBXWNBCFUEAJLATZSYEMHBSSJGAFLVWNXHUUOXPWNRQGRDZDISDMYBCLJXJNSLFIMRMSRKBRHOOWNFGLTBJIZYUWSDOIDDTKYQRCRZMUNJQMKXZXVCSGLXPVAVGZUTABYIGYIVCETQCGREJZEAPOKDE");

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
    msg.setTimeStamp(0.675449555528);
    msg.setSource(22118U);
    msg.setSourceEntity(209U);
    msg.setDestination(5499U);
    msg.setDestinationEntity(76U);
    msg.op = 243U;
    msg.goal_id.assign("LDNMZYLAKXPHQJANSBKCXEAFZRYWHESMBSHQBJCVUP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JYOTRVKPAYOHGBIXNCNLJQIIMJRPCLMNNSILZLAYKFNXIOGXZEKKPYNOXRJPBPUANSMHBGQRUUAHJGBUKXBDGGVYPNBKCDFPPUQVGXJJZKATGLRNALWUKVQCMFZTMDGZDHJFBEMHDRUYIABEASFXFQOTWEWVHWHSQVBVA");
    tmp_msg_0.predicate.assign("OCGGBMNGINQPLZWJEWEDFEFYTGNFRLNDTMBBAFSJXJTHYSMBSIKAYKQCKVMOZMNRAVJUBDYRQCXEATUAUHPUIMDIPHSKPWXGO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DHDSKWBATXYNKUEAGDSOOGAIFMFRSNNDECVZZWZHJISJTOHEFROLNTIXJZKFVTBYJLWFHBOESQIMWUCJVNHUGXARHLGJPATXHSQXQRYQZGKQRDKMVMQVWUIPDFUJBOXLBQPXVYYKCBOPFSZVSPWVYZLNCCVKBAPPREIJIBNCERGXQXAGHMZOZWETG");
    tmp_tmp_msg_0_0.attr_type = 218U;
    tmp_tmp_msg_0_0.min.assign("AZVLPJTPJIVOMPXABLGROYIEVPYFJBBNQQECRFTWAMHAJSNHSECVMUJOYBKAMFUSGCHIKYDMKGHYWONDJOZZWOYMTXEPNPQNXPDUSTFDEGVIGWANKUQZMEPYDXSZKNKYAZFRRUAMBMTZ");
    tmp_tmp_msg_0_0.max.assign("LPONDWUVNOBOZHWLMDYFPHMZAJTNTYUVERLUIEGRURIJEMIPZOTNXHDSAXRDZFINQPWKLGABCUFHHGQBHOQRDTLCVGYOLAAJFIGFCMTFZQIENGZCMYJAIRUXMKNXXMWCHOEPAUQUAGBKNGSCZZEVLKXMSCDTGKEJXCVSQKJAKYSYPPWQSI");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.691621862417);
    msg.setSource(11234U);
    msg.setSourceEntity(207U);
    msg.setDestination(17552U);
    msg.setDestinationEntity(247U);
    msg.op = 145U;
    msg.goal_id.assign("TTXBMLIADVHNVNYXBOLCYPDNKBEJMSFGXESWFDARLCPOMSQRSWVIIQYONFRWCMYLZBUEVWHAXNGUZJKSTAKOIPHHNQQCKZTDNWMBVNBHQYRRTKLQUKPCJICITZYCAFHRXQNXXZEXLZODGEPIJFNQUEPPEHYAJCKVRUMGOKAHUBMFZLIZSVDSGDKJSWJLRSOGAF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DPBSUPCQZIVLPSANSLHAEWTNFHHKDOYPXJMBXKTMIQEWQAELAUVOGGRYJUBPVKYORCRDGZIIYCEFRLSZZXQKMJFRUESADFHYNFOKSDAPUHVKFUWNNHYWBAQGILEYWGONHXKPOOZGXVLDZGGTSTCKVBEVC");
    tmp_msg_0.predicate.assign("AHXQILZKBNTAGIELKAPNNTUOYANKKGWPTJIOPAUCEJLHDWDSVZUVTFVUXNLMYQSNEOMYPJFIUZWAWJSWMHZCSXORYFTOIEFYKFQFHCK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YKVGOASFEZGRRMKNWCBOUIJSKDFUBIQGNZBULCEHTKSNPL");
    tmp_tmp_msg_0_0.attr_type = 181U;
    tmp_tmp_msg_0_0.min.assign("JLRLQYGYFPEKKYRNOUQFMXRAIYQZNSRNSQCDIBNLSYSPBOMZOHCMFTSRBKLINDFQRGMYGWGWXKUMLHPDAAXNVNWVGPOINBCDEDNZNCTOHSFJCMXEWASIUXEEETEYKXBTRFQFKIAWGSTMRFPVJSDU");
    tmp_tmp_msg_0_0.max.assign("IMLXRQURRHCUNKOGUBEPHXZYQLADPKSFUDFVJZYAWRHHCNFUYLDNOSLVRDYIBCSYGPOBQOEKFWDSVHAJBFOEELQHPVAKSOQGCUMPTEAAWGREFEXZKKEWNZCIMQHZPQCDVKYPCQYJBDXKBRNFDOTTILLJQJVJANZHREBYZOIQNTGSOIUKHZOVYWTXJIMAHPIMDMZBMJUCXRWVYJ");
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
    msg.setTimeStamp(0.65061624362);
    msg.setSource(10820U);
    msg.setSourceEntity(188U);
    msg.setDestination(4174U);
    msg.setDestinationEntity(114U);
    msg.op = 124U;
    msg.goal_id.assign("ECFMZUFBPQNHVEZIQTAKLBJVCYCRDOHYSTGCUPWPXARDWYEGQTAISQCONRVRPMDEVOASKKGOYPHXEKKDFWTHGXLVWVQJIVCMVLNYPRGRHSKFCIZCIAMXNDOBZDMBMGNHUNGQVTEJXZFSRWFLJBHTGGD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UTRJPCGXGYMVSVPMCYKYTDE");
    tmp_msg_0.predicate.assign("JPIIKZIQNBENTTBIHLAOHMELCBAWQDRNSRTGCRCGJAKCRZXEFWLJMQFKDHVADFVDGYNKWDSOKXLPHPZVKAETLERBMFRGZBJGLXSF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PPWIWHCYEBBKHQIVFJVMIHZUOKIDLFYBMDQTWNRRLZXYSDCZIXAXAAPLKPAOWTKOUSBNVWMTVTEMLUJROBJNTWRZYHPJEOPAASPDOMHZSFNN");
    tmp_tmp_msg_0_0.attr_type = 120U;
    tmp_tmp_msg_0_0.min.assign("VCJCMMKCBHZPHDGEINKQAQ");
    tmp_tmp_msg_0_0.max.assign("NCDDSWRXHKSNNVVYWAGYUIYGRUBFSYWCEZVHDKLKZLFHPGEPVUSLANVEEIXOHUBJQVCMKXRPXIPIMGHPTFIUBCBUMOOTJIXFJJFTAWSKMOLYEZDSAGLKPXCYGLBWF");
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
    msg.setTimeStamp(0.458959480233);
    msg.setSource(43760U);
    msg.setSourceEntity(86U);
    msg.setDestination(51043U);
    msg.setDestinationEntity(151U);
    msg.name.assign("FHZXMJUOBZOJRLYHAYTOMKGCNEKNBCIYVZFQNZWYALQCTKPSDBHSTCXUHQOPOBFDFP");
    msg.attr_type = 7U;
    msg.min.assign("WTVSQDIJAPTLFBIWJEUBQYOKSLYBIZBFZNMNOIPDXGVRCQUOSPOPBEJMWGZYLHEYMPHSFEFU");
    msg.max.assign("NCYVAKIFVCSVIIBUDATNXEHJYOTNLKNUJQPSDJOFDGGOWIBLXBWDPLOAUJRHYKERFGYFBSMTMLNWHVZGTPMAERATWHACHMVFEBKENUYSXTDWCGULYPFQMRTBKQESRYGQPVLESLQIRZXDJPHOQMBIJTYOKPZRPDRJGLZIWZFMWQIXJJHSTZQXGGUWCVCQZAXOCM");

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
    msg.setTimeStamp(0.282161395213);
    msg.setSource(31158U);
    msg.setSourceEntity(110U);
    msg.setDestination(7097U);
    msg.setDestinationEntity(211U);
    msg.name.assign("IFSAEZFPASKIWMRIOJKQTLKBMVZGIKWVZVHZUTEOSUTLHCFTTIBNHATIQWCGSPICMJYPLNYFIKOWJXEUAYBJAAKOMAWYNLDDGXOPGLFCEHGRMSZYHQMFRUSYXDBXCDODEVYPDVVNKQSOIQPXVFGYDMRDNTENERZUCHMFGMZFQGLMYQRAKOPUZJPDTQHBHXXPIGNUSEKHFCEVBJBQBCOBXLQDRRLZVXPYCTNZTJWBUSLNWJCSKALAJUREWGVHJ");
    msg.attr_type = 52U;
    msg.min.assign("XWLZHVKIQGPQSPNNFLQEMKDSETHKKZBACYPCLTMGRSKEIAFITNFOAIWJJMCWZACNBZROXDKYMTCLZVGKMLXMGZQUQTOIRIJBCCJSWJTNBEHPRNPQVULFHKDBQTYIASRFXAECXGJXFMSVPEHPAOZHVZGYMERUXSPW");
    msg.max.assign("HKLZGDMPWVTVDGJTBWBOPVEJPXCSHFBNBIQRPBHNCYUISZUPLRHMBGNBDREZYYJUDEJAOFNDGPIMVUCCOWLWWEFHZWJGABZQWRYQJATGLDAYIOZEYKIVYOELNSEFZZMAFUEUCXKDULHTYXKCCJVSBVAMPPQOKAZRAIFGUVWGEASIOKRTYTLKHJANFTXMNXJOHCRQIVHLEBDIOSQCNXCSVGNPQTTLFWDGKUXDXUZRHFRSMKSJMQTFXILOQN");

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
    msg.setTimeStamp(0.497849122178);
    msg.setSource(8470U);
    msg.setSourceEntity(234U);
    msg.setDestination(15128U);
    msg.setDestinationEntity(209U);
    msg.name.assign("CWDGYARZZYLBILGWJBHBRTPNPEQFXPIEDRFARZFNDXXOWYEFFMCEVGZDTIZVZUKJYMMSTEYBHDUDCILPCVXSBLWMPEDHHYHJOMSTDGQLFTKULCEMXAVOJUZOMDVOWXOCPYKQPTBVNSSGNWQQCUOURUCSQJKKRYAXBOMOHVILHFHNRPOJWASV");
    msg.attr_type = 0U;
    msg.min.assign("GXDSEKRHSBITSYSAPVMGPUBJEFPINMPAMUPIYBQKMCFUVVXKDAGCOZUWWYLIOBXSKLPXTBUIJJRVVAAOUFHMUYWTDUFCZWXYBNYZVWFHWKMLEOGDNXGPMBGRINMJXCHCDJSSDTCKNVLYQEAEXNDSJFXPRTFZHPQOTTTATLUKNGWYCQQFOBJLZRONQRBRSQHVZRECMUKWAGWDLLQQ");
    msg.max.assign("YUIDRYYETYXJIFZHFNKHPJCPBQMWBKCLSMJHSROEGNKDHLMITMVJQNNXXCEVWKGIZDIJRMLDMXWTNBZXYEVSMSFYEKBRUIQALCGSVKWCLGBPFULWFAWPWOPYKAJTGOOVIWMYXJDDCCJEZSFGAQXDEOPVRTFKFUFBZLPZNUWRQZEHRBUHYJLITZRGAGCEHSPKPATBDACMXRQVIAXOANOOTLIUBDTWXOFQSPVZHHGMTSGADUSQVOHJKRU");

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
    msg.setTimeStamp(0.628128690208);
    msg.setSource(54508U);
    msg.setSourceEntity(61U);
    msg.setDestination(54841U);
    msg.setDestinationEntity(109U);
    msg.timeline.assign("RTQZEDPQTXCYEHXMJONCSJDEPJUDKBSQOCIYDGIW");
    msg.predicate.assign("XPYCAUMIZCALDWEDPLXWBALKJUVONBGPORYPYJLETVSQDCCVKGCQKEFBBJENDYIMFRVGBRINWKIIJQLQIBAOVZRMJNODLTFYSHHUSSWTMPYJYFWWBOAWO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PORCKFBQDLHVNCMVUMBGGANYNSJGGTEDFFBCIPKBIMEXSVSBOTNLELXYAOXLCZRPQEZRHKEJWMBNRWGJUXLMYSEHKHJDJZSASQXIGUBPGDNFANATXUQAAVVFQZXICFIYRGKHPTHIQPCOWOSEZLQKYUNFNUJZAHSUKWPETUBTZVRGAOGWYOWQVWIPLSZJXRNOPUWKBYJTQKI");
    tmp_msg_0.attr_type = 102U;
    tmp_msg_0.min.assign("JRTUTPOPBRIQBHKMTPUFMIPEABJQRQYXIQJEWCF");
    tmp_msg_0.max.assign("ATQIZELTMJDPHREKYBXNBUKVBEZPYXXJWK");
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
    msg.setTimeStamp(0.663521165846);
    msg.setSource(24007U);
    msg.setSourceEntity(146U);
    msg.setDestination(12165U);
    msg.setDestinationEntity(246U);
    msg.timeline.assign("NAUZBQCQNCBRJRCLIGUYHHBSZVMRDIDLCSCFKEZKHGYGELMYHVWAHAQCIJTFCZYILWAWOPWMMDQIEXXDFTEWXBEABXRDGNSNGOOZOPMCPTMPMKLGPUFWFIISGPAYEXVKZOXRQAQBLEJOQUVOASRNFNURJXUZCJYHGOFUQLVUINLWORQXPBKAHZDNBDYYMMWTVZJIKSJSSWJTHJJUTWKFTPBGTXASDOLBCDPVEEFGKMYTEPTRXR");
    msg.predicate.assign("BIKWJAYASWNANUBXYHZHRBSOPTUVCPEERUQCOFHWKMXGBVQFPKOIAVGWLCSNIZEOYFQDKRPTMETRNDYNQFTECILIXCZKTEZRS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JHSTMTOWCCDIYLGFNMFPTTEMZCFNDXAYLKRYAPJKMIECWZKRUAQGAYFWBDECGUHJIRIICVSNIXEMVLJFQH");
    tmp_msg_0.attr_type = 24U;
    tmp_msg_0.min.assign("PZTILLVOVFPQRXFBWFKCJLOHBYVWQQCXZHMCBARAGNGRXBXWNTMZIUOURMVEOQLZMHZIKDYZ");
    tmp_msg_0.max.assign("SMQQJTPKIWYBXSZAVYGRCMWPCCVCHZNJDAZLYJTRJXDQPIEXFOOQFBBBDFNIQSYAAYZCMHXLMCSSGSUJGPA");
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
    msg.setTimeStamp(0.644224166984);
    msg.setSource(11640U);
    msg.setSourceEntity(146U);
    msg.setDestination(6069U);
    msg.setDestinationEntity(6U);
    msg.timeline.assign("OIRHSPYZLKCWDQQREZXNAOFENGFRLDAGFJEKLWQPFRVYLBIXYIZFQQBBNRQAUVTJRZIUAXUWXLOPRUEIAYPGDCNFKVZPGWYLKIADYVFPQQIJYHKYLCMEDXDQMKSLXPSFDMTSBMHNCNTGXZSVKBTNPMZHELMAUFDIMEWOKUJSJTXIJTOADOSNBWRWZJGTVMZXJVQSOBBVLHAKHVDPGBUOWCCTTYJFHZHSNM");
    msg.predicate.assign("IBCSMIRDLAGGMSOZLUCRGVNVNWQDDRWTWTLFBPAGOVUNNFEHYUTAQIJZWHTNQTEKDEFQVZNWMHVLHPXISCMIEPYMPKSMXRTRWJUNGJBRCTAANZJOHUOJBQCBYZKHPICKHHUFJCSFVKNBJEMJFVPZHYZRGJIRZBODVSGAKOYXSAIAYMFQCFGOKPZEORBGXMUXDEX");

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
    msg.setTimeStamp(0.597192881541);
    msg.setSource(28195U);
    msg.setSourceEntity(230U);
    msg.setDestination(30209U);
    msg.setDestinationEntity(40U);
    msg.reactor.assign("ZZVQKEFPJXUTLPTHVBTLSKDSXYYJSXJTAVQHWVCADKUOXIDCZSMUOBJUGPMLMNQTPTDGFUIIVOBJRHYBYYKUWMRFFGWCPWYXRALDWZBFSVLXNSNQCCNURGQPDBJFVFJQISUHEZBGAUMNBAEWLKCGVHZJI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BNWKHODTQKVAPDONIRRLHYULZUXCMLZFLDVCCDXQEZDJENOHDQXWKRBDFJNAAEAMJWYVZVYXYXJPAASJCDMZIXWLLRWFNESQACCJI");
    tmp_msg_0.predicate.assign("BPDWCPLAULSSZWKTBMLQ");
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
    msg.setTimeStamp(0.586889790588);
    msg.setSource(11495U);
    msg.setSourceEntity(218U);
    msg.setDestination(33880U);
    msg.setDestinationEntity(227U);
    msg.reactor.assign("ZYRJVBACSKCDTCEFFBXTJSHERUZXJNOVWMHBAIYTNVKEOAIDGUPMHJQIPPJFXBWOZULZLDMSECNYGHGYUCWFVIHLENYWKRCDMQCCVSKLUXVHJLGIJGBEKBMXTQAWIRGVGRGRXSYPZAQPRFULVPJAWSTXEZDQPBFLLSQENZWXIIYZTGOSMOTLMPCVUSJFKPDCHIDOBNMXREWDPBAOQNWYOFJHMNRIDYSNZMGOAXVFKTRZTUBQEU");

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
    msg.setTimeStamp(0.758133840868);
    msg.setSource(53733U);
    msg.setSourceEntity(95U);
    msg.setDestination(2672U);
    msg.setDestinationEntity(203U);
    msg.reactor.assign("IZKOGDOMUKKJXTVVZUJPLNFGHYGHUOFDHQAUBULCEIFOYLVNMIIMMHPQQWLZAKRXHTAOLBBXDCTVRUQGQRMYJVAZBBYEJMSHWZDWKXRGCLCMRXMFBYEJVCWCPKRUFKWAOJOPRENGJZSUDPWDSWBXS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AEVZBJEYUABUVKVJUDYJNAOWYFPFTOPLLCHDYWBXJDGJZPTESNZPEONZMHLRJQQWUCCSTYHXAGSSLQPUAHGNMGGIJHKILKTENHZICOSHRIKHQZPNIRMABPIWMBMVRSCJFUSGBKRLDULOCARGTRGNOUAIXWJHRQICVGSYNRKYNZC");
    tmp_msg_0.predicate.assign("UZNAROTLXNHCGCSFRRTHWZCBERJILNOUHFVGEFJCHAPAAONFBEXNHDVJQNCSVXBU");
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
    msg.setTimeStamp(0.204062925121);
    msg.setSource(51704U);
    msg.setSourceEntity(97U);
    msg.setDestination(10954U);
    msg.setDestinationEntity(223U);
    msg.topic.assign("EVGXVJRQDRLPRAPKOLXNW");
    msg.data.assign("PXUJZTVNNEPWJSTDJOFRHTSJWNNGQXSKGRDLOKYCKBFATDMBPXEZQYTUGKUOPQILAIFSAHLWSSIQDJFCAUITZGPHDLPWOGKZEBTIRNFUKOVEVQHYDSJWFNAANAIHEIVXZESWIWXMNZNQUUDOMMVZFLXRXRBEBHLRYPSOAPAMGHQYETVGVUKFVCCJFBROLMBZCOSVQEGROQXJHVYGAWBBKCUMWPKBYXRTTKDYLCYICYGRMHILEMM");

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
    msg.setTimeStamp(0.140168229221);
    msg.setSource(59683U);
    msg.setSourceEntity(34U);
    msg.setDestination(26568U);
    msg.setDestinationEntity(110U);
    msg.topic.assign("SMYBFHHFWQGTYETMFXCYJMVNSUVCXPMMLQTOIDR");
    msg.data.assign("MWRPZPRFFNUVSXVVSSFFJHKWWVQGJYHUWTMDVBUMAMOKOOZK");

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
    msg.setTimeStamp(0.248447177907);
    msg.setSource(31884U);
    msg.setSourceEntity(194U);
    msg.setDestination(12151U);
    msg.setDestinationEntity(30U);
    msg.topic.assign("BUGRULPGEVLRQPXZKXMPGFSHDRCCRSOWJIJMQWZULMOZTXFBZKJVCGZXAPKSXDCJBOBSCVWTQJTFEFDNCPKXIULAVFGXMQYVIQJYXTEEGHYIRHVFRQZOKBJGTWKHQUNWADHDLALCZQVIWTYFHHUWMIDPJDCNYZQMZTNOMJAYSKNMOENSLDETWGTYQ");
    msg.data.assign("NSIIKHOGPVDUNBD");

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
    msg.setTimeStamp(0.486026772329);
    msg.setSource(12998U);
    msg.setSourceEntity(9U);
    msg.setDestination(47553U);
    msg.setDestinationEntity(66U);
    msg.frameid = 48U;
    const char tmp_msg_0[] = {-106, 47, -17, -27, -127, 58, -86, -19, -124, 85, -94, 62, -78, -3, -66};
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
    msg.setTimeStamp(0.456857183683);
    msg.setSource(56792U);
    msg.setSourceEntity(131U);
    msg.setDestination(26480U);
    msg.setDestinationEntity(191U);
    msg.frameid = 249U;
    const char tmp_msg_0[] = {83, 12, -45, -99, 99, -102, 34, 80, 80, 36, -46, 37, -61, 41, 17, -83, 94, 81, 57, 73, 70, 112, -90, -64, -74, -57, -29, -69, -44, 43, 103, 125, -69, -5, -15, -113, -9, 38, 49, -75, -82, 21, -121, -96, -32, -90, 70, -60, -14, 89, 39, -57, -22, -119, 57, -97, -107, 101, 107, 14, 42, 32, 22, 0, -98, 97, 88, -104, -32, 12, 126, 122, -114, -55, -32, -66, -82, 113, 5, -23, -87, 106, 53, 103, -15, -124, -31, 104, 118, 32, 91, -118, 9, -25, -120, -94, 24, 25, -41, -8, -12, 117, 108, -104, -37, 76, -24, -17, 122, 84, 18, 22, 123, -85, 58, -87, 69, -5, -92, -101, -57, -116, 47, 102, -126, -96, -99, -126, 12, 34, 26, 34, 36, 71, 120, -26, 89, -95, 59, -99, -61, 89, 73, -40, 4, 44, 107, 36, -102, 111, 97, -18, -23, -74, -33, 54, 7, 81, -93, -106, -62, -4, -16, -126, 56, 109, 79, -10, 56, 42, -49, 41, -123, -67, 71, 33, 56, -72, -35, -118, -103, 83, -110, -58, 76, 77, 38, 39, 29, -82, -117, 108, 108, -42, 5, 39, -96, -21, 119, -103, -6, 3, -1, 68, -121, 88, 80, 0, 18, 56, 38, 43, 71, 99, -73, 38, -58, 122, 25, -62, -47, -40, -22, 91, 89, 40, 89, -1, 57, -59, 77, 61, -95, 72, -25, -84, 80, -117, 11, 19, 121, 90, -44, 59, 40, 86, 1, 53, -111};
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
    msg.setTimeStamp(0.707858991679);
    msg.setSource(20065U);
    msg.setSourceEntity(238U);
    msg.setDestination(40464U);
    msg.setDestinationEntity(128U);
    msg.frameid = 224U;
    const char tmp_msg_0[] = {37, -73, 97, -52, 90, 102, 84, -5, -42, -61, 101, 7, 64, -37, 83, 4, 86, 125, 6, -127, -35, -80, 9, 101, 33, 66, 55, -2, 74, -39, 17, 73, 121, 117, 91, 114, 44, -55, 84, -90, -83, -126, -29, 79, 48, -31, 117, 8, -106, -74, 102, 79, 89, 5, 86, -93, -75, 0, 21, -81, -4, 122, 69, -7, -46, -48, 54, -94, 114, 90, 104, 115, 57, -108, -37, 0, -44, 37, 87, 113, -58, 86, -124, -86, 11, 24, -11, 58, 103, 6};
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
    msg.setTimeStamp(0.296255212858);
    msg.setSource(4748U);
    msg.setSourceEntity(39U);
    msg.setDestination(14217U);
    msg.setDestinationEntity(182U);
    msg.fps = 69U;
    msg.quality = 89U;
    msg.reps = 128U;
    msg.tsize = 44U;

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
    msg.setTimeStamp(0.849191758145);
    msg.setSource(64148U);
    msg.setSourceEntity(218U);
    msg.setDestination(22479U);
    msg.setDestinationEntity(214U);
    msg.fps = 94U;
    msg.quality = 243U;
    msg.reps = 133U;
    msg.tsize = 168U;

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
    msg.setTimeStamp(0.791500599593);
    msg.setSource(50728U);
    msg.setSourceEntity(35U);
    msg.setDestination(41220U);
    msg.setDestinationEntity(202U);
    msg.fps = 70U;
    msg.quality = 245U;
    msg.reps = 162U;
    msg.tsize = 116U;

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
    msg.setTimeStamp(0.183908436934);
    msg.setSource(32515U);
    msg.setSourceEntity(195U);
    msg.setDestination(16598U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.076507488202;
    msg.lon = 0.232424281497;
    msg.depth = 133U;
    msg.speed = 0.239632943086;
    msg.psi = 0.0389867176835;

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
    msg.setTimeStamp(0.639111300964);
    msg.setSource(19624U);
    msg.setSourceEntity(223U);
    msg.setDestination(20781U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.483102307706;
    msg.lon = 0.395535383653;
    msg.depth = 142U;
    msg.speed = 0.248019707303;
    msg.psi = 0.0741287628686;

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
    msg.setTimeStamp(0.225969989859);
    msg.setSource(56394U);
    msg.setSourceEntity(97U);
    msg.setDestination(29018U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.913286559485;
    msg.lon = 0.64632716527;
    msg.depth = 36U;
    msg.speed = 0.779587724266;
    msg.psi = 0.693910678237;

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
    msg.setTimeStamp(0.994517935926);
    msg.setSource(33629U);
    msg.setSourceEntity(18U);
    msg.setDestination(59392U);
    msg.setDestinationEntity(107U);
    msg.label.assign("CKETHYLWKIDKMVQQTQTGWRDZERPFMZXCJRTKRFNNFUVKIOEAMZPBEAXXQHCCMOGPQZNGXGEWVSNXLDODJZBTJTRYDVYBEOHHLUFIACXUAUBPLFJGROCIHDJEPMSZIQPYLYLGTALCDKEBQIJYISKEAVJRIHMEFSCSFJWRMAXOOPXUUJMQSHFXLNSVPSYBLUTGZHSWNWRFYBINABPKHWPNWYWBUNAKOGO");
    msg.lat = 0.024129496194;
    msg.lon = 0.297028284535;
    msg.z = 0.502534604712;
    msg.z_units = 150U;
    msg.cog = 0.0693187849756;
    msg.sog = 0.155077373448;

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
    msg.setTimeStamp(0.024910258087);
    msg.setSource(23332U);
    msg.setSourceEntity(231U);
    msg.setDestination(30960U);
    msg.setDestinationEntity(113U);
    msg.label.assign("YJFBHPBVAFWLJIVTMQHEVBSTPKCHPRBFYZWGIOKGUCSCBHJSJODTTUCYIEHOHVNYDQGNHWOLDUIIJAVUUQWDRZFJIMDYVZPAEJNQCHBXCQMSQTQPCZEDLGKEFLVALFGNZWPGAISZFGKSZAMRTVLCXXWNWOJMRYUNGRFAWPGIKAZNMVXBRRUEPKLUOAMEMAJHFQENSRMIQLTTXKFDCJCLDXKEZLRMPT");
    msg.lat = 0.689530510103;
    msg.lon = 0.811050167606;
    msg.z = 0.205770337903;
    msg.z_units = 162U;
    msg.cog = 0.566476534172;
    msg.sog = 0.801120239167;

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
    msg.setTimeStamp(0.159185527555);
    msg.setSource(25410U);
    msg.setSourceEntity(217U);
    msg.setDestination(20706U);
    msg.setDestinationEntity(193U);
    msg.label.assign("NZVIWCKYEZLUVXJSNDHGAXYIDHDCRMWKDMPAOOBTCIDXRKLYGMQRNHEKUWRKLOPNGDUCBBJOGGYVOWZGWSAPRVABQYQLCHLKSIILNQXUNPZOKJUNQUSXZOGFSRDWZJU");
    msg.lat = 0.572257101732;
    msg.lon = 0.946016478589;
    msg.z = 0.249703785508;
    msg.z_units = 217U;
    msg.cog = 0.561431185622;
    msg.sog = 0.785658836277;

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
    msg.setTimeStamp(0.303859243049);
    msg.setSource(2353U);
    msg.setSourceEntity(177U);
    msg.setDestination(23370U);
    msg.setDestinationEntity(191U);
    msg.name.assign("XLINEPUHGJROQDDIAUEGBTSITKRRXWBHKHDLPELRANOHWFERXSICLZFXGWWF");
    msg.value.assign("SFLRTBNLQLFJTGOBIHJVNPNPAWVDJDOBCVOYZMCEUSXFYCWDBAJVICJHAJNKZQYTMQRZHX");

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
    msg.setTimeStamp(0.620346140908);
    msg.setSource(61559U);
    msg.setSourceEntity(254U);
    msg.setDestination(32980U);
    msg.setDestinationEntity(87U);
    msg.name.assign("QWJCTQPOIWRMGMOLSGXRLVXLLVBVXTBWDCVBHYZNIOZISCZOFTURNZIYYTQCJJZYKENDFLGOJSEESXTAVMEVVAQHRUYFHUICNAGFTQGUIKGSRGZYHXWKHAMWPEVDPFUINTMUPRTYSBNNQEPCAPAZHDTBLFWP");
    msg.value.assign("WVCSXYNNDNYGFMIIMHQCBUWKJGSJGYXDZVANIUWTOJQZUGPZJADCUBVZZJYTQDTSQVRRBMRRGOMNMMYPXFHCFRREEWDXLYNBMLPLKDZFXEXITHLNBVPEKAZEDHDCGSFKYUOBARFBFWRWLWDOGAQZEOAQLMONHVFLAGP");

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
    msg.setTimeStamp(0.984127996236);
    msg.setSource(25204U);
    msg.setSourceEntity(60U);
    msg.setDestination(44613U);
    msg.setDestinationEntity(89U);
    msg.name.assign("AEAJZXQITKFGBPANUDBUBSDXFPRLLNEIYDEBSVOOENDFMHKCGCBTPPTWNUMHIGZHRGILPQNLHVAPESXNAQSRFYFCEVVVMNEQTF");
    msg.value.assign("IJHGSICGWOPWSKLGMZZNGUWTIPUJEASNECEJJJMMLKJHAJVUGLFXDVZIVNEAWTTMXRQBMASZUACBEKFKHQNRDBLWQNQUTFNYOHONXOGFAREKZWVBFVUEVGCDQEXRROZRBNQKACHFSFYPPOIHDICDBNPGMJOGDLPYTCQRGLXAPIYAQMMBVDWOAVXQLWRWS");

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
    msg.setTimeStamp(0.194186739648);
    msg.setSource(62169U);
    msg.setSourceEntity(10U);
    msg.setDestination(30520U);
    msg.setDestinationEntity(226U);
    msg.name.assign("XJRXZUVYEVVNMRVWHBLHPQLFCTWZCMFMQPOADUPTIKCBMLSOIGAAZEWORISVNVNIHKLDLZJBOBPYKSWOOLDTMGYIVHNFNCIQAMYGFNZLHIQCPWFKKJDGKFWORAUEYFDRFGBQUUYUFSARSGEDGYTQZXOPYRHSTZXBKJPHJAAXPVFINRPGNMEKEZVOUKURCSSHWNQTMQGDTIHYWDZCMXCWCWLTCGXJYBEZNJSXEUBH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NUMLVODKZHTGUPFYYACMIGDGHSYSDGPFUGMSDHIVYMIUTSCFPATWZQEJPMQELVXSKXCTDWIZTJNOQFQCLEHEQLLFGFJMHCOXEIYARBNMIUGOCBJRGHAFLIQJHNFOAVNFZWDEKVCQTHADXIQPZTURPLCBOCDUEWUBXGRVKKNJRW");
    tmp_msg_0.value.assign("HBNUNUDVIOSVRGJOZJTZVWOCLLXUBLMCBTYGNUVPVMSEVEGHFDCOYJLTQPYICLBRQIZQSMXWIYHOJHHQANLMBZPAJ");
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
    msg.setTimeStamp(0.707478315965);
    msg.setSource(37438U);
    msg.setSourceEntity(88U);
    msg.setDestination(23065U);
    msg.setDestinationEntity(63U);
    msg.name.assign("OWPLJKHSMGWCKLNAMNYAQZRXMMIDGKRNZYPMODTSTFSTGZCEOWBEPBKLUQFTPVHSY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VUFKZGNLXJEKBQYPTDZOCTTLJUFWPYDIMWJXYZXFISECTPCOCBVDOMKUALDHLZIKHSIVARMHVYQGCALTBSXSKIBVQDRJTOGNWBROFFFGQVUDFWURSMJNQGNKLTDTXSGZUDHAVQIBSHKEXMMPHYHZPUPRCFQALZGJEXXAWTYNPLQCEMEAGNZOJPHBQMEM");
    tmp_msg_0.value.assign("TSZCWHABPWBXGYPFSXFGAXJSUOKPDITWZEHMILXPQPJLIVULAQRDKMCSWRMZTOEKZENYNULGYZCJQCLNKTCBMHSUWDNPRYKTUVUGHQMLNVLYYRVDYGNBMRAVHAAIFQOUPOMKNQO");
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
    msg.setTimeStamp(0.847052931997);
    msg.setSource(34195U);
    msg.setSourceEntity(157U);
    msg.setDestination(27466U);
    msg.setDestinationEntity(33U);
    msg.name.assign("OHBYZOXLKXYJJCIHXWKFFRUBRGYHLEUIYBNZAPECHBJVXWWSHQSJJFUGYTNYVOLQBSKEIIADXPJISRNTOJAGKVEGDWEEABEZZPVGNQXCDCKRAPQNMQKHBGPQLCDISXCSKANTVTQEXGMLYMMDBRFZAHYVBDZ");

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
    msg.setTimeStamp(0.860651622953);
    msg.setSource(23021U);
    msg.setSourceEntity(250U);
    msg.setDestination(23896U);
    msg.setDestinationEntity(9U);
    msg.name.assign("ASTLBXMOCMMHZFKXCINTEZXHGODAZTOGYUKBDEAQBSHWNOBQUPWSZFVFENUAZLDKVPFEYKEJVDYGIBLEVFKPPFROEYMJEJ");
    msg.visibility.assign("FZUAWKOMUDTACGFTBLJIFKMLTUEWCWAXUZQJUAWBVXWBCJWHMRXKIJQROHTJLQQERHMEFOTZLPGKVOZSLGCYLYABIBGPPYVBWEGPEDHYNOLPPKQZTHASSXGLQSKXPMKHMNELOSGXJFGXDUOKNYTNBYEEOBXDPVIXSBURBVIYHWQNYDSAAVJHDOMNQCCTZDDDUPRZCCMVTAKUNMZPAGOIZERJVFVCFHFXR");
    msg.scope.assign("FAXJMSWBUKSENZQYTXKZRIRHOFEIAOTMZDIRBVXFLNNZRCJJYPEWROVYWPKBGBV");

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
    msg.setTimeStamp(0.555853714179);
    msg.setSource(40017U);
    msg.setSourceEntity(245U);
    msg.setDestination(54242U);
    msg.setDestinationEntity(147U);
    msg.name.assign("VFRPUDPBIILCVWKAYNBYUSEOZUUMXZWZFMTHSYSHUQAKBWZXTWAZENXUJAGWNCUWDHGVDMHSKDYPXBBIRLELGDSCF");
    msg.visibility.assign("PERPEXNJSOXPSGMPYLWOLARHZTMNTTXVKKDVXQXZOKBNDFAPAXCKPVCQYFCGABDVHMHOIUXQJGWDUERWWZYPVQOVFEJNYMIIXLIUTBGADAZCQHSFUGELABYRCSCULLSMMIGMRJSERDZYJLHJLBRDLFKKMYZENBVWQGCWRBQDFOAPZOWHPXOFSJCJUKOTKHSCNXTBITABHUENMUTZQYCGINRQYNIUKODLTUFEDGSWSJVZNYRVW");
    msg.scope.assign("WGIGNRTARTMQGACKJAUKUIPCCYGTMIUJLGXGFYYSSIBUYFGJHSMHOXBNVEJFNMSGHUMDZDLSIWFKXBHDHVLWPUCQLOTPDCLJVYKKZENZSBFVYWLXBLDHJVLULOOIUEMTSHWYVQGBMBNJHAIPFAJNPCQKCTKRVXNRWQENHQBBIOPOAXKEZQZFUSNZRAAGJVBKKTEOQYDXWSXF");

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
    msg.setTimeStamp(0.502715171272);
    msg.setSource(39171U);
    msg.setSourceEntity(229U);
    msg.setDestination(27669U);
    msg.setDestinationEntity(212U);
    msg.name.assign("MNGHOMSFSNBWVNWINDXHRTVPFPHGTFROBFNSDLGICLICKKDNQFJLDKRKEWIMZGTHLWXHEUSLAQFE");
    msg.visibility.assign("JJTYDKIXZCUGPBPWYAOEFXSMEFKIVKOOTBMESZRMDZAGTNIVWWNQWPSIFVAGOBKOBJEHZFVXPVLHOWZKDKEPSMQRLQBUXSJMINYBEWZOMTGWZVCGNOPBLYQSMECVTYCWNWAXRFDEKKYDFRMNYMLLSCGAQ");
    msg.scope.assign("EVAEDUCNGNCEZJZTHIVUPALMJZXSVOUNXTMHGCTLPQERIHPGQO");

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
    msg.setTimeStamp(0.376248702822);
    msg.setSource(43571U);
    msg.setSourceEntity(91U);
    msg.setDestination(11391U);
    msg.setDestinationEntity(209U);
    msg.name.assign("FFELZZFRTQXABEPABAHERCTDGFVFKVCGBIGOISORPFVQYRMYEBTXWPWQCDBHPAYTKNUEYXCGLOAYZTIYVGJZDLMC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MLRSWLTHVYWZFKYKGGYWLCDAYBOAQTESOVHOARULZBPXUJSIXGGLXDIPLDKVAMRKFGWEMJQMVISJUTSXBNPDFCEAYCQKVQDHJBTGIUDJCZONNTLCCAVHHJYYDKZSNMUPCVEZTFRDURSOTREPUQHL");
    tmp_msg_0.value.assign("EXVKJLRZGQNXINKTYNCCPHBJRSNGXFKSSHYAWMKPOFLTYYBEHUBSBTNMAYPJVJTEGEOQIDFOYTHWMURWWVQUDFPMDYXBZPLXFDTQRCEAVLDLALYEZOT");
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
    msg.setTimeStamp(0.400763090394);
    msg.setSource(50842U);
    msg.setSourceEntity(13U);
    msg.setDestination(28710U);
    msg.setDestinationEntity(53U);
    msg.name.assign("TWRMPZXWYUJRBIJSUFMYYVVITAEVBJEKBBMDZLHBKLEUKTAXSSQUGTKWQRVDDPKWZJHKCIHVXNPJHOIUCOVMNFYFZOJQLSAQTRFMRVQERKLWYHDMGCNAACRBELFHPCMQEBWVORJDPNYSOQTYPGMJOEIXGGCLSSXDHRLGPJZQXUDCOUTG");

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
    msg.setTimeStamp(0.187626396292);
    msg.setSource(7002U);
    msg.setSourceEntity(37U);
    msg.setDestination(59212U);
    msg.setDestinationEntity(105U);
    msg.name.assign("NZQWWIVJDLCRRLZCNKXKTLXEZBUWUBQPSFWKSKPMHGIFGODKCNJTPZINLUYWPRGPEHSAZNOYZMYAHYMYGAIFQNVFXSR");

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
    msg.setTimeStamp(0.265014220596);
    msg.setSource(64877U);
    msg.setSourceEntity(4U);
    msg.setDestination(43076U);
    msg.setDestinationEntity(149U);
    msg.name.assign("SEUXYTXCSFKPSRGOLYCTELCZPNPHIIWBEJUPJXRFFSRCATWDHBRZDRCIVSXAEMCOHIGXCVWNCKOXALMSFDKKFDMAYBMJUIKNNRDR");

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
    msg.setTimeStamp(0.511804464865);
    msg.setSource(10782U);
    msg.setSourceEntity(51U);
    msg.setDestination(35989U);
    msg.setDestinationEntity(107U);
    msg.name.assign("TNAWIZRRSUWFUFFVXXZEMNMXMKCQUJUJAPCVIRHAUNIBRVXKOONHHBUNWYYWEXITYQJSCFMZQCLRDHXZEYMGSEZHJFGTNFWXHJFYWAGSLLHKVIPBMTEHZTUWBXBKOKBZTOHFMDDDQDENMKNOQOEYSKGUFALQJUBAPRASRLTSBJLQVGMIUGDTQIJSGPVRDAWCCRAISSFROPYEZBBODZGXMLKKGLVPHPLYWPTVDEOLCY");

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
    msg.setTimeStamp(0.597682302261);
    msg.setSource(30684U);
    msg.setSourceEntity(180U);
    msg.setDestination(47165U);
    msg.setDestinationEntity(185U);
    msg.name.assign("ZPGFMYARHEXUVXWFVVGPNCCWZUKUOIOSPCATPYAERJFQEXBAAFGASWXZAZRVWNENCCTYFLPVKPQMKFQRGGVRPOMIDXJMYNEAWEBRXIAHBVDKYQGLBOXWHCGDSJJJOETXSJLKSTDBCXPUQRLDOBLWVYMKJZHMSZKJHFOFTFTINDJBTUBLPNTLVZLUCNKQTWUIITQIMYUQIOI");

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
    msg.setTimeStamp(0.300009545013);
    msg.setSource(23928U);
    msg.setSourceEntity(41U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(249U);
    msg.timeout = 523028638U;

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
    msg.setTimeStamp(0.286045658156);
    msg.setSource(52844U);
    msg.setSourceEntity(214U);
    msg.setDestination(28262U);
    msg.setDestinationEntity(110U);
    msg.timeout = 73644018U;

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
    msg.setTimeStamp(0.620146489525);
    msg.setSource(37244U);
    msg.setSourceEntity(140U);
    msg.setDestination(53095U);
    msg.setDestinationEntity(110U);
    msg.timeout = 3754085295U;

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
    msg.setTimeStamp(0.839359228135);
    msg.setSource(52484U);
    msg.setSourceEntity(242U);
    msg.setDestination(10653U);
    msg.setDestinationEntity(157U);
    msg.sessid = 1576766287U;

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
    msg.setTimeStamp(0.547845071642);
    msg.setSource(64158U);
    msg.setSourceEntity(162U);
    msg.setDestination(21649U);
    msg.setDestinationEntity(200U);
    msg.sessid = 2190149867U;

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
    msg.setTimeStamp(0.942118697511);
    msg.setSource(17052U);
    msg.setSourceEntity(205U);
    msg.setDestination(58898U);
    msg.setDestinationEntity(74U);
    msg.sessid = 1290031034U;

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
    msg.setTimeStamp(0.74327706113);
    msg.setSource(26157U);
    msg.setSourceEntity(109U);
    msg.setDestination(26221U);
    msg.setDestinationEntity(249U);
    msg.sessid = 3788726775U;
    msg.messages.assign("CUGSCFIFHBDYBLPPXBLNLKHMWGZEGFAZXHVLUPEMXVYAOLTDQROWXXHHIITMUIMNDTUCILIJKTNRSQWGNXKFYJZYMDZHBWEBZTTSMCAJSSQPUQJIVZOJPYHFZUEJOGHTFDKNIGWRTRISJZSOJRPXWCYDPYPKRVYNXNZVSJWVNWMKUFOBRWQAYXI");

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
    msg.setTimeStamp(0.938660213958);
    msg.setSource(45147U);
    msg.setSourceEntity(240U);
    msg.setDestination(16296U);
    msg.setDestinationEntity(129U);
    msg.sessid = 3502214853U;
    msg.messages.assign("PPUVFUZVEKICNSBPUECLQHGFAEQOCTFZ");

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
    msg.setTimeStamp(0.63562520995);
    msg.setSource(53183U);
    msg.setSourceEntity(81U);
    msg.setDestination(51501U);
    msg.setDestinationEntity(209U);
    msg.sessid = 29390923U;
    msg.messages.assign("CTGGSDSFGBKFZUTPHCMGLFARLOIYGNAJWKHQSARYGQUTOLBAQXNIZUSOZBWQYEWIMFMKDMVCVCIOOXCEJUCHAWBTRGCTOFOGVTHNZOZQKTFZZJWQRYIDKKQXQUHFELWCEVXLJVJFIEZPOWSPRMJQNHFDPASYLYDAXGVMMPWBPUJJMTRBDKBORVMSDTSCNVHBJYIIPKHLLNBBXTDSFPXWAYQXZEXYMRNHKIVNLNNEALCWR");

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
    msg.setTimeStamp(0.826966639656);
    msg.setSource(5114U);
    msg.setSourceEntity(243U);
    msg.setDestination(10599U);
    msg.setDestinationEntity(1U);
    msg.sessid = 3687411559U;

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
    msg.setTimeStamp(0.70274307194);
    msg.setSource(20943U);
    msg.setSourceEntity(77U);
    msg.setDestination(2865U);
    msg.setDestinationEntity(215U);
    msg.sessid = 310444127U;

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
    msg.setTimeStamp(0.323752761286);
    msg.setSource(45016U);
    msg.setSourceEntity(207U);
    msg.setDestination(6139U);
    msg.setDestinationEntity(108U);
    msg.sessid = 1010793074U;

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
    msg.setTimeStamp(0.689988615206);
    msg.setSource(22484U);
    msg.setSourceEntity(168U);
    msg.setDestination(41929U);
    msg.setDestinationEntity(249U);
    msg.sessid = 1300046925U;
    msg.status = 112U;

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
    msg.setTimeStamp(0.957750076062);
    msg.setSource(20157U);
    msg.setSourceEntity(45U);
    msg.setDestination(12921U);
    msg.setDestinationEntity(242U);
    msg.sessid = 872613269U;
    msg.status = 188U;

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
    msg.setTimeStamp(0.398755281568);
    msg.setSource(14960U);
    msg.setSourceEntity(139U);
    msg.setDestination(5918U);
    msg.setDestinationEntity(57U);
    msg.sessid = 832067939U;
    msg.status = 2U;

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
    msg.setTimeStamp(0.657664091293);
    msg.setSource(62670U);
    msg.setSourceEntity(242U);
    msg.setDestination(12510U);
    msg.setDestinationEntity(212U);
    msg.name.assign("TUYZMUZUXKJEGPRBFPEXJQYAHDIPDCMILNWFQHRCTDQVYJOHKMVPFONBBTMGMKYMFSAUCNDZCMBZHWNKCVCEBOVUBPEUQHUUWZRJPIIDEWZVFGTGVJITYCFGQJLTGOXZDPBPWAKUXELNJSPMOZRDLZIZJHATNXISSYGWALSQBNSUHGYCEKAIBGTADVOSWLMDXTMIHRRVRGESKJFRLCOYXCNROPRFXLYQQVQKWIKEWNALBSHXEFTXW");

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
    msg.setTimeStamp(0.41527639776);
    msg.setSource(16125U);
    msg.setSourceEntity(151U);
    msg.setDestination(63378U);
    msg.setDestinationEntity(22U);
    msg.name.assign("QKDRESBPFKAAEYRUTEMBCMCKYRLPXUWUMCRBIHBNQUYHOQVVNFGDRONTCGYVYSEAOHJVSEOJASFLVA");

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
    msg.setTimeStamp(0.833214289589);
    msg.setSource(20564U);
    msg.setSourceEntity(118U);
    msg.setDestination(62370U);
    msg.setDestinationEntity(252U);
    msg.name.assign("APBAGCAMJSUERMSROVRZDBKSPYUJFZFWYGTAMSNALEOKNOXEBMVKMMWIMYRZRTBBQVHTCCN");

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
    msg.setTimeStamp(0.463872362965);
    msg.setSource(27534U);
    msg.setSourceEntity(79U);
    msg.setDestination(11530U);
    msg.setDestinationEntity(187U);
    msg.name.assign("GERGLYVKGJRPSZUFMSTPSCZKUEPQRPKDLMYSJCVJSMVDDZEFTECZWVNOUUFCOBAG");

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
    msg.setTimeStamp(0.467434745725);
    msg.setSource(43363U);
    msg.setSourceEntity(224U);
    msg.setDestination(52710U);
    msg.setDestinationEntity(166U);
    msg.name.assign("JIQIDZWYRCOTXTCHRSLMIMPXCPQPMIWMFYDTSSJEUEVNASXIDOOJTOHYQCLPHGQRMPQOHHFDGLNWDVOXTHVRNYKEHRFRERFAEDBKBGMMXUVUWACUBJSMYLUAMESEWJXDKFLGKAWBZFBGGVEZZSWLJRKFLLXVJSQZNAVNBUAIOBIAZXDTQRTHINYXFVGUFQWGHKONOTEEAUPIIYJAYYYSXPVKPBC");

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
    msg.setTimeStamp(0.527847724659);
    msg.setSource(4341U);
    msg.setSourceEntity(216U);
    msg.setDestination(27177U);
    msg.setDestinationEntity(148U);
    msg.name.assign("UORSLUNTGFOMRQVEAYEJRCDTKQWHGFBYSCXNIUUVKWLTPNYMJZNLUACFCBMXVJDBRYYLDFGFBWAIAOPKLHKHQIOOLZTVDRVNXKCEHYSREAXAILZKZTEQNLFOVFYPROXGIPSNXUWBPSWPMCJUJMZMMKUEQDHIVNAESFJFWEIABLZICDTQZXSPYJKTVIBGGMPLRPDXOSKQBRIBEQADKDSCMDZN");

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
    msg.setTimeStamp(0.966161977016);
    msg.setSource(47627U);
    msg.setSourceEntity(200U);
    msg.setDestination(64188U);
    msg.setDestinationEntity(245U);
    msg.type = 204U;
    msg.error.assign("RXEWTKIOVZYDOPJXYCNEIUQJXKUREKAVUCRZSADMTLTEJINIXUKWWGBBHHHCUALSFLDVSSFCTCLGEKFMZOTZSDPUHSFEHQQUVBYOCTYKTJUBRAWJLIBQCMCXFXTQFHIGJNAVXDNKZBSZMAIOYOLTPGVVHWMCFKGMVYPPRNGJBEZFAZRAOPWWPVVEWDHWHLLYOQPKTSSULPFRONQBULNBYJQCXDIFEXMDEMI");

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
    msg.setTimeStamp(0.194127869098);
    msg.setSource(41036U);
    msg.setSourceEntity(246U);
    msg.setDestination(45378U);
    msg.setDestinationEntity(140U);
    msg.type = 124U;
    msg.error.assign("OLMPYMNIPAVXXAEBVKRWXRONJUKPDOEPYKTVSQPAFWBFZYRCRIDFACXJKGEUCSNUFYQDSVSGRIJFJHPYLWRNZVWISBLMRCMOFWBBPXVEKMQUTDJIIHZJZQLYZFMUETZLAOEFFAYHIEBTRJHKSTZDZVKDXLIMTQCCUXCBVSOJGTHNCPAANUUHRBDHKGWGLNDJSUTWEQEMQXTOKKMIYLBLZG");

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
    msg.setTimeStamp(0.105316218697);
    msg.setSource(38775U);
    msg.setSourceEntity(173U);
    msg.setDestination(7799U);
    msg.setDestinationEntity(24U);
    msg.type = 220U;
    msg.error.assign("MMLOLVCWBSLUFGANHSIYDCLYJRHHPULXVHNVKEKOZXGNEVKRWCWDPFYKQDRJP");

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
    msg.setTimeStamp(0.397579625998);
    msg.setSource(5229U);
    msg.setSourceEntity(15U);
    msg.setDestination(23022U);
    msg.setDestinationEntity(22U);
    msg.seq = 22568U;
    msg.sys_dst.assign("TBIRVGNZWNOFWIRLJJNTGLOHTQFZQNYTZDYHGFEBICXOHYODQNEDRVYPRGVJCUBJAYMCKUUFKIJRIFZZXUWAHUVXYPDNXNYVJVVUAROKWCKFSWOTSRDZWEXSMPNMLOQLAACLIQIGKUJHBVMBR");
    msg.flags = 231U;
    const char tmp_msg_0[] = {-103, 27, -23, 95, -123, -84, 109, -20, -23, -51, 118, -12, -75, 65, -42, -34, -70, -25, -64, 5, -19, -100, -112, 81, 27, -43, 40, -16, 19, -73, 39, -4, 33, -44, 1, -36, -43, 59, -64, -17, 6, 56, -101, 126, -37, -108, -37, -13, -91, 62, -53, -42, -91, -70, 107, -66, 42, -71, -31, -54, 80, 91, -109, -69, -85, -117, -112, 106, -14, -4, 5, -16, 79, -72, -75, 63, -21, -90, -74, -16, -51, -110, -52, 85, 39, -3, 37, 41, 67, 57, -128, -4, 53, -93, 17, 105, 25, -20, -113, 68, 28, -95, -36, 78, 98, -64, -97, -64, -25, 107, -107, -81, -22, -49, 109, 105, -67, 10, 5, 104, 37, 84, 79, 34, 90, 109, -80, 7, -37, -25, 43, 8, 2, -53, -57, -101, -59, -92, 70, 105, 96, 65, 83, -58, 33, 16, -24, 2, 32, -97, -83, -20, 112, 45, -16, 78, 105, 31, -8, -47, -104, 7, -113, 84, -59, 26, 43, 73, 61, 57, 68, -83, 10, -42, 46, 95, -115, 56, -52, 50, -105, -64, 85, 10, -55, -91, -117, -36, -17, -73, -2, 46, 65, 122, 29, -42, -71, -101, -76, -126, -113};
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
    msg.setTimeStamp(0.881762422673);
    msg.setSource(23858U);
    msg.setSourceEntity(66U);
    msg.setDestination(15827U);
    msg.setDestinationEntity(102U);
    msg.seq = 43236U;
    msg.sys_dst.assign("ROVSSCLLYQZWFYTUXIUPSTPKXCTRMKCNCFATZPEUAHNKVHYAPCLMQYFZAQLPZDXOPBDHWSKFMINHYGEMZXOBOCHWGFLYCDIERROJ");
    msg.flags = 160U;
    const char tmp_msg_0[] = {-84, 41, -11, 89, -105, -112, -112, 101, -36, -72, 29, -117, 118, -117, -121, -23, 110, 33, -112, 10, 30, -51, 39, 20, 79, 67, 112, 61, 4, 14, -12, -128, 111, 16, -71, 12, -4, -59, -126, 69, -109, 41, 75, -108, -55, -120, -117, 111, -64, -72, 12, 46, 116, 47, 94, 112, 25, 73, 89, -108, -105, 23, 72, -28, 82, 15, -39, -9, -20, 26, 126, -34, 112, 93, -15, -93, 61, -65, 6, -94, 120, 28, -37, 29, -122, 95, 79, -78, -16, 10, -12, 75, -126, 104, -119, 38, -19, 48, 126, 123, -33, 79, 68, -47, -64, -96, -62, -30, 10, -61, 45, 94, 2, 27, -63, 1, -38, 103, 38, 10, -98, -28, -55, -21, -91, -105, -74, -112, 86, -32, 15, 7, 45, 18, -27, 31, -115, 118, -32, 85, -85, 125, -98, -102, -115, -11, -77, 55, 34, 122, -96, -69, -83, -103, -115, -11, -12, -104, -63, -34, -86, -98, 70, -82, 0, 85, -107, 83, -81, -65, -55, -120, -43, 17, -16, -67, 5, 106, -13, 123, -26, -81, -122, -61, 84, 8, -71, 98, -85, -121, 72, -30, 3, 19, -62, -38, -112, -118, -95, -44, -88, 18, 118, -44, -122, -122, 93, 33, 43, -79, -3, 20, -78, -95, 81, 33, -83, 50, -42, -113, -30, 81, -39, 101, -74, -25, -73, -29, -94, -9, -71, -36, 102, -11, 77, 110, 30, -104, -6, -66, 19, -81, 73, 25};
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
    msg.setTimeStamp(0.738919672458);
    msg.setSource(2915U);
    msg.setSourceEntity(115U);
    msg.setDestination(23499U);
    msg.setDestinationEntity(224U);
    msg.seq = 16403U;
    msg.sys_dst.assign("KLVVNCYZKLMLMEXGJYTIAERFDYQHBWPKQMTTXJXCBLVTWMCBTGHUQUHCJAAFMCRFIYSXVPFOOLROZEUTZGQSLHOTBQKCZGNRPWBWREOQRUNCAEWPNWSTPADPKQIDQHSMXNELJHSGMOYWVSMUDPNIZYJGOJOWZUNJIIZVXJZZLIRBYUDXBSCJKKNEUXRLBVDBGK");
    msg.flags = 8U;
    const char tmp_msg_0[] = {-39, -101, -119, 37, -64, 61, 84, -121, 68, 10, -79, 79, -82, -95, -35, 54, -97, 46, 7, 64, 26, 76, 82, -54, 116, -47, 121, 120, -7, -124, 103, 63, -79, -127, -55, 17, 111, 41, 0, -92, -81, 62, -114, 75, -125, 79, -120, -89, -126, 30, 92, 58, 92, 48, 90, -39, 90, -13, 3, 125, 0, -23, 104, -127, 110, 25, -75, -61, 34, -68, 57, -17, -117, 87, 97, 39, -15, 82, -26, -121, 45, 82, -90, 102, -77, 89, 72, -107, 108, 99, 53, 25, 110, 97, -32, 56, 21};
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
    msg.setTimeStamp(0.516643965673);
    msg.setSource(62804U);
    msg.setSourceEntity(195U);
    msg.setDestination(29384U);
    msg.setDestinationEntity(41U);
    msg.sys_src.assign("KRMLIBVURJCDENQLBKVKCYGUMFVWXKCSMHTFPCMMRXMWEADSHNGWFFZYVEXQGZKLXWFLNLAZKIJHNXPAGDVQCBBNTSVRNXATBOGLDILPDEYITCUOQSNXZGEVOZCHWFIQPCPPVJOHQDKOWAHKIRDQJOUMAWFRHSWLZNDWOAUQPRJGOVUGPZSMTMSHTHLUGCYSQKTYYJIFBVSIXILTO");
    msg.sys_dst.assign("ZMKXCCPWEDHWNPV");
    msg.flags = 214U;
    const char tmp_msg_0[] = {-106, 43, -60, 104, -6, -101, -113, -15, 59, 46, -9, 110, 1, 26, 99, 59, 52, 27, 25, -114, 35, -106, 27, -58, 31, 76, -48, -46, 51, 56, 16, 25, -86, -105, 21, -117, 117, 102, -52, 25, -122, 58, -33, -50, -103, -46, 81, 18, 28, -80, -48, 54, 87, -53, 34, -45, 94, -95, -99, 27, 73, -103, -10, 39, 78, 23, -53, 56, 78, 86, 32, 88, -101, 126, -67, 124, -97, -118, 28, 11, 80, 51, -13, -89, -34, -83, -122, -20, 64, 70, 62, 88, -128, 32, -125, 78, 34, -32, 47, 106, -9, -59, -108, -69, -98, -40, -56, 3, 121, 56, -107, 25, 44, -35, -15, -12, 50, -25, 29, -128, -118, 86, -75, -91, -28, -95, 14, -109, 92, -39, 114, 94, 67, 110, -62, 76, -5, 70, -58, -100, -63, -2, -63, -8, -41, 44, 65, 45, -17, 19, -31, -65, -8, 78, 111, 37, 49, -119, -53, 83, 110, 62, -11, 67, 44, -42, -63, -62, -65, 97, 28, -109, 88, 32, 83, -27, 35, -115, -101, 81, -68};
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
    msg.setTimeStamp(0.367748325027);
    msg.setSource(34581U);
    msg.setSourceEntity(138U);
    msg.setDestination(24085U);
    msg.setDestinationEntity(219U);
    msg.sys_src.assign("HJJNUDYNWKPACMUGFSMLALPNHAJELCDVMSXYTUBFTIEWDAKTRYSOQLHQOKEHPPIRHUHITKTRMDPVPVKISRYGRFYAUNDBQFEZTDQJHFNBUYUEMGVJGLXFYEZTOZENDLPCZPCAFJDMSINZDOZGMOJRXNLIBTKWOJSVZMZXKWV");
    msg.sys_dst.assign("PEKXNDQFUEXWNLOLVMYAPOJGGYXY");
    msg.flags = 10U;
    const char tmp_msg_0[] = {80, -128, 93, 5, 117, 2, 77, 116, -115, -2, 62, 4, 92, -57, 97, 112, -122, -79, -23, -63, -73, 46, 106, -10, -34, 124, -59, -21, 63, -112, -8, 75, 96, 12, 76, 34, -111, -89, 93, 52, 106, 57, -117, 55, -36, -66, 126, -93, -84, 36, 56, -67, -7, 33, -7, 2, -43, 108, 97, -29, 8, -37, 104, -95, -59, -97, -79, -91, 74, -17, 121, -122, 66, -12, -115, -27, -69, -69, 123, 27, 122, 36, -127, 117, -76, 91, 48, -117, 78, -85, 3, 118, 77, -9, -107, -43, 16, 32, 88, -15, -30, -19, 121, -50, 39, -30, 80, 57, -128, -63, 97, 2, -16, 37, 88, -127, 63, -4, -23, 62, -112, 112, 91, -67, -84, -64, 6, -59, 79, -123, 59, 68, 65, 34, -16, 12, 43, 60, -75, -28, 76, 43, 21, 85, -75, 71, -62, 107, 72, -121, 123, -82, -59, -42, 37, -93, 19, -41, -66, -71, -91, 60, 64, -73, -61, 65, 28, -106, 67, -25, 63, -116, 99, 74, -62, -31, -102, -5, 115, -108, -76, 100, 46, -28, -99, -20, -33, 38, 30, 26, -98, -40, 39, -25, -73, 29, 43, -88, 90, -30, -81, 60, -8, 113, -13, 64, 115, 21, -55, -112, 40, -57, 21, 25, 82, -29, 95, -69, -124, -25, 42, 9, -58, -34, -32, 82, -46, 75, -85, -114, -45, 23, -1};
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
    msg.setTimeStamp(0.236284285113);
    msg.setSource(5536U);
    msg.setSourceEntity(173U);
    msg.setDestination(40362U);
    msg.setDestinationEntity(28U);
    msg.sys_src.assign("LJJRANGYYDCHOKGDNISFDNCERKBVIDZTOFMYLXLRFHXKYOUGRSKPTIVJWKXEJTHRPFHFBOWAYCEPPFPIGMWEQMOQNMRALAPOXSDIYOMYMLEZFLVBNDQVWJTSOEURPVXFZKSNRAVCMSCGGCBPJIGQXNZMUHKWHACDLTWZJJTBGDHAVWDAQTBNVEAZXUJVLTBYHHCLBINSIUPHBESYZPZSZZDUJWABUYOKXW");
    msg.sys_dst.assign("WPMGGIJAXKYXRKTREMKBMNTGZZWBHODSYUZWFSOMPGPXREKFGKBKKOFWSFIMDDKYVSFIULAAEXQMIJLXLCAPPLKLWAPNHYU");
    msg.flags = 243U;
    const char tmp_msg_0[] = {-74, 27, -69, 74, 23, 60, 107, 75, -54, -80, 21, 121, -21, 15, 118, 34, 90, 20, 71, 46, -79, 79, 115, -100, 65, 72, 57, -80, 116, 113, -52, 40, 105, 32, 83, -57, -52, -113, 16, -58, 57, -125, 23, -65, -99, 61, 39, -18, 85, -88, -6, -65, -61, -16, 91, -57, 115, -93, 54, -5, 24, -119, 126, -72, 103, -104, 38, -45, 7, 55, 34, -82, 43, -15, 45, 11, 5, 109, -95, -77, -80, -92, -56, 29, 97, -114, -10, -62, -38, 122, 122, -118, -101, 87, -30, -6, -87, 116, -27, -12, -69, 97, -95};
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
    msg.setTimeStamp(0.847822406289);
    msg.setSource(55070U);
    msg.setSourceEntity(224U);
    msg.setDestination(53180U);
    msg.setDestinationEntity(231U);
    msg.seq = 32855U;
    msg.value = 22U;
    msg.error.assign("UDGTMNOPYUVUNVDCXQK");

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
    msg.setTimeStamp(0.875950092574);
    msg.setSource(12882U);
    msg.setSourceEntity(31U);
    msg.setDestination(57509U);
    msg.setDestinationEntity(145U);
    msg.seq = 31039U;
    msg.value = 107U;
    msg.error.assign("PGTUZTIGVGEQDGSCSLHYMWOSBGZHIZKCFTNEFXMIULLKKPJLHRLRRFQKIPKHGCBJMDTGDNXYLXBWMPAQYOPURXVNAJJNUEBZVQRJTCQAYIFHCYHUZUMGPJLZDRYCITSOSKJPQBNFQDXRJEAAHKYEFBIATPDCXDWJVAQXNBFMSSXQDNESSF");

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
    msg.setTimeStamp(0.0371531075466);
    msg.setSource(35753U);
    msg.setSourceEntity(248U);
    msg.setDestination(36288U);
    msg.setDestinationEntity(66U);
    msg.seq = 38942U;
    msg.value = 67U;
    msg.error.assign("MJJLIHZAIOLQRTCBMGCHKRIOGTHPLNBFXFBUHBMXDUYTNUBVJJOIWZVQIFAJCZGPIZXPLYUFWXBLTFVVSJSNXOQGDIPWYJNSEECWMIFJAYFRYEUCENJNHDQVKDONMMTRGUENJHHRHGKVXWPWOMYR");

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
    msg.setTimeStamp(0.614513010411);
    msg.setSource(61708U);
    msg.setSourceEntity(170U);
    msg.setDestination(26585U);
    msg.setDestinationEntity(76U);
    msg.seq = 59704U;
    msg.sys.assign("CAVBSCHYZEEJ");
    msg.value = 0.917735405497;

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
    msg.setTimeStamp(0.409336217145);
    msg.setSource(39562U);
    msg.setSourceEntity(98U);
    msg.setDestination(7417U);
    msg.setDestinationEntity(4U);
    msg.seq = 47262U;
    msg.sys.assign("UYDBWCBDLOONCIXXQLRPBXHHSINDFCCVJMFOFSPRDKNKWBVDZAQEFUZYPTAZTKIDRGZJXLQHSINIQOXYPKMMLSNRGMTWFFXZQGTEGMWQHEHHDGAPSJAQLWCSWPNOKKVTJAPNHZJJNYZXYETVFJXEUOCKCCYKJOHNMBURGUALIVISFIU");
    msg.value = 0.299587654576;

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
    msg.setTimeStamp(0.855485417967);
    msg.setSource(46482U);
    msg.setSourceEntity(114U);
    msg.setDestination(43500U);
    msg.setDestinationEntity(222U);
    msg.seq = 11425U;
    msg.sys.assign("UQAFWBCCIDGLULVQMRXCXJPRJSWNZOYXIWHEYOQHADAYWDSAHBWRLHWBZTIXWDRGKGRGSBFPYYZDTSBMKIROXEVCLKZTFGVMVOWUUENMJTZAVZMFUNPZJBLMRFSQATUFLXYNEXSCZHYS");
    msg.value = 0.985309524841;

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
    msg.setTimeStamp(0.229812954622);
    msg.setSource(31066U);
    msg.setSourceEntity(129U);
    msg.setDestination(60381U);
    msg.setDestinationEntity(89U);
    msg.seq = 39928U;
    msg.sys_dst.assign("IDLARWSDGOFUXZZKVJCBBITFZSEKPPORQAIXBTUPDJFVMLSXCQMER");
    msg.timeout = 0.418799447106;

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
    msg.setTimeStamp(0.0797435871936);
    msg.setSource(59433U);
    msg.setSourceEntity(205U);
    msg.setDestination(3805U);
    msg.setDestinationEntity(9U);
    msg.seq = 33906U;
    msg.sys_dst.assign("CMGNBLLUPDQRSTTHSSVRLDFMQVCUKEYINDOPMDLPPTWQMGLJYGQKZBEUYCHSTHCIOMWYHFIXDUUTGABKIJNFJZYVVKNDZLUXIXEUSVMQXCEFWZGYAXBVJSVBUFYJDWOSKNXARDTVNBRHJPHHLDXZUBPAWQYGJ");
    msg.timeout = 0.330121423483;

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
    msg.setTimeStamp(0.738816211426);
    msg.setSource(45867U);
    msg.setSourceEntity(199U);
    msg.setDestination(61500U);
    msg.setDestinationEntity(73U);
    msg.seq = 61499U;
    msg.sys_dst.assign("LXTJRXAZKOGXLFOORLQTLVMOJKTKBM");
    msg.timeout = 0.979270354785;

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
    msg.setTimeStamp(0.000980133388625);
    msg.setSource(17457U);
    msg.setSourceEntity(146U);
    msg.setDestination(28430U);
    msg.setDestinationEntity(156U);
    msg.action = 219U;
    msg.longain = 0.874137300556;
    msg.latgain = 0.0131805530129;
    msg.bondthick = 1192078521U;
    msg.leadgain = 0.64490912975;
    msg.deconflgain = 0.571447497049;

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
    msg.setTimeStamp(0.109300961549);
    msg.setSource(44995U);
    msg.setSourceEntity(32U);
    msg.setDestination(59047U);
    msg.setDestinationEntity(168U);
    msg.action = 140U;
    msg.longain = 0.793102291826;
    msg.latgain = 0.929935200713;
    msg.bondthick = 3342312000U;
    msg.leadgain = 0.99256447458;
    msg.deconflgain = 0.639785393581;

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
    msg.setTimeStamp(0.0702722415723);
    msg.setSource(23102U);
    msg.setSourceEntity(170U);
    msg.setDestination(54141U);
    msg.setDestinationEntity(17U);
    msg.action = 98U;
    msg.longain = 0.20932378257;
    msg.latgain = 0.89824132837;
    msg.bondthick = 2261784885U;
    msg.leadgain = 0.128769500624;
    msg.deconflgain = 0.439858348091;

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
    msg.setTimeStamp(0.324706391511);
    msg.setSource(47232U);
    msg.setSourceEntity(196U);
    msg.setDestination(9595U);
    msg.setDestinationEntity(94U);
    msg.err_mean = 0.981905806414;
    msg.dist_min_abs = 0.484717882706;
    msg.dist_min_mean = 0.686982441629;

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
    msg.setTimeStamp(0.441464534686);
    msg.setSource(8254U);
    msg.setSourceEntity(136U);
    msg.setDestination(47867U);
    msg.setDestinationEntity(236U);
    msg.err_mean = 0.577064166306;
    msg.dist_min_abs = 0.246150032202;
    msg.dist_min_mean = 0.694680234727;

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
    msg.setTimeStamp(0.246903372317);
    msg.setSource(3970U);
    msg.setSourceEntity(179U);
    msg.setDestination(26591U);
    msg.setDestinationEntity(214U);
    msg.err_mean = 0.3208567885;
    msg.dist_min_abs = 0.542567651811;
    msg.dist_min_mean = 0.797483272978;

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
    msg.setTimeStamp(0.2185532423);
    msg.setSource(20482U);
    msg.setSourceEntity(128U);
    msg.setDestination(4200U);
    msg.setDestinationEntity(33U);
    msg.action = 37U;
    msg.lon_gain = 0.476419456171;
    msg.lat_gain = 0.869864980775;
    msg.bond_thick = 0.415234263101;
    msg.lead_gain = 0.380533179301;
    msg.deconfl_gain = 0.801024971839;
    msg.accel_switch_gain = 0.413550386189;
    msg.safe_dist = 0.962990369284;
    msg.deconflict_offset = 0.522249079081;
    msg.accel_safe_margin = 0.686426564466;
    msg.accel_lim_x = 0.703746848711;

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
    msg.setTimeStamp(0.108262148566);
    msg.setSource(6441U);
    msg.setSourceEntity(141U);
    msg.setDestination(42818U);
    msg.setDestinationEntity(250U);
    msg.action = 205U;
    msg.lon_gain = 0.661114952552;
    msg.lat_gain = 0.458590789614;
    msg.bond_thick = 0.367637544249;
    msg.lead_gain = 0.723398219334;
    msg.deconfl_gain = 0.413622158355;
    msg.accel_switch_gain = 0.472036457971;
    msg.safe_dist = 0.0698093213943;
    msg.deconflict_offset = 0.283211266982;
    msg.accel_safe_margin = 0.427992417695;
    msg.accel_lim_x = 0.729870636987;

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
    msg.setTimeStamp(0.132050271653);
    msg.setSource(4227U);
    msg.setSourceEntity(224U);
    msg.setDestination(33154U);
    msg.setDestinationEntity(9U);
    msg.action = 116U;
    msg.lon_gain = 0.45201336677;
    msg.lat_gain = 0.534442637482;
    msg.bond_thick = 0.605044527729;
    msg.lead_gain = 0.429991335516;
    msg.deconfl_gain = 0.0308092589704;
    msg.accel_switch_gain = 0.192848681747;
    msg.safe_dist = 0.0997041433605;
    msg.deconflict_offset = 0.830835624983;
    msg.accel_safe_margin = 0.541630485989;
    msg.accel_lim_x = 0.657509538913;

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
    msg.setTimeStamp(0.176160405168);
    msg.setSource(64484U);
    msg.setSourceEntity(169U);
    msg.setDestination(30255U);
    msg.setDestinationEntity(140U);
    msg.type = 128U;
    msg.op = 215U;
    msg.err_mean = 0.495970007468;
    msg.dist_min_abs = 0.473674372304;
    msg.dist_min_mean = 0.362860832708;
    msg.roll_rate_mean = 0.839189553418;
    msg.time = 0.973927504606;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 125U;
    tmp_msg_0.lon_gain = 0.0526482118222;
    tmp_msg_0.lat_gain = 0.866824417499;
    tmp_msg_0.bond_thick = 0.792157871824;
    tmp_msg_0.lead_gain = 0.495744157565;
    tmp_msg_0.deconfl_gain = 0.974210483382;
    tmp_msg_0.accel_switch_gain = 0.348470317182;
    tmp_msg_0.safe_dist = 0.44174324373;
    tmp_msg_0.deconflict_offset = 0.19865474934;
    tmp_msg_0.accel_safe_margin = 0.198899692205;
    tmp_msg_0.accel_lim_x = 0.161373437677;
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
    msg.setTimeStamp(0.903136802796);
    msg.setSource(14411U);
    msg.setSourceEntity(233U);
    msg.setDestination(43742U);
    msg.setDestinationEntity(159U);
    msg.type = 92U;
    msg.op = 243U;
    msg.err_mean = 0.566291799989;
    msg.dist_min_abs = 0.925467927981;
    msg.dist_min_mean = 0.735469991494;
    msg.roll_rate_mean = 0.907878868203;
    msg.time = 0.764117181972;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 170U;
    tmp_msg_0.lon_gain = 0.99919279346;
    tmp_msg_0.lat_gain = 0.434011111724;
    tmp_msg_0.bond_thick = 0.657800253982;
    tmp_msg_0.lead_gain = 0.99309140284;
    tmp_msg_0.deconfl_gain = 0.513993552374;
    tmp_msg_0.accel_switch_gain = 0.747595185813;
    tmp_msg_0.safe_dist = 0.323427164923;
    tmp_msg_0.deconflict_offset = 0.259707359946;
    tmp_msg_0.accel_safe_margin = 0.259080188327;
    tmp_msg_0.accel_lim_x = 0.363477958307;
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
    msg.setTimeStamp(0.938800449436);
    msg.setSource(32765U);
    msg.setSourceEntity(158U);
    msg.setDestination(32262U);
    msg.setDestinationEntity(68U);
    msg.type = 173U;
    msg.op = 240U;
    msg.err_mean = 0.0753072465808;
    msg.dist_min_abs = 0.182166936529;
    msg.dist_min_mean = 0.484304986829;
    msg.roll_rate_mean = 0.276436331836;
    msg.time = 0.207312876811;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 205U;
    tmp_msg_0.lon_gain = 0.653669097254;
    tmp_msg_0.lat_gain = 0.0887937388555;
    tmp_msg_0.bond_thick = 0.995807718515;
    tmp_msg_0.lead_gain = 0.11406836811;
    tmp_msg_0.deconfl_gain = 0.804665331778;
    tmp_msg_0.accel_switch_gain = 0.945916323163;
    tmp_msg_0.safe_dist = 0.622472361287;
    tmp_msg_0.deconflict_offset = 0.159619871433;
    tmp_msg_0.accel_safe_margin = 0.896821513207;
    tmp_msg_0.accel_lim_x = 0.530681129113;
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
    msg.setTimeStamp(0.866591508112);
    msg.setSource(58927U);
    msg.setSourceEntity(228U);
    msg.setDestination(36083U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.201353756247;
    msg.lon = 0.372002082829;
    msg.eta = 930381710U;
    msg.duration = 39062U;

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
    msg.setTimeStamp(0.215472596247);
    msg.setSource(13048U);
    msg.setSourceEntity(214U);
    msg.setDestination(61028U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.918841117991;
    msg.lon = 0.573207977045;
    msg.eta = 2376080377U;
    msg.duration = 8024U;

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
    msg.setTimeStamp(0.868065149057);
    msg.setSource(42575U);
    msg.setSourceEntity(145U);
    msg.setDestination(64039U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.739496807782;
    msg.lon = 0.758353216808;
    msg.eta = 1879398155U;
    msg.duration = 20016U;

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
    msg.setTimeStamp(0.502588626937);
    msg.setSource(14854U);
    msg.setSourceEntity(186U);
    msg.setDestination(6503U);
    msg.setDestinationEntity(25U);
    msg.plan_id = 10647U;

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
    msg.setTimeStamp(0.0554848417216);
    msg.setSource(8983U);
    msg.setSourceEntity(155U);
    msg.setDestination(16326U);
    msg.setDestinationEntity(114U);
    msg.plan_id = 20298U;

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
    msg.setTimeStamp(0.985979304713);
    msg.setSource(53829U);
    msg.setSourceEntity(233U);
    msg.setDestination(56464U);
    msg.setDestinationEntity(63U);
    msg.plan_id = 44113U;

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
    msg.setTimeStamp(0.0264998651351);
    msg.setSource(19023U);
    msg.setSourceEntity(90U);
    msg.setDestination(26821U);
    msg.setDestinationEntity(193U);
    msg.type = 65U;
    msg.command = 33U;
    msg.settings.assign("NCMXSRSVMNCNJBHZHIOBAYZRJWCTYCYKKXNTYNMIACOBRPQOXCUAKFQEGYR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 56427U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.610210572283;
    tmp_tmp_msg_0_0.lon = 0.0466556532653;
    tmp_tmp_msg_0_0.eta = 2605266015U;
    tmp_tmp_msg_0_0.duration = 5891U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YBUKRIHXNDOHOMADBXFVANUGJCRUWUCOUSNWRDVJMFRXLPDGPCLFKFSDBHGDUMFRCYSWOIOOJXZHKCCUCOLXPFTKWAZJGWSMXRUZSFGEQJWNDYGYBQENLEBSBJYRLIJAYYGATVBVJQEHMHPYKJNWX");

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
    msg.setTimeStamp(0.862291933424);
    msg.setSource(63550U);
    msg.setSourceEntity(66U);
    msg.setDestination(56699U);
    msg.setDestinationEntity(111U);
    msg.type = 215U;
    msg.command = 187U;
    msg.settings.assign("QXFVQDAZLUJPCWLDGKVLSCKRRPPMHGBHQAJYTFJLTPENGHPGAAZIRHOXYFYNBWSRZMIONOCAH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 31592U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0773327648414;
    tmp_tmp_msg_0_0.lon = 0.791728878968;
    tmp_tmp_msg_0_0.eta = 1470097843U;
    tmp_tmp_msg_0_0.duration = 37144U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YQLQSDCEEMRATAGBBYCPMQVXQZUTVOVBXIDVOYQZIBHNNGCDKXNAJWKFOSXAHNWTMBRIWPIYDJUJUAWSECJBWIUBYZPHFCZKMPXVPHKWOKBXPEFQIVHYPURMHACLJGFTKCUNVS");

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
    msg.setTimeStamp(0.779474242548);
    msg.setSource(53567U);
    msg.setSourceEntity(25U);
    msg.setDestination(13223U);
    msg.setDestinationEntity(108U);
    msg.type = 123U;
    msg.command = 190U;
    msg.settings.assign("UTBCPWSUHAZGIZEPKTMETHLNFJBLVAZZQYMOPDPEOYZCKPHCANNJXBSCBTYDLWMHTJZDONYIJDXQTSMGWJWGGVFRZQMVKVWLWOZFRBPDEJKFNXUWNXHBYRVUYULVGHXIXEY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 4607U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CKBVMEUQISOMGHKJIFSYWQBZCQDRBYAKBBOONGQVAYZKFODMEDCPGGGGQCIONDDAHRWAAHPBYCPCXMJEPRCXBPWXUZGCEDHGTOUMVCSVVMHTNWUOBOXPFLMXRVYLTFLTNXYV");

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
    msg.setTimeStamp(0.7656336933);
    msg.setSource(23195U);
    msg.setSourceEntity(34U);
    msg.setDestination(63480U);
    msg.setDestinationEntity(246U);
    msg.state = 219U;
    msg.plan_id = 56485U;
    msg.wpt_id = 181U;
    msg.settings_chk = 51170U;

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
    msg.setTimeStamp(0.397893297824);
    msg.setSource(61981U);
    msg.setSourceEntity(96U);
    msg.setDestination(44196U);
    msg.setDestinationEntity(147U);
    msg.state = 137U;
    msg.plan_id = 58573U;
    msg.wpt_id = 105U;
    msg.settings_chk = 52058U;

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
    msg.setTimeStamp(0.216775808752);
    msg.setSource(63208U);
    msg.setSourceEntity(41U);
    msg.setDestination(38121U);
    msg.setDestinationEntity(81U);
    msg.state = 87U;
    msg.plan_id = 8357U;
    msg.wpt_id = 11U;
    msg.settings_chk = 30637U;

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
    msg.setTimeStamp(0.0397665216568);
    msg.setSource(60789U);
    msg.setSourceEntity(133U);
    msg.setDestination(5971U);
    msg.setDestinationEntity(153U);
    msg.uid = 250U;
    msg.frag_number = 118U;
    msg.num_frags = 120U;
    const char tmp_msg_0[] = {-46, 89, -115, 18, -13, -114, 123, 79, 119, -51, 68, 94, 44, 87, -34, 44, -11, -126, 19, 62, -95, -54, 37, -47, 67, 28, -12, -60, 81, 90, -84, 4, 79, 34, -67, 33, 96, -20, 102, -108, -44, 40, -116, -111, 106, 63, -65, -114, -67, -114, -66, -21, 33, 84, 81, -74, 17, 30, 56, 18, 83, -26, 80, 15, -64, -23, 42, 38, 82, -67, -118, -62, -77, -49, -43, -58, -82, 123, -4, -3, 126, -55, 45, -128, 110, 58, -65, 52, 88, -128, 67, 102, 17, 77, -19, -99, -66, 108, -93, 6, -18, 42, -27, -53, -20, -10, -52, 123, -122, -119, 112, -38, 23, 20, -66, 102};
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
    msg.setTimeStamp(0.914250081505);
    msg.setSource(62014U);
    msg.setSourceEntity(193U);
    msg.setDestination(13379U);
    msg.setDestinationEntity(102U);
    msg.uid = 181U;
    msg.frag_number = 167U;
    msg.num_frags = 101U;
    const char tmp_msg_0[] = {-84, 40, -66, 8, -2, 6, -111, 11, 83, 60, 112, -72, -80, 35, -55, -52, -70, -45, 32, -107, 48, 37, -83, -6, -27, -54, -43, -14, 105, -83, -19, -62, -101, -44, -91, 7, 117, 37, 5, 42, 26, -46, -84, -99, 108, 46, -116, 53, 124, 10, -13, -94, 83, 76, 43, -90, -76, -95, -86, -75, 88, -29, -128, -115, -24, 112, -52, 29, -27, 31, -5, -124, 35, -92, 109, 118, -26, -113, 88, 3, -104, -60, 89, -10, -47, -68, 76, -125, -126, 23, -98};
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
    msg.setTimeStamp(0.166980675612);
    msg.setSource(65080U);
    msg.setSourceEntity(6U);
    msg.setDestination(40447U);
    msg.setDestinationEntity(169U);
    msg.uid = 211U;
    msg.frag_number = 173U;
    msg.num_frags = 167U;
    const char tmp_msg_0[] = {79, 97, 106, -65, 111, -76, -3, 75, 9, -29, -121, 59, 72, -91, 102, 9, 27, 11, 125, -4, 85, 92, -60, 96, 83, -26, -102, -16, 51, -73, 7, -79, -30, -7, 2, 30, 29, 100, 36, 18, -27};
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
    msg.setTimeStamp(0.121243184366);
    msg.setSource(1457U);
    msg.setSourceEntity(19U);
    msg.setDestination(52628U);
    msg.setDestinationEntity(240U);
    msg.content_type.assign("UGBKSATCKEAWPMMRCVDAAQXYFSW");
    const char tmp_msg_0[] = {-100, -107, 18, 7, -56, 7, 79, -116, 54, -44, 40, 40, 78, -80, 82, 82, 80, 115, -51, -125, -100, -59, 97, 30, 9, -124, -37, -86, -110, 51, -87, -126, -40, 41, 8, 91, 31, -120, -113, -120, -28, -109, 95, -93, -79, -111, 109, 104, -124, 50, -24, 61, -52, 33, 80, -49, 72, -4, -72, -114, 40, -8, 57, -8, 51, 21, 102, -90, -109, -127, 68, -114, 111, 120, -25, -100, 78, 56, -109, -65, 67, -90, -124, 125, -45, -74, -96, 8, 47, -10, 20, -9, -42, 60, -43, -115, 74, 62, 18, 35, 73, 30, -46, 39, -98, 111, 85, 70, 15, -2, -127, -113, 25, -85, -99, -26, -74, 58, 57, 57, -27, 52, 4, -29, 76, 117, 43, -55, -3, -114, -55, -81, 6, 50, -48, 106, -123, -108, 101, -110, -102, 25, -4, -63, 96, 55, 91, 70, 58, 17, 4, -26, 57, -66, 49, -30, 85, 25, -71, -63, -13, 30, -16, 74, -20, -86, 29, 73, 2, -65, -38, -45, 91, -75, -74, 71, 53, -63, -14, -32, -52, 11, -88, -97, 14, -71, 34, -85, -51, -128, 117, 34, -21, -22, -128, -61, -93, -59, 41, -63, -111, 89, 89, 88, 98, -36, 37, -95, -8, 2};
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
    msg.setTimeStamp(0.900786280753);
    msg.setSource(35029U);
    msg.setSourceEntity(69U);
    msg.setDestination(38900U);
    msg.setDestinationEntity(80U);
    msg.content_type.assign("CWESUYDKKJVJDWIOBSZZMQLWOQDZWXJYLUFXFIJFEQGOUFACMZWNEKKAWSEDARVBURHBINBPFEVTTHOJLPGTCFCGHRBRGURSRPFAEXLIPGEBNEJFUAXNRTZLCYYNYIAMDBVQYFVPLXWVZXHPUZGILBGOBUDVWEPEJNNUCMRZQDOSAMQILSPIXQXHGVNHVQOQTLIRCMYLYGADKTQIMJGMUHCCKYDAXKSCWTSKOBHAMMZNVJTNHYFRP");
    const char tmp_msg_0[] = {-6, -110, -31, -55, -68, -84, -41, 81, 23, 9, 30, -2, 60, -111, -25, -1, -23, 33, 93, 79, -55};
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
    msg.setTimeStamp(0.371953590117);
    msg.setSource(45673U);
    msg.setSourceEntity(43U);
    msg.setDestination(9838U);
    msg.setDestinationEntity(86U);
    msg.content_type.assign("RYQSZPCRITCUMIQIYAHYYNZWQKANFTGMJOQONPFMFHXUIYZQXLTBXWHBAISRHWCXCLWFWESQQSADTJZSRWLEFPUKFNEJVEPUIWCRIAMLPEPEOQJJMEPJCSIJFRHMTYDKQVSKRYRZXWGLBKVZYGMZBXYNJLJUCCWUNCVHENEZTIHHVMDFAUOKLOGNBPRGNKAVEAOMVH");
    const char tmp_msg_0[] = {-16, 77, 50, -6, 105, -2, -33, 114, -18, 37, -98, 119, 54, -114, -103, 34, -40, -25, 61, -72, 70, 66, 73, -53, -107, 73, -61, -49, 122, 96, -1, 83, -2, 61, 31, 80, 42, -1, -94, 59, -94, 62, 57, 21, 54, 117, -84, -118, -110, 108, 70, -43, -14, 96, -113, 125, 54, 116, -82, 9, 15, -101, -25, -109, -111, 1, 28, -59, -59, 83, 35, 13, 1, 113, -95, 114, -52, -118, 64, -78};
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
    msg.setTimeStamp(0.831335754325);
    msg.setSource(6683U);
    msg.setSourceEntity(110U);
    msg.setDestination(6253U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.918792072798);
    msg.setSource(38052U);
    msg.setSourceEntity(242U);
    msg.setDestination(61954U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.707363922134);
    msg.setSource(46604U);
    msg.setSourceEntity(219U);
    msg.setDestination(32757U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.573505329818);
    msg.setSource(43388U);
    msg.setSourceEntity(240U);
    msg.setDestination(35777U);
    msg.setDestinationEntity(61U);
    msg.target = 39496U;
    msg.bearing = 0.701823897246;
    msg.elevation = 0.770769812944;

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
    msg.setTimeStamp(0.620470917358);
    msg.setSource(20358U);
    msg.setSourceEntity(246U);
    msg.setDestination(20536U);
    msg.setDestinationEntity(187U);
    msg.target = 13151U;
    msg.bearing = 0.675010612376;
    msg.elevation = 0.802443703809;

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
    msg.setTimeStamp(0.000632373711413);
    msg.setSource(19499U);
    msg.setSourceEntity(189U);
    msg.setDestination(39234U);
    msg.setDestinationEntity(122U);
    msg.target = 57632U;
    msg.bearing = 0.00293067985645;
    msg.elevation = 0.0256419685904;

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
    msg.setTimeStamp(0.883003424935);
    msg.setSource(5870U);
    msg.setSourceEntity(73U);
    msg.setDestination(8298U);
    msg.setDestinationEntity(200U);
    msg.target = 28193U;
    msg.x = 0.142670820498;
    msg.y = 0.763394298679;
    msg.z = 0.0917898828569;

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
    msg.setTimeStamp(0.946524954426);
    msg.setSource(9133U);
    msg.setSourceEntity(27U);
    msg.setDestination(38524U);
    msg.setDestinationEntity(93U);
    msg.target = 32795U;
    msg.x = 0.638099189054;
    msg.y = 0.213498053498;
    msg.z = 0.742372619187;

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
    msg.setTimeStamp(0.244363176751);
    msg.setSource(25300U);
    msg.setSourceEntity(205U);
    msg.setDestination(42699U);
    msg.setDestinationEntity(151U);
    msg.target = 9736U;
    msg.x = 0.809403651842;
    msg.y = 0.885250396722;
    msg.z = 0.262772933001;

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
    msg.setTimeStamp(0.109294714793);
    msg.setSource(63043U);
    msg.setSourceEntity(23U);
    msg.setDestination(51989U);
    msg.setDestinationEntity(86U);
    msg.target = 6255U;
    msg.lat = 0.479653850558;
    msg.lon = 0.257448999363;
    msg.z_units = 74U;
    msg.z = 0.700393436301;

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
    msg.setTimeStamp(0.535985384553);
    msg.setSource(21978U);
    msg.setSourceEntity(117U);
    msg.setDestination(48928U);
    msg.setDestinationEntity(30U);
    msg.target = 25853U;
    msg.lat = 0.72858607475;
    msg.lon = 0.842235717142;
    msg.z_units = 13U;
    msg.z = 0.811300457961;

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
    msg.setTimeStamp(0.426792129487);
    msg.setSource(35804U);
    msg.setSourceEntity(198U);
    msg.setDestination(12085U);
    msg.setDestinationEntity(233U);
    msg.target = 61664U;
    msg.lat = 0.852278498741;
    msg.lon = 0.638225032307;
    msg.z_units = 199U;
    msg.z = 0.535893480374;

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
    msg.setTimeStamp(0.580417735926);
    msg.setSource(53018U);
    msg.setSourceEntity(54U);
    msg.setDestination(59792U);
    msg.setDestinationEntity(67U);
    msg.locale.assign("OJRJYJNFBZNELKPYKTWVELTAXLRYBJQLKQVRJPUPSRLMFSXUCXDAPFWQUTDUTIMITGBQOYDIQNSFJBZXFUNFENDOQSZKAMKWPWVUEOKEWMRKIFXBCMYMLWRASNNPBCOIUGLHBGE");
    const char tmp_msg_0[] = {-66, 66, 29, 56, -3, 97, 118, 55, 72, -21, -39, 1, 126, 28, -48, 33, 22, 26, 48, 16, 44, 102, 41, -10, 106, -91, -90, 39, -96, -49, -121, 105, 100, -109, 27, 69, -86, 103, 68, -98, -113, 113, -69, -112, 63, 88, 107, 31, 103, 9, -124, 99, 64, -126, -59, 59, -86, -41, -100, -54, -45, -8, 45, 105, 53, 98, 113, -13, 71, 82, -18, -59, 113, 72, 117, -51, -106, -75, 1, 19, -30, -82, -38, 86, 24, -128, 13, 80, 56, -66, -71, -113, 92, -128, -70, -47, -78, 112, -12, 48, 79, -49, -105, 83, -25, 21, 14, -126, 83, 49, 124, 68, 89, 48, 27, 65, 116, -119, -77, 5, -121, 96, 121, -87, -24, -116, -83, -1, 32, -127, -22, 77, 35, 80, 48, -58, -69, -122, 118, -108, -96, -104, -12, 77, 58, -106, 75, -59, -84, 92};
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
    msg.setTimeStamp(0.977989282634);
    msg.setSource(5850U);
    msg.setSourceEntity(69U);
    msg.setDestination(23734U);
    msg.setDestinationEntity(243U);
    msg.locale.assign("VACQLQJPLCC");
    const char tmp_msg_0[] = {-29, 119, 112, 107, 63, -13, 59, 46, 28, 114, 90, 51, -38, 80, 28, -42, 94, 102, 42, 39, -30, -27, 102, 123, 101, 10, 124, -71, 111, 114, -84, -1, 28, -40, -113, 57, 104, -55, -45, -117, -78, -79, -101, 82, -5, 116, 126, -23, 9, 1, 36, 64, 69, -19, 100, -103, -99, -52, 44, 66, -44, 87, -37, 44, 22, -94, -34, 119, -120, -80, -34, -19, 4, -101, 39, -121, 103, 95, -107, -29, 33, -24, 33, 13, -93, 74, -31, -85, 47, 3, 20, 18, 100, 109, -78, -127, 23, 80, 83, -81, -89, -20, -98, 92, -7, -9, 118, 110, -78, 63, -29, -36, -29, 45, -47, 122, -79, 99, 48, -93, 24, 39, 75, -74, 123, -103, 107, -57, -40, -52, -54, 77, -40, 126, -49, 97, -122, 77, -31, 60, -92, 103, -45, 58, -52, -119, -122, -27, -56, -103, 95, -102, 8, 29, -65, -103, 73, 22, -18, -80, -104, -106, -113, 33, -46, -109, -14, -37, 100, -44, -125, -86, 66, 5, -79, -33, 96, 16, -59, 57, 104, 79, -124, 96, 70, 37, -91, 55, 72, 28, -84, -22, 110, -79, 116, 14, -122, 33, -113, 94, 56, -24, 75, 92, -96};
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
    msg.setTimeStamp(0.228525106073);
    msg.setSource(52592U);
    msg.setSourceEntity(234U);
    msg.setDestination(55243U);
    msg.setDestinationEntity(15U);
    msg.locale.assign("MPIVNZSCPLGLVIEJESUIOTYLBFFXOCMKDTWUWNVZAYJOAWVSTKLZGBKHNSMSIPEMQXNOAYNNATBTRBPEVZNBHDUJEQSYEUTSCGFKTDAJXXBDRIFYAQXCEGRZXHANRUZJDBBDFLXYEHZSCTILVXWVXHQOJPCILCWGBCQKOTMSWFRMEJNDRHMQMPR");
    const char tmp_msg_0[] = {-113, -30, 73, -22, 38, 37, 2, 85, -95, 12, -124, -119, 115, -17, -102, 36, 25, 16, -109, 124, 33, -9, -57, -91, -114, 36, -82, 36, 75, 6, -88, 6, 24, 1, -124, -86, -8, 56, 75, 24, -88, -5, -92, -76, 34, -78, 116, 41, -48, -109, 15, -80, 111, 84, -71, -123, 78, -1, -14, 106, -125, -7, -38, -75, -28, -34, -116, -68, -89, -4, 96, -44, 25, 64, -51, 51, -120, 14, 17, 96, 80, -65, 45, 88, 46, 57, -58, 89, -101, -58, -15, 112, -100, 23, 105, 117, -85, -7, 8, 20, -66, 38, 35, 97, 62, -69, -52, 34, 95, 54, -18, 75, 111, 117, -4, 6, -64, -118, 56, 21, 58, -110, 20, 83, -115, -101, -94, -6, 31, 18, 78, 51, 70, -121, -59, -101, -67, -107, 18, 92, 61, -124, -57, 109, 102, 51, -59, -123, 56, -28, 32, -55, 34, 39, 125, 11, -119, 25, 115, -110, -79, 87, 120, 37, 38, 19, 113, 48, -111, 68, 90, 35, 125, -35, -30, -20, -115, 32, 92, -30, -96, -128, 68, 23, -85, -44, -85, -123, -56, -15, 90, -12, 84, 108, -124, 55, 76, -127, 32, -78, -77, 91, -105, 24, 86, -10, 124, 86, -9, 37, 125, -119, 80, -128, -112, -6, -59, -123};
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
    msg.setTimeStamp(0.318583954351);
    msg.setSource(11304U);
    msg.setSourceEntity(248U);
    msg.setDestination(60210U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.210316957157);
    msg.setSource(40433U);
    msg.setSourceEntity(247U);
    msg.setDestination(50946U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.755566776694);
    msg.setSource(23355U);
    msg.setSourceEntity(149U);
    msg.setDestination(57292U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.605361730319);
    msg.setSource(55893U);
    msg.setSourceEntity(158U);
    msg.setDestination(6379U);
    msg.setDestinationEntity(89U);
    msg.camid = 24U;
    msg.x = 41464U;
    msg.y = 34720U;

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
    msg.setTimeStamp(0.299346504528);
    msg.setSource(12762U);
    msg.setSourceEntity(129U);
    msg.setDestination(43988U);
    msg.setDestinationEntity(218U);
    msg.camid = 111U;
    msg.x = 15271U;
    msg.y = 15779U;

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
    msg.setTimeStamp(0.257912266301);
    msg.setSource(29955U);
    msg.setSourceEntity(65U);
    msg.setDestination(53370U);
    msg.setDestinationEntity(71U);
    msg.camid = 54U;
    msg.x = 29683U;
    msg.y = 8753U;

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
    msg.setTimeStamp(0.649777501467);
    msg.setSource(52732U);
    msg.setSourceEntity(144U);
    msg.setDestination(46389U);
    msg.setDestinationEntity(186U);
    msg.camid = 135U;
    msg.x = 8199U;
    msg.y = 54029U;

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
    msg.setTimeStamp(0.597277281036);
    msg.setSource(30928U);
    msg.setSourceEntity(21U);
    msg.setDestination(6781U);
    msg.setDestinationEntity(30U);
    msg.camid = 80U;
    msg.x = 12850U;
    msg.y = 16798U;

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
    msg.setTimeStamp(0.245954514805);
    msg.setSource(44031U);
    msg.setSourceEntity(172U);
    msg.setDestination(12513U);
    msg.setDestinationEntity(125U);
    msg.camid = 118U;
    msg.x = 11179U;
    msg.y = 30240U;

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
    msg.setTimeStamp(0.95751701616);
    msg.setSource(36947U);
    msg.setSourceEntity(70U);
    msg.setDestination(58037U);
    msg.setDestinationEntity(218U);
    msg.tracking = 48U;
    msg.lat = 0.672539282579;
    msg.lon = 0.525196895175;
    msg.x = 0.0874217918841;
    msg.y = 0.62928121612;
    msg.z = 0.610433311268;

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
    msg.setTimeStamp(0.264340142936);
    msg.setSource(65128U);
    msg.setSourceEntity(85U);
    msg.setDestination(33156U);
    msg.setDestinationEntity(186U);
    msg.tracking = 7U;
    msg.lat = 0.890689880694;
    msg.lon = 0.555592833686;
    msg.x = 0.435986832376;
    msg.y = 0.566443650356;
    msg.z = 0.0124556225496;

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
    msg.setTimeStamp(0.46064227212);
    msg.setSource(63421U);
    msg.setSourceEntity(249U);
    msg.setDestination(39641U);
    msg.setDestinationEntity(163U);
    msg.tracking = 149U;
    msg.lat = 0.689708399795;
    msg.lon = 0.28801472363;
    msg.x = 0.945988608791;
    msg.y = 0.723893659409;
    msg.z = 0.171876629278;

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
    msg.setTimeStamp(0.557013046176);
    msg.setSource(21379U);
    msg.setSourceEntity(141U);
    msg.setDestination(2213U);
    msg.setDestinationEntity(52U);
    msg.target.assign("QEBTHMEHTVAXPOFEWLQCHWMJCAJTAVAELIDZPRRRVQSWYGTXMCGPNDBUZRKGB");
    msg.lbearing = 0.806886644286;
    msg.lelevation = 0.568359155164;
    msg.bearing = 0.052328445663;
    msg.elevation = 0.411729354563;
    msg.phi = 0.873307904183;
    msg.theta = 0.0408248808537;
    msg.psi = 0.514586831158;
    msg.accuracy = 0.0741999577024;

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
    msg.setTimeStamp(0.411329465072);
    msg.setSource(34122U);
    msg.setSourceEntity(146U);
    msg.setDestination(22763U);
    msg.setDestinationEntity(74U);
    msg.target.assign("BPBLOXWQGGZUMWXVEEJWEXSAJSKNTTKHIGPNWXPQVRWXATWAKCJLLTFGRZFNMMIFPJWRTACKBHQEYBRXBYLSZHVTJGMCUJUJUHYCDRFDIDFGMPFCYENIYPKJMHAPABNCXRKURNQUVNPFKDGYISVKRYRDAZHTQGLHWQZ");
    msg.lbearing = 0.449961917767;
    msg.lelevation = 0.777605657303;
    msg.bearing = 0.875413603867;
    msg.elevation = 0.947059859236;
    msg.phi = 0.339599503334;
    msg.theta = 0.919993027087;
    msg.psi = 0.678665245424;
    msg.accuracy = 0.772957968845;

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
    msg.setTimeStamp(0.157932810777);
    msg.setSource(37724U);
    msg.setSourceEntity(46U);
    msg.setDestination(25599U);
    msg.setDestinationEntity(157U);
    msg.target.assign("UTJTABPOBVQJEYPKLJYTPJSDEYUKLPZEETKZGNZAMHOQHDLYCLPMCNIOXHLQMABGROXAHKGSCUXRSUCTXWFZWVSICAVUMYZIFSNRFRDRNMWNBCXOTFPSYIRGQH");
    msg.lbearing = 0.995198781102;
    msg.lelevation = 0.407339098768;
    msg.bearing = 0.259358545988;
    msg.elevation = 0.832142776662;
    msg.phi = 0.0985738867961;
    msg.theta = 0.761073699093;
    msg.psi = 0.737567188411;
    msg.accuracy = 0.46634071711;

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
    msg.setTimeStamp(0.192489098574);
    msg.setSource(1451U);
    msg.setSourceEntity(84U);
    msg.setDestination(12286U);
    msg.setDestinationEntity(95U);
    msg.target.assign("NDLZZXVPNKKFYIKKNAEBGXAKDVQWPJFIEYTJTMORUPVHEYNRTRVOZBSBMTUHKDXHVPVPGUSVCILXZNLQSFPQMHXOUUYZUOISXOAMXWLCCLETKIBWC");
    msg.x = 0.855712522093;
    msg.y = 0.544058206561;
    msg.z = 0.165246589628;
    msg.n = 0.109453361179;
    msg.e = 0.258287744445;
    msg.d = 3.65408350578e-06;
    msg.phi = 0.662891749271;
    msg.theta = 0.710439243861;
    msg.psi = 0.200100086792;
    msg.accuracy = 0.673168878944;

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
    msg.setTimeStamp(0.713349462848);
    msg.setSource(6123U);
    msg.setSourceEntity(73U);
    msg.setDestination(51395U);
    msg.setDestinationEntity(143U);
    msg.target.assign("SZDSYDTOAGFHJSTQNNPWHMYCGNFZRITKSPPYXSECYWVEMWWTIMDJRPGLBCOPPMZGDSLVAVLMENNQURBZIEFJXTRWCIDQCBUJJIHLWRHHSZRPGEUXFCMYQAOVJLOKUCDMORKVVJF");
    msg.x = 0.990792788658;
    msg.y = 0.894143990099;
    msg.z = 0.6742570202;
    msg.n = 0.949693855201;
    msg.e = 0.0493837396594;
    msg.d = 0.607106701917;
    msg.phi = 0.52100828652;
    msg.theta = 0.0394582960473;
    msg.psi = 0.321976208911;
    msg.accuracy = 0.73762650836;

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
    msg.setTimeStamp(0.27324323677);
    msg.setSource(52560U);
    msg.setSourceEntity(104U);
    msg.setDestination(1899U);
    msg.setDestinationEntity(113U);
    msg.target.assign("EFZSMRQIZKLIJORYFBELAAAVWHKALOTAAPN");
    msg.x = 0.109508732523;
    msg.y = 0.202323287095;
    msg.z = 0.258971653676;
    msg.n = 0.896806602665;
    msg.e = 0.931549549378;
    msg.d = 0.0450749137589;
    msg.phi = 0.793809807514;
    msg.theta = 0.230752389816;
    msg.psi = 0.719217621601;
    msg.accuracy = 0.706086210053;

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
    msg.setTimeStamp(0.343946793992);
    msg.setSource(24903U);
    msg.setSourceEntity(160U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(119U);
    msg.target.assign("CZTNLDIIAGREJCCTGQAUYWFJCDBZNDGTFCJBG");
    msg.lat = 0.617982056664;
    msg.lon = 0.48970486663;
    msg.z_units = 29U;
    msg.z = 0.5023989022;
    msg.accuracy = 0.359281131096;

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
    msg.setTimeStamp(0.686758462456);
    msg.setSource(52343U);
    msg.setSourceEntity(100U);
    msg.setDestination(64755U);
    msg.setDestinationEntity(177U);
    msg.target.assign("ZNOWNJSBZEXQWLPIFBIDBBDOPADLZASOLKEXCSSMFDLRKETBTUQXWUWCSLRIELNXKURETUQDGSMOATOGUVOHCTAMYRDZVZDBPRSJNIQGCHJVUMWWAMKIONXFDKWTCQQFEURTCOUAF");
    msg.lat = 0.069229836716;
    msg.lon = 0.608294765444;
    msg.z_units = 191U;
    msg.z = 0.793030553577;
    msg.accuracy = 0.858230038052;

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
    msg.setTimeStamp(0.586004304587);
    msg.setSource(42770U);
    msg.setSourceEntity(71U);
    msg.setDestination(6517U);
    msg.setDestinationEntity(221U);
    msg.target.assign("ZIFUIHVCSEVOVWNSTBGUYKAIBXQETMUKVLMKMMLGQTPRAAUOUBQZDQWKZXPNAYTAQJXZQIBHZYFSRDPVBBTDGCXBGKBSPMXQASOOMVHTCLKTWQJUDYSZUOCHACYGKEEJDHVWEHNZDGXPFURLNWNEVUDJWPGJCJSXODKEIFTOILPWRYDLSJAMYWRPPDAFRIRFGKGY");
    msg.lat = 0.4085706544;
    msg.lon = 0.714816217773;
    msg.z_units = 209U;
    msg.z = 0.911684709907;
    msg.accuracy = 0.0733440173319;

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
    msg.setTimeStamp(0.286492918203);
    msg.setSource(43583U);
    msg.setSourceEntity(161U);
    msg.setDestination(4606U);
    msg.setDestinationEntity(13U);
    msg.name.assign("UMQRFKRHUZTYKQYQFOFGLVEIIBZHHTMRLVQQDWHWUNZZORFLDLDTQHKZFGECXYUIPAWJPCMGRHSIPEKJAOIMEBSACKNZPNQBNXWCKPPSLCLSZLWYXATAHFUCDCJQXIDEZNJTPUBDHASSRMXZTAJMEFDSUJUTGMYVFAOGOKFBGKVISTTNKLVJASBBRWMYYJSOPRWBUWGJOOLVMORYXYIGPYNIVIOTCCXGKXWJHEHQVURDANXBDGEMLEN");
    msg.lat = 0.866604550187;
    msg.lon = 0.606098596503;
    msg.z = 0.461280216615;
    msg.z_units = 115U;

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
    msg.setTimeStamp(0.505395332782);
    msg.setSource(55624U);
    msg.setSourceEntity(79U);
    msg.setDestination(18090U);
    msg.setDestinationEntity(220U);
    msg.name.assign("OYZJKZBQMZMIPEVXPHCSXBIEGSKSAATDJXIKAZGDZZYFJSOQWFGBGQNWYNCOEBJNPHQVZPRHODFJFTVVDLSJVCHNRUMDTNJAILWOYJSGLARHVCOXUSAQERUEYOBTCLKTSMGWKHCPJWALHGUTBXHXNDVVQPMDTBKXRBCGNMQGEQLKNLOEBZVUECPUBDMWKZFWITJXYFIFSU");
    msg.lat = 0.0637970253478;
    msg.lon = 0.409605398549;
    msg.z = 0.906099383767;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.308935069835);
    msg.setSource(55343U);
    msg.setSourceEntity(145U);
    msg.setDestination(62192U);
    msg.setDestinationEntity(98U);
    msg.name.assign("SQUAROZQNNVIJWYTBHJMAITJKGXMESDDPDFHSVQJSYFQNIJHGRNTAODFONSMSOWECZIUMGLKCDGMAMNPOCQJLUWOLKZXWUFPXUICTHFNWPZRVAYQPYJAKPEVGWTFLYMSLEZGXDQFQNFSZRFVVHZBJZGYCBLZL");
    msg.lat = 0.998392425067;
    msg.lon = 0.249261149495;
    msg.z = 0.925525630996;
    msg.z_units = 67U;

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
    msg.setTimeStamp(0.723047565431);
    msg.setSource(39499U);
    msg.setSourceEntity(87U);
    msg.setDestination(57776U);
    msg.setDestinationEntity(60U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.41072830259);
    msg.setSource(41790U);
    msg.setSourceEntity(151U);
    msg.setDestination(25804U);
    msg.setDestinationEntity(115U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.640955279429);
    msg.setSource(40221U);
    msg.setSourceEntity(150U);
    msg.setDestination(11878U);
    msg.setDestinationEntity(244U);
    msg.op = 59U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QXRARYKQZTFGNHSOG");
    tmp_msg_0.lat = 0.477176114518;
    tmp_msg_0.lon = 0.532340966588;
    tmp_msg_0.z = 0.491248539714;
    tmp_msg_0.z_units = 189U;
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
    msg.setTimeStamp(0.462374801105);
    msg.setSource(50965U);
    msg.setSourceEntity(234U);
    msg.setDestination(57158U);
    msg.setDestinationEntity(16U);
    msg.value = 0.430783755178;
    msg.type = 254U;

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
    msg.setTimeStamp(0.145770661791);
    msg.setSource(41637U);
    msg.setSourceEntity(104U);
    msg.setDestination(32345U);
    msg.setDestinationEntity(78U);
    msg.value = 0.0971249072682;
    msg.type = 100U;

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
    msg.setTimeStamp(0.11007545985);
    msg.setSource(4102U);
    msg.setSourceEntity(8U);
    msg.setDestination(62977U);
    msg.setDestinationEntity(186U);
    msg.value = 0.410601456998;
    msg.type = 23U;

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
    msg.setTimeStamp(0.965714410993);
    msg.setSource(11513U);
    msg.setSourceEntity(0U);
    msg.setDestination(11002U);
    msg.setDestinationEntity(33U);
    msg.value = 0.841371244114;

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
    msg.setTimeStamp(0.558547453662);
    msg.setSource(31617U);
    msg.setSourceEntity(218U);
    msg.setDestination(52451U);
    msg.setDestinationEntity(31U);
    msg.value = 0.65549489257;

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
    msg.setTimeStamp(0.516820002522);
    msg.setSource(39337U);
    msg.setSourceEntity(106U);
    msg.setDestination(59045U);
    msg.setDestinationEntity(53U);
    msg.value = 0.182643574095;

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
    msg.setTimeStamp(0.269343381306);
    msg.setSource(28917U);
    msg.setSourceEntity(170U);
    msg.setDestination(33038U);
    msg.setDestinationEntity(170U);
    msg.timestamp_last_service = 0.746947610737;
    msg.time_next_service = 0.139508235334;
    msg.time_motor_next_service = 0.539945609074;
    msg.time_idle_ground = 0.213434245277;
    msg.time_idle_air = 0.518798828847;
    msg.time_idle_water = 0.6711056426;
    msg.time_idle_underwater = 0.120189764053;
    msg.time_idle_unknown = 0.774620229366;
    msg.time_motor_ground = 0.757363589785;
    msg.time_motor_air = 0.455238987721;
    msg.time_motor_water = 0.820786362133;
    msg.time_motor_underwater = 0.596794279717;
    msg.time_motor_unknown = 0.437587812576;
    msg.rpm_min = 12926;
    msg.rpm_max = 27598;
    msg.depth_max = 0.663318073355;

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
    msg.setTimeStamp(0.940398499856);
    msg.setSource(62507U);
    msg.setSourceEntity(238U);
    msg.setDestination(35635U);
    msg.setDestinationEntity(209U);
    msg.timestamp_last_service = 0.959884128052;
    msg.time_next_service = 0.368393098047;
    msg.time_motor_next_service = 0.621912976603;
    msg.time_idle_ground = 0.690773904743;
    msg.time_idle_air = 0.929103393198;
    msg.time_idle_water = 0.265686968198;
    msg.time_idle_underwater = 0.409811428872;
    msg.time_idle_unknown = 0.0496938702833;
    msg.time_motor_ground = 0.280225823344;
    msg.time_motor_air = 0.970916437374;
    msg.time_motor_water = 0.485872090856;
    msg.time_motor_underwater = 0.916395070256;
    msg.time_motor_unknown = 0.0841794065636;
    msg.rpm_min = -15312;
    msg.rpm_max = -9850;
    msg.depth_max = 0.769866409457;

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
    msg.setTimeStamp(0.190536240213);
    msg.setSource(17630U);
    msg.setSourceEntity(186U);
    msg.setDestination(44544U);
    msg.setDestinationEntity(99U);
    msg.timestamp_last_service = 0.710519753364;
    msg.time_next_service = 0.897915008361;
    msg.time_motor_next_service = 0.85441528034;
    msg.time_idle_ground = 0.665046479976;
    msg.time_idle_air = 0.221965247773;
    msg.time_idle_water = 0.651584943424;
    msg.time_idle_underwater = 0.700167839274;
    msg.time_idle_unknown = 0.696224509035;
    msg.time_motor_ground = 0.62299510923;
    msg.time_motor_air = 0.9424543029;
    msg.time_motor_water = 0.246524830798;
    msg.time_motor_underwater = 0.509726494904;
    msg.time_motor_unknown = 0.614867673665;
    msg.rpm_min = -10313;
    msg.rpm_max = -7546;
    msg.depth_max = 0.965336925291;

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
    msg.setTimeStamp(0.249311565374);
    msg.setSource(28796U);
    msg.setSourceEntity(197U);
    msg.setDestination(5351U);
    msg.setDestinationEntity(0U);
    msg.severity = 165U;
    msg.text.assign("ZPLQXELYMULRRZADFIGEGVOFMUEAXBEZFERFQYRWDSCVWTGTLBLIOSCBOXKOJXQXWEWPLJZHFLSEAMYCMWGW");

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
    msg.setTimeStamp(0.300773711026);
    msg.setSource(22530U);
    msg.setSourceEntity(12U);
    msg.setDestination(7044U);
    msg.setDestinationEntity(29U);
    msg.severity = 8U;
    msg.text.assign("BBHYFVVUBMPSXJRRIRWSCCXLLTYIRORTKXGPLANAMGEXKDVDPYFGGDFXGTKVLBCKHBEZODFHRKDGPVHOEMNUAAFFJSQOXTHZAKRJNJCBQYKZGDNSFMSYJZZATNLBIUQUUIACWOWZYYUBNABUFIZQCTNQVWGJXWYHSMTEJCTAFSOEIFVSASGUOEDKIPMZQMJHKIREEY");

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
    msg.setTimeStamp(0.90006516846);
    msg.setSource(54029U);
    msg.setSourceEntity(34U);
    msg.setDestination(51851U);
    msg.setDestinationEntity(112U);
    msg.severity = 172U;
    msg.text.assign("ATVSFRATKGPDZDJJNPHKCRYAHWCAXQAGMONDUMWYDGNNJEYGYXSRFHJJIPHG");

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
    msg.setTimeStamp(0.303706176116);
    msg.setSource(32971U);
    msg.setSourceEntity(96U);
    msg.setDestination(60926U);
    msg.setDestinationEntity(212U);
    msg.channel = 78;
    msg.value = 757218452;
    msg.gain = 171U;

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
    msg.setTimeStamp(0.0550393739066);
    msg.setSource(57727U);
    msg.setSourceEntity(65U);
    msg.setDestination(42961U);
    msg.setDestinationEntity(143U);
    msg.channel = 36;
    msg.value = 1125479880;
    msg.gain = 38U;

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
    msg.setTimeStamp(0.371031380156);
    msg.setSource(52101U);
    msg.setSourceEntity(55U);
    msg.setDestination(19501U);
    msg.setDestinationEntity(227U);
    msg.channel = -72;
    msg.value = 1218158902;
    msg.gain = 7U;

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
    msg.setTimeStamp(0.707604717571);
    msg.setSource(8987U);
    msg.setSourceEntity(137U);
    msg.setDestination(51510U);
    msg.setDestinationEntity(215U);
    msg.ch01 = 0.110633882593;
    msg.ch02 = 0.431612545906;
    msg.ch03 = 0.842383311317;
    msg.ch04 = 0.406939958454;
    msg.ch05 = 0.956526371236;
    msg.ch06 = 0.073828387406;
    msg.ch07 = 0.837013083425;
    msg.ch08 = 0.0819388298898;
    msg.ch09 = 0.583183592488;
    msg.ch10 = 0.974540268791;
    msg.ch11 = 0.511706603059;
    msg.ch12 = 0.612853463685;
    msg.ch13 = 0.331010791879;
    msg.ch14 = 0.994992932288;
    msg.ch15 = 0.135509479488;
    msg.ch16 = 0.931312522546;

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
    msg.setTimeStamp(0.119307584192);
    msg.setSource(58176U);
    msg.setSourceEntity(237U);
    msg.setDestination(35236U);
    msg.setDestinationEntity(104U);
    msg.ch01 = 0.416589362755;
    msg.ch02 = 0.529395282085;
    msg.ch03 = 0.20974198383;
    msg.ch04 = 0.371427171529;
    msg.ch05 = 0.78162266867;
    msg.ch06 = 0.109645313747;
    msg.ch07 = 0.306166810156;
    msg.ch08 = 0.737270341827;
    msg.ch09 = 0.10592041359;
    msg.ch10 = 0.742399375786;
    msg.ch11 = 0.0815809598291;
    msg.ch12 = 0.48454617291;
    msg.ch13 = 0.397234034841;
    msg.ch14 = 0.689629505387;
    msg.ch15 = 0.515689357059;
    msg.ch16 = 0.682506465578;

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
    msg.setTimeStamp(0.711725166614);
    msg.setSource(21778U);
    msg.setSourceEntity(152U);
    msg.setDestination(16002U);
    msg.setDestinationEntity(165U);
    msg.ch01 = 0.910719789236;
    msg.ch02 = 0.050425422853;
    msg.ch03 = 0.0915176585331;
    msg.ch04 = 0.387093139592;
    msg.ch05 = 0.116911126772;
    msg.ch06 = 0.256888916441;
    msg.ch07 = 0.865623088981;
    msg.ch08 = 0.907929876215;
    msg.ch09 = 0.00544116147876;
    msg.ch10 = 0.719536040701;
    msg.ch11 = 0.802131255582;
    msg.ch12 = 0.0282272186446;
    msg.ch13 = 0.990517676036;
    msg.ch14 = 0.509813407071;
    msg.ch15 = 0.561985821422;
    msg.ch16 = 0.925306193051;

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
    msg.setTimeStamp(0.0691572994837);
    msg.setSource(16957U);
    msg.setSourceEntity(175U);
    msg.setDestination(16681U);
    msg.setDestinationEntity(59U);
    msg.value = 0.615950296118;

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
    msg.setTimeStamp(0.443389009541);
    msg.setSource(27305U);
    msg.setSourceEntity(86U);
    msg.setDestination(46151U);
    msg.setDestinationEntity(239U);
    msg.value = 0.281435911411;

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
    msg.setTimeStamp(0.220205957141);
    msg.setSource(60778U);
    msg.setSourceEntity(236U);
    msg.setDestination(660U);
    msg.setDestinationEntity(57U);
    msg.value = 0.445522832965;

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
    msg.setTimeStamp(0.915718740377);
    msg.setSource(44451U);
    msg.setSourceEntity(173U);
    msg.setDestination(65285U);
    msg.setDestinationEntity(183U);
    msg.op = 89U;
    msg.lat = 0.524246350456;
    msg.lon = 0.353415381499;
    msg.height = 0.941170989756;
    msg.depth = 0.718136144906;
    msg.alt = 0.2342974788;

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
    msg.setTimeStamp(0.248360761026);
    msg.setSource(44633U);
    msg.setSourceEntity(106U);
    msg.setDestination(14976U);
    msg.setDestinationEntity(15U);
    msg.op = 54U;
    msg.lat = 0.559307923499;
    msg.lon = 0.775887766599;
    msg.height = 0.358380875723;
    msg.depth = 0.418927312968;
    msg.alt = 0.864060007971;

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
    msg.setTimeStamp(0.959929577488);
    msg.setSource(61867U);
    msg.setSourceEntity(5U);
    msg.setDestination(26050U);
    msg.setDestinationEntity(105U);
    msg.op = 26U;
    msg.lat = 0.568270627473;
    msg.lon = 0.931513546938;
    msg.height = 0.106087520744;
    msg.depth = 0.706085296065;
    msg.alt = 0.656821974222;

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
