#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA controller
    namespace DmaCtrl{    ///<DMA control.
        using Addr = Register::Address<0x1c004000,0x00000000,0x00000000,unsigned>;
        ///DMA controller master enable.
        enum class EnableVal {
            disabled=0x00000000,     ///<Disabled. The DMA controller is disabled. This clears any triggers that were asserted at the point when disabled, but does not prevent re-triggering when the DMA controller is re-enabled.
            enabled=0x00000001,     ///<Enabled. The DMA controller is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaIntstat{    ///<Interrupt status.
        using Addr = Register::Address<0x1c004004,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Summarizes whether any enabled interrupts are pending.
        enum class ActiveintVal {
            notPending=0x00000000,     ///<Not pending. No enabled interrupts are pending.
            pending=0x00000001,     ///<Pending. At least one enabled interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ActiveintVal> activeint{}; 
        namespace ActiveintValC{
            constexpr Register::FieldValue<decltype(activeint)::Type,ActiveintVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(activeint)::Type,ActiveintVal::pending> pending{};
        }
        ///Summarizes whether any error interrupts are pending.
        enum class ActiveerrintVal {
            notPending=0x00000000,     ///<Not pending. No error interrupts are pending.
            pending=0x00000001,     ///<Pending. At least one error interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ActiveerrintVal> activeerrint{}; 
        namespace ActiveerrintValC{
            constexpr Register::FieldValue<decltype(activeerrint)::Type,ActiveerrintVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(activeerrint)::Type,ActiveerrintVal::pending> pending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaSrambase{    ///<SRAM address of the channel configuration table.
        using Addr = Register::Address<0x1c004008,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Address of the beginning of the DMA descriptor table. The table must begin on a 1 kB boundary. Boundary needed for 18 channel DMA configuration: 512 bytes (bottom 9 bits = 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace DmaEnableset0{    ///<Channel Enable read and Set for all DMA channels.
        using Addr = Register::Address<0x1c004020,0x00000000,0x00000000,unsigned>;
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ena8{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ena9{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ena10{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ena11{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ena12{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ena13{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ena14{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ena15{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ena16{}; 
        ///Enable for DMA channels 17:0. Bit n enables or disables DMA channel n.  0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ena17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaEnableclr0{    ///<Channel Enable Clear for all DMA channels.
        using Addr = Register::Address<0x1c004028,0x00000000,0x00000000,unsigned>;
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clr0{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clr1{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clr2{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clr3{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clr4{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clr5{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clr6{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clr7{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clr8{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clr9{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clr10{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clr11{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clr12{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clr13{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clr14{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clr15{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clr16{}; 
        ///Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clr17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaActive0{    ///<Channel Active status for all DMA channels.
        using Addr = Register::Address<0x1c004030,0x00000000,0x00000000,unsigned>;
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> act0{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> act1{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> act2{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> act3{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> act4{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> act5{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> act6{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> act7{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> act8{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> act9{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> act10{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> act11{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> act12{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> act13{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> act14{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> act15{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> act16{}; 
        ///Active flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> act17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaBusy0{    ///<Channel Busy status for all DMA channels.
        using Addr = Register::Address<0x1c004038,0x00000000,0x00000000,unsigned>;
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy0{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bsy1{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bsy2{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bsy3{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bsy4{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bsy5{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bsy6{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bsy7{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bsy8{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bsy9{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bsy10{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bsy11{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bsy12{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bsy13{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bsy14{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bsy15{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bsy16{}; 
        ///Busy flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bsy17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaErrint0{    ///<Error Interrupt status for all DMA channels.
        using Addr = Register::Address<0x1c004040,0x00000000,0x00000000,unsigned>;
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> err5{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> err6{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> err7{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> err8{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> err9{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> err10{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> err11{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> err12{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> err13{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> err14{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> err15{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err16{}; 
        ///Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. 0 = error interrupt is not active. 1 = error interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaIntenset0{    ///<Interrupt Enable read and Set for all DMA channels.
        using Addr = Register::Address<0x1c004048,0x00000000,0x00000000,unsigned>;
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> set0{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> set1{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> set2{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> set3{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> set4{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> set5{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> set6{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> set7{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> set8{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> set9{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> set10{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> set11{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> set12{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> set13{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> set14{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> set15{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> set16{}; 
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> set17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaIntenclr0{    ///<Interrupt Enable Clear for all DMA channels.
        using Addr = Register::Address<0x1c004050,0x00000000,0x00000000,unsigned>;
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clr0{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clr1{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clr2{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clr3{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clr4{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clr5{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clr6{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clr7{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clr8{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clr9{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clr10{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clr11{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clr12{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clr13{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clr14{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clr15{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clr16{}; 
        ///Writing ones to this register clears corresponding bits in the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clr17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaInta0{    ///<Interrupt A status for all DMA channels.
        using Addr = Register::Address<0x1c004058,0x00000000,0x00000000,unsigned>;
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ia0{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ia1{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ia2{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ia3{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ia4{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ia5{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ia6{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ia7{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ia8{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ia9{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ia10{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ia11{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ia12{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ia13{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ia14{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ia15{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ia16{}; 
        ///Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt A is not active. 1 = the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ia17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaIntb0{    ///<Interrupt B status for all DMA channels.
        using Addr = Register::Address<0x1c004060,0x00000000,0x00000000,unsigned>;
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ib0{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ib1{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ib2{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ib3{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ib4{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ib5{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ib6{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ib7{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ib8{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ib9{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ib10{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ib11{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ib12{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ib13{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ib14{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ib15{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ib16{}; 
        ///Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. 0 = the DMA channel interrupt B is not active. 1 = the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ib17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaSetvalid0{    ///<Set ValidPending control bits for all DMA channels.
        using Addr = Register::Address<0x1c004068,0x00000000,0x00000000,unsigned>;
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sv0{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sv1{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sv2{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sv3{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sv4{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sv5{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sv6{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sv7{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sv8{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sv9{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sv10{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sv11{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sv12{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sv13{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sv14{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sv15{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sv16{}; 
        ///SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sv17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaSettrig0{    ///<Set Trigger control bits for all DMA channels.
        using Addr = Register::Address<0x1c004070,0x00000000,0x00000000,unsigned>;
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> settrig0{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> settrig1{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> settrig2{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> settrig3{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> settrig4{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> settrig5{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> settrig6{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> settrig7{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> settrig8{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> settrig9{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> settrig10{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> settrig11{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> settrig12{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> settrig13{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> settrig14{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> settrig15{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> settrig16{}; 
        ///Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> settrig17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaAbort0{    ///<Channel Abort control for all DMA channels.
        using Addr = Register::Address<0x1c004078,0x00000000,0x00000000,unsigned>;
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aortctrl0{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aortctrl1{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aortctrl2{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aortctrl3{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> aortctrl4{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aortctrl5{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> aortctrl6{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> aortctrl7{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> aortctrl8{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aortctrl9{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> aortctrl10{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> aortctrl11{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> aortctrl12{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> aortctrl13{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aortctrl14{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aortctrl15{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aortctrl16{}; 
        ///Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect. 1 = aborts DMA operations on channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> aortctrl17{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg0{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004400,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg1{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004410,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg2{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004420,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg3{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004430,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg4{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004440,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg5{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004450,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg6{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004460,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg7{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004470,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg8{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004480,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg9{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004490,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg10{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a0,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg11{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b0,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg12{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c0,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg13{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d0,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg14{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e0,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg15{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f0,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg16{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004500,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCfg17{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004510,0x00000000,0x00000000,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory move, any peripheral DMA request associated with that channel can be disabled to prevent any interaction between the peripheral and the DMA controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER = 0) is selected, only hardware triggers should be used on that channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Burst Power is used in two ways. It always selects the address wrap size when SrcBurstWrap and/or DstBurstWrap is modes are selected (see descriptions elsewhere in this register). When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many transfers are performed for each DMA trigger. This can be used, for example, with peripherals that contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds to the maximum supported transfer count. others: not supported.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Source Burst Wrap. When enabled, the source data address for the DMA is wrapped, meaning that the source address range for each burst will be the same. As an example, this could be used to read several sequential registers from a peripheral for each DMA burst, reading the same registers again for each burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data address for the DMA is wrapped, meaning that the destination address range for each burst will be the same. As an example, this could be used to write several sequential registers to a peripheral for each DMA burst, writing the same registers again for each burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are pending. This description reflects a 3-bit priority field giving 8 priority levels. A specific instance of the SDMA might have anywhere from 2 to 16 priority levels (1 to 4 bits for the CH_PRIORITY field). 0x0 = highest priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat0{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004404,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat1{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004414,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat2{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004424,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat3{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004434,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat4{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004444,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat5{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004454,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat6{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004464,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat7{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004474,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat8{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004484,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat9{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004494,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat10{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a4,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat11{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b4,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat12{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c4,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat13{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d4,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat14{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e4,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat15{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f4,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat16{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004504,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaCtlstat17{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004514,0x00000000,0x00000000,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a 1 is written to the corresponding bit in the related SETVALID register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffectOnDmaOpe=0x00000000,     ///<No effect on DMA operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffectOnDmaOpe> noEffectOnDmaOpe{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Trigger flag. Indicates that the trigger for this channel is currently set. This bit is cleared at the end of an entire transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg0{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004408,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg1{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004418,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg2{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004428,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg3{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004438,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg4{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004448,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg5{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004458,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg6{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004468,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg7{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004478,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg8{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004488,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg9{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004498,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg10{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a8,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg11{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b8,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg12{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c8,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg13{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d8,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg14{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e8,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg15{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f8,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg16{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004508,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmaXfercfg17{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004518,0x00000000,0x00000000,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the current channel descriptor is valid and can potentially be acted upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The current channel descriptor is not considered valid.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be reloaded when the current descriptor is exhausted. Reloading allows ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control structure when the current descriptor is exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            whenWrittenBySoft=0x00000000,     ///<When written by software, the trigger for this channel is not set. A new trigger, as defined by the HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the channel.
            whenWrittenBySoft=0x00000001,     ///<When written by software, the trigger for this channel is set immediately. This feature should not be used with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::whenWrittenBySoft> whenWrittenBySoft{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this descriptor is exhausted. If there is a reload, the next descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware distinction between interrupt A and B. They can be used by software to assist with more complex descriptor usage. By convention, interrupt A may be used when only one interrupt flag is needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8BitTransfersAre=0x00000000,     ///<8-bit transfers are performed (8-bit source reads and destination writes).
            v16BitTransfersAre=0x00000001,     ///<16-bit transfers are performed (16-bit source reads and destination writes).
            v32BitTransfersAre=0x00000002,     ///<32-bit transfers are performed (32-bit source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8BitTransfersAre> v8BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16BitTransfersAre> v16BitTransfersAre{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32BitTransfersAre> v32BitTransfersAre{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Determines whether the source address is incremented for each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented for each transfer. This is the usual case when the source is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the amount specified by Width for each transfer. This is the usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2 times the amount specified by Width for each transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4 times the amount specified by Width for each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
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
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded. The number of bytes transferred is: (XFERCOUNT + 1) x data width (as defined by the WIDTH field). 0x0 = a total of 1 transfer will be performed. 0x1 = a total of 2 transfers will be performed. ... 0x3FF = a total of 1,024 transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
