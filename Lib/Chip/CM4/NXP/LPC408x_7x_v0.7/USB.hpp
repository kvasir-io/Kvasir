#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// USB device controller 
    namespace Noneintst{    ///<OTG Interrupt Status
        using Addr = Register::Address<0x2008c100,0xfffffff0,0,unsigned>;
        ///Timer time-out.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmr{}; 
        namespace TmrValC{
        }
        ///Remove pull-up. This bit is set by hardware to indicate that software needs to disable the D+ pull-up resistor.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> removePu{}; 
        namespace RemovepuValC{
        }
        ///HNP failed. This bit is set by hardware to indicate that the HNP switching has failed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hnpFailure{}; 
        namespace HnpfailureValC{
        }
        ///HNP succeeded. This bit is set by hardware to indicate that the HNP switching has succeeded.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hnpSuccess{}; 
        namespace HnpsuccessValC{
        }
    }
    namespace Noneinten{    ///<OTG Interrupt Enable
        using Addr = Register::Address<0x2008c104,0xfffffff0,0,unsigned>;
        ///1 = enable the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmrEn{}; 
        namespace TmrenValC{
        }
        ///1 = enable the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> removePuEn{}; 
        namespace RemovepuenValC{
        }
        ///1 = enable the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hnpFailureEn{}; 
        namespace HnpfailureenValC{
        }
        ///1 = enable the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hnpSuccesEn{}; 
        namespace HnpsuccesenValC{
        }
    }
    namespace Noneintset{    ///<OTG Interrupt Set
        using Addr = Register::Address<0x2008c108,0xfffffff0,0,unsigned>;
        ///0 = no effect. 1 = set the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmrSet{}; 
        namespace TmrsetValC{
        }
        ///0 = no effect. 1 = set the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> removePuSet{}; 
        namespace RemovepusetValC{
        }
        ///0 = no effect. 1 = set the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hnpFailureSet{}; 
        namespace HnpfailuresetValC{
        }
        ///0 = no effect. 1 = set the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hnpSuccesSet{}; 
        namespace HnpsuccessetValC{
        }
    }
    namespace Noneinclr{    ///<OTG Interrupt Clear
        using Addr = Register::Address<0x2008c10c,0xfffffff0,0,unsigned>;
        ///0 = no effect. 1 = clear the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmrClr{}; 
        namespace TmrclrValC{
        }
        ///0 = no effect. 1 = clear the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> removePuClr{}; 
        namespace RemovepuclrValC{
        }
        ///0 = no effect. 1 = clear the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hnpFailureClr{}; 
        namespace HnpfailureclrValC{
        }
        ///0 = no effect. 1 = clear the corresponding bit in the IntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hnpSuccesClr{}; 
        namespace HnpsuccesclrValC{
        }
    }
    namespace Noneportsel{    ///<USB Port Select. The USBPortSel register is identical to the OTGStCtrl register (see Section 15.8.6). In device-only operations only bits 0 and 1 of this register are used to control the routing of USB pins to Port 1 or Port 2.
        using Addr = Register::Address<0x2008c110,0x0000f880,0,unsigned>;
        ///Selects which USB port the device controller signals are mapped to. Other values are reserved.
        enum class PortselVal {
            portu1=0x00000000,     ///<The USB device controller signals are mapped to the U1 port: USB_CONNECT1, USB_UP_LED1, USB_D+1, USB_D-1.
            portu2=0x00000003,     ///<The USB device controller signals are mapped to the U2 port: USB_CONNECT2, USB_UP_LED2, USB_D+2, USB_D-2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PortselVal> portsel{}; 
        namespace PortselValC{
            constexpr Register::FieldValue<decltype(portsel),PortselVal::portu1> portu1{};
            constexpr Register::FieldValue<decltype(portsel),PortselVal::portu2> portu2{};
        }
        ///Timer scale selection. This field determines the duration of each timer count. 00: 10 ms (100 KHz) 01: 100 ms (10 KHz) 10: 1000 ms (1 KHz) 11: Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tmrScale{}; 
        namespace TmrscaleValC{
        }
        ///Timer mode selection. 0: monoshot 1: free running
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmrMode{}; 
        namespace TmrmodeValC{
        }
        ///Timer enable. When set, TMR_CNT increments. When cleared, TMR_CNT is reset to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tmrEn{}; 
        namespace TmrenValC{
        }
        ///Timer reset. Writing one to this bit resets TMR_CNT to 0. This provides a single bit control for the software to restart the timer when the timer is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tmrRst{}; 
        namespace TmrrstValC{
        }
        ///Enable HNP tracking for B-device (peripheral), see Section 15.9. Hardware clears this bit when HNP_SUCCESS or HNP_FAILURE is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bHnpTrack{}; 
        namespace BhnptrackValC{
        }
        ///Enable HNP tracking for A-device (host), see Section 15.9. Hardware clears this bit when HNP_SUCCESS or HNP_FAILURE is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aHnpTrack{}; 
        namespace AhnptrackValC{
        }
        ///When the B-device changes its role from peripheral to host, software sets this bit when it removes the D+ pull-up, see Section 15.9. Hardware clears this bit when HNP_SUCCESS or HNP_FAILURE is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> puRemoved{}; 
        namespace PuremovedValC{
        }
        ///Current timer count value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tmrCnt{}; 
        namespace TmrcntValC{
        }
    }
    namespace Nonetmr{    ///<OTG Timer
        using Addr = Register::Address<0x2008c114,0xffff0000,0,unsigned>;
        ///The TMR interrupt is set when TMR_CNT reaches this value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeoutCnt{}; 
        namespace TimeoutcntValC{
        }
    }
    namespace Nonedevintst{    ///<USB Device Interrupt Status
        using Addr = Register::Address<0x2008c200,0xfffffc00,0,unsigned>;
        ///The frame interrupt occurs every 1 ms. This is used in isochronous packet transfers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frame{}; 
        namespace FrameValC{
        }
        ///Fast endpoint interrupt. If an Endpoint Interrupt Priority register (USBEpIntPri) bit is set, the corresponding endpoint interrupt will be routed to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epFast{}; 
        namespace EpfastValC{
        }
        ///Slow endpoints interrupt. If an Endpoint Interrupt Priority Register (USBEpIntPri) bit is not set, the corresponding endpoint interrupt will be routed to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epSlow{}; 
        namespace EpslowValC{
        }
        ///Set when USB Bus reset, USB suspend change or Connect change event occurs. Refer to Section 13.12.6 Set Device Status (Command: 0xFE, Data: write 1 byte) on page 366.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> devStat{}; 
        namespace DevstatValC{
        }
        ///The command code register (USBCmdCode) is empty (New command can be written).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccempty{}; 
        namespace CcemptyValC{
        }
        ///Command data register (USBCmdData) is full (Data can be read now).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cdfull{}; 
        namespace CdfullValC{
        }
        ///The current packet in the endpoint buffer is transferred to the CPU.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxendpkt{}; 
        namespace RxendpktValC{
        }
        ///The number of data bytes transferred to the endpoint buffer equals the number of bytes programmed in the TxPacket length register (USBTxPLen).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txendpkt{}; 
        namespace TxendpktValC{
        }
        ///Endpoints realized. Set when Realize Endpoint register (USBReEp) or MaxPacketSize register (USBMaxPSize) is updated and the corresponding operation is completed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epRlzed{}; 
        namespace EprlzedValC{
        }
        ///Error Interrupt. Any bus error interrupt from the USB device. Refer to Section 13.12.9 Read Error Status (Command: 0xFB, Data: read 1 byte) on page 368
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> errInt{}; 
        namespace ErrintValC{
        }
    }
    namespace Nonedevinten{    ///<USB Device Interrupt Enable
        using Addr = Register::Address<0x2008c204,0xfffffc00,0,unsigned>;
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameen{}; 
        namespace FrameenValC{
        }
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epFasten{}; 
        namespace EpfastenValC{
        }
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epSlowen{}; 
        namespace EpslowenValC{
        }
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> devStaten{}; 
        namespace DevstatenValC{
        }
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccemptyen{}; 
        namespace CcemptyenValC{
        }
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cdfullen{}; 
        namespace CdfullenValC{
        }
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxendpkten{}; 
        namespace RxendpktenValC{
        }
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txendpkten{}; 
        namespace TxendpktenValC{
        }
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epRlzeden{}; 
        namespace EprlzedenValC{
        }
        ///0 = No interrupt is generated. 1 = An interrupt will be generated when the corresponding bit in the Device Interrupt Status (USBDevIntSt) register (Table 261) is set. By default, the interrupt is routed to the USB_INT_REQ_LP interrupt line. Optionally, either the EP_FAST or FRAME interrupt may be routed to the USB_INT_REQ_HP interrupt line by changing the value of USBDevIntPri.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> errInten{}; 
        namespace ErrintenValC{
        }
    }
    namespace Nonedevintclr{    ///<USB Device Interrupt Clear
        using Addr = Register::Address<0x2008c208,0xfffffc00,0,unsigned>;
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameclr{}; 
        namespace FrameclrValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epFastclr{}; 
        namespace EpfastclrValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epSlowclr{}; 
        namespace EpslowclrValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> devStatclr{}; 
        namespace DevstatclrValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccemptyclr{}; 
        namespace CcemptyclrValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cdfullclr{}; 
        namespace CdfullclrValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxendpktclr{}; 
        namespace RxendpktclrValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txendpktclr{}; 
        namespace TxendpktclrValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epRlzedclr{}; 
        namespace EprlzedclrValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> errIntclr{}; 
        namespace ErrintclrValC{
        }
    }
    namespace Nonedevintset{    ///<USB Device Interrupt Set
        using Addr = Register::Address<0x2008c20c,0xfffffc00,0,unsigned>;
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameset{}; 
        namespace FramesetValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epFastset{}; 
        namespace EpfastsetValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epSlowset{}; 
        namespace EpslowsetValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> devStatset{}; 
        namespace DevstatsetValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccemptyset{}; 
        namespace CcemptysetValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cdfullset{}; 
        namespace CdfullsetValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxendpktset{}; 
        namespace RxendpktsetValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txendpktset{}; 
        namespace TxendpktsetValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epRlzedset{}; 
        namespace EprlzedsetValC{
        }
        ///0 = No effect. 1 = The corresponding bit in USBDevIntSt (Section 13.10.3.2) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> errIntset{}; 
        namespace ErrintsetValC{
        }
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
            constexpr Register::FieldValue<decltype(frame),FrameVal::lp> lp{};
            constexpr Register::FieldValue<decltype(frame),FrameVal::hp> hp{};
        }
        ///Fast endpoint interrupt routing
        enum class EpfastVal {
            lp=0x00000000,     ///<EP_FAST interrupt is routed to USB_INT_REQ_LP.
            hp=0x00000001,     ///<EP_FAST interrupt is routed to USB_INT_REQ_HP.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EpfastVal> epFast{}; 
        namespace EpfastValC{
            constexpr Register::FieldValue<decltype(epFast),EpfastVal::lp> lp{};
            constexpr Register::FieldValue<decltype(epFast),EpfastVal::hp> hp{};
        }
    }
    namespace Noneepintst{    ///<USB Endpoint Interrupt Status
        using Addr = Register::Address<0x2008c230,0x00000000,0,unsigned>;
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epst0{}; 
        namespace Epst0ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epst1{}; 
        namespace Epst1ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epst2{}; 
        namespace Epst2ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epst3{}; 
        namespace Epst3ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epst4{}; 
        namespace Epst4ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epst5{}; 
        namespace Epst5ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epst6{}; 
        namespace Epst6ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epst7{}; 
        namespace Epst7ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epst8{}; 
        namespace Epst8ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epst9{}; 
        namespace Epst9ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epst10{}; 
        namespace Epst10ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epst11{}; 
        namespace Epst11ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epst12{}; 
        namespace Epst12ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epst13{}; 
        namespace Epst13ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epst14{}; 
        namespace Epst14ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epst15{}; 
        namespace Epst15ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epst16{}; 
        namespace Epst16ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epst17{}; 
        namespace Epst17ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epst18{}; 
        namespace Epst18ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epst19{}; 
        namespace Epst19ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epst20{}; 
        namespace Epst20ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epst21{}; 
        namespace Epst21ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epst22{}; 
        namespace Epst22ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epst23{}; 
        namespace Epst23ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epst24{}; 
        namespace Epst24ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epst25{}; 
        namespace Epst25ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epst26{}; 
        namespace Epst26ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epst27{}; 
        namespace Epst27ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epst28{}; 
        namespace Epst28ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epst29{}; 
        namespace Epst29ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epst30{}; 
        namespace Epst30ValC{
        }
        ///1 = Endpoint Data Received (bits 0, 2, 4, ..., 30) or Transmitted (bits 1, 3, 5, ..., 31) Interrupt received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epst31{}; 
        namespace Epst31ValC{
        }
    }
    namespace Noneepinten{    ///<USB Endpoint Interrupt Enable
        using Addr = Register::Address<0x2008c234,0x00000000,0,unsigned>;
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epen0{}; 
        namespace Epen0ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epen1{}; 
        namespace Epen1ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epen2{}; 
        namespace Epen2ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epen3{}; 
        namespace Epen3ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epen4{}; 
        namespace Epen4ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epen5{}; 
        namespace Epen5ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epen6{}; 
        namespace Epen6ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epen7{}; 
        namespace Epen7ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epen8{}; 
        namespace Epen8ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epen9{}; 
        namespace Epen9ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epen10{}; 
        namespace Epen10ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epen11{}; 
        namespace Epen11ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epen12{}; 
        namespace Epen12ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epen13{}; 
        namespace Epen13ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epen14{}; 
        namespace Epen14ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epen15{}; 
        namespace Epen15ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epen16{}; 
        namespace Epen16ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epen17{}; 
        namespace Epen17ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epen18{}; 
        namespace Epen18ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epen19{}; 
        namespace Epen19ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epen20{}; 
        namespace Epen20ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epen21{}; 
        namespace Epen21ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epen22{}; 
        namespace Epen22ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epen23{}; 
        namespace Epen23ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epen24{}; 
        namespace Epen24ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epen25{}; 
        namespace Epen25ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epen26{}; 
        namespace Epen26ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epen27{}; 
        namespace Epen27ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epen28{}; 
        namespace Epen28ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epen29{}; 
        namespace Epen29ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epen30{}; 
        namespace Epen30ValC{
        }
        ///0= The corresponding bit in USBDMARSt is set when an interrupt occurs for this endpoint. 1 = The corresponding bit in USBEpIntSt is set when an interrupt occurs for this endpoint. Implies Slave mode for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epen31{}; 
        namespace Epen31ValC{
        }
    }
    namespace Noneepintclr{    ///<USB Endpoint Interrupt Clear
        using Addr = Register::Address<0x2008c238,0x00000000,0,unsigned>;
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epclr0{}; 
        namespace Epclr0ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epclr1{}; 
        namespace Epclr1ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epclr2{}; 
        namespace Epclr2ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epclr3{}; 
        namespace Epclr3ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epclr4{}; 
        namespace Epclr4ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epclr5{}; 
        namespace Epclr5ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epclr6{}; 
        namespace Epclr6ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epclr7{}; 
        namespace Epclr7ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epclr8{}; 
        namespace Epclr8ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epclr9{}; 
        namespace Epclr9ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epclr10{}; 
        namespace Epclr10ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epclr11{}; 
        namespace Epclr11ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epclr12{}; 
        namespace Epclr12ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epclr13{}; 
        namespace Epclr13ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epclr14{}; 
        namespace Epclr14ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epclr15{}; 
        namespace Epclr15ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epclr16{}; 
        namespace Epclr16ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epclr17{}; 
        namespace Epclr17ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epclr18{}; 
        namespace Epclr18ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epclr19{}; 
        namespace Epclr19ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epclr20{}; 
        namespace Epclr20ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epclr21{}; 
        namespace Epclr21ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epclr22{}; 
        namespace Epclr22ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epclr23{}; 
        namespace Epclr23ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epclr24{}; 
        namespace Epclr24ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epclr25{}; 
        namespace Epclr25ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epclr26{}; 
        namespace Epclr26ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epclr27{}; 
        namespace Epclr27ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epclr28{}; 
        namespace Epclr28ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epclr29{}; 
        namespace Epclr29ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epclr30{}; 
        namespace Epclr30ValC{
        }
        ///0 = No effect. 1 = Clears the corresponding bit in USBEpIntSt, by executing the SIE Select Endpoint/Clear Interrupt command for this endpoint.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epclr31{}; 
        namespace Epclr31ValC{
        }
    }
    namespace Noneepintset{    ///<USB Endpoint Interrupt Set
        using Addr = Register::Address<0x2008c23c,0x00000000,0,unsigned>;
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epset0{}; 
        namespace Epset0ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epset1{}; 
        namespace Epset1ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epset2{}; 
        namespace Epset2ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epset3{}; 
        namespace Epset3ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epset4{}; 
        namespace Epset4ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epset5{}; 
        namespace Epset5ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epset6{}; 
        namespace Epset6ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epset7{}; 
        namespace Epset7ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epset8{}; 
        namespace Epset8ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epset9{}; 
        namespace Epset9ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epset10{}; 
        namespace Epset10ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epset11{}; 
        namespace Epset11ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epset12{}; 
        namespace Epset12ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epset13{}; 
        namespace Epset13ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epset14{}; 
        namespace Epset14ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epset15{}; 
        namespace Epset15ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epset16{}; 
        namespace Epset16ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epset17{}; 
        namespace Epset17ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epset18{}; 
        namespace Epset18ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epset19{}; 
        namespace Epset19ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epset20{}; 
        namespace Epset20ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epset21{}; 
        namespace Epset21ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epset22{}; 
        namespace Epset22ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epset23{}; 
        namespace Epset23ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epset24{}; 
        namespace Epset24ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epset25{}; 
        namespace Epset25ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epset26{}; 
        namespace Epset26ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epset27{}; 
        namespace Epset27ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epset28{}; 
        namespace Epset28ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epset29{}; 
        namespace Epset29ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epset30{}; 
        namespace Epset30ValC{
        }
        ///0 = No effect. 1 = Sets the corresponding bit in USBEpIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epset31{}; 
        namespace Epset31ValC{
        }
    }
    namespace Noneepintpri{    ///<USB Endpoint Priority
        using Addr = Register::Address<0x2008c240,0x00000000,0,unsigned>;
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eppri0{}; 
        namespace Eppri0ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eppri1{}; 
        namespace Eppri1ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eppri2{}; 
        namespace Eppri2ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eppri3{}; 
        namespace Eppri3ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eppri4{}; 
        namespace Eppri4ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eppri5{}; 
        namespace Eppri5ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eppri6{}; 
        namespace Eppri6ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eppri7{}; 
        namespace Eppri7ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eppri8{}; 
        namespace Eppri8ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eppri9{}; 
        namespace Eppri9ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eppri10{}; 
        namespace Eppri10ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eppri11{}; 
        namespace Eppri11ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eppri12{}; 
        namespace Eppri12ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eppri13{}; 
        namespace Eppri13ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eppri14{}; 
        namespace Eppri14ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eppri15{}; 
        namespace Eppri15ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eppri16{}; 
        namespace Eppri16ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eppri17{}; 
        namespace Eppri17ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eppri18{}; 
        namespace Eppri18ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eppri19{}; 
        namespace Eppri19ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eppri20{}; 
        namespace Eppri20ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eppri21{}; 
        namespace Eppri21ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eppri22{}; 
        namespace Eppri22ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eppri23{}; 
        namespace Eppri23ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eppri24{}; 
        namespace Eppri24ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eppri25{}; 
        namespace Eppri25ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eppri26{}; 
        namespace Eppri26ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eppri27{}; 
        namespace Eppri27ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eppri28{}; 
        namespace Eppri28ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eppri29{}; 
        namespace Eppri29ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eppri30{}; 
        namespace Eppri30ValC{
        }
        ///0 = The corresponding interrupt is routed to the EP_SLOW bit of USBDevIntSt 1 = The corresponding interrupt is routed to the EP_FAST bit of USBDevIntSt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eppri31{}; 
        namespace Eppri31ValC{
        }
    }
    namespace Nonereep{    ///<USB Realize Endpoint
        using Addr = Register::Address<0x2008c244,0x00000000,0,unsigned>;
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epr0{}; 
        namespace Epr0ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epr1{}; 
        namespace Epr1ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epr2{}; 
        namespace Epr2ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epr3{}; 
        namespace Epr3ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epr4{}; 
        namespace Epr4ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epr5{}; 
        namespace Epr5ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epr6{}; 
        namespace Epr6ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epr7{}; 
        namespace Epr7ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epr8{}; 
        namespace Epr8ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epr9{}; 
        namespace Epr9ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epr10{}; 
        namespace Epr10ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epr11{}; 
        namespace Epr11ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epr12{}; 
        namespace Epr12ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epr13{}; 
        namespace Epr13ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epr14{}; 
        namespace Epr14ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epr15{}; 
        namespace Epr15ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epr16{}; 
        namespace Epr16ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epr17{}; 
        namespace Epr17ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epr18{}; 
        namespace Epr18ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epr19{}; 
        namespace Epr19ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epr20{}; 
        namespace Epr20ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epr21{}; 
        namespace Epr21ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epr22{}; 
        namespace Epr22ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epr23{}; 
        namespace Epr23ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epr24{}; 
        namespace Epr24ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epr25{}; 
        namespace Epr25ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epr26{}; 
        namespace Epr26ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epr27{}; 
        namespace Epr27ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epr28{}; 
        namespace Epr28ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epr29{}; 
        namespace Epr29ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epr30{}; 
        namespace Epr30ValC{
        }
        ///0 = Endpoint EPxx is not realized. 1 = Endpoint EPxx is realized.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epr31{}; 
        namespace Epr31ValC{
        }
    }
    namespace Noneepin{    ///<USB Endpoint Index
        using Addr = Register::Address<0x2008c248,0xffffffe0,0,unsigned>;
        ///Physical endpoint number (0-31)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> phyEp{}; 
        namespace PhyepValC{
        }
    }
    namespace Nonemaxpsize{    ///<USB MaxPacketSize
        using Addr = Register::Address<0x2008c24c,0xfffffc00,0,unsigned>;
        ///The maximum packet size value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> mps{}; 
        namespace MpsValC{
        }
    }
    namespace Nonerxdata{    ///<USB Receive Data
        using Addr = Register::Address<0x2008c218,0x00000000,0,unsigned>;
        ///Data received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxData{}; 
        namespace RxdataValC{
        }
    }
    namespace Nonerxplen{    ///<USB Receive Packet Length
        using Addr = Register::Address<0x2008c0dc,0xfffff000,0,unsigned>;
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
        ///The PKT_LNGTH field is valid and the packet is ready for reading.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktRdy{}; 
        namespace PktrdyValC{
        }
    }
    namespace Nonetxdata{    ///<USB Transmit Data
        using Addr = Register::Address<0x2008c21c,0x00000000,0,unsigned>;
        ///Transmit Data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txData{}; 
        namespace TxdataValC{
        }
    }
    namespace Nonetxplen{    ///<USB Transmit Packet Length
        using Addr = Register::Address<0x2008c224,0xfffffc00,0,unsigned>;
        ///The remaining number of bytes to be written to the selected endpoint buffer. This field is decremented by 4 by hardware after each write to USBTxData. When this field decrements to 0, the TxENDPKT bit will be set in USBDevIntSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> pktLngth{}; 
        namespace PktlngthValC{
        }
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
            constexpr Register::FieldValue<decltype(rdEn),RdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rdEn),RdenVal::enabled> enabled{};
        }
        ///Write mode control. Enables writing data to the IN endpoint buffer for the endpoint specified in the LOG_ENDPOINT field using the USBTxData register. This bit is cleared by hardware when the number of bytes in USBTxLen have been sent.
        enum class WrenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WrenVal> wrEn{}; 
        namespace WrenValC{
            constexpr Register::FieldValue<decltype(wrEn),WrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wrEn),WrenVal::enabled> enabled{};
        }
        ///Logical Endpoint number.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> logEndpoint{}; 
        namespace LogendpointValC{
        }
    }
    namespace Nonecmdcode{    ///<USB Command Code
        using Addr = Register::Address<0x2008c210,0xff0000ff,0,unsigned>;
        ///The command phase:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cmdPhase{}; 
        namespace CmdphaseValC{
        }
        ///This is a multi-purpose field. When CMD_PHASE is Command or Read, this field contains the code for the command (CMD_CODE). When CMD_PHASE is Write, this field contains the command write data (CMD_WDATA).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> cmdCodeWdata{}; 
        namespace CmdcodewdataValC{
        }
    }
    namespace Nonecmddata{    ///<USB Command Data
        using Addr = Register::Address<0x2008c214,0xffffff00,0,unsigned>;
        ///Command Read Data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cmdRdata{}; 
        namespace CmdrdataValC{
        }
    }
    namespace Nonedmarst{    ///<USB DMA Request Status
        using Addr = Register::Address<0x2008c250,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and EP0 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eprst0{}; 
        namespace Eprst0ValC{
        }
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and EP1 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eprst1{}; 
        namespace Eprst1ValC{
        }
        ///Endpoint xx (2 <=  xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eprst2{}; 
        namespace Eprst2ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprst3{}; 
        namespace Eprst3ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eprst4{}; 
        namespace Eprst4ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eprst5{}; 
        namespace Eprst5ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eprst6{}; 
        namespace Eprst6ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eprst7{}; 
        namespace Eprst7ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eprst8{}; 
        namespace Eprst8ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eprst9{}; 
        namespace Eprst9ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eprst10{}; 
        namespace Eprst10ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eprst11{}; 
        namespace Eprst11ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eprst12{}; 
        namespace Eprst12ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eprst13{}; 
        namespace Eprst13ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eprst14{}; 
        namespace Eprst14ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eprst15{}; 
        namespace Eprst15ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eprst16{}; 
        namespace Eprst16ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eprst17{}; 
        namespace Eprst17ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eprst18{}; 
        namespace Eprst18ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eprst19{}; 
        namespace Eprst19ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eprst20{}; 
        namespace Eprst20ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eprst21{}; 
        namespace Eprst21ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eprst22{}; 
        namespace Eprst22ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eprst23{}; 
        namespace Eprst23ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eprst24{}; 
        namespace Eprst24ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eprst25{}; 
        namespace Eprst25ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eprst26{}; 
        namespace Eprst26ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eprst27{}; 
        namespace Eprst27ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eprst28{}; 
        namespace Eprst28ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eprst29{}; 
        namespace Eprst29ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eprst30{}; 
        namespace Eprst30ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) DMA request. 0 = DMA not requested by endpoint xx. 1 = DMA requested by endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eprst31{}; 
        namespace Eprst31ValC{
        }
    }
    namespace Nonedmarclr{    ///<USB DMA Request Clear
        using Addr = Register::Address<0x2008c254,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and the EP0 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eprclr0{}; 
        namespace Eprclr0ValC{
        }
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and the EP1 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eprclr1{}; 
        namespace Eprclr1ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eprclr2{}; 
        namespace Eprclr2ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprclr3{}; 
        namespace Eprclr3ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eprclr4{}; 
        namespace Eprclr4ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eprclr5{}; 
        namespace Eprclr5ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eprclr6{}; 
        namespace Eprclr6ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eprclr7{}; 
        namespace Eprclr7ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eprclr8{}; 
        namespace Eprclr8ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eprclr9{}; 
        namespace Eprclr9ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eprclr10{}; 
        namespace Eprclr10ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eprclr11{}; 
        namespace Eprclr11ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eprclr12{}; 
        namespace Eprclr12ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eprclr13{}; 
        namespace Eprclr13ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eprclr14{}; 
        namespace Eprclr14ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eprclr15{}; 
        namespace Eprclr15ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eprclr16{}; 
        namespace Eprclr16ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eprclr17{}; 
        namespace Eprclr17ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eprclr18{}; 
        namespace Eprclr18ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eprclr19{}; 
        namespace Eprclr19ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eprclr20{}; 
        namespace Eprclr20ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eprclr21{}; 
        namespace Eprclr21ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eprclr22{}; 
        namespace Eprclr22ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eprclr23{}; 
        namespace Eprclr23ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eprclr24{}; 
        namespace Eprclr24ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eprclr25{}; 
        namespace Eprclr25ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eprclr26{}; 
        namespace Eprclr26ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eprclr27{}; 
        namespace Eprclr27ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eprclr28{}; 
        namespace Eprclr28ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eprclr29{}; 
        namespace Eprclr29ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eprclr30{}; 
        namespace Eprclr30ValC{
        }
        ///Clear the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Clear the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eprclr31{}; 
        namespace Eprclr31ValC{
        }
    }
    namespace Nonedmarset{    ///<USB DMA Request Set
        using Addr = Register::Address<0x2008c258,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and the EP0 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eprset0{}; 
        namespace Eprset0ValC{
        }
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and the EP1 bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eprset1{}; 
        namespace Eprset1ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eprset2{}; 
        namespace Eprset2ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprset3{}; 
        namespace Eprset3ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eprset4{}; 
        namespace Eprset4ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eprset5{}; 
        namespace Eprset5ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eprset6{}; 
        namespace Eprset6ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eprset7{}; 
        namespace Eprset7ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eprset8{}; 
        namespace Eprset8ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eprset9{}; 
        namespace Eprset9ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eprset10{}; 
        namespace Eprset10ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eprset11{}; 
        namespace Eprset11ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eprset12{}; 
        namespace Eprset12ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eprset13{}; 
        namespace Eprset13ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eprset14{}; 
        namespace Eprset14ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eprset15{}; 
        namespace Eprset15ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eprset16{}; 
        namespace Eprset16ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eprset17{}; 
        namespace Eprset17ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eprset18{}; 
        namespace Eprset18ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eprset19{}; 
        namespace Eprset19ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eprset20{}; 
        namespace Eprset20ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eprset21{}; 
        namespace Eprset21ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eprset22{}; 
        namespace Eprset22ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eprset23{}; 
        namespace Eprset23ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eprset24{}; 
        namespace Eprset24ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eprset25{}; 
        namespace Eprset25ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eprset26{}; 
        namespace Eprset26ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eprset27{}; 
        namespace Eprset27ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eprset28{}; 
        namespace Eprset28ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eprset29{}; 
        namespace Eprset29ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eprset30{}; 
        namespace Eprset30ValC{
        }
        ///Set the endpoint xx (2 <= xx <= 31) DMA request. 0 = No effect 1 = Set the corresponding bit in USBDMARSt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eprset31{}; 
        namespace Eprset31ValC{
        }
    }
    namespace Noneudcah{    ///<USB UDCA Head
        using Addr = Register::Address<0x2008c280,0x0000007f,0,unsigned>;
        ///Start address of the UDCA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> udcaAddr{}; 
        namespace UdcaaddrValC{
        }
    }
    namespace Noneepdmast{    ///<USB Endpoint DMA Status
        using Addr = Register::Address<0x2008c284,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and the EP0_DMA_ENABLE bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epDmaSt0{}; 
        namespace Epdmast0ValC{
        }
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and the EP1_DMA_ENABLE bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epDmaSt1{}; 
        namespace Epdmast1ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epDmaSt2{}; 
        namespace Epdmast2ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epDmaSt3{}; 
        namespace Epdmast3ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epDmaSt4{}; 
        namespace Epdmast4ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epDmaSt5{}; 
        namespace Epdmast5ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epDmaSt6{}; 
        namespace Epdmast6ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epDmaSt7{}; 
        namespace Epdmast7ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epDmaSt8{}; 
        namespace Epdmast8ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epDmaSt9{}; 
        namespace Epdmast9ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epDmaSt10{}; 
        namespace Epdmast10ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epDmaSt11{}; 
        namespace Epdmast11ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epDmaSt12{}; 
        namespace Epdmast12ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epDmaSt13{}; 
        namespace Epdmast13ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epDmaSt14{}; 
        namespace Epdmast14ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epDmaSt15{}; 
        namespace Epdmast15ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epDmaSt16{}; 
        namespace Epdmast16ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epDmaSt17{}; 
        namespace Epdmast17ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epDmaSt18{}; 
        namespace Epdmast18ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epDmaSt19{}; 
        namespace Epdmast19ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epDmaSt20{}; 
        namespace Epdmast20ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epDmaSt21{}; 
        namespace Epdmast21ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epDmaSt22{}; 
        namespace Epdmast22ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epDmaSt23{}; 
        namespace Epdmast23ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epDmaSt24{}; 
        namespace Epdmast24ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epDmaSt25{}; 
        namespace Epdmast25ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epDmaSt26{}; 
        namespace Epdmast26ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epDmaSt27{}; 
        namespace Epdmast27ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epDmaSt28{}; 
        namespace Epdmast28ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epDmaSt29{}; 
        namespace Epdmast29ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epDmaSt30{}; 
        namespace Epdmast30ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA enabled bit. 0 = The DMA for endpoint EPxx is disabled. 1 = The DMA for endpoint EPxx is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epDmaSt31{}; 
        namespace Epdmast31ValC{
        }
    }
    namespace Noneepdmaen{    ///<USB Endpoint DMA Enable
        using Addr = Register::Address<0x2008c288,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and the EP0_DMA_ENABLE bit value must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epDmaEn0{}; 
        namespace Epdmaen0ValC{
        }
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and the EP1_DMA_ENABLE bit must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epDmaEn1{}; 
        namespace Epdmaen1ValC{
        }
        ///Endpoint xx(2 <= xx <= 31) DMA enable control bit. 0 = No effect. 1 = Enable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> epDmaEn{}; 
        namespace EpdmaenValC{
        }
    }
    namespace Noneepdmadis{    ///<USB Endpoint DMA Disable
        using Addr = Register::Address<0x2008c28c,0x00000000,0,unsigned>;
        ///Control endpoint OUT (DMA cannot be enabled for this endpoint and the EP0_DMA_DISABLE bit value must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epDmaDis0{}; 
        namespace Epdmadis0ValC{
        }
        ///Control endpoint IN (DMA cannot be enabled for this endpoint and the EP1_DMA_DISABLE bit value must be 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epDmaDis1{}; 
        namespace Epdmadis1ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epDmaDis2{}; 
        namespace Epdmadis2ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epDmaDis3{}; 
        namespace Epdmadis3ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epDmaDis4{}; 
        namespace Epdmadis4ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epDmaDis5{}; 
        namespace Epdmadis5ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epDmaDis6{}; 
        namespace Epdmadis6ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epDmaDis7{}; 
        namespace Epdmadis7ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epDmaDis8{}; 
        namespace Epdmadis8ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epDmaDis9{}; 
        namespace Epdmadis9ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epDmaDis10{}; 
        namespace Epdmadis10ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epDmaDis11{}; 
        namespace Epdmadis11ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epDmaDis12{}; 
        namespace Epdmadis12ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epDmaDis13{}; 
        namespace Epdmadis13ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epDmaDis14{}; 
        namespace Epdmadis14ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epDmaDis15{}; 
        namespace Epdmadis15ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epDmaDis16{}; 
        namespace Epdmadis16ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epDmaDis17{}; 
        namespace Epdmadis17ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epDmaDis18{}; 
        namespace Epdmadis18ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epDmaDis19{}; 
        namespace Epdmadis19ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epDmaDis20{}; 
        namespace Epdmadis20ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epDmaDis21{}; 
        namespace Epdmadis21ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epDmaDis22{}; 
        namespace Epdmadis22ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epDmaDis23{}; 
        namespace Epdmadis23ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epDmaDis24{}; 
        namespace Epdmadis24ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epDmaDis25{}; 
        namespace Epdmadis25ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epDmaDis26{}; 
        namespace Epdmadis26ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epDmaDis27{}; 
        namespace Epdmadis27ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epDmaDis28{}; 
        namespace Epdmadis28ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epDmaDis29{}; 
        namespace Epdmadis29ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epDmaDis30{}; 
        namespace Epdmadis30ValC{
        }
        ///Endpoint xx (2 <= xx <= 31) DMA disable control bit. 0 = No effect. 1 = Disable the DMA operation for endpoint EPxx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epDmaDis31{}; 
        namespace Epdmadis31ValC{
        }
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
            constexpr Register::FieldValue<decltype(eot),EotVal::allBitsInTheUsbe> allBitsInTheUsbe{};
            constexpr Register::FieldValue<decltype(eot),EotVal::atLeastOneBitIn> atLeastOneBitIn{};
        }
        ///New DD Request Interrupt bit.
        enum class NddrVal {
            allBitsInTheUsbn=0x00000000,     ///<All bits in the USBNDDRIntSt register are 0.
            atLeastOneBitIn=0x00000001,     ///<At least one bit in the USBNDDRIntSt is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NddrVal> nddr{}; 
        namespace NddrValC{
            constexpr Register::FieldValue<decltype(nddr),NddrVal::allBitsInTheUsbn> allBitsInTheUsbn{};
            constexpr Register::FieldValue<decltype(nddr),NddrVal::atLeastOneBitIn> atLeastOneBitIn{};
        }
        ///System Error Interrupt bit.
        enum class ErrVal {
            allBitsInTheUsbs=0x00000000,     ///<All bits in the USBSysErrIntSt register are 0.
            atLeastOneBitIn=0x00000001,     ///<At least one bit in the USBSysErrIntSt is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrVal> err{}; 
        namespace ErrValC{
            constexpr Register::FieldValue<decltype(err),ErrVal::allBitsInTheUsbs> allBitsInTheUsbs{};
            constexpr Register::FieldValue<decltype(err),ErrVal::atLeastOneBitIn> atLeastOneBitIn{};
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
            constexpr Register::FieldValue<decltype(eot),EotVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(eot),EotVal::enabled> enabled{};
        }
        ///New DD Request Interrupt enable bit.
        enum class NddrVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NddrVal> nddr{}; 
        namespace NddrValC{
            constexpr Register::FieldValue<decltype(nddr),NddrVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(nddr),NddrVal::enabled> enabled{};
        }
        ///System Error Interrupt enable bit.
        enum class ErrVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrVal> err{}; 
        namespace ErrValC{
            constexpr Register::FieldValue<decltype(err),ErrVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(err),ErrVal::enabled> enabled{};
        }
    }
    namespace Noneeotintst{    ///<USB End of Transfer Interrupt Status
        using Addr = Register::Address<0x2008c2a0,0x00000000,0,unsigned>;
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptxintst0{}; 
        namespace Eptxintst0ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eptxintst1{}; 
        namespace Eptxintst1ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxintst2{}; 
        namespace Eptxintst2ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptxintst3{}; 
        namespace Eptxintst3ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eptxintst4{}; 
        namespace Eptxintst4ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eptxintst5{}; 
        namespace Eptxintst5ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eptxintst6{}; 
        namespace Eptxintst6ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eptxintst7{}; 
        namespace Eptxintst7ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eptxintst8{}; 
        namespace Eptxintst8ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eptxintst9{}; 
        namespace Eptxintst9ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eptxintst10{}; 
        namespace Eptxintst10ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eptxintst11{}; 
        namespace Eptxintst11ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eptxintst12{}; 
        namespace Eptxintst12ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eptxintst13{}; 
        namespace Eptxintst13ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eptxintst14{}; 
        namespace Eptxintst14ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eptxintst15{}; 
        namespace Eptxintst15ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eptxintst16{}; 
        namespace Eptxintst16ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eptxintst17{}; 
        namespace Eptxintst17ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eptxintst18{}; 
        namespace Eptxintst18ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eptxintst19{}; 
        namespace Eptxintst19ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eptxintst20{}; 
        namespace Eptxintst20ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eptxintst21{}; 
        namespace Eptxintst21ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eptxintst22{}; 
        namespace Eptxintst22ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eptxintst23{}; 
        namespace Eptxintst23ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eptxintst24{}; 
        namespace Eptxintst24ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eptxintst25{}; 
        namespace Eptxintst25ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eptxintst26{}; 
        namespace Eptxintst26ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eptxintst27{}; 
        namespace Eptxintst27ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eptxintst28{}; 
        namespace Eptxintst28ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptxintst29{}; 
        namespace Eptxintst29ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eptxintst30{}; 
        namespace Eptxintst30ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = There is no End of Transfer interrupt request for endpoint xx. 1 = There is an End of Transfer Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptxintst31{}; 
        namespace Eptxintst31ValC{
        }
    }
    namespace Noneeotintclr{    ///<USB End of Transfer Interrupt Clear
        using Addr = Register::Address<0x2008c2a4,0x00000000,0,unsigned>;
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptxintclr0{}; 
        namespace Eptxintclr0ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eptxintclr1{}; 
        namespace Eptxintclr1ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxintclr2{}; 
        namespace Eptxintclr2ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptxintclr3{}; 
        namespace Eptxintclr3ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eptxintclr4{}; 
        namespace Eptxintclr4ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eptxintclr5{}; 
        namespace Eptxintclr5ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eptxintclr6{}; 
        namespace Eptxintclr6ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eptxintclr7{}; 
        namespace Eptxintclr7ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eptxintclr8{}; 
        namespace Eptxintclr8ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eptxintclr9{}; 
        namespace Eptxintclr9ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eptxintclr10{}; 
        namespace Eptxintclr10ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eptxintclr11{}; 
        namespace Eptxintclr11ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eptxintclr12{}; 
        namespace Eptxintclr12ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eptxintclr13{}; 
        namespace Eptxintclr13ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eptxintclr14{}; 
        namespace Eptxintclr14ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eptxintclr15{}; 
        namespace Eptxintclr15ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eptxintclr16{}; 
        namespace Eptxintclr16ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eptxintclr17{}; 
        namespace Eptxintclr17ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eptxintclr18{}; 
        namespace Eptxintclr18ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eptxintclr19{}; 
        namespace Eptxintclr19ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eptxintclr20{}; 
        namespace Eptxintclr20ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eptxintclr21{}; 
        namespace Eptxintclr21ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eptxintclr22{}; 
        namespace Eptxintclr22ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eptxintclr23{}; 
        namespace Eptxintclr23ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eptxintclr24{}; 
        namespace Eptxintclr24ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eptxintclr25{}; 
        namespace Eptxintclr25ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eptxintclr26{}; 
        namespace Eptxintclr26ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eptxintclr27{}; 
        namespace Eptxintclr27ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eptxintclr28{}; 
        namespace Eptxintclr28ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptxintclr29{}; 
        namespace Eptxintclr29ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eptxintclr30{}; 
        namespace Eptxintclr30ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Clear the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptxintclr31{}; 
        namespace Eptxintclr31ValC{
        }
    }
    namespace Noneeotintset{    ///<USB End of Transfer Interrupt Set
        using Addr = Register::Address<0x2008c2a8,0x00000000,0,unsigned>;
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptxintset0{}; 
        namespace Eptxintset0ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eptxintset1{}; 
        namespace Eptxintset1ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxintset2{}; 
        namespace Eptxintset2ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptxintset3{}; 
        namespace Eptxintset3ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eptxintset4{}; 
        namespace Eptxintset4ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eptxintset5{}; 
        namespace Eptxintset5ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eptxintset6{}; 
        namespace Eptxintset6ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eptxintset7{}; 
        namespace Eptxintset7ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eptxintset8{}; 
        namespace Eptxintset8ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eptxintset9{}; 
        namespace Eptxintset9ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eptxintset10{}; 
        namespace Eptxintset10ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eptxintset11{}; 
        namespace Eptxintset11ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eptxintset12{}; 
        namespace Eptxintset12ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eptxintset13{}; 
        namespace Eptxintset13ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eptxintset14{}; 
        namespace Eptxintset14ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eptxintset15{}; 
        namespace Eptxintset15ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eptxintset16{}; 
        namespace Eptxintset16ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eptxintset17{}; 
        namespace Eptxintset17ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eptxintset18{}; 
        namespace Eptxintset18ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eptxintset19{}; 
        namespace Eptxintset19ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eptxintset20{}; 
        namespace Eptxintset20ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eptxintset21{}; 
        namespace Eptxintset21ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eptxintset22{}; 
        namespace Eptxintset22ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eptxintset23{}; 
        namespace Eptxintset23ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eptxintset24{}; 
        namespace Eptxintset24ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eptxintset25{}; 
        namespace Eptxintset25ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eptxintset26{}; 
        namespace Eptxintset26ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eptxintset27{}; 
        namespace Eptxintset27ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eptxintset28{}; 
        namespace Eptxintset28ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eptxintset29{}; 
        namespace Eptxintset29ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eptxintset30{}; 
        namespace Eptxintset30ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) End of Transfer Interrupt request. 0 = No effect. 1 = Set the EPxx End of Transfer Interrupt request in the USBEoTIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptxintset31{}; 
        namespace Eptxintset31ValC{
        }
    }
    namespace Nonenddrintst{    ///<USB New DD Request Interrupt Status
        using Addr = Register::Address<0x2008c2ac,0x00000000,0,unsigned>;
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epnddintst0{}; 
        namespace Epnddintst0ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epnddintst1{}; 
        namespace Epnddintst1ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epnddintst2{}; 
        namespace Epnddintst2ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epnddintst3{}; 
        namespace Epnddintst3ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epnddintst4{}; 
        namespace Epnddintst4ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epnddintst5{}; 
        namespace Epnddintst5ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epnddintst6{}; 
        namespace Epnddintst6ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epnddintst7{}; 
        namespace Epnddintst7ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epnddintst8{}; 
        namespace Epnddintst8ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epnddintst9{}; 
        namespace Epnddintst9ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epnddintst10{}; 
        namespace Epnddintst10ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epnddintst11{}; 
        namespace Epnddintst11ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epnddintst12{}; 
        namespace Epnddintst12ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epnddintst13{}; 
        namespace Epnddintst13ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epnddintst14{}; 
        namespace Epnddintst14ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epnddintst15{}; 
        namespace Epnddintst15ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epnddintst16{}; 
        namespace Epnddintst16ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epnddintst17{}; 
        namespace Epnddintst17ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epnddintst18{}; 
        namespace Epnddintst18ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epnddintst19{}; 
        namespace Epnddintst19ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epnddintst20{}; 
        namespace Epnddintst20ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epnddintst21{}; 
        namespace Epnddintst21ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epnddintst22{}; 
        namespace Epnddintst22ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epnddintst23{}; 
        namespace Epnddintst23ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epnddintst24{}; 
        namespace Epnddintst24ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epnddintst25{}; 
        namespace Epnddintst25ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epnddintst26{}; 
        namespace Epnddintst26ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epnddintst27{}; 
        namespace Epnddintst27ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epnddintst28{}; 
        namespace Epnddintst28ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epnddintst29{}; 
        namespace Epnddintst29ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epnddintst30{}; 
        namespace Epnddintst30ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = There is no new DD interrupt request for endpoint xx. 1 = There is a new DD interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epnddintst31{}; 
        namespace Epnddintst31ValC{
        }
    }
    namespace Nonenddrintclr{    ///<USB New DD Request Interrupt Clear
        using Addr = Register::Address<0x2008c2b0,0x00000000,0,unsigned>;
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epnddintclr0{}; 
        namespace Epnddintclr0ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epnddintclr1{}; 
        namespace Epnddintclr1ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epnddintclr2{}; 
        namespace Epnddintclr2ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epnddintclr3{}; 
        namespace Epnddintclr3ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epnddintclr4{}; 
        namespace Epnddintclr4ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epnddintclr5{}; 
        namespace Epnddintclr5ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epnddintclr6{}; 
        namespace Epnddintclr6ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epnddintclr7{}; 
        namespace Epnddintclr7ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epnddintclr8{}; 
        namespace Epnddintclr8ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epnddintclr9{}; 
        namespace Epnddintclr9ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epnddintclr10{}; 
        namespace Epnddintclr10ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epnddintclr11{}; 
        namespace Epnddintclr11ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epnddintclr12{}; 
        namespace Epnddintclr12ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epnddintclr13{}; 
        namespace Epnddintclr13ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epnddintclr14{}; 
        namespace Epnddintclr14ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epnddintclr15{}; 
        namespace Epnddintclr15ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epnddintclr16{}; 
        namespace Epnddintclr16ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epnddintclr17{}; 
        namespace Epnddintclr17ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epnddintclr18{}; 
        namespace Epnddintclr18ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epnddintclr19{}; 
        namespace Epnddintclr19ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epnddintclr20{}; 
        namespace Epnddintclr20ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epnddintclr21{}; 
        namespace Epnddintclr21ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epnddintclr22{}; 
        namespace Epnddintclr22ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epnddintclr23{}; 
        namespace Epnddintclr23ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epnddintclr24{}; 
        namespace Epnddintclr24ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epnddintclr25{}; 
        namespace Epnddintclr25ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epnddintclr26{}; 
        namespace Epnddintclr26ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epnddintclr27{}; 
        namespace Epnddintclr27ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epnddintclr28{}; 
        namespace Epnddintclr28ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epnddintclr29{}; 
        namespace Epnddintclr29ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epnddintclr30{}; 
        namespace Epnddintclr30ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Clear the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epnddintclr31{}; 
        namespace Epnddintclr31ValC{
        }
    }
    namespace Nonenddrintset{    ///<USB New DD Request Interrupt Set
        using Addr = Register::Address<0x2008c2b4,0x00000000,0,unsigned>;
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epnddintset0{}; 
        namespace Epnddintset0ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epnddintset1{}; 
        namespace Epnddintset1ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epnddintset2{}; 
        namespace Epnddintset2ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epnddintset3{}; 
        namespace Epnddintset3ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epnddintset4{}; 
        namespace Epnddintset4ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epnddintset5{}; 
        namespace Epnddintset5ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epnddintset6{}; 
        namespace Epnddintset6ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epnddintset7{}; 
        namespace Epnddintset7ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epnddintset8{}; 
        namespace Epnddintset8ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> epnddintset9{}; 
        namespace Epnddintset9ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> epnddintset10{}; 
        namespace Epnddintset10ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> epnddintset11{}; 
        namespace Epnddintset11ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> epnddintset12{}; 
        namespace Epnddintset12ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> epnddintset13{}; 
        namespace Epnddintset13ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epnddintset14{}; 
        namespace Epnddintset14ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epnddintset15{}; 
        namespace Epnddintset15ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epnddintset16{}; 
        namespace Epnddintset16ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epnddintset17{}; 
        namespace Epnddintset17ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> epnddintset18{}; 
        namespace Epnddintset18ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> epnddintset19{}; 
        namespace Epnddintset19ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> epnddintset20{}; 
        namespace Epnddintset20ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> epnddintset21{}; 
        namespace Epnddintset21ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> epnddintset22{}; 
        namespace Epnddintset22ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epnddintset23{}; 
        namespace Epnddintset23ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> epnddintset24{}; 
        namespace Epnddintset24ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> epnddintset25{}; 
        namespace Epnddintset25ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> epnddintset26{}; 
        namespace Epnddintset26ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> epnddintset27{}; 
        namespace Epnddintset27ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> epnddintset28{}; 
        namespace Epnddintset28ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> epnddintset29{}; 
        namespace Epnddintset29ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epnddintset30{}; 
        namespace Epnddintset30ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) new DD interrupt request. 0 = No effect. 1 = Set the EPxx new DD interrupt request in the USBNDDRIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epnddintset31{}; 
        namespace Epnddintset31ValC{
        }
    }
    namespace Nonesyserrintst{    ///<USB System Error Interrupt Status
        using Addr = Register::Address<0x2008c2b8,0x00000000,0,unsigned>;
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eperrintst0{}; 
        namespace Eperrintst0ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eperrintst1{}; 
        namespace Eperrintst1ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eperrintst2{}; 
        namespace Eperrintst2ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eperrintst3{}; 
        namespace Eperrintst3ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eperrintst4{}; 
        namespace Eperrintst4ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eperrintst5{}; 
        namespace Eperrintst5ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eperrintst6{}; 
        namespace Eperrintst6ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eperrintst7{}; 
        namespace Eperrintst7ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eperrintst8{}; 
        namespace Eperrintst8ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eperrintst9{}; 
        namespace Eperrintst9ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eperrintst10{}; 
        namespace Eperrintst10ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eperrintst11{}; 
        namespace Eperrintst11ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eperrintst12{}; 
        namespace Eperrintst12ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eperrintst13{}; 
        namespace Eperrintst13ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eperrintst14{}; 
        namespace Eperrintst14ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eperrintst15{}; 
        namespace Eperrintst15ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eperrintst16{}; 
        namespace Eperrintst16ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eperrintst17{}; 
        namespace Eperrintst17ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eperrintst18{}; 
        namespace Eperrintst18ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eperrintst19{}; 
        namespace Eperrintst19ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eperrintst20{}; 
        namespace Eperrintst20ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eperrintst21{}; 
        namespace Eperrintst21ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eperrintst22{}; 
        namespace Eperrintst22ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eperrintst23{}; 
        namespace Eperrintst23ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eperrintst24{}; 
        namespace Eperrintst24ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eperrintst25{}; 
        namespace Eperrintst25ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eperrintst26{}; 
        namespace Eperrintst26ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eperrintst27{}; 
        namespace Eperrintst27ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eperrintst28{}; 
        namespace Eperrintst28ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eperrintst29{}; 
        namespace Eperrintst29ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eperrintst30{}; 
        namespace Eperrintst30ValC{
        }
        ///Endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = There is no System Error Interrupt request for endpoint xx. 1 = There is a System Error Interrupt request for endpoint xx.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eperrintst31{}; 
        namespace Eperrintst31ValC{
        }
    }
    namespace Nonesyserrintclr{    ///<USB System Error Interrupt Clear
        using Addr = Register::Address<0x2008c2bc,0x00000000,0,unsigned>;
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eperrintclr0{}; 
        namespace Eperrintclr0ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eperrintclr1{}; 
        namespace Eperrintclr1ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eperrintclr2{}; 
        namespace Eperrintclr2ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eperrintclr3{}; 
        namespace Eperrintclr3ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eperrintclr4{}; 
        namespace Eperrintclr4ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eperrintclr5{}; 
        namespace Eperrintclr5ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eperrintclr6{}; 
        namespace Eperrintclr6ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eperrintclr7{}; 
        namespace Eperrintclr7ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eperrintclr8{}; 
        namespace Eperrintclr8ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eperrintclr9{}; 
        namespace Eperrintclr9ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eperrintclr10{}; 
        namespace Eperrintclr10ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eperrintclr11{}; 
        namespace Eperrintclr11ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eperrintclr12{}; 
        namespace Eperrintclr12ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eperrintclr13{}; 
        namespace Eperrintclr13ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eperrintclr14{}; 
        namespace Eperrintclr14ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eperrintclr15{}; 
        namespace Eperrintclr15ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eperrintclr16{}; 
        namespace Eperrintclr16ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eperrintclr17{}; 
        namespace Eperrintclr17ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eperrintclr18{}; 
        namespace Eperrintclr18ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eperrintclr19{}; 
        namespace Eperrintclr19ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eperrintclr20{}; 
        namespace Eperrintclr20ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eperrintclr21{}; 
        namespace Eperrintclr21ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eperrintclr22{}; 
        namespace Eperrintclr22ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eperrintclr23{}; 
        namespace Eperrintclr23ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eperrintclr24{}; 
        namespace Eperrintclr24ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eperrintclr25{}; 
        namespace Eperrintclr25ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eperrintclr26{}; 
        namespace Eperrintclr26ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eperrintclr27{}; 
        namespace Eperrintclr27ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eperrintclr28{}; 
        namespace Eperrintclr28ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eperrintclr29{}; 
        namespace Eperrintclr29ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eperrintclr30{}; 
        namespace Eperrintclr30ValC{
        }
        ///Clear endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Clear the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eperrintclr31{}; 
        namespace Eperrintclr31ValC{
        }
    }
    namespace Nonesyserrintset{    ///<USB System Error Interrupt Set
        using Addr = Register::Address<0x2008c2c0,0x00000000,0,unsigned>;
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eperrintset0{}; 
        namespace Eperrintset0ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eperrintset1{}; 
        namespace Eperrintset1ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eperrintset2{}; 
        namespace Eperrintset2ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eperrintset3{}; 
        namespace Eperrintset3ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eperrintset4{}; 
        namespace Eperrintset4ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eperrintset5{}; 
        namespace Eperrintset5ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eperrintset6{}; 
        namespace Eperrintset6ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eperrintset7{}; 
        namespace Eperrintset7ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eperrintset8{}; 
        namespace Eperrintset8ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eperrintset9{}; 
        namespace Eperrintset9ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eperrintset10{}; 
        namespace Eperrintset10ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eperrintset11{}; 
        namespace Eperrintset11ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eperrintset12{}; 
        namespace Eperrintset12ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eperrintset13{}; 
        namespace Eperrintset13ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eperrintset14{}; 
        namespace Eperrintset14ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eperrintset15{}; 
        namespace Eperrintset15ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eperrintset16{}; 
        namespace Eperrintset16ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eperrintset17{}; 
        namespace Eperrintset17ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eperrintset18{}; 
        namespace Eperrintset18ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eperrintset19{}; 
        namespace Eperrintset19ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eperrintset20{}; 
        namespace Eperrintset20ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eperrintset21{}; 
        namespace Eperrintset21ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eperrintset22{}; 
        namespace Eperrintset22ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eperrintset23{}; 
        namespace Eperrintset23ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eperrintset24{}; 
        namespace Eperrintset24ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eperrintset25{}; 
        namespace Eperrintset25ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eperrintset26{}; 
        namespace Eperrintset26ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eperrintset27{}; 
        namespace Eperrintset27ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eperrintset28{}; 
        namespace Eperrintset28ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> eperrintset29{}; 
        namespace Eperrintset29ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eperrintset30{}; 
        namespace Eperrintset30ValC{
        }
        ///Set endpoint xx (2 <= xx  <= 31) System Error Interrupt request. 0 = No effect. 1 = Set the EPxx System Error Interrupt request in the USBSysErrIntSt register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eperrintset31{}; 
        namespace Eperrintset31ValC{
        }
    }
    namespace Nonei2cRx{    ///<I2C Receive
        using Addr = Register::Address<0x2008c300,0xffffff00,0,unsigned>;
        ///Receive data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxData{}; 
        namespace RxdataValC{
        }
    }
    namespace Nonei2cTx{    ///<I2C Transmit
        using Addr = Register::Address<0x2008c300,0xfffffc00,0,unsigned>;
        ///Transmit data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
        ///When 1, issue a START condition before transmitting this byte.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///When 1, issue a STOP condition after transmitting this byte.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
    }
    namespace Nonei2cSts{    ///<I2C Status
        using Addr = Register::Address<0x2008c304,0xfffff000,0,unsigned>;
        ///Transaction Done Interrupt. This flag is set if a transaction completes successfully. It is cleared by writing a one to bit 0 of the status register. It is unaffected by slave transactions.
        enum class TdiVal {
            transactionHasNot=0x00000000,     ///<Transaction has not completed.
            transactionComplete=0x00000001,     ///<Transaction completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TdiVal> tdi{}; 
        namespace TdiValC{
            constexpr Register::FieldValue<decltype(tdi),TdiVal::transactionHasNot> transactionHasNot{};
            constexpr Register::FieldValue<decltype(tdi),TdiVal::transactionComplete> transactionComplete{};
        }
        ///Arbitration Failure Interrupt. When transmitting, if the SDA is low when SDAOUT is high, then this I2C has lost the arbitration to another device on the bus. The Arbitration Failure bit is set when this happens. It is cleared by writing a one to bit 1 of the status register.
        enum class AfiVal {
            noArbitrationFailu=0x00000000,     ///<No arbitration failure on last transmission.
            arbitrationFailure=0x00000001,     ///<Arbitration failure occurred on last transmission.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AfiVal> afi{}; 
        namespace AfiValC{
            constexpr Register::FieldValue<decltype(afi),AfiVal::noArbitrationFailu> noArbitrationFailu{};
            constexpr Register::FieldValue<decltype(afi),AfiVal::arbitrationFailure> arbitrationFailure{};
        }
        ///No Acknowledge Interrupt. After every byte of data is sent, the transmitter expects an acknowledge from the receiver. This bit is set if the acknowledge is not received. It is cleared when a byte is written to the master TX FIFO.
        enum class NaiVal {
            lastTransmissionRe=0x00000000,     ///<Last transmission received an acknowledge.
            lastTransmissionDi=0x00000001,     ///<Last transmission did not receive an acknowledge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NaiVal> nai{}; 
        namespace NaiValC{
            constexpr Register::FieldValue<decltype(nai),NaiVal::lastTransmissionRe> lastTransmissionRe{};
            constexpr Register::FieldValue<decltype(nai),NaiVal::lastTransmissionDi> lastTransmissionDi{};
        }
        ///Master Data Request Interrupt. Once a transmission is started, the transmitter must have data to transmit as long as it isn't followed by a stop condition or it will hold SCL low until more data is available. The Master Data Request bit is set when the master transmitter is data-starved. If the master TX FIFO is empty and the last byte did not have a STOP condition flag, then SCL is held low until the CPU writes another byte to transmit. This bit is cleared when a byte is written to the master TX FIFO.
        enum class DrmiVal {
            masterTransmitterD=0x00000000,     ///<Master transmitter does not need data.
            masterTransmitterN=0x00000001,     ///<Master transmitter needs data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DrmiVal> drmi{}; 
        namespace DrmiValC{
            constexpr Register::FieldValue<decltype(drmi),DrmiVal::masterTransmitterD> masterTransmitterD{};
            constexpr Register::FieldValue<decltype(drmi),DrmiVal::masterTransmitterN> masterTransmitterN{};
        }
        ///Slave Data Request Interrupt. Once a transmission is started, the transmitter must have data to transmit as long as it isn't followed by a STOP condition or it will hold SCL low until more data is available. The Slave Data Request bit is set when the slave transmitter is data-starved. If the slave TX FIFO is empty and the last byte transmitted was acknowledged, then SCL is held low until the CPU writes another byte to transmit. This bit is cleared when a byte is written to the slave Tx FIFO.
        enum class DrsiVal {
            slaveTransmitterDo=0x00000000,     ///<Slave transmitter does not need data.
            slaveTransmitterNe=0x00000001,     ///<Slave transmitter needs data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DrsiVal> drsi{}; 
        namespace DrsiValC{
            constexpr Register::FieldValue<decltype(drsi),DrsiVal::slaveTransmitterDo> slaveTransmitterDo{};
            constexpr Register::FieldValue<decltype(drsi),DrsiVal::slaveTransmitterNe> slaveTransmitterNe{};
        }
        ///Indicates whether the bus is busy. This bit is set when a START condition has been seen. It is cleared when a STOP condition is seen..
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> active{}; 
        namespace ActiveValC{
        }
        ///The current value of the SCL signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> scl{}; 
        namespace SclValC{
        }
        ///The current value of the SDA signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sda{}; 
        namespace SdaValC{
        }
        ///Receive FIFO Full (RFF). This bit is set when the RX FIFO is full and cannot accept any more data. It is cleared when the RX FIFO is not full. If a byte arrives when the Receive FIFO is full, the SCL is held low until the CPU reads the RX FIFO and makes room for it.
        enum class RffVal {
            rxFifoIsNotFull=0x00000000,     ///<RX FIFO is not full
            rxFifoIsFull=0x00000001,     ///<RX FIFO is full
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RffVal> rff{}; 
        namespace RffValC{
            constexpr Register::FieldValue<decltype(rff),RffVal::rxFifoIsNotFull> rxFifoIsNotFull{};
            constexpr Register::FieldValue<decltype(rff),RffVal::rxFifoIsFull> rxFifoIsFull{};
        }
        ///Receive FIFO Empty. RFE is set when the RX FIFO is empty and is cleared when the RX FIFO contains valid data.
        enum class RfeVal {
            rxFifoContainsDat=0x00000000,     ///<RX FIFO contains data.
            rxFifoIsEmpty=0x00000001,     ///<RX FIFO is empty
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RfeVal> rfe{}; 
        namespace RfeValC{
            constexpr Register::FieldValue<decltype(rfe),RfeVal::rxFifoContainsDat> rxFifoContainsDat{};
            constexpr Register::FieldValue<decltype(rfe),RfeVal::rxFifoIsEmpty> rxFifoIsEmpty{};
        }
        ///Transmit FIFO Full. TFF is set when the TX FIFO is full and is cleared when the TX FIFO is not full.
        enum class TffVal {
            txFifoIsNotFull=0x00000000,     ///<TX FIFO is not full.
            txFifoIsFull=0x00000001,     ///<TX FIFO is full
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TffVal> tff{}; 
        namespace TffValC{
            constexpr Register::FieldValue<decltype(tff),TffVal::txFifoIsNotFull> txFifoIsNotFull{};
            constexpr Register::FieldValue<decltype(tff),TffVal::txFifoIsFull> txFifoIsFull{};
        }
        ///Transmit FIFO Empty. TFE is set when the TX FIFO is empty and is cleared when the TX FIFO contains valid data.
        enum class TfeVal {
            txFifoContainsVal=0x00000000,     ///<TX FIFO contains valid data.
            txFifoIsEmpty=0x00000001,     ///<TX FIFO is empty
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TfeVal> tfe{}; 
        namespace TfeValC{
            constexpr Register::FieldValue<decltype(tfe),TfeVal::txFifoContainsVal> txFifoContainsVal{};
            constexpr Register::FieldValue<decltype(tfe),TfeVal::txFifoIsEmpty> txFifoIsEmpty{};
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
            constexpr Register::FieldValue<decltype(tdie),TdieVal::disableTheTdiInte> disableTheTdiInte{};
            constexpr Register::FieldValue<decltype(tdie),TdieVal::enableTheTdiInter> enableTheTdiInter{};
        }
        ///Transmitter Arbitration Failure Interrupt Enable. This enables the AFI interrupt which is asserted during transmission when trying to set SDA high, but the bus is driven low by another device.
        enum class AfieVal {
            disableTheAfi=0x00000000,     ///<Disable the AFI.
            enableTheAfi=0x00000001,     ///<Enable the AFI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AfieVal> afie{}; 
        namespace AfieValC{
            constexpr Register::FieldValue<decltype(afie),AfieVal::disableTheAfi> disableTheAfi{};
            constexpr Register::FieldValue<decltype(afie),AfieVal::enableTheAfi> enableTheAfi{};
        }
        ///Transmitter No Acknowledge Interrupt Enable. This enables the NAI interrupt signalling that transmitted byte was not acknowledged.
        enum class NaieVal {
            disableTheNai=0x00000000,     ///<Disable the NAI.
            enableTheNai=0x00000001,     ///<Enable the NAI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NaieVal> naie{}; 
        namespace NaieValC{
            constexpr Register::FieldValue<decltype(naie),NaieVal::disableTheNai> disableTheNai{};
            constexpr Register::FieldValue<decltype(naie),NaieVal::enableTheNai> enableTheNai{};
        }
        ///Master Transmitter Data Request Interrupt Enable. This enables the DRMI interrupt which signals that the master transmitter has run out of data, has not issued a STOP, and is holding the SCL line low.
        enum class DrmieVal {
            disableTheDrmiInt=0x00000000,     ///<Disable the DRMI interrupt.
            enableTheDrmiInte=0x00000001,     ///<Enable the DRMI interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DrmieVal> drmie{}; 
        namespace DrmieValC{
            constexpr Register::FieldValue<decltype(drmie),DrmieVal::disableTheDrmiInt> disableTheDrmiInt{};
            constexpr Register::FieldValue<decltype(drmie),DrmieVal::enableTheDrmiInte> enableTheDrmiInte{};
        }
        ///Slave Transmitter Data Request Interrupt Enable. This enables the DRSI interrupt which signals that the slave transmitter has run out of data and the last byte was acknowledged, so the SCL line is being held low.
        enum class DrsieVal {
            disableTheDrsiInt=0x00000000,     ///<Disable the DRSI interrupt.
            enableTheDrsiInte=0x00000001,     ///<Enable the DRSI interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DrsieVal> drsie{}; 
        namespace DrsieValC{
            constexpr Register::FieldValue<decltype(drsie),DrsieVal::disableTheDrsiInt> disableTheDrsiInt{};
            constexpr Register::FieldValue<decltype(drsie),DrsieVal::enableTheDrsiInte> enableTheDrsiInte{};
        }
        ///Receive FIFO Full Interrupt Enable. This enables the Receive FIFO Full interrupt to indicate that the receive FIFO cannot accept any more data.
        enum class RefieVal {
            disableTheRffi=0x00000000,     ///<Disable the RFFI.
            enableTheRffi=0x00000001,     ///<Enable the RFFI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RefieVal> refie{}; 
        namespace RefieValC{
            constexpr Register::FieldValue<decltype(refie),RefieVal::disableTheRffi> disableTheRffi{};
            constexpr Register::FieldValue<decltype(refie),RefieVal::enableTheRffi> enableTheRffi{};
        }
        ///Receive Data Available Interrupt Enable. This enables the DAI interrupt to indicate that data is available in the receive FIFO (i.e. not empty).
        enum class RfdaieVal {
            disableTheDai=0x00000000,     ///<Disable the DAI.
            enableTheDai=0x00000001,     ///<Enable the DAI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RfdaieVal> rfdaie{}; 
        namespace RfdaieValC{
            constexpr Register::FieldValue<decltype(rfdaie),RfdaieVal::disableTheDai> disableTheDai{};
            constexpr Register::FieldValue<decltype(rfdaie),RfdaieVal::enableTheDai> enableTheDai{};
        }
        ///Transmit FIFO Not Full Interrupt Enable. This enables the Transmit FIFO Not Full interrupt to indicate that the more data can be written to the transmit FIFO. Note that this is not full. It is intended help the CPU to write to the I2C block only when there is room in the FIFO and do this without polling the status register.
        enum class TffieVal {
            disableTheTffi=0x00000000,     ///<Disable the TFFI.
            enableTheTffi=0x00000001,     ///<Enable the TFFI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TffieVal> tffie{}; 
        namespace TffieValC{
            constexpr Register::FieldValue<decltype(tffie),TffieVal::disableTheTffi> disableTheTffi{};
            constexpr Register::FieldValue<decltype(tffie),TffieVal::enableTheTffi> enableTheTffi{};
        }
        ///Soft reset. This is only needed in unusual circumstances. If a device issues a start condition without issuing a stop condition. A system timer may be used to reset the I2C if the bus remains busy longer than the time-out period. On a soft reset, the Tx and Rx FIFOs are flushed, I2C_STS register is cleared, and all internal state machines are reset to appear idle. The I2C_CLKHI, I2C_CLKLO and I2C_CTL (except Soft Reset Bit) are NOT modified by a soft reset.
        enum class SrstVal {
            seeTheText=0x00000000,     ///<See the text.
            resetTheI2cToIdl=0x00000001,     ///<Reset the I2C to idle state. Self clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrstVal> srst{}; 
        namespace SrstValC{
            constexpr Register::FieldValue<decltype(srst),SrstVal::seeTheText> seeTheText{};
            constexpr Register::FieldValue<decltype(srst),SrstVal::resetTheI2cToIdl> resetTheI2cToIdl{};
        }
    }
    namespace Nonei2cClkhi{    ///<I2C Clock High
        using Addr = Register::Address<0x2008c30c,0xffffff00,0,unsigned>;
        ///Clock divisor high. This value is the number of 48 MHz clocks the serial clock (SCL) will be high.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cdhi{}; 
        namespace CdhiValC{
        }
    }
    namespace Nonei2cClklo{    ///<I2C Clock Low
        using Addr = Register::Address<0x2008c310,0xffffff00,0,unsigned>;
        ///Clock divisor low. This value is the number of 48 MHz clocks the serial clock (SCL) will be low.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cdlo{}; 
        namespace CdloValC{
        }
    }
    namespace Noneclkctrl{    ///<OTG clock controller
        using Addr = Register::Address<0x2008cff4,0xffffffe0,0,unsigned>;
        ///Host clock enable
        enum class HostclkenVal {
            disableTheHostClo=0x00000000,     ///<Disable the Host clock.
            enableTheHostCloc=0x00000001,     ///<Enable the Host clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HostclkenVal> hostClkEn{}; 
        namespace HostclkenValC{
            constexpr Register::FieldValue<decltype(hostClkEn),HostclkenVal::disableTheHostClo> disableTheHostClo{};
            constexpr Register::FieldValue<decltype(hostClkEn),HostclkenVal::enableTheHostCloc> enableTheHostCloc{};
        }
        ///Device clock enable
        enum class DevclkenVal {
            disableTheDeviceC=0x00000000,     ///<Disable the Device clock.
            enableTheDeviceCl=0x00000001,     ///<Enable the Device clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DevclkenVal> devClkEn{}; 
        namespace DevclkenValC{
            constexpr Register::FieldValue<decltype(devClkEn),DevclkenVal::disableTheDeviceC> disableTheDeviceC{};
            constexpr Register::FieldValue<decltype(devClkEn),DevclkenVal::enableTheDeviceCl> enableTheDeviceCl{};
        }
        ///I2C clock enable
        enum class I2cclkenVal {
            disableTheI2cCloc=0x00000000,     ///<Disable the I2C clock.
            enableTheI2cClock=0x00000001,     ///<Enable the I2C clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,I2cclkenVal> i2cClkEn{}; 
        namespace I2cclkenValC{
            constexpr Register::FieldValue<decltype(i2cClkEn),I2cclkenVal::disableTheI2cCloc> disableTheI2cCloc{};
            constexpr Register::FieldValue<decltype(i2cClkEn),I2cclkenVal::enableTheI2cClock> enableTheI2cClock{};
        }
        ///OTG clock enable. In device-only applications, this bit enables access to the PORTSEL register.
        enum class OtgclkenVal {
            disableTheOtgCloc=0x00000000,     ///<Disable the OTG clock.
            enableTheOtgClock=0x00000001,     ///<Enable the OTG clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OtgclkenVal> otgClkEn{}; 
        namespace OtgclkenValC{
            constexpr Register::FieldValue<decltype(otgClkEn),OtgclkenVal::disableTheOtgCloc> disableTheOtgCloc{};
            constexpr Register::FieldValue<decltype(otgClkEn),OtgclkenVal::enableTheOtgClock> enableTheOtgClock{};
        }
        ///AHB master clock enable
        enum class AhbclkenVal {
            disableTheAhbCloc=0x00000000,     ///<Disable the AHB clock.
            enableTheAhbClock=0x00000001,     ///<Enable the AHB clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AhbclkenVal> ahbClkEn{}; 
        namespace AhbclkenValC{
            constexpr Register::FieldValue<decltype(ahbClkEn),AhbclkenVal::disableTheAhbCloc> disableTheAhbCloc{};
            constexpr Register::FieldValue<decltype(ahbClkEn),AhbclkenVal::enableTheAhbClock> enableTheAhbClock{};
        }
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
            constexpr Register::FieldValue<decltype(hostClkOn),HostclkonVal::hostClockIsNotAv> hostClockIsNotAv{};
            constexpr Register::FieldValue<decltype(hostClkOn),HostclkonVal::hostClockIsAvaila> hostClockIsAvaila{};
        }
        ///Device clock status.
        enum class DevclkonVal {
            deviceClockIsNot=0x00000000,     ///<Device clock is not available.
            deviceClockIsAvai=0x00000001,     ///<Device clock is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DevclkonVal> devClkOn{}; 
        namespace DevclkonValC{
            constexpr Register::FieldValue<decltype(devClkOn),DevclkonVal::deviceClockIsNot> deviceClockIsNot{};
            constexpr Register::FieldValue<decltype(devClkOn),DevclkonVal::deviceClockIsAvai> deviceClockIsAvai{};
        }
        ///I2C clock status.
        enum class I2cclkonVal {
            i2cClockIsNotAva=0x00000000,     ///<I2C clock is not available.
            i2cClockIsAvailab=0x00000001,     ///<I2C clock is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,I2cclkonVal> i2cClkOn{}; 
        namespace I2cclkonValC{
            constexpr Register::FieldValue<decltype(i2cClkOn),I2cclkonVal::i2cClockIsNotAva> i2cClockIsNotAva{};
            constexpr Register::FieldValue<decltype(i2cClkOn),I2cclkonVal::i2cClockIsAvailab> i2cClockIsAvailab{};
        }
        ///OTG clock status.
        enum class OtgclkonVal {
            otgClockIsNotAva=0x00000000,     ///<OTG clock is not available.
            otgClockIsAvailab=0x00000001,     ///<OTG clock is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OtgclkonVal> otgClkOn{}; 
        namespace OtgclkonValC{
            constexpr Register::FieldValue<decltype(otgClkOn),OtgclkonVal::otgClockIsNotAva> otgClockIsNotAva{};
            constexpr Register::FieldValue<decltype(otgClkOn),OtgclkonVal::otgClockIsAvailab> otgClockIsAvailab{};
        }
        ///AHB master clock status.
        enum class AhbclkonVal {
            ahbClockIsNotAva=0x00000000,     ///<AHB clock is not available.
            ahbClockIsAvailab=0x00000001,     ///<AHB clock is available.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AhbclkonVal> ahbClkOn{}; 
        namespace AhbclkonValC{
            constexpr Register::FieldValue<decltype(ahbClkOn),AhbclkonVal::ahbClockIsNotAva> ahbClockIsNotAva{};
            constexpr Register::FieldValue<decltype(ahbClkOn),AhbclkonVal::ahbClockIsAvailab> ahbClockIsAvailab{};
        }
    }
}
