#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10375 Chapter title=LPC13xx USB device
controller Modification date=4/20/2011 Major revision=2 Minor revision=1 
    namespace Nonedevintst{    ///<USB Device Interrupt Status
        using Addr = Register::Address<0x40020000,0xffffc000,0,unsigned>;
        ///The frame interrupt occurs every 1 ms. This is used in isochronous packet transfers. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frame{}; 
        namespace FrameValC{
        }
        ///USB core interrupt for physical endpoint 0. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep0{}; 
        namespace Ep0ValC{
        }
        ///USB core interrupt for physical endpoint 1. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep1{}; 
        namespace Ep1ValC{
        }
        ///USB core interrupt for physical endpoint 2. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep2{}; 
        namespace Ep2ValC{
        }
        ///USB core interrupt for physical endpoint 3. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep3{}; 
        namespace Ep3ValC{
        }
        ///USB core interrupt for physical endpoint 4. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep4{}; 
        namespace Ep4ValC{
        }
        ///USB core interrupt for physical endpoint 5. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep5{}; 
        namespace Ep5ValC{
        }
        ///USB core interrupt for physical endpoint 6. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ep6{}; 
        namespace Ep6ValC{
        }
        ///USB core interrupt for physical endpoint 7. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep7{}; 
        namespace Ep7ValC{
        }
        ///Set when USB Bus reset, USB suspend change, or Connect change event occurs. Refer to Section 10.11.7. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> devStat{}; 
        namespace DevstatValC{
        }
        ///The command code register (USBCmdCode) is empty (New command can be written). 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ccEmpty{}; 
        namespace CcemptyValC{
        }
        ///Command data register (USBCmdData) is full (Data can be read now). 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cdFull{}; 
        namespace CdfullValC{
        }
        ///The current packet in the endpoint buffer is transferred to the CPU. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxendpkt{}; 
        namespace RxendpktValC{
        }
        ///The number of data bytes transferred to the endpoint buffer equals the number of bytes programmed in the TxPacket length register (USBTxPLen). 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txendpkt{}; 
        namespace TxendpktValC{
        }
    }
    namespace Nonedevinten{    ///<USB Device Interrupt Enable
        using Addr = Register::Address<0x40020004,0xffffc000,0,unsigned>;
        ///Frame interrupt . For isochronous packet transfers. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameEn{}; 
        namespace FrameenValC{
        }
        ///USB core interrupt for physical endpoint 0. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep0En{}; 
        namespace Ep0enValC{
        }
        ///USB core interrupt for physical endpoint 1. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep1En{}; 
        namespace Ep1enValC{
        }
        ///USB core interrupt for physical endpoint 2. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep2En{}; 
        namespace Ep2enValC{
        }
        ///USB core interrupt for physical endpoint 3. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep3En{}; 
        namespace Ep3enValC{
        }
        ///USB core interrupt for physical endpoint 4. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep4En{}; 
        namespace Ep4enValC{
        }
        ///USB core interrupt for physical endpoint 5. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep5En{}; 
        namespace Ep5enValC{
        }
        ///USB core interrupt for physical endpoint 6. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ep6En{}; 
        namespace Ep6enValC{
        }
        ///USB core interrupt for physical endpoint 7. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep7En{}; 
        namespace Ep7enValC{
        }
        ///Set when USB Bus reset, USB suspend change, or Connect change event occurs.  0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> devStatEn{}; 
        namespace DevstatenValC{
        }
        ///The command code register (USBCmdCode) is empty (New command can be written). 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ccEmptyEn{}; 
        namespace CcemptyenValC{
        }
        ///Command data register (USBCmdData) is full (Data can be read now). 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cdFullEn{}; 
        namespace CdfullenValC{
        }
        ///The current packet in the endpoint buffer is transferred to the CPU. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxendpktEn{}; 
        namespace RxendpktenValC{
        }
        ///The number of data bytes transferred to the endpoint buffer equals the number of bytes programmed in the TxPacket length register (USBTxPLen). 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txendpktEn{}; 
        namespace TxendpktenValC{
        }
    }
    namespace Nonedevintctrl{    ///<USB Device Interrupt Clear
        using Addr = Register::Address<0x40020008,0xffffc000,0,unsigned>;
        ///Frame interrupt . For isochronous packet transfers. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameClr{}; 
        namespace FrameclrValC{
        }
        ///USB core interrupt for physical endpoint 0. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep0Clr{}; 
        namespace Ep0clrValC{
        }
        ///USB core interrupt for physical endpoint 1. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep1Clr{}; 
        namespace Ep1clrValC{
        }
        ///USB core interrupt for physical endpoint 2. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep2Clr{}; 
        namespace Ep2clrValC{
        }
        ///USB core interrupt for physical endpoint 3. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep3Clr{}; 
        namespace Ep3clrValC{
        }
        ///USB core interrupt for physical endpoint 4. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep4Clr{}; 
        namespace Ep4clrValC{
        }
        ///USB core interrupt for physical endpoint 5. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep5Clr{}; 
        namespace Ep5clrValC{
        }
        ///USB core interrupt for physical endpoint 6. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ep6Clr{}; 
        namespace Ep6clrValC{
        }
        ///USB core interrupt for physical endpoint 7. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep7Clr{}; 
        namespace Ep7clrValC{
        }
        ///Set when USB Bus reset, USB suspend change, or Connect change event occurs.  0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> devStatClr{}; 
        namespace DevstatclrValC{
        }
        ///The command code register (USBCmdCode) is empty (New command can be written). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ccEmptyClr{}; 
        namespace CcemptyclrValC{
        }
        ///Command data register (USBCmdData) is full (Data can be read now). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cdFullClr{}; 
        namespace CdfullclrValC{
        }
        ///The current packet in the endpoint buffer is transferred to the CPU. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxendpktClr{}; 
        namespace RxendpktclrValC{
        }
        ///The number of data bytes transferred to the endpoint buffer equals the number of bytes programmed in the TxPacket length register (USBTxPLen). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txendpktClr{}; 
        namespace TxendpktclrValC{
        }
    }
    namespace Nonedevintset{    ///<USB Device Interrupt Set
        using Addr = Register::Address<0x4002000c,0xffffc000,0,unsigned>;
        ///Frame interrupt . For isochronous packet transfers. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameSet{}; 
        namespace FramesetValC{
        }
        ///USB core interrupt for physical endpoint 0. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep0Set{}; 
        namespace Ep0setValC{
        }
        ///USB core interrupt for physical endpoint 1. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep1Set{}; 
        namespace Ep1setValC{
        }
        ///USB core interrupt for physical endpoint 2. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep2Set{}; 
        namespace Ep2setValC{
        }
        ///USB core interrupt for physical endpoint 3. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep3Set{}; 
        namespace Ep3setValC{
        }
        ///USB core interrupt for physical endpoint 4. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep4Set{}; 
        namespace Ep4setValC{
        }
        ///USB core interrupt for physical endpoint 5. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep5Set{}; 
        namespace Ep5setValC{
        }
        ///USB core interrupt for physical endpoint 6. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ep6Set{}; 
        namespace Ep6setValC{
        }
        ///USB core interrupt for physical endpoint 7. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep7Set{}; 
        namespace Ep7setValC{
        }
        ///Set when USB Bus reset, USB suspend change, or Connect change event occurs.  0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> devStatSet{}; 
        namespace DevstatsetValC{
        }
        ///The command code register (USBCmdCode) is empty (New command can be written). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ccEmptySet{}; 
        namespace CcemptysetValC{
        }
        ///Command data register (USBCmdData) is full (Data can be read now). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cdFullSet{}; 
        namespace CdfullsetValC{
        }
        ///The current packet in the endpoint buffer is transferred to the CPU. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxendpktSet{}; 
        namespace RxendpktsetValC{
        }
        ///The number of data bytes transferred to the endpoint buffer equals the number of bytes programmed in the TxPacket length register (USBTxPLen). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txendpktSet{}; 
        namespace TxendpktsetValC{
        }
    }
    namespace Nonecmdcode{    ///<USB Command Code
        using Addr = Register::Address<0x40020010,0xff0000ff,0,unsigned>;
        ///Command phase action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cmdPhase{}; 
        namespace CmdphaseValC{
        }
        ///This is a multi-purpose field. When CMD_PHASE is Command or Read, this field contains the code for the command (CMD_CODE). When CMD_PHASE is Write, this field contains the command write data (CMD_WDATA).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> codeWdata{}; 
        namespace CodewdataValC{
        }
    }
    namespace Nonecmddata{    ///<USB Command Data
        using Addr = Register::Address<0x40020014,0xffffff00,0,unsigned>;
        ///Command Read Data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cmdRdata{}; 
        namespace CmdrdataValC{
        }
    }
    namespace Nonerxdata{    ///<USB Receive Data
        using Addr = Register::Address<0x40020018,0x00000000,0,unsigned>;
        ///Data received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxData{}; 
        namespace RxdataValC{
        }
    }
    namespace Nonetxdata{    ///<USB Transmit Data
        using Addr = Register::Address<0x4002001c,0x00000000,0,unsigned>;
        ///Transmit Data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txData{}; 
        namespace TxdataValC{
        }
    }
    namespace Nonerxplen{    ///<USB Receive Packet Length
        using Addr = Register::Address<0x40020020,0xfffff800,0,unsigned>;
        ///The remaining number of bytes to be read from the currently selected endpoint's buffer. When this field decrements to 0, the RxENDPKT bit will be set in USBDevIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> pktLngth{}; 
        namespace PktlngthValC{
        }
        ///Data valid. This bit is useful for isochronous endpoints. Non-isochronous endpoints do not raise an interrupt when an erroneous data packet is received. But invalid data packet can be produced with a bus reset. For isochronous endpoints, data transfer will happen even if an erroneous packet is received. In this case DV bit will not be set for the packet.
        enum class DvVal {
            dataIsInvalid=0x00000000,     ///<Data is invalid.
            dataIsValid=0x00000001,     ///<Data is valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,DvVal> dv{}; 
        namespace DvValC{
            constexpr Register::FieldValue<decltype(dv),DvVal::dataIsInvalid> dataIsInvalid{};
            constexpr Register::FieldValue<decltype(dv),DvVal::dataIsValid> dataIsValid{};
        }
    }
    namespace Nonetxplenn{    ///<USB Transmit Packet Length
        using Addr = Register::Address<0x40020024,0xfffffc00,0,unsigned>;
        ///The remaining number of bytes to be written to the selected endpoint buffer. This field is decremented by 4 by hardware after each write to USBTxData. When this field decrements to 0, the TxENDPKT bit will be set in USBDevIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> pktLngth{}; 
        namespace PktlngthValC{
        }
    }
    namespace Nonectrl{    ///<USB Control
        using Addr = Register::Address<0x40020028,0xffffffc0,0,unsigned>;
        ///Read mode control. Enables reading data from the OUT endpoint buffer for the endpoint specified in the LOG_ENDPOINT field using the USBRxData register. This bit is cleared by hardware when the last word of the current packet is read from USBRxData.
        enum class RdenVal {
            readModeIsDisable=0x00000000,     ///<Read mode is disabled.
            readModeIsEnabled=0x00000001,     ///<Read mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RdenVal> rdEn{}; 
        namespace RdenValC{
            constexpr Register::FieldValue<decltype(rdEn),RdenVal::readModeIsDisable> readModeIsDisable{};
            constexpr Register::FieldValue<decltype(rdEn),RdenVal::readModeIsEnabled> readModeIsEnabled{};
        }
        ///Write mode control. Enables writing data to the IN endpoint buffer for the endpoint specified in the LOG_ENDPOINT field using the USBTxData register. This bit is cleared by hardware when the number of bytes in USBTxLen have been sent.
        enum class WrenVal {
            writeModeIsDisabl=0x00000000,     ///<Write mode is disabled.
            writeModeIsEnable=0x00000001,     ///<Write mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WrenVal> wrEn{}; 
        namespace WrenValC{
            constexpr Register::FieldValue<decltype(wrEn),WrenVal::writeModeIsDisabl> writeModeIsDisabl{};
            constexpr Register::FieldValue<decltype(wrEn),WrenVal::writeModeIsEnable> writeModeIsEnable{};
        }
        ///Logical Endpoint number.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> logEndpoint{}; 
        namespace LogendpointValC{
        }
    }
    namespace Nonedevfiqsel{    ///<USB Device FIQ select
        using Addr = Register::Address<0x4002002c,0xfffffff8,0,unsigned>;
        ///This interrupt comes from a 1 KHz free running clock resynchronized on the incoming SoF tokens. This is to be used for isochronous packet transfer.
        enum class FrameVal {
            lowpriority=0x00000000,     ///<FRAME interrupt will be routed to the low-priority interrupt line IRQ.
            highpriority=0x00000001,     ///<FRAME interrupt will be routed to the high-priority interrupt line FIQ.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FrameVal> frame{}; 
        namespace FrameValC{
            constexpr Register::FieldValue<decltype(frame),FrameVal::lowpriority> lowpriority{};
            constexpr Register::FieldValue<decltype(frame),FrameVal::highpriority> highpriority{};
        }
        ///Interrupt routing for bulk out endpoints  For logical endpoint 3 (physical endpoints 6 and 7) only.
        enum class BulkoutVal {
            lowpriority=0x00000000,     ///<BULKOUT interrupt will be routed to the low-priority interrupt line IRQ.
            highpriority=0x00000001,     ///<BULKOUT interrupt will be routed to the high-priority interrupt line FIQ.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BulkoutVal> bulkout{}; 
        namespace BulkoutValC{
            constexpr Register::FieldValue<decltype(bulkout),BulkoutVal::lowpriority> lowpriority{};
            constexpr Register::FieldValue<decltype(bulkout),BulkoutVal::highpriority> highpriority{};
        }
        ///Interrupt routing for bulk in endpoints  For logical endpoint 3 (physical endpoints 6 and 7) only.
        enum class BulkinVal {
            lowpriority=0x00000000,     ///<BULKIN interrupt will be routed to the low-priority interrupt line IRQ.
            highpriority=0x00000001,     ///<BULKIN interrupt will be routed to the high-priority interrupt line FIQ.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BulkinVal> bulkin{}; 
        namespace BulkinValC{
            constexpr Register::FieldValue<decltype(bulkin),BulkinVal::lowpriority> lowpriority{};
            constexpr Register::FieldValue<decltype(bulkin),BulkinVal::highpriority> highpriority{};
        }
    }
}
