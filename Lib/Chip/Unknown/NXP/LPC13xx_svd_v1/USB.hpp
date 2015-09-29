#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10375 Chapter title=LPC13xx USB device
controller Modification date=4/20/2011 Major revision=2 Minor revision=1 
    namespace Nonedevintst{    ///<USB Device Interrupt Status
        using Addr = Register::Address<0x40020000,0xffffc000,0,unsigned>;
        ///The frame interrupt occurs every 1 ms. This is used in isochronous packet transfers. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frame{}; 
        ///USB core interrupt for physical endpoint 0. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep0{}; 
        ///USB core interrupt for physical endpoint 1. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep1{}; 
        ///USB core interrupt for physical endpoint 2. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep2{}; 
        ///USB core interrupt for physical endpoint 3. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep3{}; 
        ///USB core interrupt for physical endpoint 4. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep4{}; 
        ///USB core interrupt for physical endpoint 5. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep5{}; 
        ///USB core interrupt for physical endpoint 6. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ep6{}; 
        ///USB core interrupt for physical endpoint 7. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep7{}; 
        ///Set when USB Bus reset, USB suspend change, or Connect change event occurs. Refer to Section 10.11.7. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> devStat{}; 
        ///The command code register (USBCmdCode) is empty (New command can be written). 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ccEmpty{}; 
        ///Command data register (USBCmdData) is full (Data can be read now). 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cdFull{}; 
        ///The current packet in the endpoint buffer is transferred to the CPU. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxendpkt{}; 
        ///The number of data bytes transferred to the endpoint buffer equals the number of bytes programmed in the TxPacket length register (USBTxPLen). 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txendpkt{}; 
    }
    namespace Nonedevinten{    ///<USB Device Interrupt Enable
        using Addr = Register::Address<0x40020004,0xffffc000,0,unsigned>;
        ///Frame interrupt . For isochronous packet transfers. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameEn{}; 
        ///USB core interrupt for physical endpoint 0. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep0En{}; 
        ///USB core interrupt for physical endpoint 1. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep1En{}; 
        ///USB core interrupt for physical endpoint 2. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep2En{}; 
        ///USB core interrupt for physical endpoint 3. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep3En{}; 
        ///USB core interrupt for physical endpoint 4. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep4En{}; 
        ///USB core interrupt for physical endpoint 5. 0 = no interrupt. 1 = interrupt pending.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep5En{}; 
        ///USB core interrupt for physical endpoint 6. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ep6En{}; 
        ///USB core interrupt for physical endpoint 7. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep7En{}; 
        ///Set when USB Bus reset, USB suspend change, or Connect change event occurs.  0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> devStatEn{}; 
        ///The command code register (USBCmdCode) is empty (New command can be written). 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ccEmptyEn{}; 
        ///Command data register (USBCmdData) is full (Data can be read now). 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cdFullEn{}; 
        ///The current packet in the endpoint buffer is transferred to the CPU. 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxendpktEn{}; 
        ///The number of data bytes transferred to the endpoint buffer equals the number of bytes programmed in the TxPacket length register (USBTxPLen). 0 = no interrupt generated. 1 = interrupt generated when the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txendpktEn{}; 
    }
    namespace Nonedevintctrl{    ///<USB Device Interrupt Clear
        using Addr = Register::Address<0x40020008,0xffffc000,0,unsigned>;
        ///Frame interrupt . For isochronous packet transfers. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameClr{}; 
        ///USB core interrupt for physical endpoint 0. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep0Clr{}; 
        ///USB core interrupt for physical endpoint 1. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep1Clr{}; 
        ///USB core interrupt for physical endpoint 2. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep2Clr{}; 
        ///USB core interrupt for physical endpoint 3. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep3Clr{}; 
        ///USB core interrupt for physical endpoint 4. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep4Clr{}; 
        ///USB core interrupt for physical endpoint 5. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep5Clr{}; 
        ///USB core interrupt for physical endpoint 6. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ep6Clr{}; 
        ///USB core interrupt for physical endpoint 7. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep7Clr{}; 
        ///Set when USB Bus reset, USB suspend change, or Connect change event occurs.  0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> devStatClr{}; 
        ///The command code register (USBCmdCode) is empty (New command can be written). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ccEmptyClr{}; 
        ///Command data register (USBCmdData) is full (Data can be read now). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cdFullClr{}; 
        ///The current packet in the endpoint buffer is transferred to the CPU. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxendpktClr{}; 
        ///The number of data bytes transferred to the endpoint buffer equals the number of bytes programmed in the TxPacket length register (USBTxPLen). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txendpktClr{}; 
    }
    namespace Nonedevintset{    ///<USB Device Interrupt Set
        using Addr = Register::Address<0x4002000c,0xffffc000,0,unsigned>;
        ///Frame interrupt . For isochronous packet transfers. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameSet{}; 
        ///USB core interrupt for physical endpoint 0. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep0Set{}; 
        ///USB core interrupt for physical endpoint 1. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep1Set{}; 
        ///USB core interrupt for physical endpoint 2. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep2Set{}; 
        ///USB core interrupt for physical endpoint 3. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep3Set{}; 
        ///USB core interrupt for physical endpoint 4. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep4Set{}; 
        ///USB core interrupt for physical endpoint 5. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep5Set{}; 
        ///USB core interrupt for physical endpoint 6. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ep6Set{}; 
        ///USB core interrupt for physical endpoint 7. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ep7Set{}; 
        ///Set when USB Bus reset, USB suspend change, or Connect change event occurs.  0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> devStatSet{}; 
        ///The command code register (USBCmdCode) is empty (New command can be written). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ccEmptySet{}; 
        ///Command data register (USBCmdData) is full (Data can be read now). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cdFullSet{}; 
        ///The current packet in the endpoint buffer is transferred to the CPU. 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxendpktSet{}; 
        ///The number of data bytes transferred to the endpoint buffer equals the number of bytes programmed in the TxPacket length register (USBTxPLen). 0 = no effect. 1 = the corresponding bit in USBDevIntSt is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txendpktSet{}; 
    }
    namespace Nonecmdcode{    ///<USB Command Code
        using Addr = Register::Address<0x40020010,0xff0000ff,0,unsigned>;
        ///Command phase action
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cmdPhase{}; 
        ///This is a multi-purpose field. When CMD_PHASE is Command or Read, this field contains the code for the command (CMD_CODE). When CMD_PHASE is Write, this field contains the command write data (CMD_WDATA).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> codeWdata{}; 
    }
    namespace Nonecmddata{    ///<USB Command Data
        using Addr = Register::Address<0x40020014,0xffffff00,0,unsigned>;
        ///Command Read Data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cmdRdata{}; 
    }
    namespace Nonerxdata{    ///<USB Receive Data
        using Addr = Register::Address<0x40020018,0x00000000,0,unsigned>;
        ///Data received.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxData{}; 
    }
    namespace Nonetxdata{    ///<USB Transmit Data
        using Addr = Register::Address<0x4002001c,0x00000000,0,unsigned>;
        ///Transmit Data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txData{}; 
    }
    namespace Nonerxplen{    ///<USB Receive Packet Length
        using Addr = Register::Address<0x40020020,0xfffff800,0,unsigned>;
        ///The remaining number of bytes to be read from the currently selected endpoint's buffer. When this field decrements to 0, the RxENDPKT bit will be set in USBDevIntSt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> pktLngth{}; 
        ///Data valid. This bit is useful for isochronous endpoints. Non-isochronous endpoints do not raise an interrupt when an erroneous data packet is received. But invalid data packet can be produced with a bus reset. For isochronous endpoints, data transfer will happen even if an erroneous packet is received. In this case DV bit will not be set for the packet.
        enum class dvVal {
            dataIsInvalid=0x00000000,     ///<Data is invalid.
            dataIsValid=0x00000001,     ///<Data is valid.
        };
        namespace dvValC{
            constexpr MPL::Value<dvVal,dvVal::dataIsInvalid> dataIsInvalid{};
            constexpr MPL::Value<dvVal,dvVal::dataIsValid> dataIsValid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,dvVal> dv{}; 
    }
    namespace Nonetxplenn{    ///<USB Transmit Packet Length
        using Addr = Register::Address<0x40020024,0xfffffc00,0,unsigned>;
        ///The remaining number of bytes to be written to the selected endpoint buffer. This field is decremented by 4 by hardware after each write to USBTxData. When this field decrements to 0, the TxENDPKT bit will be set in USBDevIntSt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> pktLngth{}; 
    }
    namespace Nonectrl{    ///<USB Control
        using Addr = Register::Address<0x40020028,0xffffffc0,0,unsigned>;
        ///Read mode control. Enables reading data from the OUT endpoint buffer for the endpoint specified in the LOG_ENDPOINT field using the USBRxData register. This bit is cleared by hardware when the last word of the current packet is read from USBRxData.
        enum class rdEnVal {
            readModeIsDisable=0x00000000,     ///<Read mode is disabled.
            readModeIsEnabled=0x00000001,     ///<Read mode is enabled.
        };
        namespace rdEnValC{
            constexpr MPL::Value<rdEnVal,rdEnVal::readModeIsDisable> readModeIsDisable{};
            constexpr MPL::Value<rdEnVal,rdEnVal::readModeIsEnabled> readModeIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rdEnVal> rdEn{}; 
        ///Write mode control. Enables writing data to the IN endpoint buffer for the endpoint specified in the LOG_ENDPOINT field using the USBTxData register. This bit is cleared by hardware when the number of bytes in USBTxLen have been sent.
        enum class wrEnVal {
            writeModeIsDisabl=0x00000000,     ///<Write mode is disabled.
            writeModeIsEnable=0x00000001,     ///<Write mode is enabled.
        };
        namespace wrEnValC{
            constexpr MPL::Value<wrEnVal,wrEnVal::writeModeIsDisabl> writeModeIsDisabl{};
            constexpr MPL::Value<wrEnVal,wrEnVal::writeModeIsEnable> writeModeIsEnable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wrEnVal> wrEn{}; 
        ///Logical Endpoint number.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> logEndpoint{}; 
    }
    namespace Nonedevfiqsel{    ///<USB Device FIQ select
        using Addr = Register::Address<0x4002002c,0xfffffff8,0,unsigned>;
        ///This interrupt comes from a 1 KHz free running clock resynchronized on the incoming SoF tokens. This is to be used for isochronous packet transfer.
        enum class frameVal {
            lowpriority=0x00000000,     ///<FRAME interrupt will be routed to the low-priority interrupt line IRQ.
            highpriority=0x00000001,     ///<FRAME interrupt will be routed to the high-priority interrupt line FIQ.
        };
        namespace frameValC{
            constexpr MPL::Value<frameVal,frameVal::lowpriority> lowpriority{};
            constexpr MPL::Value<frameVal,frameVal::highpriority> highpriority{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,frameVal> frame{}; 
        ///Interrupt routing for bulk out endpoints  For logical endpoint 3 (physical endpoints 6 and 7) only.
        enum class bulkoutVal {
            lowpriority=0x00000000,     ///<BULKOUT interrupt will be routed to the low-priority interrupt line IRQ.
            highpriority=0x00000001,     ///<BULKOUT interrupt will be routed to the high-priority interrupt line FIQ.
        };
        namespace bulkoutValC{
            constexpr MPL::Value<bulkoutVal,bulkoutVal::lowpriority> lowpriority{};
            constexpr MPL::Value<bulkoutVal,bulkoutVal::highpriority> highpriority{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bulkoutVal> bulkout{}; 
        ///Interrupt routing for bulk in endpoints  For logical endpoint 3 (physical endpoints 6 and 7) only.
        enum class bulkinVal {
            lowpriority=0x00000000,     ///<BULKIN interrupt will be routed to the low-priority interrupt line IRQ.
            highpriority=0x00000001,     ///<BULKIN interrupt will be routed to the high-priority interrupt line FIQ.
        };
        namespace bulkinValC{
            constexpr MPL::Value<bulkinVal,bulkinVal::lowpriority> lowpriority{};
            constexpr MPL::Value<bulkinVal,bulkinVal::highpriority> highpriority{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bulkinVal> bulkin{}; 
    }
}
