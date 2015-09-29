#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//C_CAN controller 
    namespace Nonecancntl{    ///<CAN control
        using Addr = Register::Address<0x40050000,0xffffff10,0,unsigned>;
        ///Initialization
        enum class initVal {
            normalOperation=0x00000000,     ///<Normal operation.
            initializationIsSt=0x00000001,     ///<Initialization is started. On reset, software needs to initialize the CAN controller.
        };
        namespace initValC{
            constexpr MPL::Value<initVal,initVal::normalOperation> normalOperation{};
            constexpr MPL::Value<initVal,initVal::initializationIsSt> initializationIsSt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,initVal> init{}; 
        ///Module interrupt enable
        enum class ieVal {
            disableCanInterrup=0x00000000,     ///<Disable CAN interrupts. The interrupt line is always HIGH.
            enableCanInterrupt=0x00000001,     ///<Enable CAN interrupts. The interrupt line is set to LOW and remains LOW until all pending interrupts are cleared.
        };
        namespace ieValC{
            constexpr MPL::Value<ieVal,ieVal::disableCanInterrup> disableCanInterrup{};
            constexpr MPL::Value<ieVal,ieVal::enableCanInterrupt> enableCanInterrupt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ieVal> ie{}; 
        ///Status change interrupt enable
        enum class sieVal {
            disableStatusChang=0x00000000,     ///<Disable status change interrupts. No status change interrupt will be generated.
            enableStatusChange=0x00000001,     ///<Enable status change interrupts. A status change interrupt will be generated when a message transfer is successfully completed or a CAN bus error is detected.
        };
        namespace sieValC{
            constexpr MPL::Value<sieVal,sieVal::disableStatusChang> disableStatusChang{};
            constexpr MPL::Value<sieVal,sieVal::enableStatusChange> enableStatusChange{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sieVal> sie{}; 
        ///Error interrupt enable
        enum class eieVal {
            disableErrorInterr=0x00000000,     ///<Disable error interrupt. No error status interrupt will be generated.
            enableErrorInterru=0x00000001,     ///<Enable error interrupt. A change in the bits BOFF or EWARN in the CANSTAT registers will generate an interrupt.
        };
        namespace eieValC{
            constexpr MPL::Value<eieVal,eieVal::disableErrorInterr> disableErrorInterr{};
            constexpr MPL::Value<eieVal,eieVal::enableErrorInterru> enableErrorInterru{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,eieVal> eie{}; 
        ///Disable automatic retransmission
        enum class darVal {
            automaticRetransmis=0x00000000,     ///<Automatic retransmission of disturbed messages enabled.
            automaticRetransmis=0x00000001,     ///<Automatic retransmission disabled.
        };
        namespace darValC{
            constexpr MPL::Value<darVal,darVal::automaticRetransmis> automaticRetransmis{};
            constexpr MPL::Value<darVal,darVal::automaticRetransmis> automaticRetransmis{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,darVal> dar{}; 
        ///Configuration change enable
        enum class cceVal {
            theCpuHasNoWrite=0x00000000,     ///<The CPU has no write access to the bit timing register.
            theCpuHasWriteAc=0x00000001,     ///<The CPU has write access to the CANBT register while the INIT bit is one.
        };
        namespace cceValC{
            constexpr MPL::Value<cceVal,cceVal::theCpuHasNoWrite> theCpuHasNoWrite{};
            constexpr MPL::Value<cceVal,cceVal::theCpuHasWriteAc> theCpuHasWriteAc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cceVal> cce{}; 
        ///Test mode enable
        enum class enum_Val {
            normalOperation=0x00000000,     ///<Normal operation.
            testMode=0x00000001,     ///<Test mode.
        };
        namespace enum_ValC{
            constexpr MPL::Value<enum_Val,enum_Val::normalOperation> normalOperation{};
            constexpr MPL::Value<enum_Val,enum_Val::testMode> testMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enum_Val> enum_{}; 
    }
    namespace Nonecanstat{    ///<Status register
        using Addr = Register::Address<0x40050004,0xffffff00,0,unsigned>;
        ///Last error code Type of the last error to occur on the CAN bus.The LEC field holds a code which indicates the type of the last error to occur on the CAN bus. This field will be cleared to 0 when a message has been transferred (reception or transmission) without error. The unused code 111 may be written by the CPU to check for updates.
        enum class lecVal {
            noError=0x00000000,     ///<No error.
            stuffErrorMoreTh=0x00000001,     ///<Stuff error: More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed.
            formErrorAFixed=0x00000002,     ///<Form error: A fixed format part of a received frame has the wrong format.
            ackerrorTheMessag=0x00000003,     ///<AckError: The message this CAN core transmitted was not acknowledged.
            bit1errorDuringTh=0x00000004,     ///<Bit1Error: During the transmission of a message (with the exception of the arbitration field), the device wanted to send a HIGH/recessive level (bit of logical value 1), but the monitored bus value was LOW/dominant.
            bit0errorDuringTh=0x00000005,     ///<Bit0Error: During the transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device wanted to send a LOW/dominant level (data or identifier bit logical value 0), but the monitored Bus value was HIGH/recessive. During busoff recovery this status is set each time a sequence of 11 HIGH/recessive bits has been monitored. This enables the CPU to monitor the proceeding of the busoff recovery sequence (indicating the bus is not stuck at LOW/dominant or continuously disturbed).
            crcerrorTheCrcCh=0x00000006,     ///<CRCError: The CRC checksum was incorrect in the message received.
            unusedNoCanBusE=0x00000007,     ///<Unused: No CAN bus event was detected (written by the CPU).
        };
        namespace lecValC{
            constexpr MPL::Value<lecVal,lecVal::noError> noError{};
            constexpr MPL::Value<lecVal,lecVal::stuffErrorMoreTh> stuffErrorMoreTh{};
            constexpr MPL::Value<lecVal,lecVal::formErrorAFixed> formErrorAFixed{};
            constexpr MPL::Value<lecVal,lecVal::ackerrorTheMessag> ackerrorTheMessag{};
            constexpr MPL::Value<lecVal,lecVal::bit1errorDuringTh> bit1errorDuringTh{};
            constexpr MPL::Value<lecVal,lecVal::bit0errorDuringTh> bit0errorDuringTh{};
            constexpr MPL::Value<lecVal,lecVal::crcerrorTheCrcCh> crcerrorTheCrcCh{};
            constexpr MPL::Value<lecVal,lecVal::unusedNoCanBusE> unusedNoCanBusE{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,lecVal> lec{}; 
        ///Transmitted a message successfully This bit must be reset by the CPU. It is never reset by the CAN controller.
        enum class txokVal {
            noTransmit=0x00000000,     ///<No transmit. Since this bit was last reset by the CPU, no message has been successfully transmitted.
            successfulTransmit=0x00000001,     ///<Successful transmit. Since this bit was last reset by the CPU, a message has been successfully transmitted (error free and acknowledged by at least one other node).
        };
        namespace txokValC{
            constexpr MPL::Value<txokVal,txokVal::noTransmit> noTransmit{};
            constexpr MPL::Value<txokVal,txokVal::successfulTransmit> successfulTransmit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,txokVal> txok{}; 
        ///Received a message successfully This bit must be reset by the CPU. It is never reset by the CAN controller.
        enum class rxokVal {
            noReceive=0x00000000,     ///<No receive. Since this bit was last reset by the CPU, no message has been successfully received.
            successfulReceive=0x00000001,     ///<Successful receive.Since this bit was last set to zero by the CPU, a message has been successfully received independent of the result of acceptance filtering.
        };
        namespace rxokValC{
            constexpr MPL::Value<rxokVal,rxokVal::noReceive> noReceive{};
            constexpr MPL::Value<rxokVal,rxokVal::successfulReceive> successfulReceive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rxokVal> rxok{}; 
        ///Error passive
        enum class epassVal {
            active=0x00000000,     ///<Active. The CAN controller is in the error active state.
            passive=0x00000001,     ///<Passive. The CAN controller is in the error passive state as defined in the CAN 2.0 specification.
        };
        namespace epassValC{
            constexpr MPL::Value<epassVal,epassVal::active> active{};
            constexpr MPL::Value<epassVal,epassVal::passive> passive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,epassVal> epass{}; 
        ///Warning status
        enum class ewarnVal {
            belowLimit=0x00000000,     ///<Below limit. Both error counters are below the error warning limit of 96.
            atLimit=0x00000001,     ///<At limit. At least one of the error counters in the EC has reached the error warning limit of 96.
        };
        namespace ewarnValC{
            constexpr MPL::Value<ewarnVal,ewarnVal::belowLimit> belowLimit{};
            constexpr MPL::Value<ewarnVal,ewarnVal::atLimit> atLimit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ewarnVal> ewarn{}; 
        ///Busoff status
        enum class boffVal {
            theCanModuleIsNo=0x00000000,     ///<The CAN module is not in busoff.
            theCanControllerI=0x00000001,     ///<The CAN controller is in busoff state.
        };
        namespace boffValC{
            constexpr MPL::Value<boffVal,boffVal::theCanModuleIsNo> theCanModuleIsNo{};
            constexpr MPL::Value<boffVal,boffVal::theCanControllerI> theCanControllerI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,boffVal> boff{}; 
    }
    namespace Nonecanec{    ///<Error counter
        using Addr = Register::Address<0x40050008,0xffff0000,0,unsigned>;
        ///Transmit error counter Current value of the transmit error counter (maximum value 255)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec70{}; 
        ///Receive error counter Current value of the receive error counter (maximum value 127).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rec60{}; 
        ///Receive error passive
        enum class rpVal {
            theReceiveCounter=0x00000000,     ///<The receive counter is below the error passive level.
            theReceiveCounter=0x00000001,     ///<The receive counter has reached the error passive level as defined in the  CAN2.0 specification.
        };
        namespace rpValC{
            constexpr MPL::Value<rpVal,rpVal::theReceiveCounter> theReceiveCounter{};
            constexpr MPL::Value<rpVal,rpVal::theReceiveCounter> theReceiveCounter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,rpVal> rp{}; 
    }
    namespace Nonecanbt{    ///<Bit timing register
        using Addr = Register::Address<0x4005000c,0xffff8000,0,unsigned>;
        ///Baud rate prescaler The value by which the oscillator frequency is divided for generating the bit time quanta. The bit time is built up from a multiple of this quanta. Valid values for the Baud Rate Prescaler are 0 to 63.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> brp{}; 
        ///(Re)synchronization jump width Valid programmed values are 0 to 3.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sjw{}; 
        ///Time segment before the sample point Valid values are 1 to 15.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        ///Time segment after the sample point Valid values are 0 to 7.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tseg2{}; 
    }
    namespace Nonecanint{    ///<Interrupt register
        using Addr = Register::Address<0x40050010,0xffff0000,0,unsigned>;
        ///0x0000 = No interrupt is pending. 0x0001 - 0x0020 = Number of message object which caused the interrupt. 0x0021 - 0x7FFF = Unused 0x8000 = Status interrupt 0x8001 - 0xFFFF = Unused
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intid{}; 
    }
    namespace Nonecantest{    ///<Test register
        using Addr = Register::Address<0x40050014,0xffffff03,0,unsigned>;
        ///Basic mode
        enum class basicVal {
            disabled=0x00000000,     ///<Disabled. Basic mode disabled.
            enabled=0x00000001,     ///<Enabled. IF1 registers used as TX buffer, IF2 registers used as RX buffer.
        };
        namespace basicValC{
            constexpr MPL::Value<basicVal,basicVal::disabled> disabled{};
            constexpr MPL::Value<basicVal,basicVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,basicVal> basic{}; 
        ///Silent mode
        enum class silentVal {
            normalOperation=0x00000000,     ///<Normal operation.
            silentMode=0x00000001,     ///<Silent mode. The module is in silent mode.
        };
        namespace silentValC{
            constexpr MPL::Value<silentVal,silentVal::normalOperation> normalOperation{};
            constexpr MPL::Value<silentVal,silentVal::silentMode> silentMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,silentVal> silent{}; 
        ///Loop back mode
        enum class lbackVal {
            disabled=0x00000000,     ///<Disabled. Loop back mode is disabled.
            enabled=0x00000001,     ///<Enabled. Loop back mode is enabled.
        };
        namespace lbackValC{
            constexpr MPL::Value<lbackVal,lbackVal::disabled> disabled{};
            constexpr MPL::Value<lbackVal,lbackVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lbackVal> lback{}; 
        ///Control of CAN_TXD pins
        enum class txVal {
            controller=0x00000000,     ///<Controller. Level at the CAN_TXD pin is controlled by the CAN controller. This is the value at reset.
            samplePoint=0x00000001,     ///<Sample point. The sample point can be monitored at the CAN_TXD pin.
            low=0x00000002,     ///<Low. CAN_TXD pin is driven LOW/dominant.
            hogh=0x00000003,     ///<Hogh. CAN_TXD pin is driven HIGH/recessive.
        };
        namespace txValC{
            constexpr MPL::Value<txVal,txVal::controller> controller{};
            constexpr MPL::Value<txVal,txVal::samplePoint> samplePoint{};
            constexpr MPL::Value<txVal,txVal::low> low{};
            constexpr MPL::Value<txVal,txVal::hogh> hogh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,txVal> tx{}; 
        ///Monitors the actual value of the CAN_RXD pin.
        enum class rxVal {
            recessive=0x00000000,     ///<Recessive. The CAN bus is recessive (CAN_RXD = 1).
            dominant=0x00000001,     ///<Dominant. The CAN bus is dominant (CAN_RXD = 0).
        };
        namespace rxValC{
            constexpr MPL::Value<rxVal,rxVal::recessive> recessive{};
            constexpr MPL::Value<rxVal,rxVal::dominant> dominant{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxVal> rx{}; 
    }
    namespace Nonecanbrpe{    ///<Baud rate prescaler extension register
        using Addr = Register::Address<0x40050018,0xfffffff0,0,unsigned>;
        ///Baud rate prescaler extension By programming BRPE the Baud Rate Prescaler can be extended to values up to 1023. Hardware interprets the value as the value of BRPE (MSBs) and BRP (LSBs) plus one. Allowed values are 0 to 15.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brpe{}; 
    }
    namespace Nonecanif1Cmdreq{    ///<Message interface 1 command request
        using Addr = Register::Address<0x40050020,0xffff7fc0,0,unsigned>;
        ///Message number 0x01 - 0x20 = Valid message numbers. The message object in the message RAM is selected for data transfer. 0x00 = Not a valid message number. This value is interpreted as 0x20.[1] 0x21 - 0x3F = Not a valid message number. This value is interpreted as 0x01 - 0x1F.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> mn{}; 
        ///BUSY flag
        enum class busyVal {
            done=0x00000000,     ///<Done. Set to zero by hardware when read/write action to this Command request register has finished.
            busy=0x00000001,     ///<Busy. Set to one by hardware when writing to this Command request register.
        };
        namespace busyValC{
            constexpr MPL::Value<busyVal,busyVal::done> done{};
            constexpr MPL::Value<busyVal,busyVal::busy> busy{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,busyVal> busy{}; 
    }
    namespace Nonecanif2Cmdreq{    ///<Message interface 1 command request
        using Addr = Register::Address<0x40050080,0xffff7fc0,0,unsigned>;
        ///Message number 0x01 - 0x20 = Valid message numbers. The message object in the message RAM is selected for data transfer. 0x00 = Not a valid message number. This value is interpreted as 0x20.[1] 0x21 - 0x3F = Not a valid message number. This value is interpreted as 0x01 - 0x1F.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> mn{}; 
        ///BUSY flag
        enum class busyVal {
            done=0x00000000,     ///<Done. Set to zero by hardware when read/write action to this Command request register has finished.
            busy=0x00000001,     ///<Busy. Set to one by hardware when writing to this Command request register.
        };
        namespace busyValC{
            constexpr MPL::Value<busyVal,busyVal::done> done{};
            constexpr MPL::Value<busyVal,busyVal::busy> busy{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,busyVal> busy{}; 
    }
    namespace Nonecanif1CmdmskW{    ///<Message interface 1 command mask (write direction)
        using Addr = Register::Address<0x40050024,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class dataBVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 4-7 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 4-7 to message object.
        };
        namespace dataBValC{
            constexpr MPL::Value<dataBVal,dataBVal::unchanged> unchanged{};
            constexpr MPL::Value<dataBVal,dataBVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dataBVal> dataB{}; 
        ///Access data bytes 0-3
        enum class dataAVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 0-3 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 0-3 to message object.
        };
        namespace dataAValC{
            constexpr MPL::Value<dataAVal,dataAVal::unchanged> unchanged{};
            constexpr MPL::Value<dataAVal,dataAVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dataAVal> dataA{}; 
        ///Access transmission request bit
        enum class txrqstVal {
            noTransmissionRequ=0x00000000,     ///<No transmission request. TXRQSRT bit unchanged in IF1/2_MCTRL. If a transmission is requested by programming this bit, the TXRQST bit in the CANIFn_MCTRL register is ignored.
            requestATransmissi=0x00000001,     ///<Request a transmission. Set the TXRQST bit IF1/2_MCTRL.
        };
        namespace txrqstValC{
            constexpr MPL::Value<txrqstVal,txrqstVal::noTransmissionRequ> noTransmissionRequ{};
            constexpr MPL::Value<txrqstVal,txrqstVal::requestATransmissi> requestATransmissi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,txrqstVal> txrqst{}; 
        ///This bit is ignored in the write direction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        ///Access control bits
        enum class ctrlVal {
            unchanged=0x00000000,     ///<Unchanged. Control bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer control bits to message object
        };
        namespace ctrlValC{
            constexpr MPL::Value<ctrlVal,ctrlVal::unchanged> unchanged{};
            constexpr MPL::Value<ctrlVal,ctrlVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ctrlVal> ctrl{}; 
        ///Access arbitration bits
        enum class arbVal {
            unchanged=0x00000000,     ///<Unchanged. Arbitration bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier, DIR, XTD, and MSGVAL bits to message object.
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::unchanged> unchanged{};
            constexpr MPL::Value<arbVal,arbVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Access mask bits
        enum class maskVal {
            unchanged=0x00000000,     ///<Unchanged. Mask bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier MASK + MDIR + MXTD to message object.
        };
        namespace maskValC{
            constexpr MPL::Value<maskVal,maskVal::unchanged> unchanged{};
            constexpr MPL::Value<maskVal,maskVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maskVal> mask{}; 
        ///Write transfer Transfer data from the selected message buffer registers to the message object addressed by the command request register CANIFn_CMDREQ.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
    }
    namespace Nonecanif2CmdmskW{    ///<Message interface 1 command mask (write direction)
        using Addr = Register::Address<0x40050084,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class dataBVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 4-7 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 4-7 to message object.
        };
        namespace dataBValC{
            constexpr MPL::Value<dataBVal,dataBVal::unchanged> unchanged{};
            constexpr MPL::Value<dataBVal,dataBVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dataBVal> dataB{}; 
        ///Access data bytes 0-3
        enum class dataAVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 0-3 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 0-3 to message object.
        };
        namespace dataAValC{
            constexpr MPL::Value<dataAVal,dataAVal::unchanged> unchanged{};
            constexpr MPL::Value<dataAVal,dataAVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dataAVal> dataA{}; 
        ///Access transmission request bit
        enum class txrqstVal {
            noTransmissionRequ=0x00000000,     ///<No transmission request. TXRQSRT bit unchanged in IF1/2_MCTRL. If a transmission is requested by programming this bit, the TXRQST bit in the CANIFn_MCTRL register is ignored.
            requestATransmissi=0x00000001,     ///<Request a transmission. Set the TXRQST bit IF1/2_MCTRL.
        };
        namespace txrqstValC{
            constexpr MPL::Value<txrqstVal,txrqstVal::noTransmissionRequ> noTransmissionRequ{};
            constexpr MPL::Value<txrqstVal,txrqstVal::requestATransmissi> requestATransmissi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,txrqstVal> txrqst{}; 
        ///This bit is ignored in the write direction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        ///Access control bits
        enum class ctrlVal {
            unchanged=0x00000000,     ///<Unchanged. Control bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer control bits to message object
        };
        namespace ctrlValC{
            constexpr MPL::Value<ctrlVal,ctrlVal::unchanged> unchanged{};
            constexpr MPL::Value<ctrlVal,ctrlVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ctrlVal> ctrl{}; 
        ///Access arbitration bits
        enum class arbVal {
            unchanged=0x00000000,     ///<Unchanged. Arbitration bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier, DIR, XTD, and MSGVAL bits to message object.
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::unchanged> unchanged{};
            constexpr MPL::Value<arbVal,arbVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Access mask bits
        enum class maskVal {
            unchanged=0x00000000,     ///<Unchanged. Mask bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier MASK + MDIR + MXTD to message object.
        };
        namespace maskValC{
            constexpr MPL::Value<maskVal,maskVal::unchanged> unchanged{};
            constexpr MPL::Value<maskVal,maskVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maskVal> mask{}; 
        ///Write transfer Transfer data from the selected message buffer registers to the message object addressed by the command request register CANIFn_CMDREQ.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
    }
    namespace Nonecanif1CmdmskR{    ///<Message interface 1 command mask (read direction)
        using Addr = Register::Address<0x40050024,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class dataBVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 4-7 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 4-7 to IFx message buffer register.
        };
        namespace dataBValC{
            constexpr MPL::Value<dataBVal,dataBVal::unchanged> unchanged{};
            constexpr MPL::Value<dataBVal,dataBVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dataBVal> dataB{}; 
        ///Access data bytes 0-3
        enum class dataAVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 0-3 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 0-3 to IFx message buffer.
        };
        namespace dataAValC{
            constexpr MPL::Value<dataAVal,dataAVal::unchanged> unchanged{};
            constexpr MPL::Value<dataAVal,dataAVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dataAVal> dataA{}; 
        ///Access new data bit
        enum class newdatVal {
            unchanged=0x00000000,     ///<Unchanged. NEWDAT bit remains unchanged. A read access to a message object can be combined with the reset of the control bits INTPND and NEWDAT in IF1/2_MCTRL. The values of these bits transferred to the IFx Message Control Register always reflect the status before resetting these bits.
            clear=0x00000001,     ///<Clear. Clear NEWDAT bit in the message object.
        };
        namespace newdatValC{
            constexpr MPL::Value<newdatVal,newdatVal::unchanged> unchanged{};
            constexpr MPL::Value<newdatVal,newdatVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,newdatVal> newdat{}; 
        ///Clear interrupt pending bit.
        enum class clrintpndVal {
            unchanged=0x00000000,     ///<Unchanged. INTPND bit remains unchanged.
            clear=0x00000001,     ///<Clear. Clear INTPND bit in the message object.
        };
        namespace clrintpndValC{
            constexpr MPL::Value<clrintpndVal,clrintpndVal::unchanged> unchanged{};
            constexpr MPL::Value<clrintpndVal,clrintpndVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrintpndVal> clrintpnd{}; 
        ///Access control bits
        enum class ctrlVal {
            unchanged=0x00000000,     ///<Unchanged. Control bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer control bits to IFx message buffer.
        };
        namespace ctrlValC{
            constexpr MPL::Value<ctrlVal,ctrlVal::unchanged> unchanged{};
            constexpr MPL::Value<ctrlVal,ctrlVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ctrlVal> ctrl{}; 
        ///Access arbitration bits
        enum class arbVal {
            unchanged=0x00000000,     ///<Unchanged. Arbitration bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier, DIR, XTD, and MSGVAL bits to IFx message buffer register.
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::unchanged> unchanged{};
            constexpr MPL::Value<arbVal,arbVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Access mask bits
        enum class maskVal {
            unchanged=0x00000000,     ///<Unchanged. Mask bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier MASK + MDIR + MXTD to IFx message buffer register.
        };
        namespace maskValC{
            constexpr MPL::Value<maskVal,maskVal::unchanged> unchanged{};
            constexpr MPL::Value<maskVal,maskVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maskVal> mask{}; 
        ///Read transfer Transfer data from the message object addressed by the command request register to the selected message buffer registers CANIFn_CMDREQ.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
    }
    namespace Nonecanif2CmdmskR{    ///<Message interface 1 command mask (read direction)
        using Addr = Register::Address<0x40050084,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class dataBVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 4-7 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 4-7 to IFx message buffer register.
        };
        namespace dataBValC{
            constexpr MPL::Value<dataBVal,dataBVal::unchanged> unchanged{};
            constexpr MPL::Value<dataBVal,dataBVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dataBVal> dataB{}; 
        ///Access data bytes 0-3
        enum class dataAVal {
            unchanged=0x00000000,     ///<Unchanged. Data bytes 0-3 unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer data bytes 0-3 to IFx message buffer.
        };
        namespace dataAValC{
            constexpr MPL::Value<dataAVal,dataAVal::unchanged> unchanged{};
            constexpr MPL::Value<dataAVal,dataAVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dataAVal> dataA{}; 
        ///Access new data bit
        enum class newdatVal {
            unchanged=0x00000000,     ///<Unchanged. NEWDAT bit remains unchanged. A read access to a message object can be combined with the reset of the control bits INTPND and NEWDAT in IF1/2_MCTRL. The values of these bits transferred to the IFx Message Control Register always reflect the status before resetting these bits.
            clear=0x00000001,     ///<Clear. Clear NEWDAT bit in the message object.
        };
        namespace newdatValC{
            constexpr MPL::Value<newdatVal,newdatVal::unchanged> unchanged{};
            constexpr MPL::Value<newdatVal,newdatVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,newdatVal> newdat{}; 
        ///Clear interrupt pending bit.
        enum class clrintpndVal {
            unchanged=0x00000000,     ///<Unchanged. INTPND bit remains unchanged.
            clear=0x00000001,     ///<Clear. Clear INTPND bit in the message object.
        };
        namespace clrintpndValC{
            constexpr MPL::Value<clrintpndVal,clrintpndVal::unchanged> unchanged{};
            constexpr MPL::Value<clrintpndVal,clrintpndVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrintpndVal> clrintpnd{}; 
        ///Access control bits
        enum class ctrlVal {
            unchanged=0x00000000,     ///<Unchanged. Control bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer control bits to IFx message buffer.
        };
        namespace ctrlValC{
            constexpr MPL::Value<ctrlVal,ctrlVal::unchanged> unchanged{};
            constexpr MPL::Value<ctrlVal,ctrlVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ctrlVal> ctrl{}; 
        ///Access arbitration bits
        enum class arbVal {
            unchanged=0x00000000,     ///<Unchanged. Arbitration bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier, DIR, XTD, and MSGVAL bits to IFx message buffer register.
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::unchanged> unchanged{};
            constexpr MPL::Value<arbVal,arbVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Access mask bits
        enum class maskVal {
            unchanged=0x00000000,     ///<Unchanged. Mask bits unchanged.
            transfer=0x00000001,     ///<Transfer. Transfer Identifier MASK + MDIR + MXTD to IFx message buffer register.
        };
        namespace maskValC{
            constexpr MPL::Value<maskVal,maskVal::unchanged> unchanged{};
            constexpr MPL::Value<maskVal,maskVal::transfer> transfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maskVal> mask{}; 
        ///Read transfer Transfer data from the message object addressed by the command request register to the selected message buffer registers CANIFn_CMDREQ.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
    }
    namespace Nonecanif1Msk1{    ///<Message interface 1 mask 1
        using Addr = Register::Address<0x40050028,0xffff0000,0,unsigned>;
        ///Identifier mask [15:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk150{}; 
    }
    namespace Nonecanif2Msk1{    ///<Message interface 1 mask 1
        using Addr = Register::Address<0x40050088,0xffff0000,0,unsigned>;
        ///Identifier mask [15:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk150{}; 
    }
    namespace Nonecanif1Msk2{    ///<Message interface 1 mask 2
        using Addr = Register::Address<0x4005002c,0xffff2000,0,unsigned>;
        ///Identifier mask [28:16]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk2816{}; 
        ///Mask message direction
        enum class mdirVal {
            withoutDirBit=0x00000000,     ///<Without DIR bit. The message direction bit (DIR) has no effect on acceptance filtering.
            withDirBit=0x00000001,     ///<With DIR bit. The message direction bit (DIR) is used for acceptance filtering.
        };
        namespace mdirValC{
            constexpr MPL::Value<mdirVal,mdirVal::withoutDirBit> withoutDirBit{};
            constexpr MPL::Value<mdirVal,mdirVal::withDirBit> withDirBit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,mdirVal> mdir{}; 
        ///Mask extend identifier
        enum class mxtdVal {
            withoutXtd=0x00000000,     ///<Without XTD. The extended identifier bit (XTD) has no effect on acceptance filtering.
            withXtd=0x00000001,     ///<With XTD. The extended identifier bit (XTD) is used for acceptance filtering.
        };
        namespace mxtdValC{
            constexpr MPL::Value<mxtdVal,mxtdVal::withoutXtd> withoutXtd{};
            constexpr MPL::Value<mxtdVal,mxtdVal::withXtd> withXtd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,mxtdVal> mxtd{}; 
    }
    namespace Nonecanif2Msk2{    ///<Message interface 1 mask 2
        using Addr = Register::Address<0x4005008c,0xffff2000,0,unsigned>;
        ///Identifier mask [28:16]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk2816{}; 
        ///Mask message direction
        enum class mdirVal {
            withoutDirBit=0x00000000,     ///<Without DIR bit. The message direction bit (DIR) has no effect on acceptance filtering.
            withDirBit=0x00000001,     ///<With DIR bit. The message direction bit (DIR) is used for acceptance filtering.
        };
        namespace mdirValC{
            constexpr MPL::Value<mdirVal,mdirVal::withoutDirBit> withoutDirBit{};
            constexpr MPL::Value<mdirVal,mdirVal::withDirBit> withDirBit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,mdirVal> mdir{}; 
        ///Mask extend identifier
        enum class mxtdVal {
            withoutXtd=0x00000000,     ///<Without XTD. The extended identifier bit (XTD) has no effect on acceptance filtering.
            withXtd=0x00000001,     ///<With XTD. The extended identifier bit (XTD) is used for acceptance filtering.
        };
        namespace mxtdValC{
            constexpr MPL::Value<mxtdVal,mxtdVal::withoutXtd> withoutXtd{};
            constexpr MPL::Value<mxtdVal,mxtdVal::withXtd> withXtd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,mxtdVal> mxtd{}; 
    }
    namespace Nonecanif1Arb1{    ///<Message interface 1 arbitration 1
        using Addr = Register::Address<0x40050030,0xffff0000,0,unsigned>;
        ///Message identifier [15:0] 29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id150{}; 
    }
    namespace Nonecanif2Arb1{    ///<Message interface 1 arbitration 1
        using Addr = Register::Address<0x40050090,0xffff0000,0,unsigned>;
        ///Message identifier [15:0] 29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id150{}; 
    }
    namespace Nonecanif1Arb2{    ///<Message interface 1 arbitration 2
        using Addr = Register::Address<0x40050034,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id2816{}; 
        ///Message direction
        enum class dirVal {
            receive=0x00000000,     ///<Receive. On TXRQST, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
            tansmit=0x00000001,     ///<Tansmit. On TXRQST, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TXRQST bit of this Message Object is set (if RMTEN = one).
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::receive> receive{};
            constexpr MPL::Value<dirVal,dirVal::tansmit> tansmit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Extend identifier
        enum class xtdVal {
            standard=0x00000000,     ///<Standard. The 11-bit standard identifier will be used for this message object.
            extended=0x00000001,     ///<Extended. The 29-bit extended identifier will be used for this message object.
        };
        namespace xtdValC{
            constexpr MPL::Value<xtdVal,xtdVal::standard> standard{};
            constexpr MPL::Value<xtdVal,xtdVal::extended> extended{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,xtdVal> xtd{}; 
        ///Message valid The CPU must reset the MSGVAL bit of all unused Messages Objects during the initialization before it resets bit INIT in the CAN Control Register. This bit must also be reset before the identifier ID28:0, the control bits XTD, DIR, or the Data Length Code DLC3:0 are modified, or if the Messages Object is no longer required.
        enum class msgvalVal {
            invalid=0x00000000,     ///<Invalid. The message object is ignored by the message handler.
            valid=0x00000001,     ///<Valid. The message object is configured and should be considered by the message handler.
        };
        namespace msgvalValC{
            constexpr MPL::Value<msgvalVal,msgvalVal::invalid> invalid{};
            constexpr MPL::Value<msgvalVal,msgvalVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,msgvalVal> msgval{}; 
    }
    namespace Nonecanif2Arb2{    ///<Message interface 1 arbitration 2
        using Addr = Register::Address<0x40050094,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id2816{}; 
        ///Message direction
        enum class dirVal {
            receive=0x00000000,     ///<Receive. On TXRQST, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
            tansmit=0x00000001,     ///<Tansmit. On TXRQST, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TXRQST bit of this Message Object is set (if RMTEN = one).
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::receive> receive{};
            constexpr MPL::Value<dirVal,dirVal::tansmit> tansmit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Extend identifier
        enum class xtdVal {
            standard=0x00000000,     ///<Standard. The 11-bit standard identifier will be used for this message object.
            extended=0x00000001,     ///<Extended. The 29-bit extended identifier will be used for this message object.
        };
        namespace xtdValC{
            constexpr MPL::Value<xtdVal,xtdVal::standard> standard{};
            constexpr MPL::Value<xtdVal,xtdVal::extended> extended{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,xtdVal> xtd{}; 
        ///Message valid The CPU must reset the MSGVAL bit of all unused Messages Objects during the initialization before it resets bit INIT in the CAN Control Register. This bit must also be reset before the identifier ID28:0, the control bits XTD, DIR, or the Data Length Code DLC3:0 are modified, or if the Messages Object is no longer required.
        enum class msgvalVal {
            invalid=0x00000000,     ///<Invalid. The message object is ignored by the message handler.
            valid=0x00000001,     ///<Valid. The message object is configured and should be considered by the message handler.
        };
        namespace msgvalValC{
            constexpr MPL::Value<msgvalVal,msgvalVal::invalid> invalid{};
            constexpr MPL::Value<msgvalVal,msgvalVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,msgvalVal> msgval{}; 
    }
    namespace Nonecanif1Mctrl{    ///<Message interface 1 message control
        using Addr = Register::Address<0x40050038,0xffff0070,0,unsigned>;
        ///Data length code 3:0 The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message. 0000 - 1000 = Data frame has 0 - 8 data bytes. 1001 - 1111 = Data frame has 8 data bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc30{}; 
        ///End of buffer
        enum class eobVal {
            notEndOfBuffer=0x00000000,     ///<Not end of buffer. Message object belongs to a FIFO buffer and is not the last message object of that FIFO buffer.
            endOfBuffer=0x00000001,     ///<End of buffer. Single message object or last message object of a FIFO buffer.
        };
        namespace eobValC{
            constexpr MPL::Value<eobVal,eobVal::notEndOfBuffer> notEndOfBuffer{};
            constexpr MPL::Value<eobVal,eobVal::endOfBuffer> endOfBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,eobVal> eob{}; 
        ///Transmit request
        enum class txrqstVal {
            notWaiting=0x00000000,     ///<Not waiting. This message object is not waiting for transmission.
            waiting=0x00000001,     ///<Waiting. The transmission of this message object is requested and is not yet done
        };
        namespace txrqstValC{
            constexpr MPL::Value<txrqstVal,txrqstVal::notWaiting> notWaiting{};
            constexpr MPL::Value<txrqstVal,txrqstVal::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,txrqstVal> txrqst{}; 
        ///Remote enable
        enum class rmtenVal {
            txrqstUnchanged=0x00000000,     ///<TXRQST unchanged. At the reception of a remote frame, TXRQST is left unchanged.
            txrqstSet=0x00000001,     ///<TXRQST set. At the reception of a remote frame, TXRQST is set.
        };
        namespace rmtenValC{
            constexpr MPL::Value<rmtenVal,rmtenVal::txrqstUnchanged> txrqstUnchanged{};
            constexpr MPL::Value<rmtenVal,rmtenVal::txrqstSet> txrqstSet{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rmtenVal> rmten{}; 
        ///Receive interrupt enable
        enum class rxieVal {
            intpndUnchanged=0x00000000,     ///<INTPND unchanged. INTPND will be left unchanged after successful reception of a frame.
            intpndSet=0x00000001,     ///<INTPND set. INTPND will be set after successful reception of a frame.
        };
        namespace rxieValC{
            constexpr MPL::Value<rxieVal,rxieVal::intpndUnchanged> intpndUnchanged{};
            constexpr MPL::Value<rxieVal,rxieVal::intpndSet> intpndSet{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rxieVal> rxie{}; 
        ///Transmit interrupt enable
        enum class txieVal {
            intpndUnchanged=0x00000000,     ///<INTPND unchanged. The INTPND bit will be left unchanged after a successful transmission of a frame.
            intpndSet=0x00000001,     ///<INTPND set. INTPND will be set after a successful transmission of a frame.
        };
        namespace txieValC{
            constexpr MPL::Value<txieVal,txieVal::intpndUnchanged> intpndUnchanged{};
            constexpr MPL::Value<txieVal,txieVal::intpndSet> intpndSet{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,txieVal> txie{}; 
        ///Use acceptance mask If UMASK is set to 1, the message object's mask bits have to be programmed during initialization of the message object before MAGVAL is set to 1.
        enum class umaskVal {
            ignore=0x00000000,     ///<Ignore. Mask ignored.
            use=0x00000001,     ///<Use. Use mask (MSK[28:0], MXTD, and MDIR) for acceptance filtering.
        };
        namespace umaskValC{
            constexpr MPL::Value<umaskVal,umaskVal::ignore> ignore{};
            constexpr MPL::Value<umaskVal,umaskVal::use> use{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,umaskVal> umask{}; 
        ///Interrupt pending
        enum class intpndVal {
            notPending=0x00000000,     ///<Not pending. This message object is not the source of an interrupt.
            pending=0x00000001,     ///<Pending. This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
        };
        namespace intpndValC{
            constexpr MPL::Value<intpndVal,intpndVal::notPending> notPending{};
            constexpr MPL::Value<intpndVal,intpndVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,intpndVal> intpnd{}; 
        ///Message lost (only valid for message objects in the direction receive).
        enum class msglstVal {
            notLost=0x00000000,     ///<Not lost. No message lost since this bit was reset last by the CPU.
            lost=0x00000001,     ///<Lost. The Message Handler stored a new message into this object when NEWDAT was still set, the CPU has lost a message.
        };
        namespace msglstValC{
            constexpr MPL::Value<msglstVal,msglstVal::notLost> notLost{};
            constexpr MPL::Value<msglstVal,msglstVal::lost> lost{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,msglstVal> msglst{}; 
        ///New data
        enum class newdatVal {
            noNewData=0x00000000,     ///<No new data. No new data has been written into the data portion of this message object by the message handler since this flag was cleared last by the CPU.
            newData=0x00000001,     ///<New data. The message handler or the CPU has written new data into the data portion of this message object.
        };
        namespace newdatValC{
            constexpr MPL::Value<newdatVal,newdatVal::noNewData> noNewData{};
            constexpr MPL::Value<newdatVal,newdatVal::newData> newData{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,newdatVal> newdat{}; 
    }
    namespace Nonecanif2Mctrl{    ///<Message interface 1 message control
        using Addr = Register::Address<0x40050098,0xffff0070,0,unsigned>;
        ///Data length code 3:0 The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message. 0000 - 1000 = Data frame has 0 - 8 data bytes. 1001 - 1111 = Data frame has 8 data bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc30{}; 
        ///End of buffer
        enum class eobVal {
            notEndOfBuffer=0x00000000,     ///<Not end of buffer. Message object belongs to a FIFO buffer and is not the last message object of that FIFO buffer.
            endOfBuffer=0x00000001,     ///<End of buffer. Single message object or last message object of a FIFO buffer.
        };
        namespace eobValC{
            constexpr MPL::Value<eobVal,eobVal::notEndOfBuffer> notEndOfBuffer{};
            constexpr MPL::Value<eobVal,eobVal::endOfBuffer> endOfBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,eobVal> eob{}; 
        ///Transmit request
        enum class txrqstVal {
            notWaiting=0x00000000,     ///<Not waiting. This message object is not waiting for transmission.
            waiting=0x00000001,     ///<Waiting. The transmission of this message object is requested and is not yet done
        };
        namespace txrqstValC{
            constexpr MPL::Value<txrqstVal,txrqstVal::notWaiting> notWaiting{};
            constexpr MPL::Value<txrqstVal,txrqstVal::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,txrqstVal> txrqst{}; 
        ///Remote enable
        enum class rmtenVal {
            txrqstUnchanged=0x00000000,     ///<TXRQST unchanged. At the reception of a remote frame, TXRQST is left unchanged.
            txrqstSet=0x00000001,     ///<TXRQST set. At the reception of a remote frame, TXRQST is set.
        };
        namespace rmtenValC{
            constexpr MPL::Value<rmtenVal,rmtenVal::txrqstUnchanged> txrqstUnchanged{};
            constexpr MPL::Value<rmtenVal,rmtenVal::txrqstSet> txrqstSet{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rmtenVal> rmten{}; 
        ///Receive interrupt enable
        enum class rxieVal {
            intpndUnchanged=0x00000000,     ///<INTPND unchanged. INTPND will be left unchanged after successful reception of a frame.
            intpndSet=0x00000001,     ///<INTPND set. INTPND will be set after successful reception of a frame.
        };
        namespace rxieValC{
            constexpr MPL::Value<rxieVal,rxieVal::intpndUnchanged> intpndUnchanged{};
            constexpr MPL::Value<rxieVal,rxieVal::intpndSet> intpndSet{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rxieVal> rxie{}; 
        ///Transmit interrupt enable
        enum class txieVal {
            intpndUnchanged=0x00000000,     ///<INTPND unchanged. The INTPND bit will be left unchanged after a successful transmission of a frame.
            intpndSet=0x00000001,     ///<INTPND set. INTPND will be set after a successful transmission of a frame.
        };
        namespace txieValC{
            constexpr MPL::Value<txieVal,txieVal::intpndUnchanged> intpndUnchanged{};
            constexpr MPL::Value<txieVal,txieVal::intpndSet> intpndSet{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,txieVal> txie{}; 
        ///Use acceptance mask If UMASK is set to 1, the message object's mask bits have to be programmed during initialization of the message object before MAGVAL is set to 1.
        enum class umaskVal {
            ignore=0x00000000,     ///<Ignore. Mask ignored.
            use=0x00000001,     ///<Use. Use mask (MSK[28:0], MXTD, and MDIR) for acceptance filtering.
        };
        namespace umaskValC{
            constexpr MPL::Value<umaskVal,umaskVal::ignore> ignore{};
            constexpr MPL::Value<umaskVal,umaskVal::use> use{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,umaskVal> umask{}; 
        ///Interrupt pending
        enum class intpndVal {
            notPending=0x00000000,     ///<Not pending. This message object is not the source of an interrupt.
            pending=0x00000001,     ///<Pending. This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
        };
        namespace intpndValC{
            constexpr MPL::Value<intpndVal,intpndVal::notPending> notPending{};
            constexpr MPL::Value<intpndVal,intpndVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,intpndVal> intpnd{}; 
        ///Message lost (only valid for message objects in the direction receive).
        enum class msglstVal {
            notLost=0x00000000,     ///<Not lost. No message lost since this bit was reset last by the CPU.
            lost=0x00000001,     ///<Lost. The Message Handler stored a new message into this object when NEWDAT was still set, the CPU has lost a message.
        };
        namespace msglstValC{
            constexpr MPL::Value<msglstVal,msglstVal::notLost> notLost{};
            constexpr MPL::Value<msglstVal,msglstVal::lost> lost{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,msglstVal> msglst{}; 
        ///New data
        enum class newdatVal {
            noNewData=0x00000000,     ///<No new data. No new data has been written into the data portion of this message object by the message handler since this flag was cleared last by the CPU.
            newData=0x00000001,     ///<New data. The message handler or the CPU has written new data into the data portion of this message object.
        };
        namespace newdatValC{
            constexpr MPL::Value<newdatVal,newdatVal::noNewData> noNewData{};
            constexpr MPL::Value<newdatVal,newdatVal::newData> newData{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,newdatVal> newdat{}; 
    }
    namespace Nonecanif1Da1{    ///<Message interface 1 data A1
        using Addr = Register::Address<0x4005003c,0xffff0000,0,unsigned>;
        ///Data byte 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        ///Data byte 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Nonecanif2Da1{    ///<Message interface 1 data A1
        using Addr = Register::Address<0x4005009c,0xffff0000,0,unsigned>;
        ///Data byte 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        ///Data byte 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Nonecanif1Da2{    ///<Message interface 1 data A2
        using Addr = Register::Address<0x40050040,0xffff0000,0,unsigned>;
        ///Data byte 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data byte 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
    }
    namespace Nonecanif2Da2{    ///<Message interface 1 data A2
        using Addr = Register::Address<0x400500a0,0xffff0000,0,unsigned>;
        ///Data byte 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data byte 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
    }
    namespace Nonecanif1Db1{    ///<Message interface 1 data B1
        using Addr = Register::Address<0x40050044,0xffff0000,0,unsigned>;
        ///Data byte 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        ///Data byte 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
    }
    namespace Nonecanif2Db1{    ///<Message interface 1 data B1
        using Addr = Register::Address<0x400500a4,0xffff0000,0,unsigned>;
        ///Data byte 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        ///Data byte 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
    }
    namespace Nonecanif1Db2{    ///<Message interface 1 data B2
        using Addr = Register::Address<0x40050048,0xffff0000,0,unsigned>;
        ///Data byte 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data byte 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
    }
    namespace Nonecanif2Db2{    ///<Message interface 1 data B2
        using Addr = Register::Address<0x400500a8,0xffff0000,0,unsigned>;
        ///Data byte 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data byte 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
    }
    namespace Nonecantxreq1{    ///<Transmission request 1
        using Addr = Register::Address<0x40050100,0xffff0000,0,unsigned>;
        ///Transmission request bit of message objects 16 to 1. 0 = This message object is not waiting for transmission. 1 = The transmission of this message object is requested and not yet done.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst161{}; 
    }
    namespace Nonecantxreq2{    ///<Transmission request 2
        using Addr = Register::Address<0x40050104,0xffff0000,0,unsigned>;
        ///Transmission request bit of message objects 32 to 17. 0 = This message object is not waiting for transmission. 1 = The transmission of this message object is requested and not yet done.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst3217{}; 
    }
    namespace Nonecannd1{    ///<New data 1
        using Addr = Register::Address<0x40050120,0xffff0000,0,unsigned>;
        ///New data bits of message objects 16 to 1. 0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the CPU. 1 = The Message Handler or the CPU has written new data into the data portion of this Message Object.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdat161{}; 
    }
    namespace Nonecannd2{    ///<New data 2
        using Addr = Register::Address<0x40050124,0xffff0000,0,unsigned>;
        ///New data bits of message objects 32 to 17. 0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the CPU. 1 = The Message Handler or the CPU has written new data into the data portion of this Message Object.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdat3217{}; 
    }
    namespace Nonecanir1{    ///<Interrupt pending 1
        using Addr = Register::Address<0x40050140,0xffff0000,0,unsigned>;
        ///Interrupt pending bits of message objects 16 to 1. 0 = This message object is ignored by the message handler. 1 = This message object is the source of an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd161{}; 
    }
    namespace Nonecanir2{    ///<Interrupt pending 2
        using Addr = Register::Address<0x40050144,0xffff0000,0,unsigned>;
        ///Interrupt pending bits of message objects 32 to 17. 0 = This message object is ignored by the message handler. 1 = This message object is the source of an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd3217{}; 
    }
    namespace Nonecanmsgv1{    ///<Message valid 1
        using Addr = Register::Address<0x40050160,0xffff0000,0,unsigned>;
        ///Message valid bits of message objects 16 to 1. 0 = This message object is ignored by the message handler. 1 = This message object is configured and should be considered by the message handler.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval161{}; 
    }
    namespace Nonecanmsgv2{    ///<Message valid 2
        using Addr = Register::Address<0x40050164,0xffff0000,0,unsigned>;
        ///Message valid bits of message objects 32 to 17. 0 = This message object is ignored by the message handler. 1 = This message object is configured and should be considered by the message handler.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval3217{}; 
    }
    namespace Nonecanclkdiv{    ///<Can clock divider register
        using Addr = Register::Address<0x40050180,0xfffffff0,0,unsigned>;
        ///Clock divider value. CAN_CLK =  PCLK/(CLKDIVVAL +1) 0000: CAN_CLK = PCLK divided by 1. 0001: CAN_CLK = PCLK divided by 2. 0010: CAN_CLK = PCLK divided by 3 0011: CAN_CLK = PCLK divided by 4. ... 1111: CAN_CLK = PCLK divided by 16.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clkdivval{}; 
    }
}
