#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=Falcon Chapter title=Global Input Multiplexer Array (GIMA) Modification date=3/25/2011 Major revision=0 Minor revision=4 
    namespace GimaCap00In{    ///<Timer 0 CAP0_0  capture input multiplexer
        using Addr = Register::Address<0x400c7000,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap01In{    ///<Timer 0 CAP0_1  capture input multiplexer
        using Addr = Register::Address<0x400c7004,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap02In{    ///<Timer 0 CAP0_2 capture  input multiplexer
        using Addr = Register::Address<0x400c7008,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap03In{    ///<Timer 0 CAP0_3 capture input multiplexer
        using Addr = Register::Address<0x400c700c,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap10In{    ///<Timer 1 CAP1_0 capture  input multiplexer
        using Addr = Register::Address<0x400c7010,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap11In{    ///<Timer 1 CAP1_1 capture  input multiplexer
        using Addr = Register::Address<0x400c7014,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap12In{    ///<Timer 1 CAP1_2 capture  input multiplexer
        using Addr = Register::Address<0x400c7018,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap13In{    ///<Timer 1 CAP1_3 capture  input multiplexer
        using Addr = Register::Address<0x400c701c,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap20In{    ///<Timer 2 CAP2_0 capture  input multiplexer
        using Addr = Register::Address<0x400c7020,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap21In{    ///<Timer 2 CAP2_1 capture  input multiplexer
        using Addr = Register::Address<0x400c7024,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap22In{    ///<Timer 2 CAP2_2 capture  input multiplexer
        using Addr = Register::Address<0x400c7028,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap23In{    ///<Timer 2 CAP2_3 capture  input multiplexer
        using Addr = Register::Address<0x400c702c,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap30In{    ///<Timer 3 CAP3_0 capture  input multiplexer
        using Addr = Register::Address<0x400c7030,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap31In{    ///<Timer 3 CAP3_1 capture  input multiplexer
        using Addr = Register::Address<0x400c7034,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap32In{    ///<Timer 3 CAP3_2 capture  input multiplexer
        using Addr = Register::Address<0x400c7038,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCap33In{    ///<Timer 3 CAP3_3 capture  input multiplexer
        using Addr = Register::Address<0x400c703c,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCtin0In{    ///<SCT CTIN_0 capture  input multiplexer
        using Addr = Register::Address<0x400c7040,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCtin1In{    ///<SCT CTIN_1 capture  input multiplexer
        using Addr = Register::Address<0x400c7044,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCtin2In{    ///<SCT CTIN_2 capture  input multiplexer
        using Addr = Register::Address<0x400c7048,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCtin3In{    ///<SCT CTIN_3 capture  input multiplexer
        using Addr = Register::Address<0x400c704c,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCtin4In{    ///<SCT CTIN_4 capture  input multiplexer
        using Addr = Register::Address<0x400c7050,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCtin5In{    ///<SCT CTIN_5 capture  input multiplexer
        using Addr = Register::Address<0x400c7054,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCtin6In{    ///<SCT CTIN_6 capture  input multiplexer
        using Addr = Register::Address<0x400c7058,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaCtin7In{    ///<SCT CTIN_7 capture  input multiplexer
        using Addr = Register::Address<0x400c705c,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaVadcTriggerIn{    ///<ADC trigger  input multiplexer
        using Addr = Register::Address<0x400c7060,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0xA to 0xF are reserved.
        enum class SelectVal {
            gpio628=0x00000000,     ///<GPIO6[28]
            gpio53=0x00000001,     ///<GPIO5[3]
            mcob2=0x00000005,     ///<MCOB2
            ctout0ort0Mat0=0x00000006,     ///<CTOUT_0 or T0_MAT0
            ctout8ort2Mat0=0x00000007,     ///<CTOUT_8 or T2_MAT0
            t0Mat0=0x00000008,     ///<T0_MAT0
            t2Mat0=0x00000009,     ///<T2_MAT0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,SelectVal> select{}; 
        namespace SelectValC{
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::gpio628> gpio628{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::gpio53> gpio53{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::mcob2> mcob2{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::ctout0ort0Mat0> ctout0ort0Mat0{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::ctout8ort2Mat0> ctout8ort2Mat0{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::t0Mat0> t0Mat0{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::t2Mat0> t2Mat0{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaEventrouter13In{    ///<Event router   input 13  multiplexer
        using Addr = Register::Address<0x400c7064,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaEventrouter14In{    ///<Event router   input 14  multiplexer
        using Addr = Register::Address<0x400c7068,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaEventrouter16In{    ///<Event router   input 16  multiplexer
        using Addr = Register::Address<0x400c706c,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x2 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaAdcstart0In{    ///<ADC start0   input   multiplexer
        using Addr = Register::Address<0x400c7070,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x2 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GimaAdcstart1In{    ///<ADC start1  input   multiplexer
        using Addr = Register::Address<0x400c7074,0x00000000,0x00000000,unsigned>;
        ///Invert input
        enum class InvVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::noinvert> noinvert{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::invert> invert{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noedge> noedge{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingedge> risingedge{};
        }
        ///Enable 2ff synchronization
        enum class SynchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disable> disable{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enable> enable{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enable> enable{};
        }
        ///Select input. Values 0x2 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
