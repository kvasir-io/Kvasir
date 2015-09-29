#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CAN1 controller 
    namespace Nonemod{    ///<Controls the operating mode of the CAN Controller.
        using Addr = Register::Address<0x40044000,0xffffff40,0,unsigned>;
        ///Reset Mode.
        enum class rmVal {
            normalTheCanContr=0x00000000,     ///<Normal.The CAN Controller is in the Operating Mode, and certain registers can not be written.
            resetCanOperation=0x00000001,     ///<Reset. CAN operation is disabled, writable registers can be written and the current transmission/reception of a message is aborted.
        };
        namespace rmValC{
            constexpr MPL::Value<rmVal,rmVal::normalTheCanContr> normalTheCanContr{};
            constexpr MPL::Value<rmVal,rmVal::resetCanOperation> resetCanOperation{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rmVal> rm{}; 
        ///Listen Only Mode.
        enum class lomVal {
            normalTheCanCont=0x00000000,     ///<Normal. The CAN controller acknowledges a successfully received message on the CAN bus. The error counters are stopped at the current value.
            listenOnlyTheCon=0x00000001,     ///<Listen only. The controller gives no acknowledgment, even if a message is successfully received. Messages cannot be sent, and the controller operates in error passive mode. This mode is intended for software bit rate detection and hot plugging.
        };
        namespace lomValC{
            constexpr MPL::Value<lomVal,lomVal::normalTheCanCont> normalTheCanCont{};
            constexpr MPL::Value<lomVal,lomVal::listenOnlyTheCon> listenOnlyTheCon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lomVal> lom{}; 
        ///Self Test Mode.
        enum class stmVal {
            normalATransmitte=0x00000000,     ///<Normal. A transmitted message must be acknowledged to be considered successful.
            selfTestTheContr=0x00000001,     ///<Self test. The controller will consider a Tx message successful even if there is no acknowledgment received. In this mode a full node test is possible without any other active node on the bus using the SRR bit in CANxCMR.
        };
        namespace stmValC{
            constexpr MPL::Value<stmVal,stmVal::normalATransmitte> normalATransmitte{};
            constexpr MPL::Value<stmVal,stmVal::selfTestTheContr> selfTestTheContr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,stmVal> stm{}; 
        ///Transmit Priority Mode.
        enum class tpmVal {
            canIdTheTransmit=0x00000000,     ///<CAN ID. The transmit priority for 3 Transmit Buffers depends on the CAN Identifier.
            localPriorityThe=0x00000001,     ///<Local priority. The transmit priority for 3 Transmit Buffers depends on the contents of the Tx Priority register within the Transmit Buffer.
        };
        namespace tpmValC{
            constexpr MPL::Value<tpmVal,tpmVal::canIdTheTransmit> canIdTheTransmit{};
            constexpr MPL::Value<tpmVal,tpmVal::localPriorityThe> localPriorityThe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tpmVal> tpm{}; 
        ///Sleep Mode.
        enum class smVal {
            wakeUpNormalOper=0x00000000,     ///<Wake-up. Normal operation.
            sleepTheCanContr=0x00000001,     ///<Sleep. The CAN controller enters Sleep Mode if no CAN interrupt is pending and there is no bus activity. See the Sleep Mode description Section 21.8.2 on page 565.
        };
        namespace smValC{
            constexpr MPL::Value<smVal,smVal::wakeUpNormalOper> wakeUpNormalOper{};
            constexpr MPL::Value<smVal,smVal::sleepTheCanContr> sleepTheCanContr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,smVal> sm{}; 
        ///Receive Polarity Mode.
        enum class rpmVal {
            lowActiveRdInput=0x00000000,     ///<Low active. RD input is active Low (dominant bit = 0).
            highActiveRdInpu=0x00000001,     ///<High active. RD input is active High (dominant bit = 1) -- reverse polarity.
        };
        namespace rpmValC{
            constexpr MPL::Value<rpmVal,rpmVal::lowActiveRdInput> lowActiveRdInput{};
            constexpr MPL::Value<rpmVal,rpmVal::highActiveRdInpu> highActiveRdInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rpmVal> rpm{}; 
        ///Test Mode.
        enum class tmVal {
            disabledNormalOpe=0x00000000,     ///<Disabled. Normal operation.
            enabledTheTdPin=0x00000001,     ///<Enabled. The TD pin will reflect the bit, detected on RD pin, with the next positive edge of the system clock.
        };
        namespace tmValC{
            constexpr MPL::Value<tmVal,tmVal::disabledNormalOpe> disabledNormalOpe{};
            constexpr MPL::Value<tmVal,tmVal::enabledTheTdPin> enabledTheTdPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tmVal> tm{}; 
    }
    namespace Nonecmr{    ///<Command bits that affect the state of the CAN Controller
        using Addr = Register::Address<0x40044004,0xffffff00,0,unsigned>;
        ///Transmission Request.
        enum class trVal {
            absentNoTransmissi=0x00000000,     ///<Absent.No transmission request.
            presentTheMessage=0x00000001,     ///<Present. The message, previously written to the CANxTFI, CANxTID, and optionally the CANxTDA and CANxTDB registers, is queued for transmission from the selected Transmit Buffer. If at two or all three of STB1, STB2 and STB3 bits are selected when TR=1 is written, Transmit Buffer will be selected based on the chosen priority scheme (for details see Section 21.5.3 Transmit Buffers (TXB))
        };
        namespace trValC{
            constexpr MPL::Value<trVal,trVal::absentNoTransmissi> absentNoTransmissi{};
            constexpr MPL::Value<trVal,trVal::presentTheMessage> presentTheMessage{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,trVal> tr{}; 
        ///Abort Transmission.
        enum class atVal {
            noActionDoNotAb=0x00000000,     ///<No action. Do not abort the transmission.
            presentIfNotAlre=0x00000001,     ///<Present. if not already in progress, a pending Transmission Request for the selected Transmit Buffer is cancelled.
        };
        namespace atValC{
            constexpr MPL::Value<atVal,atVal::noActionDoNotAb> noActionDoNotAb{};
            constexpr MPL::Value<atVal,atVal::presentIfNotAlre> presentIfNotAlre{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,atVal> at{}; 
        ///Release Receive Buffer.
        enum class rrbVal {
            noActionDoNotRe=0x00000000,     ///<No action. Do not release the receive buffer.
            releasedTheInform=0x00000001,     ///<Released. The information in the Receive Buffer (consisting of CANxRFS, CANxRID, and if applicable the CANxRDA and CANxRDB registers) is released, and becomes eligible for replacement by the next received frame. If the next received frame is not available, writing this command clears the RBS bit in the Status Register(s).
        };
        namespace rrbValC{
            constexpr MPL::Value<rrbVal,rrbVal::noActionDoNotRe> noActionDoNotRe{};
            constexpr MPL::Value<rrbVal,rrbVal::releasedTheInform> releasedTheInform{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rrbVal> rrb{}; 
        ///Clear Data Overrun.
        enum class cdoVal {
            noActionDoNotCl=0x00000000,     ///<No action. Do not clear the data overrun bit.
            clearTheDataOver=0x00000001,     ///<Clear. The Data Overrun bit in Status Register(s) is cleared.
        };
        namespace cdoValC{
            constexpr MPL::Value<cdoVal,cdoVal::noActionDoNotCl> noActionDoNotCl{};
            constexpr MPL::Value<cdoVal,cdoVal::clearTheDataOver> clearTheDataOver{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cdoVal> cdo{}; 
        ///Self Reception Request.
        enum class srrVal {
            absentNoSelfRece=0x00000000,     ///<Absent. No self reception request.
            presentTheMessage=0x00000001,     ///<Present. The message, previously written to the CANxTFS, CANxTID, and optionally the CANxTDA and CANxTDB registers, is queued for transmission from the selected Transmit Buffer and received simultaneously. This differs from the TR bit above in that the receiver is not disabled during the transmission, so that it receives the message if its Identifier is recognized by the Acceptance Filter.
        };
        namespace srrValC{
            constexpr MPL::Value<srrVal,srrVal::absentNoSelfRece> absentNoSelfRece{};
            constexpr MPL::Value<srrVal,srrVal::presentTheMessage> presentTheMessage{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,srrVal> srr{}; 
        ///Select Tx Buffer 1.
        enum class stb1Val {
            notSelectedTxBuf=0x00000000,     ///<Not selected. Tx Buffer 1 is not selected for transmission.
            selectedTxBuffer=0x00000001,     ///<Selected. Tx Buffer 1 is selected for transmission.
        };
        namespace stb1ValC{
            constexpr MPL::Value<stb1Val,stb1Val::notSelectedTxBuf> notSelectedTxBuf{};
            constexpr MPL::Value<stb1Val,stb1Val::selectedTxBuffer> selectedTxBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,stb1Val> stb1{}; 
        ///Select Tx Buffer 2.
        enum class stb2Val {
            notSelectedTxBuf=0x00000000,     ///<Not selected. Tx Buffer 2 is not selected for transmission.
            selectedTxBuffer=0x00000001,     ///<Selected. Tx Buffer 2 is selected for transmission.
        };
        namespace stb2ValC{
            constexpr MPL::Value<stb2Val,stb2Val::notSelectedTxBuf> notSelectedTxBuf{};
            constexpr MPL::Value<stb2Val,stb2Val::selectedTxBuffer> selectedTxBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,stb2Val> stb2{}; 
        ///Select Tx Buffer 3.
        enum class stb3Val {
            notSelectedTxBuf=0x00000000,     ///<Not selected. Tx Buffer 3 is not selected for transmission.
            selectedTxBuffer=0x00000001,     ///<Selected. Tx Buffer 3 is selected for transmission.
        };
        namespace stb3ValC{
            constexpr MPL::Value<stb3Val,stb3Val::notSelectedTxBuf> notSelectedTxBuf{};
            constexpr MPL::Value<stb3Val,stb3Val::selectedTxBuffer> selectedTxBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,stb3Val> stb3{}; 
    }
    namespace Nonegsr{    ///<Global Controller Status and Error Counters. The error counters can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044008,0x0000ff00,0,unsigned>;
        ///Receive Buffer Status. After reading all messages and releasing their memory space with the command 'Release Receive Buffer,' this bit is cleared.
        enum class rbsVal {
            emptyNoMessageIs=0x00000000,     ///<Empty. No message is available.
            fullAtLeastOneC=0x00000001,     ///<Full. At least one complete message is received by the Double Receive Buffer and available in the CANxRFS, CANxRID, and if applicable the CANxRDA and CANxRDB registers. This bit is cleared by the Release Receive Buffer command in CANxCMR, if no subsequent received message is available.
        };
        namespace rbsValC{
            constexpr MPL::Value<rbsVal,rbsVal::emptyNoMessageIs> emptyNoMessageIs{};
            constexpr MPL::Value<rbsVal,rbsVal::fullAtLeastOneC> fullAtLeastOneC{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rbsVal> rbs{}; 
        ///Data Overrun Status. If there is not enough space to store the message within the Receive Buffer, that message is dropped and the Data Overrun condition is signalled to the CPU in the moment this message becomes valid. If this message is not completed successfully (e.g. because of an error), no overrun condition is signalled.
        enum class dosVal {
            absentNoDataOver=0x00000000,     ///<Absent. No data overrun has occurred since the last Clear Data Overrun command was given/written to CANxCMR (or since Reset).
            overrunAMessageW=0x00000001,     ///<Overrun. A message was lost because the preceding message to this CAN controller was not read and released quickly enough (there was not enough space for a new message in the Double Receive Buffer).
        };
        namespace dosValC{
            constexpr MPL::Value<dosVal,dosVal::absentNoDataOver> absentNoDataOver{};
            constexpr MPL::Value<dosVal,dosVal::overrunAMessageW> overrunAMessageW{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dosVal> dos{}; 
        ///Transmit Buffer Status.
        enum class tbsVal {
            lockedAtLeastOne=0x00000000,     ///<Locked. At least one of the Transmit Buffers is not available for the CPU, i.e. at least one previously queued message for this CAN controller has not yet been sent, and therefore software should not write to the CANxTFI, CANxTID, CANxTDA, nor CANxTDB registers of that (those) Tx buffer(s).
            releasedAllThree=0x00000001,     ///<Released. All three Transmit Buffers are available for the CPU. No transmit message is pending for this CAN controller (in any of the 3 Tx buffers), and software may write to any of the CANxTFI, CANxTID, CANxTDA, and CANxTDB registers.
        };
        namespace tbsValC{
            constexpr MPL::Value<tbsVal,tbsVal::lockedAtLeastOne> lockedAtLeastOne{};
            constexpr MPL::Value<tbsVal,tbsVal::releasedAllThree> releasedAllThree{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tbsVal> tbs{}; 
        ///Transmit Complete Status. The Transmission Complete Status bit is set '0' (incomplete) whenever the Transmission Request bit or the Self Reception Request bit is set '1' at least for one of the three Transmit Buffers. The Transmission Complete Status bit will remain '0' until all messages are transmitted successfully.
        enum class tcsVal {
            incompleteAtLeast=0x00000000,     ///<Incomplete. At least one requested transmission has not been successfully completed yet.
            completeAllReques=0x00000001,     ///<Complete. All requested transmission(s) has (have) been successfully completed.
        };
        namespace tcsValC{
            constexpr MPL::Value<tcsVal,tcsVal::incompleteAtLeast> incompleteAtLeast{};
            constexpr MPL::Value<tcsVal,tcsVal::completeAllReques> completeAllReques{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tcsVal> tcs{}; 
        ///Receive Status. If both the Receive Status and the Transmit Status bits are '0' (idle), the CAN-Bus is idle. If both bits are set, the controller is waiting to become idle again. After hardware reset 11 consecutive recessive bits have to be detected until idle status is reached. After Bus-off this will take 128 times of 11 consecutive recessive bits.
        enum class rsVal {
            idleTheCanContro=0x00000000,     ///<Idle. The CAN controller is idle.
            receiveTheCanCon=0x00000001,     ///<Receive. The CAN controller is receiving a message.
        };
        namespace rsValC{
            constexpr MPL::Value<rsVal,rsVal::idleTheCanContro> idleTheCanContro{};
            constexpr MPL::Value<rsVal,rsVal::receiveTheCanCon> receiveTheCanCon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rsVal> rs{}; 
        ///Transmit Status. If both the Receive Status and the Transmit Status bits are '0' (idle), the CAN-Bus is idle. If both bits are set, the controller is waiting to become idle again. After hardware reset 11 consecutive recessive bits have to be detected until idle status is reached. After Bus-off this will take 128 times of 11 consecutive recessive bits.
        enum class tsVal {
            idleTheCanContro=0x00000000,     ///<Idle. The CAN controller is idle.
            transmitTheCanCo=0x00000001,     ///<Transmit. The CAN controller is sending a message.
        };
        namespace tsValC{
            constexpr MPL::Value<tsVal,tsVal::idleTheCanContro> idleTheCanContro{};
            constexpr MPL::Value<tsVal,tsVal::transmitTheCanCo> transmitTheCanCo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tsVal> ts{}; 
        ///Error Status. Errors detected during reception or transmission will effect the error counters according to the CAN specification. The Error Status bit is set when at least one of the error counters has reached or exceeded the Error Warning Limit. An Error Warning Interrupt is generated, if enabled. The default value of the Error Warning Limit after hardware reset is 96 decimal, see also Section 21.7.7 CAN Error Warning Limit register (CAN1EWL - 0x4004 4018, CAN2EWL - 0x4004 8018).
        enum class esVal {
            okBothErrorCount=0x00000000,     ///<OK. Both error counters are below the Error Warning Limit.
            errorOneOrBothO=0x00000001,     ///<Error. One or both of the Transmit and Receive Error Counters has reached the limit set in the Error Warning Limit register.
        };
        namespace esValC{
            constexpr MPL::Value<esVal,esVal::okBothErrorCount> okBothErrorCount{};
            constexpr MPL::Value<esVal,esVal::errorOneOrBothO> errorOneOrBothO{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,esVal> es{}; 
        ///Bus Status. Mode bit '1' (present) and an Error Warning Interrupt is generated, if enabled. Afterwards the Transmit Error Counter is set to '127', and the Receive Error Counter is cleared. It will stay in this mode until the CPU clears the Reset Mode bit. Once this is completed the CAN Controller will wait the minimum protocol-defined time (128 occurrences of the Bus-Free signal) counting down the Transmit Error Counter. After that, the Bus Status bit is cleared (Bus-On), the Error Status bit is set '0' (ok), the Error Counters are reset, and an Error Warning Interrupt is generated, if enabled. Reading the TX Error Counter during this time gives information about the status of the Bus-Off recovery.
        enum class bsVal {
            busOnTheCanCont=0x00000000,     ///<Bus-on. The CAN Controller is involved in bus activities
            busOffTheCanCon=0x00000001,     ///<Bus-off. The CAN controller is currently not involved/prohibited from bus activity because the Transmit Error Counter reached its limiting value of 255.
        };
        namespace bsValC{
            constexpr MPL::Value<bsVal,bsVal::busOnTheCanCont> busOnTheCanCont{};
            constexpr MPL::Value<bsVal,bsVal::busOffTheCanCon> busOffTheCanCon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bsVal> bs{}; 
        ///The current value of the Rx Error Counter (an 8-bit value).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxerr{}; 
        ///The current value of the Tx Error Counter (an 8-bit value).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txerr{}; 
    }
    namespace Noneicr{    ///<Interrupt status, Arbitration Lost Capture, Error Code Capture
        using Addr = Register::Address<0x4004400c,0x0000f800,0,unsigned>;
        ///Receive Interrupt. This bit is set whenever the RBS bit in CANxSR and the RIE bit in CANxIER are both 1, indicating that a new message was received and stored in the Receive Buffer. The Receive Interrupt Bit is not cleared upon a read access to the Interrupt Register. Giving the Command Release Receive Buffer will clear RI temporarily. If there is another message available within the Receive Buffer after the release command, RI is set again. Otherwise RI remains cleared.
        enum class riVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace riValC{
            constexpr MPL::Value<riVal,riVal::reset> reset{};
            constexpr MPL::Value<riVal,riVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,riVal> ri{}; 
        ///Transmit Interrupt 1. This bit is set when the TBS1 bit in CANxSR goes from 0 to 1 (whenever a message out of TXB1 was successfully transmitted or aborted), indicating that Transmit buffer 1 is available, and the TIE1 bit in CANxIER is 1.
        enum class ti1Val {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace ti1ValC{
            constexpr MPL::Value<ti1Val,ti1Val::reset> reset{};
            constexpr MPL::Value<ti1Val,ti1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ti1Val> ti1{}; 
        ///Error Warning Interrupt. This bit is set on every change (set or clear) of either the Error Status or Bus Status bit in CANxSR and the EIE bit bit is set within the Interrupt Enable Register at the time of the change.
        enum class eiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace eiValC{
            constexpr MPL::Value<eiVal,eiVal::reset> reset{};
            constexpr MPL::Value<eiVal,eiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,eiVal> ei{}; 
        ///Data Overrun Interrupt. This bit is set when the DOS bit in CANxSR goes from 0 to 1 and the DOIE bit in CANxIER is 1.
        enum class doiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace doiValC{
            constexpr MPL::Value<doiVal,doiVal::reset> reset{};
            constexpr MPL::Value<doiVal,doiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,doiVal> doi{}; 
        ///Wake-Up Interrupt. This bit is set if the CAN controller is sleeping and bus activity is detected and the WUIE bit in CANxIER is 1. A Wake-Up Interrupt is also generated if the CPU tries to set the Sleep bit while the CAN controller is involved in bus activities or a CAN Interrupt is pending. The WUI flag can also get asserted when the according enable bit WUIE is not set. In this case a Wake-Up Interrupt does not get asserted.
        enum class wuiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace wuiValC{
            constexpr MPL::Value<wuiVal,wuiVal::reset> reset{};
            constexpr MPL::Value<wuiVal,wuiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,wuiVal> wui{}; 
        ///Error Passive Interrupt. This bit is set if the EPIE bit in CANxIER is 1, and the CAN controller switches between Error Passive and Error Active mode in either direction. This is the case when the CAN Controller has reached the Error Passive Status (at least one error counter exceeds the CAN protocol defined level of 127) or if the CAN Controller is in Error Passive Status and enters the Error Active Status again.
        enum class epiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace epiValC{
            constexpr MPL::Value<epiVal,epiVal::reset> reset{};
            constexpr MPL::Value<epiVal,epiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,epiVal> epi{}; 
        ///Arbitration Lost Interrupt. This bit is set if the ALIE bit in CANxIER is 1, and the CAN controller loses arbitration while attempting to transmit. In this case the CAN node becomes a receiver.
        enum class aliVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace aliValC{
            constexpr MPL::Value<aliVal,aliVal::reset> reset{};
            constexpr MPL::Value<aliVal,aliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,aliVal> ali{}; 
        ///Bus Error Interrupt -- this bit is set if the BEIE bit in CANxIER is 1, and the CAN controller detects an error on the bus.
        enum class beiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace beiValC{
            constexpr MPL::Value<beiVal,beiVal::reset> reset{};
            constexpr MPL::Value<beiVal,beiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,beiVal> bei{}; 
        ///ID Ready Interrupt -- this bit is set if the IDIE bit in CANxIER is 1, and a CAN Identifier has been received (a message was successfully transmitted or aborted). This bit is set whenever a message was successfully transmitted or aborted and the IDIE bit is set in the IER register.
        enum class idiVal {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace idiValC{
            constexpr MPL::Value<idiVal,idiVal::reset> reset{};
            constexpr MPL::Value<idiVal,idiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,idiVal> idi{}; 
        ///Transmit Interrupt 2. This bit is set when the TBS2 bit in CANxSR goes from 0 to 1 (whenever a message out of TXB2 was successfully transmitted or aborted), indicating that Transmit buffer 2 is available, and the TIE2 bit in CANxIER is 1.
        enum class ti2Val {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace ti2ValC{
            constexpr MPL::Value<ti2Val,ti2Val::reset> reset{};
            constexpr MPL::Value<ti2Val,ti2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ti2Val> ti2{}; 
        ///Transmit Interrupt 3. This bit is set when the TBS3 bit in CANxSR goes from 0 to 1 (whenever a message out of TXB3 was successfully transmitted or aborted), indicating that Transmit buffer 3 is available, and the TIE3 bit in CANxIER is 1.
        enum class ti3Val {
            reset=0x00000000,     ///<Reset
            set=0x00000001,     ///<Set
        };
        namespace ti3ValC{
            constexpr MPL::Value<ti3Val,ti3Val::reset> reset{};
            constexpr MPL::Value<ti3Val,ti3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ti3Val> ti3{}; 
        ///Error Code Capture: when the CAN controller detects a bus error, the location of the error within the frame is captured in this field. The value reflects an internal state variable, and as a result is not very linear: 00011 = Start of Frame 00010 = ID28 ... ID21 00110 = ID20 ... ID18 00100 = SRTR Bit 00101 = IDE bit 00111 = ID17 ... 13 01111 = ID12 ... ID5 01110 = ID4 ... ID0 01100 = RTR Bit 01101 = Reserved Bit 1 01001 = Reserved Bit 0 01011 = Data Length Code 01010 = Data Field 01000 = CRC Sequence 11000 = CRC Delimiter 11001 = Acknowledge Slot 11011 = Acknowledge Delimiter 11010 = End of Frame 10010 = Intermission Whenever a bus error occurs, the corresponding bus error interrupt is forced, if enabled. At the same time, the current position of the Bit Stream Processor is captured into the Error Code Capture Register. The content within this register is fixed until the user software has read out its content once. From now on, the capture mechanism is activated again, i.e. reading the CANxICR enables another Bus Error Interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> errbit40{}; 
        ///When the CAN controller detects a bus error, the direction of the current bit is captured in this bit.
        enum class errdirVal {
            errorOccurredDurin=0x00000000,     ///<Error occurred during transmitting.
            errorOccurredDurin=0x00000001,     ///<Error occurred during receiving.
        };
        namespace errdirValC{
            constexpr MPL::Value<errdirVal,errdirVal::errorOccurredDurin> errorOccurredDurin{};
            constexpr MPL::Value<errdirVal,errdirVal::errorOccurredDurin> errorOccurredDurin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,errdirVal> errdir{}; 
        ///When the CAN controller detects a bus error, the type of error is captured in this field:
        enum class errc10Val {
            bitError=0x00000000,     ///<Bit error
            formError=0x00000001,     ///<Form error
            stuffError=0x00000002,     ///<Stuff error
            otherError=0x00000003,     ///<Other error
        };
        namespace errc10ValC{
            constexpr MPL::Value<errc10Val,errc10Val::bitError> bitError{};
            constexpr MPL::Value<errc10Val,errc10Val::formError> formError{};
            constexpr MPL::Value<errc10Val,errc10Val::stuffError> stuffError{};
            constexpr MPL::Value<errc10Val,errc10Val::otherError> otherError{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,errc10Val> errc10{}; 
        ///Each time arbitration is lost while trying to send on the CAN, the bit number within the frame is captured into this field. After the content of ALCBIT is read, the ALI bit is cleared and a new Arbitration Lost interrupt can occur. 00 = arbitration lost in the first bit (MS) of identifier ... 11 = arbitration lost in SRTS bit (RTR bit for standard frame messages) 12 = arbitration lost in IDE bit 13 = arbitration lost in 12th bit of identifier (extended frame only) ... 30 = arbitration lost in last bit of identifier (extended frame only) 31 = arbitration lost in RTR bit (extended frame only) On arbitration lost, the corresponding arbitration lost interrupt is forced, if enabled. At that time, the current bit position of the Bit Stream Processor is captured into the Arbitration Lost Capture Register. The content within this register is fixed until the user application has read out its contents once. From now on, the capture mechanism is activated again.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> alcbit{}; 
    }
    namespace Noneier{    ///<Interrupt Enable
        using Addr = Register::Address<0x40044010,0xfffff800,0,unsigned>;
        ///Receiver Interrupt Enable. When the Receive Buffer Status is 'full', the CAN Controller requests the respective interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit Interrupt Enable for Buffer1. When a message has been successfully transmitted out of TXB1 or Transmit Buffer 1 is accessible again (e.g. after an Abort Transmission command), the CAN Controller requests the respective interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tie1{}; 
        ///Error Warning Interrupt Enable. If the Error or Bus Status change (see Status Register), the CAN Controller requests the respective interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eie{}; 
        ///Data Overrun Interrupt Enable. If the Data Overrun Status bit is set (see Status Register), the CAN Controller requests the respective interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> doie{}; 
        ///Wake-Up Interrupt Enable. If the sleeping CAN controller wakes up, the respective interrupt is requested.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wuie{}; 
        ///Error Passive Interrupt Enable. If the error status of the CAN Controller changes from error active to error passive or vice versa, the respective interrupt is requested.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epie{}; 
        ///Arbitration Lost Interrupt Enable. If the CAN Controller has lost arbitration, the respective interrupt is requested.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> alie{}; 
        ///Bus Error Interrupt Enable. If a bus error has been detected, the CAN Controller requests the respective interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> beie{}; 
        ///ID Ready Interrupt Enable. When a CAN identifier has been received, the CAN Controller requests the respective interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> idie{}; 
        ///Transmit Interrupt Enable for Buffer2. When a message has been successfully transmitted out of TXB2 or Transmit Buffer 2 is accessible again (e.g. after an Abort Transmission command), the CAN Controller requests the respective interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tie2{}; 
        ///Transmit Interrupt Enable for Buffer3. When a message has been successfully transmitted out of TXB3 or Transmit Buffer 3 is accessible again (e.g. after an Abort Transmission command), the CAN Controller requests the respective interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tie3{}; 
    }
    namespace Nonebtr{    ///<Bus Timing. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044014,0xff003c00,0,unsigned>;
        ///Baud Rate Prescaler. The APB clock is divided by (this value plus one) to produce the CAN clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> brp{}; 
        ///The Synchronization Jump Width is (this value plus one) CAN clocks.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sjw{}; 
        ///The delay from the nominal Sync point to the sample point is (this value plus one) CAN clocks.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tesg1{}; 
        ///The delay from the sample point to the next nominal sync point is (this value plus one) CAN clocks. The nominal CAN bit time is (this value plus the value in TSEG1 plus 3) CAN clocks.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> tesg2{}; 
        ///Sampling
        enum class samVal {
            theBusIsSampledO=0x00000000,     ///<The bus is sampled once (recommended for high speed buses)
            theBusIsSampled3=0x00000001,     ///<The bus is sampled 3 times (recommended for low to medium speed buses to filter spikes on the bus-line)
        };
        namespace samValC{
            constexpr MPL::Value<samVal,samVal::theBusIsSampledO> theBusIsSampledO{};
            constexpr MPL::Value<samVal,samVal::theBusIsSampled3> theBusIsSampled3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,samVal> sam{}; 
    }
    namespace Noneewl{    ///<Error Warning Limit. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044018,0xffffff00,0,unsigned>;
        ///During CAN operation, this value is compared to both the Tx and Rx Error Counters. If either of these counter matches this value, the Error Status (ES) bit in CANSR is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ewl{}; 
    }
    namespace Nonesr{    ///<Status Register
        using Addr = Register::Address<0x4004401c,0xff000000,0,unsigned>;
        ///Receive Buffer Status. This bit is identical to the RBS bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rbs1{}; 
        ///Data Overrun Status. This bit is identical to the DOS bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dos1{}; 
        ///Transmit Buffer Status 1.
        enum class tbs11Val {
            lockedSoftwareCan=0x00000000,     ///<Locked. Software cannot access the Tx Buffer 1 nor write to the corresponding CANxTFI, CANxTID, CANxTDA, and CANxTDB registers because a message is either waiting for transmission or is in transmitting process.
            releasedSoftwareM=0x00000001,     ///<Released. Software may write a message into the Transmit Buffer 1 and its CANxTFI, CANxTID, CANxTDA, and CANxTDB registers.
        };
        namespace tbs11ValC{
            constexpr MPL::Value<tbs11Val,tbs11Val::lockedSoftwareCan> lockedSoftwareCan{};
            constexpr MPL::Value<tbs11Val,tbs11Val::releasedSoftwareM> releasedSoftwareM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tbs11Val> tbs11{}; 
        ///Transmission Complete Status.
        enum class tcs11Val {
            incompleteThePrev=0x00000000,     ///<Incomplete. The previously requested transmission for Tx Buffer 1 is not complete.
            completeThePrevio=0x00000001,     ///<Complete. The previously requested transmission for Tx Buffer 1 has been successfully completed.
        };
        namespace tcs11ValC{
            constexpr MPL::Value<tcs11Val,tcs11Val::incompleteThePrev> incompleteThePrev{};
            constexpr MPL::Value<tcs11Val,tcs11Val::completeThePrevio> completeThePrevio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tcs11Val> tcs11{}; 
        ///Receive Status. This bit is identical to the RS bit in the GSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rs1{}; 
        ///Transmit Status 1.
        enum class ts11Val {
            idleThereIsNoTr=0x00000000,     ///<Idle. There is no transmission from Tx Buffer 1.
            transmitTheCanCo=0x00000001,     ///<Transmit. The CAN Controller is transmitting a message from Tx Buffer 1.
        };
        namespace ts11ValC{
            constexpr MPL::Value<ts11Val,ts11Val::idleThereIsNoTr> idleThereIsNoTr{};
            constexpr MPL::Value<ts11Val,ts11Val::transmitTheCanCo> transmitTheCanCo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ts11Val> ts11{}; 
        ///Error Status. This bit is identical to the ES bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> es1{}; 
        ///Bus Status. This bit is identical to the BS bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bs1{}; 
        ///Receive Buffer Status. This bit is identical to the RBS bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rbs2{}; 
        ///Data Overrun Status. This bit is identical to the DOS bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dos2{}; 
        ///Transmit Buffer Status 2.
        enum class tbs22Val {
            lockedSoftwareCan=0x00000000,     ///<Locked. Software cannot access the Tx Buffer 2 nor write to the corresponding CANxTFI, CANxTID, CANxTDA, and CANxTDB registers because a message is either waiting for transmission or is in transmitting process.
            releasedSoftwareM=0x00000001,     ///<Released. Software may write a message into the Transmit Buffer 2 and its CANxTFI, CANxTID, CANxTDA, and CANxTDB registers.
        };
        namespace tbs22ValC{
            constexpr MPL::Value<tbs22Val,tbs22Val::lockedSoftwareCan> lockedSoftwareCan{};
            constexpr MPL::Value<tbs22Val,tbs22Val::releasedSoftwareM> releasedSoftwareM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,tbs22Val> tbs22{}; 
        ///Transmission Complete Status.
        enum class tcs22Val {
            incompleteThePrev=0x00000000,     ///<Incomplete. The previously requested transmission for Tx Buffer 2 is not complete.
            completeThePrevio=0x00000001,     ///<Complete. The previously requested transmission for Tx Buffer 2 has been successfully completed.
        };
        namespace tcs22ValC{
            constexpr MPL::Value<tcs22Val,tcs22Val::incompleteThePrev> incompleteThePrev{};
            constexpr MPL::Value<tcs22Val,tcs22Val::completeThePrevio> completeThePrevio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,tcs22Val> tcs22{}; 
        ///Receive Status. This bit is identical to the RS bit in the GSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rs2{}; 
        ///Transmit Status 2.
        enum class ts22Val {
            idleThereIsNoTr=0x00000000,     ///<Idle. There is no transmission from Tx Buffer 2.
            transmitTheCanCo=0x00000001,     ///<Transmit. The CAN Controller is transmitting a message from Tx Buffer 2.
        };
        namespace ts22ValC{
            constexpr MPL::Value<ts22Val,ts22Val::idleThereIsNoTr> idleThereIsNoTr{};
            constexpr MPL::Value<ts22Val,ts22Val::transmitTheCanCo> transmitTheCanCo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ts22Val> ts22{}; 
        ///Error Status. This bit is identical to the ES bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> es2{}; 
        ///Bus Status. This bit is identical to the BS bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bs2{}; 
        ///Receive Buffer Status. This bit is identical to the RBS bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rbs3{}; 
        ///Data Overrun Status. This bit is identical to the DOS bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dos3{}; 
        ///Transmit Buffer Status 3.
        enum class tbs33Val {
            lockedSoftwareCan=0x00000000,     ///<Locked. Software cannot access the Tx Buffer 3 nor write to the corresponding CANxTFI, CANxTID, CANxTDA, and CANxTDB registers because a message is either waiting for transmission or is in transmitting process.
            releasedSoftwareM=0x00000001,     ///<Released. Software may write a message into the Transmit Buffer 3 and its CANxTFI, CANxTID, CANxTDA, and CANxTDB registers.
        };
        namespace tbs33ValC{
            constexpr MPL::Value<tbs33Val,tbs33Val::lockedSoftwareCan> lockedSoftwareCan{};
            constexpr MPL::Value<tbs33Val,tbs33Val::releasedSoftwareM> releasedSoftwareM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,tbs33Val> tbs33{}; 
        ///Transmission Complete Status.
        enum class tcs33Val {
            incompleteThePrev=0x00000000,     ///<Incomplete. The previously requested transmission for Tx Buffer 3 is not complete.
            completeThePrevio=0x00000001,     ///<Complete. The previously requested transmission for Tx Buffer 3 has been successfully completed.
        };
        namespace tcs33ValC{
            constexpr MPL::Value<tcs33Val,tcs33Val::incompleteThePrev> incompleteThePrev{};
            constexpr MPL::Value<tcs33Val,tcs33Val::completeThePrevio> completeThePrevio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,tcs33Val> tcs33{}; 
        ///Receive Status. This bit is identical to the RS bit in the GSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rs3{}; 
        ///Transmit Status 3.
        enum class ts33Val {
            idleThereIsNoTr=0x00000000,     ///<Idle. There is no transmission from Tx Buffer 3.
            transmitTheCanCo=0x00000001,     ///<Transmit. The CAN Controller is transmitting a message from Tx Buffer 3.
        };
        namespace ts33ValC{
            constexpr MPL::Value<ts33Val,ts33Val::idleThereIsNoTr> idleThereIsNoTr{};
            constexpr MPL::Value<ts33Val,ts33Val::transmitTheCanCo> transmitTheCanCo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ts33Val> ts33{}; 
        ///Error Status. This bit is identical to the ES bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> es3{}; 
        ///Bus Status. This bit is identical to the BS bit in the CANxGSR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> bs3{}; 
    }
    namespace Nonerfs{    ///<Receive frame status. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044020,0x3ff0f800,0,unsigned>;
        ///ID Index. If the BP bit (below) is 0, this value is the zero-based number of the Lookup Table RAM entry at which the Acceptance Filter matched the received Identifier. Disabled entries in the Standard tables are included in this numbering, but will not be matched. See Section 21.17 Examples of acceptance filter tables and ID index values on page 587 for examples of ID Index values.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> idindex{}; 
        ///If this bit is 1, the current message was received in AF Bypass mode, and the ID Index field (above) is meaningless.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bp{}; 
        ///The field contains the Data Length Code (DLC) field of the current received message. When RTR = 0, this is related to the number of data bytes available in the CANRDA and CANRDB registers as follows: 0000-0111 = 0 to 7 bytes1000-1111 = 8 bytes With RTR = 1, this value indicates the number of data bytes requested to be sent back, with the same encoding.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///This bit contains the Remote Transmission Request bit of the current received message. 0 indicates a Data Frame, in which (if DLC is non-zero) data can be read from the CANRDA and possibly the CANRDB registers. 1 indicates a Remote frame, in which case the DLC value identifies the number of data bytes requested to be sent using the same Identifier.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///A 0 in this bit indicates that the current received message included an 11-bit Identifier, while a 1 indicates a 29-bit Identifier. This affects the contents of the CANid register described below.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ff{}; 
    }
    namespace Nonerid{    ///<Received Identifier. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044024,0xfffff800,0,unsigned>;
        ///The 11-bit Identifier field of the current received message. In CAN 2.0A, these bits are called ID10-0, while in CAN 2.0B they're called ID29-18.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace Nonerda{    ///<Received data bytes 1-4. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x40044028,0x00000000,0,unsigned>;
        ///Data 1. If the DLC field in CANRFS >= 0001, this contains the first Data byte of the current received message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Data 2. If the DLC field in CANRFS >= 0010, this contains the first Data byte of the current received message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data 3. If the DLC field in CANRFS >= 0011, this contains the first Data byte of the current received message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Data 4. If the DLC field in CANRFS >= 0100, this contains the first Data byte of the current received message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace Nonerdb{    ///<Received data bytes 5-8. Can only be written when RM in CANMOD is 1.
        using Addr = Register::Address<0x4004402c,0x00000000,0,unsigned>;
        ///Data 5. If the DLC field in CANRFS >= 0101, this contains the first Data byte of the current received message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Data 6. If the DLC field in CANRFS >= 0110, this contains the first Data byte of the current received message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data 7. If the DLC field in CANRFS >= 0111, this contains the first Data byte of the current received message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Data 8. If the DLC field in CANRFS >= 1000, this contains the first Data byte of the current received message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data8{}; 
    }
    namespace Nonetfi1{    ///<Transmit
frame info (Tx Buffer )
        using Addr = Register::Address<0x40044030,0x3ff0ff00,0,unsigned>;
        ///If the TPM (Transmit Priority Mode) bit in the CANxMOD register is set to 1, enabled Tx Buffers contend for the right to send their messages based on this field. The buffer with the lowest TX Priority value wins the prioritization and is sent first.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prio{}; 
        ///Data Length Code. This value is sent in the DLC field of the next transmit message. In addition, if RTR = 0, this value controls the number of Data bytes sent in the next transmit message, from the CANxTDA and CANxTDB registers: 0000-0111 = 0-7 bytes 1xxx = 8 bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///This value is sent in the RTR bit of the next transmit message. If this bit is 0, the number of data bytes called out by the DLC field are sent from the CANxTDA and CANxTDB registers. If this bit is 1, a Remote Frame is sent, containing a request for that number of bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///If this bit is 0, the next transmit message will be sent with an 11-bit Identifier (standard frame format), while if it's 1, the message will be sent with a 29-bit Identifier (extended frame format).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ff{}; 
    }
    namespace Nonetfi2{    ///<Transmit
frame info (Tx Buffer )
        using Addr = Register::Address<0x40044040,0x3ff0ff00,0,unsigned>;
        ///If the TPM (Transmit Priority Mode) bit in the CANxMOD register is set to 1, enabled Tx Buffers contend for the right to send their messages based on this field. The buffer with the lowest TX Priority value wins the prioritization and is sent first.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prio{}; 
        ///Data Length Code. This value is sent in the DLC field of the next transmit message. In addition, if RTR = 0, this value controls the number of Data bytes sent in the next transmit message, from the CANxTDA and CANxTDB registers: 0000-0111 = 0-7 bytes 1xxx = 8 bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///This value is sent in the RTR bit of the next transmit message. If this bit is 0, the number of data bytes called out by the DLC field are sent from the CANxTDA and CANxTDB registers. If this bit is 1, a Remote Frame is sent, containing a request for that number of bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///If this bit is 0, the next transmit message will be sent with an 11-bit Identifier (standard frame format), while if it's 1, the message will be sent with a 29-bit Identifier (extended frame format).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ff{}; 
    }
    namespace Nonetfi3{    ///<Transmit
frame info (Tx Buffer )
        using Addr = Register::Address<0x40044050,0x3ff0ff00,0,unsigned>;
        ///If the TPM (Transmit Priority Mode) bit in the CANxMOD register is set to 1, enabled Tx Buffers contend for the right to send their messages based on this field. The buffer with the lowest TX Priority value wins the prioritization and is sent first.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prio{}; 
        ///Data Length Code. This value is sent in the DLC field of the next transmit message. In addition, if RTR = 0, this value controls the number of Data bytes sent in the next transmit message, from the CANxTDA and CANxTDB registers: 0000-0111 = 0-7 bytes 1xxx = 8 bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///This value is sent in the RTR bit of the next transmit message. If this bit is 0, the number of data bytes called out by the DLC field are sent from the CANxTDA and CANxTDB registers. If this bit is 1, a Remote Frame is sent, containing a request for that number of bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///If this bit is 0, the next transmit message will be sent with an 11-bit Identifier (standard frame format), while if it's 1, the message will be sent with a 29-bit Identifier (extended frame format).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ff{}; 
    }
    namespace Nonetid1{    ///<Transmit
Identifier (Tx Buffer)
        using Addr = Register::Address<0x40044034,0xfffff800,0,unsigned>;
        ///The 11-bit Identifier to be sent in the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace Nonetid2{    ///<Transmit
Identifier (Tx Buffer)
        using Addr = Register::Address<0x40044044,0xfffff800,0,unsigned>;
        ///The 11-bit Identifier to be sent in the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace Nonetid3{    ///<Transmit
Identifier (Tx Buffer)
        using Addr = Register::Address<0x40044054,0xfffff800,0,unsigned>;
        ///The 11-bit Identifier to be sent in the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace Nonetda1{    ///<Transmit
data bytes 1-4 (Tx Buffer)
        using Addr = Register::Address<0x40044038,0x00000000,0,unsigned>;
        ///Data 1. If RTR = 0 and DLC >= 0001 in the corresponding CANxTFI, this byte is sent as the first Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Data 2. If RTR = 0 and DLC >= 0010 in the corresponding CANxTFI, this byte is sent as the 2nd Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data 3. If RTR = 0 and DLC >= 0011 in the corresponding CANxTFI, this byte is sent as the 3rd Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Data 4. If RTR = 0 and DLC >= 0100 in the corresponding CANxTFI, this byte is sent as the 4th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace Nonetda2{    ///<Transmit
data bytes 1-4 (Tx Buffer)
        using Addr = Register::Address<0x40044048,0x00000000,0,unsigned>;
        ///Data 1. If RTR = 0 and DLC >= 0001 in the corresponding CANxTFI, this byte is sent as the first Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Data 2. If RTR = 0 and DLC >= 0010 in the corresponding CANxTFI, this byte is sent as the 2nd Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data 3. If RTR = 0 and DLC >= 0011 in the corresponding CANxTFI, this byte is sent as the 3rd Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Data 4. If RTR = 0 and DLC >= 0100 in the corresponding CANxTFI, this byte is sent as the 4th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace Nonetda3{    ///<Transmit
data bytes 1-4 (Tx Buffer)
        using Addr = Register::Address<0x40044058,0x00000000,0,unsigned>;
        ///Data 1. If RTR = 0 and DLC >= 0001 in the corresponding CANxTFI, this byte is sent as the first Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Data 2. If RTR = 0 and DLC >= 0010 in the corresponding CANxTFI, this byte is sent as the 2nd Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data 3. If RTR = 0 and DLC >= 0011 in the corresponding CANxTFI, this byte is sent as the 3rd Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Data 4. If RTR = 0 and DLC >= 0100 in the corresponding CANxTFI, this byte is sent as the 4th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace Nonetdb1{    ///<Transmit
data bytes 5-8 (Tx Buffer )
        using Addr = Register::Address<0x4004403c,0x00000000,0,unsigned>;
        ///Data 5. If RTR = 0 and DLC >= 0101 in the corresponding CANTFI, this byte is sent as the 5th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Data 6. If RTR = 0 and DLC >= 0110 in the corresponding CANTFI, this byte is sent as the 6th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data 7. If RTR = 0 and DLC >= 0111 in the corresponding CANTFI, this byte is sent as the 7th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Data 8. If RTR = 0 and DLC >= 1000 in the corresponding CANTFI, this byte is sent as the 8th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data8{}; 
    }
    namespace Nonetdb2{    ///<Transmit
data bytes 5-8 (Tx Buffer )
        using Addr = Register::Address<0x4004404c,0x00000000,0,unsigned>;
        ///Data 5. If RTR = 0 and DLC >= 0101 in the corresponding CANTFI, this byte is sent as the 5th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Data 6. If RTR = 0 and DLC >= 0110 in the corresponding CANTFI, this byte is sent as the 6th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data 7. If RTR = 0 and DLC >= 0111 in the corresponding CANTFI, this byte is sent as the 7th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Data 8. If RTR = 0 and DLC >= 1000 in the corresponding CANTFI, this byte is sent as the 8th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data8{}; 
    }
    namespace Nonetdb3{    ///<Transmit
data bytes 5-8 (Tx Buffer )
        using Addr = Register::Address<0x4004405c,0x00000000,0,unsigned>;
        ///Data 5. If RTR = 0 and DLC >= 0101 in the corresponding CANTFI, this byte is sent as the 5th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Data 6. If RTR = 0 and DLC >= 0110 in the corresponding CANTFI, this byte is sent as the 6th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data 7. If RTR = 0 and DLC >= 0111 in the corresponding CANTFI, this byte is sent as the 7th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Data 8. If RTR = 0 and DLC >= 1000 in the corresponding CANTFI, this byte is sent as the 8th Data byte of the next transmit message.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data8{}; 
    }
}
