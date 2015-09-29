#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA controller
    namespace Nonectrl{    ///<DMA control.
        using Addr = Register::Address<0x1c004000,0xfffffffe,0,unsigned>;
        ///DMA controller master enable.
        enum class enableVal {
            disabled=0x00000000,     ///<Disabled. The DMA controller is disabled. This clears any triggers that were asserted at the point when disabled, but does not prevent re-triggering when the DMA controller is re-enabled.
            enabled=0x00000001,     ///<Enabled. The DMA controller is enabled.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Noneintstat{    ///<Interrupt status.
        using Addr = Register::Address<0x1c004004,0xfffffff9,0,unsigned>;
        ///Summarizes whether any enabled interrupts are pending.
        enum class activeintVal {
            notPending=0x00000000,     ///<Not pending. No enabled interrupts are pending.
            pending=0x00000001,     ///<Pending. At least one enabled interrupt is pending.
        };
        namespace activeintValC{
            constexpr MPL::Value<activeintVal,activeintVal::notPending> notPending{};
            constexpr MPL::Value<activeintVal,activeintVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,activeintVal> activeint{}; 
        ///Summarizes whether any error interrupts are pending.
        enum class activeerrintVal {
            notPending=0x00000000,     ///<Not pending. No error interrupts are pending.
            pending=0x00000001,     ///<Pending. At least one error interrupt is pending.
        };
        namespace activeerrintValC{
            constexpr MPL::Value<activeerrintVal,activeerrintVal::notPending> notPending{};
            constexpr MPL::Value<activeerrintVal,activeerrintVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,activeerrintVal> activeerrint{}; 
    }
    namespace Nonesrambase{    ///<SRAM address of the channel configuration table.
        using Addr = Register::Address<0x1c004008,0x000003ff,0,unsigned>;
        ///Address of the beginning of the DMA descriptor table. The table must begin on a 1 kB boundary. Boundary needed for 18 channel DMA configuration: 512 bytes (bottom 9 bits = 0)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace Noneenableset0{    ///<Channel Enable read and Set for all DMA channels.
        using Addr = Register::Address<0x1c004020,0xfffc0000,0,unsigned>;
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
    }
    namespace Noneenableclr0{    ///<Channel Enable Clear for all DMA channels.
        using Addr = Register::Address<0x1c004028,0xfffc0000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clr0{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clr1{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clr2{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clr3{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clr4{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clr5{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clr6{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clr7{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clr8{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clr9{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clr10{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clr11{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clr12{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clr13{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clr14{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clr15{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clr16{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clr17{}; 
    }
    namespace Noneactive0{    ///<Channel Active status for all DMA channels.
        using Addr = Register::Address<0x1c004030,0xfffc0000,0,unsigned>;
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> act0{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> act1{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> act2{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> act3{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> act4{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> act5{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> act6{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> act7{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> act8{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> act9{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> act10{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> act11{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> act12{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> act13{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> act14{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> act15{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> act16{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> act17{}; 
    }
    namespace Nonebusy0{    ///<Channel Busy status for all DMA channels.
        using Addr = Register::Address<0x1c004038,0xfffc0000,0,unsigned>;
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy0{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bsy1{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bsy2{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bsy3{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bsy4{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bsy5{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bsy6{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bsy7{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bsy8{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bsy9{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bsy10{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bsy11{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bsy12{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bsy13{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bsy14{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bsy15{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bsy16{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bsy17{}; 
    }
    namespace Noneerrint0{    ///<Error Interrupt status for all DMA channels.
        using Addr = Register::Address<0x1c004040,0xfffc0000,0,unsigned>;
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> err5{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> err6{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> err7{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> err8{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> err9{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> err10{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> err11{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> err12{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> err13{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> err14{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> err15{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err16{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err17{}; 
    }
    namespace Noneintenset0{    ///<Interrupt Enable read and Set for all DMA channels.
        using Addr = Register::Address<0x1c004048,0xfffc0000,0,unsigned>;
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> set0{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> set1{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> set2{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> set3{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> set4{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> set5{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> set6{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> set7{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> set8{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> set9{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> set10{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> set11{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> set12{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> set13{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> set14{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> set15{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> set16{}; 
        ///0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> set17{}; 
    }
    namespace Noneintenclr0{    ///<Interrupt Enable Clear for all DMA channels.
        using Addr = Register::Address<0x1c004050,0xfffc0000,0,unsigned>;
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clr0{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clr1{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clr2{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clr3{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clr4{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clr5{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clr6{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clr7{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clr8{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clr9{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clr10{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clr11{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clr12{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clr13{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clr14{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clr15{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clr16{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clr17{}; 
    }
    namespace Noneinta0{    ///<Interrupt A status for all DMA channels.
        using Addr = Register::Address<0x1c004058,0xfffc0000,0,unsigned>;
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ia0{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ia1{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ia2{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ia3{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ia4{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ia5{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ia6{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ia7{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ia8{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ia9{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ia10{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ia11{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ia12{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ia13{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ia14{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ia15{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ia16{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ia17{}; 
    }
    namespace Noneintb0{    ///<Interrupt B status for all DMA channels.
        using Addr = Register::Address<0x1c004060,0xfffc0000,0,unsigned>;
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ib0{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ib1{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ib2{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ib3{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ib4{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ib5{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ib6{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ib7{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ib8{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ib9{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ib10{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ib11{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ib12{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ib13{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ib14{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ib15{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ib16{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ib17{}; 
    }
    namespace Nonesetvalid0{    ///<Set ValidPending control bits for all DMA channels.
        using Addr = Register::Address<0x1c004068,0xfffc0000,0,unsigned>;
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sv0{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sv1{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sv2{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sv3{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sv4{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sv5{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sv6{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sv7{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sv8{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sv9{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sv10{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sv11{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sv12{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sv13{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sv14{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sv15{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sv16{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sv17{}; 
    }
    namespace Nonesettrig0{    ///<Set Trigger control bits for all DMA channels.
        using Addr = Register::Address<0x1c004070,0xfffc0000,0,unsigned>;
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> settrig0{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> settrig1{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> settrig2{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> settrig3{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> settrig4{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> settrig5{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> settrig6{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> settrig7{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> settrig8{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> settrig9{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> settrig10{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> settrig11{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> settrig12{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> settrig13{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> settrig14{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> settrig15{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> settrig16{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> settrig17{}; 
    }
    namespace Noneabort0{    ///<Channel Abort control for all DMA channels.
        using Addr = Register::Address<0x1c004078,0xfffc0000,0,unsigned>;
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aortctrl0{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aortctrl1{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aortctrl2{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aortctrl3{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> aortctrl4{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aortctrl5{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> aortctrl6{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> aortctrl7{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> aortctrl8{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aortctrl9{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> aortctrl10{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> aortctrl11{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> aortctrl12{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> aortctrl13{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aortctrl14{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aortctrl15{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aortctrl16{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> aortctrl17{}; 
    }
    namespace Nonecfg0{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004400,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg1{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004410,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg2{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004420,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg3{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004430,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg4{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004440,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg5{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004450,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg6{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004460,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg7{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004470,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg8{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004480,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg9{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004490,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg10{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg11{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg12{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg13{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg14{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg15{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg16{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004500,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg17{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004510,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class periphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        namespace periphreqenValC{
            constexpr MPL::Value<periphreqenVal,periphreqenVal::disabled> disabled{};
            constexpr MPL::Value<periphreqenVal,periphreqenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,periphreqenVal> periphreqen{}; 
        ///Hardware Triggering Enable for this channel.
        enum class hwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        namespace hwtrigenValC{
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::disabled> disabled{};
            constexpr MPL::Value<hwtrigenVal,hwtrigenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hwtrigenVal> hwtrigen{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class trigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        namespace trigpolValC{
            constexpr MPL::Value<trigpolVal,trigpolVal::activeLowFalling> activeLowFalling{};
            constexpr MPL::Value<trigpolVal,trigpolVal::activeHighRising> activeHighRising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,trigpolVal> trigpol{}; 
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class trigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        namespace trigtypeValC{
            constexpr MPL::Value<trigtypeVal,trigtypeVal::edge> edge{};
            constexpr MPL::Value<trigtypeVal,trigtypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,trigtypeVal> trigtype{}; 
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class trigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        namespace trigburstValC{
            constexpr MPL::Value<trigburstVal,trigburstVal::singleTransfer> singleTransfer{};
            constexpr MPL::Value<trigburstVal,trigburstVal::burstTransfer> burstTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,trigburstVal> trigburst{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class srcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        namespace srcburstwrapValC{
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<srcburstwrapVal,srcburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,srcburstwrapVal> srcburstwrap{}; 
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class dstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        namespace dstburstwrapValC{
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::disabled> disabled{};
            constexpr MPL::Value<dstburstwrapVal,dstburstwrapVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dstburstwrapVal> dstburstwrap{}; 
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonectlstat0{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004404,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat1{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004414,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat2{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004424,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat3{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004434,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat4{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004444,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat5{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004454,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat6{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004464,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat7{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004474,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat8{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004484,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat9{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004494,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat10{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat11{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat12{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat13{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat14{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat15{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat16{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004504,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonectlstat17{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004514,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class validpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        namespace validpendingValC{
            constexpr MPL::Value<validpendingVal,validpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr MPL::Value<validpendingVal,validpendingVal::validPending> validPending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,validpendingVal> validpending{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class trigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        namespace trigValC{
            constexpr MPL::Value<trigVal,trigVal::notTriggered> notTriggered{};
            constexpr MPL::Value<trigVal,trigVal::triggered> triggered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,trigVal> trig{}; 
    }
    namespace Nonexfercfg0{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004408,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg1{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004418,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg2{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004428,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg3{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004438,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg4{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004448,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg5{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004458,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg6{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004468,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg7{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004478,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg8{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004488,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg9{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004498,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg10{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg11{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg12{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg13{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg14{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg15{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg16{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004508,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg17{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004518,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class cfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        namespace cfgvalidValC{
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::notValid> notValid{};
            constexpr MPL::Value<cfgvalidVal,cfgvalidVal::valid> valid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cfgvalidVal> cfgvalid{}; 
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class reloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        namespace reloadValC{
            constexpr MPL::Value<reloadVal,reloadVal::disabled> disabled{};
            constexpr MPL::Value<reloadVal,reloadVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reloadVal> reload{}; 
        ///Software Trigger.
        enum class swtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        namespace swtrigValC{
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr MPL::Value<swtrigVal,swtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swtrigVal> swtrig{}; 
        ///Clear Trigger.
        enum class clrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        namespace clrtrigValC{
            constexpr MPL::Value<clrtrigVal,clrtrigVal::notCleared> notCleared{};
            constexpr MPL::Value<clrtrigVal,clrtrigVal::cleared> cleared{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrtrigVal> clrtrig{}; 
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintaValC{
            constexpr MPL::Value<setintaVal,setintaVal::noEffect> noEffect{};
            constexpr MPL::Value<setintaVal,setintaVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setintaVal> setinta{}; 
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class setintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        namespace setintbValC{
            constexpr MPL::Value<setintbVal,setintbVal::noEffect> noEffect{};
            constexpr MPL::Value<setintbVal,setintbVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setintbVal> setintb{}; 
        ///Transfer width used for this DMA channel.
        enum class widthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
            reserved=0x00000003,     ///<Reserved setting, do not use.
        };
        namespace widthValC{
            constexpr MPL::Value<widthVal,widthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::v32BitTransfersAre> v32BitTransfersAre{};
            constexpr MPL::Value<widthVal,widthVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,widthVal> width{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class srcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace srcincValC{
            constexpr MPL::Value<srcincVal,srcincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<srcincVal,srcincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<srcincVal,srcincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,srcincVal> srcinc{}; 
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class dstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        namespace dstincValC{
            constexpr MPL::Value<dstincVal,dstincVal::noIncrement> noIncrement{};
            constexpr MPL::Value<dstincVal,dstincVal::v1XWidth> v1XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v2XWidth> v2XWidth{};
            constexpr MPL::Value<dstincVal,dstincVal::v4XWidth> v4XWidth{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,dstincVal> dstinc{}; 
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
}
