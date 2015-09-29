#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx C_CAN Modification date=1/18/2011 Major revision=0 Minor revision=7 
    namespace Nonecntl{    ///<CAN control
        using Addr = Register::Address<0x400a4000,0xffffff10,0,unsigned>;
        ///Initialization
        enum class initVal {
            initializationIsSt=0x00000001,     ///<Initialization is started. On reset, software needs to initialize the CAN controller.
            normalOperation=0x00000000,     ///<Normal operation.
        };
        namespace initValC{
            constexpr MPL::Value<initVal,initVal::initializationIsSt> initializationIsSt{};
            constexpr MPL::Value<initVal,initVal::normalOperation> normalOperation{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,initVal> init{}; 
        ///Module interrupt enable
        enum class ieVal {
            enableCanInterrupt=0x00000001,     ///<Enable CAN interrupts. The interrupt line is set to LOW and remains LOW until all pending interrupts are cleared.
            disableCanInterrup=0x00000000,     ///<Disable CAN interrupts. The interrupt line is always HIGH.
        };
        namespace ieValC{
            constexpr MPL::Value<ieVal,ieVal::enableCanInterrupt> enableCanInterrupt{};
            constexpr MPL::Value<ieVal,ieVal::disableCanInterrup> disableCanInterrup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ieVal> ie{}; 
        ///Status change interrupt enable
        enum class sieVal {
            enableStatusChange=0x00000001,     ///<Enable status change interrupts. A status change interrupt will be generated when a message transfer is successfully completed or a CAN bus error is detected.
            disableStatusChang=0x00000000,     ///<Disable status change interrupts. No status change interrupt will be generated.
        };
        namespace sieValC{
            constexpr MPL::Value<sieVal,sieVal::enableStatusChange> enableStatusChange{};
            constexpr MPL::Value<sieVal,sieVal::disableStatusChang> disableStatusChang{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sieVal> sie{}; 
        ///Error interrupt enable
        enum class eieVal {
            enableErrorInterru=0x00000001,     ///<Enable error interrupt. A change in the bits BOFF or EWARN in the CANSTAT registers will generate an interrupt.
            disableErrorInterr=0x00000000,     ///<Disable error interrupt. No error status interrupt will be generated.
        };
        namespace eieValC{
            constexpr MPL::Value<eieVal,eieVal::enableErrorInterru> enableErrorInterru{};
            constexpr MPL::Value<eieVal,eieVal::disableErrorInterr> disableErrorInterr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,eieVal> eie{}; 
        ///Disable automatic retransmission
        enum class darVal {
            disabled=0x00000001,     ///<Automatic retransmission disabled.
            enabled=0x00000000,     ///<Automatic retransmission of disturbed messages enabled.
        };
        namespace darValC{
            constexpr MPL::Value<darVal,darVal::disabled> disabled{};
            constexpr MPL::Value<darVal,darVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,darVal> dar{}; 
        ///Configuration change enable
        enum class cceVal {
            theCpuHasWriteAc=0x00000001,     ///<The CPU has write access to the CANBT register while the INIT bit is one.
            theCpuHasNoWrite=0x00000000,     ///<The CPU has no write access to the bit timing register.
        };
        namespace cceValC{
            constexpr MPL::Value<cceVal,cceVal::theCpuHasWriteAc> theCpuHasWriteAc{};
            constexpr MPL::Value<cceVal,cceVal::theCpuHasNoWrite> theCpuHasNoWrite{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cceVal> cce{}; 
        ///Test mode enable
        enum class testVal {
            testMode=0x00000001,     ///<Test mode.
            normalOperation=0x00000000,     ///<Normal operation.
        };
        namespace testValC{
            constexpr MPL::Value<testVal,testVal::testMode> testMode{};
            constexpr MPL::Value<testVal,testVal::normalOperation> normalOperation{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,testVal> test{}; 
    }
    namespace Nonestat{    ///<Status register
        using Addr = Register::Address<0x400a4004,0xffffff00,0,unsigned>;
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
        ///Transmitted a message successfully This bit is reset by the CPU. It is never reset by the CAN controller.
        enum class txokVal {
            msgtransfer=0x00000001,     ///<Since this bit was last reset by the CPU, a message has been successfully transmitted (error free and acknowledged by at least one other node).
            nomsgtransfer=0x00000000,     ///<Since this bit was reset by the CPU, no message has been successfully transmitted.
        };
        namespace txokValC{
            constexpr MPL::Value<txokVal,txokVal::msgtransfer> msgtransfer{};
            constexpr MPL::Value<txokVal,txokVal::nomsgtransfer> nomsgtransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,txokVal> txok{}; 
        ///Received a message successfully This bit is reset by the CPU. It is never reset by the CAN controller.
        enum class rxokVal {
            msgtransfer=0x00000001,     ///<Since this bit was last set to zero by the CPU, a message has been successfully received independent of the result of acceptance filtering.
            nomsgtransfer=0x00000000,     ///<Since this bit was last reset by the CPU, no message has been successfully transmitted.
        };
        namespace rxokValC{
            constexpr MPL::Value<rxokVal,rxokVal::msgtransfer> msgtransfer{};
            constexpr MPL::Value<rxokVal,rxokVal::nomsgtransfer> nomsgtransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rxokVal> rxok{}; 
        ///Error passive
        enum class epassVal {
            passive=0x00000001,     ///<The CAN controller is in the error passive state as defined in the  CAN 2.0 specification.
            active=0x00000000,     ///<The CAN controller is in the error active state.
        };
        namespace epassValC{
            constexpr MPL::Value<epassVal,epassVal::passive> passive{};
            constexpr MPL::Value<epassVal,epassVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,epassVal> epass{}; 
        ///Warning status
        enum class ewarnVal {
            atLeastOneOfThe=0x00000001,     ///<At least one of the error counters in the EML has reached the error warning limit of 96.
            bothErrorCounters=0x00000000,     ///<Both error counters are below the error warning limit of 96.
        };
        namespace ewarnValC{
            constexpr MPL::Value<ewarnVal,ewarnVal::atLeastOneOfThe> atLeastOneOfThe{};
            constexpr MPL::Value<ewarnVal,ewarnVal::bothErrorCounters> bothErrorCounters{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ewarnVal> ewarn{}; 
        ///Busoff status
        enum class boffVal {
            busoff=0x00000001,     ///<The CAN controller is in busoff state.
            nobusoff=0x00000000,     ///<The CAN module is not in busoff.
        };
        namespace boffValC{
            constexpr MPL::Value<boffVal,boffVal::busoff> busoff{};
            constexpr MPL::Value<boffVal,boffVal::nobusoff> nobusoff{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,boffVal> boff{}; 
    }
    namespace Noneec{    ///<Error counter
        using Addr = Register::Address<0x400a4008,0xffff0000,0,unsigned>;
        ///Transmit error counter Current value of the transmit error counter (maximum value 127)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec70{}; 
        ///Receive error counter Current value of the receive error counter (maximum value 255).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rec60{}; 
        ///Receive error passive
        enum class rpVal {
            passive=0x00000001,     ///<The receive counter has reached the error passive level as defined in the  CAN2.0 specification.
            belowpassive=0x00000000,     ///<The receive counter is below the error passive level.
        };
        namespace rpValC{
            constexpr MPL::Value<rpVal,rpVal::passive> passive{};
            constexpr MPL::Value<rpVal,rpVal::belowpassive> belowpassive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,rpVal> rp{}; 
    }
    namespace Nonebt{    ///<Bit timing register
        using Addr = Register::Address<0x400a400c,0xffff8000,0,unsigned>;
        ///Baud rate prescaler The value by which the oscillator frequency is divided for generating the bit time quanta. The bit time is built up from a multiple of this quanta. Valid values for the Baud Rate Prescaler are 0 to 63[1].  Valid programmed values are 0x01 - 0x3F[1].
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> brp{}; 
        ///(Re)synchronization jump width Valid programmed values are 0 to 3[1].
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sjw{}; 
        ///Time segment after the sample point Valid values are 0 to 7[1].
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        ///Time segment before the sample point Valid values are 1 to 15[1].
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tseg2{}; 
    }
    namespace Noneint{    ///<Interrupt register
        using Addr = Register::Address<0x400a4010,0xffff0000,0,unsigned>;
        ///0x0000= No interrupt is pending 0x0001 to 0x0020 = Number of message object which caused the interrupt. 0x0021 to 0x7FFF = Unused 0x8000 = Status interrupt 0x8001 to 0xFFFF = Unused
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intid150{}; 
    }
    namespace Nonetest{    ///<Test register
        using Addr = Register::Address<0x400a4014,0xffffff03,0,unsigned>;
        ///Basic mode
        enum class basicVal {
            if1TxIf2Rx=0x00000001,     ///<IF1 registers used as TX buffer, IF2 registers used as RX buffer.
            basicModeDisabled=0x00000000,     ///<Basic mode disabled.
        };
        namespace basicValC{
            constexpr MPL::Value<basicVal,basicVal::if1TxIf2Rx> if1TxIf2Rx{};
            constexpr MPL::Value<basicVal,basicVal::basicModeDisabled> basicModeDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,basicVal> basic{}; 
        ///Silent mode
        enum class silentVal {
            silent=0x00000001,     ///<The module is in silent mode.
            normalOperation=0x00000000,     ///<Normal operation.
        };
        namespace silentValC{
            constexpr MPL::Value<silentVal,silentVal::silent> silent{};
            constexpr MPL::Value<silentVal,silentVal::normalOperation> normalOperation{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,silentVal> silent{}; 
        ///Loop back mode
        enum class lbackVal {
            enabled=0x00000001,     ///<Loop back mode is enabled.
            disabled=0x00000000,     ///<Loop back mode is disabled.
        };
        namespace lbackValC{
            constexpr MPL::Value<lbackVal,lbackVal::enabled> enabled{};
            constexpr MPL::Value<lbackVal,lbackVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lbackVal> lback{}; 
        ///Control of TD pins
        enum class tx10Val {
            levelAtTheTdPin=0x00000000,     ///<Level at the TD pin is controlled by the CAN controller. This is the value at reset.
            theSamplePointCan=0x00000001,     ///<The sample point can be monitored at the TD pin.
            tdPinIsDrivenLow=0x00000002,     ///<TD pin is driven LOW/dominant.
            tdPinIsDrivenHig=0x00000003,     ///<TD pin is driven HIGH/recessive.
        };
        namespace tx10ValC{
            constexpr MPL::Value<tx10Val,tx10Val::levelAtTheTdPin> levelAtTheTdPin{};
            constexpr MPL::Value<tx10Val,tx10Val::theSamplePointCan> theSamplePointCan{};
            constexpr MPL::Value<tx10Val,tx10Val::tdPinIsDrivenLow> tdPinIsDrivenLow{};
            constexpr MPL::Value<tx10Val,tx10Val::tdPinIsDrivenHig> tdPinIsDrivenHig{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,tx10Val> tx10{}; 
        ///Monitors the actual value of the RD Pin
        enum class rxVal {
            theCanBusIsReces=0x00000001,     ///<The CAN bus is recessive (RD = 1).
            theCanBusIsDomin=0x00000000,     ///<The CAN bus is dominant (RD = 0).
        };
        namespace rxValC{
            constexpr MPL::Value<rxVal,rxVal::theCanBusIsReces> theCanBusIsReces{};
            constexpr MPL::Value<rxVal,rxVal::theCanBusIsDomin> theCanBusIsDomin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxVal> rx{}; 
    }
    namespace Nonebrpe{    ///<Baud rate prescaler extension register
        using Addr = Register::Address<0x400a4018,0xfffffff0,0,unsigned>;
        ///Baud rate prescaler extension By programming BRPE the Baud Rate Prescaler can be extended to values up to 1023. Hardware interprets the value as the value of BRPE (MSBs) and BRP (LSBs) plus one. Allowed values are 0x00 to 0x0F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brpe{}; 
    }
    namespace Noneif1Cmdreq{    ///<Message interface  command request 
        using Addr = Register::Address<0x400a4020,0xffff7fc0,0,unsigned>;
        ///Message number 0x01 to 0x20 = Valid message numbers The message object in the message RAM is selected for data transfer. 0x00 = Not a valid message number. This value is interpreted as 0x20.[1] 0x21 to 0x3F = Not a valid message number. This value is interpreted as 0x01 - 0x1F.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> messnum{}; 
        ///BUSY flag. Set to one by hardware when writing to this Command request register. Set to zero by hardware when read/write action to this Command request register has finished.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
    }
    namespace Noneif2Cmdreq{    ///<Message interface  command request 
        using Addr = Register::Address<0x400a4080,0xffff7fc0,0,unsigned>;
        ///Message number 0x01 to 0x20 = Valid message numbers The message object in the message RAM is selected for data transfer. 0x00 = Not a valid message number. This value is interpreted as 0x20.[1] 0x21 to 0x3F = Not a valid message number. This value is interpreted as 0x01 - 0x1F.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> messnum{}; 
        ///BUSY flag. Set to one by hardware when writing to this Command request register. Set to zero by hardware when read/write action to this Command request register has finished.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
    }
    namespace Noneif1CmdmskW{    ///<Message interface command mask (write direction)
        using Addr = Register::Address<0x400a4024,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class dataBVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to message object.
            dataBytes47Uncha=0x00000000,     ///<data bytes 4-7 unchanged.
        };
        namespace dataBValC{
            constexpr MPL::Value<dataBVal,dataBVal::transferDataBytes> transferDataBytes{};
            constexpr MPL::Value<dataBVal,dataBVal::dataBytes47Uncha> dataBytes47Uncha{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dataBVal> dataB{}; 
        ///Access data bytes 0-3
        enum class dataAVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to message object.
            dataBytes03Uncha=0x00000000,     ///<data bytes 0-3 unchanged.
        };
        namespace dataAValC{
            constexpr MPL::Value<dataAVal,dataAVal::transferDataBytes> transferDataBytes{};
            constexpr MPL::Value<dataAVal,dataAVal::dataBytes03Uncha> dataBytes03Uncha{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dataAVal> dataA{}; 
        ///Access transmission request bit
        enum class txrqstVal {
            requestATransmissi=0x00000001,     ///<Request a transmission. Set the TXRQST bit IF1/2_MCTRL.
            noTransmissionRequ=0x00000000,     ///<No transmission request. TXRQSRT bit unchanged in IF1/2_MCTRL. If a transmission is requested by programming this bit, the TXRQST bit in the CANIFn_MCTRL register is ignored.
        };
        namespace txrqstValC{
            constexpr MPL::Value<txrqstVal,txrqstVal::requestATransmissi> requestATransmissi{};
            constexpr MPL::Value<txrqstVal,txrqstVal::noTransmissionRequ> noTransmissionRequ{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,txrqstVal> txrqst{}; 
        ///This bit is ignored in the write direction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        ///Access control bits
        enum class ctrlVal {
            transferControlBit=0x00000001,     ///<Transfer control bits to message object
            controlBitsUnchang=0x00000000,     ///<Control bits unchanged.
        };
        namespace ctrlValC{
            constexpr MPL::Value<ctrlVal,ctrlVal::transferControlBit> transferControlBit{};
            constexpr MPL::Value<ctrlVal,ctrlVal::controlBitsUnchang> controlBitsUnchang{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ctrlVal> ctrl{}; 
        ///Access arbitration bits
        enum class arbVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to message object.
            arbitrationBitsUnc=0x00000000,     ///<Arbitration bits unchanged.
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::transferIdentifier> transferIdentifier{};
            constexpr MPL::Value<arbVal,arbVal::arbitrationBitsUnc> arbitrationBitsUnc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Access mask bits
        enum class maskVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to message object.
            maskBitsUnchanged=0x00000000,     ///<Mask bits unchanged.
        };
        namespace maskValC{
            constexpr MPL::Value<maskVal,maskVal::transferIdentifier> transferIdentifier{};
            constexpr MPL::Value<maskVal,maskVal::maskBitsUnchanged> maskBitsUnchanged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maskVal> mask{}; 
        ///Write transfer Transfer data from the selected message buffer registers to the message object addressed by the command request register CANIFn_CMDREQ.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
    }
    namespace Noneif2CmdmskW{    ///<Message interface command mask (write direction)
        using Addr = Register::Address<0x400a4084,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class dataBVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to message object.
            dataBytes47Uncha=0x00000000,     ///<data bytes 4-7 unchanged.
        };
        namespace dataBValC{
            constexpr MPL::Value<dataBVal,dataBVal::transferDataBytes> transferDataBytes{};
            constexpr MPL::Value<dataBVal,dataBVal::dataBytes47Uncha> dataBytes47Uncha{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dataBVal> dataB{}; 
        ///Access data bytes 0-3
        enum class dataAVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to message object.
            dataBytes03Uncha=0x00000000,     ///<data bytes 0-3 unchanged.
        };
        namespace dataAValC{
            constexpr MPL::Value<dataAVal,dataAVal::transferDataBytes> transferDataBytes{};
            constexpr MPL::Value<dataAVal,dataAVal::dataBytes03Uncha> dataBytes03Uncha{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dataAVal> dataA{}; 
        ///Access transmission request bit
        enum class txrqstVal {
            requestATransmissi=0x00000001,     ///<Request a transmission. Set the TXRQST bit IF1/2_MCTRL.
            noTransmissionRequ=0x00000000,     ///<No transmission request. TXRQSRT bit unchanged in IF1/2_MCTRL. If a transmission is requested by programming this bit, the TXRQST bit in the CANIFn_MCTRL register is ignored.
        };
        namespace txrqstValC{
            constexpr MPL::Value<txrqstVal,txrqstVal::requestATransmissi> requestATransmissi{};
            constexpr MPL::Value<txrqstVal,txrqstVal::noTransmissionRequ> noTransmissionRequ{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,txrqstVal> txrqst{}; 
        ///This bit is ignored in the write direction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        ///Access control bits
        enum class ctrlVal {
            transferControlBit=0x00000001,     ///<Transfer control bits to message object
            controlBitsUnchang=0x00000000,     ///<Control bits unchanged.
        };
        namespace ctrlValC{
            constexpr MPL::Value<ctrlVal,ctrlVal::transferControlBit> transferControlBit{};
            constexpr MPL::Value<ctrlVal,ctrlVal::controlBitsUnchang> controlBitsUnchang{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ctrlVal> ctrl{}; 
        ///Access arbitration bits
        enum class arbVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to message object.
            arbitrationBitsUnc=0x00000000,     ///<Arbitration bits unchanged.
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::transferIdentifier> transferIdentifier{};
            constexpr MPL::Value<arbVal,arbVal::arbitrationBitsUnc> arbitrationBitsUnc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Access mask bits
        enum class maskVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to message object.
            maskBitsUnchanged=0x00000000,     ///<Mask bits unchanged.
        };
        namespace maskValC{
            constexpr MPL::Value<maskVal,maskVal::transferIdentifier> transferIdentifier{};
            constexpr MPL::Value<maskVal,maskVal::maskBitsUnchanged> maskBitsUnchanged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maskVal> mask{}; 
        ///Write transfer Transfer data from the selected message buffer registers to the message object addressed by the command request register CANIFn_CMDREQ.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
    }
    namespace Noneif1CmdmskR{    ///<Message interface  command mask (read direction)
        using Addr = Register::Address<0x400a4024,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class dataBVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to IFx message buffer register.
            dataBytes47Uncha=0x00000000,     ///<data bytes 4-7 unchanged.
        };
        namespace dataBValC{
            constexpr MPL::Value<dataBVal,dataBVal::transferDataBytes> transferDataBytes{};
            constexpr MPL::Value<dataBVal,dataBVal::dataBytes47Uncha> dataBytes47Uncha{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dataBVal> dataB{}; 
        ///Access data bytes 0-3
        enum class dataAVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to IFx message buffer.
            dataBytes03Uncha=0x00000000,     ///<data bytes 0-3 unchanged.
        };
        namespace dataAValC{
            constexpr MPL::Value<dataAVal,dataAVal::transferDataBytes> transferDataBytes{};
            constexpr MPL::Value<dataAVal,dataAVal::dataBytes03Uncha> dataBytes03Uncha{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dataAVal> dataA{}; 
        ///Access new data bit
        enum class newdatVal {
            clearNewdatBitIn=0x00000001,     ///<Clear NEWDAT bit in the message object.
            newdatBitRemainsU=0x00000000,     ///<NEWDAT bit remains unchanged. A read access to a message object can be combined with the reset of the control bits INTPND and NEWDAT in IF1/2_MCTRL. The values of these bits transferred to the IFx Message Control Register always reflect the status before resetting these bits.
        };
        namespace newdatValC{
            constexpr MPL::Value<newdatVal,newdatVal::clearNewdatBitIn> clearNewdatBitIn{};
            constexpr MPL::Value<newdatVal,newdatVal::newdatBitRemainsU> newdatBitRemainsU{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,newdatVal> newdat{}; 
        ///Clear interrupt pending bit.
        enum class clrintpndVal {
            clearIntpndBitIn=0x00000001,     ///<Clear INTPND bit in the message object.
            intpndBitRemainsU=0x00000000,     ///<INTPND bit remains unchanged.
        };
        namespace clrintpndValC{
            constexpr MPL::Value<clrintpndVal,clrintpndVal::clearIntpndBitIn> clearIntpndBitIn{};
            constexpr MPL::Value<clrintpndVal,clrintpndVal::intpndBitRemainsU> intpndBitRemainsU{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrintpndVal> clrintpnd{}; 
        ///Access control bits
        enum class ctrlVal {
            transferControlBit=0x00000001,     ///<Transfer control bits to IFx message buffer.
            controlBitsUnchang=0x00000000,     ///<Control bits unchanged.
        };
        namespace ctrlValC{
            constexpr MPL::Value<ctrlVal,ctrlVal::transferControlBit> transferControlBit{};
            constexpr MPL::Value<ctrlVal,ctrlVal::controlBitsUnchang> controlBitsUnchang{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ctrlVal> ctrl{}; 
        ///Access arbitration bits
        enum class arbVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to IFx message buffer register.
            arbitrationBitsUnc=0x00000000,     ///<Arbitration bits unchanged.
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::transferIdentifier> transferIdentifier{};
            constexpr MPL::Value<arbVal,arbVal::arbitrationBitsUnc> arbitrationBitsUnc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Access mask bits
        enum class maskVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to IFx message buffer register.
            maskBitsUnchanged=0x00000000,     ///<Mask bits unchanged.
        };
        namespace maskValC{
            constexpr MPL::Value<maskVal,maskVal::transferIdentifier> transferIdentifier{};
            constexpr MPL::Value<maskVal,maskVal::maskBitsUnchanged> maskBitsUnchanged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maskVal> mask{}; 
        ///Read transfer Transfer data from the message object addressed by the command request register to the selected message buffer registers CANIFn_CMDREQ.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
    }
    namespace Noneif2CmdmskR{    ///<Message interface  command mask (read direction)
        using Addr = Register::Address<0x400a4084,0xffffff00,0,unsigned>;
        ///Access data bytes 4-7
        enum class dataBVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 4-7 to IFx message buffer register.
            dataBytes47Uncha=0x00000000,     ///<data bytes 4-7 unchanged.
        };
        namespace dataBValC{
            constexpr MPL::Value<dataBVal,dataBVal::transferDataBytes> transferDataBytes{};
            constexpr MPL::Value<dataBVal,dataBVal::dataBytes47Uncha> dataBytes47Uncha{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dataBVal> dataB{}; 
        ///Access data bytes 0-3
        enum class dataAVal {
            transferDataBytes=0x00000001,     ///<Transfer data bytes 0-3 to IFx message buffer.
            dataBytes03Uncha=0x00000000,     ///<data bytes 0-3 unchanged.
        };
        namespace dataAValC{
            constexpr MPL::Value<dataAVal,dataAVal::transferDataBytes> transferDataBytes{};
            constexpr MPL::Value<dataAVal,dataAVal::dataBytes03Uncha> dataBytes03Uncha{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dataAVal> dataA{}; 
        ///Access new data bit
        enum class newdatVal {
            clearNewdatBitIn=0x00000001,     ///<Clear NEWDAT bit in the message object.
            newdatBitRemainsU=0x00000000,     ///<NEWDAT bit remains unchanged. A read access to a message object can be combined with the reset of the control bits INTPND and NEWDAT in IF1/2_MCTRL. The values of these bits transferred to the IFx Message Control Register always reflect the status before resetting these bits.
        };
        namespace newdatValC{
            constexpr MPL::Value<newdatVal,newdatVal::clearNewdatBitIn> clearNewdatBitIn{};
            constexpr MPL::Value<newdatVal,newdatVal::newdatBitRemainsU> newdatBitRemainsU{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,newdatVal> newdat{}; 
        ///Clear interrupt pending bit.
        enum class clrintpndVal {
            clearIntpndBitIn=0x00000001,     ///<Clear INTPND bit in the message object.
            intpndBitRemainsU=0x00000000,     ///<INTPND bit remains unchanged.
        };
        namespace clrintpndValC{
            constexpr MPL::Value<clrintpndVal,clrintpndVal::clearIntpndBitIn> clearIntpndBitIn{};
            constexpr MPL::Value<clrintpndVal,clrintpndVal::intpndBitRemainsU> intpndBitRemainsU{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrintpndVal> clrintpnd{}; 
        ///Access control bits
        enum class ctrlVal {
            transferControlBit=0x00000001,     ///<Transfer control bits to IFx message buffer.
            controlBitsUnchang=0x00000000,     ///<Control bits unchanged.
        };
        namespace ctrlValC{
            constexpr MPL::Value<ctrlVal,ctrlVal::transferControlBit> transferControlBit{};
            constexpr MPL::Value<ctrlVal,ctrlVal::controlBitsUnchang> controlBitsUnchang{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ctrlVal> ctrl{}; 
        ///Access arbitration bits
        enum class arbVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier, DIR, XTD, and MSGVAL bits to IFx message buffer register.
            arbitrationBitsUnc=0x00000000,     ///<Arbitration bits unchanged.
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::transferIdentifier> transferIdentifier{};
            constexpr MPL::Value<arbVal,arbVal::arbitrationBitsUnc> arbitrationBitsUnc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Access mask bits
        enum class maskVal {
            transferIdentifier=0x00000001,     ///<Transfer Identifier MASK + MDIR + MXTD to IFx message buffer register.
            maskBitsUnchanged=0x00000000,     ///<Mask bits unchanged.
        };
        namespace maskValC{
            constexpr MPL::Value<maskVal,maskVal::transferIdentifier> transferIdentifier{};
            constexpr MPL::Value<maskVal,maskVal::maskBitsUnchanged> maskBitsUnchanged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,maskVal> mask{}; 
        ///Read transfer Transfer data from the message object addressed by the command request register to the selected message buffer registers CANIFn_CMDREQ.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrRd{}; 
    }
    namespace Noneif1Msk1{    ///<Message interface  mask 1
        using Addr = Register::Address<0x400a4028,0xffff0000,0,unsigned>;
        ///Identifier mask 0 = The corresponding bit in the identifier of the message can not inhibit the match in the acceptance filtering. 1 = The corresponding identifier bit is used for acceptance filtering.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk150{}; 
    }
    namespace Noneif2Msk1{    ///<Message interface  mask 1
        using Addr = Register::Address<0x400a4088,0xffff0000,0,unsigned>;
        ///Identifier mask 0 = The corresponding bit in the identifier of the message can not inhibit the match in the acceptance filtering. 1 = The corresponding identifier bit is used for acceptance filtering.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk150{}; 
    }
    namespace Noneif1Msk2{    ///<Message interface 1 mask 2
        using Addr = Register::Address<0x400a402c,0xffff2000,0,unsigned>;
        ///Identifier mask 0 = The corresponding bit in the identifier of the message can not inhibit the match in the acceptance filtering. 1 = The corresponding identifier bit is used for acceptance filtering.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk2816{}; 
        ///Mask message direction
        enum class mdirVal {
            theMessageDirectio=0x00000001,     ///<The message direction bit (DIR) is used for acceptance filtering.
            theMessageDirectio=0x00000000,     ///<The message direction bit (DIR) has no effect on acceptance filtering.
        };
        namespace mdirValC{
            constexpr MPL::Value<mdirVal,mdirVal::theMessageDirectio> theMessageDirectio{};
            constexpr MPL::Value<mdirVal,mdirVal::theMessageDirectio> theMessageDirectio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,mdirVal> mdir{}; 
        ///Mask extend identifier
        enum class mxtdVal {
            theExtendedIdentif=0x00000001,     ///<The extended identifier bit (IDE) is used for acceptance filtering.
            theExtendedIdentif=0x00000000,     ///<The extended identifier bit (IDE) has no effect on acceptance filtering.
        };
        namespace mxtdValC{
            constexpr MPL::Value<mxtdVal,mxtdVal::theExtendedIdentif> theExtendedIdentif{};
            constexpr MPL::Value<mxtdVal,mxtdVal::theExtendedIdentif> theExtendedIdentif{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,mxtdVal> mxtd{}; 
    }
    namespace Noneif2Msk2{    ///<Message interface 1 mask 2
        using Addr = Register::Address<0x400a408c,0xffff2000,0,unsigned>;
        ///Identifier mask 0 = The corresponding bit in the identifier of the message can not inhibit the match in the acceptance filtering. 1 = The corresponding identifier bit is used for acceptance filtering.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk2816{}; 
        ///Mask message direction
        enum class mdirVal {
            theMessageDirectio=0x00000001,     ///<The message direction bit (DIR) is used for acceptance filtering.
            theMessageDirectio=0x00000000,     ///<The message direction bit (DIR) has no effect on acceptance filtering.
        };
        namespace mdirValC{
            constexpr MPL::Value<mdirVal,mdirVal::theMessageDirectio> theMessageDirectio{};
            constexpr MPL::Value<mdirVal,mdirVal::theMessageDirectio> theMessageDirectio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,mdirVal> mdir{}; 
        ///Mask extend identifier
        enum class mxtdVal {
            theExtendedIdentif=0x00000001,     ///<The extended identifier bit (IDE) is used for acceptance filtering.
            theExtendedIdentif=0x00000000,     ///<The extended identifier bit (IDE) has no effect on acceptance filtering.
        };
        namespace mxtdValC{
            constexpr MPL::Value<mxtdVal,mxtdVal::theExtendedIdentif> theExtendedIdentif{};
            constexpr MPL::Value<mxtdVal,mxtdVal::theExtendedIdentif> theExtendedIdentif{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,mxtdVal> mxtd{}; 
    }
    namespace Noneif1Arb1{    ///<Message interface 1 arbitration 1
        using Addr = Register::Address<0x400a4030,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id150{}; 
    }
    namespace Noneif2Arb1{    ///<Message interface 1 arbitration 1
        using Addr = Register::Address<0x400a4090,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id150{}; 
    }
    namespace Noneif1Arb2{    ///<Message interface 1 arbitration 2
        using Addr = Register::Address<0x400a4034,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id2816{}; 
        ///Message direction
        enum class dirVal {
            directionEqTransmit=0x00000001,     ///<Direction = transmit. On TXRQST, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TXRQST bit of this Message Object is set (if RMTEN = one).
            directionEqReceive=0x00000000,     ///<Direction = receive. On TXRQST, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::directionEqTransmit> directionEqTransmit{};
            constexpr MPL::Value<dirVal,dirVal::directionEqReceive> directionEqReceive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Extend identifier
        enum class xtdVal {
            the29BitExtended=0x00000001,     ///<The 29-bit extended identifier will be used for this message object.
            the11BitStandard=0x00000000,     ///<The 11-bit standard identifier will be used for this message object.
        };
        namespace xtdValC{
            constexpr MPL::Value<xtdVal,xtdVal::the29BitExtended> the29BitExtended{};
            constexpr MPL::Value<xtdVal,xtdVal::the11BitStandard> the11BitStandard{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,xtdVal> xtd{}; 
        ///Message valid The CPU must reset the MSGVAL bit of all unused Messages Objects during the initialization before it resets bit INIT in the CAN Control Register. This bit must also be reset before the identifier ID28:0, the control bits XTD, DIR, or the Data Length Code DLC3:0 are modified, or if the Messages Object is no longer required.
        enum class msgvalVal {
            theMessageObjectI=0x00000001,     ///<The message object is configured and should be considered by the message handler.
            theMessageObjectI=0x00000000,     ///<The message object is ignored by the message handler.
        };
        namespace msgvalValC{
            constexpr MPL::Value<msgvalVal,msgvalVal::theMessageObjectI> theMessageObjectI{};
            constexpr MPL::Value<msgvalVal,msgvalVal::theMessageObjectI> theMessageObjectI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,msgvalVal> msgval{}; 
    }
    namespace Noneif2Arb2{    ///<Message interface 1 arbitration 2
        using Addr = Register::Address<0x400a4094,0xffff0000,0,unsigned>;
        ///Message identifier  29-bit identifier (extended frame) 11-bit identifier (standard frame)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id2816{}; 
        ///Message direction
        enum class dirVal {
            directionEqTransmit=0x00000001,     ///<Direction = transmit. On TXRQST, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TXRQST bit of this Message Object is set (if RMTEN = one).
            directionEqReceive=0x00000000,     ///<Direction = receive. On TXRQST, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::directionEqTransmit> directionEqTransmit{};
            constexpr MPL::Value<dirVal,dirVal::directionEqReceive> directionEqReceive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Extend identifier
        enum class xtdVal {
            the29BitExtended=0x00000001,     ///<The 29-bit extended identifier will be used for this message object.
            the11BitStandard=0x00000000,     ///<The 11-bit standard identifier will be used for this message object.
        };
        namespace xtdValC{
            constexpr MPL::Value<xtdVal,xtdVal::the29BitExtended> the29BitExtended{};
            constexpr MPL::Value<xtdVal,xtdVal::the11BitStandard> the11BitStandard{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,xtdVal> xtd{}; 
        ///Message valid The CPU must reset the MSGVAL bit of all unused Messages Objects during the initialization before it resets bit INIT in the CAN Control Register. This bit must also be reset before the identifier ID28:0, the control bits XTD, DIR, or the Data Length Code DLC3:0 are modified, or if the Messages Object is no longer required.
        enum class msgvalVal {
            theMessageObjectI=0x00000001,     ///<The message object is configured and should be considered by the message handler.
            theMessageObjectI=0x00000000,     ///<The message object is ignored by the message handler.
        };
        namespace msgvalValC{
            constexpr MPL::Value<msgvalVal,msgvalVal::theMessageObjectI> theMessageObjectI{};
            constexpr MPL::Value<msgvalVal,msgvalVal::theMessageObjectI> theMessageObjectI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,msgvalVal> msgval{}; 
    }
    namespace Noneif1Mctrl{    ///<Message interface 1 message control
        using Addr = Register::Address<0x400a4038,0xffff0070,0,unsigned>;
        ///Data length code The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message. 0000 to 1000 = Data frame has 0 - 8 data bytes. 1001 to 1111 = Data frame has 8 data bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc30{}; 
        ///End of buffer
        enum class eobVal {
            singleMessageObjec=0x00000001,     ///<Single message object or last message object of a FIFO buffer.
            messageObjectBelon=0x00000000,     ///<Message object belongs to a FIFO buffer and is not the last message object of that FIFO buffer.
        };
        namespace eobValC{
            constexpr MPL::Value<eobVal,eobVal::singleMessageObjec> singleMessageObjec{};
            constexpr MPL::Value<eobVal,eobVal::messageObjectBelon> messageObjectBelon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,eobVal> eob{}; 
        ///Transmit request
        enum class txrqstVal {
            request=0x00000001,     ///<The transmission of this message object is requested and is not yet done
            wait=0x00000000,     ///<This message object is not waiting for transmission.
        };
        namespace txrqstValC{
            constexpr MPL::Value<txrqstVal,txrqstVal::request> request{};
            constexpr MPL::Value<txrqstVal,txrqstVal::wait> wait{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,txrqstVal> txrqst{}; 
        ///Remote enable
        enum class rmtenVal {
            txrqstset=0x00000001,     ///<At the reception of a remote frame, TXRQST is set.
            unchanged=0x00000000,     ///<At the reception of a remote frame, TXRQST is left unchanged.
        };
        namespace rmtenValC{
            constexpr MPL::Value<rmtenVal,rmtenVal::txrqstset> txrqstset{};
            constexpr MPL::Value<rmtenVal,rmtenVal::unchanged> unchanged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rmtenVal> rmten{}; 
        ///Receive interrupt enable
        enum class rxieVal {
            intpndset=0x00000001,     ///<INTPND will be set after successful reception of a frame.
            unchanged=0x00000000,     ///<INTPND will be left unchanged after successful reception of a frame.
        };
        namespace rxieValC{
            constexpr MPL::Value<rxieVal,rxieVal::intpndset> intpndset{};
            constexpr MPL::Value<rxieVal,rxieVal::unchanged> unchanged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rxieVal> rxie{}; 
        ///Transmit interrupt enable
        enum class txieVal {
            intpndset=0x00000001,     ///<INTPND will be set after a successful reception of a frame.
            unchanged=0x00000000,     ///<The INTPND bit will be left unchanged after a successful reception of a frame.
        };
        namespace txieValC{
            constexpr MPL::Value<txieVal,txieVal::intpndset> intpndset{};
            constexpr MPL::Value<txieVal,txieVal::unchanged> unchanged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,txieVal> txie{}; 
        ///Use acceptance mask If UMASK is set to 1, the message object's mask bits have to be programmed during initialization of the message object before MAGVAL is set to 1.
        enum class umaskVal {
            useMaskMsk280=0x00000001,     ///<Use mask (MSK[28:0], MXTD, and MDIR) for acceptance filtering.
            maskIgnored=0x00000000,     ///<Mask ignored.
        };
        namespace umaskValC{
            constexpr MPL::Value<umaskVal,umaskVal::useMaskMsk280> useMaskMsk280{};
            constexpr MPL::Value<umaskVal,umaskVal::maskIgnored> maskIgnored{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,umaskVal> umask{}; 
        ///Interrupt pending
        enum class intpndVal {
            intsource=0x00000001,     ///<This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
            nointsource=0x00000000,     ///<This message object is not the source of an interrupt.
        };
        namespace intpndValC{
            constexpr MPL::Value<intpndVal,intpndVal::intsource> intsource{};
            constexpr MPL::Value<intpndVal,intpndVal::nointsource> nointsource{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,intpndVal> intpnd{}; 
        ///Message lost (only valid for message objects in the direction receive).
        enum class msglstVal {
            theMessageHandler=0x00000001,     ///<The Message Handler stored a new message into this object when NEWDAT was still set, the CPU has lost a message.
            noMessageLostSinc=0x00000000,     ///<No message lost since this bit was reset last by the CPU.
        };
        namespace msglstValC{
            constexpr MPL::Value<msglstVal,msglstVal::theMessageHandler> theMessageHandler{};
            constexpr MPL::Value<msglstVal,msglstVal::noMessageLostSinc> noMessageLostSinc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,msglstVal> msglst{}; 
        ///New data
        enum class newdatVal {
            theMessageHandler=0x00000001,     ///<The message handler or the CPU has written new data into the data portion of this message object.
            noNewDataHasBeen=0x00000000,     ///<No new data has been written into the data portion of this message object by the message handler since this flag was cleared last by the CPU.
        };
        namespace newdatValC{
            constexpr MPL::Value<newdatVal,newdatVal::theMessageHandler> theMessageHandler{};
            constexpr MPL::Value<newdatVal,newdatVal::noNewDataHasBeen> noNewDataHasBeen{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,newdatVal> newdat{}; 
    }
    namespace Noneif2Mctrl{    ///<Message interface 1 message control
        using Addr = Register::Address<0x400a4098,0xffff0070,0,unsigned>;
        ///Data length code The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message. 0000 to 1000 = Data frame has 0 - 8 data bytes. 1001 to 1111 = Data frame has 8 data bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc30{}; 
        ///End of buffer
        enum class eobVal {
            singleMessageObjec=0x00000001,     ///<Single message object or last message object of a FIFO buffer.
            messageObjectBelon=0x00000000,     ///<Message object belongs to a FIFO buffer and is not the last message object of that FIFO buffer.
        };
        namespace eobValC{
            constexpr MPL::Value<eobVal,eobVal::singleMessageObjec> singleMessageObjec{};
            constexpr MPL::Value<eobVal,eobVal::messageObjectBelon> messageObjectBelon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,eobVal> eob{}; 
        ///Transmit request
        enum class txrqstVal {
            request=0x00000001,     ///<The transmission of this message object is requested and is not yet done
            wait=0x00000000,     ///<This message object is not waiting for transmission.
        };
        namespace txrqstValC{
            constexpr MPL::Value<txrqstVal,txrqstVal::request> request{};
            constexpr MPL::Value<txrqstVal,txrqstVal::wait> wait{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,txrqstVal> txrqst{}; 
        ///Remote enable
        enum class rmtenVal {
            txrqstset=0x00000001,     ///<At the reception of a remote frame, TXRQST is set.
            unchanged=0x00000000,     ///<At the reception of a remote frame, TXRQST is left unchanged.
        };
        namespace rmtenValC{
            constexpr MPL::Value<rmtenVal,rmtenVal::txrqstset> txrqstset{};
            constexpr MPL::Value<rmtenVal,rmtenVal::unchanged> unchanged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rmtenVal> rmten{}; 
        ///Receive interrupt enable
        enum class rxieVal {
            intpndset=0x00000001,     ///<INTPND will be set after successful reception of a frame.
            unchanged=0x00000000,     ///<INTPND will be left unchanged after successful reception of a frame.
        };
        namespace rxieValC{
            constexpr MPL::Value<rxieVal,rxieVal::intpndset> intpndset{};
            constexpr MPL::Value<rxieVal,rxieVal::unchanged> unchanged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rxieVal> rxie{}; 
        ///Transmit interrupt enable
        enum class txieVal {
            intpndset=0x00000001,     ///<INTPND will be set after a successful reception of a frame.
            unchanged=0x00000000,     ///<The INTPND bit will be left unchanged after a successful reception of a frame.
        };
        namespace txieValC{
            constexpr MPL::Value<txieVal,txieVal::intpndset> intpndset{};
            constexpr MPL::Value<txieVal,txieVal::unchanged> unchanged{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,txieVal> txie{}; 
        ///Use acceptance mask If UMASK is set to 1, the message object's mask bits have to be programmed during initialization of the message object before MAGVAL is set to 1.
        enum class umaskVal {
            useMaskMsk280=0x00000001,     ///<Use mask (MSK[28:0], MXTD, and MDIR) for acceptance filtering.
            maskIgnored=0x00000000,     ///<Mask ignored.
        };
        namespace umaskValC{
            constexpr MPL::Value<umaskVal,umaskVal::useMaskMsk280> useMaskMsk280{};
            constexpr MPL::Value<umaskVal,umaskVal::maskIgnored> maskIgnored{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,umaskVal> umask{}; 
        ///Interrupt pending
        enum class intpndVal {
            intsource=0x00000001,     ///<This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
            nointsource=0x00000000,     ///<This message object is not the source of an interrupt.
        };
        namespace intpndValC{
            constexpr MPL::Value<intpndVal,intpndVal::intsource> intsource{};
            constexpr MPL::Value<intpndVal,intpndVal::nointsource> nointsource{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,intpndVal> intpnd{}; 
        ///Message lost (only valid for message objects in the direction receive).
        enum class msglstVal {
            theMessageHandler=0x00000001,     ///<The Message Handler stored a new message into this object when NEWDAT was still set, the CPU has lost a message.
            noMessageLostSinc=0x00000000,     ///<No message lost since this bit was reset last by the CPU.
        };
        namespace msglstValC{
            constexpr MPL::Value<msglstVal,msglstVal::theMessageHandler> theMessageHandler{};
            constexpr MPL::Value<msglstVal,msglstVal::noMessageLostSinc> noMessageLostSinc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,msglstVal> msglst{}; 
        ///New data
        enum class newdatVal {
            theMessageHandler=0x00000001,     ///<The message handler or the CPU has written new data into the data portion of this message object.
            noNewDataHasBeen=0x00000000,     ///<No new data has been written into the data portion of this message object by the message handler since this flag was cleared last by the CPU.
        };
        namespace newdatValC{
            constexpr MPL::Value<newdatVal,newdatVal::theMessageHandler> theMessageHandler{};
            constexpr MPL::Value<newdatVal,newdatVal::noNewDataHasBeen> noNewDataHasBeen{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,newdatVal> newdat{}; 
    }
    namespace Noneif1Da1{    ///<Message interface  data A1
        using Addr = Register::Address<0x400a403c,0xffff0000,0,unsigned>;
        ///Data byte 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        ///Data byte 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Noneif2Da1{    ///<Message interface  data A1
        using Addr = Register::Address<0x400a409c,0xffff0000,0,unsigned>;
        ///Data byte 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        ///Data byte 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Noneif1Da2{    ///<Message interface 1 data A2
        using Addr = Register::Address<0x400a4040,0xffff0000,0,unsigned>;
        ///Data byte 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data byte 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
    }
    namespace Noneif2Da2{    ///<Message interface 1 data A2
        using Addr = Register::Address<0x400a40a0,0xffff0000,0,unsigned>;
        ///Data byte 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Data byte 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
    }
    namespace Noneif1Db1{    ///<Message interface 1 data B1
        using Addr = Register::Address<0x400a4044,0xffff0000,0,unsigned>;
        ///Data byte 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        ///Data byte 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
    }
    namespace Noneif2Db1{    ///<Message interface 1 data B1
        using Addr = Register::Address<0x400a40a4,0xffff0000,0,unsigned>;
        ///Data byte 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        ///Data byte 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
    }
    namespace Noneif1Db2{    ///<Message interface 1 data B2
        using Addr = Register::Address<0x400a4048,0xffff0000,0,unsigned>;
        ///Data byte 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data byte 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
    }
    namespace Noneif2Db2{    ///<Message interface 1 data B2
        using Addr = Register::Address<0x400a40a8,0xffff0000,0,unsigned>;
        ///Data byte 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        ///Data byte 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
    }
    namespace Nonetxreq1{    ///<Transmission request 1
        using Addr = Register::Address<0x400a4100,0xffff0000,0,unsigned>;
        ///Transmission request bit of message objects 16 to 1. 0 = This message object is not waiting for transmission. 1 = The transmission of this message object is requested and not yet done.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst161{}; 
    }
    namespace Nonetxreq2{    ///<Transmission request 2
        using Addr = Register::Address<0x400a4104,0xffff0000,0,unsigned>;
        ///Transmission request bit of message objects 32 to 17. 0 = This message object is not waiting for transmission. 1 = The transmission of this message object is requested and not yet done.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst3217{}; 
    }
    namespace Nonend1{    ///<New data 1
        using Addr = Register::Address<0x400a4120,0xffff0000,0,unsigned>;
        ///New data bits of message objects 16 to 1. 0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the CPU. 1 = The Message Handler or the CPU has written new data into the data portion of this Message Object.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdat161{}; 
    }
    namespace Nonend2{    ///<New data 2
        using Addr = Register::Address<0x400a4124,0xffff0000,0,unsigned>;
        ///New data bits of message objects 32 to 17. 0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the CPU. 1 = The Message Handler or the CPU has written new data into the data portion of this Message Object.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdat3217{}; 
    }
    namespace Noneir1{    ///<Interrupt pending 1
        using Addr = Register::Address<0x400a4140,0xffff0000,0,unsigned>;
        ///Interrupt pending bits of message objects 16 to 1. 0 = This message object is ignored by the message handler. 1 = This message object is the source of an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd161{}; 
    }
    namespace Noneir2{    ///<Interrupt pending 2
        using Addr = Register::Address<0x400a4144,0xffff0000,0,unsigned>;
        ///Interrupt pending bits of message objects 32 to 17. 0 = This message object is ignored by the message handler. 1 = This message object is the source of an interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd3217{}; 
    }
    namespace Nonemsgv1{    ///<Message valid 1
        using Addr = Register::Address<0x400a4160,0xffff0000,0,unsigned>;
        ///Message valid bits of message objects 16 to 1. 0 = This message object is ignored by the message handler. 1 = This message object is configured and should be considered by the message handler.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval161{}; 
    }
    namespace Nonemsgv2{    ///<Message valid 2
        using Addr = Register::Address<0x400a4164,0xffff0000,0,unsigned>;
        ///Message valid bits of message objects 32 to 17. 0 = This message object is ignored by the message handler. 1 = This message object is configured and should be considered by the message handler.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval3217{}; 
    }
    namespace Noneclkdiv{    ///<CAN clock divider register
        using Addr = Register::Address<0x400a4180,0xfffffff0,0,unsigned>;
        ///Clock divider value  CAN_CLK = PCLK/(2CLKDIVVAL  -1+1)  0000: CAN_CLK = PCLK divided by 1.  0001: CAN_CLK = PCLK divided by 2.  0010: CAN_CLK = PCLK divided by 3.  0010: CAN_CLK = PCLK divided by 4.  0011: CAN_CLK = PCLK divided by 5. 0100: CAN_CLK = PCLK divided by 9. 0101: CAN_CLK = PCLK divided by 17. ...  1111: CAN_CLK = PCLK divided by 16385.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clkdivval{}; 
    }
}
