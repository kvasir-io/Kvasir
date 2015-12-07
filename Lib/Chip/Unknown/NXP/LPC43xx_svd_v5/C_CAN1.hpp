#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx C_CAN Modification date=1/18/2011 Major revision=0 Minor revision=7 
    namespace Nonecntl{    ///<CAN control
        using Addr = Register::Address<0x400a4000,0xffffff10,0,unsigned>;
        ///Initialization
        enum class InitVal {
            initializationIsSt=0x00000001,     ///<Initialization is started. On reset, software needs to initialize the CAN controller.
            normalOperation=0x00000000,     ///<Normal operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InitVal> init{}; 
        namespace InitValC{
            constexpr Register::FieldValue<decltype(init),InitVal::initializationIsSt> initializationIsSt{};
            constexpr Register::FieldValue<decltype(init),InitVal::normalOperation> normalOperation{};
        }
        ///Module interrupt enable
        enum class IeVal {
            enableCanInterrupt=0x00000001,     ///<Enable CAN interrupts. The interrupt line is set to LOW and remains LOW until all pending interrupts are cleared.
            disableCanInterrup=0x00000000,     ///<Disable CAN interrupts. The interrupt line is always HIGH.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IeVal> ie{}; 
        namespace IeValC{
            constexpr Register::FieldValue<decltype(ie),IeVal::enableCanInterrupt> enableCanInterrupt{};
            constexpr Register::FieldValue<decltype(ie),IeVal::disableCanInterrup> disableCanInterrup{};
        }
        ///Status change interrupt enable
        enum class SieVal {
            enableStatusChange=0x00000001,     ///<Enable status change interrupts. A status change interrupt will be generated when a message transfer is successfully completed or a CAN bus error is detected.
            disableStatusChang=0x00000000,     ///<Disable status change interrupts. No status change interrupt will be generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SieVal> sie{}; 
        namespace SieValC{
            constexpr Register::FieldValue<decltype(sie),SieVal::enableStatusChange> enableStatusChange{};
            constexpr Register::FieldValue<decltype(sie),SieVal::disableStatusChang> disableStatusChang{};
        }
        ///Error interrupt enable
        enum class EieVal {
            enableErrorInterru=0x00000001,     ///<Enable error interrupt. A change in the bits BOFF or EWARN in the CANSTAT registers will generate an interrupt.
            disableErrorInterr=0x00000000,     ///<Disable error interrupt. No error status interrupt will be generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EieVal> eie{}; 
        namespace EieValC{
            constexpr Register::FieldValue<decltype(eie),EieVal::enableErrorInterru> enableErrorInterru{};
            constexpr Register::FieldValue<decltype(eie),EieVal::disableErrorInterr> disableErrorInterr{};
        }
        ///Disable automatic retransmission
        enum class DarVal {
            disabled=0x00000001,     ///<Automatic retransmission disabled.
            enabled=0x00000000,     ///<Automatic retransmission of disturbed messages enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DarVal> dar{}; 
        namespace DarValC{
            constexpr Register::FieldValue<decltype(dar),DarVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dar),DarVal::enabled> enabled{};
        }
        ///Configuration change enable
        enum class CceVal {
            theCpuHasWriteAc=0x00000001,     ///<The CPU has write access to the CANBT register while the INIT bit is one.
            theCpuHasNoWrite=0x00000000,     ///<The CPU has no write access to the bit timing register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CceVal> cce{}; 
        namespace CceValC{
            constexpr Register::FieldValue<decltype(cce),CceVal::theCpuHasWriteAc> theCpuHasWriteAc{};
            constexpr Register::FieldValue<decltype(cce),CceVal::theCpuHasNoWrite> theCpuHasNoWrite{};
        }
        ///Test mode enable
        enum class TestVal {
            testMode=0x00000001,     ///<Test mode.
            normalOperation=0x00000000,     ///<Normal operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TestVal> test{}; 
        namespace TestValC{
            constexpr Register::FieldValue<decltype(test),TestVal::testMode> testMode{};
            constexpr Register::FieldValue<decltype(test),TestVal::normalOperation> normalOperation{};
        }
    }
    namespace Nonestat{    ///<Status register
        using Addr = Register::Address<0x400a4004,0xffffff00,0,unsigned>;
        ///Last error code Type of the last error to occur on the CAN bus.The LEC field holds a code which indicates the type of the last error to occur on the CAN bus. This field will be cleared to 0 when a message has been transferred (reception or transmission) without error. The unused code 111 may be written by the CPU to check for updates.
        enum class LecVal {
            noError=0x00000000,     ///<No error.
            stuffErrorMoreTh=0x00000001,     ///<Stuff error: More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed.
            formErrorAFixed=0x00000002,     ///<Form error: A fixed format part of a received frame has the wrong format.
            ackerrorTheMessag=0x00000003,     ///<AckError: The message this CAN core transmitted was not acknowledged.
            bit1errorDuringTh=0x00000004,     ///<Bit1Error: During the transmission of a message (with the exception of the arbitration field), the device wanted to send a HIGH/recessive level (bit of logical value 1), but the monitored bus value was LOW/dominant.
            bit0errorDuringTh=0x00000005,     ///<Bit0Error: During the transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device wanted to send a LOW/dominant level (data or identifier bit logical value 0), but the monitored Bus value was HIGH/recessive. During busoff recovery this status is set each time a sequence of 11 HIGH/recessive bits has been monitored. This enables the CPU to monitor the proceeding of the busoff recovery sequence (indicating the bus is not stuck at LOW/dominant or continuously disturbed).
            crcerrorTheCrcCh=0x00000006,     ///<CRCError: The CRC checksum was incorrect in the message received.
            unusedNoCanBusE=0x00000007,     ///<Unused: No CAN bus event was detected (written by the CPU).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,LecVal> lec{}; 
        namespace LecValC{
            constexpr Register::FieldValue<decltype(lec),LecVal::noError> noError{};
            constexpr Register::FieldValue<decltype(lec),LecVal::stuffErrorMoreTh> stuffErrorMoreTh{};
            constexpr Register::FieldValue<decltype(lec),LecVal::formErrorAFixed> formErrorAFixed{};
            constexpr Register::FieldValue<decltype(lec),LecVal::ackerrorTheMessag> ackerrorTheMessag{};
            constexpr Register::FieldValue<decltype(lec),LecVal::bit1errorDuringTh> bit1errorDuringTh{};
            constexpr Register::FieldValue<decltype(lec),LecVal::bit0errorDuringTh> bit0errorDuringTh{};
            constexpr Register::FieldValue<decltype(lec),LecVal::crcerrorTheCrcCh> crcerrorTheCrcCh{};
            constexpr Register::FieldValue<decltype(lec),LecVal::unusedNoCanBusE> unusedNoCanBusE{};
        }
        ///Transmitted a message successfully This bit is reset by the CPU. It is never reset by the CAN controller.
        enum class TxokVal {
            msgtransfer=0x00000001,     ///<Since this bit was last reset by the CPU, a message has been successfully transmitted (error free and acknowledged by at least one other node).
            nomsgtransfer=0x00000000,     ///<Since this bit was reset by the CPU, no message has been successfully transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxokVal> txok{}; 
        namespace TxokValC{
            constexpr Register::FieldValue<decltype(txok),TxokVal::msgtransfer> msgtransfer{};
            constexpr Register::FieldValue<decltype(txok),TxokVal::nomsgtransfer> nomsgtransfer{};
        }
        ///Received a message successfully This bit is reset by the CPU. It is never reset by the CAN controller.
        enum class RxokVal {
            msgtransfer=0x00000001,     ///<Since this bit was last set to zero by the CPU, a message has been successfully received independent of the result of acceptance filtering.
            nomsgtransfer=0x00000000,     ///<Since this bit was last reset by the CPU, no message has been successfully transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RxokVal> rxok{}; 
        namespace RxokValC{
            constexpr Register::FieldValue<decltype(rxok),RxokVal::msgtransfer> msgtransfer{};
            constexpr Register::FieldValue<decltype(rxok),RxokVal::nomsgtransfer> nomsgtransfer{};
        }
        ///Error passive
        enum class EpassVal {
            passive=0x00000001,     ///<The CAN controller is in the error passive state as defined in the  CAN 2.0 specification.
            active=0x00000000,     ///<The CAN controller is in the error active state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EpassVal> epass{}; 
        namespace EpassValC{
            constexpr Register::FieldValue<decltype(epass),EpassVal::passive> passive{};
            constexpr Register::FieldValue<decltype(epass),EpassVal::active> active{};
        }
        ///Warning status
        enum class EwarnVal {
            atLeastOneOfThe=0x00000001,     ///<At least one of the error counters in the EML has reached the error warning limit of 96.
            bothErrorCounters=0x00000000,     ///<Both error counters are below the error warning limit of 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EwarnVal> ewarn{}; 
        namespace EwarnValC{
            constexpr Register::FieldValue<decltype(ewarn),EwarnVal::atLeastOneOfThe> atLeastOneOfThe{};
            constexpr Register::FieldValue<decltype(ewarn),EwarnVal::bothErrorCounters> bothErrorCounters{};
        }
        ///Busoff status
        enum class BoffVal {
            busoff=0x00000001,     ///<The CAN controller is in busoff state.
            nobusoff=0x00000000,     ///<The CAN module is not in busoff.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BoffVal> boff{}; 
        namespace BoffValC{
            constexpr Register::FieldValue<decltype(boff),BoffVal::busoff> busoff{};
            constexpr Register::FieldValue<decltype(boff),BoffVal::nobusoff> nobusoff{};
        }
    }
    namespace Noneec{    ///<Error counter
        using Addr = Register::Address<0x400a4008,0xffff0000,0,unsigned>;
        ///Transmit error counter Current value of the transmit error counter (maximum value 127)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec70{}; 
        namespace Tec70ValC{
        }
        ///Receive error counter Current value of the receive error counter (maximum value 255).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rec60{}; 
        namespace Rec60ValC{
        }
        ///Receive error passive
        enum class RpVal {
            passive=0x00000001,     ///<The receive counter has reached the error passive level as defined in the  CAN2.0 specification.
            belowpassive=0x00000000,     ///<The receive counter is below the error passive level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,RpVal> rp{}; 
        namespace RpValC{
            constexpr Register::FieldValue<decltype(rp),RpVal::passive> passive{};
            constexpr Register::FieldValue<decltype(rp),RpVal::belowpassive> belowpassive{};
        }
    }
    namespace Nonebt{    ///<Bit timing register
        using Addr = Register::Address<0x400a400c,0xffff8000,0,unsigned>;
        ///Baud rate prescaler The value by which the oscillator frequency is divided for generating the bit time quanta. The bit time is built up from a multiple of this quanta. Valid values for the Baud Rate Prescaler are 0 to 63[1].  Valid programmed values are 0x01 - 0x3F[1].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> brp{}; 
        namespace BrpValC{
        }
        ///(Re)synchronization jump width Valid programmed values are 0 to 3[1].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sjw{}; 
        namespace SjwValC{
        }
        ///Time segment after the sample point Valid values are 0 to 7[1].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        namespace Tseg1ValC{
        }
        ///Time segment before the sample point Valid values are 1 to 15[1].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tseg2{}; 
        namespace Tseg2ValC{
        }
    }
    namespace Noneint{    ///<Interrupt register
        using Addr = Register::Address<0x400a4010,0xffff0000,0,unsigned>;
        ///0x0000= No interrupt is pending 0x0001 to 0x0020 = Number of message object which caused the interrupt. 0x0021 to 0x7FFF = Unused 0x8000 = Status interrupt 0x8001 to 0xFFFF = Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intid150{}; 
        namespace Intid150ValC{
        }
    }
    namespace Nonetest{    ///<Test register
        using Addr = Register::Address<0x400a4014,0xffffff03,0,unsigned>;
        ///Basic mode
        enum class BasicVal {
            if1TxIf2Rx=0x00000001,     ///<IF1 registers used as TX buffer, IF2 registers used as RX buffer.
            basicModeDisabled=0x00000000,     ///<Basic mode disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BasicVal> basic{}; 
        namespace BasicValC{
            constexpr Register::FieldValue<decltype(basic),BasicVal::if1TxIf2Rx> if1TxIf2Rx{};
            constexpr Register::FieldValue<decltype(basic),BasicVal::basicModeDisabled> basicModeDisabled{};
        }
        ///Silent mode
        enum class SilentVal {
            silent=0x00000001,     ///<The module is in silent mode.
            normalOperation=0x00000000,     ///<Normal operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SilentVal> silent{}; 
        namespace SilentValC{
            constexpr Register::FieldValue<decltype(silent),SilentVal::silent> silent{};
            constexpr Register::FieldValue<decltype(silent),SilentVal::normalOperation> normalOperation{};
        }
        ///Loop back mode
        enum class LbackVal {
            enabled=0x00000001,     ///<Loop back mode is enabled.
            disabled=0x00000000,     ///<Loop back mode is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LbackVal> lback{}; 
        namespace LbackValC{
            constexpr Register::FieldValue<decltype(lback),LbackVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(lback),LbackVal::disabled> disabled{};
        }
        ///Control of TD pins
        enum class Tx10Val {
            levelAtTheTdPin=0x00000000,     ///<Level at the TD pin is controlled by the CAN controller. This is the value at reset.
            theSamplePointCan=0x00000001,     ///<The sample point can be monitored at the TD pin.
            tdPinIsDrivenLow=0x00000002,     ///<TD pin is driven LOW/dominant.
            tdPinIsDrivenHig=0x00000003,     ///<TD pin is driven HIGH/recessive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,Tx10Val> tx10{}; 
        namespace Tx10ValC{
            constexpr Register::FieldValue<decltype(tx10),Tx10Val::levelAtTheTdPin> levelAtTheTdPin{};
            constexpr Register::FieldValue<decltype(tx10),Tx10Val::theSamplePointCan> theSamplePointCan{};
            constexpr Register::FieldValue<decltype(tx10),Tx10Val::tdPinIsDrivenLow> tdPinIsDrivenLow{};
            constexpr Register::FieldValue<decltype(tx10),Tx10Val::tdPinIsDrivenHig> tdPinIsDrivenHig{};
        }
        ///Monitors the actual value of the RD Pin
        enum class RxVal {
            theCanBusIsReces=0x00000001,     ///<The CAN bus is recessive (RD = 1).
            theCanBusIsDomin=0x00000000,     ///<The CAN bus is dominant (RD = 0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxVal> rx{}; 
        namespace RxValC{
            constexpr Register::FieldValue<decltype(rx),RxVal::theCanBusIsReces> theCanBusIsReces{};
            constexpr Register::FieldValue<decltype(rx),RxVal::theCanBusIsDomin> theCanBusIsDomin{};
        }
    }
    namespace Nonebrpe{    ///<Baud rate prescaler extension register
        using Addr = Register::Address<0x400a4018,0xfffffff0,0,unsigned>;
        ///Baud rate prescaler extension By programming BRPE the Baud Rate Prescaler can be extended to values up to 1023. Hardware interprets the value as the value of BRPE (MSBs) and BRP (LSBs) plus one. Allowed values are 0x00 to 0x0F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brpe{}; 
        namespace BrpeValC{
        }
    }
    namespace Noneif1Cmdreq{    ///<Message interface  command request 
        using Addr = Register::Address<0x400a4020,0xffff7fc0,0,unsigned>;
        ///Message number 0x01 to 0x20 = Valid message numbers The message object in the message RAM is selected for data transfer. 0x00 = Not a valid message number. This value is interpreted as 0x20.[1] 0x21 to 0x3F = Not a valid message number. This value is interpreted as 0x01 - 0x1F.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> messnum{}; 
        namespace MessnumValC{
        }
        ///BUSY flag. Set to one by hardware when writing to this Command request register. Set to zero by hardware when read/write action to this Command request register has finished.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
    }
    namespace Noneif2Cmdreq{    ///<Message interface  command request 
        using Addr = Register::Address<0x400a4080,0xffff7fc0,0,unsigned>;
        ///Message number 0x01 to 0x20 = Valid message numbers The message object in the message RAM is selected for data transfer. 0x00 = Not a valid message number. This value is interpreted as 0x20.[1] 0x21 to 0x3F = Not a valid message number. This value is interpreted as 0x01 - 0x1F.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> messnum{}; 
        namespace MessnumValC{
        }
        ///BUSY flag. Set to one by hardware when writing to this Command request register. Set to zero by hardware when read/write action to this Command request register has finished.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
    }
    namespace Noneif1CmdmskW{    ///<Message interface command mask (write direction)
        using Addr = Register::Address<0x400a4024,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to message object.
            dataBytes47Uncha=0x00000000,     ///<data bytes 4-7 unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB),DatabVal::transferDataBytes> transferDataBytes{};
            constexpr Register::FieldValue<decltype(dataB),DatabVal::dataBytes47Uncha> dataBytes47Uncha{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to message object.
            dataBytes03Uncha=0x00000000,     ///<data bytes 0-3 unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA),DataaVal::transferDataBytes> transferDataBytes{};
            constexpr Register::FieldValue<decltype(dataA),DataaVal::dataBytes03Uncha> dataBytes03Uncha{};
        }
        ///Access transmission request bit
        enum class TxrqstVal {
            requestATransmissi=0x00000001,     ///<Request a transmission. Set the TXRQST bit IF1/2_MCTRL.
            noTransmissionRequ=0x00000000,     ///<No transmission request. TXRQSRT bit unchanged in IF1/2_MCTRL. If a transmission is requested by programming this bit, the TXRQST bit in the CANIFn_MCTRL register is ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::requestATransmissi> requestATransmissi{};
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::noTransmissionRequ> noTransmissionRequ{};
        }
        ///This bit is ignored in the write direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        namespace ClrintpndValC{
        }
        ///Access control bits
        enum class CtrlVal {
            transferControlBit=0x00000001,     ///<Transfer control bits to message object
            controlBitsUnchang=0x00000000,     ///<Control bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::transferControlBit> transferControlBit{};
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::controlBitsUnchang> controlBitsUnchang{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to message object.
            arbitrationBitsUnc=0x00000000,     ///<Arbitration bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::transferIdentifier> transferIdentifier{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::arbitrationBitsUnc> arbitrationBitsUnc{};
        }
        ///Access mask bits
        enum class MaskVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to message object.
            maskBitsUnchanged=0x00000000,     ///<Mask bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask),MaskVal::transferIdentifier> transferIdentifier{};
            constexpr Register::FieldValue<decltype(mask),MaskVal::maskBitsUnchanged> maskBitsUnchanged{};
        }
        ///Write transfer Transfer data from the selected message buffer registers to the message object addressed by the command request register CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        namespace WrrdValC{
        }
    }
    namespace Noneif2CmdmskW{    ///<Message interface command mask (write direction)
        using Addr = Register::Address<0x400a4084,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to message object.
            dataBytes47Uncha=0x00000000,     ///<data bytes 4-7 unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB),DatabVal::transferDataBytes> transferDataBytes{};
            constexpr Register::FieldValue<decltype(dataB),DatabVal::dataBytes47Uncha> dataBytes47Uncha{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to message object.
            dataBytes03Uncha=0x00000000,     ///<data bytes 0-3 unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA),DataaVal::transferDataBytes> transferDataBytes{};
            constexpr Register::FieldValue<decltype(dataA),DataaVal::dataBytes03Uncha> dataBytes03Uncha{};
        }
        ///Access transmission request bit
        enum class TxrqstVal {
            requestATransmissi=0x00000001,     ///<Request a transmission. Set the TXRQST bit IF1/2_MCTRL.
            noTransmissionRequ=0x00000000,     ///<No transmission request. TXRQSRT bit unchanged in IF1/2_MCTRL. If a transmission is requested by programming this bit, the TXRQST bit in the CANIFn_MCTRL register is ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::requestATransmissi> requestATransmissi{};
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::noTransmissionRequ> noTransmissionRequ{};
        }
        ///This bit is ignored in the write direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        namespace ClrintpndValC{
        }
        ///Access control bits
        enum class CtrlVal {
            transferControlBit=0x00000001,     ///<Transfer control bits to message object
            controlBitsUnchang=0x00000000,     ///<Control bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::transferControlBit> transferControlBit{};
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::controlBitsUnchang> controlBitsUnchang{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to message object.
            arbitrationBitsUnc=0x00000000,     ///<Arbitration bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::transferIdentifier> transferIdentifier{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::arbitrationBitsUnc> arbitrationBitsUnc{};
        }
        ///Access mask bits
        enum class MaskVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to message object.
            maskBitsUnchanged=0x00000000,     ///<Mask bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask),MaskVal::transferIdentifier> transferIdentifier{};
            constexpr Register::FieldValue<decltype(mask),MaskVal::maskBitsUnchanged> maskBitsUnchanged{};
        }
        ///Write transfer Transfer data from the selected message buffer registers to the message object addressed by the command request register CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        namespace WrrdValC{
        }
    }
    namespace Noneif1CmdmskR{    ///<Message interface  command mask (read direction)
        using Addr = Register::Address<0x400a4024,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to IFx message buffer register.
            dataBytes47Uncha=0x00000000,     ///<data bytes 4-7 unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB),DatabVal::transferDataBytes> transferDataBytes{};
            constexpr Register::FieldValue<decltype(dataB),DatabVal::dataBytes47Uncha> dataBytes47Uncha{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to IFx message buffer.
            dataBytes03Uncha=0x00000000,     ///<data bytes 0-3 unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA),DataaVal::transferDataBytes> transferDataBytes{};
            constexpr Register::FieldValue<decltype(dataA),DataaVal::dataBytes03Uncha> dataBytes03Uncha{};
        }
        ///Access new data bit
        enum class NewdatVal {
            clearNewdatBitIn=0x00000001,     ///<Clear NEWDAT bit in the message object.
            newdatBitRemainsU=0x00000000,     ///<NEWDAT bit remains unchanged. A read access to a message object can be combined with the reset of the control bits INTPND and NEWDAT in IF1/2_MCTRL. The values of these bits transferred to the IFx Message Control Register always reflect the status before resetting these bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::clearNewdatBitIn> clearNewdatBitIn{};
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::newdatBitRemainsU> newdatBitRemainsU{};
        }
        ///Clear interrupt pending bit.
        enum class ClrintpndVal {
            clearIntpndBitIn=0x00000001,     ///<Clear INTPND bit in the message object.
            intpndBitRemainsU=0x00000000,     ///<INTPND bit remains unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrintpndVal> clrintpnd{}; 
        namespace ClrintpndValC{
            constexpr Register::FieldValue<decltype(clrintpnd),ClrintpndVal::clearIntpndBitIn> clearIntpndBitIn{};
            constexpr Register::FieldValue<decltype(clrintpnd),ClrintpndVal::intpndBitRemainsU> intpndBitRemainsU{};
        }
        ///Access control bits
        enum class CtrlVal {
            transferControlBit=0x00000001,     ///<Transfer control bits to IFx message buffer.
            controlBitsUnchang=0x00000000,     ///<Control bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::transferControlBit> transferControlBit{};
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::controlBitsUnchang> controlBitsUnchang{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to IFx message buffer register.
            arbitrationBitsUnc=0x00000000,     ///<Arbitration bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::transferIdentifier> transferIdentifier{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::arbitrationBitsUnc> arbitrationBitsUnc{};
        }
        ///Access mask bits
        enum class MaskVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to IFx message buffer register.
            maskBitsUnchanged=0x00000000,     ///<Mask bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask),MaskVal::transferIdentifier> transferIdentifier{};
            constexpr Register::FieldValue<decltype(mask),MaskVal::maskBitsUnchanged> maskBitsUnchanged{};
        }
        ///Read transfer Transfer data from the message object addressed by the command request register to the selected message buffer registers CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        namespace WrrdValC{
        }
    }
    namespace Noneif2CmdmskR{    ///<Message interface  command mask (read direction)
        using Addr = Register::Address<0x400a4084,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to IFx message buffer register.
            dataBytes47Uncha=0x00000000,     ///<data bytes 4-7 unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB),DatabVal::transferDataBytes> transferDataBytes{};
            constexpr Register::FieldValue<decltype(dataB),DatabVal::dataBytes47Uncha> dataBytes47Uncha{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to IFx message buffer.
            dataBytes03Uncha=0x00000000,     ///<data bytes 0-3 unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA),DataaVal::transferDataBytes> transferDataBytes{};
            constexpr Register::FieldValue<decltype(dataA),DataaVal::dataBytes03Uncha> dataBytes03Uncha{};
        }
        ///Access new data bit
        enum class NewdatVal {
            clearNewdatBitIn=0x00000001,     ///<Clear NEWDAT bit in the message object.
            newdatBitRemainsU=0x00000000,     ///<NEWDAT bit remains unchanged. A read access to a message object can be combined with the reset of the control bits INTPND and NEWDAT in IF1/2_MCTRL. The values of these bits transferred to the IFx Message Control Register always reflect the status before resetting these bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::clearNewdatBitIn> clearNewdatBitIn{};
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::newdatBitRemainsU> newdatBitRemainsU{};
        }
        ///Clear interrupt pending bit.
        enum class ClrintpndVal {
            clearIntpndBitIn=0x00000001,     ///<Clear INTPND bit in the message object.
            intpndBitRemainsU=0x00000000,     ///<INTPND bit remains unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrintpndVal> clrintpnd{}; 
        namespace ClrintpndValC{
            constexpr Register::FieldValue<decltype(clrintpnd),ClrintpndVal::clearIntpndBitIn> clearIntpndBitIn{};
            constexpr Register::FieldValue<decltype(clrintpnd),ClrintpndVal::intpndBitRemainsU> intpndBitRemainsU{};
        }
        ///Access control bits
        enum class CtrlVal {
            transferControlBit=0x00000001,     ///<Transfer control bits to IFx message buffer.
            controlBitsUnchang=0x00000000,     ///<Control bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::transferControlBit> transferControlBit{};
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::controlBitsUnchang> controlBitsUnchang{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to IFx message buffer register.
            arbitrationBitsUnc=0x00000000,     ///<Arbitration bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::transferIdentifier> transferIdentifier{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::arbitrationBitsUnc> arbitrationBitsUnc{};
        }
        ///Access mask bits
        enum class MaskVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to IFx message buffer register.
            maskBitsUnchanged=0x00000000,     ///<Mask bits unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask),MaskVal::transferIdentifier> transferIdentifier{};
            constexpr Register::FieldValue<decltype(mask),MaskVal::maskBitsUnchanged> maskBitsUnchanged{};
        }
        ///Read transfer Transfer data from the message object addressed by the command request register to the selected message buffer registers CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        namespace WrrdValC{
        }
    }
    namespace Noneif1Msk1{    ///<Message interface  mask 1
        using Addr = Register::Address<0x400a4028,0xffff0000,0,unsigned>;
        ///Identifier mask 0 = The corresponding bit in the identifier of the message can not inhibit the match in the acceptance filtering. 1 = The corresponding identifier bit is used for acceptance filtering.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk150{}; 
        namespace Msk150ValC{
        }
    }
    namespace Noneif2Msk1{    ///<Message interface  mask 1
        using Addr = Register::Address<0x400a4088,0xffff0000,0,unsigned>;
        ///Identifier mask 0 = The corresponding bit in the identifier of the message can not inhibit the match in the acceptance filtering. 1 = The corresponding identifier bit is used for acceptance filtering.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk150{}; 
        namespace Msk150ValC{
        }
    }
    namespace Noneif1Msk2{    ///<Message interface 1 mask 2
        using Addr = Register::Address<0x400a402c,0xffff2000,0,unsigned>;
        ///Identifier mask 0 = The corresponding bit in the identifier of the message can not inhibit the match in the acceptance filtering. 1 = The corresponding identifier bit is used for acceptance filtering.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk2816{}; 
        namespace Msk2816ValC{
        }
        ///Mask message direction
        enum class MdirVal {
            theMessageDirectio=0x00000001,     ///<The message direction bit (DIR) is used for acceptance filtering.
            theMessageDirectio=0x00000000,     ///<The message direction bit (DIR) has no effect on acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MdirVal> mdir{}; 
        namespace MdirValC{
            constexpr Register::FieldValue<decltype(mdir),MdirVal::theMessageDirectio> theMessageDirectio{};
            constexpr Register::FieldValue<decltype(mdir),MdirVal::theMessageDirectio> theMessageDirectio{};
        }
        ///Mask extend identifier
        enum class MxtdVal {
            theExtendedIdentif=0x00000001,     ///<The extended identifier bit (IDE) is used for acceptance filtering.
            theExtendedIdentif=0x00000000,     ///<The extended identifier bit (IDE) has no effect on acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MxtdVal> mxtd{}; 
        namespace MxtdValC{
            constexpr Register::FieldValue<decltype(mxtd),MxtdVal::theExtendedIdentif> theExtendedIdentif{};
            constexpr Register::FieldValue<decltype(mxtd),MxtdVal::theExtendedIdentif> theExtendedIdentif{};
        }
    }
    namespace Noneif2Msk2{    ///<Message interface 1 mask 2
        using Addr = Register::Address<0x400a408c,0xffff2000,0,unsigned>;
        ///Identifier mask 0 = The corresponding bit in the identifier of the message can not inhibit the match in the acceptance filtering. 1 = The corresponding identifier bit is used for acceptance filtering.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk2816{}; 
        namespace Msk2816ValC{
        }
        ///Mask message direction
        enum class MdirVal {
            theMessageDirectio=0x00000001,     ///<The message direction bit (DIR) is used for acceptance filtering.
            theMessageDirectio=0x00000000,     ///<The message direction bit (DIR) has no effect on acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MdirVal> mdir{}; 
        namespace MdirValC{
            constexpr Register::FieldValue<decltype(mdir),MdirVal::theMessageDirectio> theMessageDirectio{};
            constexpr Register::FieldValue<decltype(mdir),MdirVal::theMessageDirectio> theMessageDirectio{};
        }
        ///Mask extend identifier
        enum class MxtdVal {
            theExtendedIdentif=0x00000001,     ///<The extended identifier bit (IDE) is used for acceptance filtering.
            theExtendedIdentif=0x00000000,     ///<The extended identifier bit (IDE) has no effect on acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MxtdVal> mxtd{}; 
        namespace MxtdValC{
            constexpr Register::FieldValue<decltype(mxtd),MxtdVal::theExtendedIdentif> theExtendedIdentif{};
            constexpr Register::FieldValue<decltype(mxtd),MxtdVal::theExtendedIdentif> theExtendedIdentif{};
        }
    }
    namespace Noneif1Arb1{    ///<Message interface 1 arbitration 1
        using Addr = Register::Address<0x400a4030,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id150{}; 
        namespace Id150ValC{
        }
    }
    namespace Noneif2Arb1{    ///<Message interface 1 arbitration 1
        using Addr = Register::Address<0x400a4090,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id150{}; 
        namespace Id150ValC{
        }
    }
    namespace Noneif1Arb2{    ///<Message interface 1 arbitration 2
        using Addr = Register::Address<0x400a4034,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id2816{}; 
        namespace Id2816ValC{
        }
        ///Message direction
        enum class DirVal {
            directionEqTransmit=0x00000001,     ///<Direction = transmit. On TXRQST, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TXRQST bit of this Message Object is set (if RMTEN = one).
            directionEqReceive=0x00000000,     ///<Direction = receive. On TXRQST, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir),DirVal::directionEqTransmit> directionEqTransmit{};
            constexpr Register::FieldValue<decltype(dir),DirVal::directionEqReceive> directionEqReceive{};
        }
        ///Extend identifier
        enum class XtdVal {
            the29BitExtended=0x00000001,     ///<The 29-bit extended identifier will be used for this message object.
            the11BitStandard=0x00000000,     ///<The 11-bit standard identifier will be used for this message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,XtdVal> xtd{}; 
        namespace XtdValC{
            constexpr Register::FieldValue<decltype(xtd),XtdVal::the29BitExtended> the29BitExtended{};
            constexpr Register::FieldValue<decltype(xtd),XtdVal::the11BitStandard> the11BitStandard{};
        }
        ///Message valid The CPU must reset the MSGVAL bit of all unused Messages Objects during the initialization before it resets bit INIT in the CAN Control Register. This bit must also be reset before the identifier ID28:0, the control bits XTD, DIR, or the Data Length Code DLC3:0 are modified, or if the Messages Object is no longer required.
        enum class MsgvalVal {
            theMessageObjectI=0x00000001,     ///<The message object is configured and should be considered by the message handler.
            theMessageObjectI=0x00000000,     ///<The message object is ignored by the message handler.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MsgvalVal> msgval{}; 
        namespace MsgvalValC{
            constexpr Register::FieldValue<decltype(msgval),MsgvalVal::theMessageObjectI> theMessageObjectI{};
            constexpr Register::FieldValue<decltype(msgval),MsgvalVal::theMessageObjectI> theMessageObjectI{};
        }
    }
    namespace Noneif2Arb2{    ///<Message interface 1 arbitration 2
        using Addr = Register::Address<0x400a4094,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id2816{}; 
        namespace Id2816ValC{
        }
        ///Message direction
        enum class DirVal {
            directionEqTransmit=0x00000001,     ///<Direction = transmit. On TXRQST, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TXRQST bit of this Message Object is set (if RMTEN = one).
            directionEqReceive=0x00000000,     ///<Direction = receive. On TXRQST, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir),DirVal::directionEqTransmit> directionEqTransmit{};
            constexpr Register::FieldValue<decltype(dir),DirVal::directionEqReceive> directionEqReceive{};
        }
        ///Extend identifier
        enum class XtdVal {
            the29BitExtended=0x00000001,     ///<The 29-bit extended identifier will be used for this message object.
            the11BitStandard=0x00000000,     ///<The 11-bit standard identifier will be used for this message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,XtdVal> xtd{}; 
        namespace XtdValC{
            constexpr Register::FieldValue<decltype(xtd),XtdVal::the29BitExtended> the29BitExtended{};
            constexpr Register::FieldValue<decltype(xtd),XtdVal::the11BitStandard> the11BitStandard{};
        }
        ///Message valid The CPU must reset the MSGVAL bit of all unused Messages Objects during the initialization before it resets bit INIT in the CAN Control Register. This bit must also be reset before the identifier ID28:0, the control bits XTD, DIR, or the Data Length Code DLC3:0 are modified, or if the Messages Object is no longer required.
        enum class MsgvalVal {
            theMessageObjectI=0x00000001,     ///<The message object is configured and should be considered by the message handler.
            theMessageObjectI=0x00000000,     ///<The message object is ignored by the message handler.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MsgvalVal> msgval{}; 
        namespace MsgvalValC{
            constexpr Register::FieldValue<decltype(msgval),MsgvalVal::theMessageObjectI> theMessageObjectI{};
            constexpr Register::FieldValue<decltype(msgval),MsgvalVal::theMessageObjectI> theMessageObjectI{};
        }
    }
    namespace Noneif1Mctrl{    ///<Message interface 1 message control
        using Addr = Register::Address<0x400a4038,0xffff0070,0,unsigned>;
        ///Data length code The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message. 0000 to 1000 = Data frame has 0 - 8 data bytes. 1001 to 1111 = Data frame has 8 data bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc30{}; 
        namespace Dlc30ValC{
        }
        ///End of buffer
        enum class EobVal {
            singleMessageObjec=0x00000001,     ///<Single message object or last message object of a FIFO buffer.
            messageObjectBelon=0x00000000,     ///<Message object belongs to a FIFO buffer and is not the last message object of that FIFO buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EobVal> eob{}; 
        namespace EobValC{
            constexpr Register::FieldValue<decltype(eob),EobVal::singleMessageObjec> singleMessageObjec{};
            constexpr Register::FieldValue<decltype(eob),EobVal::messageObjectBelon> messageObjectBelon{};
        }
        ///Transmit request
        enum class TxrqstVal {
            request=0x00000001,     ///<The transmission of this message object is requested and is not yet done
            wait=0x00000000,     ///<This message object is not waiting for transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::request> request{};
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::wait> wait{};
        }
        ///Remote enable
        enum class RmtenVal {
            txrqstset=0x00000001,     ///<At the reception of a remote frame, TXRQST is set.
            unchanged=0x00000000,     ///<At the reception of a remote frame, TXRQST is left unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RmtenVal> rmten{}; 
        namespace RmtenValC{
            constexpr Register::FieldValue<decltype(rmten),RmtenVal::txrqstset> txrqstset{};
            constexpr Register::FieldValue<decltype(rmten),RmtenVal::unchanged> unchanged{};
        }
        ///Receive interrupt enable
        enum class RxieVal {
            intpndset=0x00000001,     ///<INTPND will be set after successful reception of a frame.
            unchanged=0x00000000,     ///<INTPND will be left unchanged after successful reception of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxieVal> rxie{}; 
        namespace RxieValC{
            constexpr Register::FieldValue<decltype(rxie),RxieVal::intpndset> intpndset{};
            constexpr Register::FieldValue<decltype(rxie),RxieVal::unchanged> unchanged{};
        }
        ///Transmit interrupt enable
        enum class TxieVal {
            intpndset=0x00000001,     ///<INTPND will be set after a successful reception of a frame.
            unchanged=0x00000000,     ///<The INTPND bit will be left unchanged after a successful reception of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxieVal> txie{}; 
        namespace TxieValC{
            constexpr Register::FieldValue<decltype(txie),TxieVal::intpndset> intpndset{};
            constexpr Register::FieldValue<decltype(txie),TxieVal::unchanged> unchanged{};
        }
        ///Use acceptance mask If UMASK is set to 1, the message object's mask bits have to be programmed during initialization of the message object before MAGVAL is set to 1.
        enum class UmaskVal {
            useMaskMsk280=0x00000001,     ///<Use mask (MSK[28:0], MXTD, and MDIR) for acceptance filtering.
            maskIgnored=0x00000000,     ///<Mask ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UmaskVal> umask{}; 
        namespace UmaskValC{
            constexpr Register::FieldValue<decltype(umask),UmaskVal::useMaskMsk280> useMaskMsk280{};
            constexpr Register::FieldValue<decltype(umask),UmaskVal::maskIgnored> maskIgnored{};
        }
        ///Interrupt pending
        enum class IntpndVal {
            intsource=0x00000001,     ///<This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
            nointsource=0x00000000,     ///<This message object is not the source of an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,IntpndVal> intpnd{}; 
        namespace IntpndValC{
            constexpr Register::FieldValue<decltype(intpnd),IntpndVal::intsource> intsource{};
            constexpr Register::FieldValue<decltype(intpnd),IntpndVal::nointsource> nointsource{};
        }
        ///Message lost (only valid for message objects in the direction receive).
        enum class MsglstVal {
            theMessageHandler=0x00000001,     ///<The Message Handler stored a new message into this object when NEWDAT was still set, the CPU has lost a message.
            noMessageLostSinc=0x00000000,     ///<No message lost since this bit was reset last by the CPU.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MsglstVal> msglst{}; 
        namespace MsglstValC{
            constexpr Register::FieldValue<decltype(msglst),MsglstVal::theMessageHandler> theMessageHandler{};
            constexpr Register::FieldValue<decltype(msglst),MsglstVal::noMessageLostSinc> noMessageLostSinc{};
        }
        ///New data
        enum class NewdatVal {
            theMessageHandler=0x00000001,     ///<The message handler or the CPU has written new data into the data portion of this message object.
            noNewDataHasBeen=0x00000000,     ///<No new data has been written into the data portion of this message object by the message handler since this flag was cleared last by the CPU.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::theMessageHandler> theMessageHandler{};
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::noNewDataHasBeen> noNewDataHasBeen{};
        }
    }
    namespace Noneif2Mctrl{    ///<Message interface 1 message control
        using Addr = Register::Address<0x400a4098,0xffff0070,0,unsigned>;
        ///Data length code The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message. 0000 to 1000 = Data frame has 0 - 8 data bytes. 1001 to 1111 = Data frame has 8 data bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc30{}; 
        namespace Dlc30ValC{
        }
        ///End of buffer
        enum class EobVal {
            singleMessageObjec=0x00000001,     ///<Single message object or last message object of a FIFO buffer.
            messageObjectBelon=0x00000000,     ///<Message object belongs to a FIFO buffer and is not the last message object of that FIFO buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EobVal> eob{}; 
        namespace EobValC{
            constexpr Register::FieldValue<decltype(eob),EobVal::singleMessageObjec> singleMessageObjec{};
            constexpr Register::FieldValue<decltype(eob),EobVal::messageObjectBelon> messageObjectBelon{};
        }
        ///Transmit request
        enum class TxrqstVal {
            request=0x00000001,     ///<The transmission of this message object is requested and is not yet done
            wait=0x00000000,     ///<This message object is not waiting for transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::request> request{};
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::wait> wait{};
        }
        ///Remote enable
        enum class RmtenVal {
            txrqstset=0x00000001,     ///<At the reception of a remote frame, TXRQST is set.
            unchanged=0x00000000,     ///<At the reception of a remote frame, TXRQST is left unchanged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RmtenVal> rmten{}; 
        namespace RmtenValC{
            constexpr Register::FieldValue<decltype(rmten),RmtenVal::txrqstset> txrqstset{};
            constexpr Register::FieldValue<decltype(rmten),RmtenVal::unchanged> unchanged{};
        }
        ///Receive interrupt enable
        enum class RxieVal {
            intpndset=0x00000001,     ///<INTPND will be set after successful reception of a frame.
            unchanged=0x00000000,     ///<INTPND will be left unchanged after successful reception of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxieVal> rxie{}; 
        namespace RxieValC{
            constexpr Register::FieldValue<decltype(rxie),RxieVal::intpndset> intpndset{};
            constexpr Register::FieldValue<decltype(rxie),RxieVal::unchanged> unchanged{};
        }
        ///Transmit interrupt enable
        enum class TxieVal {
            intpndset=0x00000001,     ///<INTPND will be set after a successful reception of a frame.
            unchanged=0x00000000,     ///<The INTPND bit will be left unchanged after a successful reception of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxieVal> txie{}; 
        namespace TxieValC{
            constexpr Register::FieldValue<decltype(txie),TxieVal::intpndset> intpndset{};
            constexpr Register::FieldValue<decltype(txie),TxieVal::unchanged> unchanged{};
        }
        ///Use acceptance mask If UMASK is set to 1, the message object's mask bits have to be programmed during initialization of the message object before MAGVAL is set to 1.
        enum class UmaskVal {
            useMaskMsk280=0x00000001,     ///<Use mask (MSK[28:0], MXTD, and MDIR) for acceptance filtering.
            maskIgnored=0x00000000,     ///<Mask ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UmaskVal> umask{}; 
        namespace UmaskValC{
            constexpr Register::FieldValue<decltype(umask),UmaskVal::useMaskMsk280> useMaskMsk280{};
            constexpr Register::FieldValue<decltype(umask),UmaskVal::maskIgnored> maskIgnored{};
        }
        ///Interrupt pending
        enum class IntpndVal {
            intsource=0x00000001,     ///<This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
            nointsource=0x00000000,     ///<This message object is not the source of an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,IntpndVal> intpnd{}; 
        namespace IntpndValC{
            constexpr Register::FieldValue<decltype(intpnd),IntpndVal::intsource> intsource{};
            constexpr Register::FieldValue<decltype(intpnd),IntpndVal::nointsource> nointsource{};
        }
        ///Message lost (only valid for message objects in the direction receive).
        enum class MsglstVal {
            theMessageHandler=0x00000001,     ///<The Message Handler stored a new message into this object when NEWDAT was still set, the CPU has lost a message.
            noMessageLostSinc=0x00000000,     ///<No message lost since this bit was reset last by the CPU.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MsglstVal> msglst{}; 
        namespace MsglstValC{
            constexpr Register::FieldValue<decltype(msglst),MsglstVal::theMessageHandler> theMessageHandler{};
            constexpr Register::FieldValue<decltype(msglst),MsglstVal::noMessageLostSinc> noMessageLostSinc{};
        }
        ///New data
        enum class NewdatVal {
            theMessageHandler=0x00000001,     ///<The message handler or the CPU has written new data into the data portion of this message object.
            noNewDataHasBeen=0x00000000,     ///<No new data has been written into the data portion of this message object by the message handler since this flag was cleared last by the CPU.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::theMessageHandler> theMessageHandler{};
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::noNewDataHasBeen> noNewDataHasBeen{};
        }
    }
    namespace Noneif1Da1{    ///<Message interface  data A1
        using Addr = Register::Address<0x400a403c,0xffff0000,0,unsigned>;
        ///Data byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Data byte 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace Noneif2Da1{    ///<Message interface  data A1
        using Addr = Register::Address<0x400a409c,0xffff0000,0,unsigned>;
        ///Data byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Data byte 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace Noneif1Da2{    ///<Message interface 1 data A2
        using Addr = Register::Address<0x400a4040,0xffff0000,0,unsigned>;
        ///Data byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        ///Data byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
    }
    namespace Noneif2Da2{    ///<Message interface 1 data A2
        using Addr = Register::Address<0x400a40a0,0xffff0000,0,unsigned>;
        ///Data byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        ///Data byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
    }
    namespace Noneif1Db1{    ///<Message interface 1 data B1
        using Addr = Register::Address<0x400a4044,0xffff0000,0,unsigned>;
        ///Data byte 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        ///Data byte 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
    }
    namespace Noneif2Db1{    ///<Message interface 1 data B1
        using Addr = Register::Address<0x400a40a4,0xffff0000,0,unsigned>;
        ///Data byte 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        ///Data byte 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
    }
    namespace Noneif1Db2{    ///<Message interface 1 data B2
        using Addr = Register::Address<0x400a4048,0xffff0000,0,unsigned>;
        ///Data byte 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        ///Data byte 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
    }
    namespace Noneif2Db2{    ///<Message interface 1 data B2
        using Addr = Register::Address<0x400a40a8,0xffff0000,0,unsigned>;
        ///Data byte 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        ///Data byte 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
    }
    namespace Nonetxreq1{    ///<Transmission request 1
        using Addr = Register::Address<0x400a4100,0xffff0000,0,unsigned>;
        ///Transmission request bit of message objects 16 to 1. 0 = This message object is not waiting for transmission. 1 = The transmission of this message object is requested and not yet done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst161{}; 
        namespace Txrqst161ValC{
        }
    }
    namespace Nonetxreq2{    ///<Transmission request 2
        using Addr = Register::Address<0x400a4104,0xffff0000,0,unsigned>;
        ///Transmission request bit of message objects 32 to 17. 0 = This message object is not waiting for transmission. 1 = The transmission of this message object is requested and not yet done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst3217{}; 
        namespace Txrqst3217ValC{
        }
    }
    namespace Nonend1{    ///<New data 1
        using Addr = Register::Address<0x400a4120,0xffff0000,0,unsigned>;
        ///New data bits of message objects 16 to 1. 0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the CPU. 1 = The Message Handler or the CPU has written new data into the data portion of this Message Object.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdat161{}; 
        namespace Newdat161ValC{
        }
    }
    namespace Nonend2{    ///<New data 2
        using Addr = Register::Address<0x400a4124,0xffff0000,0,unsigned>;
        ///New data bits of message objects 32 to 17. 0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the CPU. 1 = The Message Handler or the CPU has written new data into the data portion of this Message Object.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdat3217{}; 
        namespace Newdat3217ValC{
        }
    }
    namespace Noneir1{    ///<Interrupt pending 1
        using Addr = Register::Address<0x400a4140,0xffff0000,0,unsigned>;
        ///Interrupt pending bits of message objects 16 to 1. 0 = This message object is ignored by the message handler. 1 = This message object is the source of an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd161{}; 
        namespace Intpnd161ValC{
        }
    }
    namespace Noneir2{    ///<Interrupt pending 2
        using Addr = Register::Address<0x400a4144,0xffff0000,0,unsigned>;
        ///Interrupt pending bits of message objects 32 to 17. 0 = This message object is ignored by the message handler. 1 = This message object is the source of an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd3217{}; 
        namespace Intpnd3217ValC{
        }
    }
    namespace Nonemsgv1{    ///<Message valid 1
        using Addr = Register::Address<0x400a4160,0xffff0000,0,unsigned>;
        ///Message valid bits of message objects 16 to 1. 0 = This message object is ignored by the message handler. 1 = This message object is configured and should be considered by the message handler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval161{}; 
        namespace Msgval161ValC{
        }
    }
    namespace Nonemsgv2{    ///<Message valid 2
        using Addr = Register::Address<0x400a4164,0xffff0000,0,unsigned>;
        ///Message valid bits of message objects 32 to 17. 0 = This message object is ignored by the message handler. 1 = This message object is configured and should be considered by the message handler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval3217{}; 
        namespace Msgval3217ValC{
        }
    }
    namespace Noneclkdiv{    ///<CAN clock divider register
        using Addr = Register::Address<0x400a4180,0xfffffff0,0,unsigned>;
        ///Clock divider value  CAN_CLK = PCLK/(2CLKDIVVAL  -1+1)  0000: CAN_CLK = PCLK divided by 1.  0001: CAN_CLK = PCLK divided by 2.  0010: CAN_CLK = PCLK divided by 3.  0010: CAN_CLK = PCLK divided by 4.  0011: CAN_CLK = PCLK divided by 5. 0100: CAN_CLK = PCLK divided by 9. 0101: CAN_CLK = PCLK divided by 17. ...  1111: CAN_CLK = PCLK divided by 16385.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clkdivval{}; 
        namespace ClkdivvalValC{
        }
    }
}
