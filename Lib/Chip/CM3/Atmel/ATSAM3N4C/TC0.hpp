#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Timer Counter 0
    namespace Tc0Ccr0{    ///<Channel Control Register (channel = 0)
        using Addr = Register::Address<0x40010000,0xfffffff8,0,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Counter Clock Disable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkdis{}; 
        namespace ClkdisValC{
        }
        ///Software Trigger Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrg{}; 
        namespace SwtrgValC{
        }
    }
    namespace Tc0Cmr0{    ///<Channel Mode Register (channel = 0)
        using Addr = Register::Address<0x40010004,0xfff03800,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        namespace LdbstopValC{
        }
        ///Counter Clock Disable with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        namespace LdbdisValC{
        }
        ///External Trigger Edge Selection
        enum class EtrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EtrgedgVal> etrgedg{}; 
        namespace EtrgedgValC{
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::none> none{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::edge> edge{};
        }
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        namespace AbetrgValC{
        }
        ///RC Compare Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        namespace CpctrgValC{
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Loading Edge Selection
        enum class LdraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,LdraVal> ldra{}; 
        namespace LdraValC{
            constexpr Register::FieldValue<decltype(ldra),LdraVal::none> none{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::edge> edge{};
        }
        ///RB Loading Edge Selection
        enum class LdrbVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,LdrbVal> ldrb{}; 
        namespace LdrbValC{
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::none> none{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::edge> edge{};
        }
    }
    namespace Tc0Cmr0WaveEq1{    ///<Channel Mode Register (channel = 0)
        using Addr = Register::Address<0x40010004,0x00000000,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        namespace CpcstopValC{
        }
        ///Counter Clock Disable with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        namespace CpcdisValC{
        }
        ///External Event Edge Selection
        enum class EevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EevtedgVal> eevtedg{}; 
        namespace EevtedgValC{
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::none> none{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::edge> edge{};
        }
        ///External Event Selection
        enum class EevtVal {
            tiob=0x00000000,     ///<TIOB
            xc0=0x00000001,     ///<XC0
            xc1=0x00000002,     ///<XC1
            xc2=0x00000003,     ///<XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EevtVal> eevt{}; 
        namespace EevtValC{
            constexpr Register::FieldValue<decltype(eevt),EevtVal::tiob> tiob{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc2> xc2{};
        }
        ///External Event Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        namespace EnetrgValC{
        }
        ///Waveform Selection
        enum class WavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,WavselVal> wavsel{}; 
        namespace WavselValC{
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::up> up{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updown> updown{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::upRc> upRc{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updownRc> updownRc{};
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Compare Effect on TIOA
        enum class AcpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,AcpaVal> acpa{}; 
        namespace AcpaValC{
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::none> none{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::set> set{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOA
        enum class AcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,AcpcVal> acpc{}; 
        namespace AcpcValC{
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOA
        enum class AeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AeevtVal> aeevt{}; 
        namespace AeevtValC{
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOA
        enum class AswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,AswtrgVal> aswtrg{}; 
        namespace AswtrgValC{
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::toggle> toggle{};
        }
        ///RB Compare Effect on TIOB
        enum class BcpbVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,BcpbVal> bcpb{}; 
        namespace BcpbValC{
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOB
        enum class BcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,BcpcVal> bcpc{}; 
        namespace BcpcValC{
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOB
        enum class BeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,BeevtVal> beevt{}; 
        namespace BeevtValC{
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOB
        enum class BswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,BswtrgVal> bswtrg{}; 
        namespace BswtrgValC{
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::toggle> toggle{};
        }
    }
    namespace Tc0Smmr0{    ///<Stepper Motor Mode Register (channel = 0)
        using Addr = Register::Address<0x40010008,0xfffffffc,0,unsigned>;
        ///Gray Count Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen{}; 
        namespace GcenValC{
        }
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> down{}; 
        namespace DownValC{
        }
    }
    namespace Tc0Cv0{    ///<Counter Value (channel = 0)
        using Addr = Register::Address<0x40010010,0x00000000,0,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
    }
    namespace Tc0Ra0{    ///<Register A (channel = 0)
        using Addr = Register::Address<0x40010014,0x00000000,0,unsigned>;
        ///Register A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
        namespace RaValC{
        }
    }
    namespace Tc0Rb0{    ///<Register B (channel = 0)
        using Addr = Register::Address<0x40010018,0x00000000,0,unsigned>;
        ///Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
        namespace RbValC{
        }
    }
    namespace Tc0Rc0{    ///<Register C (channel = 0)
        using Addr = Register::Address<0x4001001c,0x00000000,0,unsigned>;
        ///Register C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
        namespace RcValC{
        }
    }
    namespace Tc0Sr0{    ///<Status Register (channel = 0)
        using Addr = Register::Address<0x40010020,0xfff8ff00,0,unsigned>;
        ///Counter Overflow Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
        ///Clock Enabling Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clksta{}; 
        namespace ClkstaValC{
        }
        ///TIOA Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mtioa{}; 
        namespace MtioaValC{
        }
        ///TIOB Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mtiob{}; 
        namespace MtiobValC{
        }
    }
    namespace Tc0Ier0{    ///<Interrupt Enable Register (channel = 0)
        using Addr = Register::Address<0x40010024,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Idr0{    ///<Interrupt Disable Register (channel = 0)
        using Addr = Register::Address<0x40010028,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Imr0{    ///<Interrupt Mask Register (channel = 0)
        using Addr = Register::Address<0x4001002c,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Ccr1{    ///<Channel Control Register (channel = 1)
        using Addr = Register::Address<0x40010040,0xfffffff8,0,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Counter Clock Disable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkdis{}; 
        namespace ClkdisValC{
        }
        ///Software Trigger Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrg{}; 
        namespace SwtrgValC{
        }
    }
    namespace Tc0Cmr1{    ///<Channel Mode Register (channel = 1)
        using Addr = Register::Address<0x40010044,0xfff03800,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        namespace LdbstopValC{
        }
        ///Counter Clock Disable with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        namespace LdbdisValC{
        }
        ///External Trigger Edge Selection
        enum class EtrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EtrgedgVal> etrgedg{}; 
        namespace EtrgedgValC{
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::none> none{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::edge> edge{};
        }
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        namespace AbetrgValC{
        }
        ///RC Compare Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        namespace CpctrgValC{
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Loading Edge Selection
        enum class LdraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,LdraVal> ldra{}; 
        namespace LdraValC{
            constexpr Register::FieldValue<decltype(ldra),LdraVal::none> none{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::edge> edge{};
        }
        ///RB Loading Edge Selection
        enum class LdrbVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,LdrbVal> ldrb{}; 
        namespace LdrbValC{
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::none> none{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::edge> edge{};
        }
    }
    namespace Tc0Cmr1WaveEq1{    ///<Channel Mode Register (channel = 1)
        using Addr = Register::Address<0x40010044,0x00000000,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        namespace CpcstopValC{
        }
        ///Counter Clock Disable with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        namespace CpcdisValC{
        }
        ///External Event Edge Selection
        enum class EevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EevtedgVal> eevtedg{}; 
        namespace EevtedgValC{
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::none> none{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::edge> edge{};
        }
        ///External Event Selection
        enum class EevtVal {
            tiob=0x00000000,     ///<TIOB
            xc0=0x00000001,     ///<XC0
            xc1=0x00000002,     ///<XC1
            xc2=0x00000003,     ///<XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EevtVal> eevt{}; 
        namespace EevtValC{
            constexpr Register::FieldValue<decltype(eevt),EevtVal::tiob> tiob{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc2> xc2{};
        }
        ///External Event Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        namespace EnetrgValC{
        }
        ///Waveform Selection
        enum class WavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,WavselVal> wavsel{}; 
        namespace WavselValC{
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::up> up{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updown> updown{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::upRc> upRc{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updownRc> updownRc{};
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Compare Effect on TIOA
        enum class AcpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,AcpaVal> acpa{}; 
        namespace AcpaValC{
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::none> none{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::set> set{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOA
        enum class AcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,AcpcVal> acpc{}; 
        namespace AcpcValC{
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOA
        enum class AeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AeevtVal> aeevt{}; 
        namespace AeevtValC{
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOA
        enum class AswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,AswtrgVal> aswtrg{}; 
        namespace AswtrgValC{
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::toggle> toggle{};
        }
        ///RB Compare Effect on TIOB
        enum class BcpbVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,BcpbVal> bcpb{}; 
        namespace BcpbValC{
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOB
        enum class BcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,BcpcVal> bcpc{}; 
        namespace BcpcValC{
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOB
        enum class BeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,BeevtVal> beevt{}; 
        namespace BeevtValC{
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOB
        enum class BswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,BswtrgVal> bswtrg{}; 
        namespace BswtrgValC{
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::toggle> toggle{};
        }
    }
    namespace Tc0Smmr1{    ///<Stepper Motor Mode Register (channel = 1)
        using Addr = Register::Address<0x40010048,0xfffffffc,0,unsigned>;
        ///Gray Count Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen{}; 
        namespace GcenValC{
        }
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> down{}; 
        namespace DownValC{
        }
    }
    namespace Tc0Cv1{    ///<Counter Value (channel = 1)
        using Addr = Register::Address<0x40010050,0x00000000,0,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
    }
    namespace Tc0Ra1{    ///<Register A (channel = 1)
        using Addr = Register::Address<0x40010054,0x00000000,0,unsigned>;
        ///Register A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
        namespace RaValC{
        }
    }
    namespace Tc0Rb1{    ///<Register B (channel = 1)
        using Addr = Register::Address<0x40010058,0x00000000,0,unsigned>;
        ///Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
        namespace RbValC{
        }
    }
    namespace Tc0Rc1{    ///<Register C (channel = 1)
        using Addr = Register::Address<0x4001005c,0x00000000,0,unsigned>;
        ///Register C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
        namespace RcValC{
        }
    }
    namespace Tc0Sr1{    ///<Status Register (channel = 1)
        using Addr = Register::Address<0x40010060,0xfff8ff00,0,unsigned>;
        ///Counter Overflow Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
        ///Clock Enabling Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clksta{}; 
        namespace ClkstaValC{
        }
        ///TIOA Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mtioa{}; 
        namespace MtioaValC{
        }
        ///TIOB Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mtiob{}; 
        namespace MtiobValC{
        }
    }
    namespace Tc0Ier1{    ///<Interrupt Enable Register (channel = 1)
        using Addr = Register::Address<0x40010064,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Idr1{    ///<Interrupt Disable Register (channel = 1)
        using Addr = Register::Address<0x40010068,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Imr1{    ///<Interrupt Mask Register (channel = 1)
        using Addr = Register::Address<0x4001006c,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Ccr2{    ///<Channel Control Register (channel = 2)
        using Addr = Register::Address<0x40010080,0xfffffff8,0,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Counter Clock Disable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkdis{}; 
        namespace ClkdisValC{
        }
        ///Software Trigger Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrg{}; 
        namespace SwtrgValC{
        }
    }
    namespace Tc0Cmr2{    ///<Channel Mode Register (channel = 2)
        using Addr = Register::Address<0x40010084,0xfff03800,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        namespace LdbstopValC{
        }
        ///Counter Clock Disable with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        namespace LdbdisValC{
        }
        ///External Trigger Edge Selection
        enum class EtrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EtrgedgVal> etrgedg{}; 
        namespace EtrgedgValC{
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::none> none{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::edge> edge{};
        }
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        namespace AbetrgValC{
        }
        ///RC Compare Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        namespace CpctrgValC{
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Loading Edge Selection
        enum class LdraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,LdraVal> ldra{}; 
        namespace LdraValC{
            constexpr Register::FieldValue<decltype(ldra),LdraVal::none> none{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::edge> edge{};
        }
        ///RB Loading Edge Selection
        enum class LdrbVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,LdrbVal> ldrb{}; 
        namespace LdrbValC{
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::none> none{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::edge> edge{};
        }
    }
    namespace Tc0Cmr2WaveEq1{    ///<Channel Mode Register (channel = 2)
        using Addr = Register::Address<0x40010084,0x00000000,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        namespace CpcstopValC{
        }
        ///Counter Clock Disable with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        namespace CpcdisValC{
        }
        ///External Event Edge Selection
        enum class EevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EevtedgVal> eevtedg{}; 
        namespace EevtedgValC{
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::none> none{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::edge> edge{};
        }
        ///External Event Selection
        enum class EevtVal {
            tiob=0x00000000,     ///<TIOB
            xc0=0x00000001,     ///<XC0
            xc1=0x00000002,     ///<XC1
            xc2=0x00000003,     ///<XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EevtVal> eevt{}; 
        namespace EevtValC{
            constexpr Register::FieldValue<decltype(eevt),EevtVal::tiob> tiob{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc2> xc2{};
        }
        ///External Event Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        namespace EnetrgValC{
        }
        ///Waveform Selection
        enum class WavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,WavselVal> wavsel{}; 
        namespace WavselValC{
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::up> up{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updown> updown{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::upRc> upRc{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updownRc> updownRc{};
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Compare Effect on TIOA
        enum class AcpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,AcpaVal> acpa{}; 
        namespace AcpaValC{
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::none> none{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::set> set{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOA
        enum class AcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,AcpcVal> acpc{}; 
        namespace AcpcValC{
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOA
        enum class AeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AeevtVal> aeevt{}; 
        namespace AeevtValC{
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOA
        enum class AswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,AswtrgVal> aswtrg{}; 
        namespace AswtrgValC{
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::toggle> toggle{};
        }
        ///RB Compare Effect on TIOB
        enum class BcpbVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,BcpbVal> bcpb{}; 
        namespace BcpbValC{
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOB
        enum class BcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,BcpcVal> bcpc{}; 
        namespace BcpcValC{
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOB
        enum class BeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,BeevtVal> beevt{}; 
        namespace BeevtValC{
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOB
        enum class BswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,BswtrgVal> bswtrg{}; 
        namespace BswtrgValC{
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::toggle> toggle{};
        }
    }
    namespace Tc0Smmr2{    ///<Stepper Motor Mode Register (channel = 2)
        using Addr = Register::Address<0x40010088,0xfffffffc,0,unsigned>;
        ///Gray Count Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen{}; 
        namespace GcenValC{
        }
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> down{}; 
        namespace DownValC{
        }
    }
    namespace Tc0Cv2{    ///<Counter Value (channel = 2)
        using Addr = Register::Address<0x40010090,0x00000000,0,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
    }
    namespace Tc0Ra2{    ///<Register A (channel = 2)
        using Addr = Register::Address<0x40010094,0x00000000,0,unsigned>;
        ///Register A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
        namespace RaValC{
        }
    }
    namespace Tc0Rb2{    ///<Register B (channel = 2)
        using Addr = Register::Address<0x40010098,0x00000000,0,unsigned>;
        ///Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
        namespace RbValC{
        }
    }
    namespace Tc0Rc2{    ///<Register C (channel = 2)
        using Addr = Register::Address<0x4001009c,0x00000000,0,unsigned>;
        ///Register C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
        namespace RcValC{
        }
    }
    namespace Tc0Sr2{    ///<Status Register (channel = 2)
        using Addr = Register::Address<0x400100a0,0xfff8ff00,0,unsigned>;
        ///Counter Overflow Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
        ///Clock Enabling Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clksta{}; 
        namespace ClkstaValC{
        }
        ///TIOA Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mtioa{}; 
        namespace MtioaValC{
        }
        ///TIOB Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mtiob{}; 
        namespace MtiobValC{
        }
    }
    namespace Tc0Ier2{    ///<Interrupt Enable Register (channel = 2)
        using Addr = Register::Address<0x400100a4,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Idr2{    ///<Interrupt Disable Register (channel = 2)
        using Addr = Register::Address<0x400100a8,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Imr2{    ///<Interrupt Mask Register (channel = 2)
        using Addr = Register::Address<0x400100ac,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Bcr{    ///<Block Control Register
        using Addr = Register::Address<0x400100c0,0xfffffffe,0,unsigned>;
        ///Synchro Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sync{}; 
        namespace SyncValC{
        }
    }
    namespace Tc0Bmr{    ///<Block Mode Register
        using Addr = Register::Address<0x400100c4,0xfc0400c0,0,unsigned>;
        ///External Clock Signal 0 Selection
        enum class Tc0xc0sVal {
            tclk0=0x00000000,     ///<Signal connected to XC0: TCLK0
            tioa1=0x00000002,     ///<Signal connected to XC0: TIOA1
            tioa2=0x00000003,     ///<Signal connected to XC0: TIOA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Tc0xc0sVal> tc0xc0s{}; 
        namespace Tc0xc0sValC{
            constexpr Register::FieldValue<decltype(tc0xc0s),Tc0xc0sVal::tclk0> tclk0{};
            constexpr Register::FieldValue<decltype(tc0xc0s),Tc0xc0sVal::tioa1> tioa1{};
            constexpr Register::FieldValue<decltype(tc0xc0s),Tc0xc0sVal::tioa2> tioa2{};
        }
        ///External Clock Signal 1 Selection
        enum class Tc1xc1sVal {
            tclk1=0x00000000,     ///<Signal connected to XC1: TCLK1
            tioa0=0x00000002,     ///<Signal connected to XC1: TIOA0
            tioa2=0x00000003,     ///<Signal connected to XC1: TIOA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Tc1xc1sVal> tc1xc1s{}; 
        namespace Tc1xc1sValC{
            constexpr Register::FieldValue<decltype(tc1xc1s),Tc1xc1sVal::tclk1> tclk1{};
            constexpr Register::FieldValue<decltype(tc1xc1s),Tc1xc1sVal::tioa0> tioa0{};
            constexpr Register::FieldValue<decltype(tc1xc1s),Tc1xc1sVal::tioa2> tioa2{};
        }
        ///External Clock Signal 2 Selection
        enum class Tc2xc2sVal {
            tclk2=0x00000000,     ///<Signal connected to XC2: TCLK2
            tioa1=0x00000002,     ///<Signal connected to XC2: TIOA1
            tioa2=0x00000003,     ///<Signal connected to XC2: TIOA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Tc2xc2sVal> tc2xc2s{}; 
        namespace Tc2xc2sValC{
            constexpr Register::FieldValue<decltype(tc2xc2s),Tc2xc2sVal::tclk2> tclk2{};
            constexpr Register::FieldValue<decltype(tc2xc2s),Tc2xc2sVal::tioa1> tioa1{};
            constexpr Register::FieldValue<decltype(tc2xc2s),Tc2xc2sVal::tioa2> tioa2{};
        }
        ///Quadrature Decoder ENabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qden{}; 
        namespace QdenValC{
        }
        ///POSition ENabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> posen{}; 
        namespace PosenValC{
        }
        ///SPEED ENabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> speeden{}; 
        namespace SpeedenValC{
        }
        ///Quadrature Decoding TRANSparent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> qdtrans{}; 
        namespace QdtransValC{
        }
        ///EDGe on PHA count mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> edgpha{}; 
        namespace EdgphaValC{
        }
        ///INVerted phA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> inva{}; 
        namespace InvaValC{
        }
        ///INVerted phB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> invb{}; 
        namespace InvbValC{
        }
        ///INVerted InDeX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> invidx{}; 
        namespace InvidxValC{
        }
        ///SWAP PHA and PHB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swap{}; 
        namespace SwapValC{
        }
        ///InDeX pin is PHB pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> idxphb{}; 
        namespace IdxphbValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> filter{}; 
        namespace FilterValC{
        }
        ///MAXimum FILTer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> maxfilt{}; 
        namespace MaxfiltValC{
        }
    }
    namespace Tc0Qier{    ///<QDEC Interrupt Enable Register
        using Addr = Register::Address<0x400100c8,0xfffffff8,0,unsigned>;
        ///InDeX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idx{}; 
        namespace IdxValC{
        }
        ///DIRection CHanGe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirchg{}; 
        namespace DirchgValC{
        }
        ///Quadrature ERRor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qerr{}; 
        namespace QerrValC{
        }
    }
    namespace Tc0Qidr{    ///<QDEC Interrupt Disable Register
        using Addr = Register::Address<0x400100cc,0xfffffff8,0,unsigned>;
        ///InDeX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idx{}; 
        namespace IdxValC{
        }
        ///DIRection CHanGe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirchg{}; 
        namespace DirchgValC{
        }
        ///Quadrature ERRor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qerr{}; 
        namespace QerrValC{
        }
    }
    namespace Tc0Qimr{    ///<QDEC Interrupt Mask Register
        using Addr = Register::Address<0x400100d0,0xfffffff8,0,unsigned>;
        ///InDeX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idx{}; 
        namespace IdxValC{
        }
        ///DIRection CHanGe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirchg{}; 
        namespace DirchgValC{
        }
        ///Quadrature ERRor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qerr{}; 
        namespace QerrValC{
        }
    }
    namespace Tc0Qisr{    ///<QDEC Interrupt Status Register
        using Addr = Register::Address<0x400100d4,0xfffffef8,0,unsigned>;
        ///InDeX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idx{}; 
        namespace IdxValC{
        }
        ///DIRection CHanGe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirchg{}; 
        namespace DirchgValC{
        }
        ///Quadrature ERRor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qerr{}; 
        namespace QerrValC{
        }
        ///DIRection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
    }
    namespace Tc0Wpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400100e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
}
