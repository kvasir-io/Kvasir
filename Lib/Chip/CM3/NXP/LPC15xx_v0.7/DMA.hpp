#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA controller
    namespace Nonectrl{    ///<DMA control.
        using Addr = Register::Address<0x1c004000,0xfffffffe,0,unsigned>;
        ///DMA controller master enable.
        enum class EnableVal {
            disabled=0x00000000,     ///<Disabled. The DMA controller is disabled. This clears any triggers that were asserted at the point when disabled, but does not prevent re-triggering when the DMA controller is re-enabled.
            enabled=0x00000001,     ///<Enabled. The DMA controller is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable),EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable),EnableVal::enabled> enabled{};
        }
    }
    namespace Noneintstat{    ///<Interrupt status.
        using Addr = Register::Address<0x1c004004,0xfffffff9,0,unsigned>;
        ///Summarizes whether any enabled interrupts are pending.
        enum class ActiveintVal {
            notPending=0x00000000,     ///<Not pending. No enabled interrupts are pending.
            pending=0x00000001,     ///<Pending. At least one enabled interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ActiveintVal> activeint{}; 
        namespace ActiveintValC{
            constexpr Register::FieldValue<decltype(activeint),ActiveintVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(activeint),ActiveintVal::pending> pending{};
        }
        ///Summarizes whether any error interrupts are pending.
        enum class ActiveerrintVal {
            notPending=0x00000000,     ///<Not pending. No error interrupts are pending.
            pending=0x00000001,     ///<Pending. At least one error interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ActiveerrintVal> activeerrint{}; 
        namespace ActiveerrintValC{
            constexpr Register::FieldValue<decltype(activeerrint),ActiveerrintVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(activeerrint),ActiveerrintVal::pending> pending{};
        }
    }
    namespace Nonesrambase{    ///<SRAM address of the channel configuration table.
        using Addr = Register::Address<0x1c004008,0x000003ff,0,unsigned>;
        ///Address of the beginning of the DMA descriptor table. The table must begin on a 1 kB boundary. Boundary needed for 18 channel DMA configuration: 512 bytes (bottom 9 bits = 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
    }
    namespace Noneenableset0{    ///<Channel Enable read and Set for all DMA channels.
        using Addr = Register::Address<0x1c004020,0xfffc0000,0,unsigned>;
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        namespace Ena0ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        namespace Ena1ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        namespace Ena2ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        namespace Ena3ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        namespace Ena4ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        namespace Ena5ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        namespace Ena6ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        namespace Ena7ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        namespace Ena8ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        namespace Ena9ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        namespace Ena10ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        namespace Ena11ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        namespace Ena12ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        namespace Ena13ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        namespace Ena14ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        namespace Ena15ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        namespace Ena16ValC{
        }
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        namespace Ena17ValC{
        }
    }
    namespace Noneenableclr0{    ///<Channel Enable Clear for all DMA channels.
        using Addr = Register::Address<0x1c004028,0xfffc0000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clr0{}; 
        namespace Clr0ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clr1{}; 
        namespace Clr1ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clr2{}; 
        namespace Clr2ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clr3{}; 
        namespace Clr3ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clr4{}; 
        namespace Clr4ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clr5{}; 
        namespace Clr5ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clr6{}; 
        namespace Clr6ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clr7{}; 
        namespace Clr7ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clr8{}; 
        namespace Clr8ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clr9{}; 
        namespace Clr9ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clr10{}; 
        namespace Clr10ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clr11{}; 
        namespace Clr11ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clr12{}; 
        namespace Clr12ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clr13{}; 
        namespace Clr13ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clr14{}; 
        namespace Clr14ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clr15{}; 
        namespace Clr15ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clr16{}; 
        namespace Clr16ValC{
        }
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clr17{}; 
        namespace Clr17ValC{
        }
    }
    namespace Noneactive0{    ///<Channel Active status for all DMA channels.
        using Addr = Register::Address<0x1c004030,0xfffc0000,0,unsigned>;
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> act0{}; 
        namespace Act0ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> act1{}; 
        namespace Act1ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> act2{}; 
        namespace Act2ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> act3{}; 
        namespace Act3ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> act4{}; 
        namespace Act4ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> act5{}; 
        namespace Act5ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> act6{}; 
        namespace Act6ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> act7{}; 
        namespace Act7ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> act8{}; 
        namespace Act8ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> act9{}; 
        namespace Act9ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> act10{}; 
        namespace Act10ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> act11{}; 
        namespace Act11ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> act12{}; 
        namespace Act12ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> act13{}; 
        namespace Act13ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> act14{}; 
        namespace Act14ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> act15{}; 
        namespace Act15ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> act16{}; 
        namespace Act16ValC{
        }
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> act17{}; 
        namespace Act17ValC{
        }
    }
    namespace Nonebusy0{    ///<Channel Busy status for all DMA channels.
        using Addr = Register::Address<0x1c004038,0xfffc0000,0,unsigned>;
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy0{}; 
        namespace Bsy0ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bsy1{}; 
        namespace Bsy1ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bsy2{}; 
        namespace Bsy2ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bsy3{}; 
        namespace Bsy3ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bsy4{}; 
        namespace Bsy4ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bsy5{}; 
        namespace Bsy5ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bsy6{}; 
        namespace Bsy6ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bsy7{}; 
        namespace Bsy7ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bsy8{}; 
        namespace Bsy8ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bsy9{}; 
        namespace Bsy9ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bsy10{}; 
        namespace Bsy10ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bsy11{}; 
        namespace Bsy11ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bsy12{}; 
        namespace Bsy12ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bsy13{}; 
        namespace Bsy13ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bsy14{}; 
        namespace Bsy14ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bsy15{}; 
        namespace Bsy15ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bsy16{}; 
        namespace Bsy16ValC{
        }
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bsy17{}; 
        namespace Bsy17ValC{
        }
    }
    namespace Noneerrint0{    ///<Error Interrupt status for all DMA channels.
        using Addr = Register::Address<0x1c004040,0xfffc0000,0,unsigned>;
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> err6{}; 
        namespace Err6ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> err7{}; 
        namespace Err7ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> err8{}; 
        namespace Err8ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> err9{}; 
        namespace Err9ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> err10{}; 
        namespace Err10ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> err11{}; 
        namespace Err11ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> err12{}; 
        namespace Err12ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> err13{}; 
        namespace Err13ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> err14{}; 
        namespace Err14ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> err15{}; 
        namespace Err15ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err16{}; 
        namespace Err16ValC{
        }
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err17{}; 
        namespace Err17ValC{
        }
    }
    namespace Noneintenset0{    ///<Interrupt Enable read and Set for all DMA channels.
        using Addr = Register::Address<0x1c004048,0xfffc0000,0,unsigned>;
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> set0{}; 
        namespace Set0ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> set1{}; 
        namespace Set1ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> set2{}; 
        namespace Set2ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> set3{}; 
        namespace Set3ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> set4{}; 
        namespace Set4ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> set5{}; 
        namespace Set5ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> set6{}; 
        namespace Set6ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> set7{}; 
        namespace Set7ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> set8{}; 
        namespace Set8ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> set9{}; 
        namespace Set9ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> set10{}; 
        namespace Set10ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> set11{}; 
        namespace Set11ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> set12{}; 
        namespace Set12ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> set13{}; 
        namespace Set13ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> set14{}; 
        namespace Set14ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> set15{}; 
        namespace Set15ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> set16{}; 
        namespace Set16ValC{
        }
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> set17{}; 
        namespace Set17ValC{
        }
    }
    namespace Noneintenclr0{    ///<Interrupt Enable Clear for all DMA channels.
        using Addr = Register::Address<0x1c004050,0xfffc0000,0,unsigned>;
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clr0{}; 
        namespace Clr0ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clr1{}; 
        namespace Clr1ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clr2{}; 
        namespace Clr2ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clr3{}; 
        namespace Clr3ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clr4{}; 
        namespace Clr4ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clr5{}; 
        namespace Clr5ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clr6{}; 
        namespace Clr6ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clr7{}; 
        namespace Clr7ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clr8{}; 
        namespace Clr8ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clr9{}; 
        namespace Clr9ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clr10{}; 
        namespace Clr10ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clr11{}; 
        namespace Clr11ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clr12{}; 
        namespace Clr12ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clr13{}; 
        namespace Clr13ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clr14{}; 
        namespace Clr14ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clr15{}; 
        namespace Clr15ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clr16{}; 
        namespace Clr16ValC{
        }
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clr17{}; 
        namespace Clr17ValC{
        }
    }
    namespace Noneinta0{    ///<Interrupt A status for all DMA channels.
        using Addr = Register::Address<0x1c004058,0xfffc0000,0,unsigned>;
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ia0{}; 
        namespace Ia0ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ia1{}; 
        namespace Ia1ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ia2{}; 
        namespace Ia2ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ia3{}; 
        namespace Ia3ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ia4{}; 
        namespace Ia4ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ia5{}; 
        namespace Ia5ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ia6{}; 
        namespace Ia6ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ia7{}; 
        namespace Ia7ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ia8{}; 
        namespace Ia8ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ia9{}; 
        namespace Ia9ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ia10{}; 
        namespace Ia10ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ia11{}; 
        namespace Ia11ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ia12{}; 
        namespace Ia12ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ia13{}; 
        namespace Ia13ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ia14{}; 
        namespace Ia14ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ia15{}; 
        namespace Ia15ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ia16{}; 
        namespace Ia16ValC{
        }
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ia17{}; 
        namespace Ia17ValC{
        }
    }
    namespace Noneintb0{    ///<Interrupt B status for all DMA channels.
        using Addr = Register::Address<0x1c004060,0xfffc0000,0,unsigned>;
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ib0{}; 
        namespace Ib0ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ib1{}; 
        namespace Ib1ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ib2{}; 
        namespace Ib2ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ib3{}; 
        namespace Ib3ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ib4{}; 
        namespace Ib4ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ib5{}; 
        namespace Ib5ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ib6{}; 
        namespace Ib6ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ib7{}; 
        namespace Ib7ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ib8{}; 
        namespace Ib8ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ib9{}; 
        namespace Ib9ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ib10{}; 
        namespace Ib10ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ib11{}; 
        namespace Ib11ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ib12{}; 
        namespace Ib12ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ib13{}; 
        namespace Ib13ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ib14{}; 
        namespace Ib14ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ib15{}; 
        namespace Ib15ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ib16{}; 
        namespace Ib16ValC{
        }
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ib17{}; 
        namespace Ib17ValC{
        }
    }
    namespace Nonesetvalid0{    ///<Set ValidPending control bits for all DMA channels.
        using Addr = Register::Address<0x1c004068,0xfffc0000,0,unsigned>;
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sv0{}; 
        namespace Sv0ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sv1{}; 
        namespace Sv1ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sv2{}; 
        namespace Sv2ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sv3{}; 
        namespace Sv3ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sv4{}; 
        namespace Sv4ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sv5{}; 
        namespace Sv5ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sv6{}; 
        namespace Sv6ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sv7{}; 
        namespace Sv7ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sv8{}; 
        namespace Sv8ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sv9{}; 
        namespace Sv9ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sv10{}; 
        namespace Sv10ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sv11{}; 
        namespace Sv11ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sv12{}; 
        namespace Sv12ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sv13{}; 
        namespace Sv13ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sv14{}; 
        namespace Sv14ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sv15{}; 
        namespace Sv15ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sv16{}; 
        namespace Sv16ValC{
        }
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sv17{}; 
        namespace Sv17ValC{
        }
    }
    namespace Nonesettrig0{    ///<Set Trigger control bits for all DMA channels.
        using Addr = Register::Address<0x1c004070,0xfffc0000,0,unsigned>;
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> settrig0{}; 
        namespace Settrig0ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> settrig1{}; 
        namespace Settrig1ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> settrig2{}; 
        namespace Settrig2ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> settrig3{}; 
        namespace Settrig3ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> settrig4{}; 
        namespace Settrig4ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> settrig5{}; 
        namespace Settrig5ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> settrig6{}; 
        namespace Settrig6ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> settrig7{}; 
        namespace Settrig7ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> settrig8{}; 
        namespace Settrig8ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> settrig9{}; 
        namespace Settrig9ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> settrig10{}; 
        namespace Settrig10ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> settrig11{}; 
        namespace Settrig11ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> settrig12{}; 
        namespace Settrig12ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> settrig13{}; 
        namespace Settrig13ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> settrig14{}; 
        namespace Settrig14ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> settrig15{}; 
        namespace Settrig15ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> settrig16{}; 
        namespace Settrig16ValC{
        }
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> settrig17{}; 
        namespace Settrig17ValC{
        }
    }
    namespace Noneabort0{    ///<Channel Abort control for all DMA channels.
        using Addr = Register::Address<0x1c004078,0xfffc0000,0,unsigned>;
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aortctrl0{}; 
        namespace Aortctrl0ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aortctrl1{}; 
        namespace Aortctrl1ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aortctrl2{}; 
        namespace Aortctrl2ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aortctrl3{}; 
        namespace Aortctrl3ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> aortctrl4{}; 
        namespace Aortctrl4ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aortctrl5{}; 
        namespace Aortctrl5ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> aortctrl6{}; 
        namespace Aortctrl6ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> aortctrl7{}; 
        namespace Aortctrl7ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> aortctrl8{}; 
        namespace Aortctrl8ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aortctrl9{}; 
        namespace Aortctrl9ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> aortctrl10{}; 
        namespace Aortctrl10ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> aortctrl11{}; 
        namespace Aortctrl11ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> aortctrl12{}; 
        namespace Aortctrl12ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> aortctrl13{}; 
        namespace Aortctrl13ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aortctrl14{}; 
        namespace Aortctrl14ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aortctrl15{}; 
        namespace Aortctrl15ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aortctrl16{}; 
        namespace Aortctrl16ValC{
        }
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> aortctrl17{}; 
        namespace Aortctrl17ValC{
        }
    }
    namespace Nonecfg0{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004400,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg1{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004410,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg2{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004420,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg3{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004430,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg4{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004440,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg5{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004450,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg6{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004460,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg7{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004470,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg8{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004480,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg9{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004490,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg10{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg11{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg12{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg13{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg14{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg15{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg16{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004500,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonecfg17{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004510,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen),PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen),HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol),TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype),TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst),TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        namespace BurstpowerValC{
        }
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap),SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap),DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        namespace ChpriorityValC{
        }
    }
    namespace Nonectlstat0{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004404,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat1{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004414,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat2{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004424,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat3{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004434,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat4{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004444,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat5{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004454,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat6{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004464,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat7{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004474,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat8{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004484,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat9{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004494,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat10{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat11{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat12{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat13{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat14{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat15{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat16{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004504,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat17{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004514,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending),ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig),TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig),TrigVal::triggered> triggered{};
        }
    }
    namespace Nonexfercfg0{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004408,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg1{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004418,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg2{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004428,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg3{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004438,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg4{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004448,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg5{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004458,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg6{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004468,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg7{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004478,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg8{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004488,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg9{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004498,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg10{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg11{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg12{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg13{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg14{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg15{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg16{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004508,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
    namespace Nonexfercfg17{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004518,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid),CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload),ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload),ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig),SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig),ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta),SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb),SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width),WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width),WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc),SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not incremented for each transfer. This is the usual case when the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented by the amount specified by Width for each transfer. This is the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc),DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        namespace XfercountValC{
        }
    }
}
