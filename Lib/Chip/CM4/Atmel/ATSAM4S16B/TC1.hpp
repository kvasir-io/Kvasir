#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Timer Counter 1
    namespace Tc1Ccr0{    ///<Channel Control Register (channel = 0)
        using Addr = Register::Address<0x40014000,0xfffffff8,0x00000000,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clken{}; 
        ///Counter Clock Disable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clkdis{}; 
        ///Software Trigger Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swtrg{}; 
    }
    namespace Tc1Cmr0{    ///<Channel Mode Register (channel = 0)
        using Addr = Register::Address<0x40014004,0xfff03800,0x00000000,unsigned>;
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
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        ///Counter Clock Disable with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        ///External Trigger Edge Selection
        enum class EtrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EtrgedgVal> etrgedg{}; 
        namespace EtrgedgValC{
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::none> none{};
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::edge> edge{};
        }
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        ///RC Compare Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Loading Edge Selection
        enum class LdraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,LdraVal> ldra{}; 
        namespace LdraValC{
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::none> none{};
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::edge> edge{};
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
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::none> none{};
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::edge> edge{};
        }
    }
    namespace Tc1Cmr0WaveEq1{    ///<Channel Mode Register (channel = 0)
        using Addr = Register::Address<0x40014004,0x00000000,0x00000000,unsigned>;
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
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        ///Counter Clock Disable with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        ///External Event Edge Selection
        enum class EevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EevtedgVal> eevtedg{}; 
        namespace EevtedgValC{
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::none> none{};
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::edge> edge{};
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
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::tiob> tiob{};
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::xc2> xc2{};
        }
        ///External Event Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        ///Waveform Selection
        enum class WavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,WavselVal> wavsel{}; 
        namespace WavselValC{
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::up> up{};
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::updown> updown{};
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::upRc> upRc{};
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::updownRc> updownRc{};
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Compare Effect on TIOA
        enum class AcpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,AcpaVal> acpa{}; 
        namespace AcpaValC{
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::none> none{};
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::set> set{};
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::toggle> toggle{};
        }
    }
    namespace Tc1Smmr0{    ///<Stepper Motor Mode Register (channel = 0)
        using Addr = Register::Address<0x40014008,0xfffffffc,0x00000000,unsigned>;
        ///Gray Count Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> down{}; 
    }
    namespace Tc1Cv0{    ///<Counter Value (channel = 0)
        using Addr = Register::Address<0x40014010,0x00000000,0x00000000,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cv{}; 
    }
    namespace Tc1Ra0{    ///<Register A (channel = 0)
        using Addr = Register::Address<0x40014014,0x00000000,0x00000000,unsigned>;
        ///Register A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
    }
    namespace Tc1Rb0{    ///<Register B (channel = 0)
        using Addr = Register::Address<0x40014018,0x00000000,0x00000000,unsigned>;
        ///Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
    }
    namespace Tc1Rc0{    ///<Register C (channel = 0)
        using Addr = Register::Address<0x4001401c,0x00000000,0x00000000,unsigned>;
        ///Register C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Tc1Sr0{    ///<Status Register (channel = 0)
        using Addr = Register::Address<0x40014020,0xfff8ff00,0x00000000,unsigned>;
        ///Counter Overflow Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
        ///Clock Enabling Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clksta{}; 
        ///TIOA Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtioa{}; 
        ///TIOB Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtiob{}; 
    }
    namespace Tc1Ier0{    ///<Interrupt Enable Register (channel = 0)
        using Addr = Register::Address<0x40014024,0xffffff00,0x00000000,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
    }
    namespace Tc1Idr0{    ///<Interrupt Disable Register (channel = 0)
        using Addr = Register::Address<0x40014028,0xffffff00,0x00000000,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
    }
    namespace Tc1Imr0{    ///<Interrupt Mask Register (channel = 0)
        using Addr = Register::Address<0x4001402c,0xffffff00,0x00000000,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
    }
    namespace Tc1Ccr1{    ///<Channel Control Register (channel = 1)
        using Addr = Register::Address<0x40014040,0xfffffff8,0x00000000,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clken{}; 
        ///Counter Clock Disable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clkdis{}; 
        ///Software Trigger Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swtrg{}; 
    }
    namespace Tc1Cmr1{    ///<Channel Mode Register (channel = 1)
        using Addr = Register::Address<0x40014044,0xfff03800,0x00000000,unsigned>;
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
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        ///Counter Clock Disable with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        ///External Trigger Edge Selection
        enum class EtrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EtrgedgVal> etrgedg{}; 
        namespace EtrgedgValC{
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::none> none{};
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::edge> edge{};
        }
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        ///RC Compare Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Loading Edge Selection
        enum class LdraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,LdraVal> ldra{}; 
        namespace LdraValC{
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::none> none{};
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::edge> edge{};
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
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::none> none{};
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::edge> edge{};
        }
    }
    namespace Tc1Cmr1WaveEq1{    ///<Channel Mode Register (channel = 1)
        using Addr = Register::Address<0x40014044,0x00000000,0x00000000,unsigned>;
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
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        ///Counter Clock Disable with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        ///External Event Edge Selection
        enum class EevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EevtedgVal> eevtedg{}; 
        namespace EevtedgValC{
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::none> none{};
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::edge> edge{};
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
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::tiob> tiob{};
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::xc2> xc2{};
        }
        ///External Event Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        ///Waveform Selection
        enum class WavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,WavselVal> wavsel{}; 
        namespace WavselValC{
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::up> up{};
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::updown> updown{};
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::upRc> upRc{};
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::updownRc> updownRc{};
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Compare Effect on TIOA
        enum class AcpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,AcpaVal> acpa{}; 
        namespace AcpaValC{
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::none> none{};
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::set> set{};
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::toggle> toggle{};
        }
    }
    namespace Tc1Smmr1{    ///<Stepper Motor Mode Register (channel = 1)
        using Addr = Register::Address<0x40014048,0xfffffffc,0x00000000,unsigned>;
        ///Gray Count Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> down{}; 
    }
    namespace Tc1Cv1{    ///<Counter Value (channel = 1)
        using Addr = Register::Address<0x40014050,0x00000000,0x00000000,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cv{}; 
    }
    namespace Tc1Ra1{    ///<Register A (channel = 1)
        using Addr = Register::Address<0x40014054,0x00000000,0x00000000,unsigned>;
        ///Register A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
    }
    namespace Tc1Rb1{    ///<Register B (channel = 1)
        using Addr = Register::Address<0x40014058,0x00000000,0x00000000,unsigned>;
        ///Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
    }
    namespace Tc1Rc1{    ///<Register C (channel = 1)
        using Addr = Register::Address<0x4001405c,0x00000000,0x00000000,unsigned>;
        ///Register C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Tc1Sr1{    ///<Status Register (channel = 1)
        using Addr = Register::Address<0x40014060,0xfff8ff00,0x00000000,unsigned>;
        ///Counter Overflow Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
        ///Clock Enabling Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clksta{}; 
        ///TIOA Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtioa{}; 
        ///TIOB Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtiob{}; 
    }
    namespace Tc1Ier1{    ///<Interrupt Enable Register (channel = 1)
        using Addr = Register::Address<0x40014064,0xffffff00,0x00000000,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
    }
    namespace Tc1Idr1{    ///<Interrupt Disable Register (channel = 1)
        using Addr = Register::Address<0x40014068,0xffffff00,0x00000000,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
    }
    namespace Tc1Imr1{    ///<Interrupt Mask Register (channel = 1)
        using Addr = Register::Address<0x4001406c,0xffffff00,0x00000000,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
    }
    namespace Tc1Ccr2{    ///<Channel Control Register (channel = 2)
        using Addr = Register::Address<0x40014080,0xfffffff8,0x00000000,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clken{}; 
        ///Counter Clock Disable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clkdis{}; 
        ///Software Trigger Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swtrg{}; 
    }
    namespace Tc1Cmr2{    ///<Channel Mode Register (channel = 2)
        using Addr = Register::Address<0x40014084,0xfff03800,0x00000000,unsigned>;
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
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        ///Counter Clock Disable with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        ///External Trigger Edge Selection
        enum class EtrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EtrgedgVal> etrgedg{}; 
        namespace EtrgedgValC{
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::none> none{};
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(etrgedg)::Type,EtrgedgVal::edge> edge{};
        }
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        ///RC Compare Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Loading Edge Selection
        enum class LdraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,LdraVal> ldra{}; 
        namespace LdraValC{
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::none> none{};
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldra)::Type,LdraVal::edge> edge{};
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
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::none> none{};
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldrb)::Type,LdrbVal::edge> edge{};
        }
    }
    namespace Tc1Cmr2WaveEq1{    ///<Channel Mode Register (channel = 2)
        using Addr = Register::Address<0x40014084,0x00000000,0x00000000,unsigned>;
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
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks)::Type,TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        ///Counter Clock Disable with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        ///External Event Edge Selection
        enum class EevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EevtedgVal> eevtedg{}; 
        namespace EevtedgValC{
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::none> none{};
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(eevtedg)::Type,EevtedgVal::edge> edge{};
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
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::tiob> tiob{};
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(eevt)::Type,EevtVal::xc2> xc2{};
        }
        ///External Event Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        ///Waveform Selection
        enum class WavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,WavselVal> wavsel{}; 
        namespace WavselValC{
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::up> up{};
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::updown> updown{};
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::upRc> upRc{};
            constexpr Register::FieldValue<decltype(wavsel)::Type,WavselVal::updownRc> updownRc{};
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        ///RA Compare Effect on TIOA
        enum class AcpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,AcpaVal> acpa{}; 
        namespace AcpaValC{
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::none> none{};
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::set> set{};
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpa)::Type,AcpaVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpc)::Type,AcpcVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aeevt)::Type,AeevtVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aswtrg)::Type,AswtrgVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpb)::Type,BcpbVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpc)::Type,BcpcVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(beevt)::Type,BeevtVal::toggle> toggle{};
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
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bswtrg)::Type,BswtrgVal::toggle> toggle{};
        }
    }
    namespace Tc1Smmr2{    ///<Stepper Motor Mode Register (channel = 2)
        using Addr = Register::Address<0x40014088,0xfffffffc,0x00000000,unsigned>;
        ///Gray Count Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> down{}; 
    }
    namespace Tc1Cv2{    ///<Counter Value (channel = 2)
        using Addr = Register::Address<0x40014090,0x00000000,0x00000000,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cv{}; 
    }
    namespace Tc1Ra2{    ///<Register A (channel = 2)
        using Addr = Register::Address<0x40014094,0x00000000,0x00000000,unsigned>;
        ///Register A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
    }
    namespace Tc1Rb2{    ///<Register B (channel = 2)
        using Addr = Register::Address<0x40014098,0x00000000,0x00000000,unsigned>;
        ///Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
    }
    namespace Tc1Rc2{    ///<Register C (channel = 2)
        using Addr = Register::Address<0x4001409c,0x00000000,0x00000000,unsigned>;
        ///Register C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Tc1Sr2{    ///<Status Register (channel = 2)
        using Addr = Register::Address<0x400140a0,0xfff8ff00,0x00000000,unsigned>;
        ///Counter Overflow Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
        ///Clock Enabling Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clksta{}; 
        ///TIOA Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtioa{}; 
        ///TIOB Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtiob{}; 
    }
    namespace Tc1Ier2{    ///<Interrupt Enable Register (channel = 2)
        using Addr = Register::Address<0x400140a4,0xffffff00,0x00000000,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
    }
    namespace Tc1Idr2{    ///<Interrupt Disable Register (channel = 2)
        using Addr = Register::Address<0x400140a8,0xffffff00,0x00000000,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
    }
    namespace Tc1Imr2{    ///<Interrupt Mask Register (channel = 2)
        using Addr = Register::Address<0x400140ac,0xffffff00,0x00000000,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> covfs{}; 
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lovrs{}; 
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpas{}; 
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpbs{}; 
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpcs{}; 
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldras{}; 
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ldrbs{}; 
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etrgs{}; 
    }
    namespace Tc1Bcr{    ///<Block Control Register
        using Addr = Register::Address<0x400140c0,0xfffffffe,0x00000000,unsigned>;
        ///Synchro Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sync{}; 
    }
    namespace Tc1Bmr{    ///<Block Mode Register
        using Addr = Register::Address<0x400140c4,0xfc0400c0,0x00000000,unsigned>;
        ///External Clock Signal 0 Selection
        enum class Tc0xc0sVal {
            tclk0=0x00000000,     ///<Signal connected to XC0: TCLK0
            tioa1=0x00000002,     ///<Signal connected to XC0: TIOA1
            tioa2=0x00000003,     ///<Signal connected to XC0: TIOA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Tc0xc0sVal> tc0xc0s{}; 
        namespace Tc0xc0sValC{
            constexpr Register::FieldValue<decltype(tc0xc0s)::Type,Tc0xc0sVal::tclk0> tclk0{};
            constexpr Register::FieldValue<decltype(tc0xc0s)::Type,Tc0xc0sVal::tioa1> tioa1{};
            constexpr Register::FieldValue<decltype(tc0xc0s)::Type,Tc0xc0sVal::tioa2> tioa2{};
        }
        ///External Clock Signal 1 Selection
        enum class Tc1xc1sVal {
            tclk1=0x00000000,     ///<Signal connected to XC1: TCLK1
            tioa0=0x00000002,     ///<Signal connected to XC1: TIOA0
            tioa2=0x00000003,     ///<Signal connected to XC1: TIOA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Tc1xc1sVal> tc1xc1s{}; 
        namespace Tc1xc1sValC{
            constexpr Register::FieldValue<decltype(tc1xc1s)::Type,Tc1xc1sVal::tclk1> tclk1{};
            constexpr Register::FieldValue<decltype(tc1xc1s)::Type,Tc1xc1sVal::tioa0> tioa0{};
            constexpr Register::FieldValue<decltype(tc1xc1s)::Type,Tc1xc1sVal::tioa2> tioa2{};
        }
        ///External Clock Signal 2 Selection
        enum class Tc2xc2sVal {
            tclk2=0x00000000,     ///<Signal connected to XC2: TCLK2
            tioa1=0x00000002,     ///<Signal connected to XC2: TIOA1
            tioa2=0x00000003,     ///<Signal connected to XC2: TIOA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Tc2xc2sVal> tc2xc2s{}; 
        namespace Tc2xc2sValC{
            constexpr Register::FieldValue<decltype(tc2xc2s)::Type,Tc2xc2sVal::tclk2> tclk2{};
            constexpr Register::FieldValue<decltype(tc2xc2s)::Type,Tc2xc2sVal::tioa1> tioa1{};
            constexpr Register::FieldValue<decltype(tc2xc2s)::Type,Tc2xc2sVal::tioa2> tioa2{};
        }
        ///Quadrature Decoder ENabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qden{}; 
        ///POSition ENabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> posen{}; 
        ///SPEED ENabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> speeden{}; 
        ///Quadrature Decoding TRANSparent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> qdtrans{}; 
        ///EDGe on PHA count mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> edgpha{}; 
        ///INVerted phA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> inva{}; 
        ///INVerted phB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> invb{}; 
        ///INVerted InDeX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> invidx{}; 
        ///SWAP PHA and PHB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swap{}; 
        ///InDeX pin is PHB pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> idxphb{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> filter{}; 
        ///MAXimum FILTer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> maxfilt{}; 
    }
    namespace Tc1Qier{    ///<QDEC Interrupt Enable Register
        using Addr = Register::Address<0x400140c8,0xfffffff8,0x00000000,unsigned>;
        ///InDeX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idx{}; 
        ///DIRection CHanGe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dirchg{}; 
        ///Quadrature ERRor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qerr{}; 
    }
    namespace Tc1Qidr{    ///<QDEC Interrupt Disable Register
        using Addr = Register::Address<0x400140cc,0xfffffff8,0x00000000,unsigned>;
        ///InDeX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idx{}; 
        ///DIRection CHanGe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dirchg{}; 
        ///Quadrature ERRor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qerr{}; 
    }
    namespace Tc1Qimr{    ///<QDEC Interrupt Mask Register
        using Addr = Register::Address<0x400140d0,0xfffffff8,0x00000000,unsigned>;
        ///InDeX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idx{}; 
        ///DIRection CHanGe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dirchg{}; 
        ///Quadrature ERRor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qerr{}; 
    }
    namespace Tc1Qisr{    ///<QDEC Interrupt Status Register
        using Addr = Register::Address<0x400140d4,0xfffffef8,0x00000000,unsigned>;
        ///InDeX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idx{}; 
        ///DIRection CHanGe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dirchg{}; 
        ///Quadrature ERRor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qerr{}; 
        ///DIRection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dir{}; 
    }
    namespace Tc1Fmr{    ///<Fault Mode Register
        using Addr = Register::Address<0x400140d8,0xfffffffc,0x00000000,unsigned>;
        ///ENable Compare Fault Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> encf0{}; 
        ///ENable Compare Fault Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> encf1{}; 
    }
    namespace Tc1Wpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400140e4,0x000000fe,0x00000000,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
}
