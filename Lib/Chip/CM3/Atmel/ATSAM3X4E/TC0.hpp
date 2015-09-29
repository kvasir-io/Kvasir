#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Timer Counter 0
    namespace Tc0Ccr0{    ///<Channel Control Register (channel = 0)
        using Addr = Register::Address<0x40080000,0xfffffff8,0,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Counter Clock Disable Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkdis{}; 
        ///Software Trigger Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrg{}; 
    }
    namespace Tc0Cmr0{    ///<Channel Mode Register (channel = 0)
        using Addr = Register::Address<0x40080004,0xfff03800,0,unsigned>;
        ///Clock Selection
        enum class tcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        namespace tcclksValC{
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock1> timerClock1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock2> timerClock2{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock3> timerClock3{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock4> timerClock4{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock5> timerClock5{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc0> xc0{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc1> xc1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,tcclksVal> tcclks{}; 
        ///Clock Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class burstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        namespace burstValC{
            constexpr MPL::Value<burstVal,burstVal::none> none{};
            constexpr MPL::Value<burstVal,burstVal::xc0> xc0{};
            constexpr MPL::Value<burstVal,burstVal::xc1> xc1{};
            constexpr MPL::Value<burstVal,burstVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,burstVal> burst{}; 
        ///Counter Clock Stopped with RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        ///Counter Clock Disable with RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        ///External Trigger Edge Selection
        enum class etrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        namespace etrgedgValC{
            constexpr MPL::Value<etrgedgVal,etrgedgVal::none> none{};
            constexpr MPL::Value<etrgedgVal,etrgedgVal::rising> rising{};
            constexpr MPL::Value<etrgedgVal,etrgedgVal::falling> falling{};
            constexpr MPL::Value<etrgedgVal,etrgedgVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,etrgedgVal> etrgedg{}; 
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        ///RC Compare Trigger Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        ///Waveform Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Loading Edge Selection
        enum class ldraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        namespace ldraValC{
            constexpr MPL::Value<ldraVal,ldraVal::none> none{};
            constexpr MPL::Value<ldraVal,ldraVal::rising> rising{};
            constexpr MPL::Value<ldraVal,ldraVal::falling> falling{};
            constexpr MPL::Value<ldraVal,ldraVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,ldraVal> ldra{}; 
        ///RB Loading Edge Selection
        enum class ldrbVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        namespace ldrbValC{
            constexpr MPL::Value<ldrbVal,ldrbVal::none> none{};
            constexpr MPL::Value<ldrbVal,ldrbVal::rising> rising{};
            constexpr MPL::Value<ldrbVal,ldrbVal::falling> falling{};
            constexpr MPL::Value<ldrbVal,ldrbVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,ldrbVal> ldrb{}; 
    }
    namespace Tc0Cmr0WaveEq1{    ///<Channel Mode Register (channel = 0)
        using Addr = Register::Address<0x40080004,0x00000000,0,unsigned>;
        ///Clock Selection
        enum class tcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        namespace tcclksValC{
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock1> timerClock1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock2> timerClock2{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock3> timerClock3{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock4> timerClock4{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock5> timerClock5{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc0> xc0{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc1> xc1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,tcclksVal> tcclks{}; 
        ///Clock Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class burstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        namespace burstValC{
            constexpr MPL::Value<burstVal,burstVal::none> none{};
            constexpr MPL::Value<burstVal,burstVal::xc0> xc0{};
            constexpr MPL::Value<burstVal,burstVal::xc1> xc1{};
            constexpr MPL::Value<burstVal,burstVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,burstVal> burst{}; 
        ///Counter Clock Stopped with RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        ///Counter Clock Disable with RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        ///External Event Edge Selection
        enum class eevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        namespace eevtedgValC{
            constexpr MPL::Value<eevtedgVal,eevtedgVal::none> none{};
            constexpr MPL::Value<eevtedgVal,eevtedgVal::rising> rising{};
            constexpr MPL::Value<eevtedgVal,eevtedgVal::falling> falling{};
            constexpr MPL::Value<eevtedgVal,eevtedgVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,eevtedgVal> eevtedg{}; 
        ///External Event Selection
        enum class eevtVal {
            tiob=0x00000000,     ///<TIOB
            xc0=0x00000001,     ///<XC0
            xc1=0x00000002,     ///<XC1
            xc2=0x00000003,     ///<XC2
        };
        namespace eevtValC{
            constexpr MPL::Value<eevtVal,eevtVal::tiob> tiob{};
            constexpr MPL::Value<eevtVal,eevtVal::xc0> xc0{};
            constexpr MPL::Value<eevtVal,eevtVal::xc1> xc1{};
            constexpr MPL::Value<eevtVal,eevtVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,eevtVal> eevt{}; 
        ///External Event Trigger Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        ///Waveform Selection
        enum class wavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        namespace wavselValC{
            constexpr MPL::Value<wavselVal,wavselVal::up> up{};
            constexpr MPL::Value<wavselVal,wavselVal::updown> updown{};
            constexpr MPL::Value<wavselVal,wavselVal::upRc> upRc{};
            constexpr MPL::Value<wavselVal,wavselVal::updownRc> updownRc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,wavselVal> wavsel{}; 
        ///Waveform Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Compare Effect on TIOA
        enum class acpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace acpaValC{
            constexpr MPL::Value<acpaVal,acpaVal::none> none{};
            constexpr MPL::Value<acpaVal,acpaVal::set> set{};
            constexpr MPL::Value<acpaVal,acpaVal::clear> clear{};
            constexpr MPL::Value<acpaVal,acpaVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,acpaVal> acpa{}; 
        ///RC Compare Effect on TIOA
        enum class acpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace acpcValC{
            constexpr MPL::Value<acpcVal,acpcVal::none> none{};
            constexpr MPL::Value<acpcVal,acpcVal::set> set{};
            constexpr MPL::Value<acpcVal,acpcVal::clear> clear{};
            constexpr MPL::Value<acpcVal,acpcVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,acpcVal> acpc{}; 
        ///External Event Effect on TIOA
        enum class aeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace aeevtValC{
            constexpr MPL::Value<aeevtVal,aeevtVal::none> none{};
            constexpr MPL::Value<aeevtVal,aeevtVal::set> set{};
            constexpr MPL::Value<aeevtVal,aeevtVal::clear> clear{};
            constexpr MPL::Value<aeevtVal,aeevtVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,aeevtVal> aeevt{}; 
        ///Software Trigger Effect on TIOA
        enum class aswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace aswtrgValC{
            constexpr MPL::Value<aswtrgVal,aswtrgVal::none> none{};
            constexpr MPL::Value<aswtrgVal,aswtrgVal::set> set{};
            constexpr MPL::Value<aswtrgVal,aswtrgVal::clear> clear{};
            constexpr MPL::Value<aswtrgVal,aswtrgVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,aswtrgVal> aswtrg{}; 
        ///RB Compare Effect on TIOB
        enum class bcpbVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace bcpbValC{
            constexpr MPL::Value<bcpbVal,bcpbVal::none> none{};
            constexpr MPL::Value<bcpbVal,bcpbVal::set> set{};
            constexpr MPL::Value<bcpbVal,bcpbVal::clear> clear{};
            constexpr MPL::Value<bcpbVal,bcpbVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,bcpbVal> bcpb{}; 
        ///RC Compare Effect on TIOB
        enum class bcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace bcpcValC{
            constexpr MPL::Value<bcpcVal,bcpcVal::none> none{};
            constexpr MPL::Value<bcpcVal,bcpcVal::set> set{};
            constexpr MPL::Value<bcpcVal,bcpcVal::clear> clear{};
            constexpr MPL::Value<bcpcVal,bcpcVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,bcpcVal> bcpc{}; 
        ///External Event Effect on TIOB
        enum class beevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace beevtValC{
            constexpr MPL::Value<beevtVal,beevtVal::none> none{};
            constexpr MPL::Value<beevtVal,beevtVal::set> set{};
            constexpr MPL::Value<beevtVal,beevtVal::clear> clear{};
            constexpr MPL::Value<beevtVal,beevtVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,beevtVal> beevt{}; 
        ///Software Trigger Effect on TIOB
        enum class bswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace bswtrgValC{
            constexpr MPL::Value<bswtrgVal,bswtrgVal::none> none{};
            constexpr MPL::Value<bswtrgVal,bswtrgVal::set> set{};
            constexpr MPL::Value<bswtrgVal,bswtrgVal::clear> clear{};
            constexpr MPL::Value<bswtrgVal,bswtrgVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,bswtrgVal> bswtrg{}; 
    }
    namespace Tc0Smmr0{    ///<Stepper Motor Mode Register (channel = 0)
        using Addr = Register::Address<0x40080008,0xfffffffc,0,unsigned>;
        ///Gray Count Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///DOWN Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> down{}; 
    }
    namespace Tc0Cv0{    ///<Counter Value (channel = 0)
        using Addr = Register::Address<0x40080010,0x00000000,0,unsigned>;
        ///Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cv{}; 
    }
    namespace Tc0Ra0{    ///<Register A (channel = 0)
        using Addr = Register::Address<0x40080014,0x00000000,0,unsigned>;
        ///Register A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
    }
    namespace Tc0Rb0{    ///<Register B (channel = 0)
        using Addr = Register::Address<0x40080018,0x00000000,0,unsigned>;
        ///Register B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
    }
    namespace Tc0Rc0{    ///<Register C (channel = 0)
        using Addr = Register::Address<0x4008001c,0x00000000,0,unsigned>;
        ///Register C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Tc0Sr0{    ///<Status Register (channel = 0)
        using Addr = Register::Address<0x40080020,0xfff8ff00,0,unsigned>;
        ///Counter Overflow Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        ///Clock Enabling Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clksta{}; 
        ///TIOA Mirror
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mtioa{}; 
        ///TIOB Mirror
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mtiob{}; 
    }
    namespace Tc0Ier0{    ///<Interrupt Enable Register (channel = 0)
        using Addr = Register::Address<0x40080024,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
    }
    namespace Tc0Idr0{    ///<Interrupt Disable Register (channel = 0)
        using Addr = Register::Address<0x40080028,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
    }
    namespace Tc0Imr0{    ///<Interrupt Mask Register (channel = 0)
        using Addr = Register::Address<0x4008002c,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
    }
    namespace Tc0Ccr1{    ///<Channel Control Register (channel = 1)
        using Addr = Register::Address<0x40080040,0xfffffff8,0,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Counter Clock Disable Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkdis{}; 
        ///Software Trigger Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrg{}; 
    }
    namespace Tc0Cmr1{    ///<Channel Mode Register (channel = 1)
        using Addr = Register::Address<0x40080044,0xfff03800,0,unsigned>;
        ///Clock Selection
        enum class tcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        namespace tcclksValC{
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock1> timerClock1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock2> timerClock2{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock3> timerClock3{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock4> timerClock4{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock5> timerClock5{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc0> xc0{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc1> xc1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,tcclksVal> tcclks{}; 
        ///Clock Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class burstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        namespace burstValC{
            constexpr MPL::Value<burstVal,burstVal::none> none{};
            constexpr MPL::Value<burstVal,burstVal::xc0> xc0{};
            constexpr MPL::Value<burstVal,burstVal::xc1> xc1{};
            constexpr MPL::Value<burstVal,burstVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,burstVal> burst{}; 
        ///Counter Clock Stopped with RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        ///Counter Clock Disable with RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        ///External Trigger Edge Selection
        enum class etrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        namespace etrgedgValC{
            constexpr MPL::Value<etrgedgVal,etrgedgVal::none> none{};
            constexpr MPL::Value<etrgedgVal,etrgedgVal::rising> rising{};
            constexpr MPL::Value<etrgedgVal,etrgedgVal::falling> falling{};
            constexpr MPL::Value<etrgedgVal,etrgedgVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,etrgedgVal> etrgedg{}; 
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        ///RC Compare Trigger Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        ///Waveform Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Loading Edge Selection
        enum class ldraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        namespace ldraValC{
            constexpr MPL::Value<ldraVal,ldraVal::none> none{};
            constexpr MPL::Value<ldraVal,ldraVal::rising> rising{};
            constexpr MPL::Value<ldraVal,ldraVal::falling> falling{};
            constexpr MPL::Value<ldraVal,ldraVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,ldraVal> ldra{}; 
        ///RB Loading Edge Selection
        enum class ldrbVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        namespace ldrbValC{
            constexpr MPL::Value<ldrbVal,ldrbVal::none> none{};
            constexpr MPL::Value<ldrbVal,ldrbVal::rising> rising{};
            constexpr MPL::Value<ldrbVal,ldrbVal::falling> falling{};
            constexpr MPL::Value<ldrbVal,ldrbVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,ldrbVal> ldrb{}; 
    }
    namespace Tc0Cmr1WaveEq1{    ///<Channel Mode Register (channel = 1)
        using Addr = Register::Address<0x40080044,0x00000000,0,unsigned>;
        ///Clock Selection
        enum class tcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        namespace tcclksValC{
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock1> timerClock1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock2> timerClock2{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock3> timerClock3{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock4> timerClock4{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock5> timerClock5{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc0> xc0{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc1> xc1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,tcclksVal> tcclks{}; 
        ///Clock Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class burstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        namespace burstValC{
            constexpr MPL::Value<burstVal,burstVal::none> none{};
            constexpr MPL::Value<burstVal,burstVal::xc0> xc0{};
            constexpr MPL::Value<burstVal,burstVal::xc1> xc1{};
            constexpr MPL::Value<burstVal,burstVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,burstVal> burst{}; 
        ///Counter Clock Stopped with RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        ///Counter Clock Disable with RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        ///External Event Edge Selection
        enum class eevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        namespace eevtedgValC{
            constexpr MPL::Value<eevtedgVal,eevtedgVal::none> none{};
            constexpr MPL::Value<eevtedgVal,eevtedgVal::rising> rising{};
            constexpr MPL::Value<eevtedgVal,eevtedgVal::falling> falling{};
            constexpr MPL::Value<eevtedgVal,eevtedgVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,eevtedgVal> eevtedg{}; 
        ///External Event Selection
        enum class eevtVal {
            tiob=0x00000000,     ///<TIOB
            xc0=0x00000001,     ///<XC0
            xc1=0x00000002,     ///<XC1
            xc2=0x00000003,     ///<XC2
        };
        namespace eevtValC{
            constexpr MPL::Value<eevtVal,eevtVal::tiob> tiob{};
            constexpr MPL::Value<eevtVal,eevtVal::xc0> xc0{};
            constexpr MPL::Value<eevtVal,eevtVal::xc1> xc1{};
            constexpr MPL::Value<eevtVal,eevtVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,eevtVal> eevt{}; 
        ///External Event Trigger Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        ///Waveform Selection
        enum class wavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        namespace wavselValC{
            constexpr MPL::Value<wavselVal,wavselVal::up> up{};
            constexpr MPL::Value<wavselVal,wavselVal::updown> updown{};
            constexpr MPL::Value<wavselVal,wavselVal::upRc> upRc{};
            constexpr MPL::Value<wavselVal,wavselVal::updownRc> updownRc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,wavselVal> wavsel{}; 
        ///Waveform Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Compare Effect on TIOA
        enum class acpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace acpaValC{
            constexpr MPL::Value<acpaVal,acpaVal::none> none{};
            constexpr MPL::Value<acpaVal,acpaVal::set> set{};
            constexpr MPL::Value<acpaVal,acpaVal::clear> clear{};
            constexpr MPL::Value<acpaVal,acpaVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,acpaVal> acpa{}; 
        ///RC Compare Effect on TIOA
        enum class acpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace acpcValC{
            constexpr MPL::Value<acpcVal,acpcVal::none> none{};
            constexpr MPL::Value<acpcVal,acpcVal::set> set{};
            constexpr MPL::Value<acpcVal,acpcVal::clear> clear{};
            constexpr MPL::Value<acpcVal,acpcVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,acpcVal> acpc{}; 
        ///External Event Effect on TIOA
        enum class aeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace aeevtValC{
            constexpr MPL::Value<aeevtVal,aeevtVal::none> none{};
            constexpr MPL::Value<aeevtVal,aeevtVal::set> set{};
            constexpr MPL::Value<aeevtVal,aeevtVal::clear> clear{};
            constexpr MPL::Value<aeevtVal,aeevtVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,aeevtVal> aeevt{}; 
        ///Software Trigger Effect on TIOA
        enum class aswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace aswtrgValC{
            constexpr MPL::Value<aswtrgVal,aswtrgVal::none> none{};
            constexpr MPL::Value<aswtrgVal,aswtrgVal::set> set{};
            constexpr MPL::Value<aswtrgVal,aswtrgVal::clear> clear{};
            constexpr MPL::Value<aswtrgVal,aswtrgVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,aswtrgVal> aswtrg{}; 
        ///RB Compare Effect on TIOB
        enum class bcpbVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace bcpbValC{
            constexpr MPL::Value<bcpbVal,bcpbVal::none> none{};
            constexpr MPL::Value<bcpbVal,bcpbVal::set> set{};
            constexpr MPL::Value<bcpbVal,bcpbVal::clear> clear{};
            constexpr MPL::Value<bcpbVal,bcpbVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,bcpbVal> bcpb{}; 
        ///RC Compare Effect on TIOB
        enum class bcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace bcpcValC{
            constexpr MPL::Value<bcpcVal,bcpcVal::none> none{};
            constexpr MPL::Value<bcpcVal,bcpcVal::set> set{};
            constexpr MPL::Value<bcpcVal,bcpcVal::clear> clear{};
            constexpr MPL::Value<bcpcVal,bcpcVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,bcpcVal> bcpc{}; 
        ///External Event Effect on TIOB
        enum class beevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace beevtValC{
            constexpr MPL::Value<beevtVal,beevtVal::none> none{};
            constexpr MPL::Value<beevtVal,beevtVal::set> set{};
            constexpr MPL::Value<beevtVal,beevtVal::clear> clear{};
            constexpr MPL::Value<beevtVal,beevtVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,beevtVal> beevt{}; 
        ///Software Trigger Effect on TIOB
        enum class bswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace bswtrgValC{
            constexpr MPL::Value<bswtrgVal,bswtrgVal::none> none{};
            constexpr MPL::Value<bswtrgVal,bswtrgVal::set> set{};
            constexpr MPL::Value<bswtrgVal,bswtrgVal::clear> clear{};
            constexpr MPL::Value<bswtrgVal,bswtrgVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,bswtrgVal> bswtrg{}; 
    }
    namespace Tc0Smmr1{    ///<Stepper Motor Mode Register (channel = 1)
        using Addr = Register::Address<0x40080048,0xfffffffc,0,unsigned>;
        ///Gray Count Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///DOWN Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> down{}; 
    }
    namespace Tc0Cv1{    ///<Counter Value (channel = 1)
        using Addr = Register::Address<0x40080050,0x00000000,0,unsigned>;
        ///Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cv{}; 
    }
    namespace Tc0Ra1{    ///<Register A (channel = 1)
        using Addr = Register::Address<0x40080054,0x00000000,0,unsigned>;
        ///Register A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
    }
    namespace Tc0Rb1{    ///<Register B (channel = 1)
        using Addr = Register::Address<0x40080058,0x00000000,0,unsigned>;
        ///Register B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
    }
    namespace Tc0Rc1{    ///<Register C (channel = 1)
        using Addr = Register::Address<0x4008005c,0x00000000,0,unsigned>;
        ///Register C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Tc0Sr1{    ///<Status Register (channel = 1)
        using Addr = Register::Address<0x40080060,0xfff8ff00,0,unsigned>;
        ///Counter Overflow Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        ///Clock Enabling Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clksta{}; 
        ///TIOA Mirror
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mtioa{}; 
        ///TIOB Mirror
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mtiob{}; 
    }
    namespace Tc0Ier1{    ///<Interrupt Enable Register (channel = 1)
        using Addr = Register::Address<0x40080064,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
    }
    namespace Tc0Idr1{    ///<Interrupt Disable Register (channel = 1)
        using Addr = Register::Address<0x40080068,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
    }
    namespace Tc0Imr1{    ///<Interrupt Mask Register (channel = 1)
        using Addr = Register::Address<0x4008006c,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
    }
    namespace Tc0Ccr2{    ///<Channel Control Register (channel = 2)
        using Addr = Register::Address<0x40080080,0xfffffff8,0,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Counter Clock Disable Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkdis{}; 
        ///Software Trigger Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrg{}; 
    }
    namespace Tc0Cmr2{    ///<Channel Mode Register (channel = 2)
        using Addr = Register::Address<0x40080084,0xfff03800,0,unsigned>;
        ///Clock Selection
        enum class tcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        namespace tcclksValC{
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock1> timerClock1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock2> timerClock2{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock3> timerClock3{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock4> timerClock4{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock5> timerClock5{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc0> xc0{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc1> xc1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,tcclksVal> tcclks{}; 
        ///Clock Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class burstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        namespace burstValC{
            constexpr MPL::Value<burstVal,burstVal::none> none{};
            constexpr MPL::Value<burstVal,burstVal::xc0> xc0{};
            constexpr MPL::Value<burstVal,burstVal::xc1> xc1{};
            constexpr MPL::Value<burstVal,burstVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,burstVal> burst{}; 
        ///Counter Clock Stopped with RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        ///Counter Clock Disable with RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        ///External Trigger Edge Selection
        enum class etrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        namespace etrgedgValC{
            constexpr MPL::Value<etrgedgVal,etrgedgVal::none> none{};
            constexpr MPL::Value<etrgedgVal,etrgedgVal::rising> rising{};
            constexpr MPL::Value<etrgedgVal,etrgedgVal::falling> falling{};
            constexpr MPL::Value<etrgedgVal,etrgedgVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,etrgedgVal> etrgedg{}; 
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        ///RC Compare Trigger Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        ///Waveform Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Loading Edge Selection
        enum class ldraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        namespace ldraValC{
            constexpr MPL::Value<ldraVal,ldraVal::none> none{};
            constexpr MPL::Value<ldraVal,ldraVal::rising> rising{};
            constexpr MPL::Value<ldraVal,ldraVal::falling> falling{};
            constexpr MPL::Value<ldraVal,ldraVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,ldraVal> ldra{}; 
        ///RB Loading Edge Selection
        enum class ldrbVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        namespace ldrbValC{
            constexpr MPL::Value<ldrbVal,ldrbVal::none> none{};
            constexpr MPL::Value<ldrbVal,ldrbVal::rising> rising{};
            constexpr MPL::Value<ldrbVal,ldrbVal::falling> falling{};
            constexpr MPL::Value<ldrbVal,ldrbVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,ldrbVal> ldrb{}; 
    }
    namespace Tc0Cmr2WaveEq1{    ///<Channel Mode Register (channel = 2)
        using Addr = Register::Address<0x40080084,0x00000000,0,unsigned>;
        ///Clock Selection
        enum class tcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        namespace tcclksValC{
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock1> timerClock1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock2> timerClock2{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock3> timerClock3{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock4> timerClock4{};
            constexpr MPL::Value<tcclksVal,tcclksVal::timerClock5> timerClock5{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc0> xc0{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc1> xc1{};
            constexpr MPL::Value<tcclksVal,tcclksVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,tcclksVal> tcclks{}; 
        ///Clock Invert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class burstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        namespace burstValC{
            constexpr MPL::Value<burstVal,burstVal::none> none{};
            constexpr MPL::Value<burstVal,burstVal::xc0> xc0{};
            constexpr MPL::Value<burstVal,burstVal::xc1> xc1{};
            constexpr MPL::Value<burstVal,burstVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,burstVal> burst{}; 
        ///Counter Clock Stopped with RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        ///Counter Clock Disable with RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        ///External Event Edge Selection
        enum class eevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        namespace eevtedgValC{
            constexpr MPL::Value<eevtedgVal,eevtedgVal::none> none{};
            constexpr MPL::Value<eevtedgVal,eevtedgVal::rising> rising{};
            constexpr MPL::Value<eevtedgVal,eevtedgVal::falling> falling{};
            constexpr MPL::Value<eevtedgVal,eevtedgVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,eevtedgVal> eevtedg{}; 
        ///External Event Selection
        enum class eevtVal {
            tiob=0x00000000,     ///<TIOB
            xc0=0x00000001,     ///<XC0
            xc1=0x00000002,     ///<XC1
            xc2=0x00000003,     ///<XC2
        };
        namespace eevtValC{
            constexpr MPL::Value<eevtVal,eevtVal::tiob> tiob{};
            constexpr MPL::Value<eevtVal,eevtVal::xc0> xc0{};
            constexpr MPL::Value<eevtVal,eevtVal::xc1> xc1{};
            constexpr MPL::Value<eevtVal,eevtVal::xc2> xc2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,eevtVal> eevt{}; 
        ///External Event Trigger Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        ///Waveform Selection
        enum class wavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        namespace wavselValC{
            constexpr MPL::Value<wavselVal,wavselVal::up> up{};
            constexpr MPL::Value<wavselVal,wavselVal::updown> updown{};
            constexpr MPL::Value<wavselVal,wavselVal::upRc> upRc{};
            constexpr MPL::Value<wavselVal,wavselVal::updownRc> updownRc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,wavselVal> wavsel{}; 
        ///Waveform Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Compare Effect on TIOA
        enum class acpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace acpaValC{
            constexpr MPL::Value<acpaVal,acpaVal::none> none{};
            constexpr MPL::Value<acpaVal,acpaVal::set> set{};
            constexpr MPL::Value<acpaVal,acpaVal::clear> clear{};
            constexpr MPL::Value<acpaVal,acpaVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,acpaVal> acpa{}; 
        ///RC Compare Effect on TIOA
        enum class acpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace acpcValC{
            constexpr MPL::Value<acpcVal,acpcVal::none> none{};
            constexpr MPL::Value<acpcVal,acpcVal::set> set{};
            constexpr MPL::Value<acpcVal,acpcVal::clear> clear{};
            constexpr MPL::Value<acpcVal,acpcVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,acpcVal> acpc{}; 
        ///External Event Effect on TIOA
        enum class aeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace aeevtValC{
            constexpr MPL::Value<aeevtVal,aeevtVal::none> none{};
            constexpr MPL::Value<aeevtVal,aeevtVal::set> set{};
            constexpr MPL::Value<aeevtVal,aeevtVal::clear> clear{};
            constexpr MPL::Value<aeevtVal,aeevtVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,aeevtVal> aeevt{}; 
        ///Software Trigger Effect on TIOA
        enum class aswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace aswtrgValC{
            constexpr MPL::Value<aswtrgVal,aswtrgVal::none> none{};
            constexpr MPL::Value<aswtrgVal,aswtrgVal::set> set{};
            constexpr MPL::Value<aswtrgVal,aswtrgVal::clear> clear{};
            constexpr MPL::Value<aswtrgVal,aswtrgVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,aswtrgVal> aswtrg{}; 
        ///RB Compare Effect on TIOB
        enum class bcpbVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace bcpbValC{
            constexpr MPL::Value<bcpbVal,bcpbVal::none> none{};
            constexpr MPL::Value<bcpbVal,bcpbVal::set> set{};
            constexpr MPL::Value<bcpbVal,bcpbVal::clear> clear{};
            constexpr MPL::Value<bcpbVal,bcpbVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,bcpbVal> bcpb{}; 
        ///RC Compare Effect on TIOB
        enum class bcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace bcpcValC{
            constexpr MPL::Value<bcpcVal,bcpcVal::none> none{};
            constexpr MPL::Value<bcpcVal,bcpcVal::set> set{};
            constexpr MPL::Value<bcpcVal,bcpcVal::clear> clear{};
            constexpr MPL::Value<bcpcVal,bcpcVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,bcpcVal> bcpc{}; 
        ///External Event Effect on TIOB
        enum class beevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace beevtValC{
            constexpr MPL::Value<beevtVal,beevtVal::none> none{};
            constexpr MPL::Value<beevtVal,beevtVal::set> set{};
            constexpr MPL::Value<beevtVal,beevtVal::clear> clear{};
            constexpr MPL::Value<beevtVal,beevtVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,beevtVal> beevt{}; 
        ///Software Trigger Effect on TIOB
        enum class bswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        namespace bswtrgValC{
            constexpr MPL::Value<bswtrgVal,bswtrgVal::none> none{};
            constexpr MPL::Value<bswtrgVal,bswtrgVal::set> set{};
            constexpr MPL::Value<bswtrgVal,bswtrgVal::clear> clear{};
            constexpr MPL::Value<bswtrgVal,bswtrgVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,bswtrgVal> bswtrg{}; 
    }
    namespace Tc0Smmr2{    ///<Stepper Motor Mode Register (channel = 2)
        using Addr = Register::Address<0x40080088,0xfffffffc,0,unsigned>;
        ///Gray Count Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///DOWN Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> down{}; 
    }
    namespace Tc0Cv2{    ///<Counter Value (channel = 2)
        using Addr = Register::Address<0x40080090,0x00000000,0,unsigned>;
        ///Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cv{}; 
    }
    namespace Tc0Ra2{    ///<Register A (channel = 2)
        using Addr = Register::Address<0x40080094,0x00000000,0,unsigned>;
        ///Register A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
    }
    namespace Tc0Rb2{    ///<Register B (channel = 2)
        using Addr = Register::Address<0x40080098,0x00000000,0,unsigned>;
        ///Register B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
    }
    namespace Tc0Rc2{    ///<Register C (channel = 2)
        using Addr = Register::Address<0x4008009c,0x00000000,0,unsigned>;
        ///Register C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Tc0Sr2{    ///<Status Register (channel = 2)
        using Addr = Register::Address<0x400800a0,0xfff8ff00,0,unsigned>;
        ///Counter Overflow Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        ///Clock Enabling Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clksta{}; 
        ///TIOA Mirror
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mtioa{}; 
        ///TIOB Mirror
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mtiob{}; 
    }
    namespace Tc0Ier2{    ///<Interrupt Enable Register (channel = 2)
        using Addr = Register::Address<0x400800a4,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
    }
    namespace Tc0Idr2{    ///<Interrupt Disable Register (channel = 2)
        using Addr = Register::Address<0x400800a8,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
    }
    namespace Tc0Imr2{    ///<Interrupt Mask Register (channel = 2)
        using Addr = Register::Address<0x400800ac,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
    }
    namespace Tc0Bcr{    ///<Block Control Register
        using Addr = Register::Address<0x400800c0,0xfffffffe,0,unsigned>;
        ///Synchro Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sync{}; 
    }
    namespace Tc0Bmr{    ///<Block Mode Register
        using Addr = Register::Address<0x400800c4,0xfc0400c0,0,unsigned>;
        ///External Clock Signal 0 Selection
        enum class tc0xc0sVal {
            tclk0=0x00000000,     ///<Signal connected to XC0: TCLK0
            tioa1=0x00000002,     ///<Signal connected to XC0: TIOA1
            tioa2=0x00000003,     ///<Signal connected to XC0: TIOA2
        };
        namespace tc0xc0sValC{
            constexpr MPL::Value<tc0xc0sVal,tc0xc0sVal::tclk0> tclk0{};
            constexpr MPL::Value<tc0xc0sVal,tc0xc0sVal::tioa1> tioa1{};
            constexpr MPL::Value<tc0xc0sVal,tc0xc0sVal::tioa2> tioa2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,tc0xc0sVal> tc0xc0s{}; 
        ///External Clock Signal 1 Selection
        enum class tc1xc1sVal {
            tclk1=0x00000000,     ///<Signal connected to XC1: TCLK1
            tioa0=0x00000002,     ///<Signal connected to XC1: TIOA0
            tioa2=0x00000003,     ///<Signal connected to XC1: TIOA2
        };
        namespace tc1xc1sValC{
            constexpr MPL::Value<tc1xc1sVal,tc1xc1sVal::tclk1> tclk1{};
            constexpr MPL::Value<tc1xc1sVal,tc1xc1sVal::tioa0> tioa0{};
            constexpr MPL::Value<tc1xc1sVal,tc1xc1sVal::tioa2> tioa2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,tc1xc1sVal> tc1xc1s{}; 
        ///External Clock Signal 2 Selection
        enum class tc2xc2sVal {
            tclk2=0x00000000,     ///<Signal connected to XC2: TCLK2
            tioa1=0x00000002,     ///<Signal connected to XC2: TIOA1
            tioa2=0x00000003,     ///<Signal connected to XC2: TIOA2
        };
        namespace tc2xc2sValC{
            constexpr MPL::Value<tc2xc2sVal,tc2xc2sVal::tclk2> tclk2{};
            constexpr MPL::Value<tc2xc2sVal,tc2xc2sVal::tioa1> tioa1{};
            constexpr MPL::Value<tc2xc2sVal,tc2xc2sVal::tioa2> tioa2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,tc2xc2sVal> tc2xc2s{}; 
        ///Quadrature Decoder ENabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qden{}; 
        ///POSition ENabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> posen{}; 
        ///SPEED ENabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> speeden{}; 
        ///Quadrature Decoding TRANSparent
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> qdtrans{}; 
        ///EDGe on PHA count mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> edgpha{}; 
        ///INVerted phA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> inva{}; 
        ///INVerted phB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> invb{}; 
        ///INVerted InDeX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> invidx{}; 
        ///SWAP PHA and PHB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swap{}; 
        ///InDeX pin is PHB pin
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> idxphb{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> filter{}; 
        ///MAXimum FILTer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> maxfilt{}; 
    }
    namespace Tc0Qier{    ///<QDEC Interrupt Enable Register
        using Addr = Register::Address<0x400800c8,0xfffffff8,0,unsigned>;
        ///InDeX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idx{}; 
        ///DIRection CHanGe
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirchg{}; 
        ///Quadrature ERRor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qerr{}; 
    }
    namespace Tc0Qidr{    ///<QDEC Interrupt Disable Register
        using Addr = Register::Address<0x400800cc,0xfffffff8,0,unsigned>;
        ///InDeX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idx{}; 
        ///DIRection CHanGe
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirchg{}; 
        ///Quadrature ERRor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qerr{}; 
    }
    namespace Tc0Qimr{    ///<QDEC Interrupt Mask Register
        using Addr = Register::Address<0x400800d0,0xfffffff8,0,unsigned>;
        ///InDeX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idx{}; 
        ///DIRection CHanGe
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirchg{}; 
        ///Quadrature ERRor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qerr{}; 
    }
    namespace Tc0Qisr{    ///<QDEC Interrupt Status Register
        using Addr = Register::Address<0x400800d4,0xfffffef8,0,unsigned>;
        ///InDeX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idx{}; 
        ///DIRection CHanGe
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirchg{}; 
        ///Quadrature ERRor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qerr{}; 
        ///DIRection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dir{}; 
    }
    namespace Tc0Fmr{    ///<Fault Mode Register
        using Addr = Register::Address<0x400800d8,0xfffffffc,0,unsigned>;
        ///ENable Compare Fault Channel 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> encf0{}; 
        ///ENable Compare Fault Channel 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> encf1{}; 
    }
    namespace Tc0Wpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400800e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
}
