#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//C_CAN controller 
    namespace CCanCancntl{    ///<CAN control
        using Addr = Register::Address<0x40050000,0x00000000,0x00000000,unsigned>;
        ///Initialization
        enum class InitVal {
            normalOperation=0x00000000,     ///<Normal operation.
            initializationIsSt=0x00000001,     ///<Initialization is started. On reset, software needs to initialize the CAN controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InitVal> init{}; 
        namespace InitValC{
            constexpr Register::FieldValue<decltype(init)::Type,InitVal::normalOperation> normalOperation{};
            constexpr Register::FieldValue<decltype(init)::Type,InitVal::initializationIsSt> initializationIsSt{};
        }
        ///Module interrupt enable
        enum class IeVal {
            disableCanInterrup=0x00000000,     ///<Disable CAN interrupts. The interrupt line is always HIGH.
            enableCanInterrupt=0x00000001,     ///<Enable CAN interrupts. The interrupt line is set to LOW and remains LOW until all pending interrupts are cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IeVal> ie{}; 
        namespace IeValC{
            constexpr Register::FieldValue<decltype(ie)::Type,IeVal::disableCanInterrup> disableCanInterrup{};
            constexpr Register::FieldValue<decltype(ie)::Type,IeVal::enableCanInterrupt> enableCanInterrupt{};
        }
        ///Status change interrupt enable
        enum class SieVal {
            disableStatusChang=0x00000000,     ///<Disable status change interrupts. No status change interrupt will be generated.
            enableStatusChange=0x00000001,     ///<Enable status change interrupts. A status change interrupt will be generated when a message transfer is successfully completed or a CAN bus error is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SieVal> sie{}; 
        namespace SieValC{
            constexpr Register::FieldValue<decltype(sie)::Type,SieVal::disableStatusChang> disableStatusChang{};
            constexpr Register::FieldValue<decltype(sie)::Type,SieVal::enableStatusChange> enableStatusChange{};
        }
        ///Error interrupt enable
        enum class EieVal {
            disableErrorInterr=0x00000000,     ///<Disable error interrupt. No error status interrupt will be generated.
            enableErrorInterru=0x00000001,     ///<Enable error interrupt. A change in the bits BOFF or EWARN in the CANSTAT registers will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EieVal> eie{}; 
        namespace EieValC{
            constexpr Register::FieldValue<decltype(eie)::Type,EieVal::disableErrorInterr> disableErrorInterr{};
            constexpr Register::FieldValue<decltype(eie)::Type,EieVal::enableErrorInterru> enableErrorInterru{};
        }
        ///reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Disable automatic retransmission
        enum class DarVal {
            automaticRetransmis=0x00000000,     ///<Automatic retransmission of disturbed messages enabled.
            automaticRetransmis=0x00000001,     ///<Automatic retransmission disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DarVal> dar{}; 
        namespace DarValC{
            constexpr Register::FieldValue<decltype(dar)::Type,DarVal::automaticRetransmis> automaticRetransmis{};
            constexpr Register::FieldValue<decltype(dar)::Type,DarVal::automaticRetransmis> automaticRetransmis{};
        }
        ///Configuration change enable
        enum class CceVal {
            theCpuHasNoWrite=0x00000000,     ///<The CPU has no write access to the bit timing register.
            theCpuHasWriteAc=0x00000001,     ///<The CPU has write access to the CANBT register while the INIT bit is one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CceVal> cce{}; 
        namespace CceValC{
            constexpr Register::FieldValue<decltype(cce)::Type,CceVal::theCpuHasNoWrite> theCpuHasNoWrite{};
            constexpr Register::FieldValue<decltype(cce)::Type,CceVal::theCpuHasWriteAc> theCpuHasWriteAc{};
        }
        ///Test mode enable
        enum class Enum_Val {
            normalOperation=0x00000000,     ///<Normal operation.
            testMode=0x00000001,     ///<Test mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Enum_Val> enum_{}; 
        namespace Enum_ValC{
            constexpr Register::FieldValue<decltype(enum_)::Type,Enum_Val::normalOperation> normalOperation{};
            constexpr Register::FieldValue<decltype(enum_)::Type,Enum_Val::testMode> testMode{};
        }
        ///reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanstat{    ///<Status register
        using Addr = Register::Address<0x40050004,0x00000000,0x00000000,unsigned>;
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
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::noError> noError{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::stuffErrorMoreTh> stuffErrorMoreTh{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::formErrorAFixed> formErrorAFixed{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::ackerrorTheMessag> ackerrorTheMessag{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::bit1errorDuringTh> bit1errorDuringTh{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::bit0errorDuringTh> bit0errorDuringTh{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::crcerrorTheCrcCh> crcerrorTheCrcCh{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::unusedNoCanBusE> unusedNoCanBusE{};
        }
        ///Transmitted a message successfully This bit must be reset by the CPU. It is never reset by the CAN controller.
        enum class TxokVal {
            noTransmit=0x00000000,     ///<No transmit. Since this bit was last reset by the CPU, no message has been successfully transmitted.
            successfulTransmit=0x00000001,     ///<Successful transmit. Since this bit was last reset by the CPU, a message has been successfully transmitted (error free and acknowledged by at least one other node).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxokVal> txok{}; 
        namespace TxokValC{
            constexpr Register::FieldValue<decltype(txok)::Type,TxokVal::noTransmit> noTransmit{};
            constexpr Register::FieldValue<decltype(txok)::Type,TxokVal::successfulTransmit> successfulTransmit{};
        }
        ///Received a message successfully This bit must be reset by the CPU. It is never reset by the CAN controller.
        enum class RxokVal {
            noReceive=0x00000000,     ///<No receive. Since this bit was last reset by the CPU, no message has been successfully received.
            successfulReceive=0x00000001,     ///<Successful receive.Since this bit was last set to zero by the CPU, a message has been successfully received independent of the result of acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RxokVal> rxok{}; 
        namespace RxokValC{
            constexpr Register::FieldValue<decltype(rxok)::Type,RxokVal::noReceive> noReceive{};
            constexpr Register::FieldValue<decltype(rxok)::Type,RxokVal::successfulReceive> successfulReceive{};
        }
        ///Error passive
        enum class EpassVal {
            active=0x00000000,     ///<Active. The CAN controller is in the error active state.
            passive=0x00000001,     ///<Passive. The CAN controller is in the error passive state as defined in the CAN 2.0 specification.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EpassVal> epass{}; 
        namespace EpassValC{
            constexpr Register::FieldValue<decltype(epass)::Type,EpassVal::active> active{};
            constexpr Register::FieldValue<decltype(epass)::Type,EpassVal::passive> passive{};
        }
        ///Warning status
        enum class EwarnVal {
            belowLimit=0x00000000,     ///<Below limit. Both error counters are below the error warning limit of 96.
            atLimit=0x00000001,     ///<At limit. At least one of the error counters in the EC has reached the error warning limit of 96.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EwarnVal> ewarn{}; 
        namespace EwarnValC{
            constexpr Register::FieldValue<decltype(ewarn)::Type,EwarnVal::belowLimit> belowLimit{};
            constexpr Register::FieldValue<decltype(ewarn)::Type,EwarnVal::atLimit> atLimit{};
        }
        ///Busoff status
        enum class BoffVal {
            theCanModuleIsNo=0x00000000,     ///<The CAN module is not in busoff.
            theCanControllerI=0x00000001,     ///<The CAN controller is in busoff state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BoffVal> boff{}; 
        namespace BoffValC{
            constexpr Register::FieldValue<decltype(boff)::Type,BoffVal::theCanModuleIsNo> theCanModuleIsNo{};
            constexpr Register::FieldValue<decltype(boff)::Type,BoffVal::theCanControllerI> theCanControllerI{};
        }
        ///reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanec{    ///<Error counter
        using Addr = Register::Address<0x40050008,0x00000000,0x00000000,unsigned>;
        ///Transmit error counter Current value of the transmit error counter (maximum value 255)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec70{}; 
        ///Receive error counter Current value of the receive error counter (maximum value 127).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rec60{}; 
        ///Receive error passive
        enum class RpVal {
            theReceiveCounter=0x00000000,     ///<The receive counter is below the error passive level.
            theReceiveCounter=0x00000001,     ///<The receive counter has reached the error passive level as defined in the  CAN2.0 specification.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,RpVal> rp{}; 
        namespace RpValC{
            constexpr Register::FieldValue<decltype(rp)::Type,RpVal::theReceiveCounter> theReceiveCounter{};
            constexpr Register::FieldValue<decltype(rp)::Type,RpVal::theReceiveCounter> theReceiveCounter{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanbt{    ///<Bit timing register
        using Addr = Register::Address<0x4005000c,0x00000000,0x00000000,unsigned>;
        ///Baud rate prescaler The value by which the oscillator frequency is divided for generating the bit time quanta. The bit time is built up from a multiple of this quanta. Valid values for the Baud Rate Prescaler are 0 to 63.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> brp{}; 
        ///(Re)synchronization jump width Valid programmed values are 0 to 3.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sjw{}; 
        ///Time segment before the sample point Valid values are 1 to 15.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        ///Time segment after the sample point Valid values are 0 to 7.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tseg2{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanint{    ///<Interrupt register
        using Addr = Register::Address<0x40050010,0x00000000,0x00000000,unsigned>;
        ///0x0000 = No interrupt is pending. 0x0001 - 0x0020 = Number of message object which caused the interrupt. 0x0021 - 0x7FFF = Unused 0x8000 = Status interrupt 0x8001 - 0xFFFF = Unused
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intid{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCantest{    ///<Test register
        using Addr = Register::Address<0x40050014,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Basic mode
        enum class BasicVal {
            disabled=0x00000000,     ///<Disabled. Basic mode disabled.
            enabled=0x00000001,     ///<Enabled. IF1 registers used as TX buffer, IF2 registers used as RX buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BasicVal> basic{}; 
        namespace BasicValC{
            constexpr Register::FieldValue<decltype(basic)::Type,BasicVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(basic)::Type,BasicVal::enabled> enabled{};
        }
        ///Silent mode
        enum class SilentVal {
            normalOperation=0x00000000,     ///<Normal operation.
            silentMode=0x00000001,     ///<Silent mode. The module is in silent mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SilentVal> silent{}; 
        namespace SilentValC{
            constexpr Register::FieldValue<decltype(silent)::Type,SilentVal::normalOperation> normalOperation{};
            constexpr Register::FieldValue<decltype(silent)::Type,SilentVal::silentMode> silentMode{};
        }
        ///Loop back mode
        enum class LbackVal {
            disabled=0x00000000,     ///<Disabled. Loop back mode is disabled.
            enabled=0x00000001,     ///<Enabled. Loop back mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LbackVal> lback{}; 
        namespace LbackValC{
            constexpr Register::FieldValue<decltype(lback)::Type,LbackVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lback)::Type,LbackVal::enabled> enabled{};
        }
        ///Control of CAN_TXD pins
        enum class TxVal {
            controller=0x00000000,     ///<Controller. Level at the CAN_TXD pin is controlled by the CAN controller. This is the value at reset.
            samplePoint=0x00000001,     ///<Sample point. The sample point can be monitored at the CAN_TXD pin.
            low=0x00000002,     ///<Low. CAN_TXD pin is driven LOW/dominant.
            hogh=0x00000003,     ///<Hogh. CAN_TXD pin is driven HIGH/recessive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::controller> controller{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::samplePoint> samplePoint{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::low> low{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::hogh> hogh{};
        }
        ///Monitors the actual value of the CAN_RXD pin.
        enum class RxVal {
            recessive=0x00000000,     ///<Recessive. The CAN bus is recessive (CAN_RXD = 1).
            dominant=0x00000001,     ///<Dominant. The CAN bus is dominant (CAN_RXD = 0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxVal> rx{}; 
        namespace RxValC{
            constexpr Register::FieldValue<decltype(rx)::Type,RxVal::recessive> recessive{};
            constexpr Register::FieldValue<decltype(rx)::Type,RxVal::dominant> dominant{};
        }
        ///R/W
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanbrpe{    ///<Baud rate prescaler extension register
        using Addr = Register::Address<0x40050018,0x00000000,0x00000000,unsigned>;
        ///Baud rate prescaler extension By programming BRPE the Baud Rate Prescaler can be extended to values up to 1023. Hardware interprets the value as the value of BRPE (MSBs) and BRP (LSBs) plus one. Allowed values are 0 to 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brpe{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCantxreq1{    ///<Transmission request 1
        using Addr = Register::Address<0x40050100,0x00000000,0x00000000,unsigned>;
        ///Transmission request bit of message objects 16 to 1. 0 = This message object is not waiting for transmission. 1 = The transmission of this message object is requested and not yet done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst161{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCantxreq2{    ///<Transmission request 2
        using Addr = Register::Address<0x40050104,0x00000000,0x00000000,unsigned>;
        ///Transmission request bit of message objects 32 to 17. 0 = This message object is not waiting for transmission. 1 = The transmission of this message object is requested and not yet done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst3217{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCannd1{    ///<New data 1
        using Addr = Register::Address<0x40050120,0x00000000,0x00000000,unsigned>;
        ///New data bits of message objects 16 to 1. 0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the CPU. 1 = The Message Handler or the CPU has written new data into the data portion of this Message Object.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdat161{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCannd2{    ///<New data 2
        using Addr = Register::Address<0x40050124,0x00000000,0x00000000,unsigned>;
        ///New data bits of message objects 32 to 17. 0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the CPU. 1 = The Message Handler or the CPU has written new data into the data portion of this Message Object.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdat3217{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanir1{    ///<Interrupt pending 1
        using Addr = Register::Address<0x40050140,0x00000000,0x00000000,unsigned>;
        ///Interrupt pending bits of message objects 16 to 1. 0 = This message object is ignored by the message handler. 1 = This message object is the source of an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd161{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanir2{    ///<Interrupt pending 2
        using Addr = Register::Address<0x40050144,0x00000000,0x00000000,unsigned>;
        ///Interrupt pending bits of message objects 32 to 17. 0 = This message object is ignored by the message handler. 1 = This message object is the source of an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd3217{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanmsgv1{    ///<Message valid 1
        using Addr = Register::Address<0x40050160,0x00000000,0x00000000,unsigned>;
        ///Message valid bits of message objects 16 to 1. 0 = This message object is ignored by the message handler. 1 = This message object is configured and should be considered by the message handler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval161{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanmsgv2{    ///<Message valid 2
        using Addr = Register::Address<0x40050164,0x00000000,0x00000000,unsigned>;
        ///Message valid bits of message objects 32 to 17. 0 = This message object is ignored by the message handler. 1 = This message object is configured and should be considered by the message handler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval3217{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanclkdiv{    ///<Can clock divider register
        using Addr = Register::Address<0x40050180,0x00000000,0x00000000,unsigned>;
        ///Clock divider value. CAN_CLK =  PCLK/(CLKDIVVAL +1) 0000: CAN_CLK = PCLK divided by 1. 0001: CAN_CLK = PCLK divided by 2. 0010: CAN_CLK = PCLK divided by 3 0011: CAN_CLK = PCLK divided by 4. ... 1111: CAN_CLK = PCLK divided by 16.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clkdivval{}; 
        ///reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1Cmdreq{    ///<Message interface 1 command request
        using Addr = Register::Address<0x40050020,0x00000000,0x00000000,unsigned>;
        ///Message number 0x01 - 0x20 = Valid message numbers. The message object in the message RAM is selected for data transfer. 0x00 = Not a valid message number. This value is interpreted as 0x20.[1] 0x21 - 0x3F = Not a valid message number. This value is interpreted as 0x01 - 0x1F.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> mn{}; 
        ///reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///BUSY flag
        enum class BusyVal {
            done=0x00000000,     ///<Done. Set to zero by hardware when read/write action to this Command request register has finished.
            busy=0x00000001,     ///<Busy. Set to one by hardware when writing to this Command request register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BusyVal> busy{}; 
        namespace BusyValC{
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::done> done{};
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::busy> busy{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2Cmdreq{    ///<Message interface 1 command request
        using Addr = Register::Address<0x40050080,0x00000000,0x00000000,unsigned>;
        ///Message number 0x01 - 0x20 = Valid message numbers. The message object in the message RAM is selected for data transfer. 0x00 = Not a valid message number. This value is interpreted as 0x20.[1] 0x21 - 0x3F = Not a valid message number. This value is interpreted as 0x01 - 0x1F.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> mn{}; 
        ///reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///BUSY flag
        enum class BusyVal {
            done=0x00000000,     ///<Done. Set to zero by hardware when read/write action to this Command request register has finished.
            busy=0x00000001,     ///<Busy. Set to one by hardware when writing to this Command request register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BusyVal> busy{}; 
        namespace BusyValC{
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::done> done{};
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::busy> busy{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1CmdmskW{    ///<Message interface 1 command mask (write direction)
        using Addr = Register::Address<0x40050024,0x00000000,0x00000000,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 4-7 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 4-7 to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB)::Type,DatabVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataB)::Type,DatabVal::transfer> transfer{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 0-3 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 0-3 to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA)::Type,DataaVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataA)::Type,DataaVal::transfer> transfer{};
        }
        ///Access transmission request bit
        enum class TxrqstVal {
            noTransmissionRequ=0x00000000,     ///<No transmission request. TXRQSRT bit unchanged in IF1/2_MCTRL. If a transmission is requested by programming this bit, the TXRQST bit in the CANIFn_MCTRL register is ignored.
            requestATransmissi=0x00000001,     ///<Request a transmission. Set the TXRQST bit IF1/2_MCTRL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst)::Type,TxrqstVal::noTransmissionRequ> noTransmissionRequ{};
            constexpr Register::FieldValue<decltype(txrqst)::Type,TxrqstVal::requestATransmissi> requestATransmissi{};
        }
        ///This bit is ignored in the write direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        ///Access control bits
        enum class CtrlVal {
            unchanged=0x00000000,     ///<Unchanged. Control bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer control bits to message object
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl)::Type,CtrlVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(ctrl)::Type,CtrlVal::transfer> transfer{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            unchanged=0x00000000,     ///<Unchanged. Arbitration bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier, DIR, XTD, and MSGVAL bits to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::transfer> transfer{};
        }
        ///Access mask bits
        enum class MaskVal {
            unchanged=0x00000000,     ///<Unchanged. Mask bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier MASK + MDIR + MXTD to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask)::Type,MaskVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(mask)::Type,MaskVal::transfer> transfer{};
        }
        ///Write transfer Transfer data from the selected message buffer registers to the message object addressed by the command request register CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        ///reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2CmdmskW{    ///<Message interface 1 command mask (write direction)
        using Addr = Register::Address<0x40050084,0x00000000,0x00000000,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 4-7 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 4-7 to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB)::Type,DatabVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataB)::Type,DatabVal::transfer> transfer{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 0-3 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 0-3 to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA)::Type,DataaVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataA)::Type,DataaVal::transfer> transfer{};
        }
        ///Access transmission request bit
        enum class TxrqstVal {
            noTransmissionRequ=0x00000000,     ///<No transmission request. TXRQSRT bit unchanged in IF1/2_MCTRL. If a transmission is requested by programming this bit, the TXRQST bit in the CANIFn_MCTRL register is ignored.
            requestATransmissi=0x00000001,     ///<Request a transmission. Set the TXRQST bit IF1/2_MCTRL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst)::Type,TxrqstVal::noTransmissionRequ> noTransmissionRequ{};
            constexpr Register::FieldValue<decltype(txrqst)::Type,TxrqstVal::requestATransmissi> requestATransmissi{};
        }
        ///This bit is ignored in the write direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        ///Access control bits
        enum class CtrlVal {
            unchanged=0x00000000,     ///<Unchanged. Control bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer control bits to message object
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl)::Type,CtrlVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(ctrl)::Type,CtrlVal::transfer> transfer{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            unchanged=0x00000000,     ///<Unchanged. Arbitration bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier, DIR, XTD, and MSGVAL bits to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::transfer> transfer{};
        }
        ///Access mask bits
        enum class MaskVal {
            unchanged=0x00000000,     ///<Unchanged. Mask bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier MASK + MDIR + MXTD to message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask)::Type,MaskVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(mask)::Type,MaskVal::transfer> transfer{};
        }
        ///Write transfer Transfer data from the selected message buffer registers to the message object addressed by the command request register CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        ///reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1CmdmskR{    ///<Message interface 1 command mask (read direction)
        using Addr = Register::Address<0x40050024,0x00000000,0x00000000,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 4-7 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 4-7 to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB)::Type,DatabVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataB)::Type,DatabVal::transfer> transfer{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 0-3 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 0-3 to IFx message buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA)::Type,DataaVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataA)::Type,DataaVal::transfer> transfer{};
        }
        ///Access new data bit
        enum class NewdatVal {
            unchanged=0x00000000,     ///<Unchanged. NEWDAT bit remains unchanged. A read access to a message object can be combined with the reset of the control bits INTPND and NEWDAT in IF1/2_MCTRL. The values of these bits transferred to the IFx Message Control Register always reflect the status before resetting these bits.
            clear=0x00000001,     ///<Clear. Clear NEWDAT bit in the message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat)::Type,NewdatVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(newdat)::Type,NewdatVal::clear> clear{};
        }
        ///Clear interrupt pending bit.
        enum class ClrintpndVal {
            unchanged=0x00000000,     ///<Unchanged. INTPND bit remains unchanged.
            clear=0x00000001,     ///<Clear. Clear INTPND bit in the message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrintpndVal> clrintpnd{}; 
        namespace ClrintpndValC{
            constexpr Register::FieldValue<decltype(clrintpnd)::Type,ClrintpndVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(clrintpnd)::Type,ClrintpndVal::clear> clear{};
        }
        ///Access control bits
        enum class CtrlVal {
            unchanged=0x00000000,     ///<Unchanged. Control bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer control bits to IFx message buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl)::Type,CtrlVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(ctrl)::Type,CtrlVal::transfer> transfer{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            unchanged=0x00000000,     ///<Unchanged. Arbitration bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier, DIR, XTD, and MSGVAL bits to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::transfer> transfer{};
        }
        ///Access mask bits
        enum class MaskVal {
            unchanged=0x00000000,     ///<Unchanged. Mask bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier MASK + MDIR + MXTD to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask)::Type,MaskVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(mask)::Type,MaskVal::transfer> transfer{};
        }
        ///Read transfer Transfer data from the message object addressed by the command request register to the selected message buffer registers CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        ///reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2CmdmskR{    ///<Message interface 1 command mask (read direction)
        using Addr = Register::Address<0x40050084,0x00000000,0x00000000,unsigned>;
        ///Access data bytes 4-7
        enum class DatabVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 4-7 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 4-7 to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DatabVal> dataB{}; 
        namespace DatabValC{
            constexpr Register::FieldValue<decltype(dataB)::Type,DatabVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataB)::Type,DatabVal::transfer> transfer{};
        }
        ///Access data bytes 0-3
        enum class DataaVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 0-3 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 0-3 to IFx message buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DataaVal> dataA{}; 
        namespace DataaValC{
            constexpr Register::FieldValue<decltype(dataA)::Type,DataaVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(dataA)::Type,DataaVal::transfer> transfer{};
        }
        ///Access new data bit
        enum class NewdatVal {
            unchanged=0x00000000,     ///<Unchanged. NEWDAT bit remains unchanged. A read access to a message object can be combined with the reset of the control bits INTPND and NEWDAT in IF1/2_MCTRL. The values of these bits transferred to the IFx Message Control Register always reflect the status before resetting these bits.
            clear=0x00000001,     ///<Clear. Clear NEWDAT bit in the message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat)::Type,NewdatVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(newdat)::Type,NewdatVal::clear> clear{};
        }
        ///Clear interrupt pending bit.
        enum class ClrintpndVal {
            unchanged=0x00000000,     ///<Unchanged. INTPND bit remains unchanged.
            clear=0x00000001,     ///<Clear. Clear INTPND bit in the message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrintpndVal> clrintpnd{}; 
        namespace ClrintpndValC{
            constexpr Register::FieldValue<decltype(clrintpnd)::Type,ClrintpndVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(clrintpnd)::Type,ClrintpndVal::clear> clear{};
        }
        ///Access control bits
        enum class CtrlVal {
            unchanged=0x00000000,     ///<Unchanged. Control bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer control bits to IFx message buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CtrlVal> ctrl{}; 
        namespace CtrlValC{
            constexpr Register::FieldValue<decltype(ctrl)::Type,CtrlVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(ctrl)::Type,CtrlVal::transfer> transfer{};
        }
        ///Access arbitration bits
        enum class ArbVal {
            unchanged=0x00000000,     ///<Unchanged. Arbitration bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier, DIR, XTD, and MSGVAL bits to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::transfer> transfer{};
        }
        ///Access mask bits
        enum class MaskVal {
            unchanged=0x00000000,     ///<Unchanged. Mask bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier MASK + MDIR + MXTD to IFx message buffer register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,MaskVal> mask{}; 
        namespace MaskValC{
            constexpr Register::FieldValue<decltype(mask)::Type,MaskVal::unchanged> unchanged{};
            constexpr Register::FieldValue<decltype(mask)::Type,MaskVal::transfer> transfer{};
        }
        ///Read transfer Transfer data from the message object addressed by the command request register to the selected message buffer registers CANIFn_CMDREQ.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
        ///reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1Msk1{    ///<Message interface 1 mask 1
        using Addr = Register::Address<0x40050028,0x00000000,0x00000000,unsigned>;
        ///Identifier mask [15:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk150{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2Msk1{    ///<Message interface 1 mask 1
        using Addr = Register::Address<0x40050088,0x00000000,0x00000000,unsigned>;
        ///Identifier mask [15:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk150{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1Msk2{    ///<Message interface 1 mask 2
        using Addr = Register::Address<0x4005002c,0x00000000,0x00000000,unsigned>;
        ///Identifier mask [28:16]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk2816{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Mask message direction
        enum class MdirVal {
            withoutDirBit=0x00000000,     ///<Without DIR bit. The message direction bit (DIR) has no effect on acceptance filtering.
            withDirBit=0x00000001,     ///<With DIR bit. The message direction bit (DIR) is used for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MdirVal> mdir{}; 
        namespace MdirValC{
            constexpr Register::FieldValue<decltype(mdir)::Type,MdirVal::withoutDirBit> withoutDirBit{};
            constexpr Register::FieldValue<decltype(mdir)::Type,MdirVal::withDirBit> withDirBit{};
        }
        ///Mask extend identifier
        enum class MxtdVal {
            withoutXtd=0x00000000,     ///<Without XTD. The extended identifier bit (XTD) has no effect on acceptance filtering.
            withXtd=0x00000001,     ///<With XTD. The extended identifier bit (XTD) is used for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MxtdVal> mxtd{}; 
        namespace MxtdValC{
            constexpr Register::FieldValue<decltype(mxtd)::Type,MxtdVal::withoutXtd> withoutXtd{};
            constexpr Register::FieldValue<decltype(mxtd)::Type,MxtdVal::withXtd> withXtd{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2Msk2{    ///<Message interface 1 mask 2
        using Addr = Register::Address<0x4005008c,0x00000000,0x00000000,unsigned>;
        ///Identifier mask [28:16]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk2816{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Mask message direction
        enum class MdirVal {
            withoutDirBit=0x00000000,     ///<Without DIR bit. The message direction bit (DIR) has no effect on acceptance filtering.
            withDirBit=0x00000001,     ///<With DIR bit. The message direction bit (DIR) is used for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MdirVal> mdir{}; 
        namespace MdirValC{
            constexpr Register::FieldValue<decltype(mdir)::Type,MdirVal::withoutDirBit> withoutDirBit{};
            constexpr Register::FieldValue<decltype(mdir)::Type,MdirVal::withDirBit> withDirBit{};
        }
        ///Mask extend identifier
        enum class MxtdVal {
            withoutXtd=0x00000000,     ///<Without XTD. The extended identifier bit (XTD) has no effect on acceptance filtering.
            withXtd=0x00000001,     ///<With XTD. The extended identifier bit (XTD) is used for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MxtdVal> mxtd{}; 
        namespace MxtdValC{
            constexpr Register::FieldValue<decltype(mxtd)::Type,MxtdVal::withoutXtd> withoutXtd{};
            constexpr Register::FieldValue<decltype(mxtd)::Type,MxtdVal::withXtd> withXtd{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1Arb1{    ///<Message interface 1 arbitration 1
        using Addr = Register::Address<0x40050030,0x00000000,0x00000000,unsigned>;
        ///Message identifier [15:0] 29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id150{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2Arb1{    ///<Message interface 1 arbitration 1
        using Addr = Register::Address<0x40050090,0x00000000,0x00000000,unsigned>;
        ///Message identifier [15:0] 29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id150{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1Arb2{    ///<Message interface 1 arbitration 2
        using Addr = Register::Address<0x40050034,0x00000000,0x00000000,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id2816{}; 
        ///Message direction
        enum class DirVal {
            receive=0x00000000,     ///<Receive. On TXRQST, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
            tansmit=0x00000001,     ///<Tansmit. On TXRQST, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TXRQST bit of this Message Object is set (if RMTEN = one).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::receive> receive{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::tansmit> tansmit{};
        }
        ///Extend identifier
        enum class XtdVal {
            standard=0x00000000,     ///<Standard. The 11-bit standard identifier will be used for this message object.
            extended=0x00000001,     ///<Extended. The 29-bit extended identifier will be used for this message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,XtdVal> xtd{}; 
        namespace XtdValC{
            constexpr Register::FieldValue<decltype(xtd)::Type,XtdVal::standard> standard{};
            constexpr Register::FieldValue<decltype(xtd)::Type,XtdVal::extended> extended{};
        }
        ///Message valid The CPU must reset the MSGVAL bit of all unused Messages Objects during the initialization before it resets bit INIT in the CAN Control Register. This bit must also be reset before the identifier ID28:0, the control bits XTD, DIR, or the Data Length Code DLC3:0 are modified, or if the Messages Object is no longer required.
        enum class MsgvalVal {
            invalid=0x00000000,     ///<Invalid. The message object is ignored by the message handler.
            valid=0x00000001,     ///<Valid. The message object is configured and should be considered by the message handler.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MsgvalVal> msgval{}; 
        namespace MsgvalValC{
            constexpr Register::FieldValue<decltype(msgval)::Type,MsgvalVal::invalid> invalid{};
            constexpr Register::FieldValue<decltype(msgval)::Type,MsgvalVal::valid> valid{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2Arb2{    ///<Message interface 1 arbitration 2
        using Addr = Register::Address<0x40050094,0x00000000,0x00000000,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id2816{}; 
        ///Message direction
        enum class DirVal {
            receive=0x00000000,     ///<Receive. On TXRQST, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
            tansmit=0x00000001,     ///<Tansmit. On TXRQST, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TXRQST bit of this Message Object is set (if RMTEN = one).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::receive> receive{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::tansmit> tansmit{};
        }
        ///Extend identifier
        enum class XtdVal {
            standard=0x00000000,     ///<Standard. The 11-bit standard identifier will be used for this message object.
            extended=0x00000001,     ///<Extended. The 29-bit extended identifier will be used for this message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,XtdVal> xtd{}; 
        namespace XtdValC{
            constexpr Register::FieldValue<decltype(xtd)::Type,XtdVal::standard> standard{};
            constexpr Register::FieldValue<decltype(xtd)::Type,XtdVal::extended> extended{};
        }
        ///Message valid The CPU must reset the MSGVAL bit of all unused Messages Objects during the initialization before it resets bit INIT in the CAN Control Register. This bit must also be reset before the identifier ID28:0, the control bits XTD, DIR, or the Data Length Code DLC3:0 are modified, or if the Messages Object is no longer required.
        enum class MsgvalVal {
            invalid=0x00000000,     ///<Invalid. The message object is ignored by the message handler.
            valid=0x00000001,     ///<Valid. The message object is configured and should be considered by the message handler.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,MsgvalVal> msgval{}; 
        namespace MsgvalValC{
            constexpr Register::FieldValue<decltype(msgval)::Type,MsgvalVal::invalid> invalid{};
            constexpr Register::FieldValue<decltype(msgval)::Type,MsgvalVal::valid> valid{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1Mctrl{    ///<Message interface 1 message control
        using Addr = Register::Address<0x40050038,0x00000000,0x00000000,unsigned>;
        ///Data length code 3:0 The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message. 0000 - 1000 = Data frame has 0 - 8 data bytes. 1001 - 1111 = Data frame has 8 data bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc30{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///End of buffer
        enum class EobVal {
            notEndOfBuffer=0x00000000,     ///<Not end of buffer. Message object belongs to a FIFO buffer and is not the last message object of that FIFO buffer.
            endOfBuffer=0x00000001,     ///<End of buffer. Single message object or last message object of a FIFO buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EobVal> eob{}; 
        namespace EobValC{
            constexpr Register::FieldValue<decltype(eob)::Type,EobVal::notEndOfBuffer> notEndOfBuffer{};
            constexpr Register::FieldValue<decltype(eob)::Type,EobVal::endOfBuffer> endOfBuffer{};
        }
        ///Transmit request
        enum class TxrqstVal {
            notWaiting=0x00000000,     ///<Not waiting. This message object is not waiting for transmission.
            waiting=0x00000001,     ///<Waiting. The transmission of this message object is requested and is not yet done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst)::Type,TxrqstVal::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(txrqst)::Type,TxrqstVal::waiting> waiting{};
        }
        ///Remote enable
        enum class RmtenVal {
            txrqstUnchanged=0x00000000,     ///<TXRQST unchanged. At the reception of a remote frame, TXRQST is left unchanged.
            txrqstSet=0x00000001,     ///<TXRQST set. At the reception of a remote frame, TXRQST is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RmtenVal> rmten{}; 
        namespace RmtenValC{
            constexpr Register::FieldValue<decltype(rmten)::Type,RmtenVal::txrqstUnchanged> txrqstUnchanged{};
            constexpr Register::FieldValue<decltype(rmten)::Type,RmtenVal::txrqstSet> txrqstSet{};
        }
        ///Receive interrupt enable
        enum class RxieVal {
            intpndUnchanged=0x00000000,     ///<INTPND unchanged. INTPND will be left unchanged after successful reception of a frame.
            intpndSet=0x00000001,     ///<INTPND set. INTPND will be set after successful reception of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxieVal> rxie{}; 
        namespace RxieValC{
            constexpr Register::FieldValue<decltype(rxie)::Type,RxieVal::intpndUnchanged> intpndUnchanged{};
            constexpr Register::FieldValue<decltype(rxie)::Type,RxieVal::intpndSet> intpndSet{};
        }
        ///Transmit interrupt enable
        enum class TxieVal {
            intpndUnchanged=0x00000000,     ///<INTPND unchanged. The INTPND bit will be left unchanged after a successful transmission of a frame.
            intpndSet=0x00000001,     ///<INTPND set. INTPND will be set after a successful transmission of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxieVal> txie{}; 
        namespace TxieValC{
            constexpr Register::FieldValue<decltype(txie)::Type,TxieVal::intpndUnchanged> intpndUnchanged{};
            constexpr Register::FieldValue<decltype(txie)::Type,TxieVal::intpndSet> intpndSet{};
        }
        ///Use acceptance mask If UMASK is set to 1, the message object's mask bits have to be programmed during initialization of the message object before MAGVAL is set to 1.
        enum class UmaskVal {
            ignore=0x00000000,     ///<Ignore. Mask ignored.
            use=0x00000001,     ///<Use. Use mask (MSK[28:0], MXTD, and MDIR) for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UmaskVal> umask{}; 
        namespace UmaskValC{
            constexpr Register::FieldValue<decltype(umask)::Type,UmaskVal::ignore> ignore{};
            constexpr Register::FieldValue<decltype(umask)::Type,UmaskVal::use> use{};
        }
        ///Interrupt pending
        enum class IntpndVal {
            notPending=0x00000000,     ///<Not pending. This message object is not the source of an interrupt.
            pending=0x00000001,     ///<Pending. This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,IntpndVal> intpnd{}; 
        namespace IntpndValC{
            constexpr Register::FieldValue<decltype(intpnd)::Type,IntpndVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(intpnd)::Type,IntpndVal::pending> pending{};
        }
        ///Message lost (only valid for message objects in the direction receive).
        enum class MsglstVal {
            notLost=0x00000000,     ///<Not lost. No message lost since this bit was reset last by the CPU.
            lost=0x00000001,     ///<Lost. The Message Handler stored a new message into this object when NEWDAT was still set, the CPU has lost a message.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MsglstVal> msglst{}; 
        namespace MsglstValC{
            constexpr Register::FieldValue<decltype(msglst)::Type,MsglstVal::notLost> notLost{};
            constexpr Register::FieldValue<decltype(msglst)::Type,MsglstVal::lost> lost{};
        }
        ///New data
        enum class NewdatVal {
            noNewData=0x00000000,     ///<No new data. No new data has been written into the data portion of this message object by the message handler since this flag was cleared last by the CPU.
            newData=0x00000001,     ///<New data. The message handler or the CPU has written new data into the data portion of this message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat)::Type,NewdatVal::noNewData> noNewData{};
            constexpr Register::FieldValue<decltype(newdat)::Type,NewdatVal::newData> newData{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2Mctrl{    ///<Message interface 1 message control
        using Addr = Register::Address<0x40050098,0x00000000,0x00000000,unsigned>;
        ///Data length code 3:0 The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message. 0000 - 1000 = Data frame has 0 - 8 data bytes. 1001 - 1111 = Data frame has 8 data bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc30{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///End of buffer
        enum class EobVal {
            notEndOfBuffer=0x00000000,     ///<Not end of buffer. Message object belongs to a FIFO buffer and is not the last message object of that FIFO buffer.
            endOfBuffer=0x00000001,     ///<End of buffer. Single message object or last message object of a FIFO buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EobVal> eob{}; 
        namespace EobValC{
            constexpr Register::FieldValue<decltype(eob)::Type,EobVal::notEndOfBuffer> notEndOfBuffer{};
            constexpr Register::FieldValue<decltype(eob)::Type,EobVal::endOfBuffer> endOfBuffer{};
        }
        ///Transmit request
        enum class TxrqstVal {
            notWaiting=0x00000000,     ///<Not waiting. This message object is not waiting for transmission.
            waiting=0x00000001,     ///<Waiting. The transmission of this message object is requested and is not yet done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TxrqstVal> txrqst{}; 
        namespace TxrqstValC{
            constexpr Register::FieldValue<decltype(txrqst)::Type,TxrqstVal::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(txrqst)::Type,TxrqstVal::waiting> waiting{};
        }
        ///Remote enable
        enum class RmtenVal {
            txrqstUnchanged=0x00000000,     ///<TXRQST unchanged. At the reception of a remote frame, TXRQST is left unchanged.
            txrqstSet=0x00000001,     ///<TXRQST set. At the reception of a remote frame, TXRQST is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RmtenVal> rmten{}; 
        namespace RmtenValC{
            constexpr Register::FieldValue<decltype(rmten)::Type,RmtenVal::txrqstUnchanged> txrqstUnchanged{};
            constexpr Register::FieldValue<decltype(rmten)::Type,RmtenVal::txrqstSet> txrqstSet{};
        }
        ///Receive interrupt enable
        enum class RxieVal {
            intpndUnchanged=0x00000000,     ///<INTPND unchanged. INTPND will be left unchanged after successful reception of a frame.
            intpndSet=0x00000001,     ///<INTPND set. INTPND will be set after successful reception of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxieVal> rxie{}; 
        namespace RxieValC{
            constexpr Register::FieldValue<decltype(rxie)::Type,RxieVal::intpndUnchanged> intpndUnchanged{};
            constexpr Register::FieldValue<decltype(rxie)::Type,RxieVal::intpndSet> intpndSet{};
        }
        ///Transmit interrupt enable
        enum class TxieVal {
            intpndUnchanged=0x00000000,     ///<INTPND unchanged. The INTPND bit will be left unchanged after a successful transmission of a frame.
            intpndSet=0x00000001,     ///<INTPND set. INTPND will be set after a successful transmission of a frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TxieVal> txie{}; 
        namespace TxieValC{
            constexpr Register::FieldValue<decltype(txie)::Type,TxieVal::intpndUnchanged> intpndUnchanged{};
            constexpr Register::FieldValue<decltype(txie)::Type,TxieVal::intpndSet> intpndSet{};
        }
        ///Use acceptance mask If UMASK is set to 1, the message object's mask bits have to be programmed during initialization of the message object before MAGVAL is set to 1.
        enum class UmaskVal {
            ignore=0x00000000,     ///<Ignore. Mask ignored.
            use=0x00000001,     ///<Use. Use mask (MSK[28:0], MXTD, and MDIR) for acceptance filtering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UmaskVal> umask{}; 
        namespace UmaskValC{
            constexpr Register::FieldValue<decltype(umask)::Type,UmaskVal::ignore> ignore{};
            constexpr Register::FieldValue<decltype(umask)::Type,UmaskVal::use> use{};
        }
        ///Interrupt pending
        enum class IntpndVal {
            notPending=0x00000000,     ///<Not pending. This message object is not the source of an interrupt.
            pending=0x00000001,     ///<Pending. This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,IntpndVal> intpnd{}; 
        namespace IntpndValC{
            constexpr Register::FieldValue<decltype(intpnd)::Type,IntpndVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(intpnd)::Type,IntpndVal::pending> pending{};
        }
        ///Message lost (only valid for message objects in the direction receive).
        enum class MsglstVal {
            notLost=0x00000000,     ///<Not lost. No message lost since this bit was reset last by the CPU.
            lost=0x00000001,     ///<Lost. The Message Handler stored a new message into this object when NEWDAT was still set, the CPU has lost a message.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MsglstVal> msglst{}; 
        namespace MsglstValC{
            constexpr Register::FieldValue<decltype(msglst)::Type,MsglstVal::notLost> notLost{};
            constexpr Register::FieldValue<decltype(msglst)::Type,MsglstVal::lost> lost{};
        }
        ///New data
        enum class NewdatVal {
            noNewData=0x00000000,     ///<No new data. No new data has been written into the data portion of this message object by the message handler since this flag was cleared last by the CPU.
            newData=0x00000001,     ///<New data. The message handler or the CPU has written new data into the data portion of this message object.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,NewdatVal> newdat{}; 
        namespace NewdatValC{
            constexpr Register::FieldValue<decltype(newdat)::Type,NewdatVal::noNewData> noNewData{};
            constexpr Register::FieldValue<decltype(newdat)::Type,NewdatVal::newData> newData{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1Da1{    ///<Message interface 1 data A1
        using Addr = Register::Address<0x4005003c,0x00000000,0x00000000,unsigned>;
        ///Data byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        ///Data byte 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2Da1{    ///<Message interface 1 data A1
        using Addr = Register::Address<0x4005009c,0x00000000,0x00000000,unsigned>;
        ///Data byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        ///Data byte 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1Da2{    ///<Message interface 1 data A2
        using Addr = Register::Address<0x40050040,0x00000000,0x00000000,unsigned>;
        ///Data byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2Da2{    ///<Message interface 1 data A2
        using Addr = Register::Address<0x400500a0,0x00000000,0x00000000,unsigned>;
        ///Data byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1Db1{    ///<Message interface 1 data B1
        using Addr = Register::Address<0x40050044,0x00000000,0x00000000,unsigned>;
        ///Data byte 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        ///Data byte 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2Db1{    ///<Message interface 1 data B1
        using Addr = Register::Address<0x400500a4,0x00000000,0x00000000,unsigned>;
        ///Data byte 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        ///Data byte 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif1Db2{    ///<Message interface 1 data B2
        using Addr = Register::Address<0x40050048,0x00000000,0x00000000,unsigned>;
        ///Data byte 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data byte 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CCanCanif2Db2{    ///<Message interface 1 data B2
        using Addr = Register::Address<0x400500a8,0x00000000,0x00000000,unsigned>;
        ///Data byte 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data byte 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
