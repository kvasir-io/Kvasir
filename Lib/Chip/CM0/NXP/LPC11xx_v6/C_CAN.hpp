#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10398 Chapter title=LPC111x/LPC11Cxx
C_CAN controller Modification date=9/19/2011 Major revision=7 Minor revision=not available 
    namespace Nonecancntl{    ///<CAN control
        using Addr = Register::Address<0x40050000,0xffffff10,0,unsigned>;
        ///Initialization
        enum class InitVal {
            normalOperation=0x00000000,     ///<Normal operation.
            initialization=0x00000001,     ///<Initialization is started. On reset, software needs to initialize the CAN controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InitVal> init{}; 
        namespace InitValC{
            constexpr Register::FieldValue<decltype(init),InitVal::normalOperation> normalOperation{};
            constexpr Register::FieldValue<decltype(init),InitVal::initialization> initialization{};
        }
        ///Module interrupt enable
        enum class IeVal {
            disableCanInterrup=0x00000000,     ///<Disable CAN interrupts. The interrupt line is always HIGH.
            enableCanInterrupt=0x00000001,     ///<Enable CAN interrupts. The interrupt line is set to LOW and remains LOW until all pending interrupts are cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IeVal> ie{}; 
        namespace IeValC{
            constexpr Register::FieldValue<decltype(ie),IeVal::disableCanInterrup> disableCanInterrup{};
            constexpr Register::FieldValue<decltype(ie),IeVal::enableCanInterrupt> enableCanInterrupt{};
        }
        ///Status change interrupt enable
        enum class SieVal {
            disableStatusChang=0x00000000,     ///<Disable status change interrupts. No status change interrupt will be generated.
            enableStatusChange=0x00000001,     ///<Enable status change interrupts. A status change interrupt will be generated when a message transfer is successfully completed or a CAN bus error is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SieVal> sie{}; 
        namespace SieValC{
            constexpr Register::FieldValue<decltype(sie),SieVal::disableStatusChang> disableStatusChang{};
            constexpr Register::FieldValue<decltype(sie),SieVal::enableStatusChange> enableStatusChange{};
        }
        ///Error interrupt enable
        enum class EieVal {
            disableErrorInterr=0x00000000,     ///<Disable error interrupt. No error status interrupt will be generated.
            enableErrorInterru=0x00000001,     ///<Enable error interrupt. A change in the bits BOFF or EWARN in the CANSTAT registers will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EieVal> eie{}; 
        namespace EieValC{
            constexpr Register::FieldValue<decltype(eie),EieVal::disableErrorInterr> disableErrorInterr{};
            constexpr Register::FieldValue<decltype(eie),EieVal::enableErrorInterru> enableErrorInterru{};
        }
        ///Disable automatic retransmission
        enum class DarVal {
            enabled=0x00000000,     ///<Automatic retransmission of disturbed messages enabled.
            disabled=0x00000001,     ///<Automatic retransmission disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DarVal> dar{}; 
        namespace DarValC{
            constexpr Register::FieldValue<decltype(dar),DarVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(dar),DarVal::disabled> disabled{};
        }
        ///Configuration change enable
        enum class CceVal {
            noaccess=0x00000000,     ///<The CPU has no write access to the bit timing register.
            access=0x00000001,     ///<The CPU has write access to the CANBT register while the INIT bit is one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CceVal> cce{}; 
        namespace CceValC{
            constexpr Register::FieldValue<decltype(cce),CceVal::noaccess> noaccess{};
            constexpr Register::FieldValue<decltype(cce),CceVal::access> access{};
        }
        ///Test mode enable
        enum class TestVal {
            normalOperation=0x00000000,     ///<Normal operation.
            testMode=0x00000001,     ///<Test mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TestVal> test{}; 
        namespace TestValC{
            constexpr Register::FieldValue<decltype(test),TestVal::normalOperation> normalOperation{};
            constexpr Register::FieldValue<decltype(test),TestVal::testMode> testMode{};
        }
    }
    namespace Nonecanstat{    ///<Status register
        using Addr = Register::Address<0x40050004,0xffffff00,0,unsigned>;
        ///Last error code Type of the last error to occur on the CAN bus.The LEC field holds a code which indicates the type of the last error to occur on the CAN bus. This field will be cleared to 0 when a message has been transferred (reception or transmission) without error. The unused code 111 may be written by the CPU to check for updates.
        enum class LecVal {
            noError=0x00000000,     ///<No error.
            stuffError=0x00000001,     ///<Stuff error: More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed.
            formError=0x00000002,     ///<Form error: A fixed format part of a received frame has the wrong format.
            ackerror=0x00000003,     ///<AckError: The message this CAN core transmitted was not acknowledged.
            bit1error=0x00000004,     ///<Bit1Error: During the transmission of a message (with the exception of the arbitration field), the device wanted to send a HIGH/recessive level (bit of logical value 1), but the monitored bus value was LOW/dominant.
            bit0error=0x00000005,     ///<Bit0Error: During the transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device wanted to send a LOW/dominant level (data or identifier bit logical value 0), but the monitored Bus value was HIGH/recessive. During busoff recovery this status is set each time a sequence of 11 HIGH/recessive bits has been monitored. This enables the CPU to monitor the proceeding of the busoff recovery sequence (indicating the bus is not stuck at LOW/dominant or continuously disturbed).
            crcerror=0x00000006,     ///<CRCError: The CRC checksum was incorrect in the message received.
            unused=0x00000007,     ///<Unused: No CAN bus event was detected (written by the CPU).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,LecVal> lec{}; 
        namespace LecValC{
            constexpr Register::FieldValue<decltype(lec),LecVal::noError> noError{};
            constexpr Register::FieldValue<decltype(lec),LecVal::stuffError> stuffError{};
            constexpr Register::FieldValue<decltype(lec),LecVal::formError> formError{};
            constexpr Register::FieldValue<decltype(lec),LecVal::ackerror> ackerror{};
            constexpr Register::FieldValue<decltype(lec),LecVal::bit1error> bit1error{};
            constexpr Register::FieldValue<decltype(lec),LecVal::bit0error> bit0error{};
            constexpr Register::FieldValue<decltype(lec),LecVal::crcerror> crcerror{};
            constexpr Register::FieldValue<decltype(lec),LecVal::unused> unused{};
        }
        ///Transmitted a message successfully This bit is reset by the CPU. It is never reset by the CAN controller.
        enum class TxokVal {
            notransmit=0x00000000,     ///<Since this bit was reset by the CPU, no message has been successfully transmitted.
            transmit=0x00000001,     ///<Since this bit was last reset by the CPU, a message has been successfully transmitted (error free and acknowledged by at least one other node).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxokVal> txok{}; 
        namespace TxokValC{
            constexpr Register::FieldValue<decltype(txok),TxokVal::notransmit> notransmit{};
            constexpr Register::FieldValue<decltype(txok),TxokVal::transmit> transmit{};
        }
        ///Received a message successfully This bit is reset by the CPU. It is never reset by the CAN controller.
        enum class RxokVal {
            notransmit=0x00000000,     ///<Since this bit was last reset by the CPU, no message has been successfully transmitted.
            transmit=0x00000001,     ///<Since this bit was last set to zero by the CPU, a message has been successfully received independent of the result of acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RxokVal> rxok{}; 
        namespace RxokValC{
            constexpr Register::FieldValue<decltype(rxok),RxokVal::notransmit> notransmit{};
            constexpr Register::FieldValue<decltype(rxok),RxokVal::transmit> transmit{};
        }
        ///Error passive
        enum class EpassVal {
            active=0x00000000,     ///<The CAN controller is in the error active state.
            passive=0x00000001,     ///<The CAN controller is in the error passive state as defined in the CAN 2.0 specification.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EpassVal> epass{}; 
        namespace EpassValC{
            constexpr Register::FieldValue<decltype(epass),EpassVal::active> active{};
            constexpr Register::FieldValue<decltype(epass),EpassVal::passive> passive{};
        }
        ///Warning status
        enum class EwarnVal {
            belowwarninglim=0x00000000,     ///<Both error counters are below the error warning limit of 96.
            warninglim=0x00000001,     ///<At least one of the error counters in the EML has reached the error warning limit of 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EwarnVal> ewarn{}; 
        namespace EwarnValC{
            constexpr Register::FieldValue<decltype(ewarn),EwarnVal::belowwarninglim> belowwarninglim{};
            constexpr Register::FieldValue<decltype(ewarn),EwarnVal::warninglim> warninglim{};
        }
        ///Busoff status
        enum class BoffVal {
            notbusoff=0x00000000,     ///<The CAN module is not in busoff.
            busoff=0x00000001,     ///<The CAN controller is in busoff state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BoffVal> boff{}; 
        namespace BoffValC{
            constexpr Register::FieldValue<decltype(boff),BoffVal::notbusoff> notbusoff{};
            constexpr Register::FieldValue<decltype(boff),BoffVal::busoff> busoff{};
        }
    }
    namespace Nonecanec{    ///<Error counter
        using Addr = Register::Address<0x40050008,0xffff0000,0,unsigned>;
        ///Transmit error counter Current value of the transmit error counter (maximum value 255)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec70{}; 
        namespace Tec70ValC{
        }
        ///Receive error counter Current value of the receive error counter (maximum value 127).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rec60{}; 
        namespace Rec60ValC{
        }
        ///Receive error passive
        enum class RpVal {
            belowerrorpassive=0x00000000,     ///<The receive counter is below the error passive level.
            errorpassive=0x00000001,     ///<The receive counter has reached the error passive level as defined in the  CAN2.0 specification.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,RpVal> rp{}; 
        namespace RpValC{
            constexpr Register::FieldValue<decltype(rp),RpVal::belowerrorpassive> belowerrorpassive{};
            constexpr Register::FieldValue<decltype(rp),RpVal::errorpassive> errorpassive{};
        }
    }
    namespace Nonecanbt{    ///<Bit timing register
        using Addr = Register::Address<0x4005000c,0xffff8000,0,unsigned>;
        ///Baud rate prescaler The value by which the oscillator frequency is divided for generating the bit time quanta. The bit time is built up from a multiple of this quanta. Valid values for the Baud Rate Prescaler are 0 to 63.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> brp{}; 
        namespace BrpValC{
        }
        ///(Re)synchronization jump width Valid programmed values are 0 to 3.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sjw{}; 
        namespace SjwValC{
        }
        ///Time segment before the sample point Valid values are 1 to 15.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        namespace Tseg1ValC{
        }
        ///Time segment after the sample point Valid values are 0 to 7.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tseg2{}; 
        namespace Tseg2ValC{
        }
    }
    namespace Nonecanint{    ///<Interrupt register
        using Addr = Register::Address<0x40050010,0xffff0000,0,unsigned>;
        ///0x0000 = No interrupt is pending. 0x0001 - 0x0020 = Number of message object which caused the interrupt. 0x0021 - 0x7FFF = Unused 0x8000 = Status interrupt 0x8001 - 0xFFFF = Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intid{}; 
        namespace IntidValC{
        }
    }
    namespace Nonecantest{    ///<Test register
        using Addr = Register::Address<0x40050014,0xffffff03,0,unsigned>;
        ///Basic mode
        enum class BasicVal {
            basicModeDisabled=0x00000000,     ///<Basic mode disabled.
            txrx=0x00000001,     ///<IF1 registers used as TX buffer, IF2 registers used as RX buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BasicVal> basic{}; 
        namespace BasicValC{
            constexpr Register::FieldValue<decltype(basic),BasicVal::basicModeDisabled> basicModeDisabled{};
            constexpr Register::FieldValue<decltype(basic),BasicVal::txrx> txrx{};
        }
        ///Silent mode
        enum class SilentVal {
            normalOperation=0x00000000,     ///<Normal operation.
            silent=0x00000001,     ///<The module is in silent mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SilentVal> silent{}; 
        namespace SilentValC{
            constexpr Register::FieldValue<decltype(silent),SilentVal::normalOperation> normalOperation{};
            constexpr Register::FieldValue<decltype(silent),SilentVal::silent> silent{};
        }
        ///Loop back mode
        enum class LbackVal {
            disabled=0x00000000,     ///<Loop back mode is disabled.
            enabled=0x00000001,     ///<Loop back mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LbackVal> lback{}; 
        namespace LbackValC{
            constexpr Register::FieldValue<decltype(lback),LbackVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lback),LbackVal::enabled> enabled{};
        }
        ///Control of CAN_TXD pins
        enum class TxVal {
            level=0x00000000,     ///<Level at the CAN_TXD pin is controlled by the CAN controller. This is the value at reset.
            txd=0x00000001,     ///<The sample point can be monitored at the CAN_TXD pin.
            low=0x00000002,     ///<CAN_TXD pin is driven LOW/dominant.
            high=0x00000003,     ///<CAN_TXD pin is driven HIGH/recessive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx),TxVal::level> level{};
            constexpr Register::FieldValue<decltype(tx),TxVal::txd> txd{};
            constexpr Register::FieldValue<decltype(tx),TxVal::low> low{};
            constexpr Register::FieldValue<decltype(tx),TxVal::high> high{};
        }
        ///Monitors the actual value of the CAN_RXD pin.
        enum class RxVal {
            recessive=0x00000000,     ///<The CAN bus is recessive (CAN_RXD = 1).
            dormant=0x00000001,     ///<The CAN bus is dominant (CAN_RXD = 0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxVal> rx{}; 
        namespace RxValC{
            constexpr Register::FieldValue<decltype(rx),RxVal::recessive> recessive{};
            constexpr Register::FieldValue<decltype(rx),RxVal::dormant> dormant{};
        }
    }
    namespace Nonecanbrpe{    ///<Baud rate prescaler extension register
        using Addr = Register::Address<0x40050018,0xfffffff0,0,unsigned>;
        ///Baud rate prescaler extension By programming BRPE the Baud Rate Prescaler can be extended to values up to 1023. Hardware interprets the value as the value of BRPE (MSBs) and BRP (LSBs) plus one. Allowed values are 0 to 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brpe{}; 
        namespace BrpeValC{
        }
    }
    namespace Nonecanif1Cmdreq{    ///<Message interface  command request
        using Addr = Register::Address<0x40050020,0xffff7fc0,0,unsigned>;
        ///Message number 0x01 - 0x20 = Valid message numbers. The message object in the message RAM is selected for data transfer. 0x00 = Not a valid message number. This value is interpreted as 0x20.[1] 0x21 - 0x3F = Not a valid message number. This value is interpreted as 0x01 - 0x1F.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> mn{}; 
        namespace MnValC{
        }
        ///BUSY flag
        enum class BusyVal {
            zero=0x00000000,     ///<Set to zero by hardware when read/write action to this Command request register has finished.
            one=0x00000001,     ///<Set to one by hardware when writing to this Command request register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BusyVal> busy{}; 
        namespace BusyValC{
            constexpr Register::FieldValue<decltype(busy),BusyVal::zero> zero{};
            constexpr Register::FieldValue<decltype(busy),BusyVal::one> one{};
        }
    }
    namespace Nonecanif2Cmdreq{    ///<Message interface  command request
        using Addr = Register::Address<0x40050080,0xffff7fc0,0,unsigned>;
        ///Message number 0x01 - 0x20 = Valid message numbers. The message object in the message RAM is selected for data transfer. 0x00 = Not a valid message number. This value is interpreted as 0x20.[1] 0x21 - 0x3F = Not a valid message number. This value is interpreted as 0x01 - 0x1F.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> mn{}; 
        namespace MnValC{
        }
        ///BUSY flag
        enum class BusyVal {
            zero=0x00000000,     ///<Set to zero by hardware when read/write action to this Command request register has finished.
            one=0x00000001,     ///<Set to one by hardware when writing to this Command request register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BusyVal> busy{}; 
        namespace BusyValC{
            constexpr Register::FieldValue<decltype(busy),BusyVal::zero> zero{};
            constexpr Register::FieldValue<decltype(busy),BusyVal::one> one{};
        }
    }
    namespace Nonecanif1CmdmskW{    ///<Message interface 
command mask - write direction
        using Addr = Register::Address<0x40050024,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            dataBytes47Uncha=0x00000000,     ///<Data bytes 4-7 unchanged.
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB),DatabVal::dataBytes47Uncha> dataBytes47Uncha{};
            constexpr Register::FieldValue<decltype(dataB),DatabVal::transferDataBytes> transferDataBytes{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            dataBytes03Uncha=0x00000000,     ///<Data bytes 0-3 unchanged.
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA),DataaVal::dataBytes03Uncha> dataBytes03Uncha{};
            constexpr Register::FieldValue<decltype(dataA),DataaVal::transferDataBytes> transferDataBytes{};
        }
        ///Access transmission request bit
        enum class TxrqstVal {
            noTransmissionRequ=0x00000000,     ///<No transmission request. TXRQSRT bit unchanged in IF1/2_MCTRL. If a transmission is requested by programming this bit, the TXRQST bit in the CANIFn_MCTRL register is ignored.
            requestATransmissi=0x00000001,     ///<Request a transmission. Set the TXRQST bit IF1/2_MCTRL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::noTransmissionRequ> noTransmissionRequ{};
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::requestATransmissi> requestATransmissi{};
        }
        ///This bit is ignored in the write direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        namespace ClrintpndValC{
        }
        ///Access control bits
        enum class CtrlVal {
            unchanged=0x00000000,     ///<Control bits unchanged.
            transferControlBit=0x00000001,     ///<Transfer control bits to message object
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::transferControlBit> transferControlBit{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            unchanged=0x00000000,     ///<Arbitration bits unchanged.
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::transferIdentifier> transferIdentifier{};
        }
        ///Access mask bits
        enum class MaskVal {
            unchanged=0x00000000,     ///<Mask bits unchanged.
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask),MaskVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(mask),MaskVal::transferIdentifier> transferIdentifier{};
        }
        ///Write transfer Transfer data from the selected message buffer registers to the message object addressed by the command request register CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        namespace WrrdValC{
        }
    }
    namespace Nonecanif2CmdmskW{    ///<Message interface 
command mask - write direction
        using Addr = Register::Address<0x40050084,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            dataBytes47Uncha=0x00000000,     ///<Data bytes 4-7 unchanged.
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB),DatabVal::dataBytes47Uncha> dataBytes47Uncha{};
            constexpr Register::FieldValue<decltype(dataB),DatabVal::transferDataBytes> transferDataBytes{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            dataBytes03Uncha=0x00000000,     ///<Data bytes 0-3 unchanged.
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA),DataaVal::dataBytes03Uncha> dataBytes03Uncha{};
            constexpr Register::FieldValue<decltype(dataA),DataaVal::transferDataBytes> transferDataBytes{};
        }
        ///Access transmission request bit
        enum class TxrqstVal {
            noTransmissionRequ=0x00000000,     ///<No transmission request. TXRQSRT bit unchanged in IF1/2_MCTRL. If a transmission is requested by programming this bit, the TXRQST bit in the CANIFn_MCTRL register is ignored.
            requestATransmissi=0x00000001,     ///<Request a transmission. Set the TXRQST bit IF1/2_MCTRL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::noTransmissionRequ> noTransmissionRequ{};
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::requestATransmissi> requestATransmissi{};
        }
        ///This bit is ignored in the write direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        namespace ClrintpndValC{
        }
        ///Access control bits
        enum class CtrlVal {
            unchanged=0x00000000,     ///<Control bits unchanged.
            transferControlBit=0x00000001,     ///<Transfer control bits to message object
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::transferControlBit> transferControlBit{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            unchanged=0x00000000,     ///<Arbitration bits unchanged.
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::transferIdentifier> transferIdentifier{};
        }
        ///Access mask bits
        enum class MaskVal {
            unchanged=0x00000000,     ///<Mask bits unchanged.
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask),MaskVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(mask),MaskVal::transferIdentifier> transferIdentifier{};
        }
        ///Write transfer Transfer data from the selected message buffer registers to the message object addressed by the command request register CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        namespace WrrdValC{
        }
    }
    namespace Nonecanif1CmdmskR{    ///<Message interface  command mask - read direction
        using Addr = Register::Address<0x40050024,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            unchanged=0x00000000,     ///<Data bytes 4-7 unchanged.
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB),DatabVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataB),DatabVal::transferDataBytes> transferDataBytes{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            unchanged=0x00000000,     ///<Data bytes 0-3 unchanged.
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to IFx message buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA),DataaVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataA),DataaVal::transferDataBytes> transferDataBytes{};
        }
        ///Access new data bit
        enum class NewdatVal {
            unchanged=0x00000000,     ///<NEWDAT bit remains unchanged. A read access to a message object can be combined with the reset of the control bits INTPND and NEWDAT in IF1/2_MCTRL. The values of these bits transferred to the IFx Message Control Register always reflect the status before resetting these bits.
            clearNewdatBitIn=0x00000001,     ///<Clear NEWDAT bit in the message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::clearNewdatBitIn> clearNewdatBitIn{};
        }
        ///Clear interrupt pending bit.
        enum class ClrintpndVal {
            unchanged=0x00000000,     ///<INTPND bit remains unchanged.
            clearIntpndBitIn=0x00000001,     ///<Clear INTPND bit in the message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrintpndVal> clrintpnd{}; 
        namespace ClrintpndValC{
            constexpr Register::FieldValue<decltype(clrintpnd),ClrintpndVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(clrintpnd),ClrintpndVal::clearIntpndBitIn> clearIntpndBitIn{};
        }
        ///Access control bits
        enum class CtrlVal {
            unchanged=0x00000000,     ///<Control bits unchanged.
            transferControlBit=0x00000001,     ///<Transfer control bits to IFx message buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::transferControlBit> transferControlBit{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            unchanged=0x00000000,     ///<Arbitration bits unchanged.
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::transferIdentifier> transferIdentifier{};
        }
        ///Access mask bits
        enum class MaskVal {
            unchanged=0x00000000,     ///<Mask bits unchanged.
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask),MaskVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(mask),MaskVal::transferIdentifier> transferIdentifier{};
        }
        ///Read transfer Transfer data from the message object addressed by the command request register to the selected message buffer registers CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        namespace WrrdValC{
        }
    }
    namespace Nonecanif2CmdmskR{    ///<Message interface  command mask - read direction
        using Addr = Register::Address<0x40050084,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            unchanged=0x00000000,     ///<Data bytes 4-7 unchanged.
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB),DatabVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataB),DatabVal::transferDataBytes> transferDataBytes{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            unchanged=0x00000000,     ///<Data bytes 0-3 unchanged.
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to IFx message buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA),DataaVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataA),DataaVal::transferDataBytes> transferDataBytes{};
        }
        ///Access new data bit
        enum class NewdatVal {
            unchanged=0x00000000,     ///<NEWDAT bit remains unchanged. A read access to a message object can be combined with the reset of the control bits INTPND and NEWDAT in IF1/2_MCTRL. The values of these bits transferred to the IFx Message Control Register always reflect the status before resetting these bits.
            clearNewdatBitIn=0x00000001,     ///<Clear NEWDAT bit in the message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::clearNewdatBitIn> clearNewdatBitIn{};
        }
        ///Clear interrupt pending bit.
        enum class ClrintpndVal {
            unchanged=0x00000000,     ///<INTPND bit remains unchanged.
            clearIntpndBitIn=0x00000001,     ///<Clear INTPND bit in the message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrintpndVal> clrintpnd{}; 
        namespace ClrintpndValC{
            constexpr Register::FieldValue<decltype(clrintpnd),ClrintpndVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(clrintpnd),ClrintpndVal::clearIntpndBitIn> clearIntpndBitIn{};
        }
        ///Access control bits
        enum class CtrlVal {
            unchanged=0x00000000,     ///<Control bits unchanged.
            transferControlBit=0x00000001,     ///<Transfer control bits to IFx message buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(ctrl),CtrlVal::transferControlBit> transferControlBit{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            unchanged=0x00000000,     ///<Arbitration bits unchanged.
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::transferIdentifier> transferIdentifier{};
        }
        ///Access mask bits
        enum class MaskVal {
            unchanged=0x00000000,     ///<Mask bits unchanged.
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask),MaskVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(mask),MaskVal::transferIdentifier> transferIdentifier{};
        }
        ///Read transfer Transfer data from the message object addressed by the command request register to the selected message buffer registers CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        namespace WrrdValC{
        }
    }
    namespace Nonecanif1Msk1{    ///<Message interface 1 mask 1
        using Addr = Register::Address<0x40050028,0xffff0000,0,unsigned>;
        ///Identifier mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk150{}; 
        namespace Msk150ValC{
        }
    }
    namespace Nonecanif2Msk1{    ///<Message interface 1 mask 1
        using Addr = Register::Address<0x40050088,0xffff0000,0,unsigned>;
        ///Identifier mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk150{}; 
        namespace Msk150ValC{
        }
    }
    namespace Nonecanif1Msk2{    ///<Message interface 1 mask 2
        using Addr = Register::Address<0x4005002c,0xffff2000,0,unsigned>;
        ///Identifier mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk2816{}; 
        namespace Msk2816ValC{
        }
        ///Mask message direction
        enum class MdirVal {
            noeffect=0x00000000,     ///<The message direction bit (DIR) has no effect on acceptance filtering.
            acceptancefiltering=0x00000001,     ///<The message direction bit (DIR) is used for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MdirVal> mdir{}; 
        namespace MdirValC{
            constexpr Register::FieldValue<decltype(mdir),MdirVal::noeffect> noeffect{};
            constexpr Register::FieldValue<decltype(mdir),MdirVal::acceptancefiltering> acceptancefiltering{};
        }
        ///Mask extend identifier
        enum class MxtdVal {
            noeffect=0x00000000,     ///<The extended identifier bit (XTD) has no effect on acceptance filtering.
            acceptancefiltering=0x00000001,     ///<The extended identifier bit (XTD) is used for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MxtdVal> mxtd{}; 
        namespace MxtdValC{
            constexpr Register::FieldValue<decltype(mxtd),MxtdVal::noeffect> noeffect{};
            constexpr Register::FieldValue<decltype(mxtd),MxtdVal::acceptancefiltering> acceptancefiltering{};
        }
    }
    namespace Nonecanif2Msk2{    ///<Message interface 1 mask 2
        using Addr = Register::Address<0x4005008c,0xffff2000,0,unsigned>;
        ///Identifier mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk2816{}; 
        namespace Msk2816ValC{
        }
        ///Mask message direction
        enum class MdirVal {
            noeffect=0x00000000,     ///<The message direction bit (DIR) has no effect on acceptance filtering.
            acceptancefiltering=0x00000001,     ///<The message direction bit (DIR) is used for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MdirVal> mdir{}; 
        namespace MdirValC{
            constexpr Register::FieldValue<decltype(mdir),MdirVal::noeffect> noeffect{};
            constexpr Register::FieldValue<decltype(mdir),MdirVal::acceptancefiltering> acceptancefiltering{};
        }
        ///Mask extend identifier
        enum class MxtdVal {
            noeffect=0x00000000,     ///<The extended identifier bit (XTD) has no effect on acceptance filtering.
            acceptancefiltering=0x00000001,     ///<The extended identifier bit (XTD) is used for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MxtdVal> mxtd{}; 
        namespace MxtdValC{
            constexpr Register::FieldValue<decltype(mxtd),MxtdVal::noeffect> noeffect{};
            constexpr Register::FieldValue<decltype(mxtd),MxtdVal::acceptancefiltering> acceptancefiltering{};
        }
    }
    namespace Nonecanif1Arb1{    ///<Message interface 1 arbitration 1
        using Addr = Register::Address<0x40050030,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id150{}; 
        namespace Id150ValC{
        }
    }
    namespace Nonecanif2Arb1{    ///<Message interface 1 arbitration 1
        using Addr = Register::Address<0x40050090,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id150{}; 
        namespace Id150ValC{
        }
    }
    namespace Nonecanif1Arb2{    ///<Message interface 1 arbitration 2
        using Addr = Register::Address<0x40050034,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id2816{}; 
        namespace Id2816ValC{
        }
        ///Message direction
        enum class DirVal {
            receive=0x00000000,     ///<Direction = receive. On TXRQST, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
            transmit=0x00000001,     ///<Direction = transmit. On TXRQST, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TXRQST bit of this Message Object is set (if RMTEN = one).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir),DirVal::receive> receive{};
            constexpr Register::FieldValue<decltype(dir),DirVal::transmit> transmit{};
        }
        ///Extend identifier
        enum class XtdVal {
            v11BitStandard=0x00000000,     ///<The 11-bit standard identifier will be used for this message object.
            v29BitExtended=0x00000001,     ///<The 29-bit extended identifier will be used for this message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,XtdVal> xtd{}; 
        namespace XtdValC{
            constexpr Register::FieldValue<decltype(xtd),XtdVal::v11BitStandard> v11BitStandard{};
            constexpr Register::FieldValue<decltype(xtd),XtdVal::v29BitExtended> v29BitExtended{};
        }
        ///Message valid The CPU must reset the MSGVAL bit of all unused Messages Objects during the initialization before it resets bit INIT in the CAN Control Register. This bit must also be reset before the identifier ID28:0, the control bits XTD, DIR, or the Data Length Code DLC3:0 are modified, or if the Messages Object is no longer required.
        enum class MsgvalVal {
            ignore=0x00000000,     ///<The message object is ignored by the message handler.
            configured=0x00000001,     ///<The message object is configured and should be considered by the message handler.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MsgvalVal> msgval{}; 
        namespace MsgvalValC{
            constexpr Register::FieldValue<decltype(msgval),MsgvalVal::ignore> ignore{};
            constexpr Register::FieldValue<decltype(msgval),MsgvalVal::configured> configured{};
        }
    }
    namespace Nonecanif2Arb2{    ///<Message interface 1 arbitration 2
        using Addr = Register::Address<0x40050094,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id2816{}; 
        namespace Id2816ValC{
        }
        ///Message direction
        enum class DirVal {
            receive=0x00000000,     ///<Direction = receive. On TXRQST, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
            transmit=0x00000001,     ///<Direction = transmit. On TXRQST, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TXRQST bit of this Message Object is set (if RMTEN = one).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir),DirVal::receive> receive{};
            constexpr Register::FieldValue<decltype(dir),DirVal::transmit> transmit{};
        }
        ///Extend identifier
        enum class XtdVal {
            v11BitStandard=0x00000000,     ///<The 11-bit standard identifier will be used for this message object.
            v29BitExtended=0x00000001,     ///<The 29-bit extended identifier will be used for this message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,XtdVal> xtd{}; 
        namespace XtdValC{
            constexpr Register::FieldValue<decltype(xtd),XtdVal::v11BitStandard> v11BitStandard{};
            constexpr Register::FieldValue<decltype(xtd),XtdVal::v29BitExtended> v29BitExtended{};
        }
        ///Message valid The CPU must reset the MSGVAL bit of all unused Messages Objects during the initialization before it resets bit INIT in the CAN Control Register. This bit must also be reset before the identifier ID28:0, the control bits XTD, DIR, or the Data Length Code DLC3:0 are modified, or if the Messages Object is no longer required.
        enum class MsgvalVal {
            ignore=0x00000000,     ///<The message object is ignored by the message handler.
            configured=0x00000001,     ///<The message object is configured and should be considered by the message handler.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MsgvalVal> msgval{}; 
        namespace MsgvalValC{
            constexpr Register::FieldValue<decltype(msgval),MsgvalVal::ignore> ignore{};
            constexpr Register::FieldValue<decltype(msgval),MsgvalVal::configured> configured{};
        }
    }
    namespace Nonecanif1Mctrl{    ///<Message interface 1 message control
        using Addr = Register::Address<0x40050038,0xffff0070,0,unsigned>;
        ///Data length code The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message. 0000 - 1000 = Data frame has 0 - 8 data bytes. 1001 - 1111 = Data frame has 8 data bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc30{}; 
        namespace Dlc30ValC{
        }
        ///End of buffer
        enum class EobVal {
            fifo=0x00000000,     ///<Message object belongs to a FIFO buffer and is not the last message object of that FIFO buffer.
            singelast=0x00000001,     ///<Single message object or last message object of a FIFO buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EobVal> eob{}; 
        namespace EobValC{
            constexpr Register::FieldValue<decltype(eob),EobVal::fifo> fifo{};
            constexpr Register::FieldValue<decltype(eob),EobVal::singelast> singelast{};
        }
        ///Transmit request
        enum class TxrqstVal {
            nowait=0x00000000,     ///<This message object is not waiting for transmission.
            wait=0x00000001,     ///<The transmission of this message object is requested and is not yet done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::nowait> nowait{};
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::wait> wait{};
        }
        ///Remote enable
        enum class RmtenVal {
            nochange=0x00000000,     ///<At the reception of a remote frame, TXRQST is left unchanged.
            set=0x00000001,     ///<At the reception of a remote frame, TXRQST is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RmtenVal> rmten{}; 
        namespace RmtenValC{
            constexpr Register::FieldValue<decltype(rmten),RmtenVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(rmten),RmtenVal::set> set{};
        }
        ///Receive interrupt enable
        enum class RxieVal {
            nochange=0x00000000,     ///<INTPND will be left unchanged after successful reception of a frame.
            set=0x00000001,     ///<INTPND will be set after successful reception of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxieVal> rxie{}; 
        namespace RxieValC{
            constexpr Register::FieldValue<decltype(rxie),RxieVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(rxie),RxieVal::set> set{};
        }
        ///Transmit interrupt enable
        enum class TxieVal {
            nochange=0x00000000,     ///<The INTPND bit will be left unchanged after a successful transmission of a frame.
            set=0x00000001,     ///<INTPND will be set after a successful transmission of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxieVal> txie{}; 
        namespace TxieValC{
            constexpr Register::FieldValue<decltype(txie),TxieVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(txie),TxieVal::set> set{};
        }
        ///Use acceptance mask If UMASK is set to 1, the message object's mask bits have to be programmed during initialization of the message object before MAGVAL is set to 1.
        enum class UmaskVal {
            ignore=0x00000000,     ///<Mask ignored.
            usemask=0x00000001,     ///<Use mask (MSK[28:0], MXTD, and MDIR) for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UmaskVal> umask{}; 
        namespace UmaskValC{
            constexpr Register::FieldValue<decltype(umask),UmaskVal::ignore> ignore{};
            constexpr Register::FieldValue<decltype(umask),UmaskVal::usemask> usemask{};
        }
        ///Interrupt pending
        enum class IntpndVal {
            nointsource=0x00000000,     ///<This message object is not the source of an interrupt.
            intsource=0x00000001,     ///<This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,IntpndVal> intpnd{}; 
        namespace IntpndValC{
            constexpr Register::FieldValue<decltype(intpnd),IntpndVal::nointsource> nointsource{};
            constexpr Register::FieldValue<decltype(intpnd),IntpndVal::intsource> intsource{};
        }
        ///Message lost (only valid for message objects in the direction receive).
        enum class MsglstVal {
            nolost=0x00000000,     ///<No message lost since this bit was reset last by the CPU.
            newmessage=0x00000001,     ///<The Message Handler stored a new message into this object when NEWDAT was still set, the CPU has lost a message.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MsglstVal> msglst{}; 
        namespace MsglstValC{
            constexpr Register::FieldValue<decltype(msglst),MsglstVal::nolost> nolost{};
            constexpr Register::FieldValue<decltype(msglst),MsglstVal::newmessage> newmessage{};
        }
        ///New data
        enum class NewdatVal {
            nonewdata=0x00000000,     ///<No new data has been written into the data portion of this message object by the message handler since this flag was cleared last by the CPU.
            newdata=0x00000001,     ///<The message handler or the CPU has written new data into the data portion of this message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::nonewdata> nonewdata{};
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::newdata> newdata{};
        }
    }
    namespace Nonecanif2Mctrl{    ///<Message interface 1 message control
        using Addr = Register::Address<0x40050098,0xffff0070,0,unsigned>;
        ///Data length code The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message. 0000 - 1000 = Data frame has 0 - 8 data bytes. 1001 - 1111 = Data frame has 8 data bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc30{}; 
        namespace Dlc30ValC{
        }
        ///End of buffer
        enum class EobVal {
            fifo=0x00000000,     ///<Message object belongs to a FIFO buffer and is not the last message object of that FIFO buffer.
            singelast=0x00000001,     ///<Single message object or last message object of a FIFO buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EobVal> eob{}; 
        namespace EobValC{
            constexpr Register::FieldValue<decltype(eob),EobVal::fifo> fifo{};
            constexpr Register::FieldValue<decltype(eob),EobVal::singelast> singelast{};
        }
        ///Transmit request
        enum class TxrqstVal {
            nowait=0x00000000,     ///<This message object is not waiting for transmission.
            wait=0x00000001,     ///<The transmission of this message object is requested and is not yet done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::nowait> nowait{};
            constexpr Register::FieldValue<decltype(txrqst),TxrqstVal::wait> wait{};
        }
        ///Remote enable
        enum class RmtenVal {
            nochange=0x00000000,     ///<At the reception of a remote frame, TXRQST is left unchanged.
            set=0x00000001,     ///<At the reception of a remote frame, TXRQST is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RmtenVal> rmten{}; 
        namespace RmtenValC{
            constexpr Register::FieldValue<decltype(rmten),RmtenVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(rmten),RmtenVal::set> set{};
        }
        ///Receive interrupt enable
        enum class RxieVal {
            nochange=0x00000000,     ///<INTPND will be left unchanged after successful reception of a frame.
            set=0x00000001,     ///<INTPND will be set after successful reception of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxieVal> rxie{}; 
        namespace RxieValC{
            constexpr Register::FieldValue<decltype(rxie),RxieVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(rxie),RxieVal::set> set{};
        }
        ///Transmit interrupt enable
        enum class TxieVal {
            nochange=0x00000000,     ///<The INTPND bit will be left unchanged after a successful transmission of a frame.
            set=0x00000001,     ///<INTPND will be set after a successful transmission of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxieVal> txie{}; 
        namespace TxieValC{
            constexpr Register::FieldValue<decltype(txie),TxieVal::nochange> nochange{};
            constexpr Register::FieldValue<decltype(txie),TxieVal::set> set{};
        }
        ///Use acceptance mask If UMASK is set to 1, the message object's mask bits have to be programmed during initialization of the message object before MAGVAL is set to 1.
        enum class UmaskVal {
            ignore=0x00000000,     ///<Mask ignored.
            usemask=0x00000001,     ///<Use mask (MSK[28:0], MXTD, and MDIR) for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UmaskVal> umask{}; 
        namespace UmaskValC{
            constexpr Register::FieldValue<decltype(umask),UmaskVal::ignore> ignore{};
            constexpr Register::FieldValue<decltype(umask),UmaskVal::usemask> usemask{};
        }
        ///Interrupt pending
        enum class IntpndVal {
            nointsource=0x00000000,     ///<This message object is not the source of an interrupt.
            intsource=0x00000001,     ///<This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,IntpndVal> intpnd{}; 
        namespace IntpndValC{
            constexpr Register::FieldValue<decltype(intpnd),IntpndVal::nointsource> nointsource{};
            constexpr Register::FieldValue<decltype(intpnd),IntpndVal::intsource> intsource{};
        }
        ///Message lost (only valid for message objects in the direction receive).
        enum class MsglstVal {
            nolost=0x00000000,     ///<No message lost since this bit was reset last by the CPU.
            newmessage=0x00000001,     ///<The Message Handler stored a new message into this object when NEWDAT was still set, the CPU has lost a message.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MsglstVal> msglst{}; 
        namespace MsglstValC{
            constexpr Register::FieldValue<decltype(msglst),MsglstVal::nolost> nolost{};
            constexpr Register::FieldValue<decltype(msglst),MsglstVal::newmessage> newmessage{};
        }
        ///New data
        enum class NewdatVal {
            nonewdata=0x00000000,     ///<No new data has been written into the data portion of this message object by the message handler since this flag was cleared last by the CPU.
            newdata=0x00000001,     ///<The message handler or the CPU has written new data into the data portion of this message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::nonewdata> nonewdata{};
            constexpr Register::FieldValue<decltype(newdat),NewdatVal::newdata> newdata{};
        }
    }
    namespace Nonecanif1Da1{    ///<Message interface 1 data A1
        using Addr = Register::Address<0x4005003c,0xffff0000,0,unsigned>;
        ///Data byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Data byte 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace Nonecanif2Da1{    ///<Message interface 1 data A1
        using Addr = Register::Address<0x4005009c,0xffff0000,0,unsigned>;
        ///Data byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Data byte 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace Nonecanif1Da2{    ///<Message interface 1 data A2
        using Addr = Register::Address<0x40050040,0xffff0000,0,unsigned>;
        ///Data byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        ///Data byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
    }
    namespace Nonecanif2Da2{    ///<Message interface 1 data A2
        using Addr = Register::Address<0x400500a0,0xffff0000,0,unsigned>;
        ///Data byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        ///Data byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
    }
    namespace Nonecanif1Db1{    ///<Message interface 1 data B1
        using Addr = Register::Address<0x40050044,0xffff0000,0,unsigned>;
        ///Data byte 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        ///Data byte 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
    }
    namespace Nonecanif2Db1{    ///<Message interface 1 data B1
        using Addr = Register::Address<0x400500a4,0xffff0000,0,unsigned>;
        ///Data byte 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        ///Data byte 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
    }
    namespace Nonecanif1Db2{    ///<Message interface 1 data B2
        using Addr = Register::Address<0x40050048,0xffff0000,0,unsigned>;
        ///Data byte 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        ///Data byte 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
    }
    namespace Nonecanif2Db2{    ///<Message interface 1 data B2
        using Addr = Register::Address<0x400500a8,0xffff0000,0,unsigned>;
        ///Data byte 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        ///Data byte 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
    }
    namespace Nonecantxreq1{    ///<Transmission request 1
        using Addr = Register::Address<0x40050100,0xffff0000,0,unsigned>;
        ///Transmission request bit of message objects 16 to 1. 0 = This message object is not waiting for transmission. 1 = The transmission of this message object is requested and not yet done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst161{}; 
        namespace Txrqst161ValC{
        }
    }
    namespace Nonecantxreq2{    ///<Transmission request 2
        using Addr = Register::Address<0x40050104,0xffff0000,0,unsigned>;
        ///Transmission request bit of message objects 32 to 17. 0 = This message object is not waiting for transmission. 1 = The transmission of this message object is requested and not yet done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst3217{}; 
        namespace Txrqst3217ValC{
        }
    }
    namespace Nonecannd1{    ///<New data 1
        using Addr = Register::Address<0x40050120,0xffff0000,0,unsigned>;
        ///New data bits of message objects 16 to 1. 0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the CPU. 1 = The Message Handler or the CPU has written new data into the data portion of this Message Object.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdat161{}; 
        namespace Newdat161ValC{
        }
    }
    namespace Nonecannd2{    ///<New data 2
        using Addr = Register::Address<0x40050124,0xffff0000,0,unsigned>;
        ///New data bits of message objects 32 to 17. 0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the CPU. 1 = The Message Handler or the CPU has written new data into the data portion of this Message Object.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdat3217{}; 
        namespace Newdat3217ValC{
        }
    }
    namespace Nonecanir1{    ///<Interrupt pending 1
        using Addr = Register::Address<0x40050140,0xffff0000,0,unsigned>;
        ///Interrupt pending bits of message objects 16 to 1. 0 = This message object is ignored by the message handler. 1 = This message object is the source of an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd161{}; 
        namespace Intpnd161ValC{
        }
    }
    namespace Nonecanir2{    ///<Interrupt pending 2
        using Addr = Register::Address<0x40050144,0xffff0000,0,unsigned>;
        ///Interrupt pending bits of message objects 32 to 17. 0 = This message object is ignored by the message handler. 1 = This message object is the source of an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd3217{}; 
        namespace Intpnd3217ValC{
        }
    }
    namespace Nonecanmsgv1{    ///<Message valid 1
        using Addr = Register::Address<0x40050160,0xffff0000,0,unsigned>;
        ///Message valid bits of message objects 16 to 1. 0 = This message object is ignored by the message handler. 1 = This message object is configured and should be considered by the message handler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval161{}; 
        namespace Msgval161ValC{
        }
    }
    namespace Nonecanmsgv2{    ///<Message valid 2
        using Addr = Register::Address<0x40050164,0xffff0000,0,unsigned>;
        ///Message valid bits of message objects 32 to 17. 0 = This message object is ignored by the message handler. 1 = This message object is configured and should be considered by the message handler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval3217{}; 
        namespace Msgval3217ValC{
        }
    }
    namespace Nonecanclkdiv{    ///<Can clock divider register
        using Addr = Register::Address<0x40050180,0xfffffff0,0,unsigned>;
        ///Clock divider value. CAN_CLK = PCLK/(CLKDIVVAL +1) 0000: CAN_CLK = PCLK divided by 1. 0001: CAN_CLK = PCLK divided by 2. 0010: CAN_CLK = PCLK divided by 3 0010: CAN_CLK = PCLK divided by 4. ... 1111: CAN_CLK = PCLK divided by 16.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clkdivval{}; 
        namespace ClkdivvalValC{
        }
    }
}
