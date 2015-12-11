#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB device/host/OTG controller
    namespace Noneintst{    ///<OTG Interrupt Status
        using Addr = Register::Address<0x2008c100,0xfffffff0,0,unsigned>;
        ///Timer time-out.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmr{}; 
        ///Remove pull-up. This bit is set by hardware to indicate that software needs to disable the D+ pull-up resistor.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> removePu{}; 
        ///HNP failed. This bit is set by hardware to indicate that the HNP switching has failed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hnpFailure{}; 
        ///HNP succeeded. This bit is set by hardware to indicate that the HNP switching has succeeded.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hnpSuccess{}; 
    }
    namespace Noneinten{    ///<OTG Interrupt Enable
        using Addr = Register::Address<0x2008c104,0xfffffff0,0,unsigned>;
        ///1 = enable the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmrEn{}; 
        ///1 = enable the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> removePuEn{}; 
        ///1 = enable the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hnpFailureEn{}; 
        ///1 = enable the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hnpSuccesEn{}; 
    }
    namespace Noneintset{    ///<OTG Interrupt Set
        using Addr = Register::Address<0x2008c108,0xfffffff0,0,unsigned>;
        ///0 = no effect. 1 = set the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmrSet{}; 
        ///0 = no effect. 1 = set the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> removePuSet{}; 
        ///0 = no effect. 1 = set the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hnpFailureSet{}; 
        ///0 = no effect. 1 = set the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hnpSuccesSet{}; 
    }
    namespace Noneintclr{    ///<OTG Interrupt Clear
        using Addr = Register::Address<0x2008c10c,0xfffffff0,0,unsigned>;
        ///0 = no effect. 1 = clear the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmrClr{}; 
        ///0 = no effect. 1 = clear the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> removePuClr{}; 
        ///0 = no effect. 1 = clear the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hnpFailureClr{}; 
        ///0 = no effect. 1 = clear the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hnpSuccesClr{}; 
    }
    namespace Nonestctrl{    ///<OTG Status and Control and USB port select
        using Addr = Register::Address<0x2008c110,0x0000f880,0,unsigned>;
        ///Controls connection of USB functions (see Figure 51). Bit 0 is set or cleared by hardware when B_HNP_TRACK or A_HNP_TRACK is set and HNP succeeds. See Section 14.9. 00: U1 = device (OTG), U2 = host 01: U1 = host (OTG), U2 = host 10: Reserved 11: U1 = host, U2 = device In a device-only configuration, the following values are allowed: 00: U1 = device. The USB device controller signals are mapped to the U1 port: USB_CONNECT1, USB_UP_LED1, USB_D+1, USB_D-1. 11: U2 = device. The USB device controller signals are mapped to the U2 port: USB_CONNECT2, USB_UP_LED2, USB_D+2, USB_D-2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> portFunc{}; 
        ///Timer scale selection. This field determines the duration of each timer count. 00: 10 ms (100 KHz) 01: 100 ms (10 KHz) 10: 1000 ms (1 KHz) 11: Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tmrScale{}; 
        ///Timer mode selection. 0: monoshot 1: free running
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmrMode{}; 
        ///Timer enable. When set, TMR_CNT increments. When cleared, TMR_CNT is reset to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tmrEn{}; 
        ///Timer reset. Writing one to this bit resets TMR_CNT to 0. This provides a single bit control for the software to restart the timer when the timer is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tmrRst{}; 
        ///Enable HNP tracking for B-device (peripheral), see Section 14.9. Hardware clears this bit when HNP_SUCCESS or HNP_FAILURE is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bHnpTrack{}; 
        ///Enable HNP tracking for A-device (host), see Section 14.9. Hardware clears this bit when HNP_SUCCESS or HNP_FAILURE is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aHnpTrack{}; 
        ///When the B-device changes its role from peripheral to host, software sets this bit when it removes the D+ pull-up, see Section 14.9. Hardware clears this bit when HNP_SUCCESS or HNP_FAILURE is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> puRemoved{}; 
        ///Current timer count value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tmrCnt{}; 
    }
    namespace Nonetmr{    ///<OTG Timer
        using Addr = Register::Address<0x2008c114,0xffff0000,0,unsigned>;
        ///The TMR interrupt is set when TMR_CNT reaches this value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeoutCnt{}; 
    }
    namespace Nonedevintst{    ///<USB Device Interrupt Status
        using Addr = Register::Address<0x2008c200,0xfffffc00,0,unsigned>;
        ///The frame interrupt occurs every 1 ms. This is used in isochronous packet transfers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Fast endpoint interrupt. If an Endpoint Interrupt Priority register (USBEpIntPri) bit is set, the corresponding endpoint interrupt will be routed to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epFast{}; 
        ///Slow endpoints interrupt. If an Endpoint Interrupt Priority Register (USBEpIntPri) bit is not set, the corresponding endpoint interrupt will be routed to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epSlow{}; 
        ///Set when USB Bus reset, USB suspend change or Connect change event occurs. Refer to Section 13.12.6 Set Device Status (Command: 0xFE, Data: write 1 byte) on page 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> devStat{}; 
        ///The command code register (USBCmdCode) is empty (New command can be written).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccempty{}; 
        ///Command data register (USBCmdData) is full (Data can be read now).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cdfull{}; 
        ///The current packet in the endpoint buffer is transferred to the CPU.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxendpkt{}; 
        ///The number of data bytes transferred to the endpoint buffer equals the number of bytes programmed in the TxPacket length register (USBTxPLen).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txendpkt{}; 
        ///Endpoints realized. Set when Realize Endpoint register (USBReEp) or MaxPacketSize register (USBMaxPSize) is updated and the corresponding operation is completed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epRlzed{}; 
        ///Error Interrupt. Any bus error interrupt from the USB device. Refer to Section 13.12.9 Read Error Status (Command: 0xFB, Data: read 1 byte) on page 368
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> errInt{}; 
    }
    namespace Nonedevinten{    ///<USB Device Interrupt Enable
        using Addr = Register::Address<0x2008c204,0xfffffc00,0,unsigned>;
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameen{}; 
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epFasten{}; 
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epSlowen{}; 
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> devStaten{}; 
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccemptyen{}; 
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cdfullen{}; 
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxendpkten{}; 
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txendpkten{}; 
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epRlzeden{}; 
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> errInten{}; 
    }
    namespace Nonedevintclr{    ///<USB Device Interrupt Clear
        using Addr = Register::Address<0x2008c208,0xfffffc00,0,unsigned>;
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameclr{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epFastclr{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epSlowclr{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> devStatclr{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccemptyclr{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cdfullclr{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxendpktclr{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txendpktclr{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epRlzedclr{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> errIntclr{}; 
    }
    namespace Nonedevintset{    ///<USB Device Interrupt Set
        using Addr = Register::Address<0x2008c20c,0xfffffc00,0,unsigned>;
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameset{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epFastset{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epSlowset{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> devStatset{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccemptyset{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cdfullset{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxendpktset{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txendpktset{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epRlzedset{}; 
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> errIntset{}; 
    }
    namespace Nonecmdcode{    ///<USB Command Code
        using Addr = Register::Address<0x2008c210,0xff0000ff,0,unsigned>;
        ///The command phase:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cmdPhase{}; 
        ///This is a multi-purpose field. When CMD_PHASE is Command or Read, this field contains the code for the command (CMD_CODE). When CMD_PHASE is Write, this field contains the command write data (CMD_WDATA).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> cmdCodeWdata{}; 
    }
    namespace Nonecmddata{    ///<USB Command Data
        using Addr = Register::Address<0x2008c214,0xffffff00,0,unsigned>;
        ///Command Read Data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cmdRdata{}; 
    }
    namespace Nonerxdata{    ///<USB Receive Data
        using Addr = Register::Address<0x2008c218,0x00000000,0,unsigned>;
        ///Data received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxData{}; 
    }
    namespace Nonetxdata{    ///<USB Transmit Data
        using Addr = Register::Address<0x2008c21c,0x00000000,0,unsigned>;
        ///Transmit Data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txData{}; 
    }
    namespace Nonerxplen{    ///<USB Receive Packet Length
        using Addr = Register::Address<0x2008c0dc,0xfffff000,0,unsigned>;
        ///The remaining number of bytes to be read from the currently selected endpoint's buffer. When this field decrements to 0, the RxENDPKT bit will be set in USBDevIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> pktLngth{}; 
        ///Data valid. This bit is useful for isochronous endpoints. Non-isochronous endpoints do not raise an interrupt when an erroneous data packet is received. But invalid data packet can be produced with a bus reset. For isochronous endpoints, data transfer will happen even if an erroneous packet is received. In this case DV bit will not be set for the packet.
        enum class DvVal {
            dataIsInvalid=0x00000000,     ///<Data is invalid.
            dataIsValid=0x00000001,     ///<Data is valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,DvVal> dv{}; 
        namespace DvValC{
            constexpr Register::FieldValue<decltype(dv)::Type,DvVal::dataIsInvalid> dataIsInvalid{};
            constexpr Register::FieldValue<decltype(dv)::Type,DvVal::dataIsValid> dataIsValid{};
        }
        ///The PKT_LNGTH field is valid and the packet is ready for reading.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktRdy{}; 
    }
    namespace Nonetxplen{    ///<USB Transmit Packet Length
        using Addr = Register::Address<0x2008c224,0xfffffc00,0,unsigned>;
        ///The remaining number of bytes to be written to the selected endpoint buffer. This field is decremented by 4 by hardware after each write to USBTxData. When this field decrements to 0, the TxENDPKT bit will be set in USBDevIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> pktLngth{}; 
    }
    namespace Nonectrl{    ///<USB Control
        using Addr = Register::Address<0x2008c228,0xffffffc0,0,unsigned>;
        ///Read mode control. Enables reading data from the OUT endpoint buffer for the endpoint specified in the LOG_ENDPOINT field using the USBRxData register. This bit is cleared by hardware when the last word of the current packet is read from USBRxData.
        enum class RdenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RdenVal> rdEn{}; 
        namespace RdenValC{
            constexpr Register::FieldValue<decltype(rdEn)::Type,RdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rdEn)::Type,RdenVal::enabled> enabled{};
        }
        ///Write mode control. Enables writing data to the IN endpoint buffer for the endpoint specified in the LOG_ENDPOINT field using the USBTxData register. This bit is cleared by hardware when the number of bytes in USBTxLen have been sent.
        enum class WrenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WrenVal> wrEn{}; 
        namespace WrenValC{
            constexpr Register::FieldValue<decltype(wrEn)::Type,WrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wrEn)::Type,WrenVal::enabled> enabled{};
        }
        ///Logical Endpoint number.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> logEndpoint{}; 
    }
    namespace Nonedevintpri{    ///<USB Device Interrupt Priority
        using Addr = Register::Address<0x2008c22c,0xfffffffc,0,unsigned>;
        ///Frame interrupt routing
        enum class FrameVal {
            lp=0x00000000,     ///<FRAME interrupt is routed to USB_INT_REQ_LP.
            hp=0x00000001,     ///<FRAME interrupt is routed to USB_INT_REQ_HP.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FrameVal> frame{}; 
        namespace FrameValC{
            constexpr Register::FieldValue<decltype(frame)::Type,FrameVal::lp> lp{};
            constexpr Register::FieldValue<decltype(frame)::Type,FrameVal::hp> hp{};
        }
        ///Fast endpoint interrupt routing
        enum class EpfastVal {
            lp=0x00000000,     ///<EP_FAST interrupt is routed to USB_INT_REQ_LP.
            hp=0x00000001,     ///<EP_FAST interrupt is routed to USB_INT_REQ_HP.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EpfastVal> epFast{}; 
        namespace EpfastValC{
            constexpr Register::FieldValue<decltype(epFast)::Type,EpfastVal::lp> lp{};
            constexpr Register::FieldValue<decltype(epFast)::Type,EpfastVal::hp> hp{};
        }
    }
    namespace Noneepintst{    ///<USB Endpoint Interrupt Status
        using Addr = Register::Address<0x2008c230,0x00000000,0,unsigned>;
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epst0{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epst1{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epst2{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epst3{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epst4{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epst5{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epst6{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epst7{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epst8{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epst9{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epst10{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epst11{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epst12{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epst13{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epst14{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epst15{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epst16{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epst17{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epst18{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epst19{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epst20{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epst21{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epst22{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epst23{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epst24{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epst25{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epst26{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epst27{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epst28{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epst29{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epst30{}; 
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epst31{}; 
    }
    namespace Noneepinten{    ///<USB Endpoint Interrupt Enable
        using Addr = Register::Address<0x2008c234,0x00000000,0,unsigned>;
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epen0{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epen1{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epen2{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epen3{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epen4{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epen5{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epen6{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epen7{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epen8{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epen9{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epen10{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epen11{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epen12{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epen13{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epen14{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epen15{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epen16{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epen17{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epen18{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epen19{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epen20{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epen21{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epen22{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epen23{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epen24{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epen25{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epen26{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epen27{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epen28{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epen29{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epen30{}; 
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epen31{}; 
    }
    namespace Noneepintclr{    ///<USB Endpoint Interrupt Clear
        using Addr = Register::Address<0x2008c238,0x00000000,0,unsigned>;
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epclr0{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epclr1{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epclr2{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epclr3{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epclr4{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epclr5{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epclr6{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epclr7{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epclr8{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epclr9{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epclr10{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epclr11{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epclr12{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epclr13{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epclr14{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epclr15{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epclr16{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epclr17{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epclr18{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epclr19{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epclr20{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epclr21{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epclr22{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epclr23{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epclr24{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epclr25{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epclr26{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epclr27{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epclr28{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epclr29{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epclr30{}; 
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epclr31{}; 
    }
    namespace Noneepintset{    ///<USB Endpoint Interrupt Set
        using Addr = Register::Address<0x2008c23c,0x00000000,0,unsigned>;
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epset0{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epset1{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epset2{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epset3{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epset4{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epset5{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epset6{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epset7{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epset8{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epset9{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epset10{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epset11{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epset12{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epset13{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epset14{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epset15{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epset16{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epset17{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epset18{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epset19{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epset20{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epset21{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epset22{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epset23{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epset24{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epset25{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epset26{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epset27{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epset28{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epset29{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epset30{}; 
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epset31{}; 
    }
    namespace Noneepintpri{    ///<USB Endpoint Priority
        using Addr = Register::Address<0x2008c240,0x00000000,0,unsigned>;
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eppri0{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eppri1{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eppri2{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eppri3{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eppri4{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eppri5{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eppri6{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eppri7{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eppri8{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eppri9{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eppri10{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eppri11{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eppri12{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eppri13{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eppri14{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eppri15{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eppri16{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eppri17{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eppri18{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eppri19{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eppri20{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eppri21{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eppri22{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eppri23{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eppri24{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eppri25{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eppri26{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eppri27{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eppri28{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eppri29{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eppri30{}; 
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eppri31{}; 
    }
    namespace Nonereep{    ///<USB Realize Endpoint
        using Addr = Register::Address<0x2008c244,0x00000000,0,unsigned>;
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epr0{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epr1{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epr2{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epr3{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epr4{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epr5{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epr6{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epr7{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epr8{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epr9{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epr10{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epr11{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epr12{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epr13{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epr14{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epr15{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epr16{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epr17{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epr18{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epr19{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epr20{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epr21{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epr22{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epr23{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epr24{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epr25{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epr26{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epr27{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epr28{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epr29{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epr30{}; 
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epr31{}; 
    }
    namespace Noneepind{    ///<USB Endpoint Index
        using Addr = Register::Address<0x2008c248,0xffffffe0,0,unsigned>;
        ///Physical endpoint number (0-31)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> phyEp{}; 
    }
    namespace Nonemaxpsize{    ///<USB MaxPacketSize
        using Addr = Register::Address<0x2008c24c,0xfffffc00,0,unsigned>;
        ///The maximum packet size value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> mps{}; 
    }
    namespace Nonedmarst{    ///<USB DMA Request Status
        using Addr = Register::Address<0x2008c250,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and EP0 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eprst0{}; 
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and EP1 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eprst1{}; 
        ///Endpoint xx (2 <=  xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eprst2{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprst3{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eprst4{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eprst5{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eprst6{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eprst7{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eprst8{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eprst9{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eprst10{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eprst11{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eprst12{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eprst13{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eprst14{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eprst15{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eprst16{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eprst17{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eprst18{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eprst19{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eprst20{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eprst21{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eprst22{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eprst23{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eprst24{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eprst25{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eprst26{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eprst27{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eprst28{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eprst29{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eprst30{}; 
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eprst31{}; 
    }
    namespace Nonedmarclr{    ///<USB DMA Request Clear
        using Addr = Register::Address<0x2008c254,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and the EP0 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eprclr0{}; 
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and the EP1 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eprclr1{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eprclr2{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprclr3{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eprclr4{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eprclr5{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eprclr6{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eprclr7{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eprclr8{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eprclr9{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eprclr10{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eprclr11{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eprclr12{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eprclr13{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eprclr14{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eprclr15{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eprclr16{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eprclr17{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eprclr18{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eprclr19{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eprclr20{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eprclr21{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eprclr22{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eprclr23{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eprclr24{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eprclr25{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eprclr26{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eprclr27{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eprclr28{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eprclr29{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eprclr30{}; 
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eprclr31{}; 
    }
    namespace Nonedmarset{    ///<USB DMA Request Set
        using Addr = Register::Address<0x2008c258,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and the EP0 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eprset0{}; 
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and the EP1 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eprset1{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eprset2{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprset3{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eprset4{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eprset5{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eprset6{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eprset7{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eprset8{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eprset9{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eprset10{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eprset11{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eprset12{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eprset13{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eprset14{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eprset15{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eprset16{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eprset17{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eprset18{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eprset19{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eprset20{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eprset21{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eprset22{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eprset23{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eprset24{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eprset25{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eprset26{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eprset27{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eprset28{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eprset29{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eprset30{}; 
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eprset31{}; 
    }
    namespace Noneudcah{    ///<USB UDCA Head
        using Addr = Register::Address<0x2008c280,0x0000007f,0,unsigned>;
        ///Start address of the UDCA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> udcaAddr{}; 
    }
    namespace Noneepdmast{    ///<USB Endpoint DMA Status
        using Addr = Register::Address<0x2008c284,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and the EP0_DMA_ENABLE bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epDmaSt0{}; 
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and the EP1_DMA_ENABLE bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epDmaSt1{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epDmaSt2{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epDmaSt3{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epDmaSt4{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epDmaSt5{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epDmaSt6{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epDmaSt7{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epDmaSt8{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epDmaSt9{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epDmaSt10{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epDmaSt11{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epDmaSt12{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epDmaSt13{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epDmaSt14{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epDmaSt15{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epDmaSt16{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epDmaSt17{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epDmaSt18{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epDmaSt19{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epDmaSt20{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epDmaSt21{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epDmaSt22{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epDmaSt23{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epDmaSt24{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epDmaSt25{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epDmaSt26{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epDmaSt27{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epDmaSt28{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epDmaSt29{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epDmaSt30{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epDmaSt31{}; 
    }
    namespace Noneepdmaen{    ///<USB Endpoint DMA Enable
        using Addr = Register::Address<0x2008c288,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and the EP0_DMA_ENABLE bit value must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epDmaEn0{}; 
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and the EP1_DMA_ENABLE bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epDmaEn1{}; 
        ///Endpoint xx(2 <= xx <= 31) DMA enable control bit. 0 = No effect. 1 = Enable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> epDmaEn{}; 
    }
    namespace Noneepdmadis{    ///<USB Endpoint DMA Disable
        using Addr = Register::Address<0x2008c28c,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and the EP0_DMA_DISABLE bit value must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epDmaDis0{}; 
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and the EP1_DMA_DISABLE bit value must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epDmaDis1{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epDmaDis2{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epDmaDis3{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epDmaDis4{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epDmaDis5{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epDmaDis6{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epDmaDis7{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epDmaDis8{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epDmaDis9{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epDmaDis10{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epDmaDis11{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epDmaDis12{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epDmaDis13{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epDmaDis14{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epDmaDis15{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epDmaDis16{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epDmaDis17{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epDmaDis18{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epDmaDis19{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epDmaDis20{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epDmaDis21{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epDmaDis22{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epDmaDis23{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epDmaDis24{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epDmaDis25{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epDmaDis26{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epDmaDis27{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epDmaDis28{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epDmaDis29{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epDmaDis30{}; 
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epDmaDis31{}; 
    }
    namespace Nonedmaintst{    ///<USB DMA Interrupt Status
        using Addr = Register::Address<0x2008c290,0xfffffff8,0,unsigned>;
        ///End of Transfer Interrupt bit.
        enum class EotVal {
            allBitsInTheUsbe=0x00000000,     ///<All bits in the USBEoTIntSt register are 0.
            atLeastOneBitIn=0x00000001,     ///<At least one bit in the USBEoTIntSt is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EotVal> eot{}; 
        namespace EotValC{
            constexpr Register::FieldValue<decltype(eot)::Type,EotVal::allBitsInTheUsbe> allBitsInTheUsbe{};
            constexpr Register::FieldValue<decltype(eot)::Type,EotVal::atLeastOneBitIn> atLeastOneBitIn{};
        }
        ///New DD Request Interrupt bit.
        enum class NddrVal {
            allBitsInTheUsbn=0x00000000,     ///<All bits in the USBNDDRIntSt register are 0.
            atLeastOneBitIn=0x00000001,     ///<At least one bit in the USBNDDRIntSt is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NddrVal> nddr{}; 
        namespace NddrValC{
            constexpr Register::FieldValue<decltype(nddr)::Type,NddrVal::allBitsInTheUsbn> allBitsInTheUsbn{};
            constexpr Register::FieldValue<decltype(nddr)::Type,NddrVal::atLeastOneBitIn> atLeastOneBitIn{};
        }
        ///System Error Interrupt bit.
        enum class ErrVal {
            allBitsInTheUsbs=0x00000000,     ///<All bits in the USBSysErrIntSt register are 0.
            atLeastOneBitIn=0x00000001,     ///<At least one bit in the USBSysErrIntSt is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrVal> err{}; 
        namespace ErrValC{
            constexpr Register::FieldValue<decltype(err)::Type,ErrVal::allBitsInTheUsbs> allBitsInTheUsbs{};
            constexpr Register::FieldValue<decltype(err)::Type,ErrVal::atLeastOneBitIn> atLeastOneBitIn{};
        }
    }
    namespace Nonedmainten{    ///<USB DMA Interrupt Enable
        using Addr = Register::Address<0x2008c294,0xfffffff8,0,unsigned>;
        ///End of Transfer Interrupt enable bit.
        enum class EotVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EotVal> eot{}; 
        namespace EotValC{
            constexpr Register::FieldValue<decltype(eot)::Type,EotVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(eot)::Type,EotVal::enabled> enabled{};
        }
        ///New DD Request Interrupt enable bit.
        enum class NddrVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NddrVal> nddr{}; 
        namespace NddrValC{
            constexpr Register::FieldValue<decltype(nddr)::Type,NddrVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(nddr)::Type,NddrVal::enabled> enabled{};
        }
        ///System Error Interrupt enable bit.
        enum class ErrVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrVal> err{}; 
        namespace ErrValC{
            constexpr Register::FieldValue<decltype(err)::Type,ErrVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(err)::Type,ErrVal::enabled> enabled{};
        }
    }
    namespace Noneeotintst{    ///<USB End of Transfer Interrupt Status
        using Addr = Register::Address<0x2008c2a0,0x00000000,0,unsigned>;
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptxintst0{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eptxintst1{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxintst2{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptxintst3{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eptxintst4{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eptxintst5{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eptxintst6{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eptxintst7{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eptxintst8{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eptxintst9{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eptxintst10{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eptxintst11{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eptxintst12{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eptxintst13{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eptxintst14{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eptxintst15{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eptxintst16{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eptxintst17{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eptxintst18{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eptxintst19{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eptxintst20{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eptxintst21{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eptxintst22{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eptxintst23{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eptxintst24{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eptxintst25{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eptxintst26{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eptxintst27{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eptxintst28{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptxintst29{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eptxintst30{}; 
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptxintst31{}; 
    }
    namespace Noneeotintclr{    ///<USB End of Transfer Interrupt Clear
        using Addr = Register::Address<0x2008c2a4,0x00000000,0,unsigned>;
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptxintclr0{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eptxintclr1{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxintclr2{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptxintclr3{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eptxintclr4{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eptxintclr5{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eptxintclr6{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eptxintclr7{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eptxintclr8{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eptxintclr9{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eptxintclr10{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eptxintclr11{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eptxintclr12{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eptxintclr13{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eptxintclr14{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eptxintclr15{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eptxintclr16{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eptxintclr17{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eptxintclr18{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eptxintclr19{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eptxintclr20{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eptxintclr21{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eptxintclr22{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eptxintclr23{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eptxintclr24{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eptxintclr25{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eptxintclr26{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eptxintclr27{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eptxintclr28{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptxintclr29{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eptxintclr30{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptxintclr31{}; 
    }
    namespace Noneeotintset{    ///<USB End of Transfer Interrupt Set
        using Addr = Register::Address<0x2008c2a8,0x00000000,0,unsigned>;
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptxintset0{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eptxintset1{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxintset2{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptxintset3{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eptxintset4{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eptxintset5{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eptxintset6{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eptxintset7{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eptxintset8{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eptxintset9{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eptxintset10{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eptxintset11{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eptxintset12{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eptxintset13{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eptxintset14{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eptxintset15{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eptxintset16{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eptxintset17{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eptxintset18{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eptxintset19{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eptxintset20{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eptxintset21{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eptxintset22{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eptxintset23{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eptxintset24{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eptxintset25{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eptxintset26{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eptxintset27{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eptxintset28{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptxintset29{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eptxintset30{}; 
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptxintset31{}; 
    }
    namespace Nonenddrintst{    ///<USB New DD Request Interrupt Status
        using Addr = Register::Address<0x2008c2ac,0x00000000,0,unsigned>;
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epnddintst0{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epnddintst1{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epnddintst2{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epnddintst3{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epnddintst4{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epnddintst5{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epnddintst6{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epnddintst7{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epnddintst8{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epnddintst9{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epnddintst10{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epnddintst11{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epnddintst12{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epnddintst13{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epnddintst14{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epnddintst15{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epnddintst16{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epnddintst17{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epnddintst18{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epnddintst19{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epnddintst20{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epnddintst21{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epnddintst22{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epnddintst23{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epnddintst24{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epnddintst25{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epnddintst26{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epnddintst27{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epnddintst28{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epnddintst29{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epnddintst30{}; 
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epnddintst31{}; 
    }
    namespace Nonenddrintclr{    ///<USB New DD Request Interrupt Clear
        using Addr = Register::Address<0x2008c2b0,0x00000000,0,unsigned>;
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epnddintclr0{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epnddintclr1{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epnddintclr2{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epnddintclr3{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epnddintclr4{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epnddintclr5{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epnddintclr6{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epnddintclr7{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epnddintclr8{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epnddintclr9{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epnddintclr10{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epnddintclr11{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epnddintclr12{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epnddintclr13{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epnddintclr14{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epnddintclr15{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epnddintclr16{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epnddintclr17{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epnddintclr18{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epnddintclr19{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epnddintclr20{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epnddintclr21{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epnddintclr22{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epnddintclr23{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epnddintclr24{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epnddintclr25{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epnddintclr26{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epnddintclr27{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epnddintclr28{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epnddintclr29{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epnddintclr30{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epnddintclr31{}; 
    }
    namespace Nonenddrintset{    ///<USB New DD Request Interrupt Set
        using Addr = Register::Address<0x2008c2b4,0x00000000,0,unsigned>;
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epnddintset0{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epnddintset1{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epnddintset2{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epnddintset3{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epnddintset4{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epnddintset5{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epnddintset6{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epnddintset7{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epnddintset8{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epnddintset9{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epnddintset10{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epnddintset11{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epnddintset12{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epnddintset13{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epnddintset14{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epnddintset15{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epnddintset16{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epnddintset17{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epnddintset18{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epnddintset19{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epnddintset20{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epnddintset21{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epnddintset22{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epnddintset23{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epnddintset24{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epnddintset25{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epnddintset26{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epnddintset27{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epnddintset28{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epnddintset29{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epnddintset30{}; 
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epnddintset31{}; 
    }
    namespace Nonesyserrintst{    ///<USB System Error Interrupt Status
        using Addr = Register::Address<0x2008c2b8,0x00000000,0,unsigned>;
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eperrintst0{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eperrintst1{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eperrintst2{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eperrintst3{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eperrintst4{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eperrintst5{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eperrintst6{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eperrintst7{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eperrintst8{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eperrintst9{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eperrintst10{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eperrintst11{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eperrintst12{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eperrintst13{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eperrintst14{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eperrintst15{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eperrintst16{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eperrintst17{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eperrintst18{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eperrintst19{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eperrintst20{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eperrintst21{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eperrintst22{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eperrintst23{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eperrintst24{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eperrintst25{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eperrintst26{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eperrintst27{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eperrintst28{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eperrintst29{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eperrintst30{}; 
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eperrintst31{}; 
    }
    namespace Nonesyserrintclr{    ///<USB System Error Interrupt Clear
        using Addr = Register::Address<0x2008c2bc,0x00000000,0,unsigned>;
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eperrintclr0{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eperrintclr1{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eperrintclr2{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eperrintclr3{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eperrintclr4{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eperrintclr5{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eperrintclr6{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eperrintclr7{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eperrintclr8{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eperrintclr9{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eperrintclr10{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eperrintclr11{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eperrintclr12{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eperrintclr13{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eperrintclr14{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eperrintclr15{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eperrintclr16{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eperrintclr17{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eperrintclr18{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eperrintclr19{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eperrintclr20{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eperrintclr21{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eperrintclr22{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eperrintclr23{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eperrintclr24{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eperrintclr25{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eperrintclr26{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eperrintclr27{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eperrintclr28{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eperrintclr29{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eperrintclr30{}; 
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eperrintclr31{}; 
    }
    namespace Nonesyserrintset{    ///<USB System Error Interrupt Set
        using Addr = Register::Address<0x2008c2c0,0x00000000,0,unsigned>;
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eperrintset0{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eperrintset1{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eperrintset2{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eperrintset3{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eperrintset4{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eperrintset5{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eperrintset6{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eperrintset7{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eperrintset8{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eperrintset9{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eperrintset10{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eperrintset11{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eperrintset12{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eperrintset13{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eperrintset14{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eperrintset15{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eperrintset16{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eperrintset17{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eperrintset18{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eperrintset19{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eperrintset20{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eperrintset21{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eperrintset22{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eperrintset23{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eperrintset24{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eperrintset25{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eperrintset26{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eperrintset27{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eperrintset28{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eperrintset29{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eperrintset30{}; 
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eperrintset31{}; 
    }
    namespace Nonei2cRx{    ///<I2C Receive
        using Addr = Register::Address<0x2008c300,0xffffff00,0,unsigned>;
        ///Receive data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace Nonei2cWo{    ///<I2C Transmit
        using Addr = Register::Address<0x2008c300,0xfffffc00,0,unsigned>;
        ///Transmit data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        ///When 1, issue a START condition before transmitting this byte.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> start{}; 
        ///When 1, issue a STOP condition after transmitting this byte.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stop{}; 
    }
    namespace Nonei2cSts{    ///<I2C Status
        using Addr = Register::Address<0x2008c304,0xfffff000,0,unsigned>;
        ///Transaction Done Interrupt. This flag is set if a transaction completes successfully. It is cleared by writing a one to bit 0 of the status register. It is unaffected by slave transactions.
        enum class TdiVal {
            notComplete=0x00000000,     ///<Transaction has not completed.
            complete=0x00000001,     ///<Transaction completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TdiVal> tdi{}; 
        namespace TdiValC{
            constexpr Register::FieldValue<decltype(tdi)::Type,TdiVal::notComplete> notComplete{};
            constexpr Register::FieldValue<decltype(tdi)::Type,TdiVal::complete> complete{};
        }
        ///Arbitration Failure Interrupt. When transmitting, if the SDA is low when SDAOUT is high, then this I2C has lost the arbitration to another device on the bus. The Arbitration Failure bit is set when this happens. It is cleared by writing a one to bit 1 of the status register.
        enum class AfiVal {
            noArbitrationFailu=0x00000000,     ///<No arbitration failure on last transmission.
            arbitrationFailure=0x00000001,     ///<Arbitration failure occurred on last transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AfiVal> afi{}; 
        namespace AfiValC{
            constexpr Register::FieldValue<decltype(afi)::Type,AfiVal::noArbitrationFailu> noArbitrationFailu{};
            constexpr Register::FieldValue<decltype(afi)::Type,AfiVal::arbitrationFailure> arbitrationFailure{};
        }
        ///No Acknowledge Interrupt. After every byte of data is sent, the transmitter expects an acknowledge from the receiver. This bit is set if the acknowledge is not received. It is cleared when a byte is written to the master TX FIFO.
        enum class NaiVal {
            acknowledgeRcvd=0x00000000,     ///<Last transmission received an acknowledge.
            noAcknowledgeRcvd=0x00000001,     ///<Last transmission did not receive an acknowledge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NaiVal> nai{}; 
        namespace NaiValC{
            constexpr Register::FieldValue<decltype(nai)::Type,NaiVal::acknowledgeRcvd> acknowledgeRcvd{};
            constexpr Register::FieldValue<decltype(nai)::Type,NaiVal::noAcknowledgeRcvd> noAcknowledgeRcvd{};
        }
        ///Master Data Request Interrupt. Once a transmission is started, the transmitter must have data to transmit as long as it isn't followed by a stop condition or it will hold SCL low until more data is available. The Master Data Request bit is set when the master transmitter is data-starved. If the master TX FIFO is empty and the last byte did not have a STOP condition flag, then SCL is held low until the CPU writes another byte to transmit. This bit is cleared when a byte is written to the master TX FIFO.
        enum class DrmiVal {
            busy=0x00000000,     ///<Master transmitter does not need data.
            needData=0x00000001,     ///<Master transmitter needs data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DrmiVal> drmi{}; 
        namespace DrmiValC{
            constexpr Register::FieldValue<decltype(drmi)::Type,DrmiVal::busy> busy{};
            constexpr Register::FieldValue<decltype(drmi)::Type,DrmiVal::needData> needData{};
        }
        ///Slave Data Request Interrupt. Once a transmission is started, the transmitter must have data to transmit as long as it isn't followed by a STOP condition or it will hold SCL low until more data is available. The Slave Data Request bit is set when the slave transmitter is data-starved. If the slave TX FIFO is empty and the last byte transmitted was acknowledged, then SCL is held low until the CPU writes another byte to transmit. This bit is cleared when a byte is written to the slave Tx FIFO.
        enum class DrsiVal {
            busy=0x00000000,     ///<Slave transmitter does not need data.
            needData=0x00000001,     ///<Slave transmitter needs data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DrsiVal> drsi{}; 
        namespace DrsiValC{
            constexpr Register::FieldValue<decltype(drsi)::Type,DrsiVal::busy> busy{};
            constexpr Register::FieldValue<decltype(drsi)::Type,DrsiVal::needData> needData{};
        }
        ///Indicates whether the bus is busy. This bit is set when a START condition has been seen. It is cleared when a STOP condition is seen..
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> active{}; 
        ///The current value of the SCL signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> scl{}; 
        ///The current value of the SDA signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sda{}; 
        ///Receive FIFO Full (RFF). This bit is set when the RX FIFO is full and cannot accept any more data. It is cleared when the RX FIFO is not full. If a byte arrives when the Receive FIFO is full, the SCL is held low until the CPU reads the RX FIFO and makes room for it.
        enum class RffVal {
            rxFifoIsNotFull=0x00000000,     ///<RX FIFO is not full
            rxFifoIsFull=0x00000001,     ///<RX FIFO is full
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RffVal> rff{}; 
        namespace RffValC{
            constexpr Register::FieldValue<decltype(rff)::Type,RffVal::rxFifoIsNotFull> rxFifoIsNotFull{};
            constexpr Register::FieldValue<decltype(rff)::Type,RffVal::rxFifoIsFull> rxFifoIsFull{};
        }
        ///Receive FIFO Empty. RFE is set when the RX FIFO is empty and is cleared when the RX FIFO contains valid data.
        enum class RfeVal {
            data=0x00000000,     ///<RX FIFO contains data.
            empty=0x00000001,     ///<RX FIFO is empty
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RfeVal> rfe{}; 
        namespace RfeValC{
            constexpr Register::FieldValue<decltype(rfe)::Type,RfeVal::data> data{};
            constexpr Register::FieldValue<decltype(rfe)::Type,RfeVal::empty> empty{};
        }
        ///Transmit FIFO Full. TFF is set when the TX FIFO is full and is cleared when the TX FIFO is not full.
        enum class TffVal {
            txFifoIsNotFull=0x00000000,     ///<TX FIFO is not full.
            txFifoIsFull=0x00000001,     ///<TX FIFO is full
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TffVal> tff{}; 
        namespace TffValC{
            constexpr Register::FieldValue<decltype(tff)::Type,TffVal::txFifoIsNotFull> txFifoIsNotFull{};
            constexpr Register::FieldValue<decltype(tff)::Type,TffVal::txFifoIsFull> txFifoIsFull{};
        }
        ///Transmit FIFO Empty. TFE is set when the TX FIFO is empty and is cleared when the TX FIFO contains valid data.
        enum class TfeVal {
            validData=0x00000000,     ///<TX FIFO contains valid data.
            empty=0x00000001,     ///<TX FIFO is empty
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TfeVal> tfe{}; 
        namespace TfeValC{
            constexpr Register::FieldValue<decltype(tfe)::Type,TfeVal::validData> validData{};
            constexpr Register::FieldValue<decltype(tfe)::Type,TfeVal::empty> empty{};
        }
    }
    namespace Nonei2cCtl{    ///<I2C Control
        using Addr = Register::Address<0x2008c308,0xfffffe00,0,unsigned>;
        ///Transmit Done Interrupt Enable. This enables the TDI interrupt signalling that this I2C issued a STOP condition.
        enum class TdieVal {
            disableTheTdiInte=0x00000000,     ///<Disable the TDI interrupt.
            enableTheTdiInter=0x00000001,     ///<Enable the TDI interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TdieVal> tdie{}; 
        namespace TdieValC{
            constexpr Register::FieldValue<decltype(tdie)::Type,TdieVal::disableTheTdiInte> disableTheTdiInte{};
            constexpr Register::FieldValue<decltype(tdie)::Type,TdieVal::enableTheTdiInter> enableTheTdiInter{};
        }
        ///Transmitter Arbitration Failure Interrupt Enable. This enables the AFI interrupt which is asserted during transmission when trying to set SDA high, but the bus is driven low by another device.
        enum class AfieVal {
            disableTheAfi=0x00000000,     ///<Disable the AFI.
            enableTheAfi=0x00000001,     ///<Enable the AFI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AfieVal> afie{}; 
        namespace AfieValC{
            constexpr Register::FieldValue<decltype(afie)::Type,AfieVal::disableTheAfi> disableTheAfi{};
            constexpr Register::FieldValue<decltype(afie)::Type,AfieVal::enableTheAfi> enableTheAfi{};
        }
        ///Transmitter No Acknowledge Interrupt Enable. This enables the NAI interrupt signalling that transmitted byte was not acknowledged.
        enum class NaieVal {
            disableTheNai=0x00000000,     ///<Disable the NAI.
            enableTheNai=0x00000001,     ///<Enable the NAI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NaieVal> naie{}; 
        namespace NaieValC{
            constexpr Register::FieldValue<decltype(naie)::Type,NaieVal::disableTheNai> disableTheNai{};
            constexpr Register::FieldValue<decltype(naie)::Type,NaieVal::enableTheNai> enableTheNai{};
        }
        ///Master Transmitter Data Request Interrupt Enable. This enables the DRMI interrupt which signals that the master transmitter has run out of data, has not issued a STOP, and is holding the SCL line low.
        enum class DrmieVal {
            disableTheDrmiInt=0x00000000,     ///<Disable the DRMI interrupt.
            enableTheDrmiInte=0x00000001,     ///<Enable the DRMI interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DrmieVal> drmie{}; 
        namespace DrmieValC{
            constexpr Register::FieldValue<decltype(drmie)::Type,DrmieVal::disableTheDrmiInt> disableTheDrmiInt{};
            constexpr Register::FieldValue<decltype(drmie)::Type,DrmieVal::enableTheDrmiInte> enableTheDrmiInte{};
        }
        ///Slave Transmitter Data Request Interrupt Enable. This enables the DRSI interrupt which signals that the slave transmitter has run out of data and the last byte was acknowledged, so the SCL line is being held low.
        enum class DrsieVal {
            disableTheDrsiInt=0x00000000,     ///<Disable the DRSI interrupt.
            enableTheDrsiInte=0x00000001,     ///<Enable the DRSI interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DrsieVal> drsie{}; 
        namespace DrsieValC{
            constexpr Register::FieldValue<decltype(drsie)::Type,DrsieVal::disableTheDrsiInt> disableTheDrsiInt{};
            constexpr Register::FieldValue<decltype(drsie)::Type,DrsieVal::enableTheDrsiInte> enableTheDrsiInte{};
        }
        ///Receive FIFO Full Interrupt Enable. This enables the Receive FIFO Full interrupt to indicate that the receive FIFO cannot accept any more data.
        enum class RefieVal {
            disableTheRffi=0x00000000,     ///<Disable the RFFI.
            enableTheRffi=0x00000001,     ///<Enable the RFFI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RefieVal> refie{}; 
        namespace RefieValC{
            constexpr Register::FieldValue<decltype(refie)::Type,RefieVal::disableTheRffi> disableTheRffi{};
            constexpr Register::FieldValue<decltype(refie)::Type,RefieVal::enableTheRffi> enableTheRffi{};
        }
        ///Receive Data Available Interrupt Enable. This enables the DAI interrupt to indicate that data is available in the receive FIFO (i.e. not empty).
        enum class RfdaieVal {
            disableTheDai=0x00000000,     ///<Disable the DAI.
            enableTheDai=0x00000001,     ///<Enable the DAI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RfdaieVal> rfdaie{}; 
        namespace RfdaieValC{
            constexpr Register::FieldValue<decltype(rfdaie)::Type,RfdaieVal::disableTheDai> disableTheDai{};
            constexpr Register::FieldValue<decltype(rfdaie)::Type,RfdaieVal::enableTheDai> enableTheDai{};
        }
        ///Transmit FIFO Not Full Interrupt Enable. This enables the Transmit FIFO Not Full interrupt to indicate that the more data can be written to the transmit FIFO. Note that this is not full. It is intended help the CPU to write to the I2C block only when there is room in the FIFO and do this without polling the status register.
        enum class TffieVal {
            disableTheTffi=0x00000000,     ///<Disable the TFFI.
            enableTheTffi=0x00000001,     ///<Enable the TFFI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TffieVal> tffie{}; 
        namespace TffieValC{
            constexpr Register::FieldValue<decltype(tffie)::Type,TffieVal::disableTheTffi> disableTheTffi{};
            constexpr Register::FieldValue<decltype(tffie)::Type,TffieVal::enableTheTffi> enableTheTffi{};
        }
        ///Soft reset. This is only needed in unusual circumstances. If a device issues a start condition without issuing a stop condition. A system timer may be used to reset the I2C if the bus remains busy longer than the time-out period. On a soft reset, the Tx and Rx FIFOs are flushed, I2C_STS register is cleared, and all internal state machines are reset to appear idle. The I2C_CLKHI, I2C_CLKLO and I2C_CTL (except Soft Reset Bit) are NOT modified by a soft reset.
        enum class SrstVal {
            noReset=0x00000000,     ///<No reset.
            reset=0x00000001,     ///<Reset the I2C to idle state. Self clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrstVal> srst{}; 
        namespace SrstValC{
            constexpr Register::FieldValue<decltype(srst)::Type,SrstVal::noReset> noReset{};
            constexpr Register::FieldValue<decltype(srst)::Type,SrstVal::reset> reset{};
        }
    }
    namespace Nonei2cClkhi{    ///<I2C Clock High
        using Addr = Register::Address<0x2008c30c,0xffffff00,0,unsigned>;
        ///Clock divisor high. This value is the number of 48 MHz clocks the serial clock (SCL) will be high.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cdhi{}; 
    }
    namespace Nonei2cClklo{    ///<I2C Clock Low
        using Addr = Register::Address<0x2008c310,0xffffff00,0,unsigned>;
        ///Clock divisor low. This value is the number of 48 MHz clocks the serial clock (SCL) will be low.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cdlo{}; 
    }
    namespace Noneusbclkctrl{    ///<USB Clock Control
        using Addr = Register::Address<0x2008cff4,0xffffffe5,0,unsigned>;
        ///Device clock enable.   Enables the usbclk input to the device controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> devClkEn{}; 
        ///Port select register clock enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> portselClkEn{}; 
        ///AHB clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ahbClkEn{}; 
    }
    namespace Noneotgclkctrl{    ///<OTG clock controller
        using Addr = Register::Address<0x2008cff4,0xffffffe0,0,unsigned>;
        ///Host clock enable
        enum class HostclkenVal {
            disableTheHostClo=0x00000000,     ///<Disable the Host clock.
            enableTheHostCloc=0x00000001,     ///<Enable the Host clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HostclkenVal> hostClkEn{}; 
        namespace HostclkenValC{
            constexpr Register::FieldValue<decltype(hostClkEn)::Type,HostclkenVal::disableTheHostClo> disableTheHostClo{};
            constexpr Register::FieldValue<decltype(hostClkEn)::Type,HostclkenVal::enableTheHostCloc> enableTheHostCloc{};
        }
        ///Device clock enable
        enum class DevclkenVal {
            disableTheDeviceC=0x00000000,     ///<Disable the Device clock.
            enableTheDeviceCl=0x00000001,     ///<Enable the Device clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DevclkenVal> devClkEn{}; 
        namespace DevclkenValC{
            constexpr Register::FieldValue<decltype(devClkEn)::Type,DevclkenVal::disableTheDeviceC> disableTheDeviceC{};
            constexpr Register::FieldValue<decltype(devClkEn)::Type,DevclkenVal::enableTheDeviceCl> enableTheDeviceCl{};
        }
        ///I2C clock enable
        enum class I2cclkenVal {
            disableTheI2cCloc=0x00000000,     ///<Disable the I2C clock.
            enableTheI2cClock=0x00000001,     ///<Enable the I2C clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,I2cclkenVal> i2cClkEn{}; 
        namespace I2cclkenValC{
            constexpr Register::FieldValue<decltype(i2cClkEn)::Type,I2cclkenVal::disableTheI2cCloc> disableTheI2cCloc{};
            constexpr Register::FieldValue<decltype(i2cClkEn)::Type,I2cclkenVal::enableTheI2cClock> enableTheI2cClock{};
        }
        ///OTG clock enable. In device-only applications, this bit enables access to the PORTSEL register.
        enum class OtgclkenVal {
            disableTheOtgCloc=0x00000000,     ///<Disable the OTG clock.
            enableTheOtgClock=0x00000001,     ///<Enable the OTG clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OtgclkenVal> otgClkEn{}; 
        namespace OtgclkenValC{
            constexpr Register::FieldValue<decltype(otgClkEn)::Type,OtgclkenVal::disableTheOtgCloc> disableTheOtgCloc{};
            constexpr Register::FieldValue<decltype(otgClkEn)::Type,OtgclkenVal::enableTheOtgClock> enableTheOtgClock{};
        }
        ///AHB master clock enable
        enum class AhbclkenVal {
            disableTheAhbCloc=0x00000000,     ///<Disable the AHB clock.
            enableTheAhbClock=0x00000001,     ///<Enable the AHB clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AhbclkenVal> ahbClkEn{}; 
        namespace AhbclkenValC{
            constexpr Register::FieldValue<decltype(ahbClkEn)::Type,AhbclkenVal::disableTheAhbCloc> disableTheAhbCloc{};
            constexpr Register::FieldValue<decltype(ahbClkEn)::Type,AhbclkenVal::enableTheAhbClock> enableTheAhbClock{};
        }
    }
    namespace Noneusbclkst{    ///<USB Clock Status
        using Addr = Register::Address<0x2008cff8,0xffffffe5,0,unsigned>;
        ///Device clock on. The usbclk input to the device controller is active	.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> devClkOn{}; 
        ///Port select register clock on.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> portselClkOn{}; 
        ///AHB clock on.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ahbClkOn{}; 
    }
    namespace Noneotgclkst{    ///<OTG clock status
        using Addr = Register::Address<0x2008cff8,0xffffffe0,0,unsigned>;
        ///Host clock status.
        enum class HostclkonVal {
            hostClockIsNotAv=0x00000000,     ///<Host clock is not available.
            hostClockIsAvaila=0x00000001,     ///<Host clock is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HostclkonVal> hostClkOn{}; 
        namespace HostclkonValC{
            constexpr Register::FieldValue<decltype(hostClkOn)::Type,HostclkonVal::hostClockIsNotAv> hostClockIsNotAv{};
            constexpr Register::FieldValue<decltype(hostClkOn)::Type,HostclkonVal::hostClockIsAvaila> hostClockIsAvaila{};
        }
        ///Device clock status.
        enum class DevclkonVal {
            deviceClockIsNot=0x00000000,     ///<Device clock is not available.
            deviceClockIsAvai=0x00000001,     ///<Device clock is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DevclkonVal> devClkOn{}; 
        namespace DevclkonValC{
            constexpr Register::FieldValue<decltype(devClkOn)::Type,DevclkonVal::deviceClockIsNot> deviceClockIsNot{};
            constexpr Register::FieldValue<decltype(devClkOn)::Type,DevclkonVal::deviceClockIsAvai> deviceClockIsAvai{};
        }
        ///I2C clock status.
        enum class I2cclkonVal {
            i2cClockIsNotAva=0x00000000,     ///<I2C clock is not available.
            i2cClockIsAvailab=0x00000001,     ///<I2C clock is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,I2cclkonVal> i2cClkOn{}; 
        namespace I2cclkonValC{
            constexpr Register::FieldValue<decltype(i2cClkOn)::Type,I2cclkonVal::i2cClockIsNotAva> i2cClockIsNotAva{};
            constexpr Register::FieldValue<decltype(i2cClkOn)::Type,I2cclkonVal::i2cClockIsAvailab> i2cClockIsAvailab{};
        }
        ///OTG clock status.
        enum class OtgclkonVal {
            otgClockIsNotAva=0x00000000,     ///<OTG clock is not available.
            otgClockIsAvailab=0x00000001,     ///<OTG clock is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OtgclkonVal> otgClkOn{}; 
        namespace OtgclkonValC{
            constexpr Register::FieldValue<decltype(otgClkOn)::Type,OtgclkonVal::otgClockIsNotAva> otgClockIsNotAva{};
            constexpr Register::FieldValue<decltype(otgClkOn)::Type,OtgclkonVal::otgClockIsAvailab> otgClockIsAvailab{};
        }
        ///AHB master clock status.
        enum class AhbclkonVal {
            ahbClockIsNotAva=0x00000000,     ///<AHB clock is not available.
            ahbClockIsAvailab=0x00000001,     ///<AHB clock is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AhbclkonVal> ahbClkOn{}; 
        namespace AhbclkonValC{
            constexpr Register::FieldValue<decltype(ahbClkOn)::Type,AhbclkonVal::ahbClockIsNotAva> ahbClockIsNotAva{};
            constexpr Register::FieldValue<decltype(ahbClkOn)::Type,AhbclkonVal::ahbClockIsAvailab> ahbClockIsAvailab{};
        }
    }
}
