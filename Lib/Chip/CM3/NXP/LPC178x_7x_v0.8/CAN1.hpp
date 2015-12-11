#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CAN1 controller 
    namespace Nonemod{    ///<Controls the operating mode of the CAN Controller.
        using Addr = Register::Address<0x40044000,0xffffff40,0,unsigned>;
        ///Reset Mode.
        enum class RmVal {
            normalTheCanContr=0x00000000,     ///<Normal.The CAN Controller is in the Operating Mode, and certain registers can not be written.
            resetCanOperation=0x00000001,     ///<Reset. CAN operation is disabled, writable registers can be written and the current transmission/reception of a message is aborted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RmVal> rm{}; 
        namespace RmValC{
            constexpr Register::FieldValue<decltype(rm)::Type,RmVal::normalTheCanContr> normalTheCanContr{};
            constexpr Register::FieldValue<decltype(rm)::Type,RmVal::resetCanOperation> resetCanOperation{};
        }
        ///Listen Only Mode.
        enum class LomVal {
            normalTheCanCont=0x00000000,     ///<Normal. The CAN controller acknowledges a successfully received message on the CAN bus. The error counters are stopped at the current value.
            listenOnlyTheCon=0x00000001,     ///<Listen only. The controller gives no acknowledgment, even if a message is successfully received. Messages cannot be sent, and the controller operates in error passive mode. This mode is intended for software bit rate detection and hot plugging.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LomVal> lom{}; 
        namespace LomValC{
            constexpr Register::FieldValue<decltype(lom)::Type,LomVal::normalTheCanCont> normalTheCanCont{};
            constexpr Register::FieldValue<decltype(lom)::Type,LomVal::listenOnlyTheCon> listenOnlyTheCon{};
        }
        ///Self Test Mode.
        enum class StmVal {
            normalATransmitte=0x00000000,     ///<Normal. A transmitted message must be acknowledged to be considered successful.
            selfTestTheContr=0x00000001,     ///<Self test. The controller will consider a Tx message successful even if there is no acknowledgment received. In this mode a full node test is possible without any other active node on the bus using the SRR bit in CANxCMR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,StmVal> stm{}; 
        namespace StmValC{
            constexpr Register::FieldValue<decltype(stm)::Type,StmVal::normalATransmitte> normalATransmitte{};
            constexpr Register::FieldValue<decltype(stm)::Type,StmVal::selfTestTheContr> selfTestTheContr{};
        }
        ///Transmit Priority Mode.
        enum class TpmVal {
            canIdTheTransmit=0x00000000,     ///<CAN ID. The transmit priority for 3 Transmit Buffers depends on the CAN Identifier.
            localPriorityThe=0x00000001,     ///<Local priority. The transmit priority for 3 Transmit Buffers depends on the contents of the Tx Priority register within the Transmit Buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TpmVal> tpm{}; 
        namespace TpmValC{
            constexpr Register::FieldValue<decltype(tpm)::Type,TpmVal::canIdTheTransmit> canIdTheTransmit{};
            constexpr Register::FieldValue<decltype(tpm)::Type,TpmVal::localPriorityThe> localPriorityThe{};
        }
        ///Sleep Mode.
        enum class SmVal {
            wakeUpNormalOper=0x00000000,     ///<Wake-up. Normal operation.
            sleepTheCanContr=0x00000001,     ///<Sleep. The CAN controller enters Sleep Mode if no CAN interrupt is pending and there is no bus activity. See the Sleep Mode description Section 21.8.2 on page 565.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SmVal> sm{}; 
        namespace SmValC{
            constexpr Register::FieldValue<decltype(sm)::Type,SmVal::wakeUpNormalOper> wakeUpNormalOper{};
            constexpr Register::FieldValue<decltype(sm)::Type,SmVal::sleepTheCanContr> sleepTheCanContr{};
        }
        ///Receive Polarity Mode.
        enum class RpmVal {
            lowActiveRdInput=0x00000000,     ///<Low active. RD input is active Low (dominant bit = 0).
            highActiveRdInpu=0x00000001,     ///<High active. RD input is active High (dominant bit = 1) -- reverse polarity.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RpmVal> rpm{}; 
        namespace RpmValC{
            constexpr Register::FieldValue<decltype(rpm)::Type,RpmVal::lowActiveRdInput> lowActiveRdInput{};
            constexpr Register::FieldValue<decltype(rpm)::Type,RpmVal::highActiveRdInpu> highActiveRdInpu{};
        }
        ///Test Mode.
        enum class TmVal {
            disabledNormalOpe=0x00000000,     ///<Disabled. Normal operation.
            enabledTheTdPin=0x00000001,     ///<Enabled. The TD pin will reflect the bit, detected on RD pin, with the next positive edge of the system clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TmVal> tm{}; 
        namespace TmValC{
            constexpr Register::FieldValue<decltype(tm)::Type,TmVal::disabledNormalOpe> disabledNormalOpe{};
            constexpr Register::FieldValue<decltype(tm)::Type,TmVal::enabledTheTdPin> enabledTheTdPin{};
        }
    }
    namespace Nonecmr{    ///<Command bits that affect the state of the CAN Controller
        using Addr = Register::Address<0x40044004,0xffffff00,0,unsigned>;
        ///Transmission Request.
        enum class TrVal {
            absentNoTransmissi=0x00000000,     ///<Absent.No transmission request.
            presentTheMessage=0x00000001,     ///<Present. The message, previously written to the CANxTFI, CANxTID, and optionally the CANxTDA and CANxTDB registers, is queued for transmission from the selected Transmit Buffer. If at two or all three of STB1, STB2 and STB3 bits are selected when TR=1 is written, Transmit Buffer will be selected based on the chosen priority scheme (for details see Section 21.5.3 Transmit Buffers (TXB))
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TrVal> tr{}; 
        namespace TrValC{
            constexpr Register::FieldValue<decltype(tr)::Type,TrVal::absentNoTransmissi> absentNoTransmissi{};
            constexpr Register::FieldValue<decltype(tr)::Type,TrVal::presentTheMessage> presentTheMessage{};
        }
        ///Abort Transmission.
        enum class AtVal {
            noActionDoNotAb=0x00000000,     ///<No action. Do not abort the transmission.
            presentIfNotAlre=0x00000001,     ///<Present. if not already in progress, a pending Transmission Request for the selected Transmit Buffer is cancelled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AtVal> at{}; 
        namespace AtValC{
            constexpr Register::FieldValue<decltype(at)::Type,AtVal::noActionDoNotAb> noActionDoNotAb{};
            constexpr Register::FieldValue<decltype(at)::Type,AtVal::presentIfNotAlre> presentIfNotAlre{};
        }
        ///Release Receive Buffer.
        enum class RrbVal {
            noActionDoNotRe=0x00000000,     ///<No action. Do not release the receive buffer.
            releasedTheInform=0x00000001,     ///<Released. The information in the Receive Buffer (consisting of CANxRFS, CANxRID, and if applicable the CANxRDA and CANxRDB registers) is released, and becomes eligible for replacement by the next received frame. If the next received frame is not available, writing this command clears the RBS bit in the Status Register(s).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RrbVal> rrb{}; 
        namespace RrbValC{
            constexpr Register::FieldValue<decltype(rrb)::Type,RrbVal::noActionDoNotRe> noActionDoNotRe{};
            constexpr Register::FieldValue<decltype(rrb)::Type,RrbVal::releasedTheInform> releasedTheInform{};
        }
        ///Clear Data Overrun.
        enum class CdoVal {
            noActionDoNotCl=0x00000000,     ///<No action. Do not clear the data overrun bit.
            clearTheDataOver=0x00000001,     ///<Clear. The Data Overrun bit in Status Register(s) is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CdoVal> cdo{}; 
        namespace CdoValC{
            constexpr Register::FieldValue<decltype(cdo)::Type,CdoVal::noActionDoNotCl> noActionDoNotCl{};
            constexpr Register::FieldValue<decltype(cdo)::Type,CdoVal::clearTheDataOver> clearTheDataOver{};
        }
        ///Self Reception Request.
        enum class SrrVal {
            absentNoSelfRece=0x00000000,     ///<Absent. No self reception request.
            presentTheMessage=0x00000001,     ///<Present. The message, previously written to the CANxTFS, CANxTID, and optionally the CANxTDA and CANxTDB registers, is queued for transmission from the selected Transmit Buffer and received simultaneously. This differs from the TR bit above in that the receiver is not disabled during the transmission, so that it receives the message if its Identifier is recognized by the Acceptance Filter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SrrVal> srr{}; 
        namespace SrrValC{
            constexpr Register::FieldValue<decltype(srr)::Type,SrrVal::absentNoSelfRece> absentNoSelfRece{};
            constexpr Register::FieldValue<decltype(srr)::Type,SrrVal::presentTheMessage> presentTheMessage{};
        }
        ///Select Tx Buffer 1.
        enum class Stb1Val {
            notSelectedTxBuf=0x00000000,     ///<Not selected. Tx Buffer 1 is not selected for transmission.
            selectedTxBuffer=0x00000001,     ///<Selected. Tx Buffer 1 is selected for transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Stb1Val> stb1{}; 
        namespace Stb1ValC{
            constexpr Register::FieldValue<decltype(stb1)::Type,Stb1Val::notSelectedTxBuf> notSelectedTxBuf{};
            constexpr Register::FieldValue<decltype(stb1)::Type,Stb1Val::selectedTxBuffer> selectedTxBuffer{};
        }
        ///Select Tx Buffer 2.
        enum class Stb2Val {
            notSelectedTxBuf=0x00000000,     ///<Not selected. Tx Buffer 2 is not selected for transmission.
            selectedTxBuffer=0x00000001,     ///<Selected. Tx Buffer 2 is selected for transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Stb2Val> stb2{}; 
        namespace Stb2ValC{
            constexpr Register::FieldValue<decltype(stb2)::Type,Stb2Val::notSelectedTxBuf> notSelectedTxBuf{};
            constexpr Register::FieldValue<decltype(stb2)::Type,Stb2Val::selectedTxBuffer> selectedTxBuffer{};
        }
        ///Select Tx Buffer 3.
        enum class Stb3Val {
            notSelectedTxBuf=0x00000000,     ///<Not selected. Tx Buffer 3 is not selected for transmission.
            selectedTxBuffer=0x00000001,     ///<Selected. Tx Buffer 3 is selected for transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Stb3Val> stb3{}; 
        namespace Stb3ValC{
            constexpr Register::FieldValue<decltype(stb3)::Type,Stb3Val::notSelectedTxBuf> notSelectedTxBuf{};
            constexpr Register::FieldValue<decltype(stb3)::Type,Stb3Val::selectedTxBuffer> selectedTxBuffer{};
        }
    }
    namespace Nonegsr{    ///<Global Controller Status and Error Counters. The error counters can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044008,0x0000ff00,0,unsigned>;
        ///Receive Buffer Status. After reading all messages and releasing their memory space with the command 'Release Receive Buffer,' this bit is cleared.
        enum class RbsVal {
            emptyNoMessageIs=0x00000000,     ///<Empty. No message is available.
            fullAtLeastOneC=0x00000001,     ///<Full. At least one complete message is received by the Double Receive Buffer and available in the CANxRFS, CANxRID, and if applicable the CANxRDA and CANxRDB registers. This bit is cleared by the Release Receive Buffer command in CANxCMR, if no subsequent received message is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RbsVal> rbs{}; 
        namespace RbsValC{
            constexpr Register::FieldValue<decltype(rbs)::Type,RbsVal::emptyNoMessageIs> emptyNoMessageIs{};
            constexpr Register::FieldValue<decltype(rbs)::Type,RbsVal::fullAtLeastOneC> fullAtLeastOneC{};
        }
        ///Data Overrun Status. If there is not enough space to store the message within the Receive Buffer, that message is dropped and the Data Overrun condition is signalled to the CPU in the moment this message becomes valid. If this message is not completed successfully (e.g. because of an error), no overrun condition is signalled.
        enum class DosVal {
            absentNoDataOver=0x00000000,     ///<Absent. No data overrun has occurred since the last Clear Data Overrun command was given/written to CANxCMR (or since Reset).
            overrunAMessageW=0x00000001,     ///<Overrun. A message was lost because the preceding message to this CAN controller was not read and released quickly enough (there was not enough space for a new message in the Double Receive Buffer).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DosVal> dos{}; 
        namespace DosValC{
            constexpr Register::FieldValue<decltype(dos)::Type,DosVal::absentNoDataOver> absentNoDataOver{};
            constexpr Register::FieldValue<decltype(dos)::Type,DosVal::overrunAMessageW> overrunAMessageW{};
        }
        ///Transmit Buffer Status.
        enum class TbsVal {
            lockedAtLeastOne=0x00000000,     ///<Locked. At least one of the Transmit Buffers is not available for the CPU, i.e. at least one previously queued message for this CAN controller has not yet been sent, and therefore software should not write to the CANxTFI, CANxTID, CANxTDA, nor CANxTDB registers of that (those) Tx buffer(s).
            releasedAllThree=0x00000001,     ///<Released. All three Transmit Buffers are available for the CPU. No transmit message is pending for this CAN controller (in any of the 3 Tx buffers), and software may write to any of the CANxTFI, CANxTID, CANxTDA, and CANxTDB registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TbsVal> tbs{}; 
        namespace TbsValC{
            constexpr Register::FieldValue<decltype(tbs)::Type,TbsVal::lockedAtLeastOne> lockedAtLeastOne{};
            constexpr Register::FieldValue<decltype(tbs)::Type,TbsVal::releasedAllThree> releasedAllThree{};
        }
        ///Transmit Complete Status. The Transmission Complete Status bit is set '0' (incomplete) whenever the Transmission Request bit or the Self Reception Request bit is set '1' at least for one of the three Transmit Buffers. The Transmission Complete Status bit will remain '0' until all messages are transmitted successfully.
        enum class TcsVal {
            incompleteAtLeast=0x00000000,     ///<Incomplete. At least one requested transmission has not been successfully completed yet.
            completeAllReques=0x00000001,     ///<Complete. All requested transmission(s) has (have) been successfully completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TcsVal> tcs{}; 
        namespace TcsValC{
            constexpr Register::FieldValue<decltype(tcs)::Type,TcsVal::incompleteAtLeast> incompleteAtLeast{};
            constexpr Register::FieldValue<decltype(tcs)::Type,TcsVal::completeAllReques> completeAllReques{};
        }
        ///Receive Status. If both the Receive Status and the Transmit Status bits are '0' (idle), the CAN-Bus is idle. If both bits are set, the controller is waiting to become idle again. After hardware reset 11 consecutive recessive bits have to be detected until idle status is reached. After Bus-off this will take 128 times of 11 consecutive recessive bits.
        enum class RsVal {
            idleTheCanContro=0x00000000,     ///<Idle. The CAN controller is idle.
            receiveTheCanCon=0x00000001,     ///<Receive. The CAN controller is receiving a message.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RsVal> rs{}; 
        namespace RsValC{
            constexpr Register::FieldValue<decltype(rs)::Type,RsVal::idleTheCanContro> idleTheCanContro{};
            constexpr Register::FieldValue<decltype(rs)::Type,RsVal::receiveTheCanCon> receiveTheCanCon{};
        }
        ///Transmit Status. If both the Receive Status and the Transmit Status bits are '0' (idle), the CAN-Bus is idle. If both bits are set, the controller is waiting to become idle again. After hardware reset 11 consecutive recessive bits have to be detected until idle status is reached. After Bus-off this will take 128 times of 11 consecutive recessive bits.
        enum class TsVal {
            idleTheCanContro=0x00000000,     ///<Idle. The CAN controller is idle.
            transmitTheCanCo=0x00000001,     ///<Transmit. The CAN controller is sending a message.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TsVal> ts{}; 
        namespace TsValC{
            constexpr Register::FieldValue<decltype(ts)::Type,TsVal::idleTheCanContro> idleTheCanContro{};
            constexpr Register::FieldValue<decltype(ts)::Type,TsVal::transmitTheCanCo> transmitTheCanCo{};
        }
        ///Error Status. Errors detected during reception or transmission will effect the error counters according to the CAN specification. The Error Status bit is set when at least one of the error counters has reached or exceeded the Error Warning Limit. An Error Warning Interrupt is generated, if enabled. The default value of the Error Warning Limit after hardware reset is 96 decimal, see also Section 21.7.7 CAN Error Warning Limit register (CAN1EWL - 0x4004 4018, CAN2EWL - 0x4004 8018).
        enum class EsVal {
            okBothErrorCount=0x00000000,     ///<OK. Both error counters are below the Error Warning Limit.
            errorOneOrBothO=0x00000001,     ///<Error. One or both of the Transmit and Receive Error Counters has reached the limit set in the Error Warning Limit register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EsVal> es{}; 
        namespace EsValC{
            constexpr Register::FieldValue<decltype(es)::Type,EsVal::okBothErrorCount> okBothErrorCount{};
            constexpr Register::FieldValue<decltype(es)::Type,EsVal::errorOneOrBothO> errorOneOrBothO{};
        }
        ///Bus Status. Mode bit '1' (present) and an Error Warning Interrupt is generated, if enabled. Afterwards the Transmit Error Counter is set to '127', and the Receive Error Counter is cleared. It will stay in this mode until the CPU clears the Reset Mode bit. Once this is completed the CAN Controller will wait the minimum protocol-defined time (128 occurrences of the Bus-Free signal) counting down the Transmit Error Counter. After that, the Bus Status bit is cleared (Bus-On), the Error Status bit is set '0' (ok), the Error Counters are reset, and an Error Warning Interrupt is generated, if enabled. Reading the TX Error Counter during this time gives information about the status of the Bus-Off recovery.
        enum class BsVal {
            busOnTheCanCont=0x00000000,     ///<Bus-on. The CAN Controller is involved in bus activities
            busOffTheCanCon=0x00000001,     ///<Bus-off. The CAN controller is currently not involved/prohibited from bus activity because the Transmit Error Counter reached its limiting value of 255.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BsVal> bs{}; 
        namespace BsValC{
            constexpr Register::FieldValue<decltype(bs)::Type,BsVal::busOnTheCanCont> busOnTheCanCont{};
            constexpr Register::FieldValue<decltype(bs)::Type,BsVal::busOffTheCanCon> busOffTheCanCon{};
        }
        ///The current value of the Rx Error Counter (an 8-bit value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxerr{}; 
        ///The current value of the Tx Error Counter (an 8-bit value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txerr{}; 
    }
    namespace Noneicr{    ///<Interrupt status, Arbitration Lost Capture, Error Code Capture
        using Addr = Register::Address<0x4004400c,0x0000f800,0,unsigned>;
        ///Receive Interrupt. This bit is set whenever the RBS bit in CANxSR and the RIE bit in CANxIER are both 1, indicating that a new message was received and stored in the Receive Buffer. The Receive Interrupt Bit is not cleared upon a read access to the Interrupt Register. Giving the Command Release Receive Buffer will clear RI temporarily. If there is another message available within the Receive Buffer after the release command, RI is set again. Otherwise RI remains cleared.
        enum class RiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RiVal> ri{}; 
        namespace RiValC{
            constexpr Register::FieldValue<decltype(ri)::Type,RiVal::reset> reset{};
            constexpr Register::FieldValue<decltype(ri)::Type,RiVal::set> set{};
        }
        ///Transmit Interrupt 1. This bit is set when the TBS1 bit in CANxSR goes from 0 to 1 (whenever a message out of TXB1 was successfully transmitted or aborted), indicating that Transmit buffer 1 is available, and the TIE1 bit in CANxIER is 1.
        enum class Ti1Val {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ti1Val> ti1{}; 
        namespace Ti1ValC{
            constexpr Register::FieldValue<decltype(ti1)::Type,Ti1Val::reset> reset{};
            constexpr Register::FieldValue<decltype(ti1)::Type,Ti1Val::set> set{};
        }
        ///Error Warning Interrupt. This bit is set on every change (set or clear) of either the Error Status or Bus Status bit in CANxSR and the EIE bit bit is set within the Interrupt Enable Register at the time of the change.
        enum class EiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EiVal> ei{}; 
        namespace EiValC{
            constexpr Register::FieldValue<decltype(ei)::Type,EiVal::reset> reset{};
            constexpr Register::FieldValue<decltype(ei)::Type,EiVal::set> set{};
        }
        ///Data Overrun Interrupt. This bit is set when the DOS bit in CANxSR goes from 0 to 1 and the DOIE bit in CANxIER is 1.
        enum class DoiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DoiVal> doi{}; 
        namespace DoiValC{
            constexpr Register::FieldValue<decltype(doi)::Type,DoiVal::reset> reset{};
            constexpr Register::FieldValue<decltype(doi)::Type,DoiVal::set> set{};
        }
        ///Wake-Up Interrupt. This bit is set if the CAN controller is sleeping and bus activity is detected and the WUIE bit in CANxIER is 1. A Wake-Up Interrupt is also generated if the CPU tries to set the Sleep bit while the CAN controller is involved in bus activities or a CAN Interrupt is pending. The WUI flag can also get asserted when the according enable bit WUIE is not set. In this case a Wake-Up Interrupt does not get asserted.
        enum class WuiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,WuiVal> wui{}; 
        namespace WuiValC{
            constexpr Register::FieldValue<decltype(wui)::Type,WuiVal::reset> reset{};
            constexpr Register::FieldValue<decltype(wui)::Type,WuiVal::set> set{};
        }
        ///Error Passive Interrupt. This bit is set if the EPIE bit in CANxIER is 1, and the CAN controller switches between Error Passive and Error Active mode in either direction. This is the case when the CAN Controller has reached the Error Passive Status (at least one error counter exceeds the CAN protocol defined level of 127) or if the CAN Controller is in Error Passive Status and enters the Error Active Status again.
        enum class EpiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EpiVal> epi{}; 
        namespace EpiValC{
            constexpr Register::FieldValue<decltype(epi)::Type,EpiVal::reset> reset{};
            constexpr Register::FieldValue<decltype(epi)::Type,EpiVal::set> set{};
        }
        ///Arbitration Lost Interrupt. This bit is set if the ALIE bit in CANxIER is 1, and the CAN controller loses arbitration while attempting to transmit. In this case the CAN node becomes a receiver.
        enum class AliVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AliVal> ali{}; 
        namespace AliValC{
            constexpr Register::FieldValue<decltype(ali)::Type,AliVal::reset> reset{};
            constexpr Register::FieldValue<decltype(ali)::Type,AliVal::set> set{};
        }
        ///Bus Error Interrupt -- this bit is set if the BEIE bit in CANxIER is 1, and the CAN controller detects an error on the bus.
        enum class BeiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BeiVal> bei{}; 
        namespace BeiValC{
            constexpr Register::FieldValue<decltype(bei)::Type,BeiVal::reset> reset{};
            constexpr Register::FieldValue<decltype(bei)::Type,BeiVal::set> set{};
        }
        ///ID Ready Interrupt -- this bit is set if the IDIE bit in CANxIER is 1, and a CAN Identifier has been received (a message was successfully transmitted or aborted). This bit is set whenever a message was successfully transmitted or aborted and the IDIE bit is set in the IER register.
        enum class IdiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,IdiVal> idi{}; 
        namespace IdiValC{
            constexpr Register::FieldValue<decltype(idi)::Type,IdiVal::reset> reset{};
            constexpr Register::FieldValue<decltype(idi)::Type,IdiVal::set> set{};
        }
        ///Transmit Interrupt 2. This bit is set when the TBS2 bit in CANxSR goes from 0 to 1 (whenever a message out of TXB2 was successfully transmitted or aborted), indicating that Transmit buffer 2 is available, and the TIE2 bit in CANxIER is 1.
        enum class Ti2Val {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ti2Val> ti2{}; 
        namespace Ti2ValC{
            constexpr Register::FieldValue<decltype(ti2)::Type,Ti2Val::reset> reset{};
            constexpr Register::FieldValue<decltype(ti2)::Type,Ti2Val::set> set{};
        }
        ///Transmit Interrupt 3. This bit is set when the TBS3 bit in CANxSR goes from 0 to 1 (whenever a message out of TXB3 was successfully transmitted or aborted), indicating that Transmit buffer 3 is available, and the TIE3 bit in CANxIER is 1.
        enum class Ti3Val {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ti3Val> ti3{}; 
        namespace Ti3ValC{
            constexpr Register::FieldValue<decltype(ti3)::Type,Ti3Val::reset> reset{};
            constexpr Register::FieldValue<decltype(ti3)::Type,Ti3Val::set> set{};
        }
        ///Error Code Capture: when the CAN controller detects a bus error, the location of the error within the frame is captured in this field. The value reflects an internal state variable, and as a result is not very linear: 00011 = Start of Frame 00010 = ID28 ... ID21 00110 = ID20 ... ID18 00100 = SRTR Bit 00101 = IDE bit 00111 = ID17 ... 13 01111 = ID12 ... ID5 01110 = ID4 ... ID0 01100 = RTR Bit 01101 = Reserved Bit 1 01001 = Reserved Bit 0 01011 = Data Length Code 01010 = Data Field 01000 = CRC Sequence 11000 = CRC Delimiter 11001 = Acknowledge Slot 11011 = Acknowledge Delimiter 11010 = End of Frame 10010 = Intermission Whenever a bus error occurs, the corresponding bus error interrupt is forced, if enabled. At the same time, the current position of the Bit Stream Processor is captured into the Error Code Capture Register. The content within this register is fixed until the user software has read out its content once. From now on, the capture mechanism is activated again, i.e. reading the CANxICR enables another Bus Error Interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> errbit40{}; 
        ///When the CAN controller detects a bus error, the direction of the current bit is captured in this bit.
        enum class ErrdirVal {
            errorOccurredDurin=0x00000000,     ///<Error occurred during transmitting.
            errorOccurredDurin=0x00000001,     ///<Error occurred during receiving.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ErrdirVal> errdir{}; 
        namespace ErrdirValC{
            constexpr Register::FieldValue<decltype(errdir)::Type,ErrdirVal::errorOccurredDurin> errorOccurredDurin{};
            constexpr Register::FieldValue<decltype(errdir)::Type,ErrdirVal::errorOccurredDurin> errorOccurredDurin{};
        }
        ///When the CAN controller detects a bus error, the type of error is captured in this field:
        enum class Errc10Val {
            bitError=0x00000000,     ///<Bit error
            formError=0x00000001,     ///<Form error
            stuffError=0x00000002,     ///<Stuff error
            otherError=0x00000003,     ///<Other error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Errc10Val> errc10{}; 
        namespace Errc10ValC{
            constexpr Register::FieldValue<decltype(errc10)::Type,Errc10Val::bitError> bitError{};
            constexpr Register::FieldValue<decltype(errc10)::Type,Errc10Val::formError> formError{};
            constexpr Register::FieldValue<decltype(errc10)::Type,Errc10Val::stuffError> stuffError{};
            constexpr Register::FieldValue<decltype(errc10)::Type,Errc10Val::otherError> otherError{};
        }
        ///Each time arbitration is lost while trying to send on the CAN, the bit number within the frame is captured into this field. After the content of ALCBIT is read, the ALI bit is cleared and a new Arbitration Lost interrupt can occur. 00 = arbitration lost in the first bit (MS) of identifier ... 11 = arbitration lost in SRTS bit (RTR bit for standard frame messages) 12 = arbitration lost in IDE bit 13 = arbitration lost in 12th bit of identifier (extended frame only) ... 30 = arbitration lost in last bit of identifier (extended frame only) 31 = arbitration lost in RTR bit (extended frame only) On arbitration lost, the corresponding arbitration lost interrupt is forced, if enabled. At that time, the current bit position of the Bit Stream Processor is captured into the Arbitration Lost Capture Register. The content within this register is fixed until the user application has read out its contents once. From now on, the capture mechanism is activated again.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> alcbit{}; 
    }
    namespace Noneier{    ///<Interrupt Enable
        using Addr = Register::Address<0x40044010,0xfffff800,0,unsigned>;
        ///Receiver Interrupt Enable. When the Receive Buffer Status is 'full', the CAN Controller requests the respective interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit Interrupt Enable for Buffer1. When a message has been successfully transmitted out of TXB1 or Transmit Buffer 1 is accessible again (e.g. after an Abort Transmission command), the CAN Controller requests the respective interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tie1{}; 
        ///Error Warning Interrupt Enable. If the Error or Bus Status change (see Status Register), the CAN Controller requests the respective interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eie{}; 
        ///Data Overrun Interrupt Enable. If the Data Overrun Status bit is set (see Status Register), the CAN Controller requests the respective interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> doie{}; 
        ///Wake-Up Interrupt Enable. If the sleeping CAN controller wakes up, the respective interrupt is requested.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wuie{}; 
        ///Error Passive Interrupt Enable. If the error status of the CAN Controller changes from error active to error passive or vice versa, the respective interrupt is requested.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epie{}; 
        ///Arbitration Lost Interrupt Enable. If the CAN Controller has lost arbitration, the respective interrupt is requested.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> alie{}; 
        ///Bus Error Interrupt Enable. If a bus error has been detected, the CAN Controller requests the respective interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> beie{}; 
        ///ID Ready Interrupt Enable. When a CAN identifier has been received, the CAN Controller requests the respective interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> idie{}; 
        ///Transmit Interrupt Enable for Buffer2. When a message has been successfully transmitted out of TXB2 or Transmit Buffer 2 is accessible again (e.g. after an Abort Transmission command), the CAN Controller requests the respective interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tie2{}; 
        ///Transmit Interrupt Enable for Buffer3. When a message has been successfully transmitted out of TXB3 or Transmit Buffer 3 is accessible again (e.g. after an Abort Transmission command), the CAN Controller requests the respective interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tie3{}; 
    }
    namespace Nonebtr{    ///<Bus Timing. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044014,0xff003c00,0,unsigned>;
        ///Baud Rate Prescaler. The APB clock is divided by (this value plus one) to produce the CAN clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> brp{}; 
        ///The Synchronization Jump Width is (this value plus one) CAN clocks.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sjw{}; 
        ///The delay from the nominal Sync point to the sample point is (this value plus one) CAN clocks.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tesg1{}; 
        ///The delay from the sample point to the next nominal sync point is (this value plus one) CAN clocks. The nominal CAN bit time is (this value plus the value in TSEG1 plus 3) CAN clocks.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> tesg2{}; 
        ///Sampling
        enum class SamVal {
            theBusIsSampledO=0x00000000,     ///<The bus is sampled once (recommended for high speed buses)
            theBusIsSampled3=0x00000001,     ///<The bus is sampled 3 times (recommended for low to medium speed buses to filter spikes on the bus-line)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SamVal> sam{}; 
        namespace SamValC{
            constexpr Register::FieldValue<decltype(sam)::Type,SamVal::theBusIsSampledO> theBusIsSampledO{};
            constexpr Register::FieldValue<decltype(sam)::Type,SamVal::theBusIsSampled3> theBusIsSampled3{};
        }
    }
    namespace Noneewl{    ///<Error Warning Limit. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044018,0xffffff00,0,unsigned>;
        ///During CAN operation, this value is compared to both the Tx and Rx Error Counters. If either of these counter matches this value, the Error Status (ES) bit in CANSR is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ewl{}; 
    }
    namespace Nonesr{    ///<Status Register
        using Addr = Register::Address<0x4004401c,0xff000000,0,unsigned>;
        ///Receive Buffer Status. This bit is identical to the RBS bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rbs1{}; 
        ///Data Overrun Status. This bit is identical to the DOS bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dos1{}; 
        ///Transmit Buffer Status 1.
        enum class Tbs11Val {
            lockedSoftwareCan=0x00000000,     ///<Locked. Software cannot access the Tx Buffer 1 nor write to the corresponding CANxTFI, CANxTID, CANxTDA, and CANxTDB registers because a message is either waiting for transmission or is in transmitting process.
            releasedSoftwareM=0x00000001,     ///<Released. Software may write a message into the Transmit Buffer 1 and its CANxTFI, CANxTID, CANxTDA, and CANxTDB registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Tbs11Val> tbs11{}; 
        namespace Tbs11ValC{
            constexpr Register::FieldValue<decltype(tbs11)::Type,Tbs11Val::lockedSoftwareCan> lockedSoftwareCan{};
            constexpr Register::FieldValue<decltype(tbs11)::Type,Tbs11Val::releasedSoftwareM> releasedSoftwareM{};
        }
        ///Transmission Complete Status.
        enum class Tcs11Val {
            incompleteThePrev=0x00000000,     ///<Incomplete. The previously requested transmission for Tx Buffer 1 is not complete.
            completeThePrevio=0x00000001,     ///<Complete. The previously requested transmission for Tx Buffer 1 has been successfully completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Tcs11Val> tcs11{}; 
        namespace Tcs11ValC{
            constexpr Register::FieldValue<decltype(tcs11)::Type,Tcs11Val::incompleteThePrev> incompleteThePrev{};
            constexpr Register::FieldValue<decltype(tcs11)::Type,Tcs11Val::completeThePrevio> completeThePrevio{};
        }
        ///Receive Status. This bit is identical to the RS bit in the GSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rs1{}; 
        ///Transmit Status 1.
        enum class Ts11Val {
            idleThereIsNoTr=0x00000000,     ///<Idle. There is no transmission from Tx Buffer 1.
            transmitTheCanCo=0x00000001,     ///<Transmit. The CAN Controller is transmitting a message from Tx Buffer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ts11Val> ts11{}; 
        namespace Ts11ValC{
            constexpr Register::FieldValue<decltype(ts11)::Type,Ts11Val::idleThereIsNoTr> idleThereIsNoTr{};
            constexpr Register::FieldValue<decltype(ts11)::Type,Ts11Val::transmitTheCanCo> transmitTheCanCo{};
        }
        ///Error Status. This bit is identical to the ES bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> es1{}; 
        ///Bus Status. This bit is identical to the BS bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bs1{}; 
        ///Receive Buffer Status. This bit is identical to the RBS bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rbs2{}; 
        ///Data Overrun Status. This bit is identical to the DOS bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dos2{}; 
        ///Transmit Buffer Status 2.
        enum class Tbs22Val {
            lockedSoftwareCan=0x00000000,     ///<Locked. Software cannot access the Tx Buffer 2 nor write to the corresponding CANxTFI, CANxTID, CANxTDA, and CANxTDB registers because a message is either waiting for transmission or is in transmitting process.
            releasedSoftwareM=0x00000001,     ///<Released. Software may write a message into the Transmit Buffer 2 and its CANxTFI, CANxTID, CANxTDA, and CANxTDB registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Tbs22Val> tbs22{}; 
        namespace Tbs22ValC{
            constexpr Register::FieldValue<decltype(tbs22)::Type,Tbs22Val::lockedSoftwareCan> lockedSoftwareCan{};
            constexpr Register::FieldValue<decltype(tbs22)::Type,Tbs22Val::releasedSoftwareM> releasedSoftwareM{};
        }
        ///Transmission Complete Status.
        enum class Tcs22Val {
            incompleteThePrev=0x00000000,     ///<Incomplete. The previously requested transmission for Tx Buffer 2 is not complete.
            completeThePrevio=0x00000001,     ///<Complete. The previously requested transmission for Tx Buffer 2 has been successfully completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Tcs22Val> tcs22{}; 
        namespace Tcs22ValC{
            constexpr Register::FieldValue<decltype(tcs22)::Type,Tcs22Val::incompleteThePrev> incompleteThePrev{};
            constexpr Register::FieldValue<decltype(tcs22)::Type,Tcs22Val::completeThePrevio> completeThePrevio{};
        }
        ///Receive Status. This bit is identical to the RS bit in the GSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rs2{}; 
        ///Transmit Status 2.
        enum class Ts22Val {
            idleThereIsNoTr=0x00000000,     ///<Idle. There is no transmission from Tx Buffer 2.
            transmitTheCanCo=0x00000001,     ///<Transmit. The CAN Controller is transmitting a message from Tx Buffer 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ts22Val> ts22{}; 
        namespace Ts22ValC{
            constexpr Register::FieldValue<decltype(ts22)::Type,Ts22Val::idleThereIsNoTr> idleThereIsNoTr{};
            constexpr Register::FieldValue<decltype(ts22)::Type,Ts22Val::transmitTheCanCo> transmitTheCanCo{};
        }
        ///Error Status. This bit is identical to the ES bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> es2{}; 
        ///Bus Status. This bit is identical to the BS bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bs2{}; 
        ///Receive Buffer Status. This bit is identical to the RBS bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rbs3{}; 
        ///Data Overrun Status. This bit is identical to the DOS bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dos3{}; 
        ///Transmit Buffer Status 3.
        enum class Tbs33Val {
            lockedSoftwareCan=0x00000000,     ///<Locked. Software cannot access the Tx Buffer 3 nor write to the corresponding CANxTFI, CANxTID, CANxTDA, and CANxTDB registers because a message is either waiting for transmission or is in transmitting process.
            releasedSoftwareM=0x00000001,     ///<Released. Software may write a message into the Transmit Buffer 3 and its CANxTFI, CANxTID, CANxTDA, and CANxTDB registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Tbs33Val> tbs33{}; 
        namespace Tbs33ValC{
            constexpr Register::FieldValue<decltype(tbs33)::Type,Tbs33Val::lockedSoftwareCan> lockedSoftwareCan{};
            constexpr Register::FieldValue<decltype(tbs33)::Type,Tbs33Val::releasedSoftwareM> releasedSoftwareM{};
        }
        ///Transmission Complete Status.
        enum class Tcs33Val {
            incompleteThePrev=0x00000000,     ///<Incomplete. The previously requested transmission for Tx Buffer 3 is not complete.
            completeThePrevio=0x00000001,     ///<Complete. The previously requested transmission for Tx Buffer 3 has been successfully completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Tcs33Val> tcs33{}; 
        namespace Tcs33ValC{
            constexpr Register::FieldValue<decltype(tcs33)::Type,Tcs33Val::incompleteThePrev> incompleteThePrev{};
            constexpr Register::FieldValue<decltype(tcs33)::Type,Tcs33Val::completeThePrevio> completeThePrevio{};
        }
        ///Receive Status. This bit is identical to the RS bit in the GSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rs3{}; 
        ///Transmit Status 3.
        enum class Ts33Val {
            idleThereIsNoTr=0x00000000,     ///<Idle. There is no transmission from Tx Buffer 3.
            transmitTheCanCo=0x00000001,     ///<Transmit. The CAN Controller is transmitting a message from Tx Buffer 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ts33Val> ts33{}; 
        namespace Ts33ValC{
            constexpr Register::FieldValue<decltype(ts33)::Type,Ts33Val::idleThereIsNoTr> idleThereIsNoTr{};
            constexpr Register::FieldValue<decltype(ts33)::Type,Ts33Val::transmitTheCanCo> transmitTheCanCo{};
        }
        ///Error Status. This bit is identical to the ES bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> es3{}; 
        ///Bus Status. This bit is identical to the BS bit in the CANxGSR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> bs3{}; 
    }
    namespace Nonerfs{    ///<Receive frame status. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044020,0x3ff0f800,0,unsigned>;
        ///ID Index. If the BP bit (below) is 0, this value is the zero-based number of the Lookup Table RAM entry at which the Acceptance Filter matched the received Identifier. Disabled entries in the Standard tables are included in this numbering, but will not be matched. See Section 21.17 Examples of acceptance filter tables and ID index values on page 587 for examples of ID Index values.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> idindex{}; 
        ///If this bit is 1, the current message was received in AF Bypass mode, and the ID Index field (above) is meaningless.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bp{}; 
        ///The field contains the Data Length Code (DLC) field of the current received message. When RTR = 0, this is related to the number of data bytes available in the CANRDA and CANRDB registers as follows: 0000-0111 = 0 to 7 bytes1000-1111 = 8 bytes With RTR = 1, this value indicates the number of data bytes requested to be sent back, with the same encoding.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///This bit contains the Remote Transmission Request bit of the current received message. 0 indicates a Data Frame, in which (if DLC is non-zero) data can be read from the CANRDA and possibly the CANRDB registers. 1 indicates a Remote frame, in which case the DLC value identifies the number of data bytes requested to be sent using the same Identifier.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///A 0 in this bit indicates that the current received message included an 11-bit Identifier, while a 1 indicates a 29-bit Identifier. This affects the contents of the CANid register described below.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ff{}; 
    }
    namespace Nonerid{    ///<Received Identifier. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044024,0xfffff800,0,unsigned>;
        ///The 11-bit Identifier field of the current received message. In CAN 2.0A, these bits are called ID10-0, while in CAN 2.0B they're called ID29-18.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace Nonerda{    ///<Received data bytes 1-4. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044028,0x00000000,0,unsigned>;
        ///Data 1. If the DLC field in CANRFS >= 0001, this contains the first Data byte of the current received message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Data 2. If the DLC field in CANRFS >= 0010, this contains the first Data byte of the current received message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data 3. If the DLC field in CANRFS >= 0011, this contains the first Data byte of the current received message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Data 4. If the DLC field in CANRFS >= 0100, this contains the first Data byte of the current received message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace Nonerdb{    ///<Received data bytes 5-8. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x4004402c,0x00000000,0,unsigned>;
        ///Data 5. If the DLC field in CANRFS >= 0101, this contains the first Data byte of the current received message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Data 6. If the DLC field in CANRFS >= 0110, this contains the first Data byte of the current received message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data 7. If the DLC field in CANRFS >= 0111, this contains the first Data byte of the current received message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Data 8. If the DLC field in CANRFS >= 1000, this contains the first Data byte of the current received message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data8{}; 
    }
    namespace Nonetfi1{    ///<Transmit
frame info (Tx Buffer )
        using Addr = Register::Address<0x40044030,0x3ff0ff00,0,unsigned>;
        ///If the TPM (Transmit Priority Mode) bit in the CANxMOD register is set to 1, enabled Tx Buffers contend for the right to send their messages based on this field. The buffer with the lowest TX Priority value wins the prioritization and is sent first.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prio{}; 
        ///Data Length Code. This value is sent in the DLC field of the next transmit message. In addition, if RTR = 0, this value controls the number of Data bytes sent in the next transmit message, from the CANxTDA and CANxTDB registers: 0000-0111 = 0-7 bytes 1xxx = 8 bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///This value is sent in the RTR bit of the next transmit message. If this bit is 0, the number of data bytes called out by the DLC field are sent from the CANxTDA and CANxTDB registers. If this bit is 1, a Remote Frame is sent, containing a request for that number of bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///If this bit is 0, the next transmit message will be sent with an 11-bit Identifier (standard frame format), while if it's 1, the message will be sent with a 29-bit Identifier (extended frame format).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ff{}; 
    }
    namespace Nonetfi2{    ///<Transmit
frame info (Tx Buffer )
        using Addr = Register::Address<0x40044040,0x3ff0ff00,0,unsigned>;
        ///If the TPM (Transmit Priority Mode) bit in the CANxMOD register is set to 1, enabled Tx Buffers contend for the right to send their messages based on this field. The buffer with the lowest TX Priority value wins the prioritization and is sent first.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prio{}; 
        ///Data Length Code. This value is sent in the DLC field of the next transmit message. In addition, if RTR = 0, this value controls the number of Data bytes sent in the next transmit message, from the CANxTDA and CANxTDB registers: 0000-0111 = 0-7 bytes 1xxx = 8 bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///This value is sent in the RTR bit of the next transmit message. If this bit is 0, the number of data bytes called out by the DLC field are sent from the CANxTDA and CANxTDB registers. If this bit is 1, a Remote Frame is sent, containing a request for that number of bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///If this bit is 0, the next transmit message will be sent with an 11-bit Identifier (standard frame format), while if it's 1, the message will be sent with a 29-bit Identifier (extended frame format).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ff{}; 
    }
    namespace Nonetfi3{    ///<Transmit
frame info (Tx Buffer )
        using Addr = Register::Address<0x40044050,0x3ff0ff00,0,unsigned>;
        ///If the TPM (Transmit Priority Mode) bit in the CANxMOD register is set to 1, enabled Tx Buffers contend for the right to send their messages based on this field. The buffer with the lowest TX Priority value wins the prioritization and is sent first.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prio{}; 
        ///Data Length Code. This value is sent in the DLC field of the next transmit message. In addition, if RTR = 0, this value controls the number of Data bytes sent in the next transmit message, from the CANxTDA and CANxTDB registers: 0000-0111 = 0-7 bytes 1xxx = 8 bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///This value is sent in the RTR bit of the next transmit message. If this bit is 0, the number of data bytes called out by the DLC field are sent from the CANxTDA and CANxTDB registers. If this bit is 1, a Remote Frame is sent, containing a request for that number of bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///If this bit is 0, the next transmit message will be sent with an 11-bit Identifier (standard frame format), while if it's 1, the message will be sent with a 29-bit Identifier (extended frame format).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ff{}; 
    }
    namespace Nonetid1{    ///<Transmit
Identifier (Tx Buffer)
        using Addr = Register::Address<0x40044034,0xfffff800,0,unsigned>;
        ///The 11-bit Identifier to be sent in the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace Nonetid2{    ///<Transmit
Identifier (Tx Buffer)
        using Addr = Register::Address<0x40044044,0xfffff800,0,unsigned>;
        ///The 11-bit Identifier to be sent in the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace Nonetid3{    ///<Transmit
Identifier (Tx Buffer)
        using Addr = Register::Address<0x40044054,0xfffff800,0,unsigned>;
        ///The 11-bit Identifier to be sent in the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace Nonetda1{    ///<Transmit
data bytes 1-4 (Tx Buffer)
        using Addr = Register::Address<0x40044038,0x00000000,0,unsigned>;
        ///Data 1. If RTR = 0 and DLC >= 0001 in the corresponding CANxTFI, this byte is sent as the first Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Data 2. If RTR = 0 and DLC >= 0010 in the corresponding CANxTFI, this byte is sent as the 2nd Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data 3. If RTR = 0 and DLC >= 0011 in the corresponding CANxTFI, this byte is sent as the 3rd Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Data 4. If RTR = 0 and DLC >= 0100 in the corresponding CANxTFI, this byte is sent as the 4th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace Nonetda2{    ///<Transmit
data bytes 1-4 (Tx Buffer)
        using Addr = Register::Address<0x40044048,0x00000000,0,unsigned>;
        ///Data 1. If RTR = 0 and DLC >= 0001 in the corresponding CANxTFI, this byte is sent as the first Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Data 2. If RTR = 0 and DLC >= 0010 in the corresponding CANxTFI, this byte is sent as the 2nd Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data 3. If RTR = 0 and DLC >= 0011 in the corresponding CANxTFI, this byte is sent as the 3rd Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Data 4. If RTR = 0 and DLC >= 0100 in the corresponding CANxTFI, this byte is sent as the 4th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace Nonetda3{    ///<Transmit
data bytes 1-4 (Tx Buffer)
        using Addr = Register::Address<0x40044058,0x00000000,0,unsigned>;
        ///Data 1. If RTR = 0 and DLC >= 0001 in the corresponding CANxTFI, this byte is sent as the first Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Data 2. If RTR = 0 and DLC >= 0010 in the corresponding CANxTFI, this byte is sent as the 2nd Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data 3. If RTR = 0 and DLC >= 0011 in the corresponding CANxTFI, this byte is sent as the 3rd Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Data 4. If RTR = 0 and DLC >= 0100 in the corresponding CANxTFI, this byte is sent as the 4th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace Nonetdb1{    ///<Transmit
data bytes 5-8 (Tx Buffer )
        using Addr = Register::Address<0x4004403c,0x00000000,0,unsigned>;
        ///Data 5. If RTR = 0 and DLC >= 0101 in the corresponding CANTFI, this byte is sent as the 5th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Data 6. If RTR = 0 and DLC >= 0110 in the corresponding CANTFI, this byte is sent as the 6th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data 7. If RTR = 0 and DLC >= 0111 in the corresponding CANTFI, this byte is sent as the 7th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Data 8. If RTR = 0 and DLC >= 1000 in the corresponding CANTFI, this byte is sent as the 8th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data8{}; 
    }
    namespace Nonetdb2{    ///<Transmit
data bytes 5-8 (Tx Buffer )
        using Addr = Register::Address<0x4004404c,0x00000000,0,unsigned>;
        ///Data 5. If RTR = 0 and DLC >= 0101 in the corresponding CANTFI, this byte is sent as the 5th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Data 6. If RTR = 0 and DLC >= 0110 in the corresponding CANTFI, this byte is sent as the 6th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data 7. If RTR = 0 and DLC >= 0111 in the corresponding CANTFI, this byte is sent as the 7th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Data 8. If RTR = 0 and DLC >= 1000 in the corresponding CANTFI, this byte is sent as the 8th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data8{}; 
    }
    namespace Nonetdb3{    ///<Transmit
data bytes 5-8 (Tx Buffer )
        using Addr = Register::Address<0x4004405c,0x00000000,0,unsigned>;
        ///Data 5. If RTR = 0 and DLC >= 0101 in the corresponding CANTFI, this byte is sent as the 5th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Data 6. If RTR = 0 and DLC >= 0110 in the corresponding CANTFI, this byte is sent as the 6th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data 7. If RTR = 0 and DLC >= 0111 in the corresponding CANTFI, this byte is sent as the 7th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Data 8. If RTR = 0 and DLC >= 1000 in the corresponding CANTFI, this byte is sent as the 8th Data byte of the next transmit message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data8{}; 
    }
}
